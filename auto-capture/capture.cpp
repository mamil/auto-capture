#include <iostream>
#include "Capture.h"

Capture::Capture()
{
    std::cout << __func__ << " ctor" << std::endl;
    winDumpPath_ = ".\\3rd\\WinDump.exe";
}

Capture::~Capture()
{
    std::cout << __func__ << " dtor" << std::endl;
}

int Capture::setConfig(std::string command)
{
    command_ = command;
    return 0;
}

int Capture::startCapture()
{
    if (command_.empty())
    {
        std::cout << "please set Capture command first!" << std::endl;
        return -1;
    }
    else
    {
        auto runCommand = winDumpPath_ + " " + command_;
        system(runCommand.c_str());
        return 0;
    }
}

void Capture::getInterfaceInfo()
{
    auto runCommand = winDumpPath_ + " -D";
    system(runCommand.c_str());
}
