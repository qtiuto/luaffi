
cmake_minimum_required ( VERSION 2.8 )

project(ffi)
if(ANDROID)
    set(LUA_LIBRARIES ${CMAKE_CURRENT_SOURCE_DIR}/../lua/${ANDROID_ABI}/libluadroid.so)
    set(LUA_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../lib/src/main/externalLib/lua)
else()
    find_package(Lua REQUIRED)
    set(FFITEST '1')
endif()

message(STATUS "LUA_INCLUDE_DIR: ${LUA_INCLUDE_DIR}")
message(STATUS "LUA_LIBRARIES  : ${LUA_LIBRARIES}")
message(STATUS "FFITEST:${FFITEST}")
message(STATUS "MSVC:${MSVC}")

set( DASM_DIR ${CMAKE_CURRENT_SOURCE_DIR}/dynasm )

# Dynasm
set ( DASM ${DASM_DIR}/dynasm.lua )

if ( APPLE )
    list ( APPEND LIBS m )
    add_definitions( -DLUA_USE_MACOSX )
elseif ( NOT WIN32 )
    list ( APPEND LIBS m )
    add_definitions( -DLUA_USE_LINUX )
endif ()

if (MSVC)
    add_definitions(-D_CRT_SECURE_NO_DEPRECATE)
    add_definitions(-DLUA_FFI_BUILD_AS_DLL)
    add_definitions(-D_CRT_STDIO_INLINE=__declspec\(dllexport\)__inline)
endif()

if (MSVC)
    set(CMAKE_C_FLAGS_DEBUG "/Od /D_DEBUG /MDd /Zi /RTC1 /EHsc")
    set(CMAKE_C_FLAGS_RELEASE "/DNDEBUG /O2 /MD /EHsc")
    set(CMAKE_C_FLAGS_RELWITHDEBINFO "/DNDEBUG /O2 /MD /Zi /EHsc")
    set(CMAKE_C_FLAGS_MINSIZEREL "/DNDEBUG /O2 /MD /EHsc")

    set(CMAKE_CXX_FLAGS "/EHsc")
    set(CMAKE_CXX_FLAGS_DEBUG "/Od /D_DEBUG /MDd /Zi /RTC1 /EHsc")
    set(CMAKE_CXX_FLAGS_RELEASE "/DNDEBUG /O2 /MD /EHsc")
    set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/DNDEBUG /O2 /MD /Zi /EHsc")
    set(CMAKE_CXX_FLAGS_MINSIZEREL "/DNDEBUG /O2 /MD /EHsc")

    # Disable signed/unsigned int conversion warnings.
    add_definitions("/wd4018")
    # Disable warning about using struct/class for the same symobl.
    add_definitions("/wd4099")
    # Disable performance warning about int-to-bool conversion.
    add_definitions("/wd4800")
    # Disable signed/unsigned int conversion warnings.
    add_definitions("/wd4018")
    # Disable warning about the insecurity of using "std::copy".
    add_definitions("/wd4996")
    add_definitions("/wd4291")
    add_definitions("/wd4624")
    add_definitions("/wd4141")
    add_definitions("/DLUA_COMPAT_5_2")
    add_definitions("/DLUA_COMPAT_5_1")
endif ()

if(ANDROID)
    add_definitions("-DFAKE_ANDROID_DL")
endif()

include_directories( ${LUA_INCLUDE_DIR} )
include_directories( ${DASM_DIR} )

