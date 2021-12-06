package main

import "fmt"

const n int = 100010

var arr = make([]int, n)
var temp = make([]int, n)

func main() {
	var n int
	fmt.Scan(&n)
	for i:=0 ; i < n ; i ++ {
		fmt.Scan(&arr[i])
	}
	j:=0
	res := 0
	for i := 0 ; i < n ; i++ {
		temp[arr[i]]++;
		for temp[arr[i]] > 1 {
			temp[arr[j]]--;
			j++;
		}
		res = max(res , i - j + 1)
	}
	fmt.Print(res)
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
