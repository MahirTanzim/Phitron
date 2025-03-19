#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
 
using namespace std;
 
bool onSegment(int x1, int y1, int x2, int y2, long double x, long double y) {
	return (x >= min(x1, x2) && x <= max(x1, x2) && y >= min(y1, y2) && y <= max(y1, y2));
}
 
long double m(int x1, int y1, int x2, int y2) {
	if (x1 == x2) {
		return std::numeric_limits<long double>::infinity();
	}
	return (1.00 * (y2 - y1)) / (x2 - x1);
}
 
 
long double c(int x1, int y1, long double m) {
	return 1.00 * y1 - (m * x1);
}
 
void solve() {
	int x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
 
	long double m1 = m(x1, y1, x2, y2);
	long double m2 = m(x3, y3, x4, y4);
 
	if (m1 == m2) {
		if (onSegment(x1, y1, x2, y2, x3, y3) || onSegment(x1, y1, x2, y2, x4, y4) ||
		    onSegment(x3, y3, x4, y4, x1, y1) || onSegment(x3, y3, x4, y4, x2, y2)) {
			yes;
		}
		else {
			no;
		}
		return;
	}
 
	long double c1 = c(x1, y1, m1);
	long double c2 = c(x3, y3, m2);
 
	long double x = (c2 - c1) / (m1 - m2);
	long double y = (m1 * x) + c1;
 
	if (onSegment(x1, y1, x2, y2, x, y) && onSegment(x3, y3, x4, y4, x, y)) {
		yes;
	}
	else {
		no;
	}
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}