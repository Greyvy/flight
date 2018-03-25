// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_luxe_structural_BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry
#include <luxe/structural/BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_Geometry
#include <phoenix/geometry/Geometry.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryKey
#include <phoenix/geometry/GeometryKey.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f1151f9b2a773192_777_new,"luxe.structural.BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","new",0x77b31a6d,"luxe.structural.BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry.new","luxe/structural/BalancedBST.hx",777,0xa0b365fc)
namespace luxe{
namespace structural{

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__construct( ::phoenix::geometry::GeometryKey _key, ::phoenix::geometry::Geometry _value,int _node_count,bool _color){
            	HX_STACKFRAME(&_hx_pos_f1151f9b2a773192_777_new)
HXLINE( 779)		this->left = null();
HXLINE( 780)		this->right = null();
HXLINE( 782)		this->key = _key;
HXLINE( 783)		this->value = _value;
HXLINE( 785)		this->nodecount = _node_count;
HXLINE( 786)		this->color = _color;
            	}

Dynamic BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__CreateEmpty() { return new BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj; }

void *BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::_hx_vtable = 0;

Dynamic BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > _hx_result = new BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56d60655;
}


hx::ObjectPtr< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__new( ::phoenix::geometry::GeometryKey _key, ::phoenix::geometry::Geometry _value,int _node_count,bool _color) {
	hx::ObjectPtr< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > __this = new BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj();
	__this->__construct(_key,_value,_node_count,_color);
	return __this;
}

hx::ObjectPtr< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj > BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__alloc(hx::Ctx *_hx_ctx, ::phoenix::geometry::GeometryKey _key, ::phoenix::geometry::Geometry _value,int _node_count,bool _color) {
	BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj *__this = (BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj), true, "luxe.structural.BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry"));
	*(void **)__this = BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::_hx_vtable;
	__this->__construct(_key,_value,_node_count,_color);
	return __this;
}

BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj()
{
}

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(nodecount,"nodecount");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(nodecount,"nodecount");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(value,"value");
}

hx::Val BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return hx::Val( key ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return hx::Val( right ); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodecount") ) { return hx::Val( nodecount ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast<  ::phoenix::geometry::GeometryKey >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast<  ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast<  ::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::phoenix::geometry::Geometry >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodecount") ) { nodecount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("nodecount","\x8d","\xb3","\x6b","\x5b"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsObject /*::luxe::structural::BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry*/ ,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsInt,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,nodecount),HX_HCSTRING("nodecount","\x8d","\xb3","\x6b","\x5b")},
	{hx::fsBool,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::phoenix::geometry::GeometryKey*/ ,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsObject /*::phoenix::geometry::Geometry*/ ,(int)offsetof(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sStaticStorageInfo = 0;
#endif

static ::String BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sMemberFields[] = {
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("nodecount","\x8d","\xb3","\x6b","\x5b"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass,"__mClass");
};

#endif

hx::Class BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__mClass;

void BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::__register()
{
	hx::Object *dummy = new BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj;
	BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.structural.BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry","\xfb","\x5f","\x48","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BalancedBSTNode_phoenix_geometry_GeometryKey_phoenix_geometry_Geometry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace structural