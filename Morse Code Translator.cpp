#include <iostream>
#include <windows.h>
#include <string>
#include <locale>
#include <conio.h>
#include <stdio.h>

std::string originalLine = "";
bool flag = false;

static int ToLower(int letter) {
    if (letter >= -64 && letter <= -33) {
        letter += 32;
    }
    return letter;
}

static int CountWords(std::string str) {
    int count = 0;
    if (str.length() > 0 && str[0] != ' ') {
        count++;
    }

    for (int i = 1; i < str.length(); i++) {
        if (str[i] != ' ' && str[i - 1] == ' ') {
            count++;
        }
    }
    return count;
}

static void Scrambling(char symbol) {
    switch (symbol) {
        // Letters:
    case -32: originalLine += ".- "; break;
    case -31: originalLine += "-... "; break;
    case -30: originalLine += ".-- "; break;
    case -29: originalLine += "--. "; break;
    case -28: originalLine += "-.. "; break;
    case -27: originalLine += ". "; break;
    case -26: originalLine += "...- "; break;
    case -25: originalLine += "--.. "; break;
    case -24: originalLine += ".. "; break;
    case -23: originalLine += ".--- "; break;
    case -22: originalLine += "-.- "; break;
    case -21: originalLine += ".-.. "; break;
    case -20: originalLine += "-- "; break;
    case -19: originalLine += "-. "; break;
    case -18: originalLine += "--- "; break;
    case -17: originalLine += ".--. "; break;
    case -16: originalLine += ".-. "; break;
    case -15: originalLine += "... "; break;
    case -14: originalLine += "- "; break;
    case -13: originalLine += "..- "; break;
    case -12: originalLine += "..-. "; break;
    case -11: originalLine += ".... "; break;
    case -10: originalLine += "-.-. "; break;
    case -9: originalLine += "---. "; break;
    case -8: originalLine += "---- "; break;
    case -7: originalLine += "--.- "; break;
    case -6: originalLine += ".--.-. "; break;
    case -5: originalLine += "-.-- "; break;
    case -4: originalLine += "-..- "; break;
    case -3: originalLine += "..-.. "; break;
    case -2: originalLine += "..-- "; break;
    case -1: originalLine += ".-.- "; break;
        // Punctuation marks:
    case 46: originalLine += "...... "; break; // .
    case 44: originalLine += ".-.-.- "; break; // ,
    case 58: originalLine += "---... "; break; // :
    case 59: originalLine += "-.-.-. "; break; // ;
    case 40: originalLine += "-.--.- "; break; // (
    case 41: originalLine += "-.--.- "; break; // )
    case 39: originalLine += ".----. "; break; // '
    case 34: originalLine += ".-..-. "; break; // "
    case 45: originalLine += "-....- "; break; // -
    case 47: originalLine += "-..-. "; break; // /
    case 95: originalLine += "..--.- "; break; // _
    case 63: originalLine += "..--.. "; break; // ?
    case 33: originalLine += "--..-- "; break; // !
    case 43: originalLine += ".-.-. "; break; // +
    case 61: originalLine += "-...- "; break; // =
        // Numbers:
    case 48: originalLine += "----- "; break;
    case 49: originalLine += ".---- "; break;
    case 50: originalLine += "..--- "; break;
    case 51: originalLine += "...-- "; break;
    case 52: originalLine += "....- "; break;
    case 53: originalLine += "..... "; break;
    case 54: originalLine += "-.... "; break;
    case 55: originalLine += "--... "; break;
    case 56: originalLine += "---.. "; break;
    case 57: originalLine += "----. "; break;
        // System:
    case 32: originalLine += " "; break;
    default: originalLine += "|unknown| "; break;
    }
}

static void choice1(std::string text, char separation) {
    for (int i = 0; i < text.length(); i++) {
        if (i == 0 && text[i] == 32) {
            originalLine += 32;
            continue;
        }
        if (i > 0 && text[i - 1] != 32 && text[i] == 32 && text[i + 1] != 32) {
            originalLine += separation;
            originalLine += 32;
        }
        else {
            Scrambling(ToLower((int)text[i]));
        }
    }
}

static void Decoding(std::string symbol) {
    // Letters:
    if (symbol == ".-") {
        originalLine += "а";
    }
    else if (symbol == "-...") {
        originalLine += "б";
    }
    else if (symbol == ".--") {
        originalLine += "в";
    }
    else if (symbol == "--.") {
        originalLine += "г";
    }
    else if (symbol == "-..") {
        originalLine += "д";
    }
    else if (symbol == ".") {
        originalLine += "е";
    }
    else if (symbol == "...-") {
        originalLine += "ж";
    }
    else if (symbol == "--..") {
        originalLine += "з";
    }
    else if (symbol == "..") {
        originalLine += "и";
    }
    else if (symbol == ".---") {
        originalLine += "й";
    }
    else if (symbol == "-.-") {
        originalLine += "к";
    }
    else if (symbol == ".-..") {
        originalLine += "л";
    }
    else if (symbol == "--") {
        originalLine += "м";
    }
    else if (symbol == "-.") {
        originalLine += "н";
    }
    else if (symbol == "---") {
        originalLine += "о";
    }
    else if (symbol == ".--.") {
        originalLine += "п";
    }
    else if (symbol == ".-.") {
        originalLine += "р";
    }
    else if (symbol == "...") {
        originalLine += "с";
    }
    else if (symbol == "-") {
        originalLine += "т";
    }
    else if (symbol == "..-") {
        originalLine += "у";
    }
    else if (symbol == "..-.") {
        originalLine += "ф";
    }
    else if (symbol == "....") {
        originalLine += "х";
    }
    else if (symbol == "-.-.") {
        originalLine += "ц";
    }
    else if (symbol == "---.") {
        originalLine += "ч";
    }
    else if (symbol == "----") {
        originalLine += "ш";
    }
    else if (symbol == "--.-") {
        originalLine += "щ";
    }
    else if (symbol == ".--.-.") {
        originalLine += "ъ";
    }
    else if (symbol == "-.--") {
        originalLine += "ы";
    }
    else if (symbol == "-..-") {
        originalLine += "ь";
    }
    else if (symbol == "..-..") {
        originalLine += "э";
    }
    else if (symbol == "..--") {
        originalLine += "ю";
    }
    else if (symbol == ".-.-") {
        originalLine += "я";
    }
    // Punctuation marks:
    else if (symbol == "......") {
        originalLine += ".";
    }
    else if (symbol == ".-.-.-") {
        originalLine += ",";
    }
    else if (symbol == "---...") {
        originalLine += ":";
    }
    else if (symbol == "-.-.-.") {
        originalLine += ";";
    }
    else if (symbol == "-.--.-") {
        originalLine += "(";
    }
    else if (symbol == "-.--.-") {
        originalLine += ")";
    }
    else if (symbol == ".----.") {
        originalLine += "'";
    }
    else if (symbol == ".-..-.") {
        originalLine += "\"";
    }
    else if (symbol == "-....-") {
        originalLine += "-";
    }
    else if (symbol == "-..-.") {
        originalLine += "/";
    }
    else if (symbol == "..--.-") {
        originalLine += "_";
    }
    else if (symbol == "..--..") {
        originalLine += "?";
    }
    else if (symbol == "--..--") {
        originalLine += "!";
    }
    else if (symbol == ".-.-.") {
        originalLine += "+";
    }
    else if (symbol == "-...-") {
        originalLine += "=";
    }
    // Numbers:
    else if (symbol == "-----") {
        originalLine += "0";
    }
    else if (symbol == ".----") {
        originalLine += "1";
    }
    else if (symbol == "..---") {
        originalLine += "2";
    }
    else if (symbol == "...--") {
        originalLine += "3";
    }
    else if (symbol == "....-") {
        originalLine += "4";
    }
    else if (symbol == ".....") {
        originalLine += "5";
    }
    else if (symbol == "-....") {
        originalLine += "6";
    }
    else if (symbol == "--...") {
        originalLine += "7";
    }
    else if (symbol == "---..") {
        originalLine += "8";
    }
    else if (symbol == "----.") {
        originalLine += "9";
    }
    else if (symbol.length() > 0) {
        originalLine += "|unknown| ";
    }
}

