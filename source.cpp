#include<iostream>
using namespace std;

//Dynamic Programing
//How to solve: Bottom-up

//Problem: 1 ~ M까지의 숫자를 더하여 N을 만드는 경우의 수는(단 1 ~ M까지의 수는 중복 사용 가능)?
/*Solution process:
  1.부분문제를 정의한다(무슨 값을 구할지를 정한다)
  2.점화식을 구한다(그 값을 어떻게 구할지에 대한 식을 세운다)
  3.문제를 해결한다(값을 직접 구하는 코드를 작성한다)
  */

  //1.T(i)란 1 ~ M까지의 숫자를 이용해서 숫자 i를 만드는 경우의 수
  //2.T {i} = T{ i - 1) + T(i - 2) + ... + T(i - M)
  //3.

const int Max = 100;
int Table[Max];
int n, m;

int main() {
	scanf_s("%d %d", &n, &m);

	/*
	N이 M보다 작거나 같을 경우
	M = 4;
	Table[1] = 1;
	Table[2] = Table[1] + 1
	Table[3] = Table[2] + Table[1] + 1;
	Table[4] = Table[3] + Table[2] + Table[1] + 1
	*/

	/*
	N이 M보다 클 경우
	M = 4;
	Table[5] = Table[1] + Table[2] + Table[3] + Table[4]
	*/
	
	Table[1] = 1;
	int sum = 0;

	for (int i = 2; i <= m; i++) {
		sum += Table[i - 1];
		Table[i] = sum + 1;
	}

	for (int i = m + 1; i <= n; i++) {
		for (int j = i - m; j <= i - 1; j++) {
			Table[i] += Table[j];
		}
	}

	printf("%d\n", Table[n]);
}