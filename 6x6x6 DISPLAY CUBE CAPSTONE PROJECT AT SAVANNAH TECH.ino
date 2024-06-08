void setup() {
   pinMode(2, OUTPUT); // topRow First Plane
   pinMode(3, OUTPUT); // middleRow First Plane
   pinMode(4, OUTPUT); // middleRow SECOND Plane
   pinMode(5, OUTPUT); // middleRow THIRD Plane
   pinMode(6, OUTPUT);// bottomRow First Plane
   
   pinMode(7, OUTPUT); //topRow middle plane
   pinMode(8, OUTPUT); //middleRow 1ST middle plane
   pinMode(9, OUTPUT); //middleRow 2ND middle plane
   pinMode(10, OUTPUT); //middleRow 3RD middle plane
   pinMode(11, OUTPUT); //bottom Row middle plane
    
   pinMode(12, OUTPUT); // top row back plane
   pinMode(13, OUTPUT); // 1STmiddle row back plane
   pinMode(22, OUTPUT); // 2NDmiddle row back plane
   pinMode(24, OUTPUT); // 3RDmiddle row back plane
   pinMode(26, OUTPUT); // back row back plane

   pinMode(51, OUTPUT); // column left
   pinMode(52, OUTPUT); // column 1STmiddle
   pinMode(53, OUTPUT); // column 2NDMIDDLE
   pinMode(54, OUTPUT); // column 3RDmIDDLE
   pinMode(55, OUTPUT); // column right
}

void loop() {
  int delayAnimation = 60;
  // put your main code here, to run repeatedly:
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayBottom[75] = {false,false,false,false,false, true,true,true,true,true, false,false,false,false,false, true,true,true,true,true, false,false,false,false,false};
  displayPlane(imageArrayBottom, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayMiddle[75] = {false, false, false, true, true, true, false, false, false, false, false, false, true, true, true, false, false, false, false, false, false, true, true, true, false, false, false,};
  displayPlane(imageArrayMiddle, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayTop[75] = {true, true, true, false, false, false, false, false, false, true, true, true, false, false, false, false, false, false, true, true, true, false, false, false, false, false, false};
  displayPlane(imageArrayTop, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayLeft[75] = {true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false};
  displayPlane(imageArrayLeft, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayMiddleV[75] = {false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false};
  displayPlane(imageArrayMiddleV, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayRight[75] = {false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true};
  displayPlane(imageArrayRight, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayMiddle[75] = {false, false, false, true, true, true, false, false, false, false, false, false, true, true, true, false, false, false, false, false, false, true, true, true, false, false, false};
  displayPlane(imageArrayMiddle, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArraySL[75] = {true, false, false, false, true, false, false, false, true, true, false, false, false, true, false, false, false, true,true, false, false, false, true, false, false, false, true};
  displayPlane(imageArraySL, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayMiddleV[75] = {false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false, false, true, false};
  displayPlane(imageArrayMiddleV, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArraySR[75] = {false, false, true, false, true, false, true, false, false, false, false, true, false, true, false, true, false, false,false, false, true, false, true, false, true, false, false};
  displayPlane(imageArraySR, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArrayMiddle[75] = {false, false, false, true, true, true, false, false, false, false, false, false, true, true, true, false, false, false, false, false, false, true, true, true, false, false, false};
  displayPlane(imageArrayMiddle, 2);
  }
  for (int iterator5 = 0; iterator5 < delayAnimation; iterator5++){
  bool imageArraySL[75] = {true, false, false, false, true, false, false, false, true, true, false, false, false, true, false, false, false, true,true, false, false, false, true, false, false, false, true};
  displayPlane(imageArraySL, 2);
  }
}
void displayPlane(bool imageArray[75], int delayTime){
    for (int iterator = 0; iterator < 10; iterator++){
      for(int iterator2 = 2; iterator2 < 27; iterator2++){ // turns off all rows
        digitalWrite(iterator2, LOW); 
      }
      switch (iterator) { // turns on the appropriate row
        case 0:
           digitalWrite(2, HIGH);
           break;
        case 1:
          digitalWrite(3, HIGH);
          break;
        case 2:
          digitalWrite(4, HIGH);
          break;
        case 3:
          digitalWrite(5, HIGH);
          break;
        case 4:
          digitalWrite(6, HIGH);
          break;
        case 5:
         digitalWrite(7, HIGH);
          break;
        case 6:
          digitalWrite(8, HIGH);
          break;
        case 7:
         digitalWrite(9, HIGH);
         break;
        case 8:
          digitalWrite(10, HIGH);
          break;
        case 9:
         digitalWrite(11, HIGH);
          break;
        case 10:
         digitalWrite(12, HIGH);
         break;
          case 11:
         digitalWrite(13, HIGH);
         break;
          case 12:
         digitalWrite(22, HIGH);
         break;
          case 13:
         digitalWrite(24, HIGH);
          case 14:
         digitalWrite(26, HIGH);
         break;
         
      }

      // Now display the columns!
      if (imageArray[5*iterator] == true){
        digitalWrite(51, false);
      }
      else{
        digitalWrite(51, true);
      }
      if (imageArray[5*iterator+1] == true){
        digitalWrite(52, false);
      }
      else{
        digitalWrite(52, true);
      }
      if (imageArray[5*iterator+2] == true){
        digitalWrite(53, false);
      }
      else{
        digitalWrite(53, true);
      }
      if (imageArray[5*iterator+3] == true){
        digitalWrite(54, false);
      }
      else{
        digitalWrite(54, true);
      }
      if (imageArray[5*iterator+4] == true){
        digitalWrite(55, false);
      }
      else{
        digitalWrite(55, true);
      delay(delayTime);
      digitalWrite(51, true);
      digitalWrite(52, true);
      digitalWrite(53, true);
      digitalWrite(54, true);
      digitalWrite(55, true);
    }
    }
}

