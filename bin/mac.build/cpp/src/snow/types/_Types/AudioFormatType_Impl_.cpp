// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_AudioFormatType_Impl_
#include <snow/types/_Types/AudioFormatType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8f20a6edfd528ad8_237_toString,"snow.types._Types.AudioFormatType_Impl_","toString",0x037be267,"snow.types._Types.AudioFormatType_Impl_.toString","snow/types/Types.hx",237,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_8f20a6edfd528ad8_226_boot,"snow.types._Types.AudioFormatType_Impl_","boot",0xc8385c6d,"snow.types._Types.AudioFormatType_Impl_.boot","snow/types/Types.hx",226,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_8f20a6edfd528ad8_228_boot,"snow.types._Types.AudioFormatType_Impl_","boot",0xc8385c6d,"snow.types._Types.AudioFormatType_Impl_.boot","snow/types/Types.hx",228,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_8f20a6edfd528ad8_230_boot,"snow.types._Types.AudioFormatType_Impl_","boot",0xc8385c6d,"snow.types._Types.AudioFormatType_Impl_.boot","snow/types/Types.hx",230,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_8f20a6edfd528ad8_232_boot,"snow.types._Types.AudioFormatType_Impl_","boot",0xc8385c6d,"snow.types._Types.AudioFormatType_Impl_.boot","snow/types/Types.hx",232,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_8f20a6edfd528ad8_234_boot,"snow.types._Types.AudioFormatType_Impl_","boot",0xc8385c6d,"snow.types._Types.AudioFormatType_Impl_.boot","snow/types/Types.hx",234,0x72b41ce7)
namespace snow{
namespace types{
namespace _Types{

void AudioFormatType_Impl__obj::__construct() { }

Dynamic AudioFormatType_Impl__obj::__CreateEmpty() { return new AudioFormatType_Impl__obj; }

void *AudioFormatType_Impl__obj::_hx_vtable = 0;

Dynamic AudioFormatType_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioFormatType_Impl__obj > _hx_result = new AudioFormatType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AudioFormatType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x444af47b;
}

 ::Dynamic AudioFormatType_Impl__obj::af_unknown;

 ::Dynamic AudioFormatType_Impl__obj::af_custom;

 ::Dynamic AudioFormatType_Impl__obj::af_ogg;

 ::Dynamic AudioFormatType_Impl__obj::af_wav;

 ::Dynamic AudioFormatType_Impl__obj::af_pcm;

::String AudioFormatType_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8f20a6edfd528ad8_237_toString)
HXDLIN( 237)		if (hx::IsNull( this1 )) {
HXLINE( 243)			return (HX_("",00,00,00,00) + this1);
            		}
            		else {
HXDLIN( 237)			 ::Dynamic _hx_switch_0 = this1;
            			if (  (_hx_switch_0==(int)0) ){
HXLINE( 238)				return HX_("af_unknown",f0,be,9a,03);
HXDLIN( 238)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==(int)1) ){
HXLINE( 239)				return HX_("af_custom",0b,db,9b,65);
HXDLIN( 239)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==(int)2) ){
HXLINE( 240)				return HX_("af_ogg",b5,04,9d,c2);
HXDLIN( 240)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==(int)3) ){
HXLINE( 241)				return HX_("af_wav",92,11,a3,c2);
HXDLIN( 241)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==(int)4) ){
HXLINE( 242)				return HX_("af_pcm",80,c3,9d,c2);
HXDLIN( 242)				goto _hx_goto_0;
            			}
            			/* default */{
HXLINE( 243)				return (HX_("",00,00,00,00) + this1);
            			}
            			_hx_goto_0:;
            		}
HXLINE( 237)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioFormatType_Impl__obj,toString,return )


AudioFormatType_Impl__obj::AudioFormatType_Impl__obj()
{
}

bool AudioFormatType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AudioFormatType_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo AudioFormatType_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_unknown,HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_custom,HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_ogg,HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_wav,HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AudioFormatType_Impl__obj::af_pcm,HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void AudioFormatType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_unknown,"af_unknown");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_custom,"af_custom");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_ogg,"af_ogg");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_wav,"af_wav");
	HX_MARK_MEMBER_NAME(AudioFormatType_Impl__obj::af_pcm,"af_pcm");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioFormatType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_unknown,"af_unknown");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_custom,"af_custom");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_ogg,"af_ogg");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_wav,"af_wav");
	HX_VISIT_MEMBER_NAME(AudioFormatType_Impl__obj::af_pcm,"af_pcm");
};

#endif

hx::Class AudioFormatType_Impl__obj::__mClass;

static ::String AudioFormatType_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("af_unknown","\xf0","\xbe","\x9a","\x03"),
	HX_HCSTRING("af_custom","\x0b","\xdb","\x9b","\x65"),
	HX_HCSTRING("af_ogg","\xb5","\x04","\x9d","\xc2"),
	HX_HCSTRING("af_wav","\x92","\x11","\xa3","\xc2"),
	HX_HCSTRING("af_pcm","\x80","\xc3","\x9d","\xc2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void AudioFormatType_Impl__obj::__register()
{
	hx::Object *dummy = new AudioFormatType_Impl__obj;
	AudioFormatType_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types._Types.AudioFormatType_Impl_","\x13","\x72","\xbc","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioFormatType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AudioFormatType_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AudioFormatType_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioFormatType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioFormatType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioFormatType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioFormatType_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AudioFormatType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8f20a6edfd528ad8_226_boot)
HXDLIN( 226)		af_unknown = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8f20a6edfd528ad8_228_boot)
HXDLIN( 228)		af_custom = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8f20a6edfd528ad8_230_boot)
HXDLIN( 230)		af_ogg = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8f20a6edfd528ad8_232_boot)
HXDLIN( 232)		af_wav = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8f20a6edfd528ad8_234_boot)
HXDLIN( 234)		af_pcm = (int)4;
            	}
}

} // end namespace snow
} // end namespace types
} // end namespace _Types