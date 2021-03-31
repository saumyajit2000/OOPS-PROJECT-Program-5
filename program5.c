#include<iostream>
using namespace std;
class account
{
	public:
		string name,type;
		int ac,w,d,b,i;
		void input()
		{
			cout<<"enter name: ";  cin>>name;
			cout<<"account number: ";  cin>>ac;
			cout<<"type of account: ";  cin>>type;
			cout<<"balance in your account: "; cin>>b;
		}
		void display()
		{
			int n;
			float intrest,rate,time;
			cout<<"1. for personal information. "<<endl<<"2. for deposit money."<<endl<<"3. for withdraw money"<<endl;
			cout<<"Enter n: ";
			cin>>n;
			cout<<endl;
			switch(n)
				{
					case 1:
						cout<<"Name: "<<name<<endl<<"Account number: "<<ac<<endl<<"Net Balance: "<<b<<endl<<"Type of account: "<<type<<endl;
						break;
					case 2:
						cout<<"deposit: ";  cin>>d;
						b=b+d;
						cout<<"Balance: "<<b<<endl;
						cout<<"rate: ";  cin>>rate;
						cout<<"time: ";  cin>>time;
						intrest=(b*rate*time)/100;
						cout<<"Net Balance: "<<b+intrest;
						break;
					case 3:
						cout<<"withdraw: ";  cin>>w;
						b=b-w;
						cout<<"Balance: "<<b<<endl;
						cout<<"rate: ";  cin>>rate;
						cout<<"time: ";  cin>>time;
						intrest=(b*rate*time)/100;
						cout<<"Net Balance: "<<b+intrest;
						break;
					default:
						cout<<"Net Balance: "<<b;
				}
				cout<<endl;
				if(b<=500)
			{
				cout<<"Balance is insufficient.";
			}
		};
};
int main()
{
	account a1;
	a1.input();
	a1.display();
}
