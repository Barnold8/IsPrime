void IsPrime(int start, int end, int depth) {

	bool isPrime = true;

	int Multiples = 0;

	while (start != end) {
		for (int i = 1; i < depth; i++) {

			if (start % i == 0) {

				//std::cout << i << " Is a multiple of " << start << std::endl;
				Multiples++;
			}
		}
		if (Multiples >= 3) {

			std::cout << start << " Is not a prime number" << std::endl;

		}
		else if (Multiples <= 2) {
			std::cout << start << " Is a prime number" << std::endl;

		}
		Multiples = 0;
		start++;
	}
}


int main()
{

	IsPrime(1, 25,100);


	return 0;
}