#include<iostream>
using namespace std;
int lastocc(int arr[],int n,int i,int key)
{
    int restArray=lastocc(arr,n,i+1,key);
    if(restArray!=-1)
    {
        return restArray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={4,2,3,3,4,2,6};
    cout<<lastocc(arr,7,0,2)<<endl;
    return(0);
}