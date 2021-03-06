// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFGraph_AllShared_HeaderFile
#define _IFGraph_AllShared_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Interface_Graph.hxx>
#include <Interface_GraphContent.hxx>
#include <Handle_Standard_Transient.hxx>
class Interface_Graph;
class Standard_Transient;
class Interface_EntityIterator;


//! this class determines all Entities shared by some specific
//! ones, at any level (those which will be lead in a Transfer
//! for instance)
class IFGraph_AllShared  : public Interface_GraphContent
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! creates an AllShared from a graph, empty ready to be filled
  Standard_EXPORT IFGraph_AllShared(const Interface_Graph& agraph);
  
  //! creates an AllShared which memrizes Entities shared by a given
  //! one, at any level, including itself
  Standard_EXPORT IFGraph_AllShared(const Interface_Graph& agraph, const Handle(Standard_Transient)& ent);
  
  //! adds an entity and its shared ones to the list (allows to
  //! cumulate all Entities shared by some ones)
  Standard_EXPORT   void GetFromEntity (const Handle(Standard_Transient)& ent) ;
  
  //! Adds Entities from an EntityIterator and all their shared
  //! ones at any level
  Standard_EXPORT   void GetFromIter (const Interface_EntityIterator& iter) ;
  
  //! Allows to restart on a new data set
  Standard_EXPORT   void ResetData() ;
  
  //! does the specific evaluation (shared entities atall levels)
  Standard_EXPORT virtual   void Evaluate() ;




protected:





private:



  Interface_Graph thegraph;


};







#endif // _IFGraph_AllShared_HeaderFile
