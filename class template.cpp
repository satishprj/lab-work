#include<iostream>
using namespace std;
template<class T>
class A{
	T num1,num2;
	public:
		A(T x,T y)
		{
			num1=x;
			num2=y;
			
		}
		T print()
		{
			return num1+num2;
		}
};
int main()
{
	A<int> obj(10,11);
	obj.print();
	A<float> obj1(10.1,11.1);
	obj1.print();
	cout<<"sum is"<<obj.print()<<endl;
	cout<<"sum is"<<obj1.print();
	cout<<"hii";
	cout<<" ";
	cout<<"l";
}
