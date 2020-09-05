package queue_stack

import (
	"fmt"
	"testing"
)

func Test_queue(t *testing.T) {
	q := NewQueue()

	q.Push(1)
	q.Push(2)
	q.Push(3)

	for !q.Empty() {
		fmt.Println(q.Top())
		q.Pop()
	}
}
