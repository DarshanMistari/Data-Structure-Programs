#include<iostream>
using namespace std;
int main()
{
	int n;
	int num;
	int a[num];
	int temp;
	int position=0;
	int i;
	cout<<"Enter the Array Size :";
	cin>>n;
	
	cout<<"Enter the Array Element :";
	for(int i=0; i<n; i++)
	{
		cin>> a[i];
	}
	
	cout<<"Enter the Search Number :";
	cin>>num;
	
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			temp=1;
			position=i+1;
			break;
		}
	}
	
	if(temp == 0)
	{
		cout<<"Array is Not Found";
	}
	else
	{
		cout<<num<<" Number Found Position :"<<position;
	}
}
