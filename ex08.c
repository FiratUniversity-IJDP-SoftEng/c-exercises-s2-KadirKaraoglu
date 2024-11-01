#include<stdio.h>
int main(void){
int n;
    int i;
    double average=0;
int array[10];
    printf( "Enter 10 number\n");
for(i=0;i<10;i++){
    scanf("%d",&n);
    array[i]=n;
    average = array[i] +average;
} printf( "Numbers : ");

for(i=0;i<10;i++){
    printf( "%d ",array[i]);
}
    printf("\n");
    printf("Average : %.2f\n",average/10);
    printf("Total : %.0f\n", average);



}
