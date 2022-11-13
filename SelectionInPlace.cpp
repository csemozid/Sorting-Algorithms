#include<iostream>
using namespace std;

void selectionSort(int a[], int n) {
    int temp, iMin;
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
    int nums[] = {0, 5, 2, 4, 60};
    int size = sizeof(nums)/sizeof(nums[0]);
    selectionSort(nums, size);

    for(int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }


    return 0;
}