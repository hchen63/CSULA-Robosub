/* 
 *  CSULA Arduino Workshop 1
 *  9/29/17
 *  Exercise about variables, writing methods, and printing to serial monitor.
 * 
*/

int num1 = 999;
int num2 = 56;

void setup() {
  Serial.begin(9600);
  int sum = addNum(num1, num2);
  Serial.print("The sum of ");
  Serial.print(num1);
  Serial.print(" and ");
  Serial.print(num2);
  Serial.print(" = ");
  Serial.print(sum);
}

void loop() {

}

int addNum(int num1, int num2){
  return num1+num2;
  }
