/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* toggleLightBulbs(int* bulbs, int bulbsSize, int* returnSize) {
    int bulb[101]={0};
    int *result;
    int count=0;
    int temp=0;
    for(int i=0;i<bulbsSize;i++){
        if(bulb[bulbs[i]]==0){
            bulb[bulbs[i]]=1;
            count++;
        }
        else{
            bulb[bulbs[i]]=0;
            count--;
        }
    }result=malloc(sizeof(int)*count);
    for(int i=1;i<=100;i++){
        if(bulb[i]==1){
result[temp++]=i;
        }
    }
    *returnSize=count;
    return result;
}