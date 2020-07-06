import multiprocessing
from time import sleep

def myProcess(name,nsec):
    print ("---- do somthing ----")
    sleep(nsec)

if  __name__ == '__main__' :
    t = multiprocessing.Process(target=myProcess, args=("Process-1", 3))
    t.start()
    t.join()
    print ("---- exit ----")
