
int sommatoria (int N) {
	if (N == 0) {
		return 0;
	}

	return sommatoria(N - 1) + N;
}
