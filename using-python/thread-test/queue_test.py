#coding=utf-8
# python 2.7 에서 테스트
import threading
import queue
from time import sleep

def myThread(name,q):
    i = 0
    while True:
        sleep(1)
        q.put(i)
        i +=1

if __name__ == '__main__' :

    BUF_SIZE = 10
    q = queue.Queue(BUF_SIZE)

    t = threading.Thread(target=myThread, args=("Thread-1", q))
    t.start()

    while True:
        num = q.get()
        print (str(num) + " 이 생성되었습니다")
        print ("---- exit ----")
