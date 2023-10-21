char buz = 10;
char* musica[] = {"La","Re","Fa","Sol","La","Re", "Fa", "Sol", "Mi", "Pausa", "Sol", "Do", "Fa", "Mi",
"Sol", "Do", "Fa", "Mi", "Re", "Fim"}; //Definindo as notas e pausas da música de Game of Thrones.
int duracao[] = {700, 500, 300, 250, 250, 300, 200, 200, 700, 200, 500, 500, 200, 200, 200, 500,
200, 200, 500};
char* starwars[] ={"La", "Pausa", "La", "Pausa", "La", "Pausa", "Fa", "Do", "La", "Pausa", "Fa", "Do",
"La", "Pausa", "Mi", "Pausa", "Mi", "Pausa", "Mi", "Pausa", "Fa", "Do", "Sol", "Pausa", "Fa", "Do",
"La", "Pausa", "La", "Pausa", "La", "Pausa", "La", "Pausa", "La", "Pausa", "Sol#", "Pausa", "Sol",
"Fa#", "Fa", "Fa#", "Fim"}; //Definindo as notas e pausas da música de Starwars - Marcha Imperial.
int dur[] = {400, 100, 400, 100, 400, 100, 300, 200, 300, 100, 300, 200, 300, 200, 400, 100, 400,
100, 400, 100, 300, 300, 200, 100 , 300, 300, 200, 200, 400, 50, 400, 50, 400, 50, 400, 50, 300,
50, 300, 200, 200, 200};
void setup(){
pinMode(buz, OUTPUT);
tocar(musica,duracao);
//tocar(starwars,dur);
}
void loop(){
// Não utilizado
}
void tocar(char* mus[], int tempo[]){
int tom = 0;
for(int i = 0; mus[i]!="Fim";i++){
if(mus[i] == "Do") tom = 262;
if(mus[i] == "Re") tom = 294;
if(mus[i] == "Mi") tom = 330;
if(mus[i] == "Fa") tom = 349;
if(mus[i] == "Sol") tom = 392;
if(mus[i] == "La") tom = 440;
if(mus[i] == "Si") tom = 494;
if(mus[i] == "Do#") tom = 528;
if(mus[i] == "Re#") tom = 622;
if(mus[i] == "Fa#") tom = 370;
if(mus[i] == "Sol#") tom = 415;
if(mus[i] == "La#") tom = 466;
74
if(mus[i] == "Pausa") tom = 0;
tone(buz, tom, tempo[i]);
delay(tempo[i]);
}
}