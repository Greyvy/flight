// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_InputEventType_Impl_
#include <snow/types/_Types/InputEventType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2ce8b607e49cf224_1210_toString,"snow.types._Types.InputEventType_Impl_","toString",0xa3bfcb1c,"snow.types._Types.InputEventType_Impl_.toString","snow/types/Types.hx",1210,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_2ce8b607e49cf224_1195_boot,"snow.types._Types.InputEventType_Impl_","boot",0x72e286a2,"snow.types._Types.InputEventType_Impl_.boot","snow/types/Types.hx",1195,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_2ce8b607e49cf224_1197_boot,"snow.types._Types.InputEventType_Impl_","boot",0x72e286a2,"snow.types._Types.InputEventType_Impl_.boot","snow/types/Types.hx",1197,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_2ce8b607e49cf224_1199_boot,"snow.types._Types.InputEventType_Impl_","boot",0x72e286a2,"snow.types._Types.InputEventType_Impl_.boot","snow/types/Types.hx",1199,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_2ce8b607e49cf224_1201_boot,"snow.types._Types.InputEventType_Impl_","boot",0x72e286a2,"snow.types._Types.InputEventType_Impl_.boot","snow/types/Types.hx",1201,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_2ce8b607e49cf224_1203_boot,"snow.types._Types.InputEventType_Impl_","boot",0x72e286a2,"snow.types._Types.InputEventType_Impl_.boot","snow/types/Types.hx",1203,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_2ce8b607e49cf224_1205_boot,"snow.types._Types.InputEventType_Impl_","boot",0x72e286a2,"snow.types._Types.InputEventType_Impl_.boot","snow/types/Types.hx",1205,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_2ce8b607e49cf224_1207_boot,"snow.types._Types.InputEventType_Impl_","boot",0x72e286a2,"snow.types._Types.InputEventType_Impl_.boot","snow/types/Types.hx",1207,0x72b41ce7)
namespace snow{
namespace types{
namespace _Types{

void InputEventType_Impl__obj::__construct() { }

Dynamic InputEventType_Impl__obj::__CreateEmpty() { return new InputEventType_Impl__obj; }

void *InputEventType_Impl__obj::_hx_vtable = 0;

Dynamic InputEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InputEventType_Impl__obj > _hx_result = new InputEventType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputEventType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09ff737a;
}

int InputEventType_Impl__obj::ie_unknown;

int InputEventType_Impl__obj::ie_key;

int InputEventType_Impl__obj::ie_text;

int InputEventType_Impl__obj::ie_mouse;

int InputEventType_Impl__obj::ie_touch;

int InputEventType_Impl__obj::ie_gamepad;

int InputEventType_Impl__obj::ie_joystick;

::String InputEventType_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_2ce8b607e49cf224_1210_toString)
HXDLIN(1210)		switch((int)(this1)){
            			case (int)0: {
HXLINE(1211)				return HX_("ie_unknown",e7,14,fd,32);
            			}
            			break;
            			case (int)1: {
HXLINE(1212)				return HX_("ie_key",7c,48,0e,62);
            			}
            			break;
            			case (int)2: {
HXLINE(1213)				return HX_("ie_text",30,0f,64,70);
            			}
            			break;
            			case (int)3: {
HXLINE(1214)				return HX_("ie_mouse",42,06,f5,e5);
            			}
            			break;
            			case (int)4: {
HXLINE(1215)				return HX_("ie_touch",dc,07,c3,ed);
            			}
            			break;
            			case (int)5: {
HXLINE(1216)				return HX_("ie_gamepad",fe,d1,07,db);
            			}
            			break;
            			case (int)6: {
HXLINE(1217)				return HX_("ie_joystick",bf,20,23,9c);
            			}
            			break;
            			default:{
HXLINE(1218)				return (HX_("",00,00,00,00) + this1);
            			}
            		}
HXLINE(1210)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputEventType_Impl__obj,toString,return )


InputEventType_Impl__obj::InputEventType_Impl__obj()
{
}

bool InputEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *InputEventType_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo InputEventType_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_unknown,HX_HCSTRING("ie_unknown","\xe7","\x14","\xfd","\x32")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_key,HX_HCSTRING("ie_key","\x7c","\x48","\x0e","\x62")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_text,HX_HCSTRING("ie_text","\x30","\x0f","\x64","\x70")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_mouse,HX_HCSTRING("ie_mouse","\x42","\x06","\xf5","\xe5")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_touch,HX_HCSTRING("ie_touch","\xdc","\x07","\xc3","\xed")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_gamepad,HX_HCSTRING("ie_gamepad","\xfe","\xd1","\x07","\xdb")},
	{hx::fsInt,(void *) &InputEventType_Impl__obj::ie_joystick,HX_HCSTRING("ie_joystick","\xbf","\x20","\x23","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void InputEventType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_unknown,"ie_unknown");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_key,"ie_key");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_text,"ie_text");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_mouse,"ie_mouse");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_touch,"ie_touch");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_gamepad,"ie_gamepad");
	HX_MARK_MEMBER_NAME(InputEventType_Impl__obj::ie_joystick,"ie_joystick");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InputEventType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_unknown,"ie_unknown");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_key,"ie_key");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_text,"ie_text");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_mouse,"ie_mouse");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_touch,"ie_touch");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_gamepad,"ie_gamepad");
	HX_VISIT_MEMBER_NAME(InputEventType_Impl__obj::ie_joystick,"ie_joystick");
};

#endif

hx::Class InputEventType_Impl__obj::__mClass;

static ::String InputEventType_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("ie_unknown","\xe7","\x14","\xfd","\x32"),
	HX_HCSTRING("ie_key","\x7c","\x48","\x0e","\x62"),
	HX_HCSTRING("ie_text","\x30","\x0f","\x64","\x70"),
	HX_HCSTRING("ie_mouse","\x42","\x06","\xf5","\xe5"),
	HX_HCSTRING("ie_touch","\xdc","\x07","\xc3","\xed"),
	HX_HCSTRING("ie_gamepad","\xfe","\xd1","\x07","\xdb"),
	HX_HCSTRING("ie_joystick","\xbf","\x20","\x23","\x9c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void InputEventType_Impl__obj::__register()
{
	hx::Object *dummy = new InputEventType_Impl__obj;
	InputEventType_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.InputEventType_Impl_","\xfe","\x73","\x4c","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InputEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InputEventType_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(InputEventType_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InputEventType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InputEventType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputEventType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputEventType_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InputEventType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2ce8b607e49cf224_1195_boot)
HXDLIN(1195)		ie_unknown = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ce8b607e49cf224_1197_boot)
HXDLIN(1197)		ie_key = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ce8b607e49cf224_1199_boot)
HXDLIN(1199)		ie_text = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ce8b607e49cf224_1201_boot)
HXDLIN(1201)		ie_mouse = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ce8b607e49cf224_1203_boot)
HXDLIN(1203)		ie_touch = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ce8b607e49cf224_1205_boot)
HXDLIN(1205)		ie_gamepad = (int)5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2ce8b607e49cf224_1207_boot)
HXDLIN(1207)		ie_joystick = (int)6;
            	}
}

} // end namespace snow
} // end namespace types
} // end namespace _Types