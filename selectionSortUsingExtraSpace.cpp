#include <iostream>
#include <limits.h>
//#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int a2[], int n) {
    int iMin, temp,  k = 0;
    for(int i = 0; i < n; i++) {
        iMin = i;
        for(int j = 0; j < n; j++) {
            if(a[j] < a[iMin]) {
                a2[k] = a[j];
                a[j] = INT_MAX;
                k++;
            }  
        }
        
    }
}

int main() {
    int arr[] = {3, 5, 2, 4};
    int arr2[4];
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, arr2, size);

    for(int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}