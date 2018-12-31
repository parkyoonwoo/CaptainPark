//1st version
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char *s1 = "hello";
	char *s2 = (char*)malloc(sizeof(char)*10);
	char *s3 = (char*)malloc(sizeof(char)*10);
	char *s4 = "";
	//삭제용 주석
//asdfasdfadsfafdadsf
	//sdsdfasdfasdf
	
	s2 = s1;
	strcpy(s3, s1);
	//strcpy(s4, s1); s4의 1바이트 공간에 복사할 공간도 없고 읽기 전용이라 쓰기가 막혀있음, 실제 문자열을 '복붙'
	s4 = s1; // 메모리 주소를 복사하는 개념이라 오류 발생 안됨

	puts(s2);
	puts(s3);
	puts(s4);
	//free(s2); 왜 세그멘테이션 오류 생기는지
	free(s3);
}

