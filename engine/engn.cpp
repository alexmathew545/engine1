#include <iostream>
using namespace std;

class Engine
{
public:
   virtual double GetEfficiency() const 
    {
        return 0.0;
    }

};

              class InternalCombustionEngine : public Engine 
               {
   
                };

              class ExternalCombustionEngine : public Engine
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

    int i;
    Engine* engine;
    do{ 
        cout <<"1 Petrol Engine Efficiency "<< std::endl;
        cout << "2 Diesel Engine Efficiency: " << std::endl;
        cout << "3 Steam Engine Efficiency: "<< std::endl;
        cout << "4 exit"<< std::endl;
        cout << "enter choise :";
         cin>>i;


    if(i==1)
    {
      engine = new PetrolEngine();
        cout << "Petrol Engine Efficiency: " << engine->GetEfficiency() << endl;
    }
    else if(i==2)
    {
        engine = new DieselEngine();
        cout << "Diesel Engine Efficiency: " <<engine->GetEfficiency() << endl;
    }
    else if (i==3)
    {
        engine = new SteamEngine();
        cout << "Steam Engine Efficiency: " << engine->GetEfficiency() << endl;
    }
   
    else
    {
        cout << "thank you"<< endl;
    }



    }while(i!=4);

    return 0;
}
