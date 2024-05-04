#include<iostream>
using namespace std;
class b
{
	public:
	void display()
	{
		cout<<"this is base class display"<<endl;
	}
	void New()
	{	
		cout<<"this is base class new"<<endl;
	}
	void met()
	{
		cout<<"met"<<endl;
	}

	
};
class d1:virtual public b
{
	public:
	void display()
	{
		cout<<"this is d1 class display"<<endl;
	}
	void New()
	{	
		cout<<"this is d1 class new"<<endl;
	}
};
class d2:virtual public b
{
	public:
	void display()
	{
		cout<<"this is d2 class display"<<endl;
	}
	void New()
	{	
		cout<<"this is d2 class new"<<endl;
	}
};
class d3:public d1,public d2
{
	public:
	void display()
	{
		cout<<"this is d3 class display"<<endl;
	}
	void New()
	{	
		cout<<"this is d3 class new"<<endl;
	}
};
int main()
{
	b* f;
 	d3 k;
	f=&k;
	d1 i;
	f->met();
	f->display();
	f->New();
}

