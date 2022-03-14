#include<stdio.h>

void quicksort(int array[],int first,int last){
int i, j, pivot, temp;

if(first<last){
    pivot=first; i=first; j=last;

    while(i<j){
    while(array[i]<=array[pivot]&&i<last)
        i++;
    while(array[j]>array[pivot])
        j--;
    if(i<j){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
            }
        }
    temp=array[pivot];
    array[pivot]=array[j];
    array[j]=temp;
    quicksort(array,first,j-1);
    quicksort(array,j+1,last);
    }
}

int main(){

int array[6] = {10, 2, 6, 1, 9, 4};
int i;
int length=6;

for(i=0;i<length;i++)
quicksort(array,0,length-1);
printf("The Sorted Order is: ");

for(i=0;i<length;i++)
printf("%d",array[i]);
printf("\n");
return 0;
}