if ((NOT (EXISTS ${CMAKE_SOURCE_DIR}/call_x86.h)) AND CMAKE_SYSTEM_PROCESSOR MATCHES "(x86)|(X86)|(amd64)|(AMD64)")
    add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/call_x86.h
            COMMAND lua ${DASM} -LN -D X32WIN -o ${CMAKE_SOURCE_DIR}/call_x86.h ${CMAKE_SOURCE_DIR}/call_x86.dasc
            DEPENDS ${CMAKE_SOURCE_DIR}/call_x86.dasc
            )
    add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/call_x64.h
            COMMAND lua ${DASM} -LN -D X64 -o ${CMAKE_SOURCE_DIR}/call_x64.h ${CMAKE_SOURCE_DIR}/call_x86.dasc
            DEPENDS ${CMAKE_SOURCE_DIR}/call_x86.dasc
            )
    add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/call_x64win.h
            COMMAND lua ${DASM} -LN -D X64 -D X64WIN -o ${CMAKE_SOURCE_DIR}/call_x64win.h ${CMAKE_SOURCE_DIR}/call_x86.dasc
            DEPENDS ${CMAKE_SOURCE_DIR}/call_x86.dasc
            )
    set (CALL_HEADERS
            ${CMAKE_SOURCE_DIR}/call_x86.h
            ${CMAKE_SOURCE_DIR}/call_x64.h
            ${CMAKE_SOURCE_DIR}/call_x64win.h
            )
elseif ((NOT (EXISTS ${CMAKE_SOURCE_DIR}/call_arm.h)) AND CMAKE_SYSTEM_PROCESSOR MATCHES "arm")
    add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/call_arm.h
            COMMAND lua ${DASM} -LN -o ${CMAKE_SOURCE_DIR}/call_arm.h ${CMAKE_SOURCE_DIR}/call_arm.dasc
            DEPENDS ${CMAKE_SOURCE_DIR}/call_arm.dasc
            )
    add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/call_arm_hf.h
            COMMAND lua ${DASM} -LN -D ARM_HF -o ${CMAKE_SOURCE_DIR}/call_arm_hf.h ${CMAKE_SOURCE_DIR}/call_arm.dasc
            DEPENDS ${CMAKE_SOURCE_DIR}/call_arm.dasc
            )

    set (CALL_HEADERS
            ${CMAKE_SOURCE_DIR}/call_arm.h
            ${CMAKE_SOURCE_DIR}/call_arm_hf.h
            )
elseif ((NOT (EXISTS ${CMAKE_SOURCE_DIR}/call_arm64.h)) AND CMAKE_SYSTEM_PROCESSOR MATCHES "(aarch64)|(arm64)|(AARCH64)|(ARM64)")
    add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/call_arm64.h
            COMMAND lua ${DASM} -LN -o ${CMAKE_SOURCE_DIR}/call_arm64.h ${CMAKE_SOURCE_DIR}/call_arm64.dasc
            DEPENDS ${CMAKE_SOURCE_DIR}/call_arm64.dasc
            )
    set (CALL_HEADERS
            ${CMAKE_SOURCE_DIR}/call_arm64.h
            )
else()
    # message()
endif()

set (HEADERS
        ${CALL_HEADERS}
        ffi.h)

set (SRCS
        call.c
        ctype.c
        ffi.c
        parser.c)

add_library(ffi SHARED
        ${HEADERS}
        ${SRCS} )
target_link_libraries(ffi ${LUA_LIBRARIES})
set_target_properties(ffi PROPERTIES PREFIX "")
if (APPLE)
    set_target_properties(ffi PROPERTIES LINK_FLAGS "-undefined dynamic_lookup")
endif()
if(NOT ANDROID)
    install(TARGETS ffi
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)
endif()
if (FFITEST STREQUAL '1')
    add_library(libffitest SHARED
            test.c)
    if (MSVC)
        set_source_files_properties(test.c PROPERTIES COMPILE_FLAGS /Gd)
        file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/luaffitest.lua DESTINATION ${PROJECT_BINARY_DIR}/Debug)
        file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/luaffitest.lua DESTINATION ${PROJECT_BINARY_DIR}/Release)
    else()
        if(NOT (${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${PROJECT_BINARY_DIR}))
            file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/luaffitest.lua DESTINATION ${PROJECT_BINARY_DIR}/)
        endif()
    endif ()

    target_link_libraries(libffitest ffi)
    set_target_properties(libffitest PROPERTIES PREFIX "")
    if (APPLE)
        set_target_properties(libffitest PROPERTIES LINK_FLAGS "-undefined dynamic_lookup")
    endif ()
    add_executable(test_runner test_runner.c)
    target_link_libraries(test_runner ${LUA_LIBRARIES})
endif ()