package mysort

import (
	"fmt"
	"sort"
)

func mysort() {
	s := []string{"1", "4", "3", "ab", "a", "c"}

	for _, str := range s {
		fmt.Println(str)
	}
	//ascending
	sort.Slice(s, func(i, j int) bool { return s[i] < s[j] })
	for _, str := range s {
		fmt.Println(str)
	}

	//descending
	sort.Slice(s, func(i, j int) bool { return s[i] > s[j] })
	for _, str := range s {
		fmt.Println(str)
	}

}
