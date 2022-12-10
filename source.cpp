#include<iostream>
using namespace std;

//Recursion
//How to solve: w

//Problem: 자연수 n에대하여 n! 구하여라(단 재귀함수 이용)
/*Solution process:
  1. 함수의 역할을 말로 정확하게 정의한다.
  2. 기저조건(Base condition)에서 함수가 제대로 동작함을 보인다.
  3. 함수가 (작은 input에 대하여) 제대로 동작한다고 가정하고 함수를 완성한다.
  */

  //1.getFactorial(n) : n!을 반환하는 함수
  //2. n이 0 또는 1일 때 1을 반환
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
