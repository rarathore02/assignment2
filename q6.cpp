#include <iostream>
using namespace std;

struct Sparse {
    int row, col, val;
};

int main() {
    Sparse s1[] = {{3, 3, 3}, {0, 0, 1}, {1, 1, 2}, {2, 2, 3}};
    int n = 4;
    cout << "Transpose:\n";
    for (int i = 0; i < n; i++) {
        swap(s1[i].row, s1[i].col);
        cout << s1[i].row << " " << s1[i].col << " " << s1[i].val << endl;
    }
}

#include <iostream>
using namespace std;
int countInversions(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                count++;
    return count;
}

int main() {
    int arr[] = {1, 20, 6, 4, 5};
    int n = 5;
    cout << "Number of inversions: " << countInversions(arr, n);
}
