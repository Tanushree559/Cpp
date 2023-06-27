#include<iostream>
using namespace std;
int main()
{
	int a,b,choice,result;
	char ch;
	void printline(int size,char ch);
	int addition(int a, int b),subtraction(int a,int b),multiplication(int a,int b),division(int a,int b);
    do
	{
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<endl<<"1.Addition"<<endl;
	printline(16,'*');
	cout<<"2.Subtraction"<<endl;
	printline(16,'*');
	cout<<"3.Multiplication"<<endl;
	printline(16,'*');
	cout<<"4.Division"<<endl;
	printline(16,'*');
	cout<<"Enter your choice:";
	cin>>choice;
	switch (choice)
	{   case 1:
		result=addition(a,b);
		cout<<"The sum of "<<a<<" and "<<b<<" is= "<<result<<endl;
	    break;
	    
	    case 2:
	    result=subtraction(a,b);	
		cout<<"The difference of "<<a<<" and "<<b<<" is= "<<result<<endl;
	    break;
	    
	    case 3:
	    result=multiplication(a,b);
		cout<<"The multiplication of "<<a<<" and "<<b<<" is= "<<result<<endl;
	    break;
	    
	    case 4:
	    result=division(a,b);
		cout<<"The division of "<<a<<" and "<<b<<" is= "<<result<<endl;
	    break;
	    
	    default:
	    cout<<"Invalid choice, please enter number between 1 to 4";
	    break;
	    
    }
    cout<<"Do you want to continue(y/n)? ";
    fflush(stdin);
    cin>>ch;
    }while(ch=='y'||ch=='Y');
	return(0);
}
void printline(int size, char ch)
{
    int i;
	for(i=1;i<=size;i++)
	cout<<ch;
	cout<<endl;	
}
int addition(int a, int b)
{
	return(a+b);
}
int subtraction(int a, int b)
{
	return(a-b);
}
int multiplication(int a, int b)
{
	return(a*b);
}
int division(int a, int b)
{
	return(a/b);
}