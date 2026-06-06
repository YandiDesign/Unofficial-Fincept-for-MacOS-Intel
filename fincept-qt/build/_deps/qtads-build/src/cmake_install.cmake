# Install script for directory: /Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtadvanceddocking-qt6" TYPE FILE FILES
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/ads_globals.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockAreaTabBar.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockAreaTitleBar.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockAreaTitleBar_p.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockAreaWidget.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockContainerWidget.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockManager.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockOverlay.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockSplitter.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockWidget.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockWidgetTab.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockingStateReader.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockFocusController.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/ElidingLabel.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/FloatingDockContainer.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/FloatingDragPreview.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/IconProvider.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/DockComponentsFactory.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/AutoHideSideBar.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/AutoHideTab.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/AutoHideDockContainer.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/PushButton.h"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/ResizeHandle.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "license" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ads/license" TYPE FILE FILES
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/../LICENSE"
    "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/../gnu-lgpl-v2.1.md"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/x64/lib/libqtadvanceddocking-qt6_static.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqtadvanceddocking-qt6_static.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqtadvanceddocking-qt6_static.a")
    execute_process(COMMAND "/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqtadvanceddocking-qt6_static.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake"
         "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6/adsTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-build/src/CMakeFiles/Export/2474d83cc2ab45303ccb90badc3f1894/adsTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE RENAME "qtadvanceddocking-qt6Config.cmake" FILES "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-src/src/qtadvanceddockingConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtadvanceddocking-qt6" TYPE FILE FILES "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-build/src/qtadvanceddocking-qt6ConfigVersion.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/yandidesign/download/FinceptTerminal-4.0.3/fincept-qt/build/_deps/qtads-build/src/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
