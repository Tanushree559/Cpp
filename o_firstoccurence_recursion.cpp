#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int main()
{
    int arr[]={4,2,3,3,4,2,6};
    cout<<firstocc(arr,7,0,2)<<endl;
    return(0);
}