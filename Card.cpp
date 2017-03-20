#include "Card.h"   // Linking process verified
#include <iostream> // string string strings inputting and outputting in a vast ocean of concsciousness.
#include <string> // to return strings
#include <sstream> // toString definition stuff, Inspired by the TIME class
using namespace std; 

// All card objects will know the names of themselves!
const string Card::faceString[] = {"three", "four", "five", "six", "seven", "eight", "nine", "ten", "Jack", "Queen", "King"}; 
const string Card::suiteString[] = {"clubs", "diamonds", "hearts", "spades", "stars"};

// Default constructor, was tempted to utilize setter functions instead, but decided to follow instructions 
Card::Card(int f, int s)
{	
		face = f;
		suite = s;
}
// This is where the stream manipulation fun occurs
string Card::toString()
{
	ostringstream output;
	output << faceString[face] << " of " << suiteString[suite] << endl;
	return output.str();
	// Now why would I use setw instead of a space. I'll tell you why! Fun and Glory and all things nonsensical. *battle cry*
}

