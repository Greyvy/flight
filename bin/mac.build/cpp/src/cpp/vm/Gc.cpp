// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_be3f97a95d181a8b_41_memInfo,"cpp.vm.Gc","memInfo",0x78cddc3d,"cpp.vm.Gc.memInfo","/usr/local/lib/haxe/std/cpp/vm/Gc.hx",41,0x44f3d2d3)
namespace cpp{
namespace vm{

void Gc_obj::__construct() { }

Dynamic Gc_obj::__CreateEmpty() { return new Gc_obj; }

void *Gc_obj::_hx_vtable = 0;

Dynamic Gc_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Gc_obj > _hx_result = new Gc_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Gc_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6793e0b2;
}

int Gc_obj::memInfo(int inWhatInfo){
            	HX_STACKFRAME(&_hx_pos_be3f97a95d181a8b_41_memInfo)
HXDLIN(  41)		return ::Std_obj::_hx_int(__hxcpp_gc_mem_info(inWhatInfo));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,memInfo,return )


Gc_obj::Gc_obj()
{
}

bool Gc_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"memInfo") ) { outValue = memInfo_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Gc_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Gc_obj_sStaticStorageInfo = 0;
#endif

static void Gc_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Gc_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
};

#endif

hx::Class Gc_obj::__mClass;

static ::String Gc_obj_sStaticFields[] = {
	HX_HCSTRING("memInfo","\x23","\xa1","\xf0","\x09"),
	::String(null())
};

void Gc_obj::__register()
{
	hx::Object *dummy = new Gc_obj;
	Gc_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Gc","\x88","\xf1","\xb3","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gc_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Gc_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Gc_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Gc_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Gc_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gc_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gc_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
} // end namespace vm
