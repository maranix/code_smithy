package main

import "fmt"

/*
	This is a Dynamic Stack implementation without any capacity limit.
*/

type stack struct {
	items []int
	top int
}

func (s *stack) createEmptyStack() {
	s.top = -1
}

func (s *stack) isEmpty() bool {
	if(s.top == -1){
		return true
	} else {
		return false
	}
}

func (s *stack) printStack() {
	fmt.Println("Stack:")
	for i := 0; i < len(s.items); i++ {
		fmt.Println(s.items[i])
	}
}

func (s *stack) pushStack(newItem int) {
	s.top++
	s.items = append(s.items, newItem)
}

func (s *stack) popStack() {
	if(s.isEmpty()){
		fmt.Println("Stack is Empty.")
	} else {
		fmt.Println("Popped item ", s.items[s.top])
		s.items = s.items[:len(s.items)-1]
	}
}

func main() {
	st := &stack{}
	st.createEmptyStack()

	st.pushStack(7)
	st.pushStack(2)
	st.pushStack(8)

	st.printStack()

	st.popStack()

	st.printStack()
}