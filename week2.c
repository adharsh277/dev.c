#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    
    scanf("%d %d", &a, &b);
    
    (a > b)? printf("%d",a) : printf("%d",b);
    return 0;
}
