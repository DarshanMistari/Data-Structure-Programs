#include<iostream>
using namespace std;
int main()
{
	int a[5]={20,10,50,40,30};
	int n=5,x,i;
	
	cout<<"Enter the Search Elements :";
	cin>>x;
	
	for(i=0; i<n; i++)
	{
		if(a[i]==x)
		{
			cout<<x<<" Array Element is Sucessfully Search :"<<i;
			break;
		}
	}
	if(i==n)
	{
		cout<<x <<" Array Element is not Search ";
	}
}
