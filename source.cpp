#include<iostream>
#include<vector>
using namespace std;

//Dynamic Programing
//How to solve: Bottom-up
<<<<<<< Updated upstream
=======

//Problem: 2 * N의 상자를 2 * 1의 블럭으로 채우는 경우의 수는?
>>>>>>> Stashed changes
/*Solution process:
  1.부분문제를 정의한다(무슨 값을 구할지를 정한다)
  2.점화식을 구한다(그 값을 어떻게 구할지에 대한 식을 세운다)
  3.문제를 해결한다(값을 직접 구하는 코드를 작성한다)
  */

int B(int num) {
	//1. B(i) = 2 * i의 상자를 채우는 경우의 수
	//2. B(i) = B(i - 1) + B(i - 2)
	//3.
	vector<int> v;
	for (int i = 0; i < num; i++) {
		if (i == 0) v.push_back(1);
		else if (i == 1) v.push_back(2);
		else v.push_back(v[i - 1] + v[i - 2]);
	}

	return v.back();
}


int main() {
	int n;
	cin >> n;

	int ans = B(n);
	cout << ans;
}

<<<<<<< Updated upstream

=======
>>>>>>> Stashed changes
