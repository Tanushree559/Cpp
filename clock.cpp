#include <iostream>
using namespace std;
class time
{
	private:
	    int hours;
		int minutes;
		int seconds;
	public:
		void settime(int h,int m,int s);
		void display_time()
		{
			cout<<"Time is: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
		void sum(time t1, time t2);
};
void time::settime(int h, int m,int s)
{
	hours=h;
	minutes=m;
	seconds=s;
}
void time::sum(time t1,time t2)
{
	seconds=t1.seconds+t2.seconds;
	minutes=t1.minutes+t2.minutes+(seconds/60);
	hours=t1.hours+t2.hours+(minutes/60);
	minutes%=60;
	seconds%=60;
}
int main()
{
	time t1,t2,t3;
	t1.settime(3,45,43);
	t2.settime(4,25,33);
	cout<<"t1=> ";
	t1.display_time();
	cout<<"t2=> ";
	t2.display_time();
	cout<<"t3=> ";
	t3.sum(t1,t2);
	t3.display_time();
	return(0);
	
}