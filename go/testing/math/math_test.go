package pack

import (
	"os"
	"testing"
)

func TestMain(m *testing.M) {
	println("YO YO YO")
	result := m.Run()
	println("DONE DONE DONE")
	os.Exit(result)
}

func TestCanAddNumbers(t *testing.T) {
	result := Add(1, 2)

	if result != 3 {
		t.Log("Failed to add one and two")
		t.Fail()
	}

	result = Add(1, 2, 3, 4, 5)

	if result != 15 {
		t.Error("Failed to add more than two numbers.")
	}
}

var addTable = []struct {
	in  []int
	out int
}{
	{[]int{1, 2}, 3},
	{[]int{1, 2, 3, 4, 5}, 15},
}

func TestTableStyle(t *testing.T) {
	for _, entry := range addTable {
		result := Add(entry.in...)
		if result != entry.out {
			t.Error("Failed to add numbers as expected")
		}
	}
}

func TestCanSubtractNumbers(t *testing.T) {
	result := Subtract(10, 5)

	if result != 5 {
		t.Error("Failed to subtract two numbers properly")
	}
}
