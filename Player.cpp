#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
	cout << "A player has been created!" << endl;
}

void Player::dealCard(Card i) {
	hand->push_back(i);
	cout << "The card you have been dealt is the: " << i.toString() << endl;
}

string Player::printHand() {
	for (int i = 0; i < 110; i++)
	{
		cout << hand->at(i).toString();
	}
}