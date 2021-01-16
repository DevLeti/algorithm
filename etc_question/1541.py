"""
입력의 마지막 부분에 "수는 0으로 시작할 수 있다." 라고 명시되어 있습니다.
즉, input값이 0+0023+00023 이런 식으로 요구될 수 있습니다.

eval()의 경우 "1+2"는 3으로 처리하지만, "1+02"는 3으로 처리하지 못하여 런타임 에러를 발생시킵니다.

1. eval은 "02"같이 숫자 맨 앞에 0이 있으면 런타임 에러가 난다.
2. lstrip('0')으로 왼쪽에 있는 0을 모두 제거해서 해결한다. -> new!
"""

i = input() # input

iArray = i.split('-')

# i = 55-50+40
# iArray = ['55', '50+40']

ans = 0
# 0번째 index의 value는 무조건 음수가 아니니까 더하고 지우기 (0이면 더할 필요도 없음)
if iArray[0] != '0' :
    elem = iArray[0].split('+')
    for integer in elem:
        ans = ans + eval(integer.lstrip('0'))
    
del iArray[0]

if(len(iArray) > 0):
    for elem in iArray:
        elem = elem.split('+')
        for integer in elem:
            ans = ans - eval(integer.lstrip('0'))

print(ans)

#121220KB, 104ms