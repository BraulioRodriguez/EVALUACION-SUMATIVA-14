#include <stdio.h>
#include <math.h>

/* Los Polinomios de Hermite son un ejemplo de polinomios ortogonales (conjunto de polinomios que forman 
una base ortogonal de cierto espacio de Hilbert) que encuentran su ámbito de aplicación en la mecánica cuántica, 
sobre todo en el estudio del oscilador armónico unidimensional. Usted ha sido contratado por una empresa para 
elaborar una aplicación de línea de comandos en C que, a través de la recursividad, resuelva un problema de 
Polinomios de Hermite. A continuación, los detalles relevantes de esta ecuación diferencial: */
 
double h0(double x){
    return 1;
}
 
double h1(double x){
    return 2*x;
}

double hn(double x,int n){
    if(n == 0){
        return h0(x);
    }
    else if(n == 1){
        return h1(x);
    }
    else{
        return 2*x*hn(x,n-1)-2*(n-1)*hn(x,n-2);     
    } 
}
int main(){
    int c;
    double x; 

    printf("Ingresa el valor de x: ");
    scanf("%f", &x);
    for(c=-x; c<=x; x=x+0.1){
        printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", x,hn(x,0),hn(x,1),hn(x,2),hn(x,3),hn(x,4));
    
    }
    return 0;
}