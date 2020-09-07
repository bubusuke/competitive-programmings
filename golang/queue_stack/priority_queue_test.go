package queue_stack

import (
	"fmt"
	"testing"
)

func Test_NewPriorityQueueMaxTop(t *testing.T) {
	q := NewPriorityQueueMaxTop()
	q.Push(1)
	fmt.Println("maxTopPriorityQueue", q.que)
	q.Push(3)
	fmt.Println("maxTopPriorityQueue", q.que)
	q.Push(2)
	fmt.Println("maxTopPriorityQueue", q.que)
	q.Push(0)
	fmt.Println("maxTopPriorityQueue", q.que)
	q.Push(5)
	fmt.Println("maxTopPriorityQueue", q.que)
	for !q.Empty() {
		fmt.Println(q.Top())
		q.Pop()
	}
}

func Test_NewPriorityQueueMinTop(t *testing.T) {
	q := NewPriorityQueueMinTop()
	q.Push(1)
	fmt.Println("minTopPriorityQueue", q.que)
	q.Push(3)
	fmt.Println("minTopPriorityQueue", q.que)
	q.Push(2)
	fmt.Println("minTopPriorityQueue", q.que)
	q.Push(0)
	fmt.Println("minTopPriorityQueue", q.que)
	q.Push(5)
	fmt.Println("minTopPriorityQueue", q.que)
	for !q.Empty() {
		fmt.Println(q.Top())
		q.Pop()
	}
}
