#include <iostream>
using namespace std;
class Account {
private:
	string accno;
	string acctitle;
	double amount;
	char acctype;
public:
	Account() {
		string accno = "MEEZAN";
		string acctitle = "ABAID";
		double amount = 5000;
		char acctype = 'c';
	}
	Account(string a, string b, double c, char d) {
		accno = a;
		acctitle = b;
		amount = c;
		acctype = d;
	}
	Account(const Account& b) {
		this->amount = b.amount;
		this->accno = b.accno;
		this->acctype = b.acctype;
		this->acctitle = b.acctitle;

	}
	void deposit(double amo) {
		amount = amount + amo;
		cout << "you deposited " << amo << " rupees succesfully" << endl;
	}
	void widthdraw(double a) {
		amount = amount - a;
		cout << "you withdraw " << a << " amount"<<endl;
	}
	void changetype() {
		cout << "Enter your Account Type :";
		char type;
		cin >> type;
		acctype = type;
		cout << endl;
	}
	void accbalance() {
		cout << "your balance is:" << amount << endl;

	}
	void accinfo() {
		cout << "Your Account Number is:" << accno << endl;
		cout << "Your Account Title is:" << acctitle << endl;
		cout << "Your Amount is:" << amount << endl;
		cout << "Your Account Type is:" << acctype << endl;
	}
	void getaccountdata() {
		cout << "Your Acccount number is:" << accno << endl;

	}
	void getamount() {
		cout << "Your total Amount is:" << amount << endl;

	}
	void getaccotitle() {
		cout << "Your Account Title is:" << acctitle << endl;

	}
	void getaccotype() {
		cout << "Your Account Type is:" << acctype << endl;

	}
	void setaccno(string a) {
		accno = a;
	}
	void setacctitle(string b) {
		acctitle = b;
	}
	void setacctype(char c) {
		acctype = c;
	}
	void setamount(double d) {
		amount = d;
	}
	~Account() {
		cout << "destructor called" << endl;
	}
};
int main() {

	Account A1("meezan65 ","Abaid",4000, 'S');
	A1.getamount();
	A1.deposit(1000);
	A1.getamount();
	A1.widthdraw(700);
	A1.getamount();
	A1.changetype();
	Account A2 = A1;
	A2.deposit(5000);
	cout << "detail of 1st person" << endl;
	A1.accinfo();
	cout << endl;
	cout << "detail of 2nd person" << endl;
	A2.accinfo();
	return 0;

}