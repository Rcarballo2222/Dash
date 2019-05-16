# WeatherDash

Check the weather at a glance!

Never be caught unprepared!

#Installation and Usage:

1. Clone Library
2. Run `sudo apt-get install libjpeg8-dev`
3. Run `sudo pip install Pillow`


Pocket Beagle w/ST7565 Additional Steps:
4. Use config-pin utility to configure SPI pins and GPIOs on PocketBeagle using https://github.com/beagleboard/bb.org-overlays/blob/master/tools/beaglebone-universal-io/config-pin
5. Connect your PocketBeagle to a ST7565 Display -> use readme in ST7565 folder
6. Run WeatherDash.py - This will give you the current forecast, including temperature and weather conditions.
7. Enjoy the weather at a glance!

Other Devices:
4. Modify WeatherDash.py to get whatever information you want printed or displayed


Enjoy!

Note: If you have issues installing Pillow, refer to this link: https://stackoverflow.com/questions/34631806/fail-during-installation-of-pillow-python-module-in-linux/34631976
