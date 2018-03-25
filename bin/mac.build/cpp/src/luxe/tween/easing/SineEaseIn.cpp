// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_SineEaseIn
#include <luxe/tween/easing/SineEaseIn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da48a852a4d1db47_45_new,"luxe.tween.easing.SineEaseIn","new",0x0dae721a,"luxe.tween.easing.SineEaseIn.new","luxe/tween/easing/Sine.hx",45,0xfb10166a)
HX_LOCAL_STACK_FRAME(_hx_pos_da48a852a4d1db47_54_calculate,"luxe.tween.easing.SineEaseIn","calculate",0xc88c3ea0,"luxe.tween.easing.SineEaseIn.calculate","luxe/tween/easing/Sine.hx",54,0xfb10166a)
HX_LOCAL_STACK_FRAME(_hx_pos_da48a852a4d1db47_61_ease,"luxe.tween.easing.SineEaseIn","ease",0xe4ff6cf4,"luxe.tween.easing.SineEaseIn.ease","luxe/tween/easing/Sine.hx",61,0xfb10166a)
namespace luxe{
namespace tween{
namespace easing{

void SineEaseIn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_da48a852a4d1db47_45_new)
            	}

Dynamic SineEaseIn_obj::__CreateEmpty() { return new SineEaseIn_obj; }

void *SineEaseIn_obj::_hx_vtable = 0;

Dynamic SineEaseIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SineEaseIn_obj > _hx_result = new SineEaseIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SineEaseIn_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x141bcfa0;
}

static ::luxe::tween::easing::IEasing_obj _hx_luxe_tween_easing_SineEaseIn__hx_luxe_tween_easing_IEasing= {
	( Float (hx::Object::*)(Float))&::luxe::tween::easing::SineEaseIn_obj::calculate,
	( Float (hx::Object::*)(Float,Float,Float,Float))&::luxe::tween::easing::SineEaseIn_obj::ease,
};

void *SineEaseIn_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd1e8cbf4: return &_hx_luxe_tween_easing_SineEaseIn__hx_luxe_tween_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float SineEaseIn_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_da48a852a4d1db47_54_calculate)
HXDLIN(  54)		return ((int)1 - ::Math_obj::cos((k * ((Float)::Math_obj::PI / (Float)(int)2))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseIn_obj,calculate,return )

Float SineEaseIn_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_da48a852a4d1db47_61_ease)
HXDLIN(  61)		return (((-(c) * ::Math_obj::cos((((Float)t / (Float)d) * ((Float)::Math_obj::PI / (Float)(int)2)))) + c) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseIn_obj,ease,return )


hx::ObjectPtr< SineEaseIn_obj > SineEaseIn_obj::__new() {
	hx::ObjectPtr< SineEaseIn_obj > __this = new SineEaseIn_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SineEaseIn_obj > SineEaseIn_obj::__alloc(hx::Ctx *_hx_ctx) {
	SineEaseIn_obj *__this = (SineEaseIn_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SineEaseIn_obj), false, "luxe.tween.easing.SineEaseIn"));
	*(void **)__this = SineEaseIn_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SineEaseIn_obj::SineEaseIn_obj()
{
}

hx::Val SineEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SineEaseIn_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SineEaseIn_obj_sStaticStorageInfo = 0;
#endif

static ::String SineEaseIn_obj_sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void SineEaseIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SineEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SineEaseIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class SineEaseIn_obj::__mClass;

void SineEaseIn_obj::__register()
{
	hx::Object *dummy = new SineEaseIn_obj;
	SineEaseIn_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.easing.SineEaseIn","\x28","\x1d","\x99","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SineEaseIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SineEaseIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SineEaseIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SineEaseIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SineEaseIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SineEaseIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween
} // end namespace easing