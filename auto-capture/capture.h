#pragma once
#include <string>

class Capture
{
public:
    Capture();
    ~Capture();

    int setConfig(std::string command);
    int startCapture();

    void getInterfaceInfo();

private:
    std::string command_;
    std::string winDumpPath_;
};
