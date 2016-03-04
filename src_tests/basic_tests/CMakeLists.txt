include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runSrcTests
        basic_check.cpp)

target_link_libraries(runSrcTests gtest gtest_main)
target_link_libraries(runSrcTests src)