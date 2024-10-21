#ifndef Header_h
#define Header_h

#include <iostream>
using namespace std;

struct Customer {
	string email;
	string name;
	int ID;

	void giveEmail() {
		cout << email << endl;
	}

	void giveName() {
		cout << name << endl;
	}

	void giveID() {
		cout << ID << endl;
	}

};


#endif
