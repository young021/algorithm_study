def piv(a):
    
    answer = [0,1]

    for i in range(2,a+1):
        answer.append(answer[i-1] + answer[i-2])
    return answer[-1]
    

print(piv(10)) 
