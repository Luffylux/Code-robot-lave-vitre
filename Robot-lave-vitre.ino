#define STEPPER_PIN_1 9         // déclaration des pin pour l'arduino et les branchements
#define STEPPER_PIN_2 10
#define STEPPER_PIN_3 11
#define STEPPER_PIN_4 12
float n = 512;                  // nombre de pas = 512 --> 90°
float a = 0.0;                  
void setup() {
  Serial.begin(9600);           // Permet de noter dans le moniteur série
  pinMode(STEPPER_PIN_1, OUTPUT); 
  pinMode(STEPPER_PIN_2, OUTPUT);
  pinMode(STEPPER_PIN_3, OUTPUT);
  pinMode(STEPPER_PIN_4, OUTPUT); 
}
void loop() {
    if (n > 0){                 // Si le nombre pas est positif
        Point();                // appelle la fonction Point
        Serial.println(a);      // Exprime (a) dans le moniteur série
        return (a);             // Permet de renvoyer la valeur de a et d'arrêter la fonction
  }
    else if (n > 0){            // Si le nombre pas est négatif
        PointNegatif();
        Serial.println(a);
        return (a);
  }
    else{                       // S'il le nombre est aucun des 2 condition ci-dessus
        return(a);
    }

}
void Point(){           // Fonction qui permet de faire tourner dans le sens horaire
    if (a == n){        // Vérifie à chaque fois si a = n ou non (Cela permet d'arrêter la fonction si on arrive à atteindre n)
      return(a);        // Permet de renvoyer la valeur de a et d'arrêter la fonction
    }
      Pas1();           // appelle la fonction Pas1()
      delay(10);        // délai de 10 milisecondes
      a = a + 0.5;      // Ajoute 0.5 à a, cela permet de compter le nombre de pas
      if (a == n){      
      return (a);
      }
      Pas1n5();
      delay(10);
      a = a + 0.5;
      if (a == n){
      return (a);
      }
      Pas2();
      delay(10);
      a = a + 0;5;
      if (a == n){
      return (a);
      }
      Pas2n5();
      delay(10);
      a = a + 0.5;
      if (a == n){
      return (a);
      }
      Pas3();
      delay(10);
      a = a + 0.5;
      if (a == n){
      return (a);
      }
      Pas3n5();
      delay(10);
      a = a + 0.5;
      if (a == n){
      return (a);
      }
      Pas4();
      delay(10);
      a = a + 0.5;
      if (a == n){
      return (a);
      }
      Pas0n5();
      delay(10);
      a = a + 0.5;
      if (a == n){
      return (a);
      }
}


void Pas1(){                            // Fonction Pas1() qui permet d'actionner la bobine 1 et donc d'avancer 1 pas
  digitalWrite(STEPPER_PIN_1, HIGH);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  }
void Pas1n5(){
  digitalWrite(STEPPER_PIN_1, HIGH);
  digitalWrite(STEPPER_PIN_2, HIGH);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  }
void Pas2(){
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, HIGH);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  }
void Pas2n5(){
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, HIGH);
  digitalWrite(STEPPER_PIN_3, HIGH);
  digitalWrite(STEPPER_PIN_4, LOW);
  }
  
void Pas3(){
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, HIGH);
  digitalWrite(STEPPER_PIN_4, LOW);
  }
void Pas3n5(){
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, HIGH);
  digitalWrite(STEPPER_PIN_4, HIGH);
  }
void Pas4(){
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, HIGH);
  }
void Pas0n5(){
  digitalWrite(STEPPER_PIN_1, HIGH);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, HIGH);
  }

void PointNegatif(){                 // Fonction qui permet de faire tourner dans le sens anti-horaire
    if (a == n){
      return(a);
    }
      Pas0n5();                      // On inverse le sens des pas pour pouvoir suivre le sens anti-horaire
      delay(10);
      a = a - 0.5;
      if (a == n){
      return (a);
      }
      Pas4();
      delay(10);
      a = a - 0.5;
      if (a == n){
      return (a);
      }
      Pas3n5();
      delay(10);
      a = a - 0;5;
      if (a == n){
      return (a);
      }
      Pas3();
      delay(10);
      a = a - 0.5;
      if (a == n){
      return (a);
      }
      Pas2n5();
      delay(10);
      a = a - 0.5;
      if (a == n){
      return (a);
      }
      Pas2();
      delay(10);
      a = a - 0.5;
      if (a == n){
      return (a);
      }
      Pas1n5();
      delay(10);
      a = a - 0.5;
      if (a == n){
      return (a);
      }
      Pas1();
      delay(10);
      a = a - 0.5;
      if (a == n){
      return (a);
      }
}
