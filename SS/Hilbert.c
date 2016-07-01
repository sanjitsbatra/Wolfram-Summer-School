#include<stdio.h>
#include<math.h>



void rot(int n, int *x, int *y, int rx, int ry) {
    if (ry == 0) {
        if (rx == 1) {
            *x = n-1 - *x;
            *y = n-1 - *y;
        }
 
        //Swap x and y
        int t  = *x;
        *x = *y;
        *y = t;
    }
}


void d2xy(int n, int d, int *x, int *y) {
    int rx, ry, s, t=d;
    *x = *y = 0;
    for (s=1; s<n; s*=2) {
        rx = 1 & (t/2);
        ry = 1 & (t ^ rx);
        rot(s, x, y, rx, ry);
        *x += s * rx;
        *y += s * ry;
        t /= 4;
    }
    
}
 

int main(){
int *x;
int *y;

int n=8;
int d=4;
//d2xy(8,4,x,y);

//printf("%f",( pow(2,5) * pow(3,7) ) );


int *z;

z=&z+1;
//printf("%d",*z);

return 1;



}
