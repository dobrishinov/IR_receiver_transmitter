#include <IRremote.h>

IRsend irsend;

void setup()
{
}

void loop() {
		irsend.sendNEC(0xFFE01F, 32);
		delay(30);
                irsend.sendNEC(0xFF906F, 32);
		delay(30);
                irsend.sendNEC(0xFF10EF, 32);
		delay(30);
                irsend.sendNEC(0xFFD02F, 32);
		delay(30);
                irsend.sendNEC(0xFF50AF, 32);
		delay(30);
                irsend.sendNEC(0xFFB04F, 32);
		delay(30);
                irsend.sendNEC(0xFF6897, 32);
		delay(30);
                irsend.sendNEC(0xFF28D7, 32);
		delay(30);
                irsend.sendNEC(0xFF58A7, 32);
		delay(30);
                irsend.sendNEC(0xFF708F, 32);
		delay(30);
                irsend.sendNEC(0xFF30CF, 32);
		delay(30);
                irsend.sendNEC(0xFFB04F, 32);
		delay(30);
                irsend.sendNEC(0xFF58A7, 32);
		delay(30);
                irsend.sendNEC(0xFF609F, 32);
		delay(30);
}
