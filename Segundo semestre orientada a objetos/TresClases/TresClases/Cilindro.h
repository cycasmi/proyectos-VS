#include "CuerposGeometricos.h"

class Cilindro : public CuerposGeometricos
{
protected:
	float altura;
public:
	float area();


	Cilindro();
	~Cilindro();
};

