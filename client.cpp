#include <thread>
#include "stdafx.h"
#include "game.h"
#include "driver.h"
#include <tchar.h>

struct slowly_printing_stringg {
	std::string data;
	long int delay;
};

std::ostream& operator<<(std::ostream& out, const slowly_printing_stringg& s) {
	for (const auto& c : s.data) {
		out << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(s.delay));
	}
	return out;
}

int main() {
	SetConsoleTitleA("Vivaskull");


	printf("Press 'F1' in Valorant Lobby");
	while (true)
	{

		if (GetAsyncKeyState(VK_F1))
		{
			break;
			Beep(300, 300);
		}
	}

	if (mem::find_driver()) {
		std::cout << "\n[!] Found Driver !";
		Sleep(2500);
	}
	else {
		std::cout << "\n[!] Driver not found !";
		Sleep(2500);
	}
	mem::find_process(L"VALORANT-Win64-Shipping.exe");

	system("cls");

	virtualaddy = mem::get_guarded_region(); 
	std::cout << "\n[#] Base Address: %p. " << mem::find_process;
	game::start_cheat();
	Sleep(-1);
	return NULL;
}