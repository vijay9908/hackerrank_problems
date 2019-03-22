#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n ,k ;
    scanf("%d%d",&n,&k);
    n = n>>k;
    printf("%d",(n&1));
    return 0;
}