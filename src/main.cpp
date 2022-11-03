#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll k, n;
	cin >> k >> n;

	if (1 == n) {
		cout << -1;
		return 0;
	}

	const auto& kn = k * n;
	auto x = kn / (n - 1);
	if (0 < kn % (n - 1)) {
		++x;
	}

	cout << x;

	return 0;
}