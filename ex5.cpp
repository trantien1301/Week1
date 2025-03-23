#include<iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
	if (n == 0 || n == 1) 
	{
		return true;
    }
	if (arr[0] > arr[1])
	{
		return false;
	}
	return isSorted(arr + 1, n - 1);
}
int main()
{
	int a[] = { 0, 3, 6, 8 ,23 };
	int n = sizeof(a) / sizeof(a[0]);
	if (isSorted(a, n))
		cout << "The array is sorted.\n";
	else
		cout << "The array is NOT sorted.\n";
	return 0;

}