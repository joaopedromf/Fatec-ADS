#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>



 void espelharH (int ** original, int linha, int coluna)
 {
     int l, c,aux;

     for(l=0; l<linha; l++)
     {   
         for(c=0; c<coluna/2; c++)
         { 
            aux = original [l][c];
            original [l][c]= original[l][coluna-1-c];
            original[l][coluna-1-c]= aux;
            
         }
         
     }
 }

void espelharV (int ** original, int linha, int coluna)
 {
     int l, c,aux;

     for(l=0; l<linha/2; l++)
     {   
         for(c=0; c<coluna; c++)
         { 
            aux = original [l][c];
            original [l][c]= original[linha-1-l][c];
            original[linha-1-l][c]= aux;
            
         }
         
     }
 }

int ** girar (int** original, int * plinhas, int * pcolunas)
{	int l, c;
	//criando a matriz nova dinamicamente
	int **nova, i, L = *pcolunas, C = *plinhas;
	nova = (int **) malloc(L * sizeof(int *));
	for(i=0; i<L; i++)
		nova[i] = (int *) malloc(C * sizeof(int));
	
	//fazer a transposição
	for(l=0; l<L; l++)
		for(c=0; c<C; c++)
			nova[l][c] = original[c][l];
	
	//espelhar horizontalmente
	espelharH (nova, L, C);
	*plinhas = L;
	*pcolunas = C;
	return nova;
}

int ** girar2 (int** original, int * plinhas, int * pcolunas)
{	int l, c;
	//criando a matriz nova dinamicamente
	int **nova, i, L = *pcolunas, C = *plinhas;
	nova = (int **) malloc(L * sizeof(int *));
	for(i=0; i<L; i++)
		nova[i] = (int *) malloc(C * sizeof(int));
	
	//fazer a transposição
	for(l=0; l<L; l++)
		for(c=0; c<C; c++)
			nova[l][c] = original[C - 1 - c][L - l - 1];
	
	//espelhar horizontalmente
	espelharH (nova, L, C);
	*plinhas = L;
	*pcolunas = C;
	return nova;
}

void moldura (int** original, int linha, int coluna)
      { int l, c;
      for (l=0; l<linha; l++)
      {for (c=0; c<coluna; c++)
        { if (l<4 ||c < 4 || l > (linha-4)|| c > (coluna-4) )
        { original [l][c] = (int)(original[l][c] * 0.5);
        }
        }
      }
      }

void aumentarBrilho(int** original, int linhas, int colunas, int maxValor)
{	int l, c;
	for(l=0; l<linhas; l++)
	{	for(c=0; c<colunas; c++)
		{	original[l][c] = (int)(original[l][c] * 1.2);
			if(original[l][c] > maxValor)
				original[l][c] = maxValor;
		}
	}
}
void diminuirBrilho(int** original, int linhas, int colunas)
{	int l, c;
	for(l=0; l<linhas; l++)
	{	for(c=0; c<colunas; c++)
		{	original[l][c] = (int)(original[l][c] * 0.8);
		}
	}
}

void aumentarContraste (int** original, int linha, int coluna, int maxValor)
{
	//para aumentar o contraste
	double pixel;
    int l, c;
	for(l=0; l<linha; l++)
	{	for(c=0; c<coluna; c++)
	    {
	        pixel = original[l][c] / (float)maxValor;
	        original[l][c] = (255 / (1.0 + exp(-(10.0 * pixel - 5.0))));

	    }
	 }
}

void diminuirContraste (int** original, int linha, int coluna, int maxValor)
{//para aumentar o contraste
	double pixel;
    int l, c;
	for(l=0; l<linha; l++)
	{	for(c=0; c<coluna; c++)
	    {
	       original[l][c] = maxValor/ (1.0 + exp(-(2.0 * original[l][c]/(float)maxValor - 1.0)));
	    }
	 }
}



