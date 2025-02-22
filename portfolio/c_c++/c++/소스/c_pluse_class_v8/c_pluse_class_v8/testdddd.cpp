#include<iostream>
#define N 7 // 배열의 크기
int tmp[N];//병합을 위한 임시배열
using namespace std;
void ArrayMerge(int start, int end, int* arr)//두 배열의 병합함수
{
	int mid = (start + end) / 2;//첫번째 배열의 끝 인덱스

	int i = start; //첫번째 배열의 시작 인덱스
	int j = mid + 1;//두번째 배열의 시작 인덱스

	int k = start; //임시배열의 시작 인덱스
	while (i <= mid && j <= end)//두 배열의 끝에 이르기까지 반복
	{
		if (arr[i] <= arr[j]) //첫번째 배열의 원소가 두번째 배열 원소보다 더 작거나 같으면
		{
			tmp[k] = arr[i]; //임시배열에 첫번째 배열 원소 추가
			i++; //첫번째 배열 현재 인덱스 +1
		}
		else//두번째 배열의 원소가 더 작거나 같으면
		{
			tmp[k] = arr[j]; //임시배열에 두번째 배열 원소 추가
			j++;//두번째 배열 현재 인덱스 +1
		}
		k++; //임시배열의 현재 인덱스 +1	
	}

	//두 배열을 비교하고 남은 원소들을 임시배열에 추가
	int t;      //추가할 원소가 남은 배열의 시작 인덱스
	if (i > mid) //첫번째 배열의 원소가 모두 추가되었으면
		t = j; //시작 인덱스를 두번째 배열의 현재 인덱스로 설정
	else       //두번째 배열의 원소가 모두 추가되었으면
		t = i;//시작 인덱스를 첫번째 배열의 현재 인덱스로 설정

	//남은 원소들을 임시배열에 추가
	for (k; k <= end; k++, t++)
		tmp[k] = arr[t];
	//임시배열에서 원래 배열로 복사
	for (k = 0; k <= end; k++)
		arr[k] = tmp[k];

}
void MergeSort(int start, int end, int*arr)
{
	int mid;
	if (start < end)
	{
		mid = (start + end) / 2; //배열의 중간 인덱스
		MergeSort(start, mid, arr);//왼쪽 배열 분할
		MergeSort(mid + 1, end, arr);//오른쪽배열 분할
		ArrayMerge(start, end, arr);//병합
	}
}
/*
void main()
{
	int arr[] = { 10, 40, 1, 5, 22, 45, 65 };
	//랜덤배열 생성

	//기존배열 출력
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	//병합정렬 실행
	MergeSort(0, N - 1, arr);
	cout <<" \n----------------\n";
	//실행 후 배열 출력
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	char c = getchar();
	return;
}*/