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
double round(double);
vector<string> createDeck(vector<string>);
double texas(int,int,int,int,int,int, vector<string>);
vector<int> lowToHigh(vector<int>);

int main()
{   
    double playerWallet = 100;
    double opponentWallet = 100;

    srand( time(NULL) );
    int randomNumber1;
    int randomNumber2;
    int randomNumber3;
    int randomNumber4;
    int randomNumber5;
    vector<string> playerHand;
    vector<string> opponentHand;
    vector<string> deck;
    playerHand.resize(5);
    opponentHand.resize(5);
    deck = createDeck(deck);

    do
    {
    randomNumber1 = rand() % 52;
    randomNumber2 = rand() % 52;
    randomNumber3 = rand() % 52;
    randomNumber4 = rand() % 52;
    randomNumber5 = rand() % 52;
    }while(randomNumber1 == randomNumber2 || randomNumber1 == randomNumber3 || randomNumber1 == randomNumber4 || randomNumber2 == randomNumber3 || randomNumber2 == randomNumber4 || randomNumber3 == randomNumber4);

    texas(randomNumber1, randomNumber2, randomNumber3, randomNumber4, randomNumber5, 0, deck);
    


return 0;
}








//Functions

double texas(int r1, int r2, int r3, int r4, int r5, int draws, vector<string> decked)
{
string rCheck;
vector<int> nums;
nums.push_back(r1);
nums.push_back(r2);
nums.push_back(r3);
nums.push_back(r4);
nums.push_back(r5);
nums = lowToHigh(nums);

int e1 = nums[0];
int e2 = nums[1];
int e3 = nums[2];
int e4 = nums[3];
int e5 = nums[4];


string card1 = decked[e1];
string card2 = decked[e2];
string card3 = decked[e3];
string card4 = decked[e4];
string card5 = decked[e5];


cout<<"Your cards:"<<endl<<card1<<" | "<<card2<<" | "<<card3<<" | "<<card4<<" | "<<card5<<endl;
cout<<"Enter draw to select cards to draw or ready to continue: ";
cin>>rCheck;

if(rCheck == "ready" || rCheck == "r" || rCheck == "Ready")
{
    if((e1 == 0 && e2 == 9 && e3 == 10 && e4 == 11 && e5 == 12) || (e1 == 13 && e2 == 22 && e3 == 23 && e4 == 24 && e5 == 25) || (e1 == 26 && e2 == 35 && e3 == 36 && e4 == 37 && e5 == 38) || (e1 == 39 && e2 == 48 && e3 == 49 && e4 == 50 && e5 == 51))
    {
        cout<<"Royal Flush!"<<endl;
    }
    else if((e2 == (e1+1) || e2 == (e1+14) || e2 == (e1+28) || e2 == (e1+32) || e2 == (e1+48)) && (e3 == (e2+1) || e3 == (e2+14) || e3 == (e2+28) || e3 == (e2+32) || e3 == (e2+48)) && (e4 == (e3+1) || e4 == (e3+14) || e4 == (e3+28) || e4 == (e3+32) || e4 == (e3+48)) && (e5 == (e4+1) || e5 == (e4+14) || e5 == (e4+28) || e5 == (e4+32) || e5 == (e4+48)))
    {
        cout<<"Straight Flush!"<<endl;
    }
}
}




vector<int> lowToHigh(vector<int> v1)
{
int c1 = v1[0];
int c2 = v1[1];
int c3 = v1[2];
int c4 = v1[3];
int c5 = v1[4];

for(int index = 0; index < 20; index++)
{
    if( c4 > c5)
    {
        int t1 = c5;
        c5 = c4;
        c4 = t1;
    }
    if( c3 > c4)
    {
        int t2 = c4;
        c4 = c3;
        c3 = t2;
    }
    if( c2 > c3)
    {
        int t3 = c3;
        c3 = c2;
        c2 = t3;
    }
    if( c1 > c2)
    {
        int t4 = c2;
        c2 = c1;
        c1 = t4;
    }
}
v1[0] = c1;
v1[1] = c2;
v1[2] = c3;
v1[3] = c4;
v1[4] = c5;

return v1;
}


double round(double square)
{
if(square < 0) return ceil(square-0.5);
return floor(square+0.5);
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
