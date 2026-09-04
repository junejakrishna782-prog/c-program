#include <stdio.h>
int sum_of_n(int n)
{
if (n == 0) {
    return 0;
}
return n + sum_of_n(n - 1);
}

int main() {
    printf("%d", sum_of_n(5));
    return 0;
}//krishna



