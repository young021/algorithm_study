def solution(s):
    answer = []
    flag = 1
    for i in s:
        if "A" <= i <= "z" and flag == 1:
            answer.append(i.upper())
            flag = 0
        else:
            answer.append(i.lower())
            flag = 0
            
        if i == " ":
            flag = 1 
    
    return "".join(answer)