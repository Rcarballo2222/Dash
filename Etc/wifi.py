#!/usr/bin/python
import os
import time
import urllib2 

os.system("gpio mode 21 out && gpio mode 22 out")

while True:
    try:
        urllib2.urlopen("http://www.google.com").close()
    except urllib2.URLError:
        print "Not Connected"
        os.system("gpio write 21 0 && gpio write 22 1")
        time.sleep(1)
    else:
        print "Connected"
        os.system("gpio write 21 1 && gpio write 22 0")
        break
