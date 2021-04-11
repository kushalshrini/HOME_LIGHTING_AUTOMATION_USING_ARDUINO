# HOME_LIGHTING_AUTOMATION_USING_ARDUINO

This will determines whether the object is get into it (for example:- room) or goes out, for that we used a two IR sensors which will sense the object and if it is coming inside that then the system will show Enter 1, if another person enters it will show Enter 2,suppose if they goes out the number will be reduced one by one,this is because when the first object detected by sensors the count will be increased to one, similarly for 2,3,and so on as soon as the object exit the count starts decreasing one by one.

Finally we will be having a correct figure of objects how many are there inside the room.Wastage of electricity is one of the main problems which we are facing now-a-days. In our home, school, colleges or industry we see that fan/lights are kept on even if there are nobody in the room or area/passage. This happens due to negligence or because we forgot to turn lights off or when we are in hurry. 

To avoid all such situations we have designed this project called “ Home Lightning Automation  ” .Our Project measures the number of persons entering in any room like seminar hall, conference room, classroom. This function is implemented using a pair of Infrared sensors. This person count will be incremented if somebody enters in the room and at that time lights are turned on. And in a reverse way, person count will be decremented if somebody leaves the room. When the number of persons inside the room is zero, lights inside the room are turned off using a relay interface.Since this project uses 2 infrared sensors, it can be used as Bidirectional person counter as well.

https://photos.google.com/photo/AF1QipMSfFdI34jObDDK-nuttvkXuDxecH-DUZJML-Wu



### HARWARE REQUIREMENTS:

        ESP8266 ESP-12E for arduino CP2102
        5v Relay
        2  IR sensors
        1 breadboard
        connecting wires
        NodeMCU ESP8266 ESP-12E for arduino CP210

### SOFTWARE REQUIREMENTS:

        Arduino IDE

