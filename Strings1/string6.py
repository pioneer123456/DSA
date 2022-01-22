#To reverse string
s=input("Enter a string: ")
listy=s.split(' ')
str=" ".join(reversed(listy))
print("The reverse of the string is: "+ str,end="")