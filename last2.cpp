#include<iostream>
#include<string.h>
using  namespace  std;
class Point
{
	public:
	int a;
	void set(int p)
	{
		this->a=p;
	}
	void get()
	{
		cout<<"A-> "<<this->a<<endl;
	}
	Point operator++(int)
	{
		Point temp;
		temp.a=this->a++;
	}
};
int main()
{
	Point p1,p2;
	p1.set(10);
	p1.get();
	p2=p1++;
	p1.get();
	return 0;
}
