#include <stdio.h>
using namespace std;
main () {
	int x, jumlah[256];
	int harga[256];
	int total[256];
	char nama[100][100];
	int q;
	q=0;
	printf("       Program Mesin Kasir \n");
	do {//perulangan do-while
		printf("=======================================\n");
		printf("Selamat datang di toko kami\n");
		printf("=======================================\n");
		printf("PILIHAN MENU ANDA :\n");
		printf("1. Masukkan barang belanjaan \n");
		printf("2. Keluar\n");
		printf("Masukkan pilihan menu = ");
		scanf("%d",&x);
		printf("\n");
		if (x==1){
			printf("Masukkan nama barang          = ");
		    scanf("%s",&nama[q]);
	    	printf("Masukkan Kuantitas            = ");
		    scanf("%d",&jumlah[q]);
		    printf("Masukkan harga satuan barang  = ");
		    scanf("%d",&harga[q]);
	        total[q]=jumlah[q]*harga[q];
	        printf("Total biaya belanja %s = %d\n\n",nama[q],total[q]);
	        q++;
	        printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
		}
		else if (x==2){
			FILE *kasir;
			int tot=0;
			printf("  Anda telah keluar dan struk Kasir berhasil dibuat...\n");
			printf("  Terimakasih dan silahkan belanja di toko kami lagi...\n");
			kasir=fopen("Struk.txt","w"); 
			fprintf(kasir,"           Struk Belanjaan Anda     \n");
			fprintf(kasir,"-----------------------------------------\n");
			fprintf(kasir,"Nama barang       | Psc | Harga | Total\n");
			for (int j=0;j<q;j++){
				fprintf(kasir, "%-20.20s %-4d %-6d %-15d\n", nama[j],jumlah[j],harga[j],total[j]);
				tot+=total[j];
	        }                                                    
	        fprintf(kasir,"-----------------------------------------\n");
	        fprintf(kasir,"Total belanjaan anda = %d\n",tot);
	        fclose (kasir);
		}
	}
	while (x==1);
}