static void choice2(std::string text) {
    bool flagchoice2 = true;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            flagchoice2 = false;
            break;
        }
    }
    if (flagchoice2) {
        Decoding(text);
    }
    else {
        int i = 0;
        std::string symbol;
        while (i < text.length()) {
            if (i > 0 && text.length() >= 4 && text[i] == ' ' && text[i + 1] == ' ') {
                Decoding(symbol);
                symbol = "";
                originalLine += " ";
                i += 2;
                continue;
            }
            if (i > 0 && text[i] == ' ') {
                Decoding(symbol);
                symbol = "";
                i++;
                continue;
            }
            if (i == 0 && text[i] == ' ') {
                originalLine += " ";
                i++;
                continue;
            }
            if (i > 0 && text.length() >= 5 && text[i - 1] == ' ' && text[i] != ' ' && text[i] != '.'
                && text[i] != '-' && text[i + 1] == ' ' && (text[i + 2] == '.' || text[i + 2] == '-')) {
                originalLine += " ";
                i += 2;
            }
            if (text[i] != ' ') {
                symbol += text[i];
            }
            i++;
        }
        Decoding(symbol);
    }
}

static void Playback(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            Beep(850, 100);
        }
        else if (str[i] == '-') {
            Beep(850, 300);
        }
        else if (str[i] == ' ') {
            Sleep(300);
        }
        else if (str[i] != ' ' && str[i + 1] == ' ') {
            Sleep(300);
        }
    }
}

enum ColorConsole {
    White = 15,
    Blue = 3,
    Red = 12
};

HANDLE hConsole;

int main() {
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice = 0;
    char separation;
    char end;
    bool choiceBool;
    bool enteredCharacter;
    std::string text;

    SetConsoleTextAttribute(hConsole, Blue);
    std::cout << "       >>> Morse Code Translator <<<\n\n";
    SetConsoleTextAttribute(hConsole, White);

    do {
        std::cout << "Enter the text in Morse code or in Russian: \n\n";
        if (flag) {
            std::cin.ignore(1);
            flag = false;
        }
        getline(std::cin, text);

        system("cls");

        do {
            separation = 32;
            choiceBool = false;
            std::cout << "Select the type of transfer:\n\n";
            std::cout << "1 - from Russian to Morse code\n";
            std::cout << "2 - from Morse code to Russian\n\n";
            choice = _getch();

            system("cls");

            if (choice == '1') {
                if (CountWords(text) > 1) {
                    flag = true;
                    std::cout << "Which character should be used to separate words? \n\n";
                    std::cin >> separation;
                    system("cls");
                }
                choice1(text, separation);
            }
            else if (choice == '2') {
                choice2(text);
            }
            else {
                SetConsoleTextAttribute(hConsole, Red);
                std::cout << "Unknown character, try again!\n";
                SetConsoleTextAttribute(hConsole, White);
                choiceBool = true;
            }
        } while (choiceBool);

        do {
            enteredCharacter = true;
            std::cout << originalLine;
            if (choice == '1') {
                std::cout << "\n\nEnter \"r\" (resume) to continue, \"s\" (stop) to end the work, or \"p\" (playback) to play\n\n";
            }
            else {
                std::cout << "\n\nEnter \"r\" (resume) to continue, or \"s\" (stop) to end the work\n\n";
            }
            end = _getch();

            system("cls");

            if (end == 'p') {
                Playback(originalLine);
            }
            else if (end == 'r' || end == 's') {
                enteredCharacter = false;
            }
            else {
                SetConsoleTextAttribute(hConsole, Red);
                std::cout << "Unknown character, try again!\n";
                SetConsoleTextAttribute(hConsole, White);
            }
        } while (enteredCharacter);

        originalLine = "";

        system("cls");
    } while (end == 'r');

    SetConsoleTextAttribute(hConsole, Blue);
    std::cout << "Goodbye, come back again :)\n";
    SetConsoleTextAttribute(hConsole, White);

    return 0;
}