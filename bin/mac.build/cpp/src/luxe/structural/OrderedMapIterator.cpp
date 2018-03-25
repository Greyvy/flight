// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMap
#include <luxe/structural/OrderedMap.h>
#endif
#ifndef INCLUDED_luxe_structural_OrderedMapIterator
#include <luxe/structural/OrderedMapIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_34bace52490d2499_17_new,"luxe.structural.OrderedMapIterator","new",0x8b5ca708,"luxe.structural.OrderedMapIterator.new","luxe/structural/OrderedMap.hx",17,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_34bace52490d2499_25_hasNext,"luxe.structural.OrderedMapIterator","hasNext",0x42c3f015,"luxe.structural.OrderedMapIterator.hasNext","luxe/structural/OrderedMap.hx",25,0x2ffa3116)
HX_LOCAL_STACK_FRAME(_hx_pos_34bace52490d2499_27_next,"luxe.structural.OrderedMapIterator","next",0x65b5814b,"luxe.structural.OrderedMapIterator.next","luxe/structural/OrderedMap.hx",27,0x2ffa3116)
namespace luxe{
namespace structural{

void OrderedMapIterator_obj::__construct( ::luxe::structural::OrderedMap omap){
            	HX_STACKFRAME(&_hx_pos_34bace52490d2499_17_new)
HXLINE(  20)		this->index = (int)0;
HXLINE(  23)		this->map = omap;
            	}

Dynamic OrderedMapIterator_obj::__CreateEmpty() { return new OrderedMapIterator_obj; }

void *OrderedMapIterator_obj::_hx_vtable = 0;

Dynamic OrderedMapIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OrderedMapIterator_obj > _hx_result = new OrderedMapIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OrderedMapIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a963870;
}

bool OrderedMapIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_34bace52490d2499_25_hasNext)
HXDLIN(  25)		return (this->index < this->map->_keys->get_length());
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMapIterator_obj,hasNext,return )

 ::Dynamic OrderedMapIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_34bace52490d2499_27_next)
HXDLIN(  27)		::cpp::VirtualArray key = this->map->_keys;
HXDLIN(  27)		return ::haxe::IMap_obj::get(this->map->map,key->__get(this->index++));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OrderedMapIterator_obj,next,return )


hx::ObjectPtr< OrderedMapIterator_obj > OrderedMapIterator_obj::__new( ::luxe::structural::OrderedMap omap) {
	hx::ObjectPtr< OrderedMapIterator_obj > __this = new OrderedMapIterator_obj();
	__this->__construct(omap);
	return __this;
}

hx::ObjectPtr< OrderedMapIterator_obj > OrderedMapIterator_obj::__alloc(hx::Ctx *_hx_ctx, ::luxe::structural::OrderedMap omap) {
	OrderedMapIterator_obj *__this = (OrderedMapIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OrderedMapIterator_obj), true, "luxe.structural.OrderedMapIterator"));
	*(void **)__this = OrderedMapIterator_obj::_hx_vtable;
	__this->__construct(omap);
	return __this;
}

OrderedMapIterator_obj::OrderedMapIterator_obj()
{
}

void OrderedMapIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrderedMapIterator);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void OrderedMapIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(index,"index");
}

hx::Val OrderedMapIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return hx::Val( map ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OrderedMapIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::luxe::structural::OrderedMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OrderedMapIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OrderedMapIterator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::OrderedMap*/ ,(int)offsetof(OrderedMapIterator_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(OrderedMapIterator_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OrderedMapIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String OrderedMapIterator_obj_sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void OrderedMapIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OrderedMapIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OrderedMapIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OrderedMapIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class OrderedMapIterator_obj::__mClass;

void OrderedMapIterator_obj::__register()
{
	hx::Object *dummy = new OrderedMapIterator_obj;
	OrderedMapIterator_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.OrderedMapIterator","\x16","\xc3","\xb2","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OrderedMapIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OrderedMapIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OrderedMapIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OrderedMapIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OrderedMapIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OrderedMapIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace structural