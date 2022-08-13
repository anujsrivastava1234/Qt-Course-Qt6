cmake_minimum_required(VERSION 3.16)

project(13-QmlComponetnsExample VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_executable(app13-QmlComponetnsExample
    main.cpp
)

qt_add_qml_module(app13-QmlComponetnsExample
    URI 13-QmlComponetnsExample
    VERSION 1.0
    QML_FILES main.qml Button.qml
)

set_target_properties(app13-QmlComponetnsExample PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(app13-QmlComponetnsExample
    PRIVATE Qt6::Quick)

install(TARGETS app13-QmlComponetnsExample
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
