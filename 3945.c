int digitFrequencyScore(int n) {
    int hash[10];
    int result=0;
    while(n>0){
        int rem=n%10;
        hash[rem]++;
        n/=10;
    }
    for(int i=0;i<10;i++){
        result+=i*hash[i];
    }return result;
}
