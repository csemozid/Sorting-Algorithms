#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    int iMin, temp;
    for(int i = 0; i < n-1; i++) {
        iMin = i;
        for(int j = i+1; j < n; j++) {
            if(a[j] < a[iMin]) iMin = j;
        }
        temp = a[i];
        a[i] = a[iMin];
        a[iMin] = temp;
    }
}

int main() {
    int arr[] = {3, 5, 2, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}