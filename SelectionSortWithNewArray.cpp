#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int main() {
    int i, j, iMin = 0;
    int size, nums[size], nums2[size];
    //cout << pow(2,31) << endl;
    cin >> size;
    for(i = 0; i < size; i++) {
        cin >> nums[i];
    }
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if(nums[j] < nums[iMin]) {
                iMin = j;
            }
        }
        nums2[i] = nums[iMin];
        nums[iMin] = pow(2,31)-1;
    }

    for(i = 0; i < size; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;

    return 0;
}