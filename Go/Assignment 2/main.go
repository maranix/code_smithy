package main

import (
	"fmt"
)

type triangle struct {
	height float64
	base   float64
}
type square struct {
	sideLength float64
}

type shape interface {
	getArea() float64
}

func main() {
	tr := triangle{2, 5}
	sq := square{4}

	printArea(tr)
	printArea(sq)
}

func printArea(sh shape) {
	fmt.Println(sh.getArea())
}

func (t triangle) getArea() float64 {
	return (0.5 * t.base * t.height)
}

func (s square) getArea() float64 {
	return (s.sideLength * s.sideLength)
}
