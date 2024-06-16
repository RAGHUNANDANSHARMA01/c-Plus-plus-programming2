a=input("enter the number:")
b=input("enter the number:")
operator=input("enter operator(+,-,*,%,/):")
a=int(a)
b=int(b)
if operator=='+':
    print(a+b)
elif operator=='-':
    print(a-b)
elif operator=='*':
    print(a*b)
elif operator=='%':
    print(a%b)
elif operator=='/':
    print(a/b)
else:
    print("invalid operator")