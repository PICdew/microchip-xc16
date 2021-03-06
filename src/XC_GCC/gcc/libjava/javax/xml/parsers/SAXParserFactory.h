
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_parsers_SAXParserFactory__
#define __javax_xml_parsers_SAXParserFactory__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace parsers
      {
          class SAXParser;
          class SAXParserFactory;
      }
      namespace validation
      {
          class Schema;
      }
    }
  }
}

class javax::xml::parsers::SAXParserFactory : public ::java::lang::Object
{

public: // actually protected
  SAXParserFactory();
public:
  static ::javax::xml::parsers::SAXParserFactory * newInstance();
private:
  static ::java::lang::String * getFactoryClassName(::java::lang::ClassLoader *, jint);
public:
  virtual ::javax::xml::parsers::SAXParser * newSAXParser() = 0;
  virtual void setNamespaceAware(jboolean);
  virtual void setValidating(jboolean);
  virtual jboolean isNamespaceAware();
  virtual jboolean isValidating();
  virtual void setFeature(::java::lang::String *, jboolean) = 0;
  virtual jboolean getFeature(::java::lang::String *) = 0;
  virtual ::javax::xml::validation::Schema * getSchema();
  virtual void setSchema(::javax::xml::validation::Schema *);
  virtual jboolean isXIncludeAware();
  virtual void setXIncludeAware(jboolean);
private:
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object)))) validating;
  jboolean namespaceAware;
  ::javax::xml::validation::Schema * schema;
  jboolean xIncludeAware;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_xml_parsers_SAXParserFactory__
