int scoreOfString(char* s) {
    int i=0;
    int ans=0;
    while(s[i+1]!='\0'){
        ans+=abs(s[i]-s[i+1]);
        i++;
    }return ans;
}