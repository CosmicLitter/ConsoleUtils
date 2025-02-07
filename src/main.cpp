#include <iostream>
#include "../include/console_utils/colors.hpp"

using namespace ConsoleUtils::Colors;

int main() {
  std::cout << fg::green << style::blink << "Hello " << style::reset << fg::red << "World!" << fg::reset << std::endl;
  return 0;
}
