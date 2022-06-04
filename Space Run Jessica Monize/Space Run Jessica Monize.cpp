// Space Run Jessica Monize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <ctime>
using namespace std;
//to lock and unlock
mutex l;

string threadValue;
string threadInfo;

void rocketLaunch(string thisThread)//rocket function code
{
    {
        l.lock();
        string lSS = thisThread;
        threadValue = thisThread;
        threadInfo = threadInfo + thisThread;
        cout << "\nRocket: " << lSS << endl;
        cout << "\n Cadet: " << threadValue << endl;
        cout << "\n Rockets ready for Liftoff: " << threadInfo << endl;

        //timer between rocket release
        for (int i = 0; i < 3; i++)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }

        l.unlock();
    
    }

}//end of rocket funct code



int main()
{//start of rocket simulation
    cout << "Please be prepared for liftoff. Sit down and get comfortable." << endl;
    cout << "We will begin the countdown now." << endl;
    cout << "Rockets lifing off in..." << endl;
    /*for (int i = 0; i < 10; i++)
    {

    }*/
//start of countdown timer and its vars
    int j = 11;
    int counter = 0;
    while (j > counter)
    {
        j--;
        cout << j << endl;
        for (int i = 0; i < 1; i++)
        {
            this_thread::sleep_for(chrono::seconds(1));
        }
    }//end countdown
    cout << "\tBLAST OFF!!!" << endl;
    //start of rockets launching
        thread t1{ rocketLaunch, "First Rocket Launching! " };
        thread t2{ rocketLaunch, "Second Rocket Launching! " };
        thread t3{ rocketLaunch, "Third Rocket Launching! " };
        thread t4{ rocketLaunch, "Fourth Rocket Launching! " };
        thread t5{ rocketLaunch, "Fifth Rocket Launching! " };
        thread t6{ rocketLaunch, "Sixth Rocket Launching! " };
        thread t7{ rocketLaunch, "Seventh Rocket Launching! " };
        thread t8{ rocketLaunch, "Eighth Rocket Launching! " };
        thread t9{ rocketLaunch, "Ninth Rocket Launching! " };
        thread t10{ rocketLaunch, "Tenth Rocket Launching! " };

    //checking if threads area available to join
        if (t1.joinable())
        {
            cout << "1st is available to join, launching now!" << endl;
            t1.join();
        }
        if (t2.joinable())
        {
            cout << "2nd rocket is available to join, launching now!" << endl;
            t2.join();
        }
        if (t3.joinable())
        {
            cout << "3rd rocket is available to join, launching now!" << endl;
            t3.join();
        }
        if (t4.joinable())
        {
            cout << "4th rocket is available to join, launching now!" << endl;
            t4.join();
        }
        if (t5.joinable())
        {
            cout << "5th rocket is available to join, launching now!" << endl;
            t5.join();
        }
        if (t6.joinable())
        {
            cout << "6th rocket is available to join, launching now!" << endl;
            t6.join();
        }
        if (t7.joinable())
        {
            cout << "7th rocket is available to join, launching now!" << endl;
            t7.join();
        }
        if (t8.joinable())
        {
            cout << "8th rocket is available to join, launching now!" << endl;
            t8.join();
        }
        if (t9.joinable())
        {
            cout << "9th rocket is available to join, launching now!" << endl;
            t9.join();
        }
        if (t10.joinable())
        {
            cout << "10th rocket is available to join, launching now!" << endl;
            t10.join();
        }
    
}//end of int main

