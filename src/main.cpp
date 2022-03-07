#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	if (1 == n % 2) {
		cout << "CY";
	}
	else {
		cout << "SK";
	}

	return 0;
}