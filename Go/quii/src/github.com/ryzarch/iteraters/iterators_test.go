package iteraters

import "testing"

func TestIteration(t *testing.T) {
	repeated := repeat("a")
	want := ("aaaaa")

	if repeated != want {
		t.Errorf("Expected '%s' got '%s'", want, repeated)
	}
}
