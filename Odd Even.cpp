/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter an number that we want to check:" ;
    cin>> i;
    if(i%2==0)
    {
        cout<<"Enter number"<<i<<"is Even";
    }
    else
    {
        cout<<"Enter number"<<i<<"is Odd";
    }
    return 0;
}
