#include"opStart.h"
#include <iostream>
using namespace std;


opStart::opStart(controller* pCont) :operation(pCont)
{}
opStart::~opStart()
{}

//Execute the operation
void opStart::Execute() {

	//Get a Pointer to the Input / Output Interfaces
	GUI* pUI = pControl->GetUI();
	Graph* pGr = pControl->getGraph();
	pGr->takeCopyOfshapesList();
	pGr->isplay = true;
	pGr->Hideing(pUI);
	pGr->duplicateShapes();
	pGr->fillArray();
	pGr->scramble();
	cout << pGr->shapesList2.size();
	pUI->PrintMessage("You clicked on start button");
	/*opScramble::Execute();*/

}
void opStart::Undo() {}
void opStart::Redo() {}