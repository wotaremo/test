#include<stdio.h>
int func(int *);
double func2(double *);
int main(int argc, char *argv[]) {
	int x,ansi,yi[100],numi=0;
	double ansd,yd[100],numd=0;
	int *zi;
	double *zd;
	printf("�w�����鏤�i�̐���%d", argc - 1);
	printf("\n���i�̒l�i���Ŕ����Ȃ�0��ō��Ȃ�1����͂��Ă���������");
	scanf("%d", &x);
	if (x == 1) {
		for (int i = 0; i < argc - 1; i++) {
			printf("\n���i�̒l�i����͂��Ă���������");
			scanf("%d", &yi[i]);
			zi=&yi[i];
			ansi=func(zi);
			printf("\n%s�̒l�i��%d�~", argv[i + 1], ansi);
			numi+=ansi;
			printf("\n���݂̍��v���z%d", numi);
		}
		printf("\n���v���z��%d", numi);
		return 0;
	}
	else if (x == 0) {
		for (int i = 0; i < argc - 1; i++) {
			printf("���i�̒l�i����͂��Ă���������");
			scanf("%lf", &yd[i]);
			zd= &yd[i];
			ansd=func2(zd);
			printf("\n%s�̒l�i��%.0f�~", argv[i + 1], ansd);
			numd+= ansd;
			printf("\n���݂̍��v���z%.0f", numd);
		}
		printf("\n���v���z��%.0f", numd);
		return 0;
	}
	return 0;
}

int func(int *z) {
	int ans=0;
	ans = (*z);
	return ans;
}

double func2(double *z) {
	double ans=0.0;
	ans = (*z)*1.08;
	return ans;
}