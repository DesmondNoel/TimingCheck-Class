
#include <iostream>

#include "Timings/Timings.h"


int main()
{
    TimerBehavoirCheck TimeCheck(1); // starts here

    std::cout << "Hello World!\n";
   // Sleep(500);
    TimeCheck.EndTimer();

    std::cout << "If You Are Still Here " << std::endl;
}

