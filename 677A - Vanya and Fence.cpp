#include <iostream>
using namespace std;
int main()
{
	int n, h ,sum = 0;
	cin >> n >> h;
	for (int i = 1; i <= n;i++)
	{
	    int m;
		int hieghtppl;
		cin >> hieghtppl;
		if (hieghtppl <= h)
		{
			m = 1;
		}
		else
		{
			m = 2;
		}
		sum += m;
	}
	cout << sum << endl;
	return 0;
}

