 #include <stdio.h>
#include <math.h>

int main() {
    int number, digitCount = 0,n,U,r,z,w,p=0,i,A,B,C;
    printf("Enter a number: ");
    scanf("%d", &U);
    number=U;
    if (number == 0) {
        digitCount = 1;
    } else {
        while (number != 0) {
            digitCount++;
            number = number / 10;
        }
    }
n=digitCount;
int a[n],b[n];
for(i=0;i<n;i++)
{
a[i]=U%10;
U = U/10;
}
r=n-1;
z=r-1;
w=z-1;
int c[z];
for(i=0;i<z;i++)
{
c[i]=a[z-i]*pow(10,w-i);
}
for(i=0;i<z;i++)
{
p=p+c[i];
}
A=a[0]*pow(10,r);
B=p*10+a[r];
C=A+B;
printf("%d",C);
return 0;
}