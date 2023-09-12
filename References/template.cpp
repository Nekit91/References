#include<iostream>


template<typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b } \n";
}
void my_swap(int num1, int num2) {

	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void p_swap(int* pn1, int* pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}
void r_swap(int& var1, int& var2) {
	int tmp = var1;
	var1 = var2;
	var2 = tmp;

}
int& rmax(int arr[], const int length) {
	int max_index = 0;
	for (int i = 1; i < length; i++)
		max_index = arr[i] >arr[max_index] ? i : max_index; 
	//if (arr[i]>max[max_index])
	//max_index=i;
	return arr[max_index];
}

template <typename T>
void ref_dbl(T& var1,T& var2);

int* greater_arr(int arr1[], const int length1, int arr2[], const int length2, bool& first);




int main() {
	setlocale(LC_ALL, "RU");
	int n,m;
	//������� 46 ������
	
	//������ ������������ � �������� � ��������!
	
	//������ �� ����������
	/*
	n = 7;
	int& refn=n;
	std::cout <<"n = "<< n << std::endl;
	std::cout << "refn = " << refn << std::endl;
	n = 15;
	std::cout << "refn = " << refn << std::endl;
	refn = 42;
	std::cout << "n = " << n << std::endl;
	*/

	//������ ��� ��������� �������
	/*
	n = 7; m = 15;
	std::cout << "n = " << n << ";m = " << m << std::endl;
	//my_swap(n,m)//�� ��������
	//p_swap(&n,&m)//�������� �� ��������!
	r_swap(n, m);//��������� �������!
	std::cout << "n = " << n << ";m = " << m << std::endl;
	*/


	//������ ��� ���������� ������ �������
	/*
	const int size = 5;
	int arr[size]{ 6,7,2,7,5 };
	print_arr(arr, size);
	std::cout << "�������� = " << rmax(arr, size) << std::endl;
	rmax(arr, size) = -1;
	print_arr(arr, size);
	*/

	//������ 1.������� ��� ��������� 
	/*
	std::cout << "������ 1 \n������� ��� ����� -> ";
	std::cin >> n >> m;
	ref_dbl(n, m);
	std::cout << "n = " << n << std::endl;
	std::cout << "m = " << m << std::endl;
	*/
	
	//������ 2 . ��������� �� ������
	/**/
	std::cout << "������2 \n������ �: ";
	const int sizeA = 5, sizeB = 6;
	int A[sizeA]{ 1,2,3,4,5 };
	int B[sizeB]{ 10,20,30,40,50,60 };
	print_arr(A, sizeA);
	std::cout << "������ �:";
	print_arr(B, sizeB);
	std::cout << "����������:";
	bool f;
	int* pointer = greater_arr(A, sizeA, B, sizeB, f);
	print_arr(pointer,f ? sizeA : sizeB);








	return 0;
}

template <typename T>
void ref_dbl(T& var1, T& var2) {
	if (var1 > var2) {
		var1 *= var1;//var1=pow(var1,2)
		var2 *= var2;//var1=pow(var2,2)
		return;
	}
	var1 = 0;
	var2 = 0;

}

int*greater_arr(int arr1[], const int length1, int arr2[], const int length2, bool& first) {
	return (first = length1 > length2) ? arr1 : arr2;
	//if (length1 > length2) //2 ������� ��������� 
		//return arr1;
}