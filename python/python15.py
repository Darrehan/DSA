# Program for calculating GCD
x=input("Enter the value of first number \n")
y=input("Enter the value of second number \n")
def gcd(x,y): 
    fx=[]
    for i in range(1,x+1):
        if(x%i==0):
            fx.append(i)
            
    fy=[]  
    for j in range(1,y+1):
        if(y%j==0):
            fy.append(j)
    fc=[]    
    for f in fx:
        if f in fy:
            fc.append(f)
    return(fc[-1])
                    