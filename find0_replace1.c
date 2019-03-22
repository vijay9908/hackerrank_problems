#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n ,k , t=1;
    scanf("%d%d",&n,&k);
    t = t<<(k);
    t = ~t;
    printf("%d",(n&t));
    return 0;
}