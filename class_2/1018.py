chess_w = ["WBWBWBWB",\
           "BWBWBWBW",\
           "WBWBWBWB",\
           "BWBWBWBW",\
           "WBWBWBWB",\
           "BWBWBWBW",\
           "WBWBWBWB",\
           "BWBWBWBW"]

chess_b = ["BWBWBWBW",\
           "WBWBWBWB",\
           "BWBWBWBW",\
           "WBWBWBWB",\
           "BWBWBWBW",\
           "WBWBWBWB",\
           "BWBWBWBW",\
           "WBWBWBWB"]

row_col = input()

row = int(row_col.split(" ")[0])
col = int(row_col.split(" ")[1])

input_chess = []
input_string = ""
for i in range(0,row):
    input_string = input()
    input_chess.append(input_string)

# print(input_chess)
w_new_draw = 0
b_new_draw = 0
min_draw = 64
new_draw_min = 0

for i in range (0, row-7): # row start point
    for j in range (0, col-7): # col start point

        # new_draw_start
        for r in range (0,8):
            for c in range (0,8):
                if (chess_w[r][c:c+1] != input_chess[r+i][c+j:c+j+1]):
                    w_new_draw += 1
                
                if (chess_b[r][c:c+1] != input_chess[r+i][c+j:c+j+1]):
                    b_new_draw += 1

        
        # print(w_new_draw, b_new_draw)
        if(w_new_draw < b_new_draw):
            new_draw_min = w_new_draw
        else:
            new_draw_min = b_new_draw
        
        if(min_draw > new_draw_min):
            min_draw = new_draw_min
        
        new_draw_min = 0
        w_new_draw = 0
        b_new_draw = 0

print(min_draw, end = "")