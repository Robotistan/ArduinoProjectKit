## Temperature and Humudity Measurement with ESP8266

In this application, you will send the temperature and humidity data received via DHT11 to Thingspeak platform using ESP8266 WiFi module.
The UART protocol is used when communicating with ESP8266. In this example, we will use the 115200 Baud rate (Communication speed).
Thingspeak is an open source loT (lnternet of Things) application. Users send data to the site via HTTP and make their own applications visually better and easy to understand thanks to the graphical interfaces on the site. In this example, time-humidity and time-temperature graphs will be generated in Thingspeak with data from the DHT11 sensor.

ESP8266, thanks to the wireless communication circuit on the ethernet protocol, allows us to connect to the wireless Internet. Devices such as Arduino do not have any hardware that allows them to use the ethernet protocol. Therefore, modules are utilized to use the ethernet protocol. These modules convert the ethernet protocol into communication protocols that provide easier communication. ESP8266 is an example of these modules. It acts as an interpreter, which simplifies and converts the Ethernet protocol into a UART protocol.

The DHT11 is a sensor far reading humidity and temperature data. As with the sensors used before, this sensor allows us to measure the humidity and temperature of the air by measuring the conductivity. There is an NTC (Negative Temperature Coefient) inside the sensor. NTC is a kind of resistor, and as the ambient temperature increases, its conductivity increases and the resistance value decreases. There are 2 electrodes inside the sensor and a surface that holds the moisture in the air between the electrodes. This surface changes the conductivity between the electrodes as the amount of moisture in the air increases. In this way, the humidity level in the air can be measured.


Let's set up the circuit and then start writing our project code.

![image](https://user-images.githubusercontent.com/111511331/191035466-8e98790a-7889-4d12-a18a-6431eda6597c.png)

