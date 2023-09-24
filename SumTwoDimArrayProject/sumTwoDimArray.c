/* 9주차 실습 8번 : sumTwoDimArray.c
   작성일 : 2022. 04. 30
   작성자 : 윤서은
   프로그램 설명 : 5 X 5 행렬의 각 행과 열의 합을 계산 저장하는 함수를 작성하는 프로그램
*/

#include <stdio.h>

int main(int agrc, char* argv[]) {

	int arr[5][5] = { {1,2,3,4,5},
					  {1,2,3,4,5},
					  {1,2,3,4,5},
		              {1,2,3,4,5},
		              {1,2,3,4,5}
					};
	int i, j;	
	//합계를 위한 변수
	int rowSum[5] = { 0 };
	int colSum[5] = { 0 };



	//2차원 출력
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d", arr[i][j]);
			rowSum[i] += arr[i][j]; // 행 합계
			colSum[j] += arr[i][j]; // 열 합계

		}
		printf("%3d \n", rowSum[i]); //행 출력
	}
	for (i = 0; i < 5; i++) {
		printf("%3d", colSum[i]); //열 출력
	}

	return 0;
}