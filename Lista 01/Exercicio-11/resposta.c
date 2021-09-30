/**
 * 11. Leia uma velocidade em m/s (metros por segundo) e apresente-a
 *     convertida em km/h (quilômetros por hora). A fórmula de conversão
 *     é: K = M * 3.6, sendo K a velocidade em km/h e M em m/s.
 **/

 #include <stdio.h>
 #include <stdlib.h>
 
 int main()
 {
    float km, ms;

    printf("Entre com a velocidade em m/s: "); scanf("%f", &ms);
    km = ms * 3.6;
    printf("%.2f m/s equivale a %.2f Km/h.\n", ms, km); 
     
    return EXIT_SUCCESS;
 }