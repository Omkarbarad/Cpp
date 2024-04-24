#include<iostream>
using namespace std;
class complex
{
	private:
		float real;
		float imag;
	public:
		complex():real(0),imag(0){}
		void input()
		{
			cout<<"enter the real and imaganary numbers";
			cin>>real>>imag;
		}
		complex operator -(complex c2)
		{
			complex temp;
			temp.real=real-c2.real;
			temp.imag=imag-c2.imag;
			return temp;
		}
		complex operator +(complex c2)
		{
			complex t;
			t.real=real-c2.real;
			t.imag=imag-c2.imag;
			return t;
		}
		void output()
		{
			if(imag<0)
			{
				cout<<"output complex number:"<<real<<imag<<"i"<<endl;
			}
			else
			{	
				cout<<"output complex number:"<<real<<"+"<<imag<<"i";
			}
		}
};
int main()
{
	complex c1,c2,result,r;
	cout<<"enter first complex number"<<endl;
	c1.input();
	cout<<"enter the second number "<<endl;
	c2.input();
	result=c1-c2;
	result.output();
	r=c1+c2;
	r.output();
}
