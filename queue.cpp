#include<iostream>
using namespace std;
class Queue
{
	public:
	int queue_array[10];
	std:int front=-1;
	int rear=-1;
	public:
		void inqueue()
		{
			if(rear==10)
			{
				isfull();
			}
			else
			{
				int element;
				rear++;
				cout<<"enter the element you want to insert"<<endl;
				cin>>element;
				queue_array[rear]=element;
			}
			
		}
		void dequeue()
		{
			if(rear==-1)
			{
				isempty();
				
			}
			else
			{
				for(int i=0;i<(rear-1);i++)
				{
					queue_array[i]=queue_array[i+1];
				}
				rear--;
			}
		}
		void isempty()
		{
			cout<<"queue is underflow"<<endl;
		}
		void isfull()
		{
			cout<<"queue is overflow"<<endl;
		}
		void display()
		{
			cout<<"element of queue is :"<<endl;
			for(int i=0;i<=rear;i++)
			{
				cout<<queue_array[i]<<endl;
			}
		}
	
};
int main()
{
	Queue q;
	int choice,temp=2;
	while(temp==2)
	{
		cout<<"enter the choice1.insertion,2.deletion,3.display"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				q.inqueue();
				break;
			case 2:
				q.dequeue();
				break;
			case 3:
				q.display();
				break;
			default:
				temp=0;
				break;
		}
	}
	
}
