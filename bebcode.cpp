#include <iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	cout << "Hello, let's start\n";
	int x = 5, y = 7;
	if (x < y)
		swap(x, y);
	cout << x << " " << y;
	return 0;
}