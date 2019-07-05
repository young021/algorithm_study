def solution(a):
    # 수포자 1,2,3의 케이스를 인풋값 길이에 맞게 생성
    def function1(a): 
        
        first=[]
        num=0
        while True:
            num+=1
            first.append(num)
            if num==5:
                num=0
                continue
            if len(a)==len(first):
                break
        return first

    def function2(a):
        
        second=[2]
        if len(a)==1:
            return second
        else:
            second.append(1)
            for i in range(len(a)-2):
                if second[i]==2:
                    second.append(2) 
                else: 
                    if second[i]==1:
                        second.append(3)
                    elif second[i]==3:
                        second.append(4)
                    elif second[i]==4:
                        second.append(5)
                    elif second[i]==5:
                        second.append(1)         
        return second


    def function3(a):
        
        third=[3]
        if len(a)==1:
            return print(third)
        else:
            third.append(3)
            for i in range(len(a)-2):
                if third[i]==third[i+1]:
                    if third[i]==3:
                        third.append(1)
                    elif third[i]==1:
                        third.append(2)

                    elif third[i]==2:
                        third.append(4)
                    elif third[i]==4:
                        third.append(3)
                else:
                    third.append(third[i+1])
        return third
    man1=function1(a)
    man2=function2(a)
    man3=function3(a)
    
    # 찍은 값과 정답의 일치를 점수화 시킴

    def score1(a):
        man1num=0
        for i in range(len(a)):    
            if man1[i]==a[i]:
                man1num+=1
        return man1num
            

    def score2(a):
        man2num=0
        for i in range(len(a)):    
            if man2[i]==a[i]:
                man2num+=1
        return man2num


    def score3(a):
        man3num=0
        for i in range(len(a)):    
            if man3[i]==a[i]:
                man3num+=1
        return man3num
    

    hello = [score1(a),score2(a),score3(a)]
    hi=[]

    # max함수를 이용해서 가장 많이 맞은 사람을 인덱스에 넣어줌
    
    for i in range(0,3):
        if hello[i]==max(hello):
            hi.append(i+1)
    return hi






    



