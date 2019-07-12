def solution(brown, red):
    answer = [0, 0]
    i = 1
    while(i<=(brown+red)):
        if((brown+red)%i==0):#카펫의 세로길이 구하기
            answer[0]=i
            answer[1] =int((brown+red)/i) #카펫 가로길이
        
        if((answer[0]-2)*(answer[1]-2)==red):#(세로-2)*(가로-2)==빨간색 격자수
            answer.reverse()#큰 길이부터!!
            return answer
        i+=1
    return 1