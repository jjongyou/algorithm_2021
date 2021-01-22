#include <bits/stdc++.h>
//체스  나이트 문제 체스에서 나이트가 움직일수있는 위치의 갯수 구하기
using namespace std;

int dx[8] = {2, -2, 1, -1, 2, -2, 1, -1};
int dy[8] = {1, -1, 2, -2, -1, 1, -2, 2};
int cnt;

int main(void){
	string horse;
	int nx = 0, ny = 0, x = 0, y = 0;

	cout << "horse's place : ";
	cin >> horse;
	//ASCII code a : 97
	x = horse[0] - 'a';
	y = horse[1] - '1';
	cout << "x, y : " << x << ", " << y << "\n";
	for (int i = 0; i < 8; i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (0 <= nx && nx < 8 && 0 <= ny && ny < 8)
			cnt++;
	}
	cout << "cnt : " << cnt << "\n";
	return 0;
}
