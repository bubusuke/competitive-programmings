package mymath

import "fmt"

func mymath() {

	var a, b, c, d int

	a = 3
	b = 4
	c = a / b
	d = (a-1)/b + 1

	fmt.Println(a / b)
	fmt.Println(c)
	fmt.Println(d)
	fmt.Println((a-1)/b + 1)
}

func gcd(a, b int) int {
	if a < b {
		a, b = b, a
	}
	if a%b == 0 {
		return b
	}
	return gcd(b, a%b)
}
