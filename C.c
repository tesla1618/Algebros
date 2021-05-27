#include <stdio.h>
int main()

{
    int a, i, b;
    scanf("%d", &a);

    for( i = 1; i <= a; i++) {
        scanf("%d", &b);
        if(b == 1){

        printf("Welcome to the BUBT IUPC\n");

        }
        else if(b == 2) {
            printf("Thank You\n");
        }
    }
    return 0;
}
