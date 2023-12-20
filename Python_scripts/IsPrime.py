def is_prime(number):
    if number <= 1:
        return False
    elif number == 2:
        return True
    elif number % 2 == 0:
        return False
    else:
        # Проверяем делители до квадратного корня из числа
        for i in range(3, int(number**0.5) + 1, 2):
            if number % i == 0:
                return False
        return True

# Ввод числа от пользователя
user_input = int(input("Введите число: "))

# Проверка и вывод результата
if is_prime(user_input):
    print(f"{user_input} - простое число")
else:
    print(f"{user_input} - составное число")