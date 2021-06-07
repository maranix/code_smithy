#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int items[MAX], front=-1, rear=-1;

int Full() {
    if ((front == rear +1) || (front == 0 && rear == MAX -1)) {
        return 1;
    } else {
        return 0;
    }
}

int Empty() {
    if (front == -1) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(int newItem) {
    if(Full()){
        printf("Queue is Full\n");
    } else { 
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1)%MAX;
        items[rear] = newItem;
        printf("Inserted element -> %d\n", newItem);
    }
}

void dequeue() {
    int item;
    if(Empty()){
        printf("Circular Queue is Empty\n");
    } else {
        item = items[front];
        if (front == rear) {
            front, rear = -1;
        } else {
            front = (front + 1)%MAX;
        }
        printf("\n Deleted element -> %d \n", item);
    }
}

void display() {
    int i;
  if (Empty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % MAX) {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\n Rear -> %d \n", rear);
  }
}

int main () {
    // Fails because front = -1
  dequeue();

  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);

  // Fails to enqueue because front == 0 && rear == SIZE - 1
  enqueue(6);

  display();
  dequeue();

  display();

  enqueue(7);
  enqueue(23);
  enqueue(14);
  enqueue(52);
  enqueue(32);
  display();

  // Fails to enqueue because front == rear + 1
  enqueue(8);

  return 0;
}