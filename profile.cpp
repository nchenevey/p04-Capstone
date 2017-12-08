#include "profile.h"


void profile::setUserName(string userFirst, string userLast)
{
    accountFirst = userFirst;
    accountLast = userLast;
}

string profile::getUserName()
{
    string cable;
    string table = accountFirst;
    string lable = accountLast;
    cable.append(table);
    cable.append(" ");
    cable.append(lable);

    return cable;
}

void profile::increaseCash(double trouble)
{
    cash += trouble;
}

double profile::getCash()
{
    if(cash < 0) return ceil(cash-0.5);
    return floor(cash+0.5);
}

void profile::setPoints(int flux)
{
    points += flux;
}

int profile::getPoints()
{
    return points;
}
