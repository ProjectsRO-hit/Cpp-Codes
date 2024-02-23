#include <iostream>

using namespace std;

int changeConst(const int &n)
{
	int* ptr = const_cast<int*>(&n);

	*ptr = 10;

	return n;
}

int main()
{
	const int local = 5;

	cout << changeConst(local) << endl;
	cout << local << endl;

	return EXIT_SUCCESS;
}

/* output:
	10
	5
*/