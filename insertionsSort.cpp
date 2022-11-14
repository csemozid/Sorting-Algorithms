#include<iostream>
using namespace std;

void insertionSort(int a[], int n) {
    int hole, value;
    for(int i = 0; i < n; i++) {
        value = a[i];
        hole = i;
        while(a[hole-1] > value && i > 0) {
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole] = value;
    }
}

int main() {
    int arr[] = {4, 2, 3, 1, 100};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}