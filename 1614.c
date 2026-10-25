int maxDepth(char* s) {
    int ans=0;
    int check=0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='('){
            check++;
            if(check>ans){
                ans=check;
            }
        }
        else if(s[i]==')'){
            check--;
        }i++;
    }return ans;
}
