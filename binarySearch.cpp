#include <iostream>
using namespace std;

//binary search�� ����� ����
int binarySearch(int arr[], int s, int e, int value) {
    //arr�� start���� end������ ���� �߿���
    //value�� �����Ѵٸ� �� ��ġ�� ��ȯ�ϰ�, �׷��� �ʴٸ� -1�� ��ȯ�ϴ� �Լ�

    if (s > e) return -1;
    else if (s == e) {
        if (arr[s] == value) return s;
        else return -1; //value�� �迭 ������ ���� ���
    }
    else {
        int mid = (s + e) / 2;
        if (arr[mid] == value) return mid;
        else if (arr[mid] > value) return  binarySearch(arr, s, mid - 1, value);
        else return binarySearch(arr, mid + 1, e, value);
    }
}
int main() {

    int n, m;
    int arr[100];

    //�迭�� �Է� ���� ������ ����
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    //ã���� �ϴ� value
    scanf_s("%d", &m);

    int inx = binarySearch(arr, 0, n - 1, m);

    if (inx == -1) printf("���� �����ϴ�.\n");
    else printf("%d��°�� ���ڰ� �ֽ��ϴ�.\n", inx);

    return 0;
}


/*
#include <stdio.h>

//binary search�� ������� ����
int binarySearch(int arr[], int start, int end, int value) {
    //arr�� start���� end���� �߿��� 
    //value�� ã�� �� ��ġ�� ��ȯ�ϴ� �Լ�
    //����, ���ٸ� -1�� ��ȯ�Ѵ�.

    int myStart; //myStart: value���� �׻� ���� ���� ����Ŵ
    int myEnd; //myEnd: value���� �׻� ū ���� ����Ŵ
    int mid;

    if (arr[start] > value) return -1;
    if (arr[end] < value) return -1;

    myStart = start;
    myEnd = end;

    while (myStart + 1 < myEnd) {
        mid = (myStart + myEnd) / 2;

        if (arr[mid] == value) return mid;
        else if (arr[mid] > value) myEnd = mid;
        else myStart = mid;
    }
    return -1;

}
int main() {

    int n, m;
    int arr[100];

    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    scanf_s("%d", &m);

    int inx = binarySearch(arr, 0, n - 1, m);

    if (inx == -1) printf("���� ã�� �� �����ϴ�.\n");
    else printf("%d�� °�� �ֽ��ϴ�.\n", inx);

    return 0;
}
*/