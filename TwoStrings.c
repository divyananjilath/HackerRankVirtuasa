#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool check1(char s1[],char s2[]){
    int i,flag[26]={0};
    for(i=0;i<strlen(s1);i++){
        flag[s1[i] - 'a']=1;
    }
    for(i=0;i<strlen(s2);i++){
        if(flag[s2[i]-'a'] == 1){
            return true;
        };
    }
return false;
}
int main(){
    int n,i;
    char s1[100000],s2[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s", s1);
        scanf("%s", s2);
    if(check1(s1, s2)){
        printf("YES\n");
    }
    else {printf("NO\n");}
}    
    return 0;
}
