/**
 * @input A : Integer
 * 
 * @Output Integer 0 / 1. 0 if false, 1 if true. 
 */
int isPower(int A) {
	if (A <= 1) return 1;
    unsigned n=A;
    int x;
	for (x=2; x<=sqrt(n); x++)
	{
		unsigned p = x;

		while (p <= n)
		{
			p *= x;
			if (p == n)
				return 1;
		}
	}
	return 0;
}
