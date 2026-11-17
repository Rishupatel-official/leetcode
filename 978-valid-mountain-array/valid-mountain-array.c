bool validMountainArray(int* arr, int arrSize){
if(arrSize<3){
    return false;
}int inc=0;int dec=0;
    for(int i=1;i<arrSize;i++){
        if(arr[i]==arr[i-1]){
            return false;
        }
        else if(arr[i]<arr[i-1]){
            if(inc==0){
                inc=1;
                continue;
            }else if(inc==1){
                continue;
            }
            
        }else if(arr[i]>arr[i-1]){
            if(inc==0){
                dec=1;
                continue;
            }else if(inc==1){
                return false;
            }
        }
    }
    if(inc && dec)return true;
    return false;
}