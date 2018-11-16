#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void get()
		{
			cout<<"enter the value of a";
			cin>>a;
		}
};
class B : virtual public A
{
	public:
		int b;
		void get()
		{
			cout<<"enter the value of b";
		}
}
