cmake_minimum_required(VERSION 3.12)
include(pico_sdk_import.cmake tusb_config.h)


set(projname "picoMIDIborg")

project(${projname} C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

#include(example_auto_set_url.cmake)

add_executable(${projname}
        main.c
        extrafunc.c
        )

target_link_libraries(${projname} pico_stdlib tinyusb_device tinyusb_board)
pico_add_extra_outputs(${projname})
include_directories(include)