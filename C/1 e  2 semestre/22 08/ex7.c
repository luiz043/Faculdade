#include <stdio.h>
#include <stdlib.h>

int main(){

    int x1,x2,x3,x4,y1,y2,y3,y4,s;
    scanf("%d%d%d%d",&x1,&x2,&x3,&x4);
    scanf("%d%d%d%d",&y1,&y2,&y3,&y4);
    s=(( x1*y3 + x3*y2 + x2*y1 + x1*y4 + x4*y3 + x3*y1 - x3*y1 - x2*y3 - x1*y2 - x4*y1 - x3*y4 - x1*y3) / 2);
    printf("%d\n",s);
}
