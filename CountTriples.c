#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int a[1000000],n,r,i,k,count=0,j;
    scanf("%d %d",&n,&r);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]*r==a[j]){
                for(k=j+1;k<n;k++){
                    if(a[j]*r==a[k]){
                            count++;
                    }
            }
        }
    }}
    printf("%d",count);
    return 0;
}
