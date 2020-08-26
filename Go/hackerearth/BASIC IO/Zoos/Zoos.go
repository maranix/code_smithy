package main

import (
	"fmt"
	"strings"
)

func main() {
	var w string
	fmt.Scan(&w)

	z := strings.Count(w, "z")

	if (z * 2) == (len(w) - (z)) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
