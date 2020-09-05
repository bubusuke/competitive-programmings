package queue_stack

type myqueue struct {
	que []int
}

func NewQueue() *myqueue {
	return &myqueue{que: make([]int, 0)}
}

func (q *myqueue) Push(i int) {
	q.que = append(q.que, i)
	return
}

func (q *myqueue) Top() int {
	return q.que[0]
}

func (q *myqueue) Pop() {
	q.que = q.que[1:]
}

func (q *myqueue) Empty() bool {
	return len(q.que) == 0
}
