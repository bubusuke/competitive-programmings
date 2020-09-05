package queue_stack

type mystack struct {
	st []int
}

func NewStack() *mystack {
	return &mystack{st: make([]int, 0)}
}

func (s *mystack) Push(i int) {
	s.st = append(s.st, i)
	return
}

func (s *mystack) Top() int {
	return s.st[len(s.st)-1]
}

func (s *mystack) Pop() {
	s.st = s.st[:(len(s.st) - 1)]
}

func (s *mystack) Empty() bool {
	return len(s.st) == 0
}
