#include<iostream>
using namespace std;

class stack
{	

	public:

	int top=-1;
	int array[10];
	public:
	void push()
	{
		if(top==10)
		{
			isfull();
		}
		else
		{
			top++;
			int n;
			cout<<"enter the number";
			cin>>n;
			array[top]=n;
		}
	}
public:
	void pop()
	{
		if(top==-1)
		{
			isempty();
		}
		else
		{
			top--;
		}
	}
public:
	void display()
	{
		int i;
		cout<<"stack element is"<<endl;
		for(i=top;i>=0;i--)
		{
			cout<<array[i]<<endl;
		}

	}
public:
	void isfull()
	{
		cout<<"stack overflow"<<endl;
	}
public:
	void isempty()
	{
		cout<<"stack underflow"<<endl;
	}

};
int main()
{
	stack s;
	int choice,c=0;
	while(c!=2)
	{
		cout<<"enter  what you want to do1.push,2.pop,3.display"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				s.push();
			break;
			case 2:
				s.pop();
			break;
			case 3:
				s.display();
			break;
			default :
				c=2;

		}
	}
}
	






