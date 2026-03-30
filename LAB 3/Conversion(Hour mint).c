#include <stdio.h>

    int main ()

{
    int h, min, sec, p;

    printf("Enter hour: ");
    scanf("%d", &h);

    printf("Enter minute: ");
    scanf("%d", &min);

    printf("Enter sec: ");
    scanf("%d", &sec);

    p= h*3600 + min*60 + sec;

    printf("%d", p);
}
