import serial    #import serial module
ser = serial.Serial('com15', 9600,timeout=1);   #open named port at 9600,1s timeot
ser.flushInput()
#try and exceptstructure are exception handler

while 1:
    ser.write('s')#writ a string to port
    response = ser.readall()#read a string from port
    print (response)
except:
 ser.close()