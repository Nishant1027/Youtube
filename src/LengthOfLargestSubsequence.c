//longest increasing subsequences code in O(n^2) time complexity..(only common version.)


#include <stdio.h>
#include <stdlib.h>

    //for getting maximum number in an array...
    int max(int arr[],int n)
    {
        int highestno=0;
        for(int i=0;i<n;i++)
        {
            if(highestno<arr[i])
                highestno=arr[i];

        }

        return highestno;
    }


    //for getting highest increasing subsequences length..
    int lengthofincreasingsubsequences(int array[],int n)
    {

        int array2[n];
        array2[0]=1;

        //for computing the largest increasing subsequences..
        for(int i=1;i<n;i++)
        {
            array2[i]=1;
            for(int j=0;j<i;j++)
                if((array[i]>array[j]) && (array2[i]<array2[j]+1))
                    array2[i]=array2[j]+1;
        }
     
        return max(array2,n);
    }




int main()
{
   int n,i;
  
   printf("Enter the length of array: ");
   scanf("%d",&n);
    int arr1[n];    //arr1 is an array and n is variable for length of array..
   for(i=0;i<n;i++)
   {
       scanf("%d ",&arr1[i]);   //input for array..
   }
   int length=lengthofincreasingsubsequences(arr1,n);
   printf("\n the longest increasing subsequences of the array have length= %d",length);

    return 0;
}
