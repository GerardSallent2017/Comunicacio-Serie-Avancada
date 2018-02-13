/**************************************************************************************
**                                                                                   **
**                                         TITOL                                     **
**                                      Nom Projecte                                 **
**                                                                                   **
**       Nom:Gerard Sallent Martínez                      Data:                      **
**************************************************************************************/
//**********************************INCLUDE********************************************
//**********************************VARIABLES******************************************


//************************************SETUP********************************************
void setup(){
  Serial.begin(9600);
    }
    
     



//************************************LOOP*********************************************

void loop() {while (Serial.available() > 0) {  // if there's any serial available, read it
    
    NIF = Serial.parseInt();
    

   Serial.print ( "NIF = ");
   Serial.println(NIF);
   R =  NIF % 23 ;
   
  switch (R)
    
{
  case 0:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("T");
     break;
     case 1:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("R");
     break;
     case 2:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("W");
     break;
     case 3:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("A");
     break;
     case 4:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("G");
     break;
     case 5:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("M");
     break;
     case 6:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("Y");
     break;
     case 7:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("F");
     break;
     case 8:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("P");
     break;
       case 9:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("D");
     break;
       case 10:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("X");
     break;
       case 11:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("B");
     break;
     case 12:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("N");
     break;
     case 13:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("J");
     break;
     case 14:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("Z");
     break;
     case 15:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("S");
     break;
     case 16:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("Q");
     break;
     case 17:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("V");
     break;
     case 18:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("H");
     break;
     case 19:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("L");
     break;
     case 20:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("C");
     break;
     case 21:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("K");
     break;
     case 22:
     Serial.print(NIF);
     Serial.print(" - ");
     Serial.print("E");
     break;
 
  default:
     Serial.print("NIF inexistent");
}

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence

    }
 
}

      
}
  



//**********************************FUNCIONS*******************************************
