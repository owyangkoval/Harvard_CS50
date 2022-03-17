#include<stdio.h>
#define MAX 100

int MaxElem(int []);
int n;

int main() {
int arrayelem[MAX],hstno,i;

    //number of elements in array
    printf(" Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    //input number for each element
    printf(" Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
                {
	      printf(" element - %d : ",i);
	      scanf("%d",&arrayelem[i]);
	    }
    //
    hstno=MaxElem(arrayelem);
    printf(" Largest element of the array is: %d\n\n",hstno);
    return 0;
}


int MaxElem(int arrayelem[])
{
    static int i=0,hstno =-9999;
    if(i < n)
    {
         if(hstno<arrayelem[i])
           hstno=arrayelem[i];
      i++;
      MaxElem(arrayelem);//calling the function MaxElem itself to compare with further element
    }
    return hstno;
}