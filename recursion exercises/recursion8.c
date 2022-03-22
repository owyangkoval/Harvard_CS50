#include<stdio.h>
#define MAX 100

int MaxElem(int []);
int n;

int main()
{
    int arrelem[MAX],largest,i;

      printf(" Input the number of elements to be stored in the array :");
       scanf("%d",&n);

       printf(" Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arrelem[i]);
	    }
    largest=MaxElem(arrelem);//call the function MaxElem to return the largest element
    printf(" Largest element of the array is: %d\n\n",largest);
    return 0;
}
int MaxElem(int arrelem[])
{
    static int i=0,largest=0;
    if(i < n)
    {
         if(largest<arrelem[i])
           largest=arrelem[i];
      i++;
      MaxElem(arrelem);//calling the function MaxElem itself to compare with further element
    }
    return largest;
}
