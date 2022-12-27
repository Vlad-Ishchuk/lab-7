#include <iostream>
using namespace std;

double Average(int m[], int n);
int main()
{
	int size = 0;
	cout << "Enter the number of elements\n";
	cin >> size;
	int* a = new int[size];
	cout << "Enter elements\n";
	for (int i = 0; i < size; i++)
		cin >> a[i];
	cout << "The average value of the entered elements\n" << Average(a, size);
	return 0;
}
double Average(int m[],int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += m[i];
	return sum / n;
}
