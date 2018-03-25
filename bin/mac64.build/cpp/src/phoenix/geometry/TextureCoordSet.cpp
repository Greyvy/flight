// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_phoenix_geometry_TextureCoord
#include <phoenix/geometry/TextureCoord.h>
#endif
#ifndef INCLUDED_phoenix_geometry_TextureCoordSet
#include <phoenix/geometry/TextureCoordSet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2743fed3a16d0a9e_17_new,"phoenix.geometry.TextureCoordSet","new",0x918b073d,"phoenix.geometry.TextureCoordSet.new","phoenix/geometry/TextureCoord.hx",17,0x1af0f827)
HX_LOCAL_STACK_FRAME(_hx_pos_2743fed3a16d0a9e_30_clone,"phoenix.geometry.TextureCoordSet","clone",0xfefb7b7a,"phoenix.geometry.TextureCoordSet.clone","phoenix/geometry/TextureCoord.hx",30,0x1af0f827)
HX_LOCAL_STACK_FRAME(_hx_pos_2743fed3a16d0a9e_47_destroy,"phoenix.geometry.TextureCoordSet","destroy",0x001e9657,"phoenix.geometry.TextureCoordSet.destroy","phoenix/geometry/TextureCoord.hx",47,0x1af0f827)
namespace phoenix{
namespace geometry{

void TextureCoordSet_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2743fed3a16d0a9e_17_new)
HXLINE(  19)		this->uv0 =  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  20)		this->uv1 =  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  21)		this->uv2 =  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  22)		this->uv3 =  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  23)		this->uv4 =  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  24)		this->uv5 =  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  25)		this->uv6 =  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  26)		this->uv7 =  ::phoenix::geometry::TextureCoord_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}

Dynamic TextureCoordSet_obj::__CreateEmpty() { return new TextureCoordSet_obj; }

void *TextureCoordSet_obj::_hx_vtable = 0;

Dynamic TextureCoordSet_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextureCoordSet_obj > _hx_result = new TextureCoordSet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextureCoordSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24265627;
}

 ::phoenix::geometry::TextureCoordSet TextureCoordSet_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_2743fed3a16d0a9e_30_clone)
HXLINE(  32)		 ::phoenix::geometry::TextureCoordSet _set =  ::phoenix::geometry::TextureCoordSet_obj::__alloc( HX_CTX );
HXLINE(  34)		{
HXLINE(  34)			 ::phoenix::geometry::TextureCoord _this = _set->uv0;
HXDLIN(  34)			_this->u = this->uv0->u;
HXDLIN(  34)			_this->v = this->uv0->v;
HXDLIN(  34)			_this->w = this->uv0->w;
HXDLIN(  34)			_this->t = this->uv0->t;
            		}
HXLINE(  35)		{
HXLINE(  35)			 ::phoenix::geometry::TextureCoord _this1 = _set->uv1;
HXDLIN(  35)			_this1->u = this->uv1->u;
HXDLIN(  35)			_this1->v = this->uv1->v;
HXDLIN(  35)			_this1->w = this->uv1->w;
HXDLIN(  35)			_this1->t = this->uv1->t;
            		}
HXLINE(  36)		{
HXLINE(  36)			 ::phoenix::geometry::TextureCoord _this2 = _set->uv2;
HXDLIN(  36)			_this2->u = this->uv2->u;
HXDLIN(  36)			_this2->v = this->uv2->v;
HXDLIN(  36)			_this2->w = this->uv2->w;
HXDLIN(  36)			_this2->t = this->uv2->t;
            		}
HXLINE(  37)		{
HXLINE(  37)			 ::phoenix::geometry::TextureCoord _this3 = _set->uv3;
HXDLIN(  37)			_this3->u = this->uv3->u;
HXDLIN(  37)			_this3->v = this->uv3->v;
HXDLIN(  37)			_this3->w = this->uv3->w;
HXDLIN(  37)			_this3->t = this->uv3->t;
            		}
HXLINE(  38)		{
HXLINE(  38)			 ::phoenix::geometry::TextureCoord _this4 = _set->uv4;
HXDLIN(  38)			_this4->u = this->uv4->u;
HXDLIN(  38)			_this4->v = this->uv4->v;
HXDLIN(  38)			_this4->w = this->uv4->w;
HXDLIN(  38)			_this4->t = this->uv4->t;
            		}
HXLINE(  39)		{
HXLINE(  39)			 ::phoenix::geometry::TextureCoord _this5 = _set->uv5;
HXDLIN(  39)			_this5->u = this->uv5->u;
HXDLIN(  39)			_this5->v = this->uv5->v;
HXDLIN(  39)			_this5->w = this->uv5->w;
HXDLIN(  39)			_this5->t = this->uv5->t;
            		}
HXLINE(  40)		{
HXLINE(  40)			 ::phoenix::geometry::TextureCoord _this6 = _set->uv6;
HXDLIN(  40)			_this6->u = this->uv6->u;
HXDLIN(  40)			_this6->v = this->uv6->v;
HXDLIN(  40)			_this6->w = this->uv6->w;
HXDLIN(  40)			_this6->t = this->uv6->t;
            		}
HXLINE(  41)		{
HXLINE(  41)			 ::phoenix::geometry::TextureCoord _this7 = _set->uv7;
HXDLIN(  41)			_this7->u = this->uv7->u;
HXDLIN(  41)			_this7->v = this->uv7->v;
HXDLIN(  41)			_this7->w = this->uv7->w;
HXDLIN(  41)			_this7->t = this->uv7->t;
            		}
HXLINE(  43)		return _set;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoordSet_obj,clone,return )

