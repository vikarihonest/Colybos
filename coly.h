/*
Color Picker Vikarihonest
use : color(namecolor,string);
namecolor : grey,red,yellow,green,blue,pink,dodgerblue
*/

typedef struct NEW{
	int o;
}cc;
void color(char* cl,char* oo){
cc c,o;
char m[99];
char *col[20];
col[1]="grey";
col[2]="red";
col[3]="green";
col[4]="yellow";
col[5]="blue";
col[6]="pink";
col[7]="dodgerblue";
c.o=30-1;
sprintf(m,"%s","\077[");
for(size_t i=1; i<8;i++){
o.o=c.o+i;
if(col[i]==cl){
	sprintf(m,"\033[%d;1m%s",o.o,oo);
	printf("%s",m);
}
}
}
