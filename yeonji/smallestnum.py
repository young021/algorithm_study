def solution(arr):
    answer = []
    if(len(arr)>1): #길이가 1보다 길경우
        min = arr[0]
        for i in arr: #가장 작은 수 구하기
            if(min>i):
                min = i
    else: #길이가 1미만 -> -1 추가
        answer.append(-1)
        return answer
    for i in arr: # 가장 작은 수 빼기
        if(i!=min):
            answer.append(i)
    
    return answer