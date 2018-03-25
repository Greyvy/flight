// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b4793fdf819cc060_603_new,"snow.types.WindowEvent","new",0xbcf7e3bc,"snow.types.WindowEvent.new","snow/types/Types.hx",603,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4793fdf819cc060_618_set,"snow.types.WindowEvent","set",0xbcfbaefe,"snow.types.WindowEvent.set","snow/types/Types.hx",618,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_b4793fdf819cc060_626_toString,"snow.types.WindowEvent","toString",0xb9fb0fd0,"snow.types.WindowEvent.toString","snow/types/Types.hx",626,0x72b41ce7)
namespace snow{
namespace types{

void WindowEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b4793fdf819cc060_603_new)
HXLINE( 610)		this->window_id = (int)-1;
HXLINE( 608)		this->timestamp = ((Float)0.0);
HXLINE( 606)		this->type = (int)0;
            	}

Dynamic WindowEvent_obj::__CreateEmpty() { return new WindowEvent_obj; }

void *WindowEvent_obj::_hx_vtable = 0;

Dynamic WindowEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindowEvent_obj > _hx_result = new WindowEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WindowEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a0debd4;
}

void WindowEvent_obj::set(int _type,Float _timestamp,int _window_id, ::Dynamic _x, ::Dynamic _y){
            	HX_STACKFRAME(&_hx_pos_b4793fdf819cc060_618_set)
HXLINE( 619)		this->type = _type;
HXLINE( 620)		this->timestamp = _timestamp;
HXLINE( 621)		this->window_id = _window_id;
HXLINE( 622)		this->x = _x;
HXLINE( 623)		this->y = _y;
            	}


HX_DEFINE_DYNAMIC_FUNC5(WindowEvent_obj,set,(void))

::String WindowEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b4793fdf819cc060_626_toString)
HXDLIN( 626)		int this1 = this->type;
HXDLIN( 626)		::String _hx_tmp;
HXDLIN( 626)		switch((int)(this1)){
            			case (int)0: {
HXDLIN( 626)				_hx_tmp = HX_("we_unknown",19,a3,0f,b7);
            			}
            			break;
            			case (int)1: {
HXDLIN( 626)				_hx_tmp = HX_("we_shown",a0,b6,79,76);
            			}
            			break;
            			case (int)2: {
HXDLIN( 626)				_hx_tmp = HX_("we_hidden",bb,e6,2b,5a);
            			}
            			break;
            			case (int)3: {
HXDLIN( 626)				_hx_tmp = HX_("we_exposed",2f,e9,f6,fe);
            			}
            			break;
            			case (int)4: {
HXDLIN( 626)				_hx_tmp = HX_("we_moved",02,fa,b7,06);
            			}
            			break;
            			case (int)5: {
HXDLIN( 626)				_hx_tmp = HX_("we_resized",7f,db,07,39);
            			}
            			break;
            			case (int)6: {
HXDLIN( 626)				_hx_tmp = HX_("we_size_changed",47,8e,40,39);
            			}
            			break;
            			case (int)7: {
HXDLIN( 626)				_hx_tmp = HX_("we_minimized",d5,bc,fc,eb);
            			}
            			break;
            			case (int)8: {
HXDLIN( 626)				_hx_tmp = HX_("we_maximized",67,cf,3f,c2);
            			}
            			break;
            			case (int)9: {
HXDLIN( 626)				_hx_tmp = HX_("we_restored",e7,1a,05,fc);
            			}
            			break;
            			case (int)10: {
HXDLIN( 626)				_hx_tmp = HX_("we_enter",e7,9a,d8,6a);
            			}
            			break;
            			case (int)11: {
HXDLIN( 626)				_hx_tmp = HX_("we_leave",c6,62,a5,6c);
            			}
            			break;
            			case (int)12: {
HXDLIN( 626)				_hx_tmp = HX_("we_focus_gained",76,3d,1b,38);
            			}
            			break;
            			case (int)13: {
HXDLIN( 626)				_hx_tmp = HX_("we_focus_lost",bc,5a,87,59);
            			}
            			break;
            			case (int)14: {
HXDLIN( 626)				_hx_tmp = HX_("we_close",87,45,b5,42);
            			}
            			break;
            			default:{
HXDLIN( 626)				_hx_tmp = (HX_("",00,00,00,00) + this1);
            			}
            		}
HXDLIN( 626)		return ((((((((((HX_("{ \"WindowEvent\":true, \"type\":\"",d5,09,fc,fa) + _hx_tmp) + HX_("\", \"window\":",14,7a,d3,6c)) + this->window_id) + HX_(", \"x\":",e2,dd,5a,1b)) + this->x) + HX_(", \"y\":",23,a0,5b,1b)) + this->y) + HX_(", \"time\":",d3,dc,77,0c)) + this->timestamp) + HX_(" }",5d,1c,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WindowEvent_obj,toString,return )


WindowEvent_obj::WindowEvent_obj()
{
}

void WindowEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WindowEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(timestamp,"timestamp");
	HX_MARK_MEMBER_NAME(window_id,"window_id");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void WindowEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(timestamp,"timestamp");
	HX_VISIT_MEMBER_NAME(window_id,"window_id");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

hx::Val WindowEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return hx::Val( timestamp ); }
		if (HX_FIELD_EQ(inName,"window_id") ) { return hx::Val( window_id ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WindowEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window_id") ) { window_id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	outFields->push(HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WindowEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(WindowEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(WindowEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{hx::fsInt,(int)offsetof(WindowEvent_obj,window_id),HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WindowEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WindowEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *WindowEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String WindowEvent_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("window_id","\x0a","\xf4","\x3c","\x96"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void WindowEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowEvent_obj::__mClass;

void WindowEvent_obj::__register()
{
	hx::Object *dummy = new WindowEvent_obj;
	WindowEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.WindowEvent","\xca","\x95","\xdc","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WindowEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WindowEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindowEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace types