#pragma once

#include <iostream>

namespace ConsoleUtils::Colors {

struct EscapeCode {
  const char* code;
  constexpr explicit EscapeCode(const char* code): code(code) {}

};

// Should be inlined because this will be duplicated across all translation
// units that include this header.
inline std::ostream& operator<<(std::ostream& os, const EscapeCode& c) {
  return os << "\033[" << c.code << "m";
}

// Builds all EscapeCode objects at startup for static allocation
namespace fg {
  inline constexpr EscapeCode black("30");
  inline constexpr EscapeCode red("31");
  inline constexpr EscapeCode green("32");
  inline constexpr EscapeCode yellow("33");
  inline constexpr EscapeCode blue("34");
  inline constexpr EscapeCode magenta("35");
  inline constexpr EscapeCode cyan("36");
  inline constexpr EscapeCode white("37");
  inline constexpr EscapeCode reset("39");
}

namespace bg {
  inline constexpr EscapeCode black("40");
  inline constexpr EscapeCode red("41");
  inline constexpr EscapeCode green("42");
  inline constexpr EscapeCode yellow("43");
  inline constexpr EscapeCode blue("44");
  inline constexpr EscapeCode magenta("45");
  inline constexpr EscapeCode cyan("46");
  inline constexpr EscapeCode white("47");
  inline constexpr EscapeCode reset("49");
}

namespace style {
  inline constexpr EscapeCode bold("1");
  inline constexpr EscapeCode dim("2");
  inline constexpr EscapeCode underline("4");
  inline constexpr EscapeCode blink("5");
  inline constexpr EscapeCode reverse("7");
  inline constexpr EscapeCode hidden("8");
  inline constexpr EscapeCode reset("0");
}

}
