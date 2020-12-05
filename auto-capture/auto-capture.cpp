#include <iostream>
#include "Capture.h"

int main()
{
    std::cout << "statr auto-capture!\n";
    Capture aCapture;
    aCapture.setConfig("-D");
    aCapture.startCapture();
}
