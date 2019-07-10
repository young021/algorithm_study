def solution(name):
    flag = 0
    cnt = -1
    answer = 0

    for i in name:
        cnt += 1 
        
        if i == "A":
            flag += 1 
        else:
            flag = 0
            
        if cnt < flag*2:
            cnt = (cnt-flag)*2 + len(name)-1 -cnt
            break
            
    for i in name:
        if ord(i)-ord("A")<ord("Z")-ord(i)+1:
            answer += ord(i)-ord("A")
        else:
            answer += ord("Z")-ord(i)+1
            
    return answer+cnt