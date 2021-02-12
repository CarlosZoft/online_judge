#include <stdio.h>

void update(int *a,int *b) {
    int aux, aux1;
    aux = (*a)+(*b); 
    aux1 = (*a)-(*b); 
    (*a) = aux;
    (*b)  = (aux1>0) ? aux1 : aux1*-1;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}