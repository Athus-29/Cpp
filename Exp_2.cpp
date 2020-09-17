#include <iostream>
#include <string>
using namespace std;
class Room
{
public:
	int l, b;
};
int main()
{
	Room std;
	cout << "Enter the length of room: ";
	cin >> std.l;
	cout << "Enter the breadth of room: ";
	cin >> std.b;
	cout << "\nArea = " << ((std.l) * (std.b));
	return 0;
}	