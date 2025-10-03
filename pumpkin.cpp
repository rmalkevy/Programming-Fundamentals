#include <iostream>
#include <chrono>       
#include <thread>      

void printWithDelay(const std::string& text, int delay_ms) {
    for (char ch : text) {
        std::cout << ch;
        std::cout.flush(); 
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms)); 
    }
    std::cout << std::endl;
}

int main() {
    
    const std::string orange = "\033[38;5;208m";
    const std::string reset = "\033[0m";  

  
    std::string pumpkin[] = {
        "                                  \\\\",
        "                                  |||",
        "                         oooo$$$$$$$$$$$$oooo",
        "                      oo$$$$$$$$$$$$$$$$$$$$$$$$o",
        "                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o",
        "                 o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o",
        "               o$$$$$$          $$$$$$$          $$$$$$o",
        "              o$$$$$$$$        $$$$$$$$$        $$$$$$$$$o",
        "             $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$",
        "           $$$$$$$$$$$$$$    $$$$$$ $$$$$$    $$$$$$$$$$$$$$",
        "          o$$$$$$$$$$$$$$$ $$$$$$$   $$$$$$$ $$$$$$$$$$$$$$$",
        "          o$$$$$$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$$$$$$$",
        "          $$$$$$$$$$$$$$$$$$$$$$       $$$$$$$$$$$$$$$$$$$$$$",
        "          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\" \"$$$",
        "          $$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$",
        "           $$$$    $$$$  \"\"$$$$$$$$$$$$$$$$$\"\"  $$$$   o$$$",
        "            \"$\"o         $$$$  $$$$$   $$$          o$$$",
        "               $$$$o   .     \"\"  \"\"\"\"\"   \"\"       .  $$$\"",
        "                \"$\"o $$$oo                   oo$$o$$$",
        "                  \"$\"$$$$$$$$    o$$$$   $$$$   $$$$$\"\"",
        "                     \"\"$$$$$$ooo$$$$$ooo$$$$$$$$$\"\"",
        "                        \"\"$$$$$$$$$$$$$$$$$$$$",
        "                                \"\"\"$$$$\"\"\"  "
    };

    int delay_ms = 10;

    
    std::cout << orange;
    for (const std::string& line : pumpkin) {
        printWithDelay(line, delay_ms);
    }
    std::cout << reset; 

    return 0;
}