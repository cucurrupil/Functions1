#defining function
def max_of_three(x,y,z):
 return max(x,y,z)
#taking input from user
num1 = float(input('Enter first number : '))
num2 = float(input('Enter second number : '))
num3 = float(input('Enter third number : '))
print('The maximum of the three numbers you entered is {}'.format(max_of_three(num1,num2,num3)))
