# 가운데 글자 가져오기....입니다...
# 금요일에 발전해서 오겠씀다


def solution(s):
    a=len(s)
    if a%2==1:
        return s[a//2]
    else :
        return s[a//2-1]+s[a//2]
    
print('return') #string출력
    



