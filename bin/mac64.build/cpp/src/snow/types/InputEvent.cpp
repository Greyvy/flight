// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_types_GamepadEvent
#include <snow/types/GamepadEvent.h>
#endif
#ifndef INCLUDED_snow_types_InputEvent
#include <snow/types/InputEvent.h>
#endif
#ifndef INCLUDED_snow_types_KeyEvent
#include <snow/types/KeyEvent.h>
#endif
#ifndef INCLUDED_snow_types_MouseEvent
#include <snow/types/MouseEvent.h>
#endif
#ifndef INCLUDED_snow_types_TextEvent
#include <snow/types/TextEvent.h>
#endif
#ifndef INCLUDED_snow_types_TouchEvent
#include <snow/types/TouchEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ea9dcc6afa5a3bc_779_new,"snow.types.InputEvent","new",0xde34e8e2,"snow.types.InputEvent.new","snow/types/Types.hx",779,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea9dcc6afa5a3bc_800_reset,"snow.types.InputEvent","reset",0xd18206d1,"snow.types.InputEvent.reset","snow/types/Types.hx",800,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea9dcc6afa5a3bc_813_set_key,"snow.types.InputEvent","set_key",0x742c64c4,"snow.types.InputEvent.set_key","snow/types/Types.hx",813,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea9dcc6afa5a3bc_818_set_text,"snow.types.InputEvent","set_text",0x389eb1e8,"snow.types.InputEvent.set_text","snow/types/Types.hx",818,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea9dcc6afa5a3bc_823_set_mouse,"snow.types.InputEvent","set_mouse",0x5108c48a,"snow.types.InputEvent.set_mouse","snow/types/Types.hx",823,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea9dcc6afa5a3bc_828_set_touch,"snow.types.InputEvent","set_touch",0x58d6c624,"snow.types.InputEvent.set_touch","snow/types/Types.hx",828,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea9dcc6afa5a3bc_833_set_gamepad,"snow.types.InputEvent","set_gamepad",0x013db246,"snow.types.InputEvent.set_gamepad","snow/types/Types.hx",833,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_0ea9dcc6afa5a3bc_838_toString,"snow.types.InputEvent","toString",0xf5fba0ea,"snow.types.InputEvent.toString","snow/types/Types.hx",838,0x72b41ce7)
namespace snow{
namespace types{

void InputEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ea9dcc6afa5a3bc_779_new)
HXLINE( 786)		this->window_id = (int)-1;
HXLINE( 784)		this->timestamp = ((Float)0.0);
            	}

Dynamic InputEvent_obj::__CreateEmpty() { return new InputEvent_obj; }

void *InputEvent_obj::_hx_vtable = 0;

Dynamic InputEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InputEvent_obj > _hx_result = new InputEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InputEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32cb4926;
}

void InputEvent_obj::reset(int _type,int _window_id,Float _timestamp){
            	HX_STACKFRAME(&_hx_pos_0ea9dcc6afa5a3bc_800_reset)
HXLINE( 802)		this->type = _type;
HXLINE( 803)		this->key = null();
HXLINE( 804)		this->text = null();
HXLINE( 805)		this->mouse = null();
HXLINE( 806)		this->touch = null();
HXLINE( 807)		this->gamepad = null();
HXLINE( 808)		this->window_id = _window_id;
HXLINE( 809)		this->timestamp = _timestamp;
            	}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,reset,(void))

void InputEvent_obj::set_key( ::snow::types::KeyEvent _event,int _window_id,Float _timestamp){
            	HX_STACKFRAME(&_hx_pos_0ea9dcc6afa5a3bc_813_set_key)
HXLINE( 814)		{
HXLINE( 814)			this->type = (int)1;
HXDLIN( 814)			this->key = null();
HXDLIN( 814)			this->text = null();
HXDLIN( 814)			this->mouse = null();
HXDLIN( 814)			this->touch = null();
HXDLIN( 814)			this->gamepad = null();
HXDLIN( 814)			this->window_id = _window_id;
HXDLIN( 814)			this->timestamp = _timestamp;
            		}
HXLINE( 815)		this->key = _event;
            	}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_key,(void))

