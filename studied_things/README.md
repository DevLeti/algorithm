# 공부하면서 알게된 여러가지 기능/정보들

### 자료형
- short, int, long long (+ unsigned) 값의 크기에 맞는 변수 정의 할줄 알아야 할 것 같다..

### cout
- endl
  - endl함수는 개행만 해주는 것 뿐만 아니라 내부 버퍼까지 비워버리는 기능도 수행함.
  - 10814... 에서 이중 벡터가 문제가 있어서 그런줄 알았는데 알고보니 얘 때문이었다... 클래스까지 만들면서 삽질했는데;;
  - 알고리즘 문제를 풀때 endl은 **절대절대절대** 쓰지말자.. '\n'가 짱이다

### vector

- unique(vector.begin(), vector.end())
  - return value : 중복된 값이 시작되는 index.
  - 수를 비교해가면서 중복되는 값은 뒤로 보내버림.
  - 먼저 sort한 후 unique로 뒤로 보내버리자.
- erase(vector.begin()+s, vector.end()+r)
  - return value : 모르겠다.. _삭제되는 값의 앞 index?_
  - s~r까지 싹다 날림. vector의 size는 알아서 조정됨.



### string

- \>, \<, ==... 등 비교 연산자
  - 비교 기준이 **사전순**이었다..!

