#include <iostream>
using namespace std;
int main() {
	int v1 = 2;
	const int v2 = 3;
	const int const* p1 = &v1;
	const int const* p2 = &v2;
	cout << *p1 << endl;
	cout << *p2 << endl;
	return 0;
}