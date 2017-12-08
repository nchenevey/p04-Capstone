#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <vector>

using namespace std;


class player
{
private:

string account;

double cash;

vector<int> hand;




public:

void setUserName(string);

string getUserName();

void increaseCash(double);

double getCash();

};

#endif
