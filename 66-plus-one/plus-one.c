/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i=digitsSize-1;
    int carry=0;
        *returnSize=digitsSize;
    if(digits[i]==9){
        carry=1;
    }else{
        digits[i]++;
        return digits;
    }
    while(carry=1 && i>=0){
        if(digits[i]==9){
            i--;
        }else if(digits[i]<9){
            digits[i]++;
            i++;
            while(i<digitsSize){
                digits[i]=0;
                i++;
            }
            return digits;
        }
        
    }if(carry=1){
        int *arr=malloc(sizeof(int)*(digitsSize+1));
        for(int i=1;i<=digitsSize;i++){
            arr[i]=0;
            *returnSize=digitsSize+1;
        }arr[0]=1;return arr;
    }
    return digits;
}