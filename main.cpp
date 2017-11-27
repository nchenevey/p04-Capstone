#include <iostream>
using namespace std;

int main()
{
        int n;
        bool isPrime = true;

        cout<<"Enter a positive integer: ";
        cin>>n;

        for(int i = 2; i <= n/2; i++)
        {
                if(n % i == 0)
                {
                        isPrime = false;
                        break;
                }
        }
        if(isPrime)
        {
                cout<<"This is a prime number."<<endl;
        }
        else
        {
                cout<<"This is not a prime number."<<endl;
        }

        return 0;
}
