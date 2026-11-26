bool checkGoodInteger(int n) {
    int temp=n;
    int sum=0;
    int squaresum=0;
    while(temp>0){
        sum+=temp%10;
        squaresum+=pow(temp%10,2);
        temp/=10;
    }
    if(squaresum-sum>=50){
        return true;
    }return false;
}