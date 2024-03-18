t=int(input())
i=0
while i<t:
    salary=int(input())
    if salary<1500:
        HRA=(10/100)*salary
        DA=(90/100)*salary
        GROSS=salary+HRA+DA
        print(GROSS)
    else:
        HRA=500
        DA=(98/100)*salary
        GROSS=salary+DA+HRA
        print(GROSS)
    
    i+=1