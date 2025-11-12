 #include <iostream>
using namespace std;
class DiagonalMatrix {
    int n;
    int *A; // store diagonal elements
public:
    DiagonalMatrix(int n) {
        this->n = n;
        A = new int[n];
    }

    void set(int i, int j, int x) {
        if (i == j)
            A[i - 1] = x;
    }

    int get(int i, int j) {
        if (i == j) return A[i - 1];
        else return 0;
    }

    void display() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    DiagonalMatrix d(4);
    d.set(1,1,5);
    d.set(2,2,8);
    d.set(3,3,3);
    d.set(4,4,6);

    cout << "Diagonal Matrix:\n";
    d.display();

#include <iostream>
using namespace std;

class TriDiagonal {
    int n;
    int *A;
public:
    TriDiagonal(int n) {
        this->n = n;
        A = new int[3 * n - 2];
    }

    void set(int i, int j, int x) {
        if (i - j == 1) A[i - 2] = x;                
        else if (i - j == 0) A[n - 1 + i - 1] = x;   
        else if (i - j == -1) A[2 * n - 1 + i - 1] = x; 
    }

    int get(int i, int j) {
        if (i - j == 1) return A[i - 2];
        else if (i - j == 0) return A[n - 1 + i - 1];
        else if (i - j == -1) return A[2 * n - 1 + i - 1];
        else return 0;
    }

    void display() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    TriDiagonal t(4);
    t.set(1,1,2); t.set(1,2,3);
    t.set(2,1,4); t.set(2,2,5); t.set(2,3,6);
    t.set(3,2,7); t.set(3,3,8); t.set(3,4,9);
    t.set(4,3,10); t.set(4,4,11);

    cout << "Tri-diagonal Matrix:\n";
    t.display();
}

 #include <iostream>
using namespace std;

class LowerTriangular {
    int n;
    int *A;
public:
    LowerTriangular(int n) {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int x) {
        if (i >= j)
            A[i * (i - 1) / 2 + (j - 1)] = x;
    }

    int get(int i, int j) {
        if (i >= j)
            return A[i * (i - 1) / 2 + (j - 1)];
        else
            return 0;
    }

    void display() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    LowerTriangular l(4);
    l.set(1,1,1);
    l.set(2,1,2); l.set(2,2,3);
    l.set(3,1,4); l.set(3,2,5); l.set(3,3,6);
    l.set(4,1,7); l.set(4,2,8); l.set(4,3,9); l.set(4,4,10);

    cout << "Lower Triangular Matrix:\n";
    l.display();
}

#include <iostream>
using namespace std;

class UpperTriangular {
    int n;
    int *A;
public:
    UpperTriangular(int n) {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int x) {
        if (i <= j)
            A[(j * (j - 1) / 2) + (i - 1)] = x;
    }

    int get(int i, int j) {
        if (i <= j)
            return A[(j * (j - 1) / 2) + (i - 1)];
        else
            return 0;
    }

    void display() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    UpperTriangular u(4);
    u.set(1,1,1); u.set(1,2,2); u.set(1,3,3); u.set(1,4,4);
    u.set(2,2,5); u.set(2,3,6); u.set(2,4,7);
    u.set(3,3,8); u.set(3,4,9);
    u.set(4,4,10);

    cout << "Upper Triangular Matrix:\n";
    u.display();
}
