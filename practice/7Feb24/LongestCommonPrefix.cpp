#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string result = "";
        int maxLen = 0;
        int maxIndex = 0;
        
        for(int i = 0;i<N;i++){
            if(arr[i].size() > maxLen){
                maxLen = arr[i].size();
                maxIndex = i;
            }
        }
        
        // cout << "MaxIndex:"<<maxIndex << endl;
        for(int i = 0;i<arr[maxIndex].size();i++){
            
            char ch = arr[maxIndex][i];
            bool possible = true;
            
            for(int j = 0;j<N;j++){
                if(j == maxIndex) continue;
                if(arr[j][i] != ch){
                    
                    possible = false;
                    break;
                }
                if(arr[j].size() <= i){
                    possible = false;
                    break;
                }
                
                // cout << "Index:" << j << endl;
                // cout << possible << endl;
            }
            // cout << "Possible:"<<possible<<endl;
            if(!possible){
                break;
            }else{
                result += ch;
            }
        }
        if(result == "") return "-1";
        return result;
    }
};