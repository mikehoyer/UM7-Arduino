#include <UM7.h>

UM7 imu;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial1.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial1.available() > 0) {
    if (imu.encode(Serial1.read())) {  // Reads byte from buffer.  Valid packet returns true.
      Serial.println(imu.pitch);
    }
  }
}
