#include <stdio.h> 
#include <string.h> 

 

char film1[] = "aslankral"; 

char film2[] = "çizmelikedi"; 

char film3[] = "örümcekadam"; 

char film4[] = "yüzüklerinefendisi"; 

char film5[] = "maskelibeşler"; 

char sarki1[] = "sarıçizmetmehmetağa"; 

char sarki2[] = "içerimbenbuakşam"; 

char sarki3[] = "evlimutluçocuklu"; 

char sarki4[] = "tamirciçırağı"; 

char sarki5[] = "yürek"; 

int kalanhak = 3; 

char tahmin1[50]; 

char tahmin2[50]; 

char tahmin3[50]; 

char tahmin4[50]; 

char tahmin5[50]; 

int oyunsecme; 

 

int main() { 

    printf("-------------Emojilerle Bulma Oyununu-------------\n"); 

    printf("*****Emojilerle Film Bulma Oyununu Oynamak İcin 1'e Basınız*****\n"); 

    printf("*****Emojilerle Sarkı Bulma Oyununu Oynamak İcin 2'ye Basınız*****\n"); 

    printf("*****Oyundan Çıkmak İçin 0'a Basınız*****\n"); 

 

    scanf("%d", &oyunsecme); 

    if (oyunsecme == 1) { 

        printf("-------------Film Tahmin etme-------------\n"); 

        printf("---Level 1---\n"); 

        printf("\U0001F981 \U0001F451\n"); 

        while (1) { 

            scanf("%s", tahmin1); 

            if (strcmp(tahmin1, film1) == 0) { 

                printf("Tahmininiz Doğru\n"); 

                printf("---Level 2---\n"); 

                printf("\U0001F462 \U0001F63A\n"); 

                while (1) { 

                    scanf("%s", tahmin2); 

                    if (strcmp(tahmin2, film2) == 0) { 

                        printf("Tahmininiz Doğru\n"); 

                        printf("---Level 3---\n"); 

                        printf("\U0001F577 \U0001F468\n"); 

                        while (1) { 

                            scanf("%s", tahmin3); 

                            if (strcmp(tahmin3, film3) == 0) { 

                                printf("Tahmininiz doğru\n"); 

                                printf("---Level 4---\n"); 

                                printf("\U0001F48D \U0001F934\n"); 

                                while (1) { 

                                    scanf("%s", tahmin4); 

                                    if (strcmp(tahmin4, film4) == 0){ 

                                        printf("Tahmininiz doğru\n"); 

                                        printf("---Level 5---\n"); 

                                        printf("\U0001F637 \U0001F590\n"); 

                                        while (1) { 

                                            scanf("%s", tahmin5); 

                                            if (strcmp(tahmin5, film5) == 0) { 

                                                printf("Kazandınız!\n"); 

                                                return 0; 

                                            } 

                                            else if (kalanhak == 0){ 

                                                printf("Kaybettiniz\n"); 

                                                return 0; 

                                            } 

                                            else { 

                                                printf("Tahmininiz yanlış"); 

                                                kalanhak -= 1; 

                                                printf("%d\n", kalanhak); 

                                            } 

                                        } 

                                    } 

                                    else if (kalanhak == 0) { 

                                        printf("Kaybettiniz\n"); 

                                        return 0; 

                                    } 

                                    else { 

                                        printf("Tahmininiz yanlış"); 

                                        kalanhak -= 1; 

                                        printf("%d\n", kalanhak); 

                                    } 

                                } 

                            } 

                            else if (kalanhak == 0) { 

                                printf("Kaybettiniz\n"); 

                                return 0; 

                            } 

                            else { 

                                printf("Tahmininiz yanlış"); 

                                kalanhak -= 1; 

                                printf("%d\n", kalanhak); 

                            } 

                        } 

                    } 

                    else if (kalanhak == 0) { 

                        printf("Kaybettiniz\n"); 

                        return 0; 

                    } 

                    else { 

                        printf("Tahmininiz yanlış"); 

                        kalanhak -= 1; 

                        printf("%d\n", kalanhak); 

                    } 

                } 

            } else if (kalanhak == 0) { 

                printf("Kaybettiiniz\n"); 

                return 0; 

            } else { 

                printf("Tahmininiz yanlış\n"); 

                kalanhak -= 1; 

                printf("%d\n", kalanhak); 

            } 

        } 

    } 

    else if (oyunsecme == 2) { 

        printf("-------------Şarkı Tahmin etme-------------\n"); 

        printf("---Level 1---\n"); 

        printf("\U0001F462 \U0001F7E8 \U0001F9D4\n"); 

        while (1) { 

            scanf("%s", tahmin1); 

            if (strcmp(tahmin1, sarki1) == 0) { 

                printf("Tahmininiz doğru\n"); 

                printf("---Level 2---\n"); 

                printf("\U0001F942  \U0001F303  \U0001F37B\n"); 

                while (1) { 

                    scanf("%s", tahmin2); 

                    if (strcmp(tahmin2, sarki2) == 0) { 

                        printf("Tahmininiz doğru\n"); 

                        printf("---Level 3---\n"); 

                        printf("\U0001F470  \U0001F600  \U0001F476\n"); 

                        while (1) { 

                            scanf("%s", tahmin3); 

                            if (strcmp(tahmin3, sarki3) == 0) { 

                                printf("Tahmininiz doğru\n"); 

                                printf("---Level 4---\n"); 

                                printf("\U0001F527 \U0001F476\n"); 

                                while(1) { 

                                    scanf("%s", tahmin4); 

                                    if (strcmp(tahmin4, sarki4)== 0) { 

                                        printf("Tahmininiz doğru!\n"); 

                                        printf("---Level 5---\n"); 

                                        printf("\U0001F493\n"); 

                                        while(1) { 

                                            scanf("%s", tahmin5); 

                                            if (strcmp(tahmin5, sarki5) == 0) { 

                                                printf("Tahmininiz doğru\n"); 

                                                printf("Kazandınız!\n"); 

                                                return 0; 

                                            } 

                                            else if (kalanhak == 0) { 

                                                printf("Kaybettiniz\n"); 

                                                return 0; 

                                            } 

                                            else { 

                                                printf("Tahmininiz yanlış\n"); 

                                                kalanhak -= 1; 

                                                printf("%d\n", kalanhak); 

                                            } 

                                        } 

                                    } 

                                    else if (kalanhak == 0) { 

                                        printf("Kaybettiniz\n"); 

                                        return 0; 

                                    } 

                                    else { 

                                        printf("Tahmininiz yanlış\n"); 

                                        kalanhak -= 1; 

                                        printf("%d\n", kalanhak); 

                                    } 

                                } 

                            } 

                            else if (kalanhak == 0) { 

                                printf("Kaybettiniz!\n"); 

                                return 0; 

                            } 

                            else { 

                                printf("Tahmininiz yanlış\n"); 

                                kalanhak -= 1; 

                                printf("%d\n", kalanhak); 

                            } 

                        } 

                    } 

                    else if (kalanhak == 0) { 

                        printf("Kaybettiniz\n"); 

                        return 0; 

                    } 

                    else { 

                        printf("Tahmininiz yanlış\n"); 

                        kalanhak -= 1; 

                        printf("%d\n", kalanhak); 

                    } 

                } 

            } 

            else if (kalanhak == 0) { 

                printf("Kaybettiniz\n"); 

                return 0; 

            } 

            else { 

                printf("Tahmininiz yanlış\n"); 

                kalanhak -= 1; 

                printf("%d\n", kalanhak); 

            } 

        } 

    } 

    return 0; 

} 

