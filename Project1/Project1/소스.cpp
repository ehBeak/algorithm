#include<iostream>

using namespace std;

int main() {

	char str_tmp[1024];

	FILE* fp = NULL;

	fp = fopen("data.csv", "r");

	if (fp != NULL) {
		while (!feof(fp)) {
			fgets(str_tmp, 1024, fp);
			printf("%s", str_tmp);
		}
	}
	fclose(fp);

	

	return 0;
}