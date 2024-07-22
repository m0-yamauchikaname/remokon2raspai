// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  remokon2paspai.cpp
 * @brief ModuleDescription
 *
 */
// </rtc-template>

#include "remokon2paspai.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const remokon2paspai_spec[] =
#else
static const char* remokon2paspai_spec[] =
#endif
  {
    "implementation_id", "remokon2paspai",
    "type_name",         "remokon2paspai",
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
remokon2paspai::remokon2paspai(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_remokonIn("remokon", m_remokon),
    m_end1In("end1", m_end1),
    m_end2In("end2", m_end2),
    m_ras1Out("ras1", m_ras1),
    m_ras2Out("ras2", m_ras2)
    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
remokon2paspai::~remokon2paspai()
{
}



RTC::ReturnCode_t remokon2paspai::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("remokon", m_remokonIn);
  addInPort("end1", m_end1In);
  addInPort("end2", m_end2In);
  
  // Set OutPort buffer
  addOutPort("ras1", m_ras1Out);
  addOutPort("ras2", m_ras2Out);

  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>

  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t remokon2paspai::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t remokon2paspai::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspai::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t remokon2paspai::onActivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t remokon2paspai::onDeactivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t remokon2paspai::onExecute(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t remokon2paspai::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspai::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspai::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspai::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t remokon2paspai::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}



extern "C"
{
 
  void remokon2paspaiInit(RTC::Manager* manager)
  {
    coil::Properties profile(remokon2paspai_spec);
    manager->registerFactory(profile,
                             RTC::Create<remokon2paspai>,
                             RTC::Delete<remokon2paspai>);
  }
  
}
