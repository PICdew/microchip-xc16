
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_transform_SourceLocator__
#define __javax_xml_transform_SourceLocator__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace transform
      {
          class SourceLocator;
      }
    }
  }
}

class javax::xml::transform::SourceLocator : public ::java::lang::Object
{

public:
  virtual ::java::lang::String * getPublicId() = 0;
  virtual ::java::lang::String * getSystemId() = 0;
  virtual jint getLineNumber() = 0;
  virtual jint getColumnNumber() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_xml_transform_SourceLocator__
