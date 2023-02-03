/*@
	requires -2147483648 < x+y < 2147483647; 
	ensures \result == x+y;
*/
int add(int x, int y){
	return x+y;
}