#include<stdio.h>
#define MAX 100

int main() {
int n, a[n],i;

    //number of elements in array
    printf(" Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    //input number for each element
    printf(" Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
                {
	      printf(" element - %d : ",i);
	      scanf("%d",&a[i]);
	    }
    MaxElem(a, n-1, a[0]);
    printf(" Largest element of the array is: %d\n\n", MaxElem);
    return 0;
}


int MaxElem(int *num, int n, int max) {
    if(n<0) {
      return 0;
    }
    else {
         if(max>*num) {
          max=*num;
         }
      MaxElem(++num, --n, max);
    }
}