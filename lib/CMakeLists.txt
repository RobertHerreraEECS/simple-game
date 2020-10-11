
# get curses library from OS install path
find_package( Curses REQUIRED )
FIND_PACKAGE(Boost COMPONENTS filesystem REQUIRED)

include_directories( ${CURSES_INCLUDE_DIRS} )
include_directories( ${BOOST_INCLUDE_DIRS} )

# main executable
add_executable(
  main
  main.cpp
  Sprite.cpp
  Sprite.h
  uuidUtil.cpp 
  uuidUtil.h
  GameManager.cpp
)

target_link_libraries( main ${CURSES_LIBRARIES} ${Boost_FILESYSTEM_LIBRARY})


