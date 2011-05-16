// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepShape_RWEdgeCurve_HeaderFile
#define _RWStepShape_RWEdgeCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepData_StepReaderData_HeaderFile
#include <Handle_StepData_StepReaderData.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_StepShape_EdgeCurve_HeaderFile
#include <Handle_StepShape_EdgeCurve.hxx>
#endif
class StepData_StepReaderData;
class Interface_Check;
class StepShape_EdgeCurve;
class StepData_StepWriter;
class Interface_EntityIterator;
class Interface_ShareTool;


//! Read & Write Module for EdgeCurve <br>
//!           Check added by CKY , 7-OCT-1996 <br>
class RWStepShape_RWEdgeCurve  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   RWStepShape_RWEdgeCurve();
  
  Standard_EXPORT     void ReadStep(const Handle(StepData_StepReaderData)& data,const Standard_Integer num,Handle(Interface_Check)& ach,const Handle(StepShape_EdgeCurve)& ent) const;
  
  Standard_EXPORT     void WriteStep(StepData_StepWriter& SW,const Handle(StepShape_EdgeCurve)& ent) const;
  
  Standard_EXPORT     void Share(const Handle(StepShape_EdgeCurve)& ent,Interface_EntityIterator& iter) const;
  
  Standard_EXPORT     void Check(const Handle(StepShape_EdgeCurve)& ent,const Interface_ShareTool& shares,Handle(Interface_Check)& ach) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif