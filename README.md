NodeMCU
This documentation is for the LEGACY version of Blynk platform which is no longer supported and will be shut down. 
You can sign up for the current version of Blynk platform .
The new mobile apps can be downloaded from  and .
The actual Blynk documentation is .
First, follow  if you haven't set up Arduino Core fore ESP8266 yet.
Uploading Blynk example to NodeMCU
Open File -> Examples -> Blynk -> Boards_WiFi -> NodeMCU 
​
Put your auth token from Blynk app and your WiFi credentials in sketch:
 // You should get Auth Token in the Blynk App.
 // Go to the Project Settings (nut icon).
 char auth[] = "YourAuthToken";
​
 // Your WiFi credentials.
 // Set password to "" for open networks.
 char ssid[] = "YourNetworkName";
 char pass[] = "YourPassword";

In Tools -> Board  menu, select NodeMCU 1.0 (ESP-12E Module)
​
Click on Verify  button and make sure that example compiled correctly:
​
Select the port of your board in Tools -> Port menu.
In Tools -> Upload Speed , select 115200 (higher values may also work for you).
If you don't know how to select the port check this  or if you don't see any ports, check this .
Click the Upload  button. (You should see a progress bar in the console, followed by Done uploading message in the status panel. After this process is finished, LED should start blinking blue: which means the board is waiting for configuration).
The firmware was successfully loaded and is ready. Now go to app and try to light on board LED (pin D4).

What next?
Read about  concept and unleash full power of Blynk.
Blynk supports huge amount of board types. 
Our library is Open Source Software.  us a star on GitHub. 
Troubleshooting
Arduino IDE upload issue
During sketch upload you may see next errors :
error: espcomm_open failed
error: espcomm_upload_mem failed
This means you have no drivers installed. Please follow next section.
No ports appear, when board is plugged in
For Windows or OS X you may need to install drivers for your USB to Serial chipset:
​​
​​
​​
​​
For Ubuntu / linux the drivers should be already there (the board is detected), but it may happen that when you try flashing the board, an error appears: Error opening serial port... If you get this error, you need to set serial port permission.
Open terminal, and run command:
sudo usermod -a -G dialout $USER
Note: You will need to reboot (or just log out and log in) for this change to take effect.
If drivers are installed and you still don't see the port, please try to unplug and plug your NodeMCU board.

How to pick the correct port?
Ensure that your board is disconnected;
Remember which ports are available in your Tools -> Board menu;
Connect your board and wait 30 seconds;
Select the new port that appeared in Tools -> Board menu (the one that was missing before);
