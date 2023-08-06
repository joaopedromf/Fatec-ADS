#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

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
{
	//para aumentar o contraste
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
{	int l, c;
	int **nova, i;
	nova = (int **) malloc(linhas * sizeof(int *));
	for(i=0; i<linhas; i++)
		nova[i] = (int *) malloc(colunas * sizeof(int));
	
	for(l=tB; l<linhas-tB; l++)
		for(c=tB; c<colunas-tB; c++)
			nova[l][c] = (original[l][c] + original[l+tB][c]
				+ original[l-tB][c] + original[l][c+tB]
				+ original[l][c-tB])/5;
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
{	char opcao[10]="0";
	int linhas=0, colunas=0, maxValor=0, **mat=NULL;
	int tamanhoBorrao = 4;
	char nomeArquivo[100]="";
	char nomeArquivoLeitura[100]="";
	char nomeArquivoEscrita[100]="";
	while(opcao[0] != '13')
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
		printf("10) Espelhar verticalmente\n");
		printf("11) Girar pra esquerda\n");
		printf("12) Girar pra direita\n");
		printf("13) Sair\n");
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
				//moldura(mat, linhas, colunas, maxValor);
				break;
		}
	}
	return 0;
}