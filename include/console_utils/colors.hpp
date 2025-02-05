#pragma once

#include <iostream>
#include <string>

namespace ConsoleUtils::Colors {

enum class Color {
  Default,
  Black,
  Red,
  Yellow,
  Green,
  Blue,
  Magenta,
  Cyan,
  White
};

enum class Background {
  Default,
  Black,
  Red,
  Yellow,
  Green,
  Blue,
  Magenta,
  Cyan,
  White
};

enum class Style {
  Reset,
  Bold,
  Underline,
  Blink,
  Reverse
};

std::string toAnsiCode(Color color);
std::string toAnsiCode(Background color);
std::string toAnsiCode(Style style);

}
