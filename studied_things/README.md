# 공부하면서 알게된 여러가지 기능/정보들

## C++
### 자료형
- short, int, long long (+ unsigned) 값의 크기에 맞는 변수 정의 할줄 알아야 할 것 같다..

### 입출력 최적화 (알고리즘 문제 풀 때 실행시간 감소)
1. `ios_base::sync_with_stdio(0)`
  - c의 stdio와 c++의 iostream 동기화를 비활성화 시킴.
  - c++만의 버퍼를 쓰기 때문에 실행 속도는 빨라지나 c구문의 입출력은 쓰면 안된다.(입출력 순서가 보장되지 않음)
  - 또한 멀티스레드 환경에서 예상치 못한 값이 나올 수 있다.
  - 제일 좋은건 printf, scanf같이 c구문을 쓰면 되지만, c++의 문법으로 알고리즘 문제를 푼다면 필수 옵션.
2. `cin.tie(0)`
  - cout과 cin의 관계를 끊어버림.
  - cout은 기본적으로 버퍼에 추가되고, 출력(output)은 기본적으로 **버퍼가 모두 찼을 경우** flush되고 보여진다. (cout -> 출력할 문자 버퍼에 입력 -> 퍼버가 가득차면 그때서야 flush하고 출력)
  - 이때 tied stream은 stream이 다른 종류의 stream에 만나기 전 자동으로 flush 된다.(예 : cout하고 cin한다고 하면 flush하고 cin으로 넘어감.)
  - 그러므로 untied되면 flush를 자동으로 해주지 않음. cout 다음줄이 cin이어도 cin이 먼저 나올수도 있다는 의미이다.
  - [이곳](https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull)을 참고하자.
> flush는 버퍼에 담긴 데이터가 모두 쏟아지는 것을 의미.

### cout
- endl
  - endl함수는 개행만 해주는 것 뿐만 아니라 내부 버퍼까지 비워버리는 기능도 수행함.
  - [10814](https://www.acmicpc.net/problem/10814)에서 이중 벡터가 문제가 있어서 그런줄 알았는데 알고보니 얘 때문이었다... 클래스까지 만들면서 삽질했는데;;
  - 알고리즘 문제를 풀때 endl은 **절대절대절대** 쓰지말자.. '\n'가 짱이다
- 숫자 자리수 출력 개수 조절 & 소수점 자리수 출력 개수 조절 (4344.cpp)
  - `cout.precision(6)`
    - 가장 큰 자리수 부터 숫자 6개를 출력한다는 뜻.
	- ex) 4321.123456이면 4321.12이다.
	- 기본 설정이 6이다.
  - `cout << fixed`
    - 나타낼 소수점 자릿수를 고정한다.
	- `cout << fixed`하고 `cout.precision(3)`하면 소수점 3자리까지 출력한다는 뜻이 된다.
	- ex) 4321.123567 이면 4321.12**4**까지 출력됨. **4인 이유는 다음자리에서 반올림 하기 때문.**
	- 해제는 `cout.unsetf(ios::fixed)`
	
### vector
- `unique(vector.begin(), vector.end())`
  - return value : 중복된 값이 시작되는 index.
  - 수를 비교해가면서 중복되는 값은 뒤로 보내버림.
  - 먼저 sort한 후 unique로 뒤로 보내버리자.
- `erase(vector.begin()+s, vector.end()+r)`
  - return value : 모르겠다.. _삭제되는 값의 앞 index?_
  - s~r까지 싹다 날림. vector의 size는 알아서 조정됨.
- `upper_bound(vector.begin(), vector.end(), T target)`
  - return value : vector<T>::iterator result
  - 이진탐색 기반이어서 정렬되어 있어야한다.
  - target의 값을 초과하는 가장 첫번째 원소의 위치를 return함.
- `lower_bound(vector.begin(), vector.end(), T target)`
  - return value : vector<T>::iterator result
  - 이진탐색 기반이어서 정렬되어 있어야한다.
  - target의 값 이상이 처음 나오는 원소의 위치를 return 함.
  - [10816](https://www.acmicpc.net/problem/10816)문제에서 upper_bound(...) - lower_bound(...)로 주어진 값의 카드가 몇장 있는지 찾아냈다.
  - 직접 구현하는 코드는 [이쪽](https://blockdmask.tistory.com/168);
  
### float
- float 오차
  - [2108](https://www.acmicpc.net/problem/2108)문제에서 산술평균 답 할때 틀렸는데, 그 이유가 평균값 변수 타입을 'double이 아닌 float(오차 발생) 으로 해서'였다.
  - float의 상대오차는 **10^-7**이고 double의 상대오차는 10^-15정도이다.
  - double을 쓴다고 많이 느려지지 않는다. 
  - 그러므로 문제를 풀 때는 float보다는 double형 변수를 쓰는게 좋다!

### string
- \>, \<, ==... 등 비교 연산자
  - 비교 기준이 **사전순**이었다..!

## Python
### `eval()`
  - 숫자 맨 왼쪽에 0이 있는 경우 계산하지 못함. '02'이런 경우 2로 계산하지 못하고 SyntaxError가 뜬다.
  - 그러므로 `lstrip('0')`을 통해서 왼쪽의 모든 '0'을 지운 다음 계산하자.

### `strip()`, `lstrip()`, `rstrip()`
  - 문자열의 양 끝에서 특정 문자를 지우는 함수.
  - 문자열이 `text = '>>> Hello <<<'`일 때
  	- `text.strip('> <')` = 양쪽 모두 `>`를 계속 지우다가 공백이 오면 계속 지우고 `<`를 지운다. 그 외의 글자가 오면 중단. 출력은 `Hello`
	- `text.lstrip('> <')` = 똑같은 방식인데 왼쪽만. 출력은 `Hello <<<`
	- `text.rstrip('> <')` = 똑같은 방식인데 오른쪽만. 출력은 `>>> Hello`