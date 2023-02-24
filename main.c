#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;

  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x,y,cusno;
  cusno = 1;
   //x is pricr

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q,cusno);

          if(x>0)
          {
            printf("You have to pay %d\n",x);
            do{
              printf("Cash : ");
              scanf("%d",&y);
              if(y-x==0)
                printf("Thank you\n");
              else if(y-x>0)
              {
                printf("Thank you\n");
                printf("Change is %d\n",y-x);
              }
                
              
            }while((y-x)<0);
            cusno++;
          }
            
        }
        else {
          
       enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));
          printf("My order is %d\n",atoi(argv[i]));
          i++;
          
           
        }
 }

  if(q.size>0)
  {
    printf("=================\nThere are %d ppl left in the queue\n",q.size);
  }
    

  printf("Clearing queue\n");
  while(q.size>0)
    {
      dequeue_struct(&q,cusno);
    }
  return 0;
}