#include<iostream>
#include<vector>

using namespace std;

int main(void) {
	vector<int> v(10);

	int i = -1;

	if (i < v.size()) {
		cout << "^" << endl;
	}
	else {
		cout << "‹U" << endl;
	}

	return 0;
}