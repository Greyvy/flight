// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_tween_BezierPath
#include <luxe/tween/BezierPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f9c49c06bb04a824_208_new,"luxe.tween.BezierPath","new",0x3abe6ed1,"luxe.tween.BezierPath.new","luxe/tween/MotionPath.hx",208,0x24788886)
HX_LOCAL_STACK_FRAME(_hx_pos_f9c49c06bb04a824_219_calculate,"luxe.tween.BezierPath","calculate",0x85991e97,"luxe.tween.BezierPath.calculate","luxe/tween/MotionPath.hx",219,0x24788886)
namespace luxe{
namespace tween{

void BezierPath_obj::__construct(Float end,Float control,Float strength){
            	HX_STACKFRAME(&_hx_pos_f9c49c06bb04a824_208_new)
HXLINE( 210)		this->end = end;
HXLINE( 211)		this->control = control;
HXLINE( 212)		this->strength = strength;
            	}

Dynamic BezierPath_obj::__CreateEmpty() { return new BezierPath_obj; }

void *BezierPath_obj::_hx_vtable = 0;

Dynamic BezierPath_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BezierPath_obj > _hx_result = new BezierPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BezierPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3689b679;
}

Float BezierPath_obj::calculate(Float start,Float k){
            	HX_STACKFRAME(&_hx_pos_f9c49c06bb04a824_219_calculate)
HXDLIN( 219)		Float _hx_tmp = (((((int)1 - k) * ((int)1 - k)) * start) + ((((int)2 * ((int)1 - k)) * k) * this->control));
HXDLIN( 219)		return (_hx_tmp + ((k * k) * this->end));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BezierPath_obj,calculate,return )


BezierPath_obj::BezierPath_obj()
{
}

hx::Val BezierPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { return hx::Val( control ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return hx::Val( strength ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BezierPath_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { control=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BezierPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("control","\x5d","\x6b","\x81","\x19"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BezierPath_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BezierPath_obj,control),HX_HCSTRING("control","\x5d","\x6b","\x81","\x19")},
	{hx::fsFloat,(int)offsetof(BezierPath_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsFloat,(int)offsetof(BezierPath_obj,strength),HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BezierPath_obj_sStaticStorageInfo = 0;
#endif

static ::String BezierPath_obj_sMemberFields[] = {
	HX_HCSTRING("control","\x5d","\x6b","\x81","\x19"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"),
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	::String(null()) };

static void BezierPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BezierPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BezierPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BezierPath_obj::__mClass,"__mClass");
};

#endif

hx::Class BezierPath_obj::__mClass;

void BezierPath_obj::__register()
{
	hx::Object *dummy = new BezierPath_obj;
	BezierPath_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.BezierPath","\x5f","\xb2","\xb0","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BezierPath_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BezierPath_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BezierPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BezierPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BezierPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BezierPath_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween