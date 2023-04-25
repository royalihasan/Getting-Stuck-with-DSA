#include <stdio.h>
#include <iostream>

void update(int *a, int *b)
{
    int temp = *a;
    // Sum = a+b
    *a = *a + *b;
    // Diff = a-b
    *b = abs(temp - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    printf("\n");
    return 0;
}