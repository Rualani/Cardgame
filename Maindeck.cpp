#include "Card.h"
#include "Player.h"
#include <iostream>
#include <vector>
#include <string>
#include <random>
using namespace std;



int main()
{
	// Random generator for deck shuffling
	default_random_engine generator;
	uniform_int_distribution<int> distribution(0, 109);

	// Determines beginning of program for debugging
	cout << "Program Begins" << endl;
	// creates deck to put objects into
	vector<Card> deck[110];

	// Loops Card objects into deck vector
	for (int f = 0; f < 11; f++)
	{
		for (int i = 0; i < 5; i++)
		{
			deck->push_back(Card(f, i));
			deck->push_back(Card(f, i));
		}
	}

	// Prints all cards
	for (int i = 0; i < 110; i++)
	{
		cout << deck->at(i).toString();
	}

	cout << endl << "This is a completed deck before being shuffled"  << endl << endl; // Gives some space between normal and shuffled decks for clarification.

	// Shuffles Deck
	for (int i = 0; i < 110; i++)				// Iterates through elements 
	{
		int random = distribution(generator);  // random number to make copy of
		Card c = deck->at(random);             // A copy has been made of a random element object
		deck->at(random) = deck->at(i);		   //  Object in iterated element is placed in the random one
		deck->at(i) = c;					   // Copied object placed into iterated element, completing the swap.
	}

	// Prints all cards
	for (int i = 0; i < 110; i++)
	{
		cout << deck->at(i).toString();
	}

	// Asks user for number of players
	int count;
	cout << "How many players do you want? (Pick 2-7): " << endl;
	cin >> count;

	// Create players players and stores them in an array
	vector<Player> players;
	for (int i = 0; i < count; i++) {
		players.push_back(Player());
	}

	// Deal Cards to each player
	for (int card = 1; card < 10; card++) {
		for (int play = 0; play < count; count++) {
			Card temp = deck->pop_back();
		}
	}


	cin.get();
	cin.ignore();

}
