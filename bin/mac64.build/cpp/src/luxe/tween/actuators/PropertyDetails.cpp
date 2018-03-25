// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f981fcb056b3a6b_19_new,"luxe.tween.actuators.PropertyDetails","new",0x365f7af0,"luxe.tween.actuators.PropertyDetails.new","luxe/tween/actuators/PropertyDetails.hx",19,0xb542fc83)
namespace luxe{
namespace tween{
namespace actuators{

void PropertyDetails_obj::__construct( ::Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField){
bool isField = __o_isField.Default(true);
            	HX_STACKFRAME(&_hx_pos_7f981fcb056b3a6b_19_new)
HXLINE(  21)		this->target = target;
HXLINE(  22)		this->propertyName = propertyName;
HXLINE(  23)		this->start = start;
HXLINE(  24)		this->change = change;
HXLINE(  25)		this->isField = isField;
            	}

Dynamic PropertyDetails_obj::__CreateEmpty() { return new PropertyDetails_obj; }

void *PropertyDetails_obj::_hx_vtable = 0;

Dynamic PropertyDetails_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PropertyDetails_obj > _hx_result = new PropertyDetails_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool PropertyDetails_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e3abec4;
}


PropertyDetails_obj::PropertyDetails_obj()
{
}

void PropertyDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyDetails);
	HX_MARK_MEMBER_NAME(change,"change");
	HX_MARK_MEMBER_NAME(isField,"isField");
	HX_MARK_MEMBER_NAME(propertyName,"propertyName");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void PropertyDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(change,"change");
	HX_VISIT_MEMBER_NAME(isField,"isField");
	HX_VISIT_MEMBER_NAME(propertyName,"propertyName");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(target,"target");
}

hx::Val PropertyDetails_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { return hx::Val( change ); }
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isField") ) { return hx::Val( isField ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { return hx::Val( propertyName ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PropertyDetails_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { change=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isField") ) { isField=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { propertyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));
	outFields->push(HX_HCSTRING("isField","\x70","\x38","\x19","\x9d"));
	outFields->push(HX_HCSTRING("propertyName","\x40","\x35","\xe4","\x26"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PropertyDetails_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PropertyDetails_obj,change),HX_HCSTRING("change","\x70","\x91","\x72","\xb7")},
	{hx::fsBool,(int)offsetof(PropertyDetails_obj,isField),HX_HCSTRING("isField","\x70","\x38","\x19","\x9d")},
	{hx::fsString,(int)offsetof(PropertyDetails_obj,propertyName),HX_HCSTRING("propertyName","\x40","\x35","\xe4","\x26")},
	{hx::fsFloat,(int)offsetof(PropertyDetails_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PropertyDetails_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PropertyDetails_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyDetails_obj_sMemberFields[] = {
	HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),
	HX_HCSTRING("isField","\x70","\x38","\x19","\x9d"),
	HX_HCSTRING("propertyName","\x40","\x35","\xe4","\x26"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	::String(null()) };

static void PropertyDetails_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PropertyDetails_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PropertyDetails_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PropertyDetails_obj::__mClass,"__mClass");
};

#endif

hx::Class PropertyDetails_obj::__mClass;

void PropertyDetails_obj::__register()
{
	hx::Object *dummy = new PropertyDetails_obj;
	PropertyDetails_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.PropertyDetails","\xfe","\x82","\xf3","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PropertyDetails_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PropertyDetails_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PropertyDetails_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PropertyDetails_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyDetails_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyDetails_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators