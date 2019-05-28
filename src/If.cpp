/*
 * If.cpp
 *
 *  Created on: 28 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	string password = "Name";
	string input;
	int count = 0;

	while((input != password) && count != 3)
	{
		count ++;

		cout <<	"Please enter your password:> " << flush;// << These less than operators are known formally as the 'put to' operator.

		cin >> input;	// >> These greater than operators are formally knows as 'extraction' or 'get from' operators.

		if(input == password)
		{
			cout << "Welcome" << endl;
		}

		if((input != password) && count != 3)
		{
			cout << "Incorrect password, please try again." << endl;
		}

		if(count == 3)
		{
			cout << "You have tried too many times, goodbye." << endl;
		}
	}


	return 0;
}


