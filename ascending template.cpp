#include<iostream>
using namespace std;
template<typename T>
T aces(T n2)
{
	T a[30],i,j,temp,n;
	n=n2;
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<"number"<<endl;
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Number in ascending order are"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int n1,result;
	printf("Enter how many number you want to check");
	cin>>n1;
	
	result=aces<int>(n1);
}
