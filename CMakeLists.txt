cmake_minimum_required(VERSION 3.9)
project(hcg)


#GLFW additions
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

#GLFW paths
add_subdirectory(3rdparty/glfw)
include_directories(3rdparty/glfw)
include_directories(3rdparty/glfw/deps)
include_directories(3rdparty/glfw/include)

#GLFW executables. Note: tinycthread works only in .c, not in .cpp
set(GLAD "${GLFW_SOURCE_DIR}/deps/glad/glad.h"
         "${GLFW_SOURCE_DIR}/deps/glad.c")
# set(GETOPT "${GLFW_SOURCE_DIR}/deps/getopt.h"
#            "${GLFW_SOURCE_DIR}/deps/getopt.c")
# set(TINYCTHREAD "${GLFW_SOURCE_DIR}/deps/tinycthread.h"
#                 "${GLFW_SOURCE_DIR}/deps/tinycthread.c")

#Link GLM library
#add_subdirectory(lib/glm)
# include_directories(lib/glm)
                
#My shader loader
# include_directories(lib/mylib)

#My sources files
set(SOURCE_FILES src/main.cpp)

add_executable(hcg ${SOURCE_FILES} ${GLAD})

target_link_libraries(hcg glfw ${GLFW_LIBRARIES})