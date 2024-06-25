#include "TalentShow.h"

TalentShow::TalentShow(std::string program, int intensityArr [])
{
    for(int i = 0; i < program.size(); i++)
    {
        char curr = program.at(i);
        switch(curr)
        {
        case 'M':
            this->program.push_back(new MagicAct(intensityArr[i]));
            break;
        case 'S':
            this->program.push_back(new SongAct(intensityArr[i]));
            break;
        case 'A':
            this->program.push_back(new AcrobaticAct(intensityArr[i]));
            break;
        }
    }
}

int TalentShow::itsShowtime()
{
    int totalExcitement = 0;
    for (size_t i = 0; i < program.size(); ++i)
    {
        try
        {
            std::cout << "Processing act " << i << " of type " << program[i]->getType() << std::endl;
            totalExcitement += program[i]->getValue(program, i);
            std::cout << "Current total excitement: " << totalExcitement << std::endl;
        }
        catch (const std::out_of_range& e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
    return totalExcitement;
}

TalentShow::~TalentShow()
{
    for (auto act : program) // Verwendung von 'auto' für den Typ
    {
        delete act;
    }
      program.clear();
}
