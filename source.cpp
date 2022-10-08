#include<iostream>
#include<vector>
using namespace std;

//Dynamic Programing
//How to solve: Bottom-up
<<<<<<< Updated upstream
=======

//Problem: 2 * N�� ���ڸ� 2 * 1�� ������ ä��� ����� ����?
>>>>>>> Stashed changes
/*Solution process:
  1.�κй����� �����Ѵ�(���� ���� �������� ���Ѵ�)
  2.��ȭ���� ���Ѵ�(�� ���� ��� �������� ���� ���� �����)
  3.������ �ذ��Ѵ�(���� ���� ���ϴ� �ڵ带 �ۼ��Ѵ�)
  */

int B(int num) {
	//1. B(i) = 2 * i�� ���ڸ� ä��� ����� ��
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
