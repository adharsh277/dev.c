#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y;
    float c,d,u,v;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    x=(a+b);
    y=(a-b);
    printf("%d %d \n",x,y);
    
    
    u= (c+d);
    v= (c-d);
    printf("%.1f %.1f",u,v);
	
    
    return 0;
}
