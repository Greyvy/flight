// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_StaticRegexp
#include <hxcpp/StaticRegexp.h>
#endif

namespace hxcpp{

void StaticRegexp_obj::__construct() { }

Dynamic StaticRegexp_obj::__CreateEmpty() { return new StaticRegexp_obj; }

void *StaticRegexp_obj::_hx_vtable = 0;

Dynamic StaticRegexp_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticRegexp_obj > _hx_result = new StaticRegexp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticRegexp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x738bb14a;
}


StaticRegexp_obj::StaticRegexp_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StaticRegexp_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StaticRegexp_obj_sStaticStorageInfo = 0;
#endif

static void StaticRegexp_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticRegexp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticRegexp_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticRegexp_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticRegexp_obj::__mClass;

void StaticRegexp_obj::__register()
{
	hx::Object *dummy = new StaticRegexp_obj;
	StaticRegexp_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hxcpp.StaticRegexp","\x72","\x60","\x14","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StaticRegexp_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticRegexp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticRegexp_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticRegexp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticRegexp_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcpp
