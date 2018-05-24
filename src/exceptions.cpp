#include "exceptions.h"

Exception::Exception(const std::string& message) : message(message) {}

OpenFail::OpenFail(const std::string& message) : Exception(message) {}

const char *OpenFail::what() const noexcept {
    return this->message.c_str();
}

ReadFail::ReadFail(const std::string& message) : Exception(message) {}

const char *ReadFail::what() const noexcept {
    return this->message.c_str();
}

EntryReadFail::EntryReadFail(const std::string& message) : Exception(message) {}

const char *EntryReadFail::what() const noexcept {
    return this->message.c_str();
}

OutOfBounds::OutOfBounds(const std::string& message) : Exception(message) {}

const char *OutOfBounds::what() const noexcept {
    return this->message.c_str();
}
