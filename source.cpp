#include<iostream>
using namespace std;

//Dynamic Programing
//How to solve: Bottom-up

//Problem: 1 ~ M������ ���ڸ� ���Ͽ� N�� ����� ����� ����(�� 1 ~ M������ ���� �ߺ� ��� ����)?
/*Solution process:
  1.�κй����� �����Ѵ�(���� ���� �������� ���Ѵ�)
  2.��ȭ���� ���Ѵ�(�� ���� ��� �������� ���� ���� �����)
  3.������ �ذ��Ѵ�(���� ���� ���ϴ� �ڵ带 �ۼ��Ѵ�)
  */

  //1.T(i)�� 1 ~ M������ ���ڸ� �̿��ؼ� ���� i�� ����� ����� ��
  //2.T {i} = T{ i - 1) + T(i - 2) + ... + T(i - M)
  //3.

const int Max = 100;
int Table[Max];
int n, m;

int main() {
	scanf_s("%d %d", &n, &m);

	/*
	N�� M���� �۰ų� ���� ���
	M = 4;
	Table[1] = 1;
	Table[2] = Table[1] + 1
	Table[3] = Table[2] + Table[1] + 1;
	Table[4] = Table[3] + Table[2] + Table[1] + 1
	*/

	/*
	N�� M���� Ŭ ���
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