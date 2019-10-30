#include <stdio.h>
#include <math.h>
#include <string.h>
void chucNang1(){
	struct DiaChi{
	char datNuoc[20];
	char thanhPho[20];	
	char duong[25];
	int soNha;
	
	}; struct DiaChi mang[20];
	
	int n;
	do{
		printf ("Nhap so dia chi muon them : ");
		scanf ("%d",&n);
	}while(n<=0);
	for (int i=0;i<n;i++){
		printf ("Nhap dat nuoc: ");fflush(stdin);gets(mang[i].datNuoc);
		printf ("Nhap thanh pho:");fflush(stdin);gets(mang[i].thanhPho);
		printf ("Nhap duong : ");fflush(stdin);gets(mang[i].duong);
		printf ("Nhap so nha:");scanf ("%d",&mang[i].soNha);	
	}
	
	for (int j=0;j<n;j++){
		printf ("-----------------THONG TIN---------------------\n");
		printf ("Dat nuoc:%s \n",mang[j].datNuoc);
		printf ("Thanh pho :%s \n",mang[j].thanhPho);
		printf ("Duong  :%s \n",mang[j].duong);
		printf ("So nha :%d \n",mang[j].soNha);
	}
}
void chucNang2(){
	int x;
	do{
		printf ("\n+----------------------------------------------+\n");
		printf ("\nNhap tuoi cua nhan vien:");
		scanf ("%d",&x);
	}while(x<=0);
	
	if (x<18){
		printf ("\nTuoi tre.");	
	}else if (18<=x&&x<=55){
		printf ("\nTuoi lao dong.");
	}else{
		printf ("\n Tuoi gia.");
	}
}
int chucNang3(){
	
	int n;
	do{
    printf ("+--------------------Thong tin vat nuoi ------------------------+\n");
    printf ("Moi nhap so luong vat nuoi : "); scanf ("%d",&n);
    }while(n<=0);
    
    int canNang[n];
    for(int i=0;i<n;i++){
    	printf ("So Vat nuoi o vi tri thu  %d la: \n",i);
    	scanf ("%d",&canNang[i]);
    }
    
    int bienDem;
    for(int j=0; j<n; j++ ){
    	if (canNang[j]>30){
    	printf ("\nVat nuoi lon hon 30 kg la: %d",canNang[j]);
    	bienDem=true;
        }
    }
	if (bienDem!=true){
	    return 0;
	} 
    return n;	
}


int main(){
    int cn;
    printf ("\n+------------------------MENU----------------------+\n");
    printf ("\n\t\t1.Thong tin ca nhan.");
    printf ("\n\t\t2.Xep loai nhan vien.");
    printf ("\n\t\t3.Thong tin vat nuoi.");
    printf ("\n\t\t0.Thoat.");
    printf ("\n+--------------------------------------------------+\n");
     
    do{
    	printf ("Moi chon: ");
    	scanf ("%d",&cn);
		switch (cn){
    	case 1:
    		chucNang1();
    	        break;
		case 2:
			chucNang2();
			break;
		case 3:
		    chucNang3();
			break;
		case 0:
		    printf ("Thoat.\n");
			break;
		}
		int tt;
					
		printf("\nBan co muon tiep tuc chuong trinh khong?");
		printf("\n1. Co\n2. Khong\n");
		scanf("%d", &tt);
		printf ("\n+-------------------------------------------------------------+\n");
			    
			if(tt == 1){
			cn = -1;
		    }
		    	
	}while(cn<0||cn>3);
	
	
   return 0;
}

