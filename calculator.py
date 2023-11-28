command = ""

while command != 'exit':
    command = input('Command ')

    if command == 'exit':
        break

    if command != '+' and command != '-' and command != '*' and command != '/':
        print('The Operation Is Not Found')
        continue

    a = int(input('Enter First Number : '))
    b = int(input('Enter Second Number : '))

    if command == '+':
        result = (a + b)
    elif command == "-":
        result = (a - b)
    elif command == '*':
        result = (a * b)
    elif command =='/':
        result = (a / b)

    print(f"Result = {result}")

print('Thank You For Use This App')

