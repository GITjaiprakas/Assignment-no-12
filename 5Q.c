#include<stdio.h>
void natural(int);
int main(){
    int n;
    printf("Enter nth term of natural number : ");
    scanf("%d",&n);
    natural(2*n);
    return 0;
}
void natural(int n){
    if(n){
        natural(n-1);
    }
    else{
        return;
    }
     if(n%2==0)
        printf("%d ",n);
}
