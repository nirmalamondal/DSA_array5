/*Q4.Given a binary array nums, return *the maximum length of a contiguous subarray with an equal number of* 0 *and* 1.

**Example 1:**

**Input:** nums = [0,1]

**Output:** 2

**Explanation:**

[0, 1] is the longest contiguous subarray with an equal number of 0 and 1.*/


#include<bits/stdc++.h>
using namespace std;

int longestsubsequence(vector<int > &nums){
    unordered_map <int,int> mp;
        mp[0]=-1;
        int sum=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) sum+=-1;
            else sum+=1;
            if(mp.find(sum)!=mp.end()){
                if(ans<i-mp[sum]){
                    ans=i-mp[sum];
                }
            }
            else{
                mp[sum]=i;
            }
        }
        return ans;
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
		
		cout<<"maximum length : "<<longestsubsequence(v1)<<endl;
		
	}
	return 0;
}
