##########################################################
# Name : - CMakeLists.txt (Run)
# 
# 
# 
##########################################################
cmake_minimum_required(VERSION 2.8.11)

project(Utilities)
set(TOL ${CMAKE_CURRENT_SOURCE_DIR}/../../Danlawv2x_toolchain.cfg)

include(${TOL})
set(BIN_NAME "Run")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../../bin/)
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/run-cmd.c)

include_directories(${SOURCE_DIR})

file(REMOVE ${CMAKE_CURRENT_SOURCE_DIR}/Docs/asdadsd.cad)

link_directories("/opt/poky-danlaw-v2x/1.8.1/sysroots/cortexa9hf-vfp-neon-poky-linux-gnueabi/usr/lib")

add_executable (${BIN_NAME} ${SOURCE_DIR})

install (TARGETS ${BIN_NAME} DESTINATION ${EXECUTABLE_OUTPUT_PATH})
