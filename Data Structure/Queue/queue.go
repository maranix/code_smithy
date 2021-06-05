package main

import "fmt"

var front, rear = -1, -1
var items [5]int

func enqueue(newItem int) {
	if (rear == len(items) -1) {
		fmt.Printf("Could not Insert element -> %d\n", newItem)
		fmt.Println("Queue is full")
	} else {
		if (front == -1) {
			front = 0
		}
		rear++
		items[rear] = newItem
		fmt.Printf("Inserted element -> %d\n", newItem)
	}
}

func dequeue() {
	if (front == -1) {
		fmt.Println("Queue is empty.")
	} else {
		fmt.Printf("Dequeued element -> %d\n", items[front])
		front++
		if(front > rear) {
			front, rear = -1, -1
		}
	}
}

func displayQueue() {
	if (rear == -1) {
		fmt.Println("Queue is empty.")
	} else {
		for i := front; i <= rear; i++ {
			fmt.Println(items[i])
		}
	}
}

func main() {
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
}