#include<stdio.h>
#define MAX 100

int MaxElem(int []);
int n;

int main()
{
    int arrayelem[MAX],hstno,i;
      printf(" Input the number of elements to be stored in the array :");
       scanf("%d",&n);

       printf(" Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arrayelem[i]);
	    }
    hstno=MaxElem(arr1);//call the function MaxElem to return the largest element
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
      MaxElem(arr1);//calling the function MaxElem itself to compare with further element
    }
    return hstno;
}