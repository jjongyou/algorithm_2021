#include<bits/stdc++.h>
using namespace std;
//00시 00분 00초 부터 N시 59분 59초까지 3이 들어가는 숫자의 갯수 구하기
int clk, cnt;

bool check(int h, int m, int s){
	if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3)
		return true;
	return false;
}
int main(void){
	cout << "N : ";
	cin >> clk;
	cout << clk << endl;
	for (int i = 0; i < clk + 1; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				if(check(i, j, k))
					cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
