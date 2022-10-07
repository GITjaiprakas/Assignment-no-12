#include<stdio.h>
void natural(int);
int main(){
    int n;
    printf("Enter nth term of natural number : ");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int n){
    if(n){
        printf("%d ",n);
        natural(n-1);
    }
    else{
        return;
    }
}
