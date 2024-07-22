// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  remokon2paspaiTest.cpp
 * @brief ModuleDescription (test code)
 *
 */
// </rtc-template>

#include "remokon2paspaiTest.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const remokon2paspai_spec[] =
#else
static const char* remokon2paspai_spec[] =
#endif
  {
    "implementation_id", "remokon2paspaiTest",
    "type_name",         "remokon2paspaiTest",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "AIST",
    "category",          "Controller",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
remokon2paspaiTest::remokon2paspaiTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_remokonOut("remokon", m_remokon),
    m_end1Out("end1", m_end1),
    m_end2Out("end2", m_end2),
    m_ras1In("ras1", m_ras1),
    m_ras2In("ras2", m_ras2)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
remokon2paspaiTest::~remokon2paspaiTest()
{
}



RTC::ReturnCode_t remokon2paspaiTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("ras1", m_ras1In);
  addInPort("ras2", m_ras2In);
  
  // Set OutPort buffer
  addOutPort("remokon", m_remokonOut);
  addOutPort("end1", m_end1Out);
  addOutPort("end2", m_end2Out);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t remokon2paspaiTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t remokon2paspaiTest::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspaiTest::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t remokon2paspaiTest::onActivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t remokon2paspaiTest::onDeactivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t remokon2paspaiTest::onExecute(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t remokon2paspaiTest::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspaiTest::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspaiTest::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspaiTest::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspaiTest::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


bool remokon2paspaiTest::runTest()
{
    return true;
}


extern "C"
{
 
  void remokon2paspaiTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(remokon2paspai_spec);
    manager->registerFactory(profile,
                             RTC::Create<remokon2paspaiTest>,
                             RTC::Delete<remokon2paspaiTest>);
  }
  
}
