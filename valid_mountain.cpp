/*

Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]*/


#include<bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i =0;
        
        while(i+1<n && arr[i]<arr[i+1]){
            i++;
        }
        if(i == 0 || i == n-1)
            return false;

        while(i+1<n && arr[i]>arr[i+1]){
            i++;
        }  
        if(i == n-1)
          return true;
        return false;    
    }

int main(){
	int t;
	cout<<"Enter no of testcases"<<endl;
	cin>>t;
	while(t--){
		int n;
		cout<<"Enter the array size"<<endl;
		cin>>n;
		vector<int>v1;
		vector<int>v2;
		cout<<"enter array elements:\n ";
		for(int i=0;i<n;i++){
			
			int x;
			cin>>x;
			v1.push_back(x);
		}
		if(validMountainArray(v1))
		cout<<"True"<<endl;
		else
		  cout<<"False"<<endl;
		
	}
	return 0;
}
