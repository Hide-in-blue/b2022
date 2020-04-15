#include<iostream>
using namespace std;
#include<string>
int main() {
	char s[32];
	int j;
	long long a, b, c, d;
	cin >> a >> b >> d;
	c = a + b;
	if (c == 0) {                    //注意非负整数！ 0的情况
		cout << '0';
		return 0;
	}
	for (j = 0; c > 0; j++) {
		s[j] = '0'+c%d;
		c = c / d;
	}
	for (int i = j-1; i >= 0; i--) {
		cout << s[i];
	}
}

//#include<cstdio>
//#include<iostream>
//using namespace std;
//int main() {
//	int a, b, c, d, n[32], i = 1;
//	cin >> a >> b >> d;
//	c = a + b;
//	do {
//		n[i++] = c % d;
//		c /= d;
//	} while (c > 0);
//	for (int j = i - 1; j > 0; j--)
//		cout << n[j];
//}