#include<iostream>
#include<string>
using namespace std;
void towerofHanoi(int n,char src, char dest, char helper)
{
    if(n==0)
    {
        return; //base case
    }
    towerofHanoi(n-1,helper,dest,src);
}
int main()
{
    towerofHanoi(3,'A','B','C');
    return(0);
}