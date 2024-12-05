void sort012(int arr[], int n) {
    int zero,one,two;
    zero = 0;
    one = 0;
    two = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            ++zero;
        }
        else if(arr[i] == 1){
            ++one;
        }
        else if(arr[i] == 2){
            ++two;
        }
        
        
    }
    int i = 0;
        while(zero > 0 || one > 0 || two > 0 && i < n){
            if(zero){
                --zero;
                arr[i] = 0;
            }else if(one){
                --one;
                arr[i] = 1;
            }else{
                --two;
                arr[i] = 2;
            }
            ++i;
        }
    
    
}
