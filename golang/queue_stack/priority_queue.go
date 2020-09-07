package queue_stack

type myPriorityQueue struct {
	que  []int
	Push func(int)
}

func NewPriorityQueueMinTop() *myPriorityQueue {
	mpq := &myPriorityQueue{
		que: make([]int, 0),
	}
	mpq.Push = mpq.minTopPush

	return mpq
}
func NewPriorityQueueMaxTop() *myPriorityQueue {
	mpq := &myPriorityQueue{
		que: make([]int, 0),
	}
	mpq.Push = mpq.maxTopPush

	return mpq
}

func (q *myPriorityQueue) Top() int {
	return q.que[0]
}

func (q *myPriorityQueue) Pop() {
	q.que = q.que[1:]
}

func (q *myPriorityQueue) Empty() bool {
	return len(q.que) == 0
}

func (q *myPriorityQueue) minTopPush(val int) {
	equalOrLessIdx := -1
	moreIdx := len(q.que)

	for moreIdx-equalOrLessIdx > 1 {
		mid := (equalOrLessIdx + moreIdx) / 2

		if val > q.que[mid] {
			equalOrLessIdx = mid
		} else {
			moreIdx = mid
		}
	}

	switch equalOrLessIdx {
	case -1:
		q.que = append([]int{val}, q.que...)
	case len(q.que) - 1:
		q.que = append(q.que, val)
	default:
		q.que = append(q.que[:(equalOrLessIdx+1)], q.que[equalOrLessIdx:]...)
		q.que[equalOrLessIdx+1] = val
	}
	return
}

func (q *myPriorityQueue) maxTopPush(val int) {
	equalOrMoreIdx := -1
	lessIdx := len(q.que)

	for lessIdx-equalOrMoreIdx > 1 {
		mid := (equalOrMoreIdx + lessIdx) / 2

		if val < q.que[mid] {
			equalOrMoreIdx = mid
		} else {
			lessIdx = mid
		}
	}
	switch equalOrMoreIdx {
	case -1:
		q.que = append([]int{val}, q.que...)
	case len(q.que) - 1:
		q.que = append(q.que, val)
	default:
		q.que = append(q.que[:(equalOrMoreIdx+1)], q.que[equalOrMoreIdx:]...)
		q.que[equalOrMoreIdx+1] = val
	}
	return
}
