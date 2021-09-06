#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>



namespace basic
{
    void keyboard_input(char &input, std::string prompt, bool one_time_prompt = true)
    {
        std::cout << prompt << std::endl;
        input = getch();
        if(!one_time_prompt)
        {

        }else{system("cls");}
    }

    void key_press(char &input)
    {
        input = getch();
    }




}


namespace data
{


    struct item
    {
        std::string inv;
        int qty;
    };




}




namespace display
{

    class option
    {
        std::string item[10];
        int position;
        char buffer[300];

    public:

        option()
        {
            for(int n = 0; n < 10 ; n++)
            {
                item[n] = " ";
            }

            position = 1;
        }

        void add_option(std::string data, int pos)
        {
            item[pos - 1] = data;
        }

        void scroll(char dir)
        {
            if(dir == 'u'){position += 1;}
            else if(dir == 'd'){position -= 1;}
            else{/*debug*/}

            if(position > 10){position = 1;}
            else if(position < 1){position = 10;}
            else{}
        }

         std::string  value()
        {
            int pos = position - 1;
            return item[pos];
        }

        /*char* drawable()
        {
            for(int n = 0; n , 10; n+=)
            {
                buffer
            }


            return &buffer;
        }*/







    };





}





int main()
{


    static char KEYBOARD_INPUT;

    display::option pilihan;
    pilihan.add_option("Pirel sangat ganteng sekali", 2);
    pilihan.scroll('u');




    while(true)
    {
        //Input
        //basic::key_press(KEYBOARD_INPUT);



        //Simulation



        //Render
        std::cout << pilihan.value() << std::endl;




    }

    return 0;



}
