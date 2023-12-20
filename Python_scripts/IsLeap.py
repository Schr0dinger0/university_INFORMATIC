def is_leap_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True
    else:
        return False

# Получаем год от пользователя
year = int(input("Введите год: "))

# Проверяем, является ли год високосным, и выводим результат
if is_leap_year(year):
    print(f"{year} год - високосный.")
else:
    print(f"{year} год - не високосный.")