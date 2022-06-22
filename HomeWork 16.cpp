
#include <iostream>


int main()
{
    //Task 1
    int length, quantity, space = 0;
    std::cout << "Length and quantity of stairs: ";
    std::cin >> length >> quantity;


    for (int i = 0; i < quantity; i++)
    {
        for (int y = 0; y < length; y++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
        space++;


        for (int j = 0; j < space; j++)
        {
            std::cout << "  ";
        }
    }



    //Task 2
    int stairscount, spacechanger = 0;
    std::cout << "\nQuantity of stairs: ";
    std::cin >> stairscount;


    for (int i = 0; i < stairscount; i++)
    {
        for (int y = 0; y < spacechanger; y++)
        {
            std::cout << " ";
        }
        std::cout << "***\n";
        spacechanger += 2;


        for (int y = 0; y < spacechanger; y++)
        {
            std::cout << " ";
        }
        std::cout << "*\n";
    }


    for (int y = 0; y < spacechanger; y++)
    {
        std::cout << " ";
    }
    std::cout << "***";



    //Task 3
    int tiers, tierheight, count = 1, itemcount = 1, caras = 0, example = 2;;
    std::cout << "\n \nQuantity of tiers and height of each tier: ";
    std::cin >> tiers >> tierheight;
    int spacer = tierheight + (tiers * 2), reservespacer = spacer;


    for (int i = 0; i < tiers; i++)
    {
        for (int y = tierheight - 1; y >= 0; y--)
        {
            for (int j = 0; j < spacer; j++)
            {
                std::cout << "  ";
            }
            spacer--;

            for (int h = 0; h < itemcount; h++)
            {
                std::cout << "<>";
            }
            itemcount += 2;
            std::cout << "\n";
        }
        itemcount = 1 + example;
        example += 2;
        caras++;
        spacer = reservespacer - caras;
    }


    for (int y = 0; y < 4; y++)
    {
        for (int i = 0; i < (tierheight + (tiers * 2)) * 1.8; i++)
        {
            std::cout << " ";
        }
        std::cout << " <><><>\n";
    }


}
