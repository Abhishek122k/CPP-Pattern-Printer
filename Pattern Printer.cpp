#include <iostream>
using namespace std;

void triangle(int n)
{

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= n; j++)
		{

			if (j >= n - i + 1)
			{

				cout << "* ";
			}

			else
			{

				cout << "  ";
			}
		}

		cout << endl;
	}
}

void rectangle(int r, int c)
{

	for (int i = 1; i <= r; i++)
	{

		for (int j = 1; j <= c; j++)
		{

			cout << "* ";
		}
		cout << endl;
	}
}

void pyramid(int n)
{

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= n - i; j++)
		{

			cout << "  ";
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{

			cout << "* ";
		}
		cout << endl;
	}
}

void rfpyramid(int n)
{

	for (int i = n; i > 0; i--)
	{

		for (int j = 1; j <= n; j++)
		{

			if (j >= i)
			{

				cout << "* ";
			}

			else
			{

				cout << "  ";
			}
		}

		cout << endl;
	}
}

void lfpyramid(int n) {
	for (int i = 0; i < n; i++) {

		
		for (int j = 0; j <= i; j++) {

			cout << "* ";
		}

		
		cout << endl;
	}
}

void hrectangle(int r, int c) {
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			if (i == 1 || i == r || j == 1 || j == c) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
int main()
{

	int x;

	cout << "Select a pattern:\n1-Triangle\n2-Rectangle\n3-Pyramid\n4-Right Facing Pyramid\n5-Left facing Pyramid\n6-Hollow Rectangle\n";

	cin >> x;

	switch (x)
	{

	case 1:

		cout << "----------Triangle Pattern----------" << endl;

		int n;

		cout << "Number of rows: ";

		cin >> n;

		triangle(n);

		break;

	case 2:

		cout << "----------Rectangle Pattern----------" << endl;

		int r, c;

		cout << "Number of rows: ";

		cin >> r;

		cout << "Number of columns: ";

		cin >> c;

		rectangle(r, c);

		break;

	case 3:

		cout << "----------Pyramid Pattern----------" << endl;

		int m;

		cout << "Number of rows: ";

		cin >> m;

		pyramid(m);

		break;

	case 4:

		cout << "----------Right Facing Pyramid Pattern----------" << endl;

		cout << "Number of rows: ";

		cin >> n;

		rfpyramid(n);

		break;

	case 5:
		cout << "----------Left Facing Pyramid Pattern----------" << endl;

		cout << "Number of rows: ";

		cin >> n;

		lfpyramid(n);

		break;

	case 6:
		cout << "----------Hollow Rectangle Pattern----------" << endl;

		cout << "Number of rows: ";

		cin >> r;

		cout << "Number of columns: ";

		cin >> c;

		hrectangle(r, c);

		break;

	default:

		cout << "Still adding more." << endl;

		break;
	}

	return 0;
}