void InputEvent_obj::set_text( ::snow::types::TextEvent _event,int _window_id,Float _timestamp){
            	HX_STACKFRAME(&_hx_pos_0ea9dcc6afa5a3bc_818_set_text)
HXLINE( 819)		{
HXLINE( 819)			this->type = (int)2;
HXDLIN( 819)			this->key = null();
HXDLIN( 819)			this->text = null();
HXDLIN( 819)			this->mouse = null();
HXDLIN( 819)			this->touch = null();
HXDLIN( 819)			this->gamepad = null();
HXDLIN( 819)			this->window_id = _window_id;
HXDLIN( 819)			this->timestamp = _timestamp;
            		}
HXLINE( 820)		this->text = _event;
            	}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_text,(void))

void InputEvent_obj::set_mouse( ::snow::types::MouseEvent _event,int _window_id,Float _timestamp){
            	HX_STACKFRAME(&_hx_pos_0ea9dcc6afa5a3bc_823_set_mouse)
HXLINE( 824)		{
HXLINE( 824)			this->type = (int)3;
HXDLIN( 824)			this->key = null();
HXDLIN( 824)			this->text = null();
HXDLIN( 824)			this->mouse = null();
HXDLIN( 824)			this->touch = null();
HXDLIN( 824)			this->gamepad = null();
HXDLIN( 824)			this->window_id = _window_id;
HXDLIN( 824)			this->timestamp = _timestamp;
            		}
HXLINE( 825)		this->mouse = _event;
            	}


HX_DEFINE_DYNAMIC_FUNC3(InputEvent_obj,set_mouse,(void))

void InputEvent_obj::set_touch( ::snow::types::TouchEvent _event,Float _timestamp){
            	HX_STACKFRAME(&_hx_pos_0ea9dcc6afa5a3bc_828_set_touch)
HXLINE( 829)		{
HXLINE( 829)			this->type = (int)4;
HXDLIN( 829)			this->key = null();
HXDLIN( 829)			this->text = null();
HXDLIN( 829)			this->mouse = null();
HXDLIN( 829)			this->touch = null();
HXDLIN( 829)			this->gamepad = null();
HXDLIN( 829)			this->window_id = (int)0;
HXDLIN( 829)			this->timestamp = _timestamp;
            		}
HXLINE( 830)		this->touch = _event;
            	}


HX_DEFINE_DYNAMIC_FUNC2(InputEvent_obj,set_touch,(void))

void InputEvent_obj::set_gamepad( ::snow::types::GamepadEvent _event,Float _timestamp){
            	HX_STACKFRAME(&_hx_pos_0ea9dcc6afa5a3bc_833_set_gamepad)
HXLINE( 834)		{
HXLINE( 834)			this->type = (int)5;
HXDLIN( 834)			this->key = null();
HXDLIN( 834)			this->text = null();
HXDLIN( 834)			this->mouse = null();
HXDLIN( 834)			this->touch = null();
HXDLIN( 834)			this->gamepad = null();
HXDLIN( 834)			this->window_id = (int)0;
HXDLIN( 834)			this->timestamp = _timestamp;
            		}
HXLINE( 835)		this->gamepad = _event;
            	}


HX_DEFINE_DYNAMIC_FUNC2(InputEvent_obj,set_gamepad,(void))

::String InputEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_0ea9dcc6afa5a3bc_838_toString)
HXLINE( 839)		int this1 = this->type;
HXDLIN( 839)		::String _s;
HXDLIN( 839)		switch((int)(this1)){
            			case (int)0: {
HXLINE( 839)				_s = HX_("ie_unknown",e7,14,fd,32);
            			}
            			break;
            			case (int)1: {
HXLINE( 839)				_s = HX_("ie_key",7c,48,0e,62);
            			}
            			break;
            			case (int)2: {
HXLINE( 839)				_s = HX_("ie_text",30,0f,64,70);
            			}
            			break;
            			case (int)3: {
HXLINE( 839)				_s = HX_("ie_mouse",42,06,f5,e5);
            			}
            			break;
            			case (int)4: {
HXLINE( 839)				_s = HX_("ie_touch",dc,07,c3,ed);
            			}
            			break;
            			case (int)5: {
HXLINE( 839)				_s = HX_("ie_gamepad",fe,d1,07,db);
            			}
            			break;
            			case (int)6: {
HXLINE( 839)				_s = HX_("ie_joystick",bf,20,23,9c);
            			}
            			break;
            			default:{
HXLINE( 839)				_s = (HX_("",00,00,00,00) + this1);
            			}
            		}
HXDLIN( 839)		::String _s1 = ((HX_("{ \"InputEvent\":true, \"type\":\"",55,99,4a,01) + _s) + HX_("\"",22,00,00,00));
HXLINE( 841)		if (hx::IsNotNull( this->key )) {
HXLINE( 841)			_s1 = (_s1 + (HX_(", \"key\":",49,47,7b,7e) + ::Std_obj::string(this->key)));
            		}
