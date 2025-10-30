#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(viod)
{
    int i, average;
    int sum;
    int grade[SIZE];
    
    sum = 0;
    for(i=0;i<SIZE;i++)
    {
                       printf("학생 성적을 입력하세요:"); 
                       scanf("%d", &grade[i]);
                       sum += grade[i];
    } 
    
    average = sum/SIZE;
    printf("성적평균: %d\n", average);
    
    system("PAUSE");	
    return 0;
}

     
/*int main(int argc, char *argv[])
{
    int grade[5];
    int i;
    
    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 30;
    grade[3] = 40;
    grade[4] = 50;
    //5까지 가면 안됨 
    
    for(i=0;i<5;i++)
    printf("grade[%i] = %i\n", i, grade[i]); 
    
  
  system("PAUSE");	
  return 0;
}
*/
