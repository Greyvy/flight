// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_snow_api_Promises
#include <snow/api/Promises.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d9a5f338a3f938b0_424_step,"snow.api.Promises","step",0x23521563,"snow.api.Promises.step","snow/api/Promise.hx",424,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_d9a5f338a3f938b0_437_next,"snow.api.Promises","next",0x1ff8b30a,"snow.api.Promises.next","snow/api/Promise.hx",437,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_d9a5f338a3f938b0_441_defer,"snow.api.Promises","defer",0x1794737b,"snow.api.Promises.defer","snow/api/Promise.hx",441,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_d9a5f338a3f938b0_447_queue,"snow.api.Promises","queue",0x9e5cb39a,"snow.api.Promises.queue","snow/api/Promise.hx",447,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_d9a5f338a3f938b0_420_boot,"snow.api.Promises","boot",0x1811b249,"snow.api.Promises.boot","snow/api/Promise.hx",420,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_d9a5f338a3f938b0_421_boot,"snow.api.Promises","boot",0x1811b249,"snow.api.Promises.boot","snow/api/Promise.hx",421,0xcb181004)
namespace snow{
namespace api{

void Promises_obj::__construct() { }

Dynamic Promises_obj::__CreateEmpty() { return new Promises_obj; }

void *Promises_obj::_hx_vtable = 0;

Dynamic Promises_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Promises_obj > _hx_result = new Promises_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Promises_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fd6b55f;
}

::cpp::VirtualArray Promises_obj::calls;

::Array< ::Dynamic> Promises_obj::defers;

void Promises_obj::step(){
            	HX_STACKFRAME(&_hx_pos_d9a5f338a3f938b0_424_step)
HXLINE( 426)		::snow::api::Promises_obj::next();
HXLINE( 428)		while((::snow::api::Promises_obj::defers->length > (int)0)){
HXLINE( 429)			 ::Dynamic defer = ::snow::api::Promises_obj::defers->shift();
HXLINE( 430)			defer->__Field(HX_("f",66,00,00,00),hx::paccDynamic)( ::Dynamic(defer->__Field(HX_("a",61,00,00,00),hx::paccDynamic)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Promises_obj,step,(void))

void Promises_obj::next(){
            	HX_STACKFRAME(&_hx_pos_d9a5f338a3f938b0_437_next)
HXDLIN( 437)		if ((::snow::api::Promises_obj::calls->get_length() > (int)0)) {
HXDLIN( 437)			::snow::api::Promises_obj::calls->shift()();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Promises_obj,next,(void))

void Promises_obj::defer( ::Dynamic f, ::Dynamic a){
            	HX_STACKFRAME(&_hx_pos_d9a5f338a3f938b0_441_defer)
HXLINE( 442)		if (hx::IsNull( f )) {
HXLINE( 442)			return;
            		}
HXLINE( 443)		::snow::api::Promises_obj::defers->push( ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("a",61,00,00,00),a)
            			->setFixed(1,HX_("f",66,00,00,00),f)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promises_obj,defer,(void))

void Promises_obj::queue( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_d9a5f338a3f938b0_447_queue)
HXLINE( 448)		if (hx::IsNull( f )) {
HXLINE( 448)			return;
            		}
HXLINE( 449)		::snow::api::Promises_obj::calls->push(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promises_obj,queue,(void))


Promises_obj::Promises_obj()
{
}

bool Promises_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { outValue = step_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"calls") ) { outValue = ( calls ); return true; }
		if (HX_FIELD_EQ(inName,"defer") ) { outValue = defer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defers") ) { outValue = ( defers ); return true; }
	}
	return false;
}

bool Promises_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"calls") ) { calls=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"defers") ) { defers=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Promises_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Promises_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Promises_obj::calls,HX_HCSTRING("calls","\x15","\x72","\x1b","\x41")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Promises_obj::defers,HX_HCSTRING("defers","\xc1","\x76","\xe1","\x66")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Promises_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promises_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Promises_obj::calls,"calls");
	HX_MARK_MEMBER_NAME(Promises_obj::defers,"defers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Promises_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promises_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Promises_obj::calls,"calls");
	HX_VISIT_MEMBER_NAME(Promises_obj::defers,"defers");
};

#endif

hx::Class Promises_obj::__mClass;

static ::String Promises_obj_sStaticFields[] = {
	HX_HCSTRING("calls","\x15","\x72","\x1b","\x41"),
	HX_HCSTRING("defers","\xc1","\x76","\xe1","\x66"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("defer","\x72","\x4d","\x22","\xd7"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	::String(null())
};

void Promises_obj::__register()
{
	hx::Object *dummy = new Promises_obj;
	Promises_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Promises","\xb7","\xe9","\x9a","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promises_obj::__GetStatic;
	__mClass->mSetStaticField = &Promises_obj::__SetStatic;
	__mClass->mMarkFunc = Promises_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Promises_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Promises_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Promises_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promises_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promises_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Promises_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d9a5f338a3f938b0_420_boot)
HXDLIN( 420)		calls = ::cpp::VirtualArray_obj::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d9a5f338a3f938b0_421_boot)
HXDLIN( 421)		defers = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace snow
} // end namespace api
