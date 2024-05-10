#include<iostream>
using namespace std;
int Queue[5], rear=-1 , front=-1 , n=5 , x;

void insert()
{
	if(rear==n-1)
	{
		cout<<"Queue is Overflow";
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		cout<<"Queue is Insert the Element :";
		cin>>x;
		rear++;
		Queue[rear]=x;	
	}
}
int main()
{
insert();
insert();
insert();
insert();
insert();	
insert();
}
