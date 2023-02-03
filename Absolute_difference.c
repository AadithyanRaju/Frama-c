/*@
	requires -2147483648 < a-b < 2147483647; 
	ensures (a<b ==> b-a)||(a>=b ==> a-b);
*/
int distance(int a, int b){
	if (a<b) return b-a;
	else return a-b;
}