Leetcode Problems
=====================
## Problem #1 Two Sum
### 사용한 알고리즘
* Brute Force
* Hashmap
### 문제해결방안
1. Brute Force
	* 모든 경우의 수를 구한다.
	* 기준 수를 잡고 나머지 수 중 합이 target이 되는 수를 구한다.
	* O(N^2)의 timecomplexity가 필요하다. (이중 for문 필요)
2. Hashmap
	* Hashmap에 <수, 인덱스> pair로 집어넣는다.
	* 반복문에서 기준이 되는 수를 target에서 빼고, 나머지 수를 hashmap에서 찾는다.
	* 해당되는 value가 있다면 바로 return 없다면 기준 수를 변경
	* 최악의 경우 모든 수를 한번만 보면 되므로 O(N)이 걸린다.

