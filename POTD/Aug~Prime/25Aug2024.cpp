#include<bits/stdc++.h>
using namespace std;
// TLE (Time Limit Exceeded) - (1010/1115)
// class Solution {
//   public:
//     long long countPairs(vector<int> &arr, vector<int> &brr) {
//         long long result = 0;
//         int n,m;
//         n = arr.size();
//         m = brr.size();
        
//         for(int i= 0;i<n;i++){
//             for(int j = 0;j<m;j++){
//                 if(pow(arr[i],brr[j]) > pow(brr[j],arr[i])){
//                     result++;
//                 }
//             }
//         }
//         return result;
//     }
// };


class Solution {
  public:
    int binarySearch(int key,vector<int> &brr){
        int low=0,high=brr.size()-1,mid,index=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(brr[mid]<=key){
                index=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return index;
    }
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
        long long ans = 0, one = 0, two = 0, threeFour = 0;
        sort(brr.begin(),brr.end());
        for(auto x:brr){
            if(x==1)one++;
            else if(x==2)two++;
            else if(x==3 or x==4)threeFour++;
        }
        for(auto x:arr){
            if(x!=1){
                ans+=one;
                if(x==2)ans-=threeFour;
                if(x==3)ans+=two;
                int index = binarySearch(x,brr);
                ans+=(brr.size()-index-1);
            }
        }
        return ans;
    }

};

int main(){
  return 0;
}
