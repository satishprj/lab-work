//WAP to overload a function named func area(),which calculates and returns area of a circle and
//rectangle. Assume appropriate number and type of arguments and return type.
#include<iostream>
using namespace std;
class Area{
	public:
	float area(float x )
	{
		float circle;
		circle=3.14*x*x;
		return circle;
	}
	int area(int l,int b )
	{
		int rect;
		rect=l*b;
		return rect;
	}
};
int main()
{
	Area obj;
	float a;
	int b,c;
	cout<<"Enter the radius";
	cin>>a;
	cout<<"Enter the length and breadth";
	cin>>b>>c;
	cout<<"The area of circle and rectangulae is "<<obj.area(a)<<"\t"<<obj.area(b,c);
}
