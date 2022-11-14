#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    for(int i = 0; i < n-1; i++) {
        int flag = 0;
        for(int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
    
}

int main() {
    int nums[] = {5, 3, 2, 4, 7, 1};
    int size =  sizeof(nums)/sizeof(nums[0]);
    bubbleSort(nums, size);

    for(int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}