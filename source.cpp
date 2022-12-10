#include<iostream>
using namespace std;

//Recursion
//How to solve: w

//Problem: �ڿ��� n�����Ͽ� n! ���Ͽ���(�� ����Լ� �̿�)
/*Solution process:
  1. �Լ��� ������ ���� ��Ȯ�ϰ� �����Ѵ�.
  2. ��������(Base condition)���� �Լ��� ����� �������� ���δ�.
  3. �Լ��� (���� input�� ���Ͽ�) ����� �����Ѵٰ� �����ϰ� �Լ��� �ϼ��Ѵ�.
  */

  //1.getFactorial(n) : n!�� ��ȯ�ϴ� �Լ�
  //2. n�� 0 �Ǵ� 1�� �� 1�� ��ȯ
  //3. Fac(2) = Fac(1) * 2
  //   Fac(1) = return 1


int Factorial(int number) {

	if (number == 1 || number == 0) {
		return 1;
	}

	else {
		return Factorial(number - 1) * number;
	}
}

int main() {
	int n;
	cin >> n;

	cout << Factorial(n) << "\n";
}
