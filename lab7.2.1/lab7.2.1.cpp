// Ітераційний спосіб
#include <iostream>
#include <iomanip>

using namespace std;
void Create(int** a, const int k, const int n, const int Low, const int High);
void Print(int** a, const int k, const int n);
void Search(int** a, int k, int& S, int n);
void Result(int S);


int main()
{
	srand((unsigned)time(NULL));

	int Low = 1, High = 30;
	int k, n, S = 0;

	cout << "k = "; cin >> k;
	cout << "n = "; cin >> n;

	int** a = new int* [k];
	for (int i = 0; i < k; i++)
		a[i] = new int[n];

	Create(a, k, n, Low, High);
	Print(a, k, n);
	Search(a, k, S, n);
	Result(S);

	for (int i = 0; i < k; i++)
		delete[] a[i];
	delete[] a;

	return 0;
}

void Create(int** a, const int k, const int n, const int Low, const int High)
{
	for (int i = 0; i < k; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}

void Print(int** a, const int k, const int n)
{
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}

void Search(int** a, int k, int& S, int n)
{
	int max;
	for (int now = 1; now < n; now = now + 2)
	{
		max = a[0][now];
		for (int j = 1; j < k; j++)
		{
			if (max = a[j][now]);
		}
		S += max;
	}
}

void Result(int S)
{
	cout << "S=" << S;
}