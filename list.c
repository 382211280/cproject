#include <stdio.h>
#include <stdlib.h>
struct list{
    void *data;
    struct list* list_next;
}list_node;
struct list *List_head = NULL;

void list_init(struct list *list_head){
    list_head = (struct list *)malloc(100);
}
void list_insert(struct list * list_head,  void *Data)
{
    struct list *node = (struct list *)malloc(100);
    list_head = (struct list *)malloc(100);
    node->data=(void *)malloc(100);
    if(!list_head)
    {
        node = list_head ->list_next;
        node ->data = Data;
    }
    else
    {
        return;
    }
}
void list_print(struct list *list_head)
{
    list_head = (struct list *)malloc(100);
    list_head->list_next = (struct list *)malloc(100);
    while(!(list_head->list_next))
    {
        printf("%d",(int *)(list_head->list_next->data));
    }
}
int main(){
    int i = 12;
    struct list *list_head=NULL;
    list_init(list_head);
    list_insert(list_head, &i);
    list_print(list_head);
    return 0;
}
