#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// MATRİSİN TRANSPOZUNU al(Satır ve Sütun Sayısı kesinlikle aynı)
// matrisin satırları sütun olur,sütunları da satır olur
/* 2 5 3        2 1 6
   1 7 0  =>    5 7 8 
   6 8 4        3 0 4
*/

int main() 

{
    
 int NormalMatris[5][5];
 
 int TranspozeMatris[5][5];
 
 int i,j;
 
 srand(time(NULL));
 
 printf("Normal Matris:\n") ;
 
  for(i = 0 ; i < 5 ; i++)
  {
   for(j = 0 ; j < 5 ; j++)  
   {
    NormalMatris[i][j] = rand()%10; // min 0 , max 9 
    printf("%d\t",NormalMatris[i][j]);  
   }  
  printf("\n");
  } 

 printf("\nTranspoze Matris:\n"); 
  
 for(i = 0 ; i < 5 ; i++)
 {
   for(j = 0 ; j < 5 ; j++)  
   {
    TranspozeMatris[i][j] = NormalMatris[j][i];   
    printf("%d\t",TranspozeMatris[i][j]);  
   }  
  printf("\n");
 }  
  
 return 0;
  
}