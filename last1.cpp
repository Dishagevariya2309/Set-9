#include<iostream>
#include<string.h>
using  namespace  std;
class Point
{
	public:
	int a,b;
	void set(int p,int q)
	{
		this->a=p;
		this->b=q;
	}
	void get()
	{
		cout<<"A-> "<<this->a<<endl;
		cout<<"B-> "<<this->b<<endl;
	}
	Point operator+(Point n)
	{
		Point temp;
		temp.a=this->a+n.a;
		temp.b=this->b+n.b;
		return temp;
	}
};

int main()
{
	Point p1,p2,p3;
	p1.set(5,10);
	p1.get();
	
	p2.set(10,20);
	p2.get();
	
	p3=p1+p2;
	p3.get();
	return 0;
		
}
