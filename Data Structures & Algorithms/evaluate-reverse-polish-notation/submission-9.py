class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            if token in {'+', '-', '*', '/'}:
                if token == '+':
                    stack.append(stack.pop() + stack.pop())
                elif token == '*':
                    stack.append(stack.pop() * stack.pop())
                elif token == '-':
                    second, first = stack.pop(), stack.pop()
                    stack.append(first - second)
                else:
                    second, first = stack.pop(), stack.pop()
                    sign = -1 if (first < 0) ^ (second < 0) else 1
                    stack.append(sign * int(abs(first) / abs(second)))
            else:
                stack.append(int(token))
        return stack[0]
                    