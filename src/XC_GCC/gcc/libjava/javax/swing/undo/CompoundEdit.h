
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_undo_CompoundEdit__
#define __javax_swing_undo_CompoundEdit__

#pragma interface

#include <javax/swing/undo/AbstractUndoableEdit.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace undo
      {
          class CompoundEdit;
          class UndoableEdit;
      }
    }
  }
}

class javax::swing::undo::CompoundEdit : public ::javax::swing::undo::AbstractUndoableEdit
{

public:
  CompoundEdit();
  virtual void undo();
  virtual void redo();
public: // actually protected
  virtual ::javax::swing::undo::UndoableEdit * lastEdit();
public:
  virtual void die();
  virtual jboolean addEdit(::javax::swing::undo::UndoableEdit *);
  virtual void end();
  virtual jboolean canUndo();
  virtual jboolean canRedo();
  virtual jboolean isInProgress();
  virtual jboolean isSignificant();
  virtual ::java::lang::String * getPresentationName();
  virtual ::java::lang::String * getUndoPresentationName();
  virtual ::java::lang::String * getRedoPresentationName();
  virtual ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = -6512679249930119683LL;
public: // actually protected
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::javax::swing::undo::AbstractUndoableEdit)))) edits;
private:
  jboolean inProgress;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_undo_CompoundEdit__