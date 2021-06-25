#pragma once

/// @file utils/userver_info.hpp
/// @brief Information about userver and its build environment

namespace utils {

/// \returns zero-terminated string with version as "major.minor.patch"
const char* GetUserverVersion() noexcept;

/// \returns zero-terminated string with GIT short hash of userver repo
const char* GetUserverVcsRevision() noexcept;

/// \returns zero-terminated string with description of the server as
/// "userver/{GetUserverVersion()} ({__DATE__}; rv: {GetUserverHash()})"
const char* GetUserverIdentifier() noexcept;

}  // namespace utils
