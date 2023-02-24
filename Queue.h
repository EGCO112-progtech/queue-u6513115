

typedef struct Queue{
   order *headlPtr,*tailPtr;
    int size;
}order;


void enqueue_struct(Queue* q, int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  /*Finish enqueue */
  new_node->order_number=x; //เอา Node มาจาก Node.h
  new_node->q=y;
  new_node->nextPtr=NULL;
  if(q->headPtr==NULL)
    q->headPtr = new_node;
  else
    q->tailPtr->nextPtr=new_node;
  q->tailPtr = new_node;
  q->size++;
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
  int price;
   if(q->size>0){
     switch(t->order_number)
       {
         case 1 : 
           printf("Ramen");
           price = 100*t->q;
           break;
         case 2 : 
           printf("Somtum");
           price = 20*t->q;
           break;
         case 1 : 
           printf("Fried Chicken");
           price = 50*t->q;
           break;
       }
     //int value= t->data;
     q->headPtr=t->nextPtr;
     if(q->headPtr==NULL)
     {
       q->tailPtr==NULL;
     }
    q->size--;
    free(t);
         /*Finish dequeue */
   return price;
   }
   printf("Empty queue");
   return 0;
}

