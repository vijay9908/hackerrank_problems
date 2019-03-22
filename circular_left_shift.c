#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int n ,k;
    scanf("%u%u",&n,&k);
    printf("%u",((n<<k)|n>>(32-k)));
    return 0;
}

