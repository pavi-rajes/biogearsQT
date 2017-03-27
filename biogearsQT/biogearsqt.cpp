#include "biogearsqt.h"

#include "BioGearsEngineHowTo.h"
#include "engine/PhysiologyEngineTrack.h"
#include "scenario/requests/SEDataRequest.h"
#include "properties/SEScalarTime.h"
#include "patient/SEPatient.h"
#include "patient/assessments/SEPulmonaryFunctionTest.h"
#include "compartment/SECompartmentManager.h"
#include "compartment/fluid/SEGasCompartment.h"
#include "compartment/fluid/SELiquidCompartment.h"
#include "compartment/SECompartmentManager.h"
#include "system/physiology/SEBloodChemistrySystem.h"
#include "system/physiology/SECardiovascularSystem.h"
#include "system/physiology/SEEnergySystem.h"
#include "system/physiology/SERespiratorySystem.h"
#include "substance/SESubstanceManager.h"
#include "substance/SESubstance.h"
#include "engine/PhysiologyEngineTrack.h"
#include "utils/SEEventHandler.h"
#include "properties/SEScalarFraction.h"
#include "properties/SEScalarFrequency.h"
#include "properties/SEScalarMassPerVolume.h"
#include "properties/SEScalarPressure.h"
#include "properties/SEScalarTemperature.h"
#include "properties/SEScalarTime.h"
#include "properties/SEScalarVolume.h"
#include "properties/SEScalarVolumePerTime.h"
#include "properties/SEFunctionVolumeVsTime.h"
#include "properties/SEScalarMass.h"
#include "properties/SEScalarLength.h"

biogearsQT::biogearsQT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

biogearsQT::~biogearsQT()
{

}
