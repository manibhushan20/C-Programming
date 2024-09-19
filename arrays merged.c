//#include<stdio.h>

//#define MAX_SIZE 100

//void merge(int a[], int b[], int c[], int n) {
//  int i = 0, j = 0, k = 0;

//  while (i < n && j < n) {
//    if (a[i] >= b[j]) {
//      c[k] = a[i];
//      i++;
//    } else {
//      c[k] = b[j];
//      j++;
//    }
//    k++;
//  } 

//while (i < n) {
//    c[k] = a[i];
//    i++;
//    k++;
//  }

//  while (j < n) {
//    c[k] = b[j];
//    j++;
//    k++;
//  }
//}

//int main() {
//  int n, i;
//  int a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE * 2];

//  printf("Enter the size of arrays: ");
//  scanf("%d", &n);

//  printf("Enter elements of first array:\n");
//  for (i = 0; i < n; i++) {
//    scanf("%d", &a[i]);
//  }

//  printf("Enter elements of second array:\n");
//  for (i = 0; i < n; i++) {
//    scanf("%d", &b[i]);
//  }

//  merge(a, b, c, n);

//  printf("After merging, the resultant array is:\n");
//  for (i = 0; i < 2 * n; i++) {
//    printf("%d\t", c[i]);
//  }

//  return 0;
//}
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int s1, s2, s3;
    int i, j, k;
	
	
//       printf("\n\nMerge two arrays of same size sorted in decending order.\n");
//       printf("------------------------------------------------------------\n");	
//	   
       printf("Input the number of elements to be stored in the first array :");
       scanf("%d",&s1);
   
       printf("Input %d elements in the array :\n",s1);
       for(i=0;i<s1;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }


       printf("Input the number of elements to be stored in the second array :");
       scanf("%d",&s2);
   
       printf("Input %d elements in the array :\n",s2);
       for(i=0;i<s2;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr2[i]);
	    }

    /* size of merged array is size of first array and  size of second array */
    s3 = s1 + s2;
/*----------------- insert in the third array------------------------------------*/
    for(i=0;i<s1; i++)
        {
            arr3[i] = arr1[i];
         }
     for(j=0;j<s2; j++)
        {
            arr3[i] = arr2[j];
            i++; 
        }
/*----------------- sort the array in decending order ---------------------------*/
   for(i=0;i<s3; i++)
        {
           for(k=0;k<s3-i-1;k++)
             {
         
                if(arr3[k]<=arr3[k+1])
                 {
                   j=arr3[k+1];
                   arr3[k+1]=arr3[k];
                   arr3[k]=j;
                 }  
              }
         }                      

/*--------------- Prints the merged array ------------------------------------*/
     printf("\nThe merged array in decending order is :\n");
    for(i=0; i<s3; i++)
    {
        printf("%d   ", arr3[i]);
    }
	printf("\n\n");
	return 0;
}
