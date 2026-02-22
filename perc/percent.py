
def draw(a):
    perc=int(a/2)
    aa=str(a)+"%          "
    aa=aa[:4]
    print(aa+"[",end="")
    i="|" * perc
    ii=(50-len(i))*" "
    print(i+ii+"]",end="\r")
    