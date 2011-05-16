// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_SurfaceReplica_HeaderFile
#define _StepGeom_SurfaceReplica_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_SurfaceReplica_HeaderFile
#include <Handle_StepGeom_SurfaceReplica.hxx>
#endif

#ifndef _Handle_StepGeom_Surface_HeaderFile
#include <Handle_StepGeom_Surface.hxx>
#endif
#ifndef _Handle_StepGeom_CartesianTransformationOperator3d_HeaderFile
#include <Handle_StepGeom_CartesianTransformationOperator3d.hxx>
#endif
#ifndef _StepGeom_Surface_HeaderFile
#include <StepGeom_Surface.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepGeom_Surface;
class StepGeom_CartesianTransformationOperator3d;
class TCollection_HAsciiString;



class StepGeom_SurfaceReplica : public StepGeom_Surface {

public:

  //! Returns a SurfaceReplica <br>
  Standard_EXPORT   StepGeom_SurfaceReplica();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_Surface)& aParentSurface,const Handle(StepGeom_CartesianTransformationOperator3d)& aTransformation) ;
  
  Standard_EXPORT     void SetParentSurface(const Handle(StepGeom_Surface)& aParentSurface) ;
  
  Standard_EXPORT     Handle_StepGeom_Surface ParentSurface() const;
  
  Standard_EXPORT     void SetTransformation(const Handle(StepGeom_CartesianTransformationOperator3d)& aTransformation) ;
  
  Standard_EXPORT     Handle_StepGeom_CartesianTransformationOperator3d Transformation() const;




  DEFINE_STANDARD_RTTI(StepGeom_SurfaceReplica)

protected:




private: 


Handle_StepGeom_Surface parentSurface;
Handle_StepGeom_CartesianTransformationOperator3d transformation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif