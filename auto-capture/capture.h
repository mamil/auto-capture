#pragma once
#include <string>
class capture
{
public:
	capture();
	~capture();

	int setConfig(std::string command);
	int startCapture();

private:
	std::string command_;
	std::string winDumpPath_;
};

