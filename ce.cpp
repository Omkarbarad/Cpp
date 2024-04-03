#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
	public:char name[20],designation[10],employee_id[40];
		    float basic_salary,net_salary;
	public:void getdata();
		     void putdata(int);
};
void employee:: getdata()
{
	float da,hra;
		cout<<"enter name"<<endl;
		cin>>name;
		cout<<"enter designation"<<endl;
		cin>>designation;
		cout<<"enter  employee id"<<endl;
		cin>>employee_id;
		cout<<"enter basic salary"<<endl;
		cin>>basic_salary;
		da=basic_salary*0.8;
		hra=basic_salary*0.2;
		net_salary=basic_salary+da+hra;
		
	
}
void employee::putdata(int sr)
{ 	
	
		cout<<sr<<setw(14)<<name<<setw(15)<<designation<<setw(15)<<employee_id<<setw(15)<<net_salary<<endl;
}
int main()
{	int i,sr=0;
	employee e[3];
	for(i=0;i<3;i++)
	{	
		e[i].getdata();
	}
	cout<<"employee data"<<endl;
	cout<<"sr_no"<< setw(10)<< "name"<< setw(15)<<" designation"<< setw(15)<<" employee_id"<< setw(15)<< "net salary "<<endl;
	
	for(i=0;i<3;i++)
	{
		sr++;
		e[i].putdata(sr);
	}	
}









