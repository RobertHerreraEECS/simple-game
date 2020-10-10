
# get curses library from OS install path
find_package( Curses REQUIRED )

include_directories( ${CURSES_INCLUDE_DIRS} )

# main executable
add_executable(
  main
  main.cpp
        Sprite.cpp Sprite.h uuidUtil.cpp uuidUtil.h)

target_link_libraries( main ${CURSES_LIBRARIES} )


