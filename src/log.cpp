#include "log.hpp"
#include <XPLMUtilities.h>
#include <ctime>

void logtype::operator<<(std::string text) const {
    std::time_t time = std::time(0);
    std::tm * now = localtime(&time);
    std::string timestamp = "XEcmaScript[" + std::to_string(now->tm_hour) + ":" + std::to_string(now->tm_min) + ":" + std::to_string(now->tm_sec) + "]: ";
    XPLMDebugString((timestamp + text + "\n").c_str());
}

void logtype::operator<<(const char * text) const {
    std::time_t time = std::time(0);
    std::tm * now = localtime(&time);
    std::string timestamp = "XEcmaScript[" + std::to_string(now->tm_hour) + ":" + std::to_string(now->tm_min) + ":" + std::to_string(now->tm_sec) + "]: ";
    XPLMDebugString((timestamp + text + "\n").c_str());
}
