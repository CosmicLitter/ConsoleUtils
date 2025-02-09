#include <chrono>
#include <console_utils/time.hpp>
#include <ctime>
#include <string>

using namespace std::chrono;
namespace ConsoleUtils::Time {

std::string getCurrentTimestamp(const std::string &format) {
  std::time_t now = system_clock::to_time_t(system_clock::now());

  char buffer[30];
  if (std::strftime(buffer, sizeof(buffer), format.c_str(), std::localtime(&now))) {
    return std::string(buffer);
  } else {
    return {};
  }
}
}
