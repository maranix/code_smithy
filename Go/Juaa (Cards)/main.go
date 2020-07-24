package main

func main() {
	cards := newDeckFromFile("deck")
	cards.shuffle()
	cards.print()
}
