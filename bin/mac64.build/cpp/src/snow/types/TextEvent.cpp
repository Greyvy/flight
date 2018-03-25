// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_snow_types_TextEvent
#include <snow/types/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_26d41b97c9893cda_661_new,"snow.types.TextEvent","new",0x3654bb5f,"snow.types.TextEvent.new","snow/types/Types.hx",661,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_26d41b97c9893cda_664_set,"snow.types.TextEvent","set",0x365886a1,"snow.types.TextEvent.set","snow/types/Types.hx",664,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_26d41b97c9893cda_671_toString,"snow.types.TextEvent","toString",0xb9dea94d,"snow.types.TextEvent.toString","snow/types/Types.hx",671,0x72b41ce7)
namespace snow{
namespace types{

void TextEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_26d41b97c9893cda_661_new)
            	}

Dynamic TextEvent_obj::__CreateEmpty() { return new TextEvent_obj; }

void *TextEvent_obj::_hx_vtable = 0;

Dynamic TextEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextEvent_obj > _hx_result = new TextEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x098f6adb;
}

void TextEvent_obj::set(int _type,::String _text,int _start,int _length){
            	HX_STACKFRAME(&_hx_pos_26d41b97c9893cda_664_set)
HXLINE( 665)		this->type = _type;
HXLINE( 666)		this->text = _text;
HXLINE( 667)		this->start = _start;
HXLINE( 668)		this->length = _length;
            	}


HX_DEFINE_DYNAMIC_FUNC4(TextEvent_obj,set,(void))

::String TextEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_26d41b97c9893cda_671_toString)
HXDLIN( 671)		int this1 = this->type;
HXDLIN( 671)		::String _hx_tmp;
HXDLIN( 671)		switch((int)(this1)){
            			case (int)0: {
HXDLIN( 671)				_hx_tmp = HX_("te_unknown",7c,3b,30,76);
            			}
            			break;
            			case (int)1: {
HXDLIN( 671)				_hx_tmp = HX_("te_edit",d8,26,e5,2f);
            			}
            			break;
            			case (int)2: {
HXDLIN( 671)				_hx_tmp = HX_("te_input",7c,9b,d8,0c);
            			}
            			break;
            			default:{
HXDLIN( 671)				_hx_tmp = (HX_("",00,00,00,00) + this1);
            			}
            		}
HXDLIN( 671)		return ((((((((HX_("{ \"TextEvent\":true, \"type\":\"",38,33,3f,99) + _hx_tmp) + HX_("\", \"text\":\"",f1,bd,d8,bf)) + this->text) + HX_("\", \"start\":",ee,0f,52,56)) + this->start) + HX_(", \"length\":",6c,95,5c,53)) + this->length) + HX_(" }",5d,1c,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEvent_obj,toString,return )


TextEvent_obj::TextEvent_obj()
{
}

void TextEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEvent);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void TextEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(length,"length");
}

hx::Val TextEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEvent_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(TextEvent_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEvent_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEvent_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String TextEvent_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void TextEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class TextEvent_obj::__mClass;

void TextEvent_obj::__register()
{
	hx::Object *dummy = new TextEvent_obj;
	TextEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.TextEvent","\xed","\x1f","\xa6","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace types