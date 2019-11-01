#include <stdio.h>

int i, x, y, z, q;
   char str[100];

int josh(){
		printf("Insert 1st key(1-3): ");
   		scanf("%d", &y);
   		printf("Insert 2nd key(1-3): ");
   		scanf("%d", &z);
   		//1
		if(y==1 && z==1){
      		for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 1;
		} 
		else if(y==1 && z==2){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 2;
		}
		else if(y==1 && z==3){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3;
		}
		//2
		else if(y==2 && z==1){
      		for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 4;
		} 
		else if(y==2 && z==2){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 5;
		}
		else if(y==2 && z==3){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 6;
		}
		//3
		else if(y==3 && z==1){
      		for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 7;
		} 
		else if(y==3 && z==2){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 8;
		}
		else if(y==3 && z==3){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 9;
		}
      printf("\nHasil enkripsi: %s\n", str);
}

int eko(){
		printf("Insert 1st key(1-3):\n");
   		scanf("%d", &y);
   		printf("Insert 2nd key(1-3):\n");
   		scanf("%d", &z);
   		//1
		if(y==1 && z==1){
      		for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 1;
		} 
		else if(y==1 && z==2){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 2;
		}
		else if(y==1 && z==3){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3;
		}
		//2
		else if(y==2 && z==1){
      		for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 4;
		} 
		else if(y==2 && z==2){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 5;
		}
		else if(y==2 && z==3){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 6;
		}
		//3
		else if(y==3 && z==1){
      		for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 7;
		} 
		else if(y==3 && z==2){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 8;
		}
		else if(y==3 && z==3){
			for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 9;
		}
      printf("\nHasil dekripsi: %s\n", str);
}


int main()
{
   printf("==========================================================\n");
   printf("Program ini berfungsi untuk meng-enkripsi dan men-dekripsi\n");
   printf("==========================================================\n");
   printf("\nMasukkan string: ");
   gets(str);

   printf("\nPilih opsi di bawah ini:\n");
   printf("1 = Enkripsi\n");
   printf("2 = Dekripsi\n\n");
   scanf("%d", &x);
   //using switch case statements
   switch(x)
   {
   case 1:
   		josh();
   		break;
   case 2:
  		eko();
  		break;
   default:
      printf("\nInput yang anda masukkan invalid\n");
   }
   printf("\n(This program was made by Yudhistira Indyka & Fadhilah Rheza\nfor final assignment)\n\n");
   printf("Type 'eko' to exit this program ");
   scanf("%d", &q);
   return 0;
}


