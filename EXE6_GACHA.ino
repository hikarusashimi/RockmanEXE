#include <SwitchControlLibrary.h>
void setup() {
  // put your setup code here, to run once:
    // 最初の数回の入力はswitchが認識しない場合があるので、無駄打ちをしておく
    for (int i=0; i<11; i++){
      PressA();
    }
    for (int i=0; i<10; i++){
      PressB();
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  bool init = false;
  setup();
  // ネット君の家のPC前からスタート
  /*SwitchControlLibrary().PressButtonR();
  delay(80);
  SwitchControlLibrary().ReleaseButtonR();
  delay(8000);
  // ネット君HP
  SwitchControlLibrary().MoveHat(1);
  SwitchControlLibrary().PressButtonB();
  delay(80);
  SwitchControlLibrary().MoveHat(8);
  SwitchControlLibrary().ReleaseButtonB();
  delay(2000);
  // セントラルエリア1
  SwitchControlLibrary().MoveHat(1);
  SwitchControlLibrary().PressButtonB();
  delay(150);
  SwitchControlLibrary().MoveHat(8);
  SwitchControlLibrary().ReleaseButtonB();
  SwitchControlLibrary().MoveHat(1);
  delay(3000);
  SwitchControlLibrary().MoveHat(3);
  delay(1700);
  SwitchControlLibrary().MoveHat(1);
  SwitchControlLibrary().PressButtonB();
  delay(1200);
  SwitchControlLibrary().ReleaseButtonB();
  delay(50);
  SwitchControlLibrary().MoveHat(7);
  SwitchControlLibrary().PressButtonB();
  delay(1200);
  SwitchControlLibrary().ReleaseButtonB();
  delay(50);
  SwitchControlLibrary().MoveHat(1);
  SwitchControlLibrary().PressButtonB();
  delay(1200);
  SwitchControlLibrary().ReleaseButtonB();
  delay(50);
  SwitchControlLibrary().MoveHat(3);
  delay(650);
  SwitchControlLibrary().MoveHat(1);
  delay(500);
  SwitchControlLibrary().MoveHat(7);
  delay(500);
  SwitchControlLibrary().MoveHat(0);
  SwitchControlLibrary().PressButtonB();
  delay(50);
  SwitchControlLibrary().ReleaseButtonB();
  SwitchControlLibrary().MoveHat(1);
  delay(2300);
  SwitchControlLibrary().MoveHat(8);
  // ショップ店員に話しかける
  for(int i=0; i<6; i++){
    PressA();
    PressA();
    PressA();
  }
  for(int i=0; i<95; i++){
    PressA();
    PressA();
    PressA();
  }
  PressB();
  PressB();
  PressB();
  delay(2000);
  SwitchControlLibrary().PressButtonR();
  delay(100);
  SwitchControlLibrary().ReleaseButtonR();
  delay(200);
  PressA();
  SwitchControlLibrary().MoveHat(6);
  delay(50);
  SwitchControlLibrary().MoveHat(8);
  PressA();
  PressA();
  PressA();
  PressA();
  delay(500);
  */
  // ネット君の部屋
  SwitchControlLibrary().PressButtonB();
  SwitchControlLibrary().MoveHat(3);
  delay(1200);
  SwitchControlLibrary().MoveHat(5);
  delay(500);
  SwitchControlLibrary().MoveHat(3);
  delay(1800);
  SwitchControlLibrary().MoveHat(5);
  delay(400);
  SwitchControlLibrary().MoveHat(3);
  delay(500);
  SwitchControlLibrary().MoveHat(5);
  delay(600);
  SwitchControlLibrary().MoveHat(7);
  delay(1700);
  SwitchControlLibrary().MoveHat(1);
  delay(1500);
  SwitchControlLibrary().MoveHat(8);
  // 行先選択
  delay(500);
  SwitchControlLibrary().MoveHat(2);
  delay(50);
  SwitchControlLibrary().MoveHat(8);
  for(int i=0; i<16; i++){
    PressA();
  }
  delay(11000);
  //グリーンエリア
  SwitchControlLibrary().MoveHat(3);
  delay(1300);
  SwitchControlLibrary().MoveHat(8);
  SwitchControlLibrary().MoveHat(1);
  delay(500);
  SwitchControlLibrary().MoveHat(8);
  SwitchControlLibrary().MoveHat(3);
  delay(300);
  SwitchControlLibrary().MoveHat(8);
  SwitchControlLibrary().MoveHat(1);
  delay(1100);
  SwitchControlLibrary().MoveHat(8);
  SwitchControlLibrary().ReleaseButtonB();
  // ガチャ前
  /*PressA();
  PressA();
  PressA();
  delay(200);
  for(int i=0; i< 10; i++) {
    for(int j=0; j<21; j++) {
      PressARapid();
    }
    PressA();
  }*/
  PressB();
  delay(200);
  SwitchControlLibrary().PressButtonB();
  SwitchControlLibrary().MoveHat(5);
  delay(1500);
  SwitchControlLibrary().MoveHat(7);
  delay(300);
  SwitchControlLibrary().MoveHat(5);
  delay(350);
  SwitchControlLibrary().MoveHat(7);
  delay(1100);
  SwitchControlLibrary().MoveHat(8);
  SwitchControlLibrary().ReleaseButtonB();
  for(int i=0; i<16; i++){
    PressA();
  }
  delay(11000);
  // セントラル帰宅
  SwitchControlLibrary().PressButtonB();
  SwitchControlLibrary().MoveHat(5);
  delay(1500);
  SwitchControlLibrary().MoveHat(3); 
  delay(1200);
  SwitchControlLibrary().MoveHat(1);
  delay(820);
  SwitchControlLibrary().MoveHat(7);
  delay(500);
  SwitchControlLibrary().MoveHat(1);
  delay(1800);
  SwitchControlLibrary().MoveHat(7);
  delay(400);
  SwitchControlLibrary().MoveHat(1);
  delay(400);
  SwitchControlLibrary().MoveHat(7);
  delay(500);
  SwitchControlLibrary().MoveHat(1);
  delay(1200);
  SwitchControlLibrary().ReleaseButtonB();
}

void PressA(){
  SwitchControlLibrary().PressButtonA();
  delay(150);
  SwitchControlLibrary().ReleaseButtonA();
  delay(150);
}
void PressARapid() {
  SwitchControlLibrary().PressButtonA();
  delay(100);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100); 
}
void PressB(){
  SwitchControlLibrary().PressButtonB();
  delay(100);
  SwitchControlLibrary().ReleaseButtonB();
  delay(100);
}
