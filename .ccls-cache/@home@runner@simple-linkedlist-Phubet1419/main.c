//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  int c = 5;
  struct node *head;
  typedef struct node Node;
  typedef struct node *NodePtr;

  Node *p = (NodePtr)malloc(sizeof(Node));
  head = p;
  p->value = c;
  int i, n = 4;
  for (i = 0; i < n; i++) {
    p->next = (NodePtr)malloc(sizeof(Node));
    p = p->next;
    p->value = c + i + 1;
    p->next = NULL;
    /*p->next= (NodePtr)malloc (sizeof(Node));
    p->next->value=head->value+3;

    p->next->next =(NodePtr)malloc (sizeof(Node));
    p->next->next->value=11;
    p->next->next->next=NULL; */
  }

  // what value for 8
  /*  Exercise I
      1. Add 1 more than at the end
      2. Add value(11)
      3. Make next become NULL
   */

  /*  Exercise II
          1. Add 1 more than at the begining!!!!
          2. Add value (2)

  */

  typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate
  for (i = 0; i < n; i++) {
    printf("%3d ->", tmp->value);
    tmp = tmp->next;
  }
  printf("NULL\n");
  /*
Exercise III Use loop to print everything
      int i,n=5;
      for(i=0;i<n;i++){
          printf("%3d", tmp->value);
        // What is missing???
      }
  */

  // printf("NULL\n");
  /*  Exercise IV change to while loop!! (you can use NULL to help)

        while(){
           printf("%3d", tmp->value);
          // What is missing???
       }
   */
  tmp = head;
  while (tmp != NULL) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;
  }
  printf("NULL\n");
  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help

      */

  /*  Exercise VI Free all node !!
       //use a loop to help

   */
  tmp = head;
  while (tmp != NULL) {
    struct node *next = tmp->next;
    //printf("%d ", tmp->value);
    free(tmp);
    tmp = next;
  }

  return 0;
}
