#include <iostream>
using namespace std;

// Function to check leap year
bool checkYear(int year)
{
	if (year % 400 == 0) {
		return true;
	}

	
	else if (year % 100 == 0) {
		return false;
	}

	
	else if (year % 4 == 0) {
		return true;
	}

	
	else {
		return false;
	}
}


int main()
{
	int year;
    cout << "Enter a year: ";
    cin >> year;
	checkYear(year) ? cout << "Leap Year"
					: cout << "Not a Leap Year";

	return 0;
}
