#include<stdio.h>
void binary(int);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    binary(n);
    return 0;
}
void binary(int n){
    if(n==0){
        return;
    }
    printf("%d ",n%10);
    binary(n/10);
}
