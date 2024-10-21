

#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    Customer newPerson;
    cout << "Enter Name: " << endl;
    cin >> newPerson.name;

    cout << "Enter Email: " << endl;
    cin >> newPerson.email;

    cout << "Enter ID: " << endl;
    cin >> newPerson.ID;


    newPerson.giveName();
    newPerson.giveEmail();
    newPerson.giveID();

}

