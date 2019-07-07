#include<stdio.h>
int func(int *);
double func2(double *);
int main(int argc, char *argv[]) {
	int x,ansi,yi[100],numi=0;
	double ansd,yd[100],numd=0;
	int *zi;
	double *zd;
	printf("購入する商品の数＞%d", argc - 1);
	printf("\n商品の値段が税抜きなら0を税込なら1を入力してください＞");
	scanf("%d", &x);
	if (x == 1) {
		for (int i = 0; i < argc - 1; i++) {
			printf("\n商品の値段を入力してください＞");
			scanf("%d", &yi[i]);
			zi=&yi[i];
			ansi=func(zi);
			printf("\n%sの値段は%d円", argv[i + 1], ansi);
			numi+=ansi;
			printf("\n現在の合計金額%d", numi);
		}
		printf("\n合計金額は%d", numi);
		return 0;
	}
	else if (x == 0) {
		for (int i = 0; i < argc - 1; i++) {
			printf("商品の値段を入力してください＞");
			scanf("%lf", &yd[i]);
			zd= &yd[i];
			ansd=func2(zd);
			printf("\n%sの値段は%.0f円", argv[i + 1], ansd);
			numd+= ansd;
			printf("\n現在の合計金額%.0f", numd);
		}
		printf("\n合計金額は%.0f", numd);
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