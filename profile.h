#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <vector>
#include <cmath>

using namespace std;


class profile
{
private:

string accountFirst;

string accountLast;

double cash;

vector<int> hand;

int points;



public:

void setUserName(string,string);

string getUserName();

void increaseCash(double);

double getCash();

};

#endif
