//Task 1
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;
int main() {
    //Task 1
    int N;
    float sum = 0, avg;

    cout << "Input N: ";
    cin >> N;

    vector <int> A(N);
    cout << "Input elements: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        sum += A[i];
    }

    avg = sum / N;

    cout << "Average: " << avg << "\n";

    //Task 2
    int T1, T2, N1, zero = 0;
    int index1 = 0, index2 = 0;

    cout << "Task 2\n\n";
    cout << "Input T1: ";
    cin >> T1;

    cout << "Input T2: ";
    cin >> T2;

    cout << "Input N2: ";
    cin >> N1;
    cout << "\n";

    vector <int> B(N1);

    cout << "Input elements: ";
    for (int i = 0; i < N1; i++) {
        cin >> B[i];
        cout << "Current index & element: " << i << ", " << B[i] << "\n";
         
        if (B[zero] < B[i] && B[zero] < T1) {
            index2 = zero;
        }
        else { zero++; }

        if (B[i] == T2) {
            index2 = i;
        }
    }

    cout << "\n";
    cout << "Index of first element < T1: " << index1 << "\n";
    cout << "Index of T2 dublicate: " << index2 << "\n\n";

    //Task 3
    cout << "Task 3\n\n";

    int M;

    cout << "Input N, M: ";
    cin >> N >> M;

    vector<vector<int>> C(N, vector<int>(M));
    vector<int> row_max(N);

    cout << "Input elements:\n";
    for (int i = 0; i < N; i++) {
        cin >> C[i][0];
        int max = C[i][0];
        for (int j = 1; j < M; j++) {
            cin >> C[i][j];
            if (C[i][j] > max) {
                max = C[i][j];
            }
        }
        row_max[i] = max;
    }

    sort(row_max.begin(), row_max.end());

    cout << "Minimum of max: " << row_max[0] << "\n";

    return 0;
}