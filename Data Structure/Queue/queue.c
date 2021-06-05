#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int items[MAX], front = -1, rear = -1;

void enqueue(int newItem) {
    if (rear == MAX - 1) {
        printf("Queue is full.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        items[rear] = newItem;
        printf("Inserted element -> %d\n", newItem);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Deleted element -> %d\n", items[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}

void displayQueue() {
    if (rear == -1) {
        printf("Queue is empty.\n");
    } else {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", items[i]);
        }
    }
    printf("\n");
}

int main() {
  //deQueue is not possible on empty queue
  dequeue();

  //enqueue 5 elements
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);

  // 6th element can't be added to because the queue is full
  enqueue(6);

  displayQueue();

  //deQueue removes element entered first i.e. 1
  dequeue();

  //Now we have just 4 elements
  displayQueue();

  return 0;
}