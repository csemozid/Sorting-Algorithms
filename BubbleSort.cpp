#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int flag = 0;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) {
            break;
        }
    }
}

int main() {
    int i, n;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