void TextureCoordSet_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2743fed3a16d0a9e_47_destroy)
HXLINE(  48)		this->uv0 = null();
HXLINE(  49)		this->uv1 = null();
HXLINE(  50)		this->uv2 = null();
HXLINE(  51)		this->uv3 = null();
HXLINE(  52)		this->uv4 = null();
HXLINE(  53)		this->uv5 = null();
HXLINE(  54)		this->uv6 = null();
HXLINE(  55)		this->uv7 = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureCoordSet_obj,destroy,(void))


hx::ObjectPtr< TextureCoordSet_obj > TextureCoordSet_obj::__new() {
	hx::ObjectPtr< TextureCoordSet_obj > __this = new TextureCoordSet_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TextureCoordSet_obj > TextureCoordSet_obj::__alloc(hx::Ctx *_hx_ctx) {
	TextureCoordSet_obj *__this = (TextureCoordSet_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextureCoordSet_obj), true, "phoenix.geometry.TextureCoordSet"));
	*(void **)__this = TextureCoordSet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextureCoordSet_obj::TextureCoordSet_obj()
{
}

void TextureCoordSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureCoordSet);
	HX_MARK_MEMBER_NAME(uv0,"uv0");
	HX_MARK_MEMBER_NAME(uv1,"uv1");
	HX_MARK_MEMBER_NAME(uv2,"uv2");
	HX_MARK_MEMBER_NAME(uv3,"uv3");
	HX_MARK_MEMBER_NAME(uv4,"uv4");
	HX_MARK_MEMBER_NAME(uv5,"uv5");
	HX_MARK_MEMBER_NAME(uv6,"uv6");
	HX_MARK_MEMBER_NAME(uv7,"uv7");
	HX_MARK_END_CLASS();
}

void TextureCoordSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uv0,"uv0");
	HX_VISIT_MEMBER_NAME(uv1,"uv1");
	HX_VISIT_MEMBER_NAME(uv2,"uv2");
	HX_VISIT_MEMBER_NAME(uv3,"uv3");
	HX_VISIT_MEMBER_NAME(uv4,"uv4");
	HX_VISIT_MEMBER_NAME(uv5,"uv5");
	HX_VISIT_MEMBER_NAME(uv6,"uv6");
	HX_VISIT_MEMBER_NAME(uv7,"uv7");
}

hx::Val TextureCoordSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { return hx::Val( uv0 ); }
		if (HX_FIELD_EQ(inName,"uv1") ) { return hx::Val( uv1 ); }
		if (HX_FIELD_EQ(inName,"uv2") ) { return hx::Val( uv2 ); }
		if (HX_FIELD_EQ(inName,"uv3") ) { return hx::Val( uv3 ); }
		if (HX_FIELD_EQ(inName,"uv4") ) { return hx::Val( uv4 ); }
		if (HX_FIELD_EQ(inName,"uv5") ) { return hx::Val( uv5 ); }
		if (HX_FIELD_EQ(inName,"uv6") ) { return hx::Val( uv6 ); }
		if (HX_FIELD_EQ(inName,"uv7") ) { return hx::Val( uv7 ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextureCoordSet_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { uv0=inValue.Cast<  ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv1") ) { uv1=inValue.Cast<  ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv2") ) { uv2=inValue.Cast<  ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv3") ) { uv3=inValue.Cast<  ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv4") ) { uv4=inValue.Cast<  ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv5") ) { uv5=inValue.Cast<  ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv6") ) { uv6=inValue.Cast<  ::phoenix::geometry::TextureCoord >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv7") ) { uv7=inValue.Cast<  ::phoenix::geometry::TextureCoord >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureCoordSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv2","\xb1","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv3","\xb2","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv4","\xb3","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv5","\xb4","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv6","\xb5","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("uv7","\xb6","\x2e","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextureCoordSet_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv0),HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv1),HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv2),HX_HCSTRING("uv2","\xb1","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv3),HX_HCSTRING("uv3","\xb2","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv4),HX_HCSTRING("uv4","\xb3","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv5),HX_HCSTRING("uv5","\xb4","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv6),HX_HCSTRING("uv6","\xb5","\x2e","\x59","\x00")},
	{hx::fsObject /*::phoenix::geometry::TextureCoord*/ ,(int)offsetof(TextureCoordSet_obj,uv7),HX_HCSTRING("uv7","\xb6","\x2e","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextureCoordSet_obj_sStaticStorageInfo = 0;
#endif

static ::String TextureCoordSet_obj_sMemberFields[] = {
	HX_HCSTRING("uv0","\xaf","\x2e","\x59","\x00"),
	HX_HCSTRING("uv1","\xb0","\x2e","\x59","\x00"),
	HX_HCSTRING("uv2","\xb1","\x2e","\x59","\x00"),
	HX_HCSTRING("uv3","\xb2","\x2e","\x59","\x00"),
	HX_HCSTRING("uv4","\xb3","\x2e","\x59","\x00"),
	HX_HCSTRING("uv5","\xb4","\x2e","\x59","\x00"),
	HX_HCSTRING("uv6","\xb5","\x2e","\x59","\x00"),
	HX_HCSTRING("uv7","\xb6","\x2e","\x59","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void TextureCoordSet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureCoordSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureCoordSet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureCoordSet_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureCoordSet_obj::__mClass;

void TextureCoordSet_obj::__register()
{
	hx::Object *dummy = new TextureCoordSet_obj;
	TextureCoordSet_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.TextureCoordSet","\xcb","\xa4","\xd5","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextureCoordSet_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextureCoordSet_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureCoordSet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextureCoordSet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureCoordSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureCoordSet_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace phoenix
} // end namespace geometry