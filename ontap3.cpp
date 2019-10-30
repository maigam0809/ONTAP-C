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
	float x;
	do{
		printf ("Nhap diem : ");
		scanf ("%f",&x);
		
	}while(x<50||x>100);
}
int chucNang3(){
	int a;
	do{
		printf ("Nhap so nguyen duong : ");
		scanf ("%d",&a);
	}while(a<=0);
	
	int kichCo[a];
    for(int i=0;i<a;i++){
    	printf ("Kich thuoc laptop o vi tri thu %d la: \n",i);
    	scanf ("%d",&kichCo[i]);
    }
    int bienDem;
    for(int j=0; j<a; j++ ){
        if(kichCo[j]%2==0)
    	printf ("\n Kich co laptop chia het cho 2 la: %d",kichCo[j]);
    	bienDem=true;
    	break;
        }
    
	if (bienDem!=true){
	    return 0;
	} 
    
    printf ("=================================================\n");
	printf ("Khi da sap xep mang co thu tu :\n");
//	 sap xep mang  bang cach hoan vi
    
	for (int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if (kichCo[i]>kichCo[j]){
				int hoanVi;
				hoanVi=kichCo[i];
				kichCo[i]=kichCo[j];
				kichCo[j]=hoanVi;
			}
		}
	}
//  xuat mang
    for(int i=0;i<a;i++){
    
    	printf ("Vi tri thu mang[%d]la:%d\n",i,kichCo[i]);
    }
	 
    return a;
}
int main(){
	int cn;
	int tt;
	printf ("\n+------------------------------MENU-----------------------------+\n");
	printf ("\n\t\t1.Thong tin ca nhan.\n");
	printf ("\n\t\t2.Xep loai diem.\n");
	printf ("\n\t\t3.Thong tin Laptop.\n");
	printf ("\n\t\t0.Thoat.\n");
	printf ("\n+---------------------------------------------------------------+\n");
	
	do{  
	printf ("Nhap chuc nang ban muon : ");
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


