#include<bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x) 
{
    int low = 0;
    int high = n-1;
    
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == x){
            while(mid < n && arr[mid] == x){
                // cout << mid << endl;
                mid++;
                
            }
            return mid;
        }
        else if(arr[mid] > x) high = mid - 1;
        else if(arr[mid] < x) low = mid + 1;
    }
    return low;
}