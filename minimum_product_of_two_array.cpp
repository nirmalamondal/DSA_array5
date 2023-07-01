/*Q5.
The **product sum** of two equal-length arrays a and b is equal to the sum of a[i] * b[i] for all 0 <= i < a.length (**0-indexed**).

- For example, if a = [1,2,3,4] and b = [5,2,3,1], the **product sum** would be 1*5 + 2*2 + 3*3 + 4*1 = 22.

Given two arrays nums1 and nums2 of length n, return *the **minimum product sum** if you are allowed to **rearrange** the **order** of the elements in* nums1.

**Example 1:**

**Input:** nums1 = [5,3,4,2], nums2 = [4,2,2,5]

**Output:** 40

**Explanation:**

We can rearrange nums1 to become [3,5,4,2]. The product sum of [3,5,4,2] and [4,2,2,5] is 3*4 + 5*2 + 4*2 + 2*5 = 40.*/


#include<bits/stdc++.h>
using namespace std;

    
int minimumProduct(vector<int>& v1,vector<int>& v2){
	int prod =0 ;
	int n = v1.size();
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(int i =0;i<n;i++){
		 prod += v1[i] * v2[n-1-i];
	}
     return prod;
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
		cout<<"enter array elements:\n ";
		for(int i=0;i<n;i++){
			
			int x;
			cin>>x;
			v2.push_back(x);
		}
		
		cout<<"minimum product : "<<minimumProduct(v1,v2)<<endl;
		
	}
	return 0;
}    
    
    
    
