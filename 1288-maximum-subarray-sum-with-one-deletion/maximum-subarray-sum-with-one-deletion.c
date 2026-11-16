int max(int a,int b){
   return a>=b?a:b;
}
int maximumSum(int* arr, int arrSize) {
   if(arrSize==1){
    return arr[0];
   }
   int nodelete=arr[0];
   int withdelete=0;
   int ans=INT_MIN;
   for(int i=1;i<arrSize;i++){  withdelete=max(nodelete,withdelete+arr[i]);
    nodelete=max(arr[i]+nodelete,arr[i]);
    ans=max(ans,max(nodelete,withdelete));
  
   }return ans;
}