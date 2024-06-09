add_executable(main main.cpp)
target_link_libraries(main PRIVATE ApplicationPkg)
add_subdirectory(ApplicationPkg)