package main

import (
	"fmt"
	"io"
	"os"
)

func main() {
	filename := os.Args[1]

	readFile(filename)
}

func readFile(f string) {
	file, err := os.Open(f)
	if err != nil {
		fmt.Println("Error: ", err)
	}

	bytes, err := io.Copy(os.Stdout, file)

	if err != nil {
		fmt.Println("Error: ", err)
	}

	fmt.Println("\nReturned bytes: ", bytes)
}
