int red = 3;
int green = 1;
int yellow = 2;
int red2 = 9;
int green2 = 6;
int yellow2 = 5;
int red3 = 10;
int green3 = 12;
int yellow3 = 8;
int red4 = 4;
int green4 = 11;
int yellow4 = 7;
int x = 0;

void setup (){
    pinMode (red, OUTPUT);
    pinMode (green, OUTPUT);
    pinMode (yellow, OUTPUT);
    pinMode (red2, OUTPUT);
    pinMode (green2, OUTPUT);
    pinMode (yellow2, OUTPUT);
    pinMode (red3, OUTPUT);
    pinMode (green3, OUTPUT);
    pinMode (yellow3, OUTPUT);
    pinMode (red4, OUTPUT);
    pinMode (green4, OUTPUT);
    pinMode (yellow4, OUTPUT);
    Serial.begin(9600);
    
}

void loop () {
   Serial.println("Escolha a configuraço (1 - Lento, 2 - Normal, 3 - Balada Gay");
   
   digitalWrite(green, HIGH);
   digitalWrite(red2, HIGH);
   digitalWrite(red3, HIGH);
   digitalWrite(red4, HIGH);
   delay(5000);
   
   digitalWrite(yellow, HIGH);
   delay(2000);
   
   digitalWrite(red, HIGH);
   digitalWrite(green2, HIGH);
   digitalWrite(red2, LOW);
   digitalWrite(green, LOW);
   digitalWrite(yellow, LOW);
   delay (5000);   
   
   digitalWrite(yellow2, HIGH);
   delay(2000);
   
   digitalWrite(red2, HIGH);
   digitalWrite(green3, HIGH);
   digitalWrite(red3, LOW);
   digitalWrite(green2, LOW);
   digitalWrite(yellow2, LOW);
   delay (5000);
   
   digitalWrite(yellow3, HIGH);
   delay(2000);
   
   digitalWrite(red3, HIGH);
   digitalWrite(green4, HIGH);
   digitalWrite(red4, LOW);
   digitalWrite(green3, LOW);
   digitalWrite(yellow3, LOW);
   delay (5000);
   
   digitalWrite(yellow4, HIGH);
   delay(2000);
   
   digitalWrite(red4, HIGH);
   digitalWrite(red, LOW);
   digitalWrite(green4, LOW);
   digitalWrite(yellow4, LOW);
}
