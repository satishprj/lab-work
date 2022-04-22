//Using inline function,WAP to add two numbers and return sum.
#include<iostream>
using namespace std;
class S{
	public:
		

inline int displaySum(int num1,int num2)
{
	
	return num1+num2;
}
};
int main()
{
	int a,b;
	S obj;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"The sum of number is "<<obj.displaySum(a,b);
}
