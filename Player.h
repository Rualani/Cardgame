#pragma once
// Author: Joshua Thatcher
// Professor: Dr. Carrie Butler  
// Computer Science II
// Date last updated: 3/20/2017
#include "Card.h"
#include <vector>
using namespace std;

#ifndef PLAYER_H  // header guard
#define PLAYER_H // header guard

class Player {
public:
	Player(); // Tells user player created
	void dealCard(Card); // Gets a Card object for the hand
	string printHand(); // Returns a string current hand.
private:
	vector<Card> hand[9];  // Assignment states that hand should be 9 cards big
};



#endif  // header guard