
#include <iostream>

using namespace std;

int	main(void)
{
	int		h[1000], w[1000];
	size_t	i, j;

	i = 0;
	while (1)
	{
		cin >> h[i] >> w[i];
		if (h[i] == 0 && w[i] == 0)
			break;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		for (int l = 0; l < h[j]; l++)
		{
			for (int k = 0; k < w[j]; k++)
			{
				if (l % 2 == 0 && k % 2 == 0)
					cout << "#";
				else if (l % 2 == 0 && k % 2 == 1)
					cout << ".";
				else if (l % 2 == 1 && k % 2 == 0)
					cout << ".";
				else
					cout << "#";
			}
			cout << endl;
		}
		cout << endl;
	}
	return (0);
}