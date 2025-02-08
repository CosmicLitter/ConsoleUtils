add_library(ConsoleUtils time.cpp
)

target_include_directories(ConsoleUtils PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
  $<INSTALL_INTERFACE:include>
)

install (TARGETS ConsoleUtils EXPORT ConsoleUtilsConfig
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY ../include/ DESTINATION include)

install(EXPORT ConsoleUtilsConfig
  FILE ConsoleUtilsConfig.cmake
  DESTINATION lib/cmake/ConsoleUtils
)
