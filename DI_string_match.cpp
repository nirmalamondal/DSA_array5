/*Q1.A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

s[i] == 'I' if perm[i] < perm[i + 1], and
s[i] == 'D' if perm[i] > perm[i + 1].
Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return any of them.*/


#include<bits/stdc++.h>
using namespace std;


 vector<int> diStringMatch(string s) {
        vector<int>v;
        int k =0,j=s.length();
        for(int i =0;i<s.length();i++){
            if(s[i] == 'I'){
              v.push_back(k);
              k++;
            }
            else{
                v.push_back(j);
                j--;
            }
             
        }
      v.push_back(j--);
     return v;
    }
    
    
int main(){
	int t;
	cout<<"Enter no of testcases"<<endl;
	cin>>t;
	while(t--){
		string s;
		cout<<"enter the string in Only Capital I and D"<<endl;
		cin>>s;
		vector<int>ans= diStringMatch(s) ;
	     for(int i=0;i<ans.size();i++){
	     	cout<<ans[i]<<",";
		 }
		cout<<endl;
	}
	return 0;
}    
