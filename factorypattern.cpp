/**
 Copyright (c) 2017 Rafal Biegacz

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#include <iostream>

class IAnimal
{
public:
    virtual int GetNumberOfLegs() const = 0;
    virtual void Speak() = 0;
    virtual void Free() = 0;
}; 

int main( int argc, char **argv )
{
    IAnimal *pAnimal = NULL;
    string animalName;

    while( pAnimal == NULL )
    {
        cout << “Type the name of an animal or ‘q’ to quit: “;
        cin >> animalName;

        if( animalName == “q” )
        break;

        IAnimal *pAnimal = AnimalFactory::Get()->CreateAnimal(animalName);
        if( pAnimal )
        {
            cout << “Your animal has ” << pAnimal->GetNumberOfLegs() << ” legs.” << endl;
            cout << “Your animal says: “;
            pAnimal->Speak();
        }
        else
        {
            cout << “That animal doesn’t exist in the farm! Choose another!” << endl;
        }
        if( pAnimal )
            pAnimal->Free();
        pAnimal = NULL;
        animalName.clear();
    }
    return 0;
}