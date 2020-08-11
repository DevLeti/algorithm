# 공부하면서 알게된 여러가지 기능/정보들



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

