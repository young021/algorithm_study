class Stack:

    def __init__(self):
        self.object = []      #여기서 self.object는 Stack을 객체변수로 설정해 준것
    def isEmpty(self):
        return self.object == []
    def push(self, item):
        self.object.append(item)
    def pop(self):
        return self.object.pop()
    def peek(self):
        return self.object[-1]
    def size(self):
        return len(self.object)

a = Stack() #빈 Stack의 생성
print(a)    # <__main__.Stack object at 0x000001F31F821860>

a.push(10)  #Stack에 10이라는 item을 넣어줌
print(a.isEmpty()) # False

a.push(20)
print(a.size()) #10,20  push 했으므로 2


print(a.peek()) #top에 20이 위치해 있으므로 20

print(a.size()) #peek 메서드를 사용했으므로 size에는 변화없다 2

print(a.pop())  #top에 위치한 20이 제거된다

print(a.size()) #20이 제거되고 Stack에는 10만 남게 된다.
