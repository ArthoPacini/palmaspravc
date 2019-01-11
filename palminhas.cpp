#include <iostream>
#include <string>

int main()
{
    std::string palminha = "\U0001F44F"; //Unicode da palminha, voce pode encontrar outros unicodes aqui: https://unicode.org/emoji/charts/full-emoji-list.html
    std::cout << palminha << '\t' << palminha << '\t' << palminha << '\t' << std::endl;

    while(true) //loop infinito
    {
        std::string inputText;
        std::cout << "\n\nDigita aí > ";
        getline(std::cin, inputText);

        for(int i = 0; i < inputText.length(); i++)
        {
            if(std::isspace(inputText[i])) //Mostra a palminha quando acha um espaço
            {
                std::cout << ' ';
                std::cout << palminha;
                std::cout << ' ';
            }
            else
            {
                std::cout << inputText[i]; //Mostra o texto quando não acha espaço
            }
        }
    }

    return 0;
}
