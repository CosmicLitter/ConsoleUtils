#include <chrono>
#include <console_utils/time.hpp>
#include <ctime>
#include <string>

namespace ConsoleUtils::Time {

std::string getCurrentTimestamp(const std::string &format) {
  auto now = std::chrono::system_clock::now();
  std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);

  std::tm local_tm;
  localtime_r(&now_time_t, &local_tm);

  char buffer[100];
  if (std::strftime(buffer, sizeof(buffer), format.c_str(), &local_tm)) {
    return std::string(buffer);
  } else {
    return {};
  }
}
}
