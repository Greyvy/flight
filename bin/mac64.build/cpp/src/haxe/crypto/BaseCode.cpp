// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b23e417e2bb3f320_33_new,"haxe.crypto.BaseCode","new",0xd63c60f5,"haxe.crypto.BaseCode.new","/usr/local/lib/haxe/std/haxe/crypto/BaseCode.hx",33,0xb0c29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b23e417e2bb3f320_44_encodeBytes,"haxe.crypto.BaseCode","encodeBytes",0x58a8e40a,"haxe.crypto.BaseCode.encodeBytes","/usr/local/lib/haxe/std/haxe/crypto/BaseCode.hx",44,0xb0c29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b23e417e2bb3f320_72_initTable,"haxe.crypto.BaseCode","initTable",0xa1288133,"haxe.crypto.BaseCode.initTable","/usr/local/lib/haxe/std/haxe/crypto/BaseCode.hx",72,0xb0c29dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b23e417e2bb3f320_81_decodeBytes,"haxe.crypto.BaseCode","decodeBytes",0x152c41f2,"haxe.crypto.BaseCode.decodeBytes","/usr/local/lib/haxe/std/haxe/crypto/BaseCode.hx",81,0xb0c29dde)
namespace haxe{
namespace crypto{

void BaseCode_obj::__construct( ::haxe::io::Bytes base){
            	HX_STACKFRAME(&_hx_pos_b23e417e2bb3f320_33_new)
HXLINE(  34)		int len = base->length;
HXLINE(  35)		int nbits = (int)1;
HXLINE(  36)		while((len > ((int)(int)1 << (int)nbits))){
HXLINE(  37)			nbits = (nbits + (int)1);
            		}
HXLINE(  38)		bool _hx_tmp;
HXDLIN(  38)		if ((nbits <= (int)8)) {
HXLINE(  38)			_hx_tmp = (len != ((int)(int)1 << (int)nbits));
            		}
            		else {
HXLINE(  38)			_hx_tmp = true;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  39)			HX_STACK_DO_THROW(HX_("BaseCode : base length must be a power of two.",78,b6,c8,ca));
            		}
HXLINE(  40)		this->base = base;
HXLINE(  41)		this->nbits = nbits;
            	}

Dynamic BaseCode_obj::__CreateEmpty() { return new BaseCode_obj; }

void *BaseCode_obj::_hx_vtable = 0;

Dynamic BaseCode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BaseCode_obj > _hx_result = new BaseCode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BaseCode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x234bc1a5;
}

 ::haxe::io::Bytes BaseCode_obj::encodeBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_b23e417e2bb3f320_44_encodeBytes)
HXLINE(  48)		int nbits = this->nbits;
HXLINE(  49)		 ::haxe::io::Bytes base = this->base;
HXLINE(  50)		int size = ::Std_obj::_hx_int(((Float)(b->length * (int)8) / (Float)nbits));
HXLINE(  51)		int out;
HXDLIN(  51)		if ((hx::Mod((b->length * (int)8),nbits) == (int)0)) {
HXLINE(  51)			out = (int)0;
            		}
            		else {
HXLINE(  51)			out = (int)1;
            		}
HXDLIN(  51)		 ::haxe::io::Bytes out1 = ::haxe::io::Bytes_obj::alloc((size + out));
HXLINE(  52)		int buf = (int)0;
HXLINE(  53)		int curbits = (int)0;
HXLINE(  54)		int mask = (((int)(int)1 << (int)nbits) - (int)1);
HXLINE(  55)		int pin = (int)0;
HXLINE(  56)		int pout = (int)0;
HXLINE(  57)		while((pout < size)){
HXLINE(  58)			while((curbits < nbits)){
HXLINE(  59)				curbits = (curbits + (int)8);
HXLINE(  60)				buf = ((int)buf << (int)(int)8);
HXLINE(  61)				pin = (pin + (int)1);
HXDLIN(  61)				buf = ((int)buf | (int)b->b->__get((pin - (int)1)));
            			}
HXLINE(  63)			curbits = (curbits - nbits);
HXLINE(  64)			{
HXLINE(  64)				pout = (pout + (int)1);
HXDLIN(  64)				::Array< unsigned char > base1 = base->b;
HXDLIN(  64)				out1->b[(pout - (int)1)] = base1->__get(((int)((int)buf >> (int)curbits) & (int)mask));
            			}
            		}
HXLINE(  66)		if ((curbits > (int)0)) {
HXLINE(  67)			pout = (pout + (int)1);
HXDLIN(  67)			::Array< unsigned char > base2 = base->b;
HXDLIN(  67)			out1->b[(pout - (int)1)] = base2->__get(((int)((int)buf << (int)(nbits - curbits)) & (int)mask));
            		}
HXLINE(  68)		return out1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,encodeBytes,return )

