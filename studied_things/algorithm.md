# 알고리즘 정리

## 브루트포스 알고리즘 (Brute Force Algorithm)
- 무식한(Brute) 힘(Force) 알고리즘.
- 가능한 모든 수를 확인해서 답을 찾는 방법.
- 예시 : [1018 - 체스판 다시 칠하기](https://www.acmicpc.net/problem/1018)
<!-- ### 너비 우선 탐색(BFS, Breadth-First Search) -->

## 탐욕 알고리즘 (Greedy Algorithm)
- 매순간 최적이라고 생각되는 것을 선택해 나가는 방식으로 최적해에 접근하는 방법.
- 접근 흐름
  1. 선택 과정 (Selection Procedure)
  2. 적절성 검사 (feasibility check)
  3. 해답 점검 (solution check)
- 예시 : [11047 - 동전0](https://www.acmicpc.net/problem/11047)
  1. 선택 과정 - 제일 큰 동전 선택 후 추가.
  2. 적절성 검사 - 맞추려는 돈을 초과하는지 확인. 초과하면 제거하고 다시 1로 돌아간 다음 한단계 작은 동전 선택
  3. 해 검사 - 현재 선택한 동전의 합이 맞추려는 돈과 일치하는지 확인. 부족하면 1로 돌아간다.

## 동적 프로그래밍 (Dynamic Programming)
- 주어진 문제를 최소단위 문제부터 시작해 답을 찾는 방법.
- 예시 : [11726 - 2xn 타일링](https://www.acmicpc.net/problem/11726)
  - 2x1 : | -> 1
  - 2x2 : ||, = -> 2
  - 2x3 : |||, |=, =| -> 3
  - 2x4 : ||||, ||=, |=|, =||, == -> 5
  - ...
  - 2xn의 경우의 수는 n-1번째 + n-2번째!
- n번째의 해답을 찾기 위해선 1, 2, 3, ..., n-1, n-2까지 계산 해야한다.
- 그러므로 작은수(1)부터 차곡차곡 계산해서 값을 저장한 후 필요한 값을 구한다!

## 출처
1. [알고리즘 기법[전체 탐색] - 브루트 포스(brute force)](https://hcr3066.tistory.com/26)
2. [탐욕 알고리즘](https://ratsgo.github.io/data%20structure&algorithm/2017/11/22/greedy/)
3. [[알고리즘] Greedy Algorithm (탐욕 알고리즘)](https://janghw.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Greedy-Algorithm-%ED%83%90%EC%9A%95-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)
4. [Greedy Algorithm 탐욕 알고리즘](http://www.ktword.co.kr/abbr_view.php?m_temp1=6128)
5. [Algorithm Design 알고리즘 설계](http://www.ktword.co.kr/abbr_view.php?m_temp1=5537)