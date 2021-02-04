#include<stdio.h>

int main() 
{
    int grades_count;
    scanf("%d",&grades_count);
    int grades[grades_count];
    for(int i=0;i<grades_count;i++)
    {
        scanf("%d",&grades[i]);
    }
    
    int result[grades_count];
    
    for(int i=0;i<grades_count;i++)
    {
        int x = grades[i]%10;
        int y = grades[i]-x;
        
        if(grades[i]>=38)
        {
           
           if(x<5)
           {
               if(5-x<3)
               {
                   x=5;
               }
               
           }
           else
           {
               if(10-x<3)
               {
                   x=10;
               }
           }
        }
        
        *(result + i) = y+x;
        
    }
    for(int i=0;i<grades_count;i++)
    {
        printf("%d\n",result[i]);
    }
    
    return 0;

}
