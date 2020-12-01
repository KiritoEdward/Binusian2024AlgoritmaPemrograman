#include <stdio.h> 
#include<string.h>

long long int hitung_subsequent(char s[],char k[],long long int size1,long long int size2) { 
  //Jika kedua string kosong ATAU String kedua kosong, Return 1
    if((size1==0 && size2==0) || size2==0) {
        return 1; 
  	}

  //Jika String pertama kosong, Return 0
    if(size1==0){
        return 0; 
  	}

  //Jika karakter terakhir sama, maka tinggal loop sebanyak string yang tersisa
  //Jadi, karakter terkahir di String pertama diabaikan, karena kan udh sama.
    if (s[size1-1]==k[size2-1]){ 
        return hitung_subsequent(s,k,size1-1,size2-1)+hitung_subsequent(s,k,size1-1,size2); 
  	}else{
    //Tapi, jika beda nih, maka abaikan karakter terakhir di String pertama dan Loop sebanyak String yang tersisa
        return hitung_subsequent(s,k,size1-1,size2); 
  	}
} 

int main() { 
  long long int counter,kasus=0;
  scanf("%lld",&counter);
  
  while(counter>0){
      	kasus=kasus+1;
      	
        char s[20];
        char k[8]; 
  		scanf("%s",s);
  		scanf("%s",k);
  		
  		long long int sizeS=strlen(s);
  		long long int sizeK=strlen(k);
  		long long int hitung= hitung_subsequent(s,k,sizeS,sizeK);
  		
        printf ("Case #%lld: %lld\n",kasus,hitung);
  		counter=counter-1;
  }
	return 0;
} 
