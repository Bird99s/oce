// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape_HeaderFile
#define _TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape.hxx>

#include <TopoDS_Shape.hxx>
#include <Standard_Integer.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_IndexedDataMapOfShapeShape;



class TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape : public TCollection_MapNode
{

public:

  
    TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape(const TopoDS_Shape& K1, const Standard_Integer K2, const TopoDS_Shape& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      TopoDS_Shape& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      TopoDS_Shape& Value()  const;




  DEFINE_STANDARD_RTTI(TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape)

protected:




private: 


  TopoDS_Shape myKey1;
  Standard_Integer myKey2;
  TopoDS_Shape myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopoDS_Shape
#define TheItem_hxx <TopoDS_Shape.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape
#define TCollection_IndexedDataMapNode_hxx <TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape
#define TCollection_IndexedDataMapNode_Type_() TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape_Type_()
#define TCollection_IndexedDataMap TopTools_IndexedDataMapOfShapeShape
#define TCollection_IndexedDataMap_hxx <TopTools_IndexedDataMapOfShapeShape.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx




#endif // _TopTools_IndexedDataMapNodeOfIndexedDataMapOfShapeShape_HeaderFile
