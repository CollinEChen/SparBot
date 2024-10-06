int IN1pin = 7;
int IN2pin = 8;
int ENApin = 9;

int motorspeed;

void setup() {
  // put your setup code here, to run once:
pinMode(IN1pin, OUTPUT);
pinMode(IN2pin, OUTPUT);
pinMode(ENApin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(IN1pin, random(0,2));
digitalWrite(IN2pin, random(0,2));
analogWrite(ENApin, random(15,30));
delay(random(150,350));

}
