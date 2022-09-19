## Temperature Measurement with NTC

In this example, you will provide motor movement according to the value read by the sound sensor. The sound sensor provides a digital output by measuring the ambient sound level with a microphone. The sensor circuit amplifies the audio signal received from the microphone and converts the analog audio signal into a digital signal according to the threshold level.
Since the motor draws excessive current, a motor driver board is used in such circuits. The motor drive powers the motor according to the signal it receives from the Arduino. This way you can safely control the motor without damaging Arduino.


After setting up the circuit, let's continue with coding.


![10](https://user-images.githubusercontent.com/111511331/190997546-c5d147e9-a23e-4bc1-a1d6-2c8af12cc259.png)