void BaseCode_obj::initTable(){
            	HX_STACKFRAME(&_hx_pos_b23e417e2bb3f320_72_initTable)
HXLINE(  73)		::Array< int > tbl = ::Array_obj< int >::__new();
HXLINE(  74)		{
HXLINE(  74)			int _g = (int)0;
HXDLIN(  74)			while((_g < (int)256)){
HXLINE(  74)				_g = (_g + (int)1);
HXDLIN(  74)				int i = (_g - (int)1);
HXLINE(  75)				tbl[i] = (int)-1;
            			}
            		}
HXLINE(  76)		{
HXLINE(  76)			int _g1 = (int)0;
HXDLIN(  76)			int _g2 = this->base->length;
HXDLIN(  76)			while((_g1 < _g2)){
HXLINE(  76)				_g1 = (_g1 + (int)1);
HXDLIN(  76)				int i1 = (_g1 - (int)1);
HXLINE(  77)				tbl[this->base->b->__get(i1)] = i1;
            			}
            		}
HXLINE(  78)		this->tbl = tbl;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseCode_obj,initTable,(void))

 ::haxe::io::Bytes BaseCode_obj::decodeBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_b23e417e2bb3f320_81_decodeBytes)
HXLINE(  85)		int nbits = this->nbits;
HXLINE(  86)		 ::haxe::io::Bytes base = this->base;
HXLINE(  87)		if (hx::IsNull( this->tbl )) {
HXLINE(  87)			this->initTable();
            		}
HXLINE(  88)		::Array< int > tbl = this->tbl;
HXLINE(  89)		int size = ((int)(b->length * nbits) >> (int)(int)3);
HXLINE(  90)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(size);
HXLINE(  91)		int buf = (int)0;
HXLINE(  92)		int curbits = (int)0;
HXLINE(  93)		int pin = (int)0;
HXLINE(  94)		int pout = (int)0;
HXLINE(  95)		while((pout < size)){
HXLINE(  96)			while((curbits < (int)8)){
HXLINE(  97)				curbits = (curbits + nbits);
HXLINE(  98)				buf = ((int)buf << (int)nbits);
HXLINE(  99)				pin = (pin + (int)1);
HXDLIN(  99)				int i = tbl->__get(b->b->__get((pin - (int)1)));
HXLINE( 100)				if ((i == (int)-1)) {
HXLINE( 101)					HX_STACK_DO_THROW(HX_("BaseCode : invalid encoded char",f9,14,33,18));
            				}
HXLINE( 102)				buf = ((int)buf | (int)i);
            			}
HXLINE( 104)			curbits = (curbits - (int)8);
HXLINE( 105)			{
HXLINE( 105)				pout = (pout + (int)1);
HXDLIN( 105)				::Array< unsigned char > out1 = out->b;
HXDLIN( 105)				out1[(pout - (int)1)] = ((int)((int)buf >> (int)curbits) & (int)(int)255);
            			}
            		}
HXLINE( 107)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,decodeBytes,return )


hx::ObjectPtr< BaseCode_obj > BaseCode_obj::__new( ::haxe::io::Bytes base) {
	hx::ObjectPtr< BaseCode_obj > __this = new BaseCode_obj();
	__this->__construct(base);
	return __this;
}

hx::ObjectPtr< BaseCode_obj > BaseCode_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes base) {
	BaseCode_obj *__this = (BaseCode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BaseCode_obj), true, "haxe.crypto.BaseCode"));
	*(void **)__this = BaseCode_obj::_hx_vtable;
	__this->__construct(base);
	return __this;
}

BaseCode_obj::BaseCode_obj()
{
}

void BaseCode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseCode);
	HX_MARK_MEMBER_NAME(base,"base");
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(tbl,"tbl");
	HX_MARK_END_CLASS();
}

void BaseCode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(base,"base");
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(tbl,"tbl");
}

hx::Val BaseCode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tbl") ) { return hx::Val( tbl ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { return hx::Val( base ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return hx::Val( nbits ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initTable") ) { return hx::Val( initTable_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"encodeBytes") ) { return hx::Val( encodeBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { return hx::Val( decodeBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BaseCode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tbl") ) { tbl=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { base=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseCode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("base","\x11","\xe8","\x10","\x41"));
	outFields->push(HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97"));
	outFields->push(HX_HCSTRING("tbl","\x3e","\x5b","\x58","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BaseCode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(BaseCode_obj,base),HX_HCSTRING("base","\x11","\xe8","\x10","\x41")},
	{hx::fsInt,(int)offsetof(BaseCode_obj,nbits),HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(BaseCode_obj,tbl),HX_HCSTRING("tbl","\x3e","\x5b","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BaseCode_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseCode_obj_sMemberFields[] = {
	HX_HCSTRING("base","\x11","\xe8","\x10","\x41"),
	HX_HCSTRING("nbits","\x74","\xca","\x2a","\x97"),
	HX_HCSTRING("tbl","\x3e","\x5b","\x58","\x00"),
	HX_HCSTRING("encodeBytes","\x75","\x36","\x2e","\xc9"),
	HX_HCSTRING("initTable","\xde","\xd2","\x75","\x26"),
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	::String(null()) };

static void BaseCode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BaseCode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseCode_obj::__mClass;

void BaseCode_obj::__register()
{
	hx::Object *dummy = new BaseCode_obj;
	BaseCode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.BaseCode","\x83","\xc2","\xf9","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BaseCode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BaseCode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseCode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BaseCode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseCode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseCode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
