/*Q7.Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

**Input:** n = 3

**Output:** [[1,2,3],[8,9,4],[7,6,5]]
*/

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> generateMatrix(int n) {
        int n1 = 1;
        vector<vector<int>> arr(n,vector<int>(n));
        for(int i=0;i<(n+1)/2;i++){
            for(int j=i;j<n-i;j++){
                arr[i][j] = n1++;
            }
            for(int j=i+1;j<n-i;j++){
                arr[j][n-i-1] = n1++;
            }
            for(int j=n-i-2;j>=i;j--){
                arr[n-i-1][j] = n1++;
            }
            for(int j=n-i-2;j>i;j--){
                arr[j][i] = n1++;
            }

        }
        return arr;
    }


int main() {
	int t;
	cout<<"enter the no of testcases: ";
	cin>>t;
	while(t--){
	
    int n;
    cout<<"Enter the value of n: ";
    cin>> n;
    vector<vector<int>> ans = generateMatrix(n);
	cout << "spiral matrix :\n";
    for (int i = 0;i<n;i++) {
    	cout<<"[";
        for (int j = 0;j<n;j++) {
            cout << ans[i][j] << ",";
        }
        
        cout << "]"; 
         cout<<endl;
     }
     cout<<endl;
     
	}

    return 0;
}
