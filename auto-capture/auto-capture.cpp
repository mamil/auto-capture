#include <iostream>
#include "capture.h"

int main()
{
    std::cout << "statr auto-capture!\n";
    capture aCapture;
    aCapture.setConfig(" -D");
    aCapture.startCapture();
}
