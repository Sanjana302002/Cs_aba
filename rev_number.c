#include <stdio.h>

int main() {
    int n,rev_n=0;
    scanf("%d",&n);
    while (n>0){
        rev_n=rev_n*10+(n%10);
        n=n/10;}
    printf("%d",rev_n);
    return 0;
}