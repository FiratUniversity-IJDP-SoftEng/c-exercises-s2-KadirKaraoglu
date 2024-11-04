
#include<stdio.h>
int main(void){
int array[50];
int n;
int result=1;
    printf("please enter number less than 50 to calculate the factorial \n");
    do{
        scanf("%d",&n);
        if(n<0 || n>50){
            printf("please enter a positive number less than 50\n");
        }
    }while( n<0 || n>50);
printf("%d! = ",n);
for(int i=0;i<n;i++){
    array[i]=n-i;
result=array[i]*result;
}
for(int i=0;i<n;i++){
printf(" %d ",array[i]);
    if(array[i]==1){
        break;
    }
printf("*");
}
printf(" = %d",result);


}