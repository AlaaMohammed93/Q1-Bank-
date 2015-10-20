#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Bank
{
private:
	string name;
	string acc_no;
	double balance;
public:
	Bank();
	Bank(string , string , double );
	string getname();
	string getacc_no();
	double getbalance()
	{return balance;}
	void deposite(double);
	void withdraw(double);
};
string Bank::getname()
{
	string z = name;
	
		return z;
}
string Bank::getacc_no()
{
	string y = acc_no;
	
	return y;
}
void Bank :: deposite(double DP)
{
	balance = balance + DP;

}
void Bank :: withdraw(double WD)
{
	balance = balance - WD;
}
Bank::Bank(string NM = " ", string AN = " ", double BL = 0.0)
{
	name = NM;
	acc_no = AN;
	balance = BL;
}
int main()
{
	Bank ahmad("Ahmad", "20a", 30.0);
	cout << "To creat a new account press 1, To access old account press 2" << endl;
	int x;
	cin >> x;
	if (x == 1)
	{
		string f = "21a";
		string name;
		double Bla;
		cout << "Enter account name\n";
		cin >> name;
		cout << "Enter balance in dollars\n";
		cin >> Bla;
		Bank new_acc(name,f,Bla);
		cout << "Name is: " << new_acc.getname() << endl;
		cout << "Account no.: " << new_acc.getacc_no() << endl;
		cout << "Balance = $ " << new_acc.getbalance() << endl;

		f="22a";
	}
	else if (x == 2)
	{
		cout << "Enter account name\n";
		string username;
		cin >> username;
		if (username == "Ahmad" || username == "ahmad")
		{
			cout << "Name is: " << ahmad.getname() << endl;
			cout << "Account no.: " << ahmad.getacc_no() << endl;
			cout << "Balance = $ " << ahmad.getbalance() << endl;
			cout << "Press d for Deposite, press w for Withdraw or press e to Exit\n";
			string a;
			cin >> a;
			if (a == "d")
			{
				cout << "Enter amount of deposit in dollars...\n";
				double de;
				cin >> de;
				ahmad.deposite(de);
				cout << "Your new balance = $ " << ahmad.getbalance() << endl;
			}
			else if (a == "w")
			{
				cout << "Enter amount of withdraw in dollars...\n";
				double we;
				cin >> we;
				if (ahmad.getbalance() < we)
					cout << "Sorry you don't have enough balance...\nYour balance is = $" << ahmad.getbalance() << endl;
				else
				{
					ahmad.withdraw(we);
					cout << "Your new balance = $ " << ahmad.getbalance() << endl;
				}
			}
			else if (a == "e")
			{
				cout << "Good bye!" << endl;
			}
			else
				cout << "Invalid letter" << endl;
		}
		else
		{
			cout << "Invalid account\n";
			exit;
		}
	}
	
	else
	{
		cout << "Error\n";
		exit;
	}
	
	
	system("pause");
}


