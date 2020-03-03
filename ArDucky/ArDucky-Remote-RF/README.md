![License](https://img.shields.io/badge/license-MIT-green.svg?style=flat-square)

# ArDucky-RF

Radiofrequency ArDucky for the FS1000A and XLC-RF-5V transmitter-receiver modules

Features
========
Receiver:
- microSD to store [Ducky Script](https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Duckyscript) code 
- led to indicate when the payload has finished executing
- you can choose easily between different keyboard layouts!

Transmitter: 
- Serial Prompt Interface to send the payload name easily
- button to send the file through RF


Connections
==========
Receiver:
![ArDucky](https://raw.githubusercontent.com/moretticam/arducky//development/ArDucky-Remote-RF/RF-receiver.png)
Made with [Fritzing](https://github.com/fritzing/fritzing-app).

Transmitter: 

![ArDucky](https://raw.githubusercontent.com/moretticam/arducky//development/ArDucky-Remote-RF/RF-transmitter.png)

Made with [Fritzing](https://github.com/fritzing/fritzing-app).

If you have to connect it to a Leonardo connects the microSD module to the SPI pins that are in the ICSP connector on the board. The microSD module usually works at 3.3V.

Place the modules as close as possible, no more than 5cm between each other, there is no guarantee that they will work over a larger distance without an additional antena.

Configuration
=============

Before uploading the code to the board you need to modify the `Configuration.h` file in both transmitter and receiver to configure and check some parameters such as the keyboard layout or the correct pins on all components.
You can review the `ConfigurationProMicro.h` file to see the connection to a SparkFun ProMicro board.

License
=======
This project is licensed under the MIT License - see the LICENSE file for details.
