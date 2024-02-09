#ifndef water_hh 
#define water_hh 1


// Geant4 Libraries
//
#include "G4Material.hh"
#include "G4Element.hh"


// Local Libraries
//


class waterNaCl
{
  public:
    waterNaCl();
    ~waterNaCl();

    G4Material* doWater();
    G4MaterialPropertiesTable* doOpwater();

  private:
    G4Element* O;
    G4Element* H;
		G4Element* Cl;
		G4Element* Na;	

    G4double a, z, density;
    
    G4Material* thewater;
    G4Material* theNaCl;
		G4Material* thewaterNaCl;

};
#endif
