//WAP to calculate the area of rectangle by using default argument.
#include<iostream>
using namespace std;
class C{
	public:
	 void area(int a,int b=5)
	{
		int result;
		result = a*b;
		
	}
};
int main()
{
	int l;
	C obj;
	cout<<"Enter length ";
	cin>>l;
	cout<<"\n The area of rectangle is "<<obj.area(l)<<endl;
	return 0;	
}
