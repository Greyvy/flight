// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural_BalancedBSTTraverseMethod
#include <luxe/structural/BalancedBSTTraverseMethod.h>
#endif
namespace luxe{
namespace structural{

::luxe::structural::BalancedBSTTraverseMethod BalancedBSTTraverseMethod_obj::order_post;

::luxe::structural::BalancedBSTTraverseMethod BalancedBSTTraverseMethod_obj::order_pre;

::luxe::structural::BalancedBSTTraverseMethod BalancedBSTTraverseMethod_obj::order_retain;

bool BalancedBSTTraverseMethod_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("order_post",f1,ec,93,a1)) { outValue = BalancedBSTTraverseMethod_obj::order_post; return true; }
	if (inName==HX_("order_pre",b2,f4,5f,72)) { outValue = BalancedBSTTraverseMethod_obj::order_pre; return true; }
	if (inName==HX_("order_retain",96,de,6d,2b)) { outValue = BalancedBSTTraverseMethod_obj::order_retain; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BalancedBSTTraverseMethod_obj)

int BalancedBSTTraverseMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_("order_post",f1,ec,93,a1)) return 2;
	if (inName==HX_("order_pre",b2,f4,5f,72)) return 0;
	if (inName==HX_("order_retain",96,de,6d,2b)) return 1;
	return super::__FindIndex(inName);
}

int BalancedBSTTraverseMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("order_post",f1,ec,93,a1)) return 0;
	if (inName==HX_("order_pre",b2,f4,5f,72)) return 0;
	if (inName==HX_("order_retain",96,de,6d,2b)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val BalancedBSTTraverseMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("order_post",f1,ec,93,a1)) return order_post;
	if (inName==HX_("order_pre",b2,f4,5f,72)) return order_pre;
	if (inName==HX_("order_retain",96,de,6d,2b)) return order_retain;
	return super::__Field(inName,inCallProp);
}

static ::String BalancedBSTTraverseMethod_obj_sStaticFields[] = {
	HX_("order_pre",b2,f4,5f,72),
	HX_("order_retain",96,de,6d,2b),
	HX_("order_post",f1,ec,93,a1),
	::String(null())
};

static void BalancedBSTTraverseMethod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_post,"order_post");
	HX_MARK_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_pre,"order_pre");
	HX_MARK_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_retain,"order_retain");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BalancedBSTTraverseMethod_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBSTTraverseMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_post,"order_post");
	HX_VISIT_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_pre,"order_pre");
	HX_VISIT_MEMBER_NAME(BalancedBSTTraverseMethod_obj::order_retain,"order_retain");
};
#endif

hx::Class BalancedBSTTraverseMethod_obj::__mClass;

Dynamic __Create_BalancedBSTTraverseMethod_obj() { return new BalancedBSTTraverseMethod_obj; }

void BalancedBSTTraverseMethod_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("luxe.structural.BalancedBSTTraverseMethod","\x75","\x79","\x60","\x0f"), hx::TCanCast< BalancedBSTTraverseMethod_obj >,BalancedBSTTraverseMethod_obj_sStaticFields,0,
	&__Create_BalancedBSTTraverseMethod_obj, &__Create,
	&super::__SGetClass(), &CreateBalancedBSTTraverseMethod_obj, BalancedBSTTraverseMethod_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , BalancedBSTTraverseMethod_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BalancedBSTTraverseMethod_obj::__GetStatic;
}

void BalancedBSTTraverseMethod_obj::__boot()
{
order_post = hx::CreateEnum< BalancedBSTTraverseMethod_obj >(HX_HCSTRING("order_post","\xf1","\xec","\x93","\xa1"),2,0);
order_pre = hx::CreateEnum< BalancedBSTTraverseMethod_obj >(HX_HCSTRING("order_pre","\xb2","\xf4","\x5f","\x72"),0,0);
order_retain = hx::CreateEnum< BalancedBSTTraverseMethod_obj >(HX_HCSTRING("order_retain","\x96","\xde","\x6d","\x2b"),1,0);
}


} // end namespace luxe
} // end namespace structural