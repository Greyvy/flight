// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AudioEvent_Impl_
#include <snow/types/_Types/AudioEvent_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8618680b6a3de792_261_toString,"snow.types._Types.AudioEvent_Impl_","toString",0xb05b9982,"snow.types._Types.AudioEvent_Impl_.toString","snow/types/Types.hx",261,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_8618680b6a3de792_254_boot,"snow.types._Types.AudioEvent_Impl_","boot",0x9ad1aa08,"snow.types._Types.AudioEvent_Impl_.boot","snow/types/Types.hx",254,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_8618680b6a3de792_256_boot,"snow.types._Types.AudioEvent_Impl_","boot",0x9ad1aa08,"snow.types._Types.AudioEvent_Impl_.boot","snow/types/Types.hx",256,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_8618680b6a3de792_258_boot,"snow.types._Types.AudioEvent_Impl_","boot",0x9ad1aa08,"snow.types._Types.AudioEvent_Impl_.boot","snow/types/Types.hx",258,0x72b41ce7)
namespace snow{
namespace types{
namespace _Types{

void AudioEvent_Impl__obj::__construct() { }

Dynamic AudioEvent_Impl__obj::__CreateEmpty() { return new AudioEvent_Impl__obj; }

void *AudioEvent_Impl__obj::_hx_vtable = 0;

Dynamic AudioEvent_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioEvent_Impl__obj > _hx_result = new AudioEvent_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AudioEvent_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19229bd4;
}

int AudioEvent_Impl__obj::ae_end;

int AudioEvent_Impl__obj::ae_destroyed;

int AudioEvent_Impl__obj::ae_destroyed_source;

::String AudioEvent_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_8618680b6a3de792_261_toString)
HXDLIN( 261)		switch((int)(this1)){
            			case (int)0: {
HXLINE( 262)				return HX_("ae_end",c0,df,2e,2f);
            			}
            			break;
            			case (int)1: {
HXLINE( 263)				return HX_("ae_destroyed",7e,8d,12,11);
            			}
            			break;
            			case (int)2: {
HXLINE( 264)				return HX_("ae_destroyed_source",bc,00,86,a5);
            			}
            			break;
            			default:{
HXLINE( 265)				return (HX_("",00,00,00,00) + this1);
            			}
            		}
HXLINE( 261)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioEvent_Impl__obj,toString,return )


AudioEvent_Impl__obj::AudioEvent_Impl__obj()
{
}

bool AudioEvent_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AudioEvent_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo AudioEvent_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &AudioEvent_Impl__obj::ae_end,HX_HCSTRING("ae_end","\xc0","\xdf","\x2e","\x2f")},
	{hx::fsInt,(void *) &AudioEvent_Impl__obj::ae_destroyed,HX_HCSTRING("ae_destroyed","\x7e","\x8d","\x12","\x11")},
	{hx::fsInt,(void *) &AudioEvent_Impl__obj::ae_destroyed_source,HX_HCSTRING("ae_destroyed_source","\xbc","\x00","\x86","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void AudioEvent_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioEvent_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioEvent_Impl__obj::ae_end,"ae_end");
	HX_MARK_MEMBER_NAME(AudioEvent_Impl__obj::ae_destroyed,"ae_destroyed");
	HX_MARK_MEMBER_NAME(AudioEvent_Impl__obj::ae_destroyed_source,"ae_destroyed_source");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioEvent_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioEvent_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioEvent_Impl__obj::ae_end,"ae_end");
	HX_VISIT_MEMBER_NAME(AudioEvent_Impl__obj::ae_destroyed,"ae_destroyed");
	HX_VISIT_MEMBER_NAME(AudioEvent_Impl__obj::ae_destroyed_source,"ae_destroyed_source");
};

#endif

hx::Class AudioEvent_Impl__obj::__mClass;

static ::String AudioEvent_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("ae_end","\xc0","\xdf","\x2e","\x2f"),
	HX_HCSTRING("ae_destroyed","\x7e","\x8d","\x12","\x11"),
	HX_HCSTRING("ae_destroyed_source","\xbc","\x00","\x86","\xa5"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void AudioEvent_Impl__obj::__register()
{
	hx::Object *dummy = new AudioEvent_Impl__obj;
	AudioEvent_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.AudioEvent_Impl_","\x58","\x0a","\x3c","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioEvent_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AudioEvent_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AudioEvent_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioEvent_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioEvent_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioEvent_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioEvent_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AudioEvent_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8618680b6a3de792_254_boot)
HXDLIN( 254)		ae_end = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8618680b6a3de792_256_boot)
HXDLIN( 256)		ae_destroyed = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8618680b6a3de792_258_boot)
HXDLIN( 258)		ae_destroyed_source = (int)2;
            	}
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
