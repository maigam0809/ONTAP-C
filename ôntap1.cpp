#include <stdio.h>
#include <math.h>
#include <string.h>
void chucNang1(){
	struct SinhVien{
		char tenSV[20];
		char maSV[10];
		float diemSV;
		
	};struct SinhVien mangSV[10];
	
	int n;
	do{
		printf ("So sinh vien them vao: ");
		scanf ("%d",&n);
	}while(n<0);
	
	for (int i=0;i<n;i++){
		printf ("Nhap ho va ten : ");fflush(stdin);gets(mangSV[i].tenSV);
		printf ("Nhap ma sinh vien :");fflush(stdin);gets(mangSV[i].maSV);
		printf ("Nhap diem:");scanf ("%f",&mangSV[i].diemSV);	
	}
	
	for (int j=0;j<n;j++){
		printf ("--------------------------------------\n");
		printf ("Thong tin Ho va ten :%s \n",mangSV[j].tenSV);
		printf ("Thong tin MSV :%s \n",mangSV[j].maSV);
		printf ("Diem :%.2f \n",mangSV[j].diemSV);
	}
}
void chucNang2(){
	int a;
	do{
		printf ("Nhap so nguyen duong : ");
		scanf ("%d",&a);
	}while(a<=0);
	
	int tong=0;
	for(int k=0;k<=a;k++){
		tong+=k;
		
	}
	printf ("Tong la: %d\n",tong);
	if (a % 2 == 0){
		printf ("%d La so chan.",a);
	}else{
		printf ("%d La so le.",a);
	}
}
int chucNang3(){
	int n;
	do{
    printf ("+--------------------Thong tin Ti Vi cua hang----------------------+\n");
    printf ("Moi nhap so luong ti vi : "); scanf ("%d",&n);
    }while(n<=0);
    
    int kichCo[n];
    for(int i=0;i<n;i++){
    	printf ("Kich co cua ti vi thu  %d la: \n",i);
    	scanf ("%d",&kichCo[i]);
    }
    
    int max;
    max=kichCo[0];
    for(int j=0; j<n; j++ ){
    	if (kichCo[j]>max){
    		max=kichCo[j];
        }
    }
	printf ("\nKich co ti vi lon nhat la: %d",max);  
	
	int bienDem=0;
	float tb=0;
	int tong=0;
	for(int k=0;k<n;k++){
		tong+=kichCo[k];
		bienDem++;
	}
	tb= (float) tong/bienDem;
	printf ("\nTrung binh cong la:%.2f",tb);
}    
	  
 
int main(){
	int cn;
	int tt;
	printf ("\n+------------------------------MENU-----------------------------+\n");
	printf ("\n\t\t1.Thong tin ca nhan.\n");
	printf ("\n\t\t2.Tinh tong tu 1 den N.\n");
	printf ("\n\t\t3.Thong tin Ti vi.\n");
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