HXLINE( 842)		if (hx::IsNotNull( this->text )) {
HXLINE( 842)			_s1 = (_s1 + (HX_(", \"text\":",73,45,2e,c6) + ::Std_obj::string(this->text)));
            		}
HXLINE( 843)		if (hx::IsNotNull( this->mouse )) {
HXLINE( 843)			_s1 = (_s1 + (HX_(", \"mouse\":",cf,a9,1f,c4) + ::Std_obj::string(this->mouse)));
            		}
HXLINE( 844)		if (hx::IsNotNull( this->touch )) {
HXLINE( 844)			_s1 = (_s1 + (HX_(", \"touch\":",e9,c5,a4,dc) + ::Std_obj::string(this->touch)));
            		}
HXLINE( 845)		if (hx::IsNotNull( this->gamepad )) {
HXLINE( 845)			_s1 = (_s1 + (HX_(", \"gamepad\":",cb,53,d0,51) + ::Std_obj::string(this->gamepad)));
            		}
HXLINE( 847)		_s1 = (_s1 + ((((HX_("\"window\":",ea,7f,dd,81) + this->window_id) + HX_(", \"time\":",d3,dc,77,0c)) + this->timestamp) + HX_(" }",5d,1c,00,00)));
HXLINE( 849)		return _s1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputEvent_obj,toString,return )


hx::ObjectPtr< InputEvent_obj > InputEvent_obj::__new() {
	hx::ObjectPtr< InputEvent_obj > __this = new InputEvent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< InputEvent_obj > InputEvent_obj::__alloc(hx::Ctx *_hx_ctx) {
	InputEvent_obj *__this = (InputEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InputEvent_obj), true, "snow.types.InputEvent"));
	*(void **)__this = InputEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InputEvent_obj::InputEvent_obj()
{
}

void InputEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(window_id,"window_id");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(mouse,"mouse");
	HX_MARK_MEMBER_NAME(touch,"touch");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void InputEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(window_id,"window_id");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(mouse,"mouse");
	HX_VISIT_MEMBER_NAME(touch,"touch");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

hx::Val InputEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return hx::Val( key ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { return hx::Val( mouse ); }
		if (HX_FIELD_EQ(inName,"touch") ) { return hx::Val( touch ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return hx::Val( gamepad ); }
		if (HX_FIELD_EQ(inName,"set_key") ) { return hx::Val( set_key_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return hx::Val( timestamp ); }
		if (HX_FIELD_EQ(inName,"window_id") ) { return hx::Val( window_id ); }
		if (HX_FIELD_EQ(inName,"set_mouse") ) { return hx::Val( set_mouse_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_touch") ) { return hx::Val( set_touch_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_gamepad") ) { return hx::Val( set_gamepad_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InputEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast<  ::snow::types::KeyEvent >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::snow::types::TextEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast<  ::snow::types::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touch") ) { touch=inValue.Cast<  ::snow::types::TouchEvent >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::snow::types::GamepadEvent >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_id") ) { window_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));
	outFields->push(HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"));
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo InputEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(InputEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(InputEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(InputEvent_obj,window_id),HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96")},
	{hx::fsObject /*::snow::types::KeyEvent*/ ,(int)offsetof(InputEvent_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsObject /*::snow::types::TextEvent*/ ,(int)offsetof(InputEvent_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::snow::types::MouseEvent*/ ,(int)offsetof(InputEvent_obj,mouse),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsObject /*::snow::types::TouchEvent*/ ,(int)offsetof(InputEvent_obj,touch),HX_HCSTRING("touch","\xbf","\x17","\x33","\x14")},
	{hx::fsObject /*::snow::types::GamepadEvent*/ ,(int)offsetof(InputEvent_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InputEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String InputEvent_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("touch","\xbf","\x17","\x33","\x14"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("set_key","\x42","\xe3","\xc7","\x19"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("set_mouse","\x88","\x5e","\x5f","\x33"),
	HX_HCSTRING("set_touch","\x22","\x60","\x2d","\x3b"),
	HX_HCSTRING("set_gamepad","\xc4","\x47","\xed","\x19"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void InputEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InputEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class InputEvent_obj::__mClass;

void InputEvent_obj::__register()
{
	hx::Object *dummy = new InputEvent_obj;
	InputEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.InputEvent","\xf0","\x8f","\x5a","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InputEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InputEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InputEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace types
