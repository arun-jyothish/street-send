
void setup(){
	pinMode(dataPin,OUTPUT);
}

enum command{ 
	command_1=1010,
	command_2=1010
};

void send(command msg){
int dl =300;	
	if (msg == command_1){
	dl = 66;
	}
	else if (msg == command_2){
	dl = 166;
	}
	else{  Serial.println("Command Not Found! "); return; }
	int limit =5;
	for (int i = 0; i < limit; i++) {
		digitalWrite(dataPin,HIGH);	
			delay(dl);
		digitalWrite(dataPin,LOW);
			delay(dl);
	}
}

void loop(){
	send();
}
