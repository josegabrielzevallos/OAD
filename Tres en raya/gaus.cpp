#include <stdio.h>
#include <iostream>
using namespace std;
void PideDatos(int *Dim, float (*Sist)[102]);
void EscribeDatos(int Dim, float (*Sist)[102]);

void ResuelveGauss(int Dim, float (*Sist)[102]);


int main(void)
{
	int C,Dimension;
	float Sistema[101][102];
	PideDatos(&Dimension,Sistema);
	//if(((Sistema[1][1]==Sistema[2][1])|| (Sistema[1][1]==Sistema[3][1]))&&((Sistema[1][2]==Sistema[2][2])|| (Sistema[1][2]==Sistema[3][2]))&&((Sistema[1][3]==Sistema[2][3])|| (Sistema[1][3]==Sistema[3][3]))&&((Sistema[1][4]!=Sistema[2][4])|| (Sistema[1][4]!=Sistema[3][4]))){
		//cout<<"Error"<<endl;}
	//else{
		cout<<"El SISTEMA introducido es el siguiente:"<<endl;
		EscribeDatos(Dimension,Sistema);
		ResuelveGauss(Dimension,Sistema);
		cout<<"Las soluciones son:"<<endl;
		for(C=1;C<=Dimension;C++) printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
		
		scanf("");//}
	return(0);
}


void PideDatos(int *Dim,float (*Sist)[102])
{
	int A,B;
	
	cout<< "Introduce el numero de incognitas:"<<endl;
	scanf("%d",&*Dim);
	
	printf("\n\n MATRIZ A:\n");
	for(A=1;A<=*Dim;A++) for(B=1;B<=*Dim;B++){
		printf("\n Termino A(%d,%d):",A,B);
		scanf("%f",&Sist[A][B]);}
	printf("\n\n\n VECTOR B:\n");
	for(A=1;A<=*Dim;A++){
		printf("\n Termino B(%d):",A);
		scanf("%f",&Sist[A][*Dim+1]);
	}
	
}

void EscribeDatos(int Dim, float (*Sist)[102])
{
	int A,B;
	for(A=1;A<=Dim;A++){
		for(B=1;B<=(Dim+1);B++){
			printf("%7.2f",Sist[A][B]);
			if(B==Dim) printf("   |");}
		printf("\n");
	}
	
}

void ResuelveGauss(int Dim, float (*Sist)[102])
{
	//if(((Sist[1][1]==Sist[2][1])|| (Sist[1][1]==Sist[3][1]))&&((Sist[1][2]==Sist[2][2])|| (Sist[1][2]==Sist[3][2]))&&((Sist[1][3]==Sist[2][3])|| (Sist[1][3]==Sist[3][3]))&&((Sist[1][4]!=Sist[2][4])|| (Sist[1][4]!=Sist[3][4]))){
	//cout<<"error";}
	//else{
	
	
	int NoCero,Col,C1,C2,A;
	float Pivote,V1;
	
	for(Col=1;Col<=Dim;Col++){
		NoCero=0;
		A=Col;
		while(NoCero==0){
			if((*(*(Sist+A)+Col)>0.0000001)||((*(*(Sist+A)+Col)<-0.0000001))){
				NoCero=1;}
			else A++;}
		Pivote=*(*(Sist+A)+Col);
		for(C1=1;C1<=(Dim+1);C1++){
			V1=*(*(Sist+A)+C1);
			*(*(Sist+A)+C1)=*(*(Sist+Col)+C1);
			Sist[Col][C1]=V1/Pivote;}
		for(C2=Col+1;C2<=Dim;C2++){
			V1=*(*(Sist+C2)+Col);
			for(C1=Col;C1<=(Dim+1);C1++){
				*(*(Sist+C2)+C1)=*(*(Sist+C2)+C1)-V1*Sist[Col][C1];}
		}
	}
	
	for(Col=Dim;Col>=1;Col--) 
		for(C1=(Col-1);C1>=1;C1--){
		*(*(Sist+C1)+Dim+1)=*(*(Sist+C1)+Dim+1)-*(*(Sist+C1)+Col)*Sist[Col][Dim+1];
		*(*(Sist+C1)+Col)=0;
	}
}
//}
