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
    binary(n/2);
    printf("%d ",n%2);
}
