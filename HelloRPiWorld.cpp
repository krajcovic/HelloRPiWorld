/*
 * HelloRPiWorld.cpp
 *
 *  Created on: May 14, 2015
 *      Author: krajcovic
 */


#include <iostream>
#include <unistd.h>

using namespace std;

int main (void)
{
    int i = 0;
    cout << "Hello RPi Development World !"<< endl;

    cout << "Hello RPI Development World Again !" << endl;

    while(1)
    {
        cout << "I'm in the While loop and the value of variable i is: " << i << endl;
        i++;
        usleep(1000000); //wait for 1 seconds
    }

    return 0;
}
