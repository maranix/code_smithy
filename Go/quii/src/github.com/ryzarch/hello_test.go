package main

import "testing"

func TestHello(t *testing.T) {

	assertCorrecMessage := func(t *testing.T, got, want string) {
		t.Helper()
		if got != want {
			t.Errorf("got %q want %q", got, want)
		}
	}

	t.Run("saying hello to people", func(t *testing.T) {
		got := Hello("Raman", "")
		want := "Hello, Raman"

		assertCorrecMessage(t, got, want)
	})

	t.Run("say 'Hello, World' when an empty string is supplied", func(t *testing.T) {
		got := Hello("", "")
		want := "Hello, World"

		assertCorrecMessage(t, got, want)
	})

	t.Run("In Spanish", func(t *testing.T) {
		got := Hello("Raman", "Spanish")
		want := "Hola!, Raman"

		assertCorrecMessage(t, got, want)
	})

	t.Run("In French", func(t *testing.T) {
		got := Hello("Raman", "French")
		want := "Bonjour, Raman"

		assertCorrecMessage(t, got, want)
	})
}
