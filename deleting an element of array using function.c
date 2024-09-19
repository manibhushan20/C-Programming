#include<stdio.h>
#include<conio.h>
 void addElement(int*arr,int num,int pos)   {
    int i;
    for(i=pos-1;i<num-1;i++)  {
        arr[i]=arr[i+1];  }  
}
       void disp(int arr[],int num)    {
        int i;
        for(i=0;i<num;i++)     {
            printf("\narr[%d]=%d",i,arr[i]);   }   
       }
       
    int main()  {
            int arr[100];
            int i,num,pos;
            printf("Enter the size of the array:");
            scanf("%d",&num);
            printf("\nEnter the %d elements array\n",num);
        for(i=0;i<num;i++)    {
            printf("arr[%d]=",i);
            scanf("%d",&arr[i]);    }
   printf("Enter the position of the element you want to delete from an array:");
   scanf("%d",&pos);   
   if(pos<=num&&pos>0)    {
            printf("Array before deletion:\n");
            disp(arr,num);
            addElement(arr,num,pos);
    printf("\nArray after deletion:\n");
    disp(arr,num-1);   }
    return 0;    }
                
            
            
        
        
        
    