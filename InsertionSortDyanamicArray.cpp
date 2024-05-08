#include<iostream>
using namespace std;
int main()
{
	int n , i , j, temp;
	cout<<"Enter the Size of Array :";
	cin>>n;
	
	int a[n];
	cout<<"Enter the Array Elements :";
	for(i=0; i<n; i++)
	{
		cin>>a[i]; 
	}
	
	for(i=1; i<n-1; i++)
	{
		temp=a[i];
		j=i-1;
		
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	cout<<"After Sorted Element :\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}
