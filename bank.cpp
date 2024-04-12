#include<iostream>
#include<cstdlib>
#include<ctype.h>
using namespace std;
class Bank{
	private:
		//String name;
		long long acc;
		char type[10];
		int pin;
		long long tot;
		long long amt;
	public:
		void setval(){
			/*cout<<"\nEnter the name: ";
			cin.ignore();
			getline(cin,name);*/
			
			cout<<"\nEnter the account number: ";
			cin>>acc;
			if(acc<=0){
				cout<<"\nEnter positive account number";
				return;
			}
			
			cout<<"\nEnter the account type: ";
			cin>>type;
			
			cout<<"\nEnter the 4-digit pin number: ";
			cin>>pin;
			if(pin<1000 || pin>9999)
			{
				cout<<"\nInvalid pin. Enter 4-digit pin";
			}
			
			cout<<"\nEnter the balance: ";
			cin>>tot;
			
		}
	  void deposit()
		{
			int epin;
			cout<<"\nEnter the PIN: ";
			cin>>epin;
			if(epin!=pin)
			{
				cout<<"\nInvalid Pin";
				return;
			}
			cout<<"\nEnter the deposit amount: ";
			cin>>amt;
			if(amt<=0){
				cout<<"\nEnter positive deposit amt";
				return;
			}
			tot+=amt;
			cout<<"\nDeposited successfully";
			cout<<"Total bal: "<<tot;
			
		}
		void withdraw()
		{
			int epin;
			cout<<"\nEnter the PIN: ";
			cin>>epin;
			if(epin!=pin)
			{
				cout<<"\nInvalid Pin";
				return;
			}
			cout<<"\nEnter the withdrawal amount: ";
			cin>>amt;
			if(amt<=0 || amt>tot){
				cout<<"\nInsufficient balance";
				return;
			}
			tot-=amt;
			cout<<"\nWithdrawal successfully";
			cout<<"Total bal: "<<tot;
			
		}
		void bal()
		{
				int epin;
			cout<<"\nEnter the PIN: ";
			cin>>epin;
			if(epin!=pin)
			{
				cout<<"\nInvalid Pin";
				return;
			}
			//cout<<"\nName: "<<name;
			cout<<"\nBalance: "<<tot;
		}
		void chaPIN(){
			int epin,npin;
			cout<<"\nEnter the PIN: ";
			cin>>epin;
			if(epin!=pin)
			{
				cout<<"\nInvalid Pin";
				return;
			}
			cout<<"\nEnter the 4-digit pin number: ";
			cin>>npin;
			if(npin<1000 || npin>9999)
			{
				cout<<"\nInvalid pin. Enter 4-digit pin";
			}
			pin=npin;
			cout<<"\nPIN changed successfully";
		} 
};
int main()
{
	Bank b;
	int choice;
	while(1)
	{
		cout<<"\nWELCOME";
		cout<<"\nEnter the option: ";
		cout<<"\n1.Enter details";
		cout<<"\n2.deposit";
		cout<<"\n3.withdraw";
		cout<<"\n4.Balance enquiry";
		cout<<"\n5.Change pin";
		cin>>choice;
		switch(choice)
		{
			case 1:
				b.setval();
				break;
			case 2:
				b.deposit();
				break;
			case 3:
				b.withdraw();
				break;
			case 4:
				b.bal();
				break;
			case 5:
				b.chaPIN();
				break;
			case 6:
				exit(1);
				break;
			default:
				cout<<"\nEnter the right option";
				break;
		}
	}
	return 0;
}
