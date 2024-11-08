#include<iostream>
using namespace std;
class bank
{
	private:
	char name[100],address[200],y;
	int bal,a,b;
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();
};
void bank::open_account()
{
    cout<<"Enter your name :: ";
    cin.ignore();
	cin.getline(name,100);
	cout<<"Enter your address :: ";
	cin.ignore();
	cin.getline(address,100);
	cout<<"Which type of account you want to open saving(s) or cuurent(c) :: ";
	cin>>y;
	cout<<"Enter account for deposit :: ";
	cin>>bal;
	cout<<"Your acocount is created.";
	
	
}
void bank::deposit_money()
{
	cout<<"\nEnter how much you deposit :: \n";
	cin>>a;
	bal+=a;
	cout<<"\nTotal balance you deposit ::"<<bal;
	

}
void bank::display_account()
{
	cout<<"\nYour full name :: "<<name;
	cout<<"\nYour address :: "<<address;
	cout<<"\nType of account that you open :: "<<y;
	cout<<"\nAmount you deposit  :: "<<bal;
	
	
	
}
void bank::withdraw_money()
{
	cout<<"\nEnter the withdraw money :: ";
	cin>>b;
	bal-=b; 
	cout<<"\nTotal money after withdraw :: "<<bal;
	
}
int main()
{char x='n';
int ch;
	bank obj;
	do{
	
	cout<<"1) Open account\n";
	cout<<"2) Deposit money\n";
	cout<<"3) Withdraw  money\n";
	cout<<"4) Display account\n";
	cout<<"5) Exit\n";
cout<<"Select and option from above:";
cin>>ch;
switch(ch)
{
	case 1:
		cout<<"\n Open Account :: ";
		obj.open_account();
		break;
			case 2:
					cout<<"\n Deposit money :: ";
		obj.deposit_money();
		break;
			case 3:
				cout<<"\n withdraw money :: ";	
		obj.withdraw_money();
		break;
			case 4:
					cout<<"\nDisplay Account details :: ";
		obj.display_account();
		break;
		case 5:
		if(ch==5)
		{
			exit(0);
		}
		default:
			cout<<"Invalid choice.";
		}
		cout<<"\nDo you want to continue the process:";
		cin>>x;
		
	}
	while(x=='y'||x=='Y');
	
	
}
	
