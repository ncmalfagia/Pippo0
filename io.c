#include <stdio.h>
int raddoppia(int primo ){
    int risultato;
    risultato = primo*2;
    return risultato;
    
    
    }
int main(){
    int a=5;
    printf("primo , %d",a);
    a=raddoppia(a);
    printf("secondo, %d",a);
    
  system("pause");
  
}
