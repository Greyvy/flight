// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_Sine
#include <luxe/tween/easing/Sine.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_SineEaseIn
#include <luxe/tween/easing/SineEaseIn.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_SineEaseInOut
#include <luxe/tween/easing/SineEaseInOut.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_SineEaseOut
#include <luxe/tween/easing/SineEaseOut.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a1bb0c37af0c858e_20_get_easeIn,"luxe.tween.easing.Sine","get_easeIn",0x03d8f735,"luxe.tween.easing.Sine.get_easeIn","luxe/tween/easing/Sine.hx",20,0xfb10166a)
HX_LOCAL_STACK_FRAME(_hx_pos_a1bb0c37af0c858e_27_get_easeInOut,"luxe.tween.easing.Sine","get_easeInOut",0x5a201059,"luxe.tween.easing.Sine.get_easeInOut","luxe/tween/easing/Sine.hx",27,0xfb10166a)
HX_LOCAL_STACK_FRAME(_hx_pos_a1bb0c37af0c858e_34_get_easeOut,"luxe.tween.easing.Sine","get_easeOut",0x5a03eb3e,"luxe.tween.easing.Sine.get_easeOut","luxe/tween/easing/Sine.hx",34,0xfb10166a)
namespace luxe{
namespace tween{
namespace easing{

void Sine_obj::__construct() { }

Dynamic Sine_obj::__CreateEmpty() { return new Sine_obj; }

void *Sine_obj::_hx_vtable = 0;

Dynamic Sine_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sine_obj > _hx_result = new Sine_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x41d04b69;
}

::Dynamic Sine_obj::get_easeIn(){
            	HX_GC_STACKFRAME(&_hx_pos_a1bb0c37af0c858e_20_get_easeIn)
HXDLIN(  20)		return  ::luxe::tween::easing::SineEaseIn_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeIn,return )

::Dynamic Sine_obj::get_easeInOut(){
            	HX_GC_STACKFRAME(&_hx_pos_a1bb0c37af0c858e_27_get_easeInOut)
HXDLIN(  27)		return  ::luxe::tween::easing::SineEaseInOut_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeInOut,return )

::Dynamic Sine_obj::get_easeOut(){
            	HX_GC_STACKFRAME(&_hx_pos_a1bb0c37af0c858e_34_get_easeOut)
HXDLIN(  34)		return  ::luxe::tween::easing::SineEaseOut_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeOut,return )


Sine_obj::Sine_obj()
{
}

bool Sine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_easeIn() ); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_easeOut() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_easeInOut() ); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { outValue = get_easeIn_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { outValue = get_easeOut_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { outValue = get_easeInOut_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Sine_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sine_obj_sStaticStorageInfo = 0;
#endif

static void Sine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sine_obj::__mClass,"__mClass");
};

#endif

hx::Class Sine_obj::__mClass;

static ::String Sine_obj_sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null())
};

void Sine_obj::__register()
{
	hx::Object *dummy = new Sine_obj;
	Sine_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.easing.Sine","\xd5","\x77","\xfb","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sine_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sine_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Sine_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sine_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween
} // end namespace easing
