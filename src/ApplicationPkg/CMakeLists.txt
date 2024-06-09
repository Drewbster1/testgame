file(GLOB ApplicationPkg_SRC CONFIGURE_DEPENDS "*.cpp")
file(GLOB ApplicationPkg_HDR CONFIGURE_DEPENDS "*.hpp")

add_library(ApplicationPkg STATIC ${ApplicationPkg_SRC})

target_include_directories(
    ApplicationPkg
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(
    ApplicationPkg 
    PUBLIC
    sfml-graphics
)