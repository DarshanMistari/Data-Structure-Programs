#include<iostream>
using namespace std;
int main()
{
int a[5]={20,10,50,40,30};
int n=5, i , j;

cout<<"Before Sorting Elements :\n";
for(int i=0; i<n; i++)
{
	cout<<a[i]<<endl;
}

for(int i = 0; i < n-1; i++)
{
	for(int j = 0; j < n-i-1; j++)
	{
		if(a[j]>=a[j+1])
		{
		int temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	    }
	}
}

cout<<"After Sorting  Elements :\n";
for(int i = 0; i < n; i++)
{
	cout<<a[i]<<endl;
}

}
