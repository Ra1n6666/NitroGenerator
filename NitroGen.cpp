#include <iostream>
#include <windows.h>
#include <chrono>
#include <random>

std::string random_string()
{
    std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
    std::random_device rd;
    std::mt19937 generator(rd());
    std::shuffle(str.begin(), str.end(), generator);
    return str.substr(0, 8);   
}

int main()
{
    SetConsoleTitle("Nitro Generator | Made by <Ra1n6666/>#6666");
    system("color 4");
    std::cout << R"(
  _   _ _ _                _____            
 | \ | (_) |              / ____|           
 |  \| |_| |_ _ __ ___   | |  __  ___ _ __  
 | . ` | | __| '__/ _ \  | | |_ |/ _ \ '_ \ 
 | |\  | | |_| | | (_) | | |__| |  __/ | | |
 |_| \_|_|\__|_|  \___/   \_____|\___|_| |_|       
                                        
    )";
    std::cout << "Are you sure you want to generate nitros?\n";
    std::cout << "    Your choice [y/n]: ";
    std::string choice;
    std::cin >> choice;
    if (choice == "y")
    {
        std::cout << "    Time between genes (in seconds): ";
        DWORD time;
        std::cin >> time;
        std::cout << "    Discord webhook: ";
        std::string webhook;
        std::cin >> webhook;
        system("cls");
        std::cout << R"(
  _   _ _ _                _____            
 | \ | (_) |              / ____|           
 |  \| |_| |_ _ __ ___   | |  __  ___ _ __  
 | . ` | | __| '__/ _ \  | | |_ |/ _ \ '_ \ 
 | |\  | | |_| | | (_) | | |__| |  __/ | | |
 |_| \_|_|\__|_|  \___/   \_____|\___|_| |_|       
                                        
    )";
        auto start = std::chrono::steady_clock::now();
        //dpp::webhook wh(webhook);
        while (true)
        {
            std::string nitro = random_string();
            auto end = std::chrono::steady_clock::now();
            //bot.execute_webhook(wh, dpp::message("    https://discord.gift/" << nitro << " | Time Passed: " << std::chrono::duration_cast<std::chrono::seconds>(end - start).count() << " Seconds\n"));
            std::cout << "    https://discord.gift/" <<nitro<< " | Time Passed: " << std::chrono::duration_cast<std::chrono::seconds>(end - start).count() << " Seconds\n";
            Sleep(time * 1000);
        }
    }
    else if (choice == "n")
    {
        system("exit");
    }
    else
    {
        system("exit");
    }
}