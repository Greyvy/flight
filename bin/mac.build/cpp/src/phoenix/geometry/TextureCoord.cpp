// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5153454287530a66_62_new,"phoenix.geometry.TextureCoord","new",0x17ac6f89,"phoenix.geometry.TextureCoord.new","phoenix/geometry/TextureCoord.hx",62,0x1af0f827)
HX_LOCAL_STACK_FRAME(_hx_pos_5153454287530a66_82_clone,"phoenix.geometry.TextureCoord","clone",0x5e808ec6,"phoenix.geometry.TextureCoord.clone","phoenix/geometry/TextureCoord.hx",82,0x1af0f827)
HX_LOCAL_STACK_FRAME(_hx_pos_5153454287530a66_86_set,"phoenix.geometry.TextureCoord","set",0x17b03acb,"phoenix.geometry.TextureCoord.set","phoenix/geometry/TextureCoord.hx",86,0x1af0f827)
HX_LOCAL_STACK_FRAME(_hx_pos_5153454287530a66_97_set_uv,"phoenix.geometry.TextureCoord","set_uv",0xb326d295,"phoenix.geometry.TextureCoord.set_uv","phoenix/geometry/TextureCoord.hx",97,0x1af0f827)
HX_LOCAL_STACK_FRAME(_hx_pos_5153454287530a66_108_toString,"phoenix.geometry.TextureCoord","toString",0xa5179ce3,"phoenix.geometry.TextureCoord.toString","phoenix/geometry/TextureCoord.hx",108,0x1af0f827)
namespace phoenix{
namespace geometry{

void TextureCoord_obj::__construct(hx::Null< Float >  __o__u,hx::Null< Float >  __o__v,hx::Null< Float >  __o__w,hx::Null< Float >  __o__t){
Float _u = __o__u.Default(((Float)0.0));
Float _v = __o__v.Default(((Float)0.0));
Float _w = __o__w.Default(((Float)0.0));
Float _t = __o__t.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_5153454287530a66_62_new)
HXLINE(  68)		this->t = ((Float)0.0);
HXLINE(  67)		this->w = ((Float)0.0);
HXLINE(  66)		this->v = ((Float)0.0);
HXLINE(  65)		this->u = ((Float)0.0);
HXLINE(  73)		this->u = _u;
HXLINE(  74)		this->v = _v;
HXLINE(  75)		this->w = _w;
HXLINE(  76)		this->t = _t;
            	}

Dynamic TextureCoord_obj::__CreateEmpty() { return new TextureCoord_obj; }

void *TextureCoord_obj::_hx_vtable = 0;

Dynamic TextureCoord_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextureCoord_obj > _hx_result = new TextureCoord_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TextureCoord_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x477d143b;
}

 ::phoenix::geometry::TextureCoord TextureCoord_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_5153454287530a66_82_clone)
HXDLIN(  82)		return  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,this->u,this->v,this->w,this->t);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoord_obj,clone,return )

 ::phoenix::geometry::TextureCoord TextureCoord_obj::set(Float _u,Float _v,Float _w,Float _t){
            	HX_STACKFRAME(&_hx_pos_5153454287530a66_86_set)
HXLINE(  88)		this->u = _u;
HXLINE(  89)		this->v = _v;
HXLINE(  90)		this->w = _w;
HXLINE(  91)		this->t = _t;
HXLINE(  93)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(TextureCoord_obj,set,return )

 ::phoenix::geometry::TextureCoord TextureCoord_obj::set_uv(Float _u,Float _v){
            	HX_STACKFRAME(&_hx_pos_5153454287530a66_97_set_uv)
HXLINE(  99)		this->u = _u;
HXLINE( 100)		this->v = _v;
HXLINE( 102)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TextureCoord_obj,set_uv,return )

::String TextureCoord_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5153454287530a66_108_toString)
HXDLIN( 108)		return ((((HX_("{ u:",aa,ec,65,51) + this->v) + HX_(", v:",78,12,2e,1d)) + this->v) + HX_(" }",5d,1c,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoord_obj,toString,return )


TextureCoord_obj::TextureCoord_obj()
{
}

hx::Val TextureCoord_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { return hx::Val( u ); }
		if (HX_FIELD_EQ(inName,"v") ) { return hx::Val( v ); }
		if (HX_FIELD_EQ(inName,"w") ) { return hx::Val( w ); }
		if (HX_FIELD_EQ(inName,"t") ) { return hx::Val( t ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_uv") ) { return hx::Val( set_uv_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextureCoord_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"u") ) { u=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureCoord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("u","\x75","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextureCoord_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,u),HX_HCSTRING("u","\x75","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureCoord_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextureCoord_obj_sStaticStorageInfo = 0;
#endif

static ::String TextureCoord_obj_sMemberFields[] = {
	HX_HCSTRING("u","\x75","\x00","\x00","\x00"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_uv","\x1e","\x52","\x78","\x6f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void TextureCoord_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureCoord_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureCoord_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureCoord_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureCoord_obj::__mClass;

void TextureCoord_obj::__register()
{
	hx::Object *dummy = new TextureCoord_obj;
	TextureCoord_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.TextureCoord","\x17","\xf7","\xf1","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextureCoord_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextureCoord_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureCoord_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextureCoord_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureCoord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureCoord_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace phoenix
} // end namespace geometry
