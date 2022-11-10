/***************************************** 
 Program name: randomNumbers.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Created: 2022-11-10
 Ver. 1.00 
 *****************************************/

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int number, x, attempt=0; 
string name;

int main()
{
     cout <<  "What is your name?: ";
     cin >> name;
     cout << endl;
     cout << name << ", Let's play a game! Michael thinking of a number 1-100: ";
     srand(time(NULL));
     number = rand()%100;
    //cout << number << endl;

     while(x!=number)
     {
        attempt++;

        cout << "Can you guess it? Attempt nr " << attempt << ": ";
        cin >> x;

        if(x==number)
          cout << "\n" << "BRAVO!!! BRAVO!!!BRAVO!!!BRAVO!!!BRAVO!!!" << "\n\n" << name <<"! Perfect match on " << attempt << " hit! Lucky You! \n";

    
        else if(x<number)
          cout << "The number is too low! ";

        else if(x>number)
          cout << "The number is too high! ";
     }
          cout << "Press Enter to close this window. Bye, bye..";

    getchar();getchar();

    return 0;
}