#ifndef Header_h
#define Header_h

#include <iostream>
using namespace std;

struct Customer {
	string email;
	string name;
	int ID;

	struct Address {
		string address;
		string city;
		int zipcode;

		void getAddress() {
			cout << address << endl;
		}

		void getCity() {
			cout << city << endl;
		}

		void getZipcode() {
			cout << zipcode << endl;
		}
	} address;

	void giveEmail() {
		cout << email << endl;
	}

	void giveName() {
		cout << name << endl;
	}

	void giveID() {
		cout << ID << endl;
	}

	void giveAddress() {
		address.getAddress();
		address.getCity();
		address.getZipcode();
	}

};


#endif
