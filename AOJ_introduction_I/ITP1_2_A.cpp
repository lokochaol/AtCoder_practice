#include <iostream>

using namespace std;

int	main(void)
{
	int	a;
	int	b;

	cin >> a >> b;
	if (a < b)
		cout << "a < b" << endl;
	else if(a > b)
		cout << "a > b" << endl;
	else
		cout << "a == b" << endl;
	return (0);
}