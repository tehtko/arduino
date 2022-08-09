#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
}

int redValue;
int greenValue;
int blueValue;

void loop()
{
    redValue = 255; 
    greenValue = 0;
    blueValue = 0;

    for(int i = 0; i < 255; i += 1)
    {
        redValue -= 1;
        greenValue += 1;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        delay(1);
    }

    for(int i = 0; i < 255; i += 1)
    {
        greenValue -= 1;
        blueValue += 1;
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
        delay(1);
    }

    for(int i = 0; i < 255; i += 1)
    {
        blueValue -= 1;
        redValue += 1;
        analogWrite(BLUE, blueValue);
        analogWrite(RED, redValue);
        delay(1);
    }
}
