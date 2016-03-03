// A small functions to keep the console window open at end of program

// KeepRunning will go at the start after being declared outside
// of main() and then run at the very start of main, prior to all code, as 'KeepRunning kr;

struct KeepRunning {
	~KeepRunning() {
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
};