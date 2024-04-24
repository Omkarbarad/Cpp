#include<iostream>
#include<iomanip>
using namespace std;
class person
{
	public:
	char name[20],address[20],email[50];
	long int mobile_no;

};
class student:public person
{
	public:char prn[10],division[20];
	            float grade_point;
			int sr=0,st=0;
	public:
	void getdata()
	{	
		
		
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter prn"<<endl;
			cin>>prn;
			cout<<"enter address"<<endl;
			cin>>address;
			cout<<"enter email"<<endl;
			cin>>email;
			cout<<"enter division"<<endl;
			cin>>division;
			cout<<"enter mobile number"<<endl;
			cin>>mobile_no;
			cout<<"enter grade point"<<endl;
			cin>>grade_point;
		
	}
	void putdata()
	{	
			sr++;
			cout<<sr<<setw(14)<<name<<setw(12)<<prn<<setw(8)<<division<<setw(12)<<grade_point<<endl;	
	}
	void ptdata()
	{
		st++;
		cout<<st<<setw(14)<<name<<setw(12)<<prn<<setw(8)<<division<<setw(12)<<grade_point<<endl;	
	}
};
class employee:public person
{
	public:char designation[10],employee_id[40];
		    float basic_salary,net_salary;
			int sr=0;
	public:
	void getdata()
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
	
		
	   void putdata()
	{
		sr++;
		cout<<sr<<setw(14)<<name<<setw(15)<<designation<<setw(15)<<employee_id<<setw(15)<<net_salary<<endl;
	}

};
int main()
{
	int choice;
	cout<<"enter the choice1.student,2.employee"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			student s[3];
		for(int i=0;i<3;i++)
		{
		
			s[i].getdata();
		
		}
		cout<<"personal data"<<endl;
		cout<<"sr_no"<< setw(10)<< "name"<< setw(15)<<" address"<< setw(15)<<" email"<< setw(20)<< "mobile_no "<<endl;
		for(int i=0;i<3;i++)
		{
			s[i].putdata();
		
		}
		cout<<"acadamic data"<<endl;
		cout<<"sr_no"<< setw(10) <<"name"<< setw(10)<< "prn"<< setw(12)<<" division"<< setw(15)<<"grade_point"<<endl;
		for(int i=0;i<3;i++)
		{
			s[i].ptdata();
		}
		break;
		case 2:
		employee e[3];
		for(int i=0;i<3;i++)
		{	
			e[i].getdata();
		}
		cout<<"employee data"<<endl;
		cout<<"sr_no"<< setw(10)<< "name"<< setw(15)<<" designation"<< setw(15)<<" employee_id"<< setw(15)<< "net salary "<<endl;
	
		for(int i=0;i<3;i++)
		{
			e[i].putdata();
		}	
		break;
		default:
			cout<<"wrong choice"<<endl;
		break;
	}
}
		
