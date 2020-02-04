#include <stdio.h>

int main(){
	//ファイル構造体へのポインタを宣言
	FILE *fp;
	char str[256];

	//ファイルを書き込みモードで開く
	fp = fopen("test.dat","w");
    
	//ファイルオープンに失敗した場合
	if(fp==NULL){
		//失敗と表示し終了
		printf("ファイルオープン失敗\n");
		return -1;
	}
	
	//足した
fprintf(fp,"ファイルに文字を書き込みます。文字列「a」、数字「b」");
	
	//ファイルを閉じる
	fclose(fp);
	return 0;
}
