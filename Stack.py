class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def push(self, item):
        self.items.append(item)
        print(f"Добавлен элемент {item}. Содержимое стека: {self.items}")

    def pop(self):
        if not self.is_empty():
            popped_item = self.items.pop()
            print(f"Извлечен элемент {popped_item}. Содержимое стека: {self.items}")
            return popped_item
        else:
            print("Стек пуст. Невозможно выполнить операцию pop.")
            return None

# Пример использования стека
stack = Stack()

stack.push(1)
stack.push(2)
stack.push(3)

popped_item = stack.pop()
popped_item = stack.pop()
popped_item = stack.pop()
popped_item = stack.pop()
