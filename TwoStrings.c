#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,i,j,l1,l2,k,flag[20];
    char s1[10000000],s2[10000000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s", s1);
        scanf("%s", s2);
        j=0;
    while(s1[j] != '\0'){
        k=0;
         while(s2[k] != '\0'){
            if(s1[j]==s2[k]){
                flag[i]=1;
                break;            
            }
            k++;
        }
            j++;        
    }
    }
    for(i=0;i<n;i++){
    if(flag[i]==1){
        printf("YES\n");
    }
    else {printf("NO\n");}
}    
    return 0;
}
