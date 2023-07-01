/*Q6.An integer array original is transformed into a doubled array changed by appending twice the value of every element in original, and then randomly shuffling the resulting array.

Given an array changed, return original if changed is a doubled array. If changed is not a doubled array, return an empty array. The elements in original may be returned in any order.

 */


#include<bits/stdc++.h>
using namespace std;


vector<int> findOriginalArray(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        vector<int>ans;
        vector<int>v;
        map<int,int>mp;
        if(n%2 != 0)
          return {};
          sort(nums.begin(),nums.end(),greater<int>());
        for (int i=0; i<n; i++){
            if (mp.find(nums[i]*2)!=mp.end()){
                if (mp[nums[i]*2]>0){
                    mp[nums[i]*2]--;}
                ans.push_back(nums[i]);
                if (mp[nums[i]*2]==0) {
                    mp.erase(nums[i]*2);
                    }
                }
            else {
                mp[nums[i]]++;
                }
        }  
            for (auto i: mp){
            if (i.second!=0)
               return {}; 
            }           
        return ans;

    }
    
    
    
    
 int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,m;
    	cout<<"Enter size of arr"<<endl;
		cin>>n;
    	vector<int>arr2;
		cout<<"Enter values of arr"<<endl;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
		arr.push_back(x);
	}
	vector<int> ans = findOriginalArray(arr);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
	return 0;
	
}
    
    
    
    
    
    
    
    
    
    
