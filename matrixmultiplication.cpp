/*Q8.Given two sparse matrices mat1 of size m x k and mat2 of size k x n, return the result of mat1 x mat2. You may assume that multiplication is always possible.
  **Input:** mat1 = [[1,0,0],[-1,0,3]], mat2 = [[7,0,0],[0,0,0],[0,0,1]]

**Output:**

[[7,0,0],[-7,0,3]]

*/
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> matrixMultiplication(vector<vector<int>>& A,vector<vector<int>>& B) {
    int m = A.size();
    int n = A[0].size();
    int p = B[0].size();

    vector<vector<int>> ans(m, vector<int>(p, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main() {
    int m,n,p;

    cout<<"Enter the dimensions of matrix A (m x n): ";
    cin>> m >> n;
    cout<<"Enter the dimensions of matrix B (n x p): ";
    cin>>n>>p;
    cout << "Enter the elements of matrix A:\n";
    vector<vector<int>> A(m, vector<int>(n));
    for (int i = 0; i<m;i++) {
        for (int j = 0; j<n;j++) {
            cin >>A[i][j];
        }
    }
    cout << "Enter the elements of matrix B:\n";
    vector<vector<int>> B(n, vector<int>(p));
    for (int i=0;i<n;i++) {
        for (int j=0;j<p;j++) {
            cin>>B[i][j];
        }
    }

    vector<vector<int>> ans = matrixMultiplication(A, B);
    cout << "Resultant matrix C = A * B:\n";
    for (int i = 0;i<m;i++) {
        for (int j = 0;j<p;j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

