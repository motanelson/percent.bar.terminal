import time
import os

def draw(a):
    perc=int(a/2.5)
    aa=str(a)+"%          "
    aa=aa[:4]
    print(aa+"[",end="")
    i="|" * perc
    ii=(40-len(i))*" "
    print(i+ii+"]",end="\r")
    

print("\033c\033[40;37m\n")
counter=0
while 1:
    if counter > 100:
         break
    draw(counter)
    counter=counter+4
    time.sleep(1)

print("")