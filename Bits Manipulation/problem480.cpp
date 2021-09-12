//return a/b;
//This code complexity is O(log(dividend))
int division(int dividend,int divisor){
	int sign = ((dividend<0)^(divisor<0))?-1:1;
	dividend = abs(dividend);
	divisor = abs(divisor);

	int temp=0;
	for(int i=31;i>=0;i--){
		if(temp + (divisor<<i)<=dividend){
			temp+=divisor<<i;
			quotient = quotient | 1<<i;
		}
	}
	return sign*quotient;
}