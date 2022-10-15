#include <stdio.h>

int main() {
    // Write C  here
    int n,i;
    printf("enter ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i*((i*i)-1)/3);
    }

return 0;
}
