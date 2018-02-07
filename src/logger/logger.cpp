#include "logger.hpp"

namespace logger {

LoggerPtr& Log() {
  static LoggerPtr logger = DefaultLogger();
  return logger;
}

LoggerPtr DefaultLogger() {
  static LoggerPtr logger = spdlog::stderr_logger_mt("default_logger");
  return logger;
}

}  // namespace logger
