#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include "profile.h"

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


double handCheck(int, int, int, int, int, vector<int>, vector<string>);

double round(double);

vector<string> createDeck(vector<string>);

double texas(int,int,int,int,int,int, vector<string>);

vector<int> lowToHigh(vector<int>);

int fourOfAKind(vector<int>);

vector<int> reduction(vector<int>);

bool flush(vector<int>);

bool straight(vector<int>);

int main()
{   
        profile player1;

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

        string firstName;
        string lastName;
        cout<<"Enter full name to create account: ";
        cin>>firstName>>lastName;
        player1.increaseCash(5.00);
        player1.setUserName(firstName,lastName);
        cout<<"Welcome "<<player1.getUserName()<<". Your current balance is: $"<<player1.getCash()<<endl;
        
    do
    {
        do
        {
                randomNumber1 = rand() % 52;
                randomNumber2 = rand() % 52;
                randomNumber3 = rand() % 52;
                randomNumber4 = rand() % 52;
                randomNumber5 = rand() % 52;
        }while(randomNumber1 == randomNumber2 || randomNumber1 == randomNumber3 || randomNumber1 == randomNumber4 || randomNumber1 == randomNumber5 || randomNumber2 == randomNumber3 || randomNumber2 == randomNumber4 || randomNumber2 == randomNumber5 || randomNumber3 == randomNumber4 || randomNumber3 == randomNumber5 || randomNumber4 == randomNumber5);


        double gained = texas(randomNumber1, randomNumber2, randomNumber3, randomNumber4, randomNumber5, 2, deck);
        cout<<"$"<<gained<<" has been deposited into your account."<<endl;
        player1.increaseCash(gained);
        cout<<"Current account balance: $"<<player1.getCash()<<endl;


    }while(
        return 0;
}



//Functions

int randomDeckDraw(vector<int> randomNumbers, int changed)
{
        srand( time(NULL) );
        int randomNumber1 = randomNumbers[0];
        int randomNumber2 = randomNumbers[1];
        int randomNumber3 = randomNumbers[2];
        int randomNumber4 = randomNumbers[3];
        int randomNumber5 = randomNumbers[4];
        int y = (changed-1);
        
        do
        {
                randomNumbers[y] = rand() % 52;

        }while(randomNumbers[y] == randomNumber2 || randomNumbers[y] == randomNumber3 || randomNumbers[y] == randomNumber4 || randomNumbers[y] == randomNumber5);
int jade = randomNumbers[y];
return jade;

}


double texas(int r1, int r2, int r3, int r4, int r5, int draws, vector<string> decked)
{
        int cardDraw;

        string rCheck;
        vector<int> nums;
        nums.push_back(r1);
        nums.push_back(r2);
        nums.push_back(r3);
        nums.push_back(r4);
        nums.push_back(r5);
        /* 
           nums[0] = 14;
           nums[1] = 15;
           nums[2] = 16;
           nums[3] = 18;
           nums[4] = 17;
         */
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

        do
        {   
            e1 = nums[0];
            e2 = nums[1];
            e3 = nums[2];
            e4 = nums[3];
            e5 = nums[4];
            card1 = decked[e1];
            card2 = decked[e2];
            card3 = decked[e3];
            card4 = decked[e4];
            card5 = decked[e5];

            cout<<"Your cards:"<<endl<<card1<<" | "<<card2<<" | "<<card3<<" | "<<card4<<" | "<<card5<<endl;
            if(draws > 0)
            {   
                cout<<"Enter draw to select an unwanted card to draw or ready to continue: ";
                cin>>rCheck;

                if(rCheck == "draw" || rCheck == "Draw" || rCheck == "DRAW")
                {
                    do
                    {
                    cout<<"Please enter the number position of the card you would like to draw(1-5): "; 
                    cin>>cardDraw;
                    
                    
                    if(cardDraw > 0 && cardDraw <= 5)
                    {
                        int amethyst = (cardDraw - 1);
                        nums[amethyst] = randomDeckDraw(nums, cardDraw);
                        draws = (draws-1);
                    }
                    else
                    {
                        cout<<"Invalid card position."<<endl;
                    }
                    }while(cardDraw > 5 || cardDraw < 1);
                }
            }
            else
            {
                break;
            }
        }while(rCheck == "draw" || rCheck == "Draw" || rCheck == "DRAW" || draws > 0);

        double tripple = handCheck(e1, e2, e3, e4, e5, nums, decked);
        return tripple;


}

bool straight(vector<int> kaleidoscope)
{
        kaleidoscope = reduction(kaleidoscope);
        for(int risk = 1; risk < 5; risk++)
        {
                kaleidoscope[risk] = kaleidoscope[risk] - risk;
        }
        for(int crisp = 0; crisp < 5; crisp++)
        {
                int spark = count(kaleidoscope.begin(), kaleidoscope.end(), kaleidoscope[crisp]);
                if(spark == 5)
                {
                        return true;
                }
        }
        return false;
}


bool flush(vector<int> octopus)
{
        int sprint = 0;
        for(int opal = 0; opal < 5; opal ++)
        {
                if(octopus[opal] >= 0 && octopus[opal] < 13)
                {
                        sprint += 1;
                }
                if(octopus[opal] > 12 && octopus[opal] < 26)
                {
                        sprint += 10;
                }
                if(octopus[opal] > 25 && octopus[opal] < 39)
                {
                        sprint += 100;
                }
                if(octopus[opal] > 38 && octopus[opal] < 52)
                {
                        sprint += 1000;
                }
        }
        if(sprint == 5 || sprint == 50 || sprint == 500 || sprint == 5000)
        {
                return true;
        }
        return false;
}

vector<int> reduction(vector<int> orange)
{

        for(int index = 0; index < 5; index++)
        {
                for(int i = 1; i < 4; i++)
                {
                        if( (orange[index]-13) >= 0 )
                        {

                                orange[index] = (orange[index]-13);

                        }
                }
        }
        return orange;
}


int fourOfAKind(vector<int> rabbit)
{
        rabbit = reduction(rabbit);
        int tempora = 0;
        int cardCount = 0;
        for(int index = 0; index < 5; index++)
        {
                cardCount = count(rabbit.begin(), rabbit.end(), rabbit[index] );

                if(cardCount == 4)
                {
                        return 4;
                }
                else if(cardCount == 3)
                {
                        tempora += 3;
                }
                else if(cardCount == 2)
                {
                        tempora += 2;
                }
        }
        if(tempora == 13)
        {
                return 3;
        }
        if(tempora == 9)
        {
                return 2;
        }
        if(tempora == 8)
        {
                return 1;
        }
        if(tempora == 4)
        {
                return 5;
        }
        return 0;
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

double handCheck(int e1, int e2, int e3, int e4, int e5, vector<int> nums, vector<string> deck)
{   
        vector<int> tectonics;
        tectonics = lowToHigh(reduction(nums));
        if(flush(nums) == true && tectonics[0] == 0 && tectonics[1] == 9 && tectonics[2] == 10 && tectonics[3] == 11 && tectonics[4] == 12)
        {
                cout<<"Royal Flush!"<<endl;
                return 500;
        }
        else if(flush(nums) == true && straight(nums) == true)
        {
                cout<<"Straight Flush!"<<endl;
                return 400;
        }
        else if(fourOfAKind(nums) == 4)
        {
                cout<<"Four of a kind!"<<endl;
                return 300;
        }
        else if(fourOfAKind(nums) == 3)
        {
                cout<<"Full house!"<<endl;
                return 200;
        }
        else if(flush(nums) == true)
        {
                cout<<"Flush!"<<endl;
                return 150;
        }
        else if(straight(nums) == true)
        {
                cout<<"Straight!"<<endl;
                return 100;
        }
        else if(fourOfAKind(nums) == 2)
        {
                cout<<"Three of a kind!"<<endl;
                return 50;
        }
        else if(fourOfAKind(nums) == 1)
        {
                cout<<"Two pair!"<<endl;
                return 25;
        }
        else if(fourOfAKind(nums) == 5)
        {
                cout<<"Pair!"<<endl;
                return 15;
        }
        else
        {
                cout<<"High card: "<<tectonics[4]<<endl;
                int tatanka = (tectonics[4] + 5);
                return tatanka;
        }
}


double round(double square)
{
        if(square < 0) return ceil(square-0.5);
        return floor(square+0.5);
}


vector<string> createDeck(vector<string> deck)
{
        deck.push_back("Ace of Spades♠");//0
        deck.push_back("2 of Spades♠");//1
        deck.push_back("3 of Spades♠");//2
        deck.push_back("4 of Spades♠");//3
        deck.push_back("5 of Spades♠");//4
        deck.push_back("6 of Spades♠");//5
        deck.push_back("7 of Spades♠");//6
        deck.push_back("8 of Spades♠");//7
        deck.push_back("9 of Spades♠");//8
        deck.push_back("10 of Spades♠");//9
        deck.push_back("Jack of Spades♠");//10
        deck.push_back("Queen of Spades♠");//11
        deck.push_back("King of Spades♠");//12
        deck.push_back("Ace of Hearts♥");//13
        deck.push_back("2 of Hearts♥");//14
        deck.push_back("3 of Hearts♥");//15
        deck.push_back("4 of Hearts♥");//16
        deck.push_back("5 of Hearts♥");//17
        deck.push_back("6 of Hearts♥");//18
        deck.push_back("7 of Hearts♥");//19
        deck.push_back("8 of Hearts♥");//20
        deck.push_back("9 of Hearts♥");//21
        deck.push_back("10 of Hearts♥");//22
        deck.push_back("Jack of Hearts♥");//23
        deck.push_back("Queen of Hearts♥");//24
        deck.push_back("King of Hearts♥");//25
        deck.push_back("Ace of Diamonds♦");//26
        deck.push_back("2 of Diamonds♦");//27
        deck.push_back("3 of Diamonds♦");//28
        deck.push_back("4 of Diamonds♦");//29
        deck.push_back("5 of Diamonds♦");//30
        deck.push_back("6 of Diamonds♦");//31
        deck.push_back("7 of Diamonds♦");//32
        deck.push_back("8 of Diamonds♦");//33
        deck.push_back("9 of Diamonds♦");//34
        deck.push_back("10 of Diamonds♦");//35
        deck.push_back("Jack of Diamonds♦");//36
        deck.push_back("Queen of Diamonds♦");//37
        deck.push_back("King of Diamonds♦");//38
        deck.push_back("Ace of Clubs♣");//39
        deck.push_back("2 of Clubs♣");//40
        deck.push_back("3 of Clubs♣");//41
        deck.push_back("4 of Clubs♣");//42
        deck.push_back("5 of Clubs♣");//43
        deck.push_back("6 of Clubs♣");//44
        deck.push_back("7 of Clubs♣");//45
        deck.push_back("8 of Clubs♣");//46
        deck.push_back("9 of Clubs♣");//47
        deck.push_back("10 of Clubs♣");//48
        deck.push_back("Jack of Clubs♣");//49
        deck.push_back("Queen of Clubs♣");//50
        deck.push_back("King of Clubs♣");//51
        return deck;
}
