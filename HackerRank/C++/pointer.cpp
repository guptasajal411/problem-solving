#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int temp = *a;
    *a = *a + *b;
    if (temp - *b >= 0){
        *b = (*a - (2 * *b));
    }
    else{
        *b = -(*a - (2 * *b));
    }   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}