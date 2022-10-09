#include "main.hpp"

int main()
{
	vector<int> number;
	int size = 10, result;
	int usernum;
	srand(time(0));
	makevector(number, size);
	printvector(number);
	cout << "Enter the one integer value\n";
	cin >> usernum;
	result = deleteone(number, usernum);
}