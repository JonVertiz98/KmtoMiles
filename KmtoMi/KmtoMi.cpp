//Jonathan Vertiz
//ITSE 1307
//Programming Problem Km to Miles
//KmtoMi.cpp : A Program that converts Km to Miles.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//Initialize the values we'll need for the program
	double intKM = 0.0;
	double doubleMi = 0.0;

	//code that asks for your distance in Km and the formula for the conversion
	cout << "Input your run in Km: ";
	cin >> intKM;
	doubleMi = intKM / 1.609344;

	//Displays the distances in Km and Miles
	cout << "Your run in Km is: " << intKM 
		<< " then your run in Miles is: " << doubleMi << endl;

    return 0;
}

