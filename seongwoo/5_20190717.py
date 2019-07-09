def solution(name):
    # ord('A') chr(65)
    # K = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

    alpha = ['A']*len(name)
    cnt,check = 0,0
    blpha = []
    for i in range(len(name)):
        if name[i]!=alpha[i] and (ord(name[i])-ord(alpha[i]))<=13 :
            cnt+=(ord(name[i])-ord(alpha[i]))
            blpha.append(name[i])

        elif name[i]!=alpha[i] and (ord(name[i])-ord(alpha[i]))>13 :
            cnt+=(ord(alpha[i])-ord(name[i])+26)
            blpha.append(name[i])
        else :
            if name[i] == 'A' : check+=1
            blpha.append(name[i])

        print(cnt, check, blpha)
        
    if check==0 : cnt+=len(name)-1
    else : cnt+=1

    print(cnt)
    print('\n')
    return cnt

solution('JAN')
solution('JAZ')
solution('JEROEN')
solution('AZAAAZ')
solution('ABABAAAAAAABA')

## 미 완료