#20190702/수

def solution(s, n):
    slist = list(s)
    length = len(s)
    i = 0
    num = 0
    a = 0
    while(i<length):#slist[0]부터 slist[length-1]까지
        num = ord(slist[i])#알파벳을 ascii코드로 바꿈
        if(num>=65 and num<=90):#A부터 Z까지
            if(num+n>90):#알파벳을 n만큼 밀었을 때 Z를 벗어나면
                a = num + n - 90
                num = 64 + a
            else:
                num = num + n
        elif(num>=97 and num<=122):#a부터 z까지
            if(num+n>122):#알파벳을 n만큼 밀었을 때 z를 벗어나면
                a = num + n - 122
                num = 96 + a
            else:
                num = num + n

        slist[i] = chr(num)#num을 그대로 넣어주어 공백고려x
        i+=1
        
    answer = ''
    for i in slist:#list를 문자열 answer에 넣음
        answer += i
    return answer