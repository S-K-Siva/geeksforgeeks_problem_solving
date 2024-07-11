#include<bits/stdc++.h>
using namespace std;

// We used moore's algorithm
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int element = a[0];
        int result = 1;
        for(int i = 1;i<size;i++){
            if(a[i] == element){
                result++;
            }else if(a[i] != element){
                --result;
                if(result == 0){
                    if(i+1 < size)
                    {
                        element = a[i+1];
                        i++;
                        result = 1;
                    }
                }
            }
        }
        
        int count = 0;
        for(int i = 0;i<size;i++){
            if(a[i] == element){
                count++;
            }
        }
        if(count > (size/2)) return element;
        return -1;
        
    }
};