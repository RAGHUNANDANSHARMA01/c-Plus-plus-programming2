print("enter the name of file:")
filename=str(input())
try:
    filehandle=open(filehandle,"r")
    tot1=0
    tot2=0
    vowels=['a','e','i','o','u','A','E','I','O','U']
    for char in filehamdle.read():
        if char in vowels:
            tot1=tot1+1
    if char>='a' and char<='z':
     if char not in vowels:
       tot2=tot2+1
    elif char>='A' and char <='Z': 
      if char not in vowels:
        tot2=tot2+1
    filehandle.close()
    print("the number of vowels is:",tot1,"\n number of consonants is:",tot2)
except IOerror:
    print("either file does'texist or permission is npt allowed!")
