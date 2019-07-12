def solution(s):
    answer = ''
    a = len(s)
    if len(s) ==4 or len(s)==6:
        answer = s.isdigit()
    else:
        answer = false
           
    return answer