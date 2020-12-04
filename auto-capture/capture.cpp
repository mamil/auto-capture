#include <iostream>
#include "capture.h"

capture::capture()
{
	std::cout << "ctor" << std::endl;
	winDumpPath_ = ".\\3rd\\WinDump.exe";
}

capture::~capture()
{
	std::cout << "dtor" << std::endl;
}

int capture::setConfig(std::string command)
{
	command_ = command;
	return 0;
}

int capture::startCapture()
{
	if (command_.empty())
	{
		std::cout << "please set capture command first!" << std::endl;
		return -1;
	}
	else
	{
		auto runCommand = winDumpPath_ + command_;
		system(runCommand.c_str());
		return 0;
	}
}