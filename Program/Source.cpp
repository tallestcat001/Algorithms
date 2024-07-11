#include <iostream>

using namespace std;

bool Ckeck(int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;

}

int main()
{
	cout << Ckeck(7) << endl;

	return 0;
}
