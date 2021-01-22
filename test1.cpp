#include <bits/stdc++.h>

int n = 1260;
int cnt;

int coinTypes[4] = {500, 100, 50, 10};

int main(void){

	for (int i = 0; i < 4; i++) {
		cnt += n / coinTypes[i];
		n %= coinTypes[i];
		std::cout << "n : " << n << "\n";
	}
	std::cout << "cnt : " << cnt << "\n";
}
