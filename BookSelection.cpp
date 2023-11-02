//Book Issue System
#include<iostream>
using namespace std;
int main()
{
	//Books Data
	string books[11] = { "LOL", "Silver Sky", "The Autumn Tree", "Cindrella", "The Dark Valley",
		"Catching Fire", "The Book Theif", "Paper Towns", "The Donut Trap", "The Hollow", "Second House" };

	//Interface
	cout << "Library!" << endl;
	cout << "\nSelect a Book:" << endl;
	cout << "1. " << books[1] << endl;
	cout << "2. " << books[2] << endl;
	cout << "3. " << books[3] << endl;
	cout << "4. " << books[4] << endl;
	cout << "5. " << books[5] << endl;
	cout << "6. " << books[6] << endl;
	cout << "7. " << books[7] << endl;
	cout << "8. " << books[8] << endl;
	cout << "9. " << books[9] << endl;
	cout << "10. " << books[10] << endl;

	//User-Input
	int n;
	cout << "\nEnter Book Index(1 - 10): ";
	cin >> n;
	cout << "You have borrowed the book: " << books[n] << endl;
	cout << "Please return the book within 7 days.";
	return 0;
}