#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the sequence in non-decreasing order and check the difference of every adjacent elements
		sort(a.begin(), a.end());
		bool checker = true;
		for (int i = 0; i + 1 < n; i++) {
			checker &= (a[i + 1] - a[i] <= 1);
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
