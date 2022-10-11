#include<iostream>
using namespace std;

//Dynamic Programing
//How to solve: Bottom-up

//Problem: 1 ~ M������ ���ڸ� ���Ͽ� N�� ����� ����� ����?(1 ~ M�� ���� �ߺ��� ���)
/*Solution process:
  1.�κй����� �����Ѵ�(���� ���� �������� ���Ѵ�)
  2.��ȭ���� ���Ѵ�(�� ���� ��� �������� ���� ���� �����)
  3.������ �ذ��Ѵ�(���� ���� ���ϴ� �ڵ带 �ۼ��Ѵ�)
  */

const int Max = 100;
int Table[Max];
int n, m;

  //1. T(N) = 1 ~ M�� ���� �̿��Ͽ� N�� ����� ����� ��
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
