// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_LinearEaseNone
#include <luxe/tween/easing/LinearEaseNone.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1e3c24c31ea6f2f8_30_new,"luxe.tween.easing.LinearEaseNone","new",0x87b736c5,"luxe.tween.easing.LinearEaseNone.new","luxe/tween/easing/Linear.hx",30,0x8f4c1212)
HX_LOCAL_STACK_FRAME(_hx_pos_1e3c24c31ea6f2f8_39_calculate,"luxe.tween.easing.LinearEaseNone","calculate",0xae56558b,"luxe.tween.easing.LinearEaseNone.calculate","luxe/tween/easing/Linear.hx",39,0x8f4c1212)
HX_LOCAL_STACK_FRAME(_hx_pos_1e3c24c31ea6f2f8_46_ease,"luxe.tween.easing.LinearEaseNone","ease",0x32a2bde9,"luxe.tween.easing.LinearEaseNone.ease","luxe/tween/easing/Linear.hx",46,0x8f4c1212)
namespace luxe{
namespace tween{
namespace easing{

void LinearEaseNone_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1e3c24c31ea6f2f8_30_new)
            	}

Dynamic LinearEaseNone_obj::__CreateEmpty() { return new LinearEaseNone_obj; }

void *LinearEaseNone_obj::_hx_vtable = 0;

Dynamic LinearEaseNone_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LinearEaseNone_obj > _hx_result = new LinearEaseNone_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LinearEaseNone_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a1abecb;
}

static ::luxe::tween::easing::IEasing_obj _hx_luxe_tween_easing_LinearEaseNone__hx_luxe_tween_easing_IEasing= {
	( Float (hx::Object::*)(Float))&::luxe::tween::easing::LinearEaseNone_obj::calculate,
	( Float (hx::Object::*)(Float,Float,Float,Float))&::luxe::tween::easing::LinearEaseNone_obj::ease,
};

void *LinearEaseNone_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd1e8cbf4: return &_hx_luxe_tween_easing_LinearEaseNone__hx_luxe_tween_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float LinearEaseNone_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_1e3c24c31ea6f2f8_39_calculate)
HXDLIN(  39)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LinearEaseNone_obj,calculate,return )

Float LinearEaseNone_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_1e3c24c31ea6f2f8_46_ease)
HXDLIN(  46)		return (((Float)(c * t) / (Float)d) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(LinearEaseNone_obj,ease,return )


hx::ObjectPtr< LinearEaseNone_obj > LinearEaseNone_obj::__new() {
	hx::ObjectPtr< LinearEaseNone_obj > __this = new LinearEaseNone_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< LinearEaseNone_obj > LinearEaseNone_obj::__alloc(hx::Ctx *_hx_ctx) {
	LinearEaseNone_obj *__this = (LinearEaseNone_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LinearEaseNone_obj), false, "luxe.tween.easing.LinearEaseNone"));
	*(void **)__this = LinearEaseNone_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LinearEaseNone_obj::LinearEaseNone_obj()
{
}

hx::Val LinearEaseNone_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *LinearEaseNone_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LinearEaseNone_obj_sStaticStorageInfo = 0;
#endif

static ::String LinearEaseNone_obj_sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void LinearEaseNone_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearEaseNone_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LinearEaseNone_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearEaseNone_obj::__mClass,"__mClass");
};

#endif

hx::Class LinearEaseNone_obj::__mClass;

void LinearEaseNone_obj::__register()
{
	hx::Object *dummy = new LinearEaseNone_obj;
	LinearEaseNone_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.easing.LinearEaseNone","\x53","\x70","\x41","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LinearEaseNone_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LinearEaseNone_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LinearEaseNone_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LinearEaseNone_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinearEaseNone_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinearEaseNone_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween
} // end namespace easing
