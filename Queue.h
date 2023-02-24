typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  /*Finish enqueue */
  new_node->order_number=x; //เอา Node มาจาก Node.h
  new_node->qty=y;
  new_node->nextPtr=NULL;
  if(q->headPtr==NULL)
    q->headPtr = new_node;
  else
    q->tailPtr->nextPtr=new_node;
  q->tailPtr = new_node;
  q->size++;
 }
}


int dequeue_struct(Queue *q,int cusno){
   NodePtr t=q->headPtr;
    int price;
  switch(t->order_number)
    {
      case 1:
        printf("My order is %d\n",t->order_number);
        printf("Customer No: %d\n",cusno);
        printf("Ramen\n");
      price = t->qty*100;
      break;

      case 2: 
        printf("My order is %d\n",t->order_number);
        printf("Customer No: %d\n",cusno);
        printf("Somtum\n");
      price = t->qty*20;
      break;

      case 3: 
        printf("My order is %d\n",t->order_number);
        printf("Customer No: %d\n",cusno);
        printf("Fried Chicken\n");
        price = t->qty*50;
        break;

      default:
        printf("No Food");
    }
   if(q->size>0){
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