package main

func main() {
	cards := newDeck()

	hand, remainingCards := deal(cards, 4)

	hand.print()
	remainingCards.print()
}
