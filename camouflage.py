def solution(clothes):
    spy = {}
    answer = 1

    for i in clothes:
        if i[1] in spy:
            spy[i[1]].append(i[0])
        else:
            spy[i[1]] = [i[0]]

    for k in spy:
        answer *= len(spy[k])+1

    return answer - 1
