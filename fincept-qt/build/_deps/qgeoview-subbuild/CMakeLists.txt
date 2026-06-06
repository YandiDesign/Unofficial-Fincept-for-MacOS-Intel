# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 4.3.3)

# Reject any attempt to use a toolchain file. We must not use one because
# we could be downloading it here. If the CMAKE_TOOLCHAIN_FILE environment
# variable is set, the cache variable will have been initialized from it.
unset(CMAKE_TOOLCHAIN_FILE CACHE)
unset(ENV{CMAKE_TOOLCHAIN_FILE})

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(qgeoview-populate NONE)


# Pass through things we've already detected in the main project to avoid
# paying the cost of redetecting them again in ExternalProject_Add()
set(GIT_EXECUTABLE [==[/usr/local/bin/git]==])
set(Git_VERSION [==[2.50.0]==])
set_property(GLOBAL PROPERTY _CMAKE_FindGit_GIT_EXECUTABLE_VERSION
  [==[/usr/local/bin/git;2.50.0]==]
)


include(ExternalProject)
ExternalProject_Add(qgeoview-populate
                     "UPDATE_DISCONNECTED" "True" "GIT_REPOSITORY" "https://github.com/AmonRaNet/QGeoView.git" "EXTERNALPROJECT_INTERNAL_ARGUMENT_SEPARATOR" "GIT_TAG" "4b2c52c80940e1073c259ded1a57df83036ba1c9" "GIT_SHALLOW" "TRUE" "PATCH_COMMAND" "/usr/local/bin/cmake" "-DFILE=<SOURCE_DIR>/lib/CMakeLists.txt" "-P" "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/cmake/patches/qgeoview_remove_agl.cmake"
                    SOURCE_DIR          "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qgeoview-src"
                    BINARY_DIR          "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qgeoview-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)


