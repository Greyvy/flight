// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_TouchEventType_Impl_
#include <snow/types/_Types/TouchEventType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a6ae9384d11db0b0_988_toString,"snow.types._Types.TouchEventType_Impl_","toString",0x8b12d5d1,"snow.types._Types.TouchEventType_Impl_.toString","snow/types/Types.hx",988,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_a6ae9384d11db0b0_979_boot,"snow.types._Types.TouchEventType_Impl_","boot",0xe1e2d2d7,"snow.types._Types.TouchEventType_Impl_.boot","snow/types/Types.hx",979,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_a6ae9384d11db0b0_981_boot,"snow.types._Types.TouchEventType_Impl_","boot",0xe1e2d2d7,"snow.types._Types.TouchEventType_Impl_.boot","snow/types/Types.hx",981,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_a6ae9384d11db0b0_983_boot,"snow.types._Types.TouchEventType_Impl_","boot",0xe1e2d2d7,"snow.types._Types.TouchEventType_Impl_.boot","snow/types/Types.hx",983,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_a6ae9384d11db0b0_985_boot,"snow.types._Types.TouchEventType_Impl_","boot",0xe1e2d2d7,"snow.types._Types.TouchEventType_Impl_.boot","snow/types/Types.hx",985,0x72b41ce7)
namespace snow{
namespace types{
namespace _Types{

void TouchEventType_Impl__obj::__construct() { }

Dynamic TouchEventType_Impl__obj::__CreateEmpty() { return new TouchEventType_Impl__obj; }

void *TouchEventType_Impl__obj::_hx_vtable = 0;

Dynamic TouchEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TouchEventType_Impl__obj > _hx_result = new TouchEventType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TouchEventType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x45ec9365;
}

int TouchEventType_Impl__obj::te_unknown;

int TouchEventType_Impl__obj::te_move;

int TouchEventType_Impl__obj::te_down;

int TouchEventType_Impl__obj::te_up;

::String TouchEventType_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_a6ae9384d11db0b0_988_toString)
HXDLIN( 988)		switch((int)(this1)){
            			case (int)0: {
HXLINE( 989)				return HX_("te_unknown",7c,3b,30,76);
            			}
            			break;
            			case (int)1: {
HXLINE( 990)				return HX_("te_move",df,3f,37,35);
            			}
            			break;
            			case (int)2: {
HXLINE( 991)				return HX_("te_down",30,55,44,2f);
            			}
            			break;
            			case (int)3: {
HXLINE( 992)				return HX_("te_up",a9,53,86,0d);
            			}
            			break;
            			default:{
HXLINE( 993)				return (HX_("",00,00,00,00) + this1);
            			}
            		}
HXLINE( 988)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TouchEventType_Impl__obj,toString,return )


TouchEventType_Impl__obj::TouchEventType_Impl__obj()
{
}

bool TouchEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TouchEventType_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo TouchEventType_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TouchEventType_Impl__obj::te_unknown,HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76")},
	{hx::fsInt,(void *) &TouchEventType_Impl__obj::te_move,HX_HCSTRING("te_move","\xdf","\x3f","\x37","\x35")},
	{hx::fsInt,(void *) &TouchEventType_Impl__obj::te_down,HX_HCSTRING("te_down","\x30","\x55","\x44","\x2f")},
	{hx::fsInt,(void *) &TouchEventType_Impl__obj::te_up,HX_HCSTRING("te_up","\xa9","\x53","\x86","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void TouchEventType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::te_unknown,"te_unknown");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::te_move,"te_move");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::te_down,"te_down");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::te_up,"te_up");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TouchEventType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::te_unknown,"te_unknown");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::te_move,"te_move");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::te_down,"te_down");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::te_up,"te_up");
};

#endif

hx::Class TouchEventType_Impl__obj::__mClass;

static ::String TouchEventType_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("te_unknown","\x7c","\x3b","\x30","\x76"),
	HX_HCSTRING("te_move","\xdf","\x3f","\x37","\x35"),
	HX_HCSTRING("te_down","\x30","\x55","\x44","\x2f"),
	HX_HCSTRING("te_up","\xa9","\x53","\x86","\x0d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void TouchEventType_Impl__obj::__register()
{
	hx::Object *dummy = new TouchEventType_Impl__obj;
	TouchEventType_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.TouchEventType_Impl_","\xe9","\x93","\x39","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TouchEventType_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TouchEventType_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TouchEventType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TouchEventType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TouchEventType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TouchEventType_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TouchEventType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a6ae9384d11db0b0_979_boot)
HXDLIN( 979)		te_unknown = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a6ae9384d11db0b0_981_boot)
HXDLIN( 981)		te_move = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a6ae9384d11db0b0_983_boot)
HXDLIN( 983)		te_down = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a6ae9384d11db0b0_985_boot)
HXDLIN( 985)		te_up = (int)3;
            	}
}

} // end namespace snow
} // end namespace types
} // end namespace _Types