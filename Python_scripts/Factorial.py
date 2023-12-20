a = int(input('Введите число: '))
b = 1
for i in range(2, a+1):
    b = b*i
print(f'Факториал {a} - {b}')