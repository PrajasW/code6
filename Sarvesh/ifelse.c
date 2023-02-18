/* Given a positive integer denoting n, do the following:
If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n>9, print Greater than 9.
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if (n == 1) {
        printf("one\n");
    }
    else if (n == 2) {
        printf("two\n");
    }
    else if (n == 3) {
        printf("three\n");
    }
    else if (n == 4) {
        printf("four\n");
    }
    else if (n == 5) {
        printf("five\n");
    }
    else if (n == 6) {
        printf("six\n");
    }
    else if (n == 7) {
        printf("seven\n");
    }
    else if (n == 8) {
        printf("eight\n");
    }
    else if (n == 9) {
        printf("nine\n");
    }
    else{
        printf("Greater than 9\n");
    }
    return 0;
}
