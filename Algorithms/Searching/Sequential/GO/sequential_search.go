package main

import (
	"fmt"
	"os"
)

func sequentialSearch(arr []int, search int, size int) string {
	found := false

	for i := 0; i < size; i++ {
		if arr[i] == search {
			found = true
		}
	}

	if found == false {
		fmt.Println("Not found")
		os.Exit(0)
	}
	return "Found"
}

func main() {
	var size,search int

	fmt.Println("Enter the size of array: ")
	fmt.Scanf("%d", &size)

	array := make([]int, size)	
	
	fmt.Println("Enter the elements of array: ")
	for i := 0; i < size; i++{
		fmt.Scanf("%d",&array[i])
	}

	fmt.Println("Enter the element to search: ")
	fmt.Scanf("%d", &search)

	fmt.Print(sequentialSearch(array, search, size))
}