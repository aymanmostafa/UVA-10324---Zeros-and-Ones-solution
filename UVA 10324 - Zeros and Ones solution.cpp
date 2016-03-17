//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();
//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 10324 - Zeros and Ones
	string s, res;
	int i, j, n, k = 1, l, r;
	vector<pair<int, int>> v;
	while (cin >> s) {
		cin >> n;
		v.clear();
		cout << "Case " << k++ << ":\n";
		l = 0;
		for (i = 1; i < s.size(); i++)
			if (s[i] != s[l]) {
				if (l != (i - 1))
					v.push_back(make_pair(l, i - 1));
				l = i;
			} else {
				if (i == s.size() - 1)
					v.push_back(make_pair(l, i));
			}
		while (n--) {
			cin >> i >> j;
			res = "No";
			if (i == j)
				res = "Yes";
			else {
				if (i > j)
					swap(i, j);
				for (l = 0; l < v.size(); l++)
					if (i >= v[l].first && j <= v[l].second) {
						res = "Yes";
						break;
					}
			}
			cout << res << endl;
		}
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
