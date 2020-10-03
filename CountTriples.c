#include <stdio.h>
int main(){
    int a[1000000000],n,r,i,k,count=0,j;
    scanf("%d %d",&n,&r);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                    if((a[i]*r==a[j]) && (a[j]*r==a[k])){
                            count=count+1;
                    }
            }
        }
    }
    printf("%d",count);
    return 0;
}
