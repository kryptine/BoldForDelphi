/*****************************************/
/*      This file is autogenerated       */
/*   Any manual changes will be LOST!    */
/*****************************************/
/* Generated 2002-01-07 13:31:19         */
/*****************************************/
/* This file should be stored in the     */
/* same directory as the form/datamodule */
/* with the corresponding model          */
/*****************************************/
/* Copyright notice:                     */
/*                                       */
/*****************************************/

#if !defined (OptimisticLockingExampleClasses_HPP)
#define OptimisticLockingExampleClasses_HPP

// interface uses

// interface dependancies

// attribute dependancies
#include "BoldAttributes.hpp"

#include <Classes.hpp>
#include <Controls.hpp>
#include <SysUtils.hpp>
#include "BoldDefs.hpp"
#include "BoldSubscription.hpp"
#include "BoldDeriver.hpp"
#include "BoldElements.hpp"
#include "BoldDomainElement.hpp"
#include "BoldSystemRT.hpp"
#include "BoldSystem.hpp"

void unregisterCode();

// forward declarations of all classes }

class TBusinessClassesRoot;
class TBusinessClassesRootList;
class TCar;
class TCarList;
class TPerson;
class TPersonList;

class DELPHICLASS TBusinessClassesRoot;
class TBusinessClassesRoot : public Boldsystem::TBoldObject
{
typedef Boldsystem::TBoldObject inherited;
private:
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TBusinessClassesRoot(Boldsystem::TBoldSystem* aBoldSystem) : Boldsystem::TBoldObject(aBoldSystem, true) { }
  #pragma option pop

};

class DELPHICLASS TCar;
class TCar : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAString* __fastcall _Get_M_color();
  String __fastcall _Getcolor();
  void __fastcall _Setcolor(String NewValue);
  TBAString* __fastcall _Get_M_maxSpeed();
  String __fastcall _GetmaxSpeed();
  void __fastcall _SetmaxSpeed(String NewValue);
  TBAString* __fastcall _Get_M_model();
  String __fastcall _Getmodel();
  void __fastcall _Setmodel(String NewValue);
  TPerson* __fastcall _Getdriver();
  TBoldObjectReference* __fastcall _Get_M_driver();
  void __fastcall _Setdriver(TPerson *value);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TCar(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  __property TBAString* M_color = {read=_Get_M_color};
  __property TBAString* M_maxSpeed = {read=_Get_M_maxSpeed};
  __property TBAString* M_model = {read=_Get_M_model};
  __property TBoldObjectReference* M_driver = {read=_Get_M_driver};
  __property String color = {read=_Getcolor, write=_Setcolor};
  __property String maxSpeed = {read=_GetmaxSpeed, write=_SetmaxSpeed};
  __property String model = {read=_Getmodel, write=_Setmodel};
  __property TPerson* driver = {read=_Getdriver, write=_Setdriver};
};

class DELPHICLASS TPerson;
class TPerson : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAString* __fastcall _Get_M_name();
  String __fastcall _Getname();
  void __fastcall _Setname(String NewValue);
  TBABoolean* __fastcall _Get_M_hasLicense();
  Boolean __fastcall _GethasLicense();
  void __fastcall _SethasLicense(Boolean NewValue);
  TCarList* __fastcall _Getcars();
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TPerson(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  __property TBAString* M_name = {read=_Get_M_name};
  __property TBABoolean* M_hasLicense = {read=_Get_M_hasLicense};
  __property TCarList* M_cars = {read=_Getcars};
  __property String name = {read=_Getname, write=_Setname};
  __property Boolean hasLicense = {read=_GethasLicense, write=_SethasLicense};
  __property TCarList* cars = {read=_Getcars};
};

class DELPHICLASS TBusinessClassesRootList;
class TBusinessClassesRootList : public TBoldObjectList
{
protected:
  TBusinessClassesRoot* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TBusinessClassesRoot *NewObject);
public:
  int __fastcall Includes(TBusinessClassesRoot *anObject);
  int __fastcall IndexOf(TBusinessClassesRoot *anObject);
  void __fastcall Add(TBusinessClassesRoot *NewObject);
  TBusinessClassesRoot* __fastcall AddNew();
  void __fastcall Insert(int index, TBusinessClassesRoot *NewObject);
  __property TBusinessClassesRoot* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TCarList;
class TCarList : public TBusinessClassesRootList
{
protected:
  TCar* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TCar *NewObject);
public:
  int __fastcall Includes(TCar *anObject);
  int __fastcall IndexOf(TCar *anObject);
  void __fastcall Add(TCar *NewObject);
  TCar* __fastcall AddNew();
  void __fastcall Insert(int index, TCar *NewObject);
  __property TCar* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TPersonList;
class TPersonList : public TBusinessClassesRootList
{
protected:
  TPerson* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TPerson *NewObject);
public:
  int __fastcall Includes(TPerson *anObject);
  int __fastcall IndexOf(TPerson *anObject);
  void __fastcall Add(TPerson *NewObject);
  TPerson* __fastcall AddNew();
  void __fastcall Insert(int index, TPerson *NewObject);
  __property TPerson* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};


char* GeneratedCodeCRC();

#endif
 