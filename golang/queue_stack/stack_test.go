package queue_stack

import (
	"fmt"
	"testing"
)

func Test_stack(t *testing.T) {
	s := NewStack()

	s.Push(1)
	s.Push(2)
	s.Push(3)

	for !s.Empty() {
		fmt.Println(s.Top())
		s.Pop()
	}
}
