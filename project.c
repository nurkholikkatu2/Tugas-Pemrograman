#include <stdio.h>
#include <stdlib.h>

//fungsi mencari nilai rata-rata

int rataRata(int arry[], int size) {
	int average, jumlah = 0;

	for (int i = 0; i < size; i++)
	{
		jumlah = jumlah + arry[i];
	}
	average = jumlah / size;
	return average;
}

//fungsi mencari nilai tertinggi

int tertinggi(int arry[], int size) {
	int heighest = 0;

	for (int i = 0; i < size; i++)
	{
		if (arry[i] > heighest)
		{
			heighest = arry[i];
		}
	}
	return heighest;
}

//fungsi mencari nilai terendah

int terendah(int arry[], int size) {
	int nilaiTerendah;

	for (int i = 0; i < size; ++i)
	{
		if (arry[i] < nilaiTerendah)
		{
			nilaiTerendah = arry[i];
		}
	}
	return nilaiTerendah;
}

//fungsi mencari nilai tengah
int tengah(int arry[], int size)
{
	int tmp, nilaiTengah;
	for (int i = 0; i < size; ++i)
	{
		for (int j= 0; j< size; ++j)
		{
			if (arry[j+1] < arry[j])
			{
				tmp = arry[j];
				arry[j] = arry[j+1];
				arry[j+1] = tmp;
			}
		}
	}
	if (size % 2 == 0)
	{
		nilaiTengah = (arry[size]+arry[(size/2)+1])/2;
	}
	if (size != 0)
	{
		nilaiTengah = arry[size/2];
	}
	return nilaiTengah;
}
//fungsi Utama

int main()
{
	int size;
	printf("Masukkan jumlah nilai yang ingin di masukkan: ");
	scanf("%d", &size);

	int arry[size];
	for (int i = 0; i < size; i++)
	{
		printf("Masukkan angka-%d: ", i+1);
		scanf("%d", &arry[i]);
	}
	printf("====== Output ======\n");
	printf("Nilai Rata-Rata = %d\n", rataRata(arry, size));
	printf("Nilai Tertinggi = %d\n", tertinggi(arry, size));
	printf("Nilai Terendah  = %d\n", terendah(arry, size));
	printf("Nilai Tengah    = %d\n", tengah(arry, size));

	return 0;
}
