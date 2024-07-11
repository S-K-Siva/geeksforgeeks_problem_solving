#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   sort(arr,arr+n);
	   int largest = arr[n-1];
	   int index = n-1;
	   while(index > -1){
	       if(arr[index] < largest){
	           return arr[index];
	       }
	       index--;
	   }
	   return -1;
	}
};