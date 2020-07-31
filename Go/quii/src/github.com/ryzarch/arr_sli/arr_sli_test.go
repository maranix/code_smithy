package arr_sli

import (
	"reflect"
	"testing"
)

func TestArrSli(t *testing.T) {
	t.Run("Test for array of size 5", func(t *testing.T) {
		sum := []int{1, 2, 3, 4, 5}

		got := Sum(sum)
		want := 15

		if got != want {
			t.Errorf("Got %d want %d, %v", got, want, sum)
		}
	})

	t.Run("Test for arra/slices of no size limit", func(t *testing.T) {
		sum := []int{1, 2, 3, 4, 5}

		got := Sum(sum)
		want := 15

		if got != want {
			t.Errorf("Got %d want %d, %v", got, want, sum)
		}
	})
}

func TestSumAll(t *testing.T) {
	got := SumAll([]int{1, 2}, []int{0, 9})
	want := []int{3, 9}

	if !reflect.DeepEqual(got, want) {
		t.Errorf("Got %v want %v", got, want)
	}
}
