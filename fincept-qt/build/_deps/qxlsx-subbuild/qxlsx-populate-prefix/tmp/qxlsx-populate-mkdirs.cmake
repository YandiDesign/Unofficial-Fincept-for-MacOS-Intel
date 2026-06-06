# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-src")
  file(MAKE_DIRECTORY "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-src")
endif()
file(MAKE_DIRECTORY
  "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-build"
  "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-subbuild/qxlsx-populate-prefix"
  "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-subbuild/qxlsx-populate-prefix/tmp"
  "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-subbuild/qxlsx-populate-prefix/src/qxlsx-populate-stamp"
  "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-subbuild/qxlsx-populate-prefix/src"
  "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-subbuild/qxlsx-populate-prefix/src/qxlsx-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-subbuild/qxlsx-populate-prefix/src/qxlsx-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qxlsx-subbuild/qxlsx-populate-prefix/src/qxlsx-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
