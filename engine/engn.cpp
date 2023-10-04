#include <iostream>
using namespace std;

class engine
{
public:
   virtual double GetEfficiency() const 
    {
        return 0.0;
    }

};

              class InternalCombustionEngine : public engine 
               {
   
                };

              class ExternalCombustionEngine : public engine
                  {
    
                 };

class PetrolEngine :public InternalCombustionEngine
{
public:
    
     double GetEfficiency() const override
     {
        
        return 0.85; 
    }
};

class DieselEngine :public InternalCombustionEngine
{
public:
       double GetEfficiency() const override 
    {
        
        return 0.90; 
    }
};

class SteamEngine : public ExternalCombustionEngine 
{
public:
    double GetEfficiency() const override 
    {
        
        return 0.70; 
    }
};

int main()
{
 
    int choise;
    PetrolEngine petrolEngine;
    DieselEngine dieselEngine;
    SteamEngine steamEngine;

    do{ 
        cout <<"1 Petrol Engine Efficiency "<< std::endl;
        cout << "2 Diesel Engine Efficiency: " << std::endl;
        cout << "3 Steam Engine Efficiency: "<< std::endl;
        cout << "4 exit"<< std::endl;
        cout << "enter choise :";

        cin>>choise;

    if(choise==1)
    {
        cout << "Petrol Engine Efficiency: " << petrolEngine.GetEfficiency() << endl;
    }
    else if(choise==2)
    {
        cout << "Diesel Engine Efficiency: " << dieselEngine.GetEfficiency() << endl;
    }
    else if (choise==3)
    {
        cout << "Steam Engine Efficiency: " << steamEngine.GetEfficiency() << endl;
    }
   
    else
    {
        cout << "thank you"<< endl;
    }



    }while(choise!=4);

    

    return 0;
}
