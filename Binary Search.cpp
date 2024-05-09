#include<iostream>
using namespace std;
 int main()
 {
 	int a[9]={10,20,30,40,50,60,70,80,90};
 	int n=9 , middle ,  low=0,  high=n-1, x;
 	int i;
 	
 	cout<<"Enter the Search Elements :";
 	cin>>x;
 	
 	middle= ( low + high ) / 2;
 	
 	while( low <= high )
 	{
 		if( a[middle] < x )
 		{
		 low = middle + 1;	
		}
		else if( a[middle] == x )
		{
			cout<< x <<"  Element is Search "<< middle+1;
			break;
		}
		else
		{
			high = middle - 1;
			
		}
		middle = (low + high) / 2;
	}
	if( low > high )
	{
		cout<<"Element is Not Found in Arrray :"<<x;
	}
 	
 	
 }
	
