#include<iostream>
using namespace std;
int main()
{
    char ch='a';
    char*cptr=&ch;
    cout<<cptr<<endl;
    cptr++;
    cout<<cptr<<endl;
    return(0);
}