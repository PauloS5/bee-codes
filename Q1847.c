#include <stdio.h>

int main() {
	int t1, t2, t3;
	scanf("%d%d%d", &t1, &t2, &t3);
	
	if (t1 > t2 && t2 <= t3){
		printf(":)\n");
		return 0;
	}
	if (t1 < t2 && t2 >= t3){
		printf(":(\n");
		return 0;
	}
	if (t1 < t2 && t2 < t3 && t3-t2 < t2-t1){
		printf(":(\n");
		return 0;
	}
	if (t1 < t2 && t2 < t3 && t3-t2 >= t2-t1){
		printf(":)\n");
		return 0;
	}
	if (t1 > t2 && t2 > t3 && t2-t3 < t1-t2){
		printf(":)\n");
		return 0;
 	}
 	if (t1 > t2 && t2 > t3 && t2-t3 >= t1-t2){
		printf(":(\n");
		return 0;
	}
	if (t1 == t2 && t2 < t3){
		printf(":)\n");
		return 0;
	}
	printf(":(\n");
	
	return 0;
}