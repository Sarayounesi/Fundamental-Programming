#include <stdio.h>


void borjhanooi (int,char,char,char);

int main()
{
  int nradif;
  scanf ("%d",& nradif);
  borjhanooi(nradif,'A','B','C');
return 0;
}
 
void borjhanooi(int t, char y,char add,char xa)
{
   if (y=='A' && xa=='C'){
       borjhanooi( t ,y ,xa ,add);

        borjhanooi (t,add,y,xa);
         
   }else if (y=='C' && xa=='A'){
        borjhanooi (t,y,xa,add);
         
        borjhanooi (t,add,y,xa);
   }
   else{
           if (t == 1)
       {
          printf("%c -> %c\n",y,xa);
       }
       else
       {
          int b;
          b=t-1;
          borjhanooi(b,y,xa,add); 
          printf("%c -> %c\n",y,xa);
          borjhanooi(b,add,y,xa); 
       }
          
   }
  
}