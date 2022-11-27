/***************************************** 
 Program name: zad5_lab2.cpp 
 Author: Michal Mielewczyk, Drammen 2022
 Task 5: Napisz program, który pobierze od użytkownika 5 
 liczb rzeczywistych i umieści je w odpowiedniej tablicy:
 Created: 2022-11-20
 Ver. 1.00 
 *****************************************/

#include<iostream>

using namespace std;

int main()
{
    float tablica[5];
    float suma=0;

    for(int i=0;i<5;i++)   //i++;   ->   i=i+1;
    {
        cout << "tablica[" << i << "]=";
        cin >> tablica[i];
        suma=suma+tablica[i];  //suma+=tablica[i];
        cout << "suma=" << suma << "\tsrednia=" << suma/(i+1) << endl;
    }

    for(int i=0;i<5;i++)
    {

        if(((tablica[i]>=-5)&&(tablica[i]<=5))&&(tablica[i]!=0))
            cout << "TAJNA" << "\t";
        else
            cout << tablica[i] << "\t";
        //cout << endl;
    }
}
