#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

	double hours1, hours2, hours3, hours4, rate, amtUsed1, amtUsed2, amtUsed3, labor;
	double cost1, cost2, cost3, prodsum, sales;
	string name1, name2, name3, name4, prod1, prod2, prod3;

	cout << "Enter the names of your employees." << endl;
	cout << "After each name, hit enter." << endl;
	getline(cin, name1);
	getline(cin, name2);
	getline(cin, name3);
	getline(cin, name4);

	cout << "Enter employees hourly rate." << endl;
	cin >> rate;

	cout << "Enter the 3 products you would like to track." << endl;
	cout << "After each product hit enter." << endl;
	cin.ignore();
	getline(cin, prod1);
	getline(cin, prod2);
	getline(cin, prod3);

	cout << "How much does the " << prod1 << " cost per lb?" << endl;
	cin >> cost1;
	cout << "and how many lbs did you use?" << endl;
	cin >> amtUsed1;
	cout << "How much does the " << prod2 << " cost per lb?" << endl;
	cin >> cost2;
	cout << "and how many lb did you use?" << endl;
	cin >> amtUsed2;
	cout << "How much does the " << prod3 << " cost per lb?" << endl;
	cin >> cost3;
	cout << "and how many lb did you use?" << endl;
	cin >> amtUsed3;

	prodsum = (cost1 * amtUsed1) + (cost2 * amtUsed2) + (cost3 * amtUsed3);

	cout << "How many hours did " << name1 << " work?" << endl;
	cin >> hours1;
	cout << "How many hours did " << name2 << " work?" << endl;
	cin >> hours2;
	cout << "How many hours did " << name3 << " work?" << endl;
	cin >> hours3;
	cout << "How many hours did " << name4 << " work?" << endl;
	cin >> hours4;

	cout << "What was this weeks sales?" << endl;
	cin >> sales;


	for (int i = 0; i < 50; ++i) {
		cout << endl;
	}

	labor = (hours1 + hours2 + hours3 + hours4) * rate;
	cout << fixed << setprecision(2);
	cout << "You spent $" << (labor) << " on labor and " << endl;
	cout << "$" << prodsum << " on products this week. " << endl;
	cout << "In total, you made a profit of $" << (sales - (labor + prodsum)) << " for the week." << endl;

	return 0;
}