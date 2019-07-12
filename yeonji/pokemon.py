def solution(nums):
    answer = 0
    n = 0
    result=0
    nums.sort() # 포켓몬 리스트를 오름차 순으로 정렬한다.
    for i in nums:
        if(n!=i): # 이전 포켓몬 번호와 같지 않을 때
            result+=1
            n=i #포켓몬 번호 갱신
        if(result<=len(nums)/2): #다른 종류의 포켓몬이 N/2보다 클 때
            answer=result
    return answer