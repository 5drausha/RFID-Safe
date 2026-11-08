# RFID-Safe
This is an RFID safe, that uses a servo, an RFID sensor, and an Arduino UNO to lock and unlock a safe. This project took me 11 hours. This is the Onshape Link: https://cad.onshape.com/documents/c91b972252c6a18a27c42581/w/f443dea64a75a052af922a5d/e/0a045e575d95dcf08de21364?renderMode=0&uiState=6aefe250f764fe1f1c8fdc67 

This is an image of the finished 3D model:
<img width="862" height="669" alt="image" src="https://github.com/user-attachments/assets/300c8d0c-3a3e-4dce-b27e-7db0d183f5b8" />


**The 3D model**

This was a very intricate model that needed a lot of measurements. I made 2 separate compartments, one for the Arduino UNO, the RFID, and the wires, and one for the actual safe's contents. I made a small slider slot for the RFID module to go through, the wires should keep it up, and if not, I'll use some tape.
<img width="528" height="643" alt="image" src="https://github.com/user-attachments/assets/2aacdc6a-95ec-4806-90bc-1d70e25b5834" />

I also have a holder for the servo motor. It keeps it in place, and uses its arm to lock onto the door's latch.
<img width="338" height="441" alt="image" src="https://github.com/user-attachments/assets/030293dd-4e2a-492d-886a-c5624ef1b5a4" />

The door is a pivot door, held up by a pillar that is 0.7cm in diameter. I had to thicken the front wall to make this work.
<img width="800" height="672" alt="image" src="https://github.com/user-attachments/assets/e7118f07-c8e5-4ff6-b5a3-d43966143ad6" />

The door isn't filleted on the back edge so that the door can only open forwards, not back.
<img width="320" height="671" alt="image" src="https://github.com/user-attachments/assets/5fec9c5a-a08c-4a73-8e42-4b406f2dd383" />

The top uses a sliding rail mechanism and has a small pin thing that locks it in place to prevent sliding out.
<img width="809" height="664" alt="image" src="https://github.com/user-attachments/assets/89ebb3da-06c9-4cf5-854c-f4bb0217b549" />

<img width="1172" height="548" alt="image" src="https://github.com/user-attachments/assets/b0df5a63-36db-43b7-860a-3a32ade6002c" />

<img width="305" height="290" alt="image" src="https://github.com/user-attachments/assets/0b470f94-c96a-40f3-83f0-5cd90adc9d5d" />

The gap in the small compartment is big enough to house an Arduino Uno plus a 9v battery, and I measured it

<img width="438" height="497" alt="image" src="https://github.com/user-attachments/assets/7a6930af-9e90-4be2-bdd9-033157953ff4" />

The dimensions are 17x20x16.

**Schematic**

This was my schematic for how I would wire it. Since there is no RFID module in tinkercad, I used a breadboard as a place holder.
<img width="1278" height="768" alt="image" src="https://github.com/user-attachments/assets/b6be0f01-1edb-43d0-8990-6e490a79cd53" />

<img width="932" height="758" alt="image" src="https://github.com/user-attachments/assets/f677eada-ff7d-45cd-96b3-5c2168200295" />



**Firmware**

The firmware is pretty simple, it just toggles the servo between 90 degrees and 0 degrees everytime the RFID is scanned so u can lock and unlock the safe. If it is unlocked for 2 minutes, it automatically locks. I wanted to make it more power efficient by using IRQ, but that's too complicated for me to code. I used the Aruion IDE.

**BOM**

<img width="1316" height="658" alt="image" src="https://github.com/user-attachments/assets/042ec12f-be58-45ca-acbd-12349ce6b1ba" />

This project is quite cheap, only being around $12, because I am using my own servo, arduino UNO, and RFID module. I also don't need to buy filament again as I have 600 g of filament remaining from the week 2 project. Unfortunately, I was unable to slice it and check how many grams it was exactly because my computer is broken and my laptop im using at the moment can't run the software. Since it has practically identical dimensions, I estimate it to take about 14h, where even if I'm 2 hours off, it will still cost the same, because my library charges 3 NZD per 4 hours.
<img width="1669" height="303" alt="image" src="https://github.com/user-attachments/assets/3a16d1db-ac42-4726-b943-32249b55df9f" />

For the aliexpress parts, I only needed a 9v Battery connector and some wires, as I don't have those. This is a screenshot of my aliexpress cart (NZD):
<img width="1731" height="720" alt="image" src="https://github.com/user-attachments/assets/83fd17de-6e27-428d-84cf-a9923a364ad5" />

This was a fun project, and I had to get creative because there was no theme, which I usually suck at, so this was a nice opportunity. Thank you again Half Life for the chance to build these kind of things!
