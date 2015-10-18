#include <string>
#include <iostream>
using namespace std;
class Bank
{
private:
	string name;
	string acc_no;
	double balance;
public:
	Bank(string NM = " ", string AN = " " , double BL = 0.0)
	{
		name = NM;
		acc_no = AN;
		balance = BL;
	}


	string getname();
	string getacc_no();
	double getbalance()
	{ return balance;}
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
int main()
{
	Bank ahmad ("ahmad" , "20a" , 30.0);
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
		cout << "Your new balance = $ " << ahmad.getbalance()<<endl;
	}
	else if (a == "w")
	{
		cout << "Enter amount of withdraw in dollars...\n";
		double we;
		cin >> we;
		if (ahmad.getbalance() < we)
			cout << "Sorry you don't have enough balance...\nYour balance is = $"<< ahmad.getbalance()<<endl;
		else
		{
			ahmad.withdraw(we);
			cout << "Your new balance = $ " << ahmad.getbalance() << endl;
		}
	}
	else if (a == "e")
	{
		cout << "Good bye!"<<endl;
	}
	else 
		cout << "Invalid letter"<<endl;
	system("pause");
}

