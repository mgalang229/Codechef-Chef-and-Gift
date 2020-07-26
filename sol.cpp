#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a[50], n, p;
	cin >> n >> p;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	bool ok = false;
	for(int i = 0; i < n; ++i) {
		for(int j = i; j < n; ++j) {
			int cnt = 0;
			for(int k = i; k <= j; ++k) {
				if(a[k] % 2 == 0) cnt++;
			}
			if(cnt == p) {
				ok = true;
			}
		}
	}
	if(ok) cout << "YES";
	else cout << "NO";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
