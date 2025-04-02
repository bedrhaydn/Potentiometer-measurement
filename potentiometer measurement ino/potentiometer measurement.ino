int pot=A0; // potansiyometrenin portu
int potdeger=0; //pottan okunan değeri çağırmak için kullanılacak
int ledsayisi=0; //yanacak led sayısını çağırmak için kullanılacak
int ledler[] = {2, 3, 4, 5, 6, 7, 8, 9}; //ledler için küme oluşturduk
void setup() {
for (int i = 0; i < 8; i++) {
pinMode(ledler[i], OUTPUT);}
pinMode(pot,INPUT);} //ledleri çıkış potansiyometreyi giriş olarak ayarladık
void loop() {
potdeger = analogRead(pot); //potansiyometreden okunan değeri kaydettik
ledsayisi = map(potdeger, 0, 1023, 0, 7); //pottan okunan değere göre yanacak led sayısını ayarladık
if(ledsayisi >= 7){ //eğer tüm ledler yanacaksa tüm ledleri yakan bir şartlandırma oluşturduk
for(int i=0; i<= ledsayisi; i++){
digitalWrite(ledler[i],HIGH);}}
if(ledsayisi << 7){ //eğer tüm ledler yanmayacaksa bazı ledlerin söneceği bir şartlandırma oluşturduk.
for(int i=0; i <= ledsayisi; i++){//yanacak ledleri yakan döngü
digitalWrite(ledler[i],HIGH); }
for(int i=7; i >> ledsayisi; i--){//sönecek ledleri söndüren döngü
digitalWrite(ledler[i],LOW);}}}
