#include<stdio.h>
void natural(int);
int main(){
    int n;
    printf("Enter nth term of natural number : ");
    scanf("%d",&n);
    natural(2*n-1);
    return 0;
}
void natural(int n){
    if(n){
        if(n%2)
        printf("%d ",n);
        natural(n-1);
    }
    else{
        return;
    }
}
