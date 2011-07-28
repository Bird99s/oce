// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectRootComps_HeaderFile
#define _IFSelect_SelectRootComps_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectRootComps_HeaderFile
#include <Handle_IFSelect_SelectRootComps.hxx>
#endif

#ifndef _IFSelect_SelectExtract_HeaderFile
#include <IFSelect_SelectExtract.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class Interface_EntityIterator;
class Interface_Graph;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! A SelectRootComps sorts the Entities which are part of Strong <br>
//!           Componants, local roots of a set of Entities : they can be <br>
//!           Single Componants (containing one Entity) or Cycles <br>
//!           This class gives a more secure result than SelectRoots (which <br>
//!           considers only Single Componants) but is longer to work : it <br>
//!           can be used when there can be or there are cycles in a Model <br>
//!           For each cycle, one Entity is given arbitrarily <br>
//!           Reject works as for SelectRoots : Strong Componants defined in <br>
//!           the input list which are not local roots are given <br>
class IFSelect_SelectRootComps : public IFSelect_SelectExtract {

public:

  //! Creates a SelectRootComps <br>
  Standard_EXPORT   IFSelect_SelectRootComps();
  //! Returns the list of local root strong componants, by one <br>
//!           Entity par componant. It is redefined for a purpose of <br>
//!           effeciency : calling a Sort routine for each Entity would <br>
//!           cost more ressource than to work in once using a Map <br>
//!           RootResult takes in account the Direct status <br>
  Standard_EXPORT   virtual  Interface_EntityIterator RootResult(const Interface_Graph& G) const;
  //! Returns always True, because RootResult has done work <br>
  Standard_EXPORT     Standard_Boolean Sort(const Standard_Integer rank,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;
  //! Returns a text defining the criterium : "Local Root Componants" <br>
  Standard_EXPORT     TCollection_AsciiString ExtractLabel() const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectRootComps)

protected:

  //! Returns True, RootResult assuring uniqueness <br>
  Standard_EXPORT   virtual  Standard_Boolean HasUniqueResult() const;



private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif