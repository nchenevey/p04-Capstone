#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <vector>

using namespace std;
/*
Spades, Hearts, Diamonds, Clubs
Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King

Hands:
1. Royal Flush:     A, K, Q, J, 10 all the same suit
2. Straight flush:  Five cards in a sequence, all the same suit
3. Four of a kind:  All four cards of the same rank
4. Full house:      Three of a kind with a pair
5. Flush:           Any five cards of the same suit, but not in sequence
6. Straight:        Five cards in a sequence, but not of the same suit
7. Three of a kind: Three cards of the same rank
8. Two pair:        Two different pairs
9. Pair:            Two cards of the same rank
10.High card:       If no other play, then highest card in hand

*/

vector<string> createDeck(vector<string> deck);

int main()
{
vector<string> playerHand;
vector<string> opponentHand;
vector<string> deck;
playerHand.resize(5);
opponentHand.resize(5);
deck = createDeck(deck);

for(int index = 0; index < deck.size(); index++)
{
cout<<deck[index]<<endl;
}

return 0;
}




vector<string> createDeck(vector<string> deck)
{
deck.push_back("Ace of Spades");//0
deck.push_back("2 of Spades");//1
deck.push_back("3 of Spades");//2
deck.push_back("4 of Spades");//3
deck.push_back("5 of Spades");//4
deck.push_back("6 of Spades");//5
deck.push_back("7 of Spades");//6
deck.push_back("8 of Spades");//7
deck.push_back("9 of Spades");//8
deck.push_back("10 of Spades");//9
deck.push_back("Jack of Spades");//10
deck.push_back("Queen of Spades");//11
deck.push_back("King of Spades");//12
deck.push_back("Ace of Hearts");//13
deck.push_back("2 of Hearts");//14
deck.push_back("3 of Hearts");//15
deck.push_back("4 of Hearts");//16
deck.push_back("5 of Hearts");//17
deck.push_back("6 of Hearts");//18
deck.push_back("7 of Hearts");//19
deck.push_back("8 of Hearts");//20
deck.push_back("9 of Hearts");//21
deck.push_back("10 of Hearts");//22
deck.push_back("Jack of Hearts");//23
deck.push_back("Queen of Hearts");//24
deck.push_back("King of Hearts");//25
deck.push_back("Ace of Diamonds");//26
deck.push_back("2 of Diamonds");//27
deck.push_back("3 of Diamonds");//28
deck.push_back("4 of Diamonds");//29
deck.push_back("5 of Diamonds");//30
deck.push_back("6 of Diamonds");//31
deck.push_back("7 of Diamonds");//32
deck.push_back("8 of Diamonds");//33
deck.push_back("9 of Diamonds");//34
deck.push_back("10 of Diamonds");//35
deck.push_back("Jack of Diamonds");//36
deck.push_back("Queen of Diamonds");//37
deck.push_back("King of Diamonds");//38
deck.push_back("Ace of Clubs");//39
deck.push_back("2 of Clubs");//40
deck.push_back("3 of Clubs");//41
deck.push_back("4 of Clubs");//42
deck.push_back("5 of Clubs");//43
deck.push_back("6 of Clubs");//44
deck.push_back("7 of Clubs");//45
deck.push_back("8 of Clubs");//46
deck.push_back("9 of Clubs");//47
deck.push_back("10 of Clubs");//48
deck.push_back("Jack of Clubs");//49
deck.push_back("Queen of Clubs");//50
deck.push_back("King of Clubs");//51
return deck;
}
