#include <stdio.h>
#include <string>
#include <random>
#include <math.h>

int main()
{
	int a;
	int b;

	/*
	//第1問
	//1011 + 0101
	a = 0b1011;
	b = 0b0101;
	a = a + b;
	printf("%d\n",a);

	//110100 + 11011
	a = 0b110100;
	b = 0b11011;
	a = a + b;
	printf("%d\n",a);

	//1011 + 110011
	a = 0b1011;
	b = 0b110011;
	a = a + b;
	printf("%d\n", a);
	*/
	/*
	//第2問
	//FF + FF
	a = 0xff;
	b = 0xff;
	a = a + b;
	printf("%d\n", a);

	//ed + 10
	a = 0xed;
	b = 0x10;
	a = a + b;
	printf("%d\n", a);

	//563 + cd
	a = 0x563;
	b = 0xcd;
	a = a + b;
	printf("%d\n", a);
	*/

	//第3問
	//cahr,int,float,doubleのサイズをそれぞれ答えよ
	//charは1バイト,intは4バイト
	//floatは4バイト,doubleは8バイト

	//第4問
	//int judge = true;
	//if (judge)
	//{
	//	�@
	//}
	//else
	//{
	//	�A
	//}
	//�@と�Aどちらが処理されるか答えよ。
	//judgeが正なので�@が処理される

	//第5問
	//for( int i = 0; i < 100; i = i + 3)
	//{
	//	�@
	//}
	//�@の処理が何回実行されるか答えよ。
	//A.34回目の処理終わりに102になるから34回実行される

	//第6問
	//int i = 0;
	//while (i < 100)
	//{
	//	i = i + 5;
	//	�@
	//}
	//�@の処理は何回実行されるか答えよ。
	//A.20回目の処理終わりに100になり100未満じゃなくなるため20回

	//第7問
	//int array[4][5];
	//上記配列のサイズはいくつか答えよ。
	//A.1つ4ビットの入れ物が4*5で20個あるからサイズは80バイト
	/*
	//第８問
	int array[5][20]
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < a; ++j)
			{
				array[i][j] = i * a + j;
			}
		}
	//�@には何という数字が入るか答えよ。
	//20
	*/

	//第9問
	//�@ testFunc( int a)
	//{
	//	return;
	//}
	//�@にはint, float, voidのどれが正しいか答えよ。
	//
	//intが正しい

}

//10,11は分かりませんでした…
// 
//第10問
//２点間の距離を求める関数を作成してください。
// 
//第１１問
//カード構造体を作成してください。
//このカードはトランプのカードのことです。
//情報として、なんのカードなのかを持っていてください。
//スペードの7である、ハートの13であるなど。
//この構造体には現在の自分の情報を設定する処理と、
//現在の自分の情報を開示する処理を作ってください。


//トランプの山札の構造体を作成してください。
//その際カードには先ほど作った構造体を使用してください。
//以下の条件を満たしておくこと。
//トランプの枚数は53枚(1 〜 13 * 4 + ジョーカー1)
//Card card[53];

//シャッフル機能を実装する。
//card[53]にランダムにカード情報を付与してください。
//card[0]がクラブの6、card[1]がハートの5といったように。
//その際同じカードは存在しないようにしてください。
