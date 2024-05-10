#include<iostream>
using namespace std;

int Queue[5] , rear=-1 ,front=-1 , n=5, x;

void insert()
{
	if(rear == n-1)
	{
		cout<<"Queue is Overflow \n";
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		cout<<"Queue is Insert the Elements :";
		cin>>x;
		rear++;
		Queue[rear]=x;
	}
}

void deleted()
{
	if(front == -1)
	{
		cout<<"\n Queue is Empty ";
	}
	else
	{
		cout<<"\n Queue Element is deleted :"<<Queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
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
	
	deleted();
	deleted();
	deleted();
	deleted();
	deleted();	
	deleted();
}
