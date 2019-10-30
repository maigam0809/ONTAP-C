#include <stdio.h>
#include <math.h>
#include <string.h>
void inThongTin(){
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
	for(int k=0;k<a;k++){
		tong+=k;
		
	}
	printf ("Tong la: %d",tong);
	if (a % 2 == 0){
		printf ("%d La so chan.",a);
	}else{
		printf ("%d La so le.",a);
	}
}
	
int main(){
	int cn;
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
    		inThongTin();
    	        break;
		case 2:
			
			break;
		case 3:
		     
			break;
		case 0:
		    printf ("Thoat.\n");
			break;
			
	int tt;		
			printf("\nBan co muon tiep tuc chuong trinh khong?");
			printf("\n1. Co\n2. Khong\n");
			scanf("%d", &tt);
			    
			    if(tt == 1){
			    	cn = -1;
		    }
	    }
	}while(cn<0||cn>3);		
				
   return 0;
}


