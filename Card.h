#pragma once
// Author: Joshua Thatcher
// Professor: Dr. Carrie Butler  
// Computer Science II
// Date last updated: 3/5/2017
#include <string>

using namespace std;

#ifndef DECK_H  // header guard
#define DECK_H // header guard

class Card {
public:
	Card(int, int); // default constructor
	string toString();
private:
	int face;
	int suite;
	static const string faceString[];
	static const string suiteString[];
};


#endif  // header guard

