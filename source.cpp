#include<iostream>
using namespace std;

//Dynamic Programing
//How to solve: Bottom-up

//Problem: 1 ~ M까지의 숫자를 더하여 N을 만드는 경우의 수는?(1 ~ M의 수는 중복을 허용)
/*Solution process:
  1.부분문제를 정의한다(무슨 값을 구할지를 정한다)
  2.점화식을 구한다(그 값을 어떻게 구할지에 대한 식을 세운다)
  3.문제를 해결한다(값을 직접 구하는 코드를 작성한다)
  */

const int Max = 100;
int Table[Max];
int n, m;

  //1. T(N) = 1 ~ M의 수를 이용하여 N을 만드는 경우의 수
  //2. T(N) = T(N-1) + T(N-2) ~ T(N-M)
  //3.

int main() {
	scanf_s("%d %d", &n, &m);
	
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
