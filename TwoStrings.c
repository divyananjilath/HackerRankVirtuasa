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
    int n,i,j,l1,l2,k,f[100];
    char s1[100],s2[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%[^\n]", s1);
        scanf("%[^\n]", s2);
        l1=sizeof(s1);
        l2=sizeof(s2);
        for(j=0;j<l1;l1++){
            for(k=0;k<l2;l2++){
                if(s1[j]==s2[k]){
                    f[i]=1;
                }
        }
        }
    }
    for(i=0;i<n;i++){
        if(f[i]==1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
