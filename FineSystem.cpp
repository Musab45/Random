#include<iostream>
using namespace std;
int main()
{
	int days, fine = 1;
	bool isPaid = false;
	cout << "Enter Days: ";
	cin >> days;
	fine = days * fine;
	if (fine <= 7)
	{
		cout << "No Fine!";
	}
	else
	{
		int over;
		char answer;
		over = fine - 7;
		cout << "Fine is " << over<<"$";
		cout << "Pay Now?(y/n): ";
		cin >> answer;
		if (answer == 'y')
		{
			isPaid = true;
		}
		else
		{
			cout << "Please clear your due fine.";
		}
	}
	return 0;
}