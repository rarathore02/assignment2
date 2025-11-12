#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6}; // Missing 4
    int n = 5;
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    cout << "Missing number is " << total - sum;
    return 0;
}


#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] != mid + 1) {
            if (mid > 0 && arr[mid - 1] == mid)
                return mid + 1;
            high = mid - 1;
        } else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 5;
    cout << "Missing number is " << findMissing(arr, n);
    return 0;
}
