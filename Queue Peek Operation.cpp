#include<iostream>
using namespace std;

int Queue[5],  rear=-1, front=-1, n=5, x;

void insert()
{
	if(rear == n-1)
	{
		cout<<"Queue is Overflow";
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		else
		{
			cout<<"Queue is inserted the Elements :";
		    cin>>x;
		    rear++;
		    Queue[rear] = x;
		}
	}
}

int peek()
{
	if(rear==-1)
	{
		return 0;
	}
	else
	{
		return Queue[front];
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
	
	int y = peek();
	cout<<"Queue Peek the First Elements :"<<y;
	
}
