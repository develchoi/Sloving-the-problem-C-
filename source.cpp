#include<iostream>
using namespace std;

//Dynamic Programing
//How to solve: Bottom-up

int Fibo(int num) {
	int* a = new int[num];

	for (int i = 0; i < num; i++) {
		if (i == 0 || i == 1) a[i] = 1;
		else
			a[i] = a[i - 1] + a[i - 2];
	}

	return a[num - 1];
}


int main() {
	int n;
	cin >> n;

	int ans = Fibo(n);
	cout << ans;
}

//What is difference between DP and Divide-Conqure?
//Solving process(DP: Bottom-up, DC: Top-down)
