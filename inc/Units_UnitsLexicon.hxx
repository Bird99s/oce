// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_UnitsLexicon_HeaderFile
#define _Units_UnitsLexicon_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Units_UnitsLexicon.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Standard_Time.hxx>
#include <Units_Lexicon.hxx>
#include <Standard_CString.hxx>
#include <Standard_Boolean.hxx>
class TCollection_HAsciiString;
class TCollection_AsciiString;


//! This class defines a lexicon useful to analyse and
//! recognize the different key  words  included  in a
//! sentence. The  lexicon is stored  in a sequence of
//! tokens.
class Units_UnitsLexicon : public Units_Lexicon
{

public:

  
  //! Returns an empty instance of UnitsLexicon
  Standard_EXPORT Units_UnitsLexicon();
  
  //! Reads  the files  <afilename1>  and  <afilename2>   to
  //! create     a   sequence     of    tokens   stored   in
  //! <thesequenceoftokens>.
  Standard_EXPORT   void Creates (const Standard_CString afilename1, const Standard_CString afilename2, const Standard_Boolean amode = Standard_True) ;
  
  //! Returns in a AsciiString from TCollection the name of the file.
  Standard_EXPORT   TCollection_AsciiString FileName2()  const;
  
  //! Returns true if  the  file has not  changed  since the
  //! creation   of   the  Lexicon   object.   Returns false
  //! otherwise.
  Standard_EXPORT virtual   Standard_Boolean UpToDate()  const;
  
  //! Useful for debugging.
    virtual   void Dump()  const;




  DEFINE_STANDARD_RTTI(Units_UnitsLexicon)

protected:




private: 


  Handle(TCollection_HAsciiString) thefilename;
  Standard_Time thetime;


};


#include <Units_UnitsLexicon.lxx>





#endif // _Units_UnitsLexicon_HeaderFile
