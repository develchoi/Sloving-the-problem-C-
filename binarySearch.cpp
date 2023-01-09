#include <iostream>
using namespace std;

//binary search의 재귀적 구현
int binarySearch(int arr[], int s, int e, int value) {
    //arr의 start부터 end까지의 값들 중에서
    //value가 존재한다면 그 위치를 반환하고, 그렇지 않다면 -1을 반환하는 함수

    if (s > e) return -1;
    else if (s == e) {
        if (arr[s] == value) return s;
        else return -1; //value가 배열 범위의 값일 경우
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

    //배열에 입력 받을 숫자의 갯수
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    //찾고자 하는 value
    scanf_s("%d", &m);

    int inx = binarySearch(arr, 0, n - 1, m);

    if (inx == -1) printf("수가 없습니다.\n");
    else printf("%d번째에 숫자가 있습니다.\n", inx);

    return 0;
}


/*
#include <stdio.h>

//binary search의 비재귀적 구현
int binarySearch(int arr[], int start, int end, int value) {
    //arr의 start부터 end까지 중에서 
    //value를 찾아 그 위치를 반환하는 함수
    //만약, 없다면 -1을 반환한다.

    int myStart; //myStart: value보다 항상 작은 값을 가리킴
    int myEnd; //myEnd: value보다 항상 큰 값을 가리킴
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

    if (inx == -1) printf("수를 찾을 수 없습니다.\n");
    else printf("%d번 째에 있습니다.\n", inx);

    return 0;
}
*/