#랜선의 길이는 균일해야함

k_and_n = input()
k = int(k_and_n.split(" ")[0]) #lan_count
n = int(k_and_n.split(" ")[1]) #need_lan_count
# print(k, n)

#lan array
lan_arr = []

lan_length = 0
for i in range(0, k):
    lan_length = int(input())
    lan_arr.append(lan_length)

lan_arr.sort(reverse=True)
#802, 743, 539, 457

## print lan array
# print(lan_arr)

# gen_lan_length = lan_arr[-1]
# gen_lan_count = len(lan_arr)


# arr 삭제 방법
# 1. del list[index]
# 2. list.remove(찾을 아이템)

ans = lan_arr[-1]
cut_lan_length = lan_arr[0]
cut_lan_count = len(lan_arr)
archive_len = 0
#lan_arr = 802, 743, 539, 457

"""
방법
제일 큰 길이의 랜선을 반 짜른 길이(cut_lan_length)를 시작으로
나머지 랜선들을 잘랐을 때 나오는 개수를 더해감.

모두 잘랐을 때 합한 랜선의 개수 >= 필요한 랜선의 개수인 경우 break.
아니면 cut_lan_length = cut_lan_length // 2 해가면서 다시 개수 세어감.

반례:
1 10
99

answer 9
output 6 (틀림)

    cut_lan_length = cut_lan_length // 2 --> 나누는 방법이 잘못된듯..
    이진이니까 감소시키고 개수 만족시켰다고 끝내지 않고 length를 올려가면서 확인해야할듯
"""

while(True):
    if(cut_lan_count >= n): #end point
        ans = cut_lan_length
        break
    else:
        cut_lan_count = 0
        cut_lan_length = cut_lan_length // 2

        # print("cut_lan_length = {}".format(cut_lan_length))
        for i in range(0, len(lan_arr)):
            cut_lan_count += lan_arr[i] // cut_lan_length
            # print(cut_lan_count)

    
print(ans, end="")

"""
4 11
802
743
457
539

2 2
7
3

1 1
2147483647
"""