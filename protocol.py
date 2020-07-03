#!/usr/bin/env python
# -*- coding: utf-8 -*-

'''
Summary         : ERP42 CAN Control (SEND) 
Copyright       : UNMANNED SOLUTION
Author          : DaeJong Jin (djjin@unmansol.com) 
Version         : -
Created Date    : July 02. 2020
Completed Data  : -
'''

'''
ID : 0x777

DATA
Mode                0	    uint8	0	    Manual/Auto	    0x00: Manual 0x01: Auto (0x00: M, 0x01: A)		
		                            1	    E-Stop	        0x00: Not E-Stop 0x01: E-Stop (0x00: N.E, 0x02: E.S)		
		                            2..3    Gear	        0x00: Drive 0x01: Neutral  0x02: Reverse (0x00:D, 0x04: N, 0x08: R)		
Speed Command       1..2	uint16		    Target Speed	0~20	KPH	x*10
Steering Command    3..4	int16		    Target Steer	-28~28	deg	x*71
Brake Command       5	    uint8		    Brake	        0~100		
Alive Count         7	    uint8		    Heartbeat	    "255/0  increasing each one step,
if keep going to increase, then success control,
otherwise, then MDPS will be under manual."		
'''


from time import sleep
from threading import Thread

class ERPProtocol(object):
    
    packet  = [0 for i in range(8)]
    SHIFT   = {'MANUAL':0x00, 'AUTO':0x01}
    ESTOP   = {'OFF':0x00, 'ON':0x02}
    GEAR    = {'DRIVE':0x00, 'NEUTRAL':0x04, 'REVERSE':0x08}
    
    def __init__(self):
        self.MODE        = 0x04
        self.speed_data  = [0x00,0x00]
        self.steer_data  = [0x00,0x00]
        self.brake_data  = 0x00
        self.ALIVE       = 0x00

        self.__SHIFTMODE = 'MANUAL'
        self.__ESTOPMODE = 'OFF'
        self.__GEARMODE = 'DRIVE'

        


    def makepacket(self, SHIFTMODE='MANUAL', ESTOPMODE='OFF', GEARMODE='NEUTRAL'):
        self.MODE = self.SHIFT.get(SHIFTMODE) | self.ESTOP.get(ESTOPMODE) | self.GEAR.get(GEARMODE)

        self.packet[0]   = self.MODE
        self.packet[1]   = self.speed_data[0] 
        self.packet[2]   = self.speed_data[1]       
        self.packet[3]   = self.steer_data[0] 
        self.packet[4]   = self.steer_data[1] 
        self.packet[5]   = self.brake_data
        self.packet[7]   = self.ALIVE 

        return self.packet

    def count_alive(self):
        self.ALIVE += 1
        if self.ALIVE >= 256 :
            self.ALIVE = 0

    def test_process(self):
        while True:
            pt.count_alive()
            # print('{0:02x}'.format(pt.ALIVE))
            result = pt.makepacket(SHIFTMODE=self.__SHIFTMODE,ESTOPMODE=self.__ESTOPMODE,GEARMODE=self.__GEARMODE)
            print(result)   
            sleep(0.02)

    def test_f(self):

        t = Thread(target=self.test_process)
        t.daemon = True
        t.start()
        while True:
            stop_char=raw_input("Enter 'q' to quit ")
            # print(t)
            if stop_char.lower() == "q":
                # t.join()
                print("pressed q")
                exit(0)
                break
            elif stop_char.lower() == "m":
                print("Input m")
                self.__SHIFTMODE = "MANUAL"
            elif stop_char.lower() == "a":
                print("Input a")
                self.__SHIFTMODE = "AUTO"
            elif stop_char.lower() == "off":
                print("Input off")
                self.__ESTOPMODE = "OFF"
            elif stop_char.lower() == "on":
                print("Input on")
                self.__ESTOPMODE = "ON"

            elif stop_char.lower() == "d":
                print("Input d")
                self.__GEARMODE = "DRIVE"
            elif stop_char.lower() == "n":
                print("Input n")
                self.__GEARMODE = "NEUTRAL"
            elif stop_char.lower() == "r":
                print("Input r")
                self.__GEARMODE = "REVERSE"


'''
    SHIFT   = {'MANUAL':0x00, 'AUTO':0x01}
    ESTOP   = {'OFF':0x00, 'ON':0x02}
    GEAR    = {'DRIVE':0x00, 'NEUTRAL':0x04, 'REVERSE':0x08}
'''
            
if __name__ == "__main__":
    pt = ERPProtocol()
    pt.test_f()
    


        # q.put(self.t, False)
            ## do something else
    
        # speed_data = -1253
        # steer_data = -1
        # speed_data = speed_data.to_bytes(2, byteorder="little", signed=True)
        # steer_data = steer_data.to_bytes(2, byteorder="little", signed=True)

        # pt.steer_data[0] = steer_data[0]
        # pt.steer_data[1] = steer_data[1]
        # pt.speed_data[0] = speed_data[0]
        # pt.speed_data[1] = speed_data[1]

        # pt.count_alive()
        # # print('{0:02x}'.format(pt.ALIVE))
        # result = pt.makepacket(WHEELMODE='WBACKWARD')
        # print(result)
        # test = sum(result[3:10])
        # checksum = pt.calc_checksum(result[3:10])
        # check_checksum = test + checksum
        # check_checksum = check_checksum & 0xFF
        # test ="0x{:02x}".format(check_checksum)

        # print("0x{:02x}".format(check_checksum))       
        # sleep(0.05)


        # print(pt.packet)
        # print(pt.makepacket())

