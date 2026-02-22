import perc.percent
import time    

print("\033c\033[40;37m\n")
counter=0
while 1:
    if counter > 100:
         break
    perc.percent.draw(counter)
    counter=counter+4
    time.sleep(1)

print("")