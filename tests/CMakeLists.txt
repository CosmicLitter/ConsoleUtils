include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY  https://github.com/catchorg/Catch2.git
  GIT_TAG         v3.4.0
)
FetchContent_MakeAvailable(Catch2)

add_executable(tests
  # text_style_guard.cpp
  # test_spinner.cpp
)

target_link_libraries(tests PRIVATE console_utils Catch2::Catch2WithMain)

add_test(NAME StyleGuardTest COMMAND tests)
