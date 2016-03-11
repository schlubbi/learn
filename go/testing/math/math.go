package pack

func Add(nums ...int) int {
	var result int
	for _, n := range nums {
		result += n
	}
	return result
}

func Subtract(initial int, nums ...int) int {
	for _, n := range nums {
		initial -= n
	}
	return initial
}
