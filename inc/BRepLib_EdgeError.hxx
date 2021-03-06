// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepLib_EdgeError_HeaderFile
#define _BRepLib_EdgeError_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Errors that can occur at edge construction.
//! no error
enum BRepLib_EdgeError
{
BRepLib_EdgeDone,
BRepLib_PointProjectionFailed,
BRepLib_ParameterOutOfRange,
BRepLib_DifferentPointsOnClosedCurve,
BRepLib_PointWithInfiniteParameter,
BRepLib_DifferentsPointAndParameter,
BRepLib_LineThroughIdenticPoints
};

#endif // _BRepLib_EdgeError_HeaderFile
