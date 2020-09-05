package mystring

import (
	"fmt"
	"strconv"
	"strings"
)

func substr()

func mystring() {
	s := "abc,ABC"
	fmt.Println(strings.ToLower(s))
	fmt.Println(strings.ToUpper(s))

	abcs := strings.Split(s, ",")
	fmt.Println(abcs)

	for i := 0; i < len(s); i++ {
		fmt.Println(string(s[i]))
	}

	for i := len(s) - 1; i >= 0; i-- {
		fmt.Println(string(s[i]))
	}

	a, _ := strconv.Atoi("1")
	fmt.Println(a)
}
