#to print all premutations of a string
s=input("Enter a string: ")
for i in s:
    for j in s:
        for k in s:
            if i!=j and i!=k and j!=k:
                print(i,j,k)
