#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>


using namespace std;

bool optimus(int);
double hollaHollaGetDolla(double);
double round(double);


int main()
{
        srand( time(NULL) );
        int score;
        double attempts;
        int average;
        double wallet = 100;
        char choice;
        char choice1;
        double scale = 0.01;
     do
     {
       score = 0;
       average = 0;
       cout<<"Current balance: $"<<wallet<<endl;
       cout<<"Enter your bet: ";
       cin>>attempts;
       attempts = round(attempts*100.0)/100.0;        

       if(attempts == 0)
       {
            break;
       }
       wallet = (wallet - attempts);
       wallet = wallet + hollaHollaGetDolla(attempts);
/*
       for(int index = 0; index < 100; index++)
       {
       score = 0;
        for(int i = 0; i < attempts; i++)
        {
            int randomNumber = rand() % 100 + 1;
            if(optimus(randomNumber))
            {
            score++;
            }
        }
       average += score;
       }
       int score1 = (average/100)*2;
       
       cout<<"This number of attempts will cost you "<<(score1)<<" dollars. Continue? (Y/N): ";
       cin>>choice;
       if(choice == 'Y' || choice == 'y')
       {
        if(wallet < (score1))
        {
            cout<<"You do not have enough funds for this many attempts."<<endl;
        }
        else
        {
            wallet = wallet - (score1);
            for(int temp = 0; temp < attempts; temp++)
            {
                int randomNumber = rand() % 100 + 1;
                if(optimus(randomNumber))
                {
                    score++;
                }
            }

            cout<<"You have gained $"<<score<<"!"<<endl;
            wallet = wallet + score;
        }
       }
       */
     wallet = round(wallet*100.0)/100.0;

     if(wallet == 0)
     {
        cout<<"Bankrupt!"<<endl;
        break;
     }
    

     cout<<"New balance: $"<<wallet<<endl;
     
     }while(attempts != 0);

        return 0;
}
//Functions 

double hollaHollaGetDolla(double monet)
{

srand( time(NULL) );
int randomonium = rand() % 100 + 1;
double grofit = 0;
double grofit1 = 0;
double grofit2 = 0;

cout<<endl<<"Your number was "<<randomonium<<"!"<<endl;

if(true)

    if(randomonium <= 70 && randomonium >= 20 && randomonium != 50)
    {
        grofit += (monet*.5);
        cout<<"Between 20 and 70! Plus 1/2 multiplier!"<<endl;
    }
    if((randomonium % 5) == 0)
    {
        grofit += (monet*.75);
        cout<<"Multiple of 5! Plus 3/4 multiplier!"<<endl;
    }
    if(randomonium == 50)
    {
        grofit += (monet*3);
        cout<<"You got 50! triple multiplier!"<<endl;
    }
    if((randomonium % 4) == 0)
    {
        grofit += (monet*.5);
        cout<<"Multiple of 4! Plus 1/2 multiplier!"<<endl;
    }
    if((randomonium % 2) == 0)
    {
        grofit += (monet*.25);
        cout<<"Multiple of 2! Plus 1/4 multiplier!"<<endl;
    }
    if(randomonium > 70 && randomonium != 100)
    {
        grofit += (monet*.75);
        cout<<"Over 70! Plus 3/4 multiplier!"<<endl;
    }
    if(randomonium < 20 && randomonium != 1)
    {
        grofit += (monet*1.0);
        cout<<"Under 20! 100% money back!"<<endl;
    }
    if(randomonium == 1)
    {
        grofit += (monet*5);
        cout<<"You got 1! Quintuple multiplier!"<<endl;
    }
    if(randomonium == 100)
    {
        grofit += (monet*10);
        cout<<"You got 100! Decuple multiplier!"<<endl;
    }
   
    grofit = round(grofit*100.0)/100.0;
    
    if(grofit == 0)
    {
        cout<<endl<<"I'm sorry, you have lost. Try again."<<endl;
        return grofit;
    }
    cout<<endl<<"You scored "<<grofit<<"!"<<endl;
    

return grofit;


}


bool optimus(int jazz)
{
bool primed = true;
for(int i = 2; i <= jazz/2; i++)
{
    if(jazz % i == 0)
    {
        primed = false;
        break;
    }
}
return primed;
}

double round(double square)
{
if(square < 0) return ceil(square-0.5);
return floor(square+0.5);
}



