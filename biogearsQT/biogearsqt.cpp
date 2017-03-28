#include "biogearsqt.h"
#include <QLineEdit>
#include <QMessageBox> 

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

/*
class MyLogger : public LoggerForward
{
public:
	virtual void ForwardDebug(const std::string& msg, const std::string& origin) {}
	virtual void ForwardInfo(const std::string& msg, const std::string& origin) {}
	virtual void ForwardWarning(const std::string& msg, const std::string& origin) {}
	virtual void ForwardError(const std::string& msg, const std::string& origin) {}
	virtual void ForwardFatal(const std::string& msg, const std::string& origin) {}
};


HowToTracker::HowToTracker(PhysiologyEngine& engine) : m_Engine(engine)
{
	m_dT_s = m_Engine.GetTimeStep(TimeUnit::s);
}

HowToTracker::~HowToTracker()
{
}

void HowToTracker::AdvanceModelTime(double time_s)
{
	// This samples the engine at each time step
	int count = static_cast<int>(time_s / m_dT_s);
	for (int i = 0; i <= count; i++)
	{
		m_Engine.AdvanceModelTime();  // Compute 1 time step

									  // Pull Track will pull data from the engine and append it to the file
		m_Engine.GetEngineTrack()->TrackData(m_Engine.GetSimulationTime(TimeUnit::s));
	}
}*/


void biogearsQT::on_pushButton_clicked()
{

	QLineEdit *name = ui.lineEdit_name;
	QLineEdit *age = ui.lineEdit_age;
	QString t_name;
	QString t_age;

	t_name = name->text();
	t_age = age->text();
	int a = t_age.split("")[0].toInt();
	
	QMessageBox::information(this,"Info",t_name);
	

}
