void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.setTimeout(10);//this will wait 10 ms to process the input
}

void loop() {

    //NOTE: when parsing, the data has a time out of 1 sec before it appears in window. 
    //to fix this add set time out to set up



  // put your main code here, to run repeatedly:
  // int a = -1;

  // //checks to see if there has been anything entered in the serial monitor
  // if(Serial.available() > 0){
  //     a = Serial.parseInt();//strings entered are interpreted as 0
  //                           //negatives are not a pronlem
  //                           //this can overflow
      
  // }

  // Serial.print("You entered: ");
  // Serial.print(a);
  // Serial.println(" YAY!");
  // delay(1000);

  //how to fix overflow: use parseFloat

  // float b = -1;
  // //checks to see if there has been anything entered in the serial monitor
  // if(Serial.available() > 0){
  //     b = Serial.parseFloat();//strings entered are interpreted as 0.00
  //                           //negatives are not a pronlem
  //                           //this can overflow
      
  // }

  // Serial.print("You entered: ");
  // Serial.print(b);
  // Serial.println(" YAY!");
  // delay(1000);

  //how to read strings: use read string
  String c = "";

  if(Serial.available() > 0){
    c = Serial.readString(); //reads a string entered
                             //numebrs are fine
  }

  Serial.print("You entered: ");
  Serial.print(c);
  Serial.println(" YAY!");
  delay(1000);
 
}
