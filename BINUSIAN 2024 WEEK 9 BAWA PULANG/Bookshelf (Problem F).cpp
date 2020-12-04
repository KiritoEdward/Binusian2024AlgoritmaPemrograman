#include <stdio.h>
#include <string.h>

struct book{
    long long int id;
    char title[6], author[6];
    int owner;
};
   

int main(){
    long long int t;
    scanf("%d", &t);
    long long int n = t;
    while(t-- > 0){
        long long int jumlahBukuLili, jumlahBukuBibi;
        scanf("%lld", &jumlahBukuLili);
        struct book koleksiLili[jumlahBukuLili]; 
        for( long long int i = 0; i < jumlahBukuLili; i++){
            scanf("%lld %s %s", &koleksiLili[i].id, koleksiLili[i].title, koleksiLili[i].author);
            koleksiLili[i].owner = 0;
        }

        scanf("%lld", &jumlahBukuBibi);
        struct book koleksiBibi[jumlahBukuBibi]; 
        for( long long int i = 0; i < jumlahBukuBibi; i++){
            scanf("%lld %s %s", &koleksiBibi[i].id, koleksiBibi[i].title, koleksiBibi[i].author);
            koleksiBibi[i].owner = 1;
        }
    
        struct book rakBuku[jumlahBukuLili + jumlahBukuBibi];
        long long int i = 0, j = 0, k = 0;
        while(i < jumlahBukuLili && j < jumlahBukuBibi){
            if(koleksiLili[i].id < koleksiBibi[j].id)
                rakBuku[k++] = koleksiLili[i++];
            else if(koleksiLili[i].id > koleksiBibi[j].id)
                rakBuku[k++] = koleksiBibi[j++];
            else if(koleksiLili[i].id == koleksiBibi[j].id){
                int flag = strcmp(koleksiLili[i].title, koleksiBibi[j].title);
                if(flag > 0)
                    rakBuku[k++] = koleksiBibi[j++];
                else
                    rakBuku[k++] = koleksiLili[i++];
            }
        }

        while(i < jumlahBukuLili)
            rakBuku[k++] = koleksiLili[i++];
        while(j < jumlahBukuBibi)
            rakBuku[k++] = koleksiBibi[j++];

        printf("Case #%lld:\n", n-t);
        for(long long int i = 0; i < jumlahBukuLili + jumlahBukuBibi; i++){
            if(rakBuku[i].owner == 1)
                printf("%lld\n", i+1);
        }
    }
    return 0;
}
