#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3, max=0;
	cout << "Enter 3 nos.: \n";
	cin >> n1 >> n2 >> n3;
	(n1 > n2) ? (max = n1) : (max = n2);
	(max > n3) ? (cout << max << " is the largest no.") : (cout << n3 << " is the largest no.");
	return 0;
}