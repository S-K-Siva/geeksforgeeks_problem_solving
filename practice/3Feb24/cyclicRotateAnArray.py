def rotate( arr, n):

    if n>1:
        arr[n-1],arr[0] = arr[0],arr[n-1]
        index = n-1
        while index != 1:
            arr[index],arr[index-1] = arr[index-1],arr[index]
            index -= 1
    
    