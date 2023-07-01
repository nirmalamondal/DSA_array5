/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/

#include<bits/stdc++.h>
using namespace std;


bool binarySearch1D(vector<int>&matrix, int target){
        int low = 0;
        int high = matrix.size()- 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (matrix[mid] == target)
                return true;
            if (target < matrix[mid])
                high = mid - 1;
            else
                low = mid + 1;
    }

    return false;
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int low = 0;
    int high = matrix.size()- 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (target >= matrix[mid][0]
            && target <= matrix[mid][matrix[mid].size()-1])
            return binarySearch1D(matrix[mid], target);
        if (target < matrix[mid][0])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return false;

    }
    
    
    
int main(){
	int t;
	cout<<"Enter no of testcases"<<endl;
	cin>>t;
	while(t--){
		int n;
		cout<<"Enter the 2D array size"<<endl;
		cin>>n;
		vector<int>v;
		vector<vector<int>>arr;
		for(int i=0;i<n;i++){
			int m;
			cout<<"enter each inner array size"<<endl;
			cin>>m;
			cout<<"Enter the array elements"<<endl;
			for(int i=0;i<m;i++){
			
			int x;
			cin>>x;
			v.push_back(x);
		}
		arr.push_back(v);
		}
		int target;
		cout<<"enter target value"<<endl;
		cin>>target;
		if(searchMatrix(arr,target))
		cout<<"true"<<endl;
		else
		  cout<<"false"<<endl;
	}
	return 0;
}    
    
    
    
