#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    if((n>>31)&1==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

