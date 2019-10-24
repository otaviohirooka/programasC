/*  
    URI Online Judge - 1022 - "TDA Racionais"
    Autor.....: Otávio Luiz de Biaggi Hirooka
    Observação: operações com números racionais
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {int num, den;} TRac;

TRac SomaRac(TRac, TRac);
TRac SubtraiRac(TRac, TRac);
TRac MultRac(TRac, TRac);
TRac DivRac(TRac, TRac);
TRac SimplRac(TRac);
int mdc(int, int);

int main()
{	TRac X, Y, R, b;
	int cont, N;
	char operacao, a, c;

	scanf("%d", &N);
	for(cont = 0; cont < N; cont++)
	{	
		scanf("%d %c %d %c %d %c %d", &X.num, &a, &X.den, &operacao, &Y.num, &c, &Y.den);
		
		if (operacao == '+')
			R = SomaRac(X, Y);	
		else if (operacao == '-')
			R = SubtraiRac(X, Y);		
			 else if (operacao == '*')
				R = MultRac(X, Y);		
				 else
					R = DivRac(X, Y);	
						
		b = R;
		b = SimplRac(b);
		printf("%d/%d = %d/%d\n", R.num, R.den,
									b.num, b.den);
	}
	return 0;
}

TRac SomaRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac SubtraiRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac MultRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac DivRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den;
	res.den = n2.num * n1.den;
	
	return res;
}

TRac SimplRac(TRac n1)
{	TRac res;

	res.num = n1.num / mdc(n1.num, n1.den);
	res.den = n1.den / mdc(n1.num, n1.den);
	
	return res;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}
