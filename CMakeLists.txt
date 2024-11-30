cmake_minimum_required(VERSION 3.5.0)
set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})
project(lab_6 VERSION ${PROJECT_VESRION})

add_executable(lab_6 main.cpp)

SET(TARGET_H classes\\doc.h
             classes\\object.h
             classes\\circle.h
             classes\\controler.h
)
SET(TARGET_SRC classes\\doc.cpp
               classes\\object.cpp
               classes\\circle.cpp
               classes\\controler.cpp
)

set_target_properties(lab_6 PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)

if (MSVC)
    target_compile_options(lab_6 PRIVATE
        /W4
    )
else ()
    target_compile_options(lab_6 PRIVATE
        -Wall -Wextra 
    )
endif()

install(TARGETS lab_6 RUNTIME DESTINATION bin)

if (${CMAKE_SYSTEM} MATCHES "Linux")
    set(CPACK_GENERATOR DEB)
else ()
    set(CPACK_GENERATOR ZIP)
endif()

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
