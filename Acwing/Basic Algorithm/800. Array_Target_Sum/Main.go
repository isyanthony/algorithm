package main

import (
	"bufio"
	"fmt"
	"os"
)

const N = 100010

func main() {
	A := make([]int, N)
	B := make([]int, N)
	var n int
	var m int
	var x int
	reader := bufio.NewReader(os.Stdin)
	fmt.Fscan(reader, &n, &m, &x)
	for i := 0; i < n; i++ {
		fmt.Fscan(reader, &A[i])
	}
	for i := 0; i < m; i++ {
		fmt.Fscan(reader, &B[i])
	}

	j := m - 1
	for i := 0; i < n; i++ {
		for j >= 0 && A[i]+B[j] > x {
			j--
		}
		if j >= 0 && A[i]+B[j] == x {
			fmt.Printf("%d %d\n", i, j)
		}
	}

}
