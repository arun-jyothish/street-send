
int reciever(){

	uint64_t TimeStart = millis();
	uint64_t TimeStop = millis();
	int TimeDelay = 2000;

	int analogValue = analogRead(Data_pin);
	bool state = false;
	int count =0;

	int lowThreshold = 500;

	int command_1 = 103;
	int command_1 = 133;

	if (TimeStop-TimeStart < TimeDelay){
		if (state){ ++count; state = false;}
		if ( analogValue < lowThreshold ){ state = true; }
	}
	else { count =0; 
		Serial.print("count: ");
		Serial.println(count);	}
	if (count > 5){
		// run here
		return command_2;
	}
	else if (count > 2){
		// other command here
		return command_1;
	}
	else{ return 0; }
}

const int ledPin = 5, dataPin= 5;

void setup(){
	pinMode(dataPin,INPUT_PULLUP)
	pinMode(ledPin,OUTPUT);

}

void loop(){
	
	int commandInt =  reciever();
}
