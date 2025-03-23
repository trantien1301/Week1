#include<iostream>
using namespace std;
void towerOfHanoi(int n, char from_rod, char to_rod, char mid_rod) {
	if (n == 1)
	{
		cout << "Move disk 1 from " << from_rod << " to " << to_rod << endl;
		return;
	}
	else
	{
		towerOfHanoi(n - 1, from_rod, mid_rod, to_rod);
		cout << "Move disk "<< n << " from " << from_rod << " to " << to_rod << endl;
	}
	towerOfHanoi(n - 1, mid_rod, to_rod, from_rod);
}
int main() {
	int n;
	cin >> n;
	towerOfHanoi(n ,'A', 'C', 'B');
	return 0;
}