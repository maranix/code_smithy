package main

import "fmt"

func main() {
	var ints []int

	for i := 0; i <= 10; i++ {
		ints = append(ints, i)
	}

	if ints == nil {
		fmt.Println("Error slice of int is empty or of invalid type.")
	} else {
		for eo := range ints {
			if eo%2 == 0 {
				fmt.Println(eo, "is even")
			} else {
				fmt.Println(eo, "is odd")
			}
		}
	}
}
