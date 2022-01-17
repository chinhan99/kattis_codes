#include <iostream>
#include <string>
#include <vector>
//#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num_clicks;
    bool caps_flag = false;
    bool shift_flag = false;
    cin >> num_clicks;
    vector<char> output;
    string str;
    int alpha;

    while (num_clicks > 0)
    {
        cin >> str;
        //Activate and deactivate capslock
        if (str == "bump")
        {
            if (caps_flag == false)
            {
                caps_flag = true;
            }
            else
            {
                caps_flag = false;
            }
        }
        // Activate and deactivate shift key.
        else if (str == "dink")
        {
            if (shift_flag == false)
            {
                shift_flag = true;
            }
        }
        else if (str == "thumb")
        {
            shift_flag = false;
        }
        else if (str == "pop" && (output.size() > 0))
        { // delete
            //______INSERT CODE______________
            output.pop_back();
        }
        else if (str == "whack")
        { // spacing
            // ____INSERT CODE_________
            output.push_back(' ');
        }

        // Check if the caps or shift key  was activated
        else
        {
            //convert str to numbers first
            if (str == "clank")
            { // a
                alpha = 1;
            }
            else if (str == "bong")
            {
                alpha = 2;
            }
            else if (str == "click")
            { // c
                alpha = 3;
            }
            else if (str == "tap")
            {
                alpha = 4;
            }
            else if (str == "poing")
            {
                alpha = 5;
            }
            else if (str == "clonk")
            { // f
                alpha = 6;
            }
            else if (str == "clack")
            {
                alpha = 7;
            }
            else if (str == "ping")
            { // h
                alpha = 8;
            }
            else if (str == "tip")
            {
                alpha = 9;
            }
            else if (str == "cloing")
            {
                alpha = 10;
            }
            else if (str == "tic")
            { //k
                alpha = 11;
            }
            else if (str == "cling")
            {
                alpha = 12;
            }
            else if (str == "bing")
            { //m
                alpha = 13;
            }
            else if (str == "pong")
            {
                alpha = 14;
            }
            else if (str == "clang")
            { // O
                alpha = 15;
            }
            else if (str == "pang")
            {
                alpha = 16;
            }
            else if (str == "clong")
            {
                alpha = 17;
            }
            else if (str == "tac")
            { //r
                alpha = 18;
            }
            else if (str == "boing")
            {
                alpha = 19;
            }
            else if (str == "boink")
            { //t
                alpha = 20;
            }
            else if (str == "cloink")
            {
                alpha = 21;
            }
            else if (str == "rattle")
            { // v
                alpha = 22;
            }
            else if (str == "clock")
            {
                alpha = 23;
            }
            else if (str == "toc")
            { // x
                alpha = 24;
            }
            else if (str == "clink")
            {
                alpha = 25;
            }
            else if (str == "tuc")
            { // z
                alpha = 26;
            }

            if ((caps_flag == false && shift_flag == true) || (caps_flag == true && shift_flag == false))
            { // caps letters
                switch (alpha)
                {
                case 1:
                    output.push_back('A');
                    break;
                case 2:
                    output.push_back('B');
                    break;
                case 3:
                    output.push_back('C');
                    break;
                case 4:
                    output.push_back('D');
                    break;
                case 5:
                    output.push_back('E');
                    break;
                case 6:
                    output.push_back('F');
                    break;
                case 7:
                    output.push_back('G');
                    break;
                case 8:
                    output.push_back('H');
                    break;
                case 9:
                    output.push_back('I');
                    break;
                case 10:
                    output.push_back('J');
                    break;
                case 11:
                    output.push_back('K');
                    break;
                case 12:
                    output.push_back('L');
                    break;
                case 13:
                    output.push_back('M');
                    break;
                case 14:
                    output.push_back('N');
                    break;
                case 15:
                    output.push_back('O');
                    break;
                case 16:
                    output.push_back('P');
                    break;
                case 17:
                    output.push_back('Q');
                    break;
                case 18:
                    output.push_back('R');
                    break;
                case 19:
                    output.push_back('S');
                    break;
                case 20:
                    output.push_back('T');
                    break;
                case 21:
                    output.push_back('U');
                    break;
                case 22:
                    output.push_back('V');
                    break;
                case 23:
                    output.push_back('W');
                    break;
                case 24:
                    output.push_back('X');
                    break;
                case 25:
                    output.push_back('Y');
                    break;
                case 26:
                    output.push_back('Z');
                    break;
                } // switch case
            }     // CAPS IF statement
            else
            { //if((caps_flag == true && shift_flag == true)){               // smaller letter
                switch (alpha)
                {
                case 1:
                    output.push_back('a');
                    break;
                case 2:
                    output.push_back('b');
                    break;
                case 3:
                    output.push_back('c');
                    break;
                case 4:
                    output.push_back('d');
                    break;
                case 5:
                    output.push_back('e');
                    break;
                case 6:
                    output.push_back('f');
                    break;
                case 7:
                    output.push_back('g');
                    break;
                case 8:
                    output.push_back('h');
                    break;
                case 9:
                    output.push_back('i');
                    break;
                case 10:
                    output.push_back('j');
                    break;
                case 11:
                    output.push_back('k');
                    break;
                case 12:
                    output.push_back('l');
                    break;
                case 13:
                    output.push_back('m');
                    break;
                case 14:
                    output.push_back('n');
                    break;
                case 15:
                    output.push_back('o');
                    break;
                case 16:
                    output.push_back('p');
                    break;
                case 17:
                    output.push_back('q');
                    break;
                case 18:
                    output.push_back('r');
                    break;
                case 19:
                    output.push_back('s');
                    break;
                case 20:
                    output.push_back('t');
                    break;
                case 21:
                    output.push_back('u');
                    break;
                case 22:
                    output.push_back('v');
                    break;
                case 23:
                    output.push_back('w');
                    break;
                case 24:
                    output.push_back('x');
                    break;
                case 25:
                    output.push_back('y');
                    break;
                case 26:
                    output.push_back('z');
                    break;
                } // switch case
            }
            alpha = 0;
        } // ELSE STATEMENT for the conversion of strings to numbers
        num_clicks -= 1;

    } // while loop

    for (int i = 0; i < output.size(); i += 1)
    {
        cout << output.at(i);
    }

    return 0;
}
