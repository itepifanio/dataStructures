from sys import argv
from contextlib import redirect_stdout

def bin_coeff(n , k):
	result = 1
	if(k > (n - k)):
		k = n - k
	for i in range(k):
		result *= (n - i)
		result = result // (i+1)

	return result

if __name__ == "__main__":
    n = int(argv[1])
    k = int(argv[2])
    with open("triangle.out", "w", encoding="utf-8") as out:
        with redirect_stdout(out):
            for i in range(n+1):
                limit = i+1 if i != n else k+1
                for j in range(limit):
                    print(bin_coeff(i , j), end=" ")
                print()
