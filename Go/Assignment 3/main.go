package main

import (
	"fmt"
	"io"
	"os"
)

func main() {
	readFile()
}

func readFile() {
	file, err := os.Open(os.Args[1])
	if err != nil {
		fmt.Println("Error: ", err)
	}

	bytes, err := io.Copy(os.Stdout, file)

	if err != nil {
		fmt.Println("Error: ", err)
	}

	fmt.Println("\nReturned bytes: ", bytes)
}