int** borrar(int** original, int linhas, int colunas, int tB)
{	int l, c, soma, med;
	int **nova, i;
	nova = (int **) malloc(linhas * sizeof(int *));
	for(i=0; i<linhas; i++)
		nova[i] = (int *) malloc(colunas * sizeof(int));
	
	
	for(l=0; l<linhas; l++){
		for(c=0; c<colunas; c++){
	
		    soma = original[l][c];
	        med = 1;
            	if (l-tB > 0)
	            {
	                soma = soma + original[l-tB][c];
	                med = med + 1;
	            }
	            if (l+tB < linhas) 
	            {  
		            soma = soma + original[l+tB][c];	
		            med = med + 1;
	            }
	            if (c-tB > 0) 
	            {
	                soma = soma + original[l][c-tB];
	                med = med + 1;
	            }
	            if (c+tB < colunas) 
	            {
	                soma = soma + original[l][c+tB];
	                med = med + 1;
	            }
	        nova[l][c] = soma/med;
		}
	}
	        return nova;
}
int** lerImagem(char * nomeArquivo, int *pLinhas, int *pColunas, int *pMaxValor)
{	FILE *fp;
	fp = fopen(nomeArquivo,"r");
	/* Arquivo ASCII, para leitura */
	if(!fp)
	{	printf( "\nErro na abertura do arquivo\n\n");
		exit(-1);
	}
	//leia tipo do arquivo
	char buffer[1001];
	fgets (buffer, 1000, fp); //Primeira linha
	if(strstr(buffer, "P2") == NULL) // o tipo de arquivo eh diferente de P2?
	{	printf( "\nErro no tipo do arquivo\n\n");
		exit(-2);
	}
	//leia comentario
	fgets (buffer, 1000, fp);
	
	//leia dados da imagem
	fscanf(fp, "%d%d%d", pColunas, pLinhas, pMaxValor);
	
	//criando a matriz
	int **mat, i;
	mat = (int **) malloc(*pLinhas * sizeof(int *));
	for(i=0; i< *pLinhas; i++)
		mat[i] = (int *) malloc(*pColunas * sizeof(int));
	int l, c;
	for(l=0; l<*pLinhas; l++)
	{	for(c=0; c<*pColunas; c++)
			fscanf(fp, "%d", &mat[l][c]);
	}
	fclose(fp);
	return mat;
}
void escreverImagem(char * nomeArquivo, int ** mat, int linhas, int colunas, int maxValor)
{	FILE *fp;
	fp = fopen(nomeArquivo,"w");
	// Arquivo ASCII, para leitura
	if(!fp)
	{	printf( "\nErro na abertura do arquivo\n\n");
		exit(-1);
	}
	//escreva tipo do arquivo
	fprintf (fp, "P2\n");
	//escreva comentario
	fprintf (fp, "#Figura modificada...\n");
	//colunas, linhas
	fprintf(fp, "%d %d\n", colunas, linhas);
	//maxValor
	fprintf(fp, "%d\n", maxValor);
	int l, c;
	for(l=0; l<linhas; l++)
	{	for(c=0; c<colunas; c++)
		{	fprintf(fp, "%d ", mat[l][c]);
		}
		fprintf(fp, "\n");
	}
	fclose(fp);
}
int main(int argc, char * argv[])
{	char opcao[10]="-1";
	int linhas=0, colunas=0, maxValor=0, **mat=NULL;
	int tamanhoBorrao = 8;
	char nomeArquivo[100]="";
	char nomeArquivoLeitura[100]="";
	char nomeArquivoEscrita[100]="";
	while(opcao[0] != '0')
	{	printf("\n\nMini-photoshop\n\n");
		printf("1) Ler imagem\n");	
		printf("2) Gravar imagem\n");	
		printf("3) Aumentar o brilho\n");	
		printf("4) Diminuir o brilho\n");	
		printf("5) Aumentar contraste\n");
		printf("6) Diminuir contraste\n");
		printf("7) Desfocar\n");
		printf("8) Fazer moldura\n");
		printf("9) Espelhar horizontalmente\n");
		printf("a) Espelhar verticalmente\n");
		printf("b) Girar pra esquerda\n");
		printf("c) Girar pra direita\n");
		printf("0) Sair\n");
		printf("\nEntre a opcao desejada: ");	
		fgets(opcao, 10, stdin);
		switch(opcao[0])
		{	case '1':
				printf("\n\nEntre com o nome da imagem (sem extensao): ");
				fgets(nomeArquivo, 100, stdin);
				nomeArquivo[strlen(nomeArquivo)-1]='\0';
				strcpy (nomeArquivoLeitura, nomeArquivo);
				strcat (nomeArquivoLeitura, ".pgm");
				mat = lerImagem(nomeArquivoLeitura, &linhas, &colunas, &maxValor);
				break;
			case '2':
				strcpy (nomeArquivoEscrita, nomeArquivo);	
				strcat (nomeArquivoEscrita, "_editada.pgm");
				printf("\n\nA imagem sera salva como %s\n", nomeArquivoEscrita);
				escreverImagem(nomeArquivoEscrita, mat, linhas, colunas, maxValor);
				break;
			case '3':
				aumentarBrilho(mat, linhas, colunas, maxValor);
				break;
			case '4':
				diminuirBrilho(mat, linhas, colunas);
				break;
			case '5':
				aumentarContraste(mat, linhas, colunas, maxValor);
				break;
			case '6':
				diminuirContraste(mat, linhas, colunas, maxValor);
				break;
			case '7':
				mat = borrar(mat, linhas, colunas, tamanhoBorrao);
				break;
			case '8':
				moldura(mat, linhas, colunas);
				break;
			case '9':
			    espelharH(mat, linhas, colunas);
			    break;
			case'a':
			    espelharV(mat,linhas,colunas);
			    break;
			case'b':
			    mat=girar(mat,&linhas,&colunas);
			    break;
			case'c':
			   mat = girar2(mat,&linhas, &colunas);
		      break;
		    
		}
	}
	return 0;
}