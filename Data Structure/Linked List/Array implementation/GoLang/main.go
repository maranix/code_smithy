package main

import "fmt"

type Node struct {
	data int
	nextNode *Node
}

type linkedList struct {
	length int
	HEAD *Node
	TAIL *Node
}

func (l linkedList) Display() {
	if(l.HEAD == nil) {
		fmt.Println("List is empty.")
	} else {
		fmt.Printf("List contains %v items.\n", l.length)
		for l.HEAD != nil {
			fmt.Printf("%v->", l.HEAD.data)
			l.HEAD = l.HEAD.nextNode
		}
		fmt.Println()
	}
}

func (l *linkedList) Len() int {
	return l.length
}

func (l *linkedList) PushNode(n *Node) {
	if l.HEAD == nil {
		l.HEAD = n
		l.TAIL = n
		l.length++
	} else {
		l.TAIL.nextNode = n
		l.TAIL = n
		l.length++
	}
}

func main() {
	list := linkedList{}
	node := &Node{data: 25}
	node1 := &Node{data: 55}
	node2 := &Node{data: 26}
	list.Len()
	list.PushNode(node)
	list.PushNode(node1)
	list.PushNode(node2)
	fmt.Println(list.Len())
	list.Display()
}