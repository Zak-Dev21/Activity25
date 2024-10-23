

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

    cout << "Enter Address: " << endl;
    cin >> newPerson.address.address;

    cout << "Enter City: " << endl;
    cin >> newPerson.address.city;

    cout << "Enter Zipcode: " << endl;
    cin >> newPerson.address.zipcode;


    newPerson.giveName();
    newPerson.giveEmail();
    newPerson.giveID();
    newPerson.giveAddress();


}

