#include <iostream>
#include <sstream>
#include "Capture.h"

int main()
{
    std::cout << "statr auto-capture!" << std::endl;
    std::cout << "get interface:" << std::endl;
    Capture aCapture;
    aCapture.getInterfaceInfo();

    std::cout << "capture interface no: (-1 to input command directly)" << std::endl;
    int no = 0;
    std::cin >> no;

    if (no == -1)
    {
        std::cout << "please input command:" << std::endl;
        std::string command = "";
        std::cin >> command;
        aCapture.setConfig(command);
        aCapture.startCapture();
    }
    else
    {
        std::ostringstream ostr;
        ostr << "-i " << no << " -s 0 -C 50 -W 100 -w .\\80.pcap port 80 or 8080 or 443";

        std::string command = ostr.str();
        aCapture.setConfig(command);
        aCapture.startCapture();
    }

    system("pause");
}
