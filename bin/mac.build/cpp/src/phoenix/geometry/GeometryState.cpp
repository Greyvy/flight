// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_luxe_resource_Resource
#include <luxe/resource/Resource.h>
#endif
#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_phoenix_Shader
#include <phoenix/Shader.h>
#endif
#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_geometry_GeometryState
#include <phoenix/geometry/GeometryState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_11_new,"phoenix.geometry.GeometryState","new",0xdad5fe14,"phoenix.geometry.GeometryState.new","phoenix/geometry/GeometryState.hx",11,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_42_clone_onto,"phoenix.geometry.GeometryState","clone_onto",0xd3d1f488,"phoenix.geometry.GeometryState.clone_onto","phoenix/geometry/GeometryState.hx",42,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_63_str,"phoenix.geometry.GeometryState","str",0xdad9d665,"phoenix.geometry.GeometryState.str","phoenix/geometry/GeometryState.hx",63,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_85_clean,"phoenix.geometry.GeometryState","clean",0x6a0b743d,"phoenix.geometry.GeometryState.clean","phoenix/geometry/GeometryState.hx",85,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_155_set_primitive_type,"phoenix.geometry.GeometryState","set_primitive_type",0xcd8c389b,"phoenix.geometry.GeometryState.set_primitive_type","phoenix/geometry/GeometryState.hx",155,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_160_set_texture,"phoenix.geometry.GeometryState","set_texture",0x1cfd31b2,"phoenix.geometry.GeometryState.set_texture","phoenix/geometry/GeometryState.hx",160,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_165_set_shader,"phoenix.geometry.GeometryState","set_shader",0x806b7e2e,"phoenix.geometry.GeometryState.set_shader","phoenix/geometry/GeometryState.hx",165,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_171_set_depth,"phoenix.geometry.GeometryState","set_depth",0x291da61a,"phoenix.geometry.GeometryState.set_depth","phoenix/geometry/GeometryState.hx",171,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_174_set_clip,"phoenix.geometry.GeometryState","set_clip",0x45922999,"phoenix.geometry.GeometryState.set_clip","phoenix/geometry/GeometryState.hx",174,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_179_set_clip_x,"phoenix.geometry.GeometryState","set_clip_x",0x6da2d512,"phoenix.geometry.GeometryState.set_clip_x","phoenix/geometry/GeometryState.hx",179,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_183_set_clip_y,"phoenix.geometry.GeometryState","set_clip_y",0x6da2d513,"phoenix.geometry.GeometryState.set_clip_y","phoenix/geometry/GeometryState.hx",183,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_187_set_clip_w,"phoenix.geometry.GeometryState","set_clip_w",0x6da2d511,"phoenix.geometry.GeometryState.set_clip_w","phoenix/geometry/GeometryState.hx",187,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_191_set_clip_h,"phoenix.geometry.GeometryState","set_clip_h",0x6da2d502,"phoenix.geometry.GeometryState.set_clip_h","phoenix/geometry/GeometryState.hx",191,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_195_set_blend_disabled,"phoenix.geometry.GeometryState","set_blend_disabled",0x6976ae73,"phoenix.geometry.GeometryState.set_blend_disabled","phoenix/geometry/GeometryState.hx",195,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_199_set_blend_src_alpha,"phoenix.geometry.GeometryState","set_blend_src_alpha",0x43e0c3ac,"phoenix.geometry.GeometryState.set_blend_src_alpha","phoenix/geometry/GeometryState.hx",199,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_203_set_blend_src_rgb,"phoenix.geometry.GeometryState","set_blend_src_rgb",0xaab9a7db,"phoenix.geometry.GeometryState.set_blend_src_rgb","phoenix/geometry/GeometryState.hx",203,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_207_set_blend_dest_alpha,"phoenix.geometry.GeometryState","set_blend_dest_alpha",0xfdd71b38,"phoenix.geometry.GeometryState.set_blend_dest_alpha","phoenix/geometry/GeometryState.hx",207,0xdf8297bc)
HX_LOCAL_STACK_FRAME(_hx_pos_673e014bc7fc9ae3_211_set_blend_dest_rgb,"phoenix.geometry.GeometryState","set_blend_dest_rgb",0xb1c6c467,"phoenix.geometry.GeometryState.set_blend_dest_rgb","phoenix/geometry/GeometryState.hx",211,0xdf8297bc)
namespace phoenix{
namespace geometry{

void GeometryState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_11_new)
HXLINE(  30)		this->blend_dest_rgb = (int)771;
HXLINE(  29)		this->blend_dest_alpha = (int)771;
HXLINE(  28)		this->blend_src_rgb = (int)770;
HXLINE(  27)		this->blend_src_alpha = (int)770;
HXLINE(  26)		this->blend_disabled = false;
HXLINE(  25)		this->clip_h = ((Float)0);
HXLINE(  24)		this->clip_w = ((Float)0);
HXLINE(  23)		this->clip_y = ((Float)0);
HXLINE(  22)		this->clip_x = ((Float)0);
HXLINE(  21)		this->clip = false;
HXLINE(  20)		this->depth = ((Float)0.0);
HXLINE(  15)		this->ignore_blend = true;
HXLINE(  14)		this->log = false;
HXLINE(  13)		this->dirty = false;
HXLINE(  35)		{
HXLINE(  35)			this->dirty = true;
HXDLIN(  35)			this->texture = null();
            		}
HXLINE(  36)		{
HXLINE(  36)			this->dirty = true;
HXDLIN(  36)			this->shader = null();
            		}
HXLINE(  37)		{
HXLINE(  37)			this->dirty = true;
HXDLIN(  37)			this->primitive_type = (int)0;
            		}
            	}

Dynamic GeometryState_obj::__CreateEmpty() { return new GeometryState_obj; }

void *GeometryState_obj::_hx_vtable = 0;

Dynamic GeometryState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GeometryState_obj > _hx_result = new GeometryState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GeometryState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e9f2746;
}

void GeometryState_obj::clone_onto( ::phoenix::geometry::GeometryState _other){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_42_clone_onto)
HXLINE(  44)		_other->dirty = this->dirty;
HXLINE(  45)		{
HXLINE(  45)			_other->dirty = true;
HXDLIN(  45)			_other->texture = this->texture;
            		}
HXLINE(  46)		{
HXLINE(  46)			_other->dirty = true;
HXDLIN(  46)			_other->shader = this->shader;
            		}
HXLINE(  47)		_other->depth = this->depth;
HXLINE(  48)		{
HXLINE(  48)			_other->dirty = true;
HXDLIN(  48)			_other->primitive_type = this->primitive_type;
            		}
HXLINE(  49)		{
HXLINE(  49)			_other->dirty = true;
HXDLIN(  49)			_other->clip = this->clip;
            		}
HXLINE(  50)		{
HXLINE(  50)			_other->dirty = true;
HXDLIN(  50)			_other->clip_x = this->clip_x;
            		}
HXLINE(  51)		{
HXLINE(  51)			_other->dirty = true;
HXDLIN(  51)			_other->clip_y = this->clip_y;
            		}
HXLINE(  52)		{
HXLINE(  52)			_other->dirty = true;
HXDLIN(  52)			_other->clip_w = this->clip_w;
            		}
HXLINE(  53)		{
HXLINE(  53)			_other->dirty = true;
HXDLIN(  53)			_other->clip_h = this->clip_h;
            		}
HXLINE(  54)		{
HXLINE(  54)			_other->dirty = true;
HXDLIN(  54)			_other->blend_disabled = this->blend_disabled;
            		}
HXLINE(  55)		{
HXLINE(  55)			_other->dirty = true;
HXDLIN(  55)			_other->blend_src_alpha = this->blend_src_alpha;
            		}
HXLINE(  56)		{
HXLINE(  56)			_other->dirty = true;
HXDLIN(  56)			_other->blend_src_rgb = this->blend_src_rgb;
            		}
HXLINE(  57)		{
HXLINE(  57)			_other->dirty = true;
HXDLIN(  57)			_other->blend_dest_alpha = this->blend_dest_alpha;
            		}
HXLINE(  58)		{
HXLINE(  58)			_other->dirty = true;
HXDLIN(  58)			_other->blend_dest_rgb = this->blend_dest_rgb;
            		}
HXLINE(  59)		_other->ignore_blend = this->ignore_blend;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,clone_onto,(void))

void GeometryState_obj::str(){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_63_str)
HXLINE(  65)		if (!(this->log)) {
HXLINE(  65)			return;
            		}
HXLINE(  67)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  67)		::String _hx_tmp1 = (HX_("\t+ GEOMETRYSTATE ",9f,6b,f0,11) + ::Std_obj::string(this->dirty));
HXDLIN(  67)		_hx_tmp(_hx_tmp1,hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),67,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
HXLINE(  68)		 ::Dynamic _hx_tmp2 = ::haxe::Log_obj::trace;
HXDLIN(  68)		_hx_tmp2((HX_("\t\tdepth - ",30,aa,11,c4) + this->depth),hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),68,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
HXLINE(  69)		 ::Dynamic _hx_tmp3 = ::haxe::Log_obj::trace;
HXDLIN(  69)		::String _hx_tmp4;
HXDLIN(  69)		if (hx::IsNull( this->texture )) {
HXLINE(  69)			_hx_tmp4 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE(  69)			_hx_tmp4 = this->texture->id;
            		}
HXDLIN(  69)		_hx_tmp3((HX_("\t\ttexture - ",58,01,33,88) + _hx_tmp4),hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),69,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
HXLINE(  70)		if (hx::IsNotNull( this->texture )) {
HXLINE(  71)			 ::Dynamic _hx_tmp5 = ::haxe::Log_obj::trace;
HXDLIN(  71)			 ::opengl::GLObject this1 = this->texture->texture;
HXDLIN(  71)			int _hx_tmp6;
HXDLIN(  71)			if (hx::IsNull( this1 )) {
HXLINE(  71)				_hx_tmp6 = (int)0;
            			}
            			else {
HXLINE(  71)				_hx_tmp6 = this1->id;
            			}
HXDLIN(  71)			_hx_tmp5((HX_("\t\t\t ",d7,c7,f9,05) + ((HX_("GLTexture(",32,1e,d3,33) + _hx_tmp6) + HX_(")",29,00,00,00))),hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),71,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
            		}
HXLINE(  73)		 ::Dynamic _hx_tmp7 = ::haxe::Log_obj::trace;
HXDLIN(  73)		::String _hx_tmp8;
HXDLIN(  73)		if (hx::IsNull( this->shader )) {
HXLINE(  73)			_hx_tmp8 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE(  73)			_hx_tmp8 = this->shader->id;
            		}
HXDLIN(  73)		_hx_tmp7((HX_("\t\tshader - ",8e,f1,9d,79) + _hx_tmp8),hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),73,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
HXLINE(  74)		 ::Dynamic _hx_tmp9 = ::haxe::Log_obj::trace;
HXDLIN(  74)		_hx_tmp9((HX_("\t\tprimitive_type - ",41,ea,f1,1f) + this->primitive_type),hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),74,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
HXLINE(  75)		 ::Dynamic _hx_tmp10 = ::haxe::Log_obj::trace;
HXDLIN(  75)		::String _hx_tmp11 = (HX_("\t\tclip - ",c3,d6,cd,6f) + ::Std_obj::string(this->clip));
HXDLIN(  75)		_hx_tmp10(_hx_tmp11,hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),75,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
HXLINE(  76)		 ::Dynamic _hx_tmp12 = ::haxe::Log_obj::trace;
HXDLIN(  76)		_hx_tmp12((((((((HX_("\t\tclip rect - ",5f,4b,3b,99) + this->clip_x) + HX_(",",2c,00,00,00)) + this->clip_y) + HX_(",",2c,00,00,00)) + this->clip_w) + HX_(",",2c,00,00,00)) + this->clip_h),hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),76,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
HXLINE(  77)		 ::Dynamic _hx_tmp13 = ::haxe::Log_obj::trace;
HXDLIN(  77)		::String _hx_tmp14 = ((HX_("\t\tblend - ",a2,b7,c9,97) + ::Std_obj::string(this->blend_disabled)) + HX_(" - src_alpha(",78,f7,ac,82));
HXDLIN(  77)		_hx_tmp13(((((((((_hx_tmp14 + this->blend_src_alpha) + HX_(") src_rgb(",cd,1d,61,f4)) + this->blend_src_rgb) + HX_(") dest_alpha(",10,bc,05,f6)) + this->blend_dest_alpha) + HX_(") dest_rgb(",01,54,66,b2)) + this->blend_dest_rgb) + HX_(")",29,00,00,00)),hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),77,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
HXLINE(  78)		::haxe::Log_obj::trace(HX_("\t- GEOMETRYSTATE",e3,08,d7,bb),hx::SourceInfo(HX_("GeometryState.hx",3f,ca,64,05),78,HX_("phoenix.geometry.GeometryState",22,a4,58,e5),HX_("str",b1,a8,57,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(GeometryState_obj,str,(void))

void GeometryState_obj::clean(){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_85_clean)
HXDLIN(  85)		this->dirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GeometryState_obj,clean,(void))

int GeometryState_obj::set_primitive_type(int val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_155_set_primitive_type)
HXLINE( 156)		this->dirty = true;
HXLINE( 157)		return (this->primitive_type = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_primitive_type,return )

 ::phoenix::Texture GeometryState_obj::set_texture( ::phoenix::Texture val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_160_set_texture)
HXLINE( 161)		this->dirty = true;
HXLINE( 162)		return (this->texture = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_texture,return )

 ::phoenix::Shader GeometryState_obj::set_shader( ::phoenix::Shader val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_165_set_shader)
HXLINE( 166)		this->dirty = true;
HXLINE( 167)		return (this->shader = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_shader,return )

Float GeometryState_obj::set_depth(Float val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_171_set_depth)
HXDLIN( 171)		return (this->depth = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_depth,return )

bool GeometryState_obj::set_clip(bool val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_174_set_clip)
HXLINE( 175)		this->dirty = true;
HXLINE( 176)		return (this->clip = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip,return )

Float GeometryState_obj::set_clip_x(Float val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_179_set_clip_x)
HXLINE( 180)		this->dirty = true;
HXLINE( 181)		return (this->clip_x = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_x,return )

Float GeometryState_obj::set_clip_y(Float val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_183_set_clip_y)
HXLINE( 184)		this->dirty = true;
HXLINE( 185)		return (this->clip_y = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_y,return )

Float GeometryState_obj::set_clip_w(Float val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_187_set_clip_w)
HXLINE( 188)		this->dirty = true;
HXLINE( 189)		return (this->clip_w = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_w,return )

Float GeometryState_obj::set_clip_h(Float val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_191_set_clip_h)
HXLINE( 192)		this->dirty = true;
HXLINE( 193)		return (this->clip_h = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_clip_h,return )

bool GeometryState_obj::set_blend_disabled(bool val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_195_set_blend_disabled)
HXLINE( 196)		this->dirty = true;
HXLINE( 197)		return (this->blend_disabled = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_blend_disabled,return )

int GeometryState_obj::set_blend_src_alpha(int val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_199_set_blend_src_alpha)
HXLINE( 200)		this->dirty = true;
HXLINE( 201)		return (this->blend_src_alpha = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_blend_src_alpha,return )

int GeometryState_obj::set_blend_src_rgb(int val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_203_set_blend_src_rgb)
HXLINE( 204)		this->dirty = true;
HXLINE( 205)		return (this->blend_src_rgb = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_blend_src_rgb,return )

int GeometryState_obj::set_blend_dest_alpha(int val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_207_set_blend_dest_alpha)
HXLINE( 208)		this->dirty = true;
HXLINE( 209)		return (this->blend_dest_alpha = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_blend_dest_alpha,return )

int GeometryState_obj::set_blend_dest_rgb(int val){
            	HX_STACKFRAME(&_hx_pos_673e014bc7fc9ae3_211_set_blend_dest_rgb)
HXLINE( 212)		this->dirty = true;
HXLINE( 213)		return (this->blend_dest_rgb = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GeometryState_obj,set_blend_dest_rgb,return )


hx::ObjectPtr< GeometryState_obj > GeometryState_obj::__new() {
	hx::ObjectPtr< GeometryState_obj > __this = new GeometryState_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< GeometryState_obj > GeometryState_obj::__alloc(hx::Ctx *_hx_ctx) {
	GeometryState_obj *__this = (GeometryState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GeometryState_obj), true, "phoenix.geometry.GeometryState"));
	*(void **)__this = GeometryState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GeometryState_obj::GeometryState_obj()
{
}

void GeometryState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeometryState);
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(ignore_blend,"ignore_blend");
	HX_MARK_MEMBER_NAME(primitive_type,"primitive_type");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(clip_x,"clip_x");
	HX_MARK_MEMBER_NAME(clip_y,"clip_y");
	HX_MARK_MEMBER_NAME(clip_w,"clip_w");
	HX_MARK_MEMBER_NAME(clip_h,"clip_h");
	HX_MARK_MEMBER_NAME(blend_disabled,"blend_disabled");
	HX_MARK_MEMBER_NAME(blend_src_alpha,"blend_src_alpha");
	HX_MARK_MEMBER_NAME(blend_src_rgb,"blend_src_rgb");
	HX_MARK_MEMBER_NAME(blend_dest_alpha,"blend_dest_alpha");
	HX_MARK_MEMBER_NAME(blend_dest_rgb,"blend_dest_rgb");
	HX_MARK_END_CLASS();
}

void GeometryState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(ignore_blend,"ignore_blend");
	HX_VISIT_MEMBER_NAME(primitive_type,"primitive_type");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(clip_x,"clip_x");
	HX_VISIT_MEMBER_NAME(clip_y,"clip_y");
	HX_VISIT_MEMBER_NAME(clip_w,"clip_w");
	HX_VISIT_MEMBER_NAME(clip_h,"clip_h");
	HX_VISIT_MEMBER_NAME(blend_disabled,"blend_disabled");
	HX_VISIT_MEMBER_NAME(blend_src_alpha,"blend_src_alpha");
	HX_VISIT_MEMBER_NAME(blend_src_rgb,"blend_src_rgb");
	HX_VISIT_MEMBER_NAME(blend_dest_alpha,"blend_dest_alpha");
	HX_VISIT_MEMBER_NAME(blend_dest_rgb,"blend_dest_rgb");
}

hx::Val GeometryState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return hx::Val( log ); }
		if (HX_FIELD_EQ(inName,"str") ) { return hx::Val( str_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { return hx::Val( clip ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"depth") ) { return hx::Val( depth ); }
		if (HX_FIELD_EQ(inName,"clean") ) { return hx::Val( clean_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"clip_x") ) { return hx::Val( clip_x ); }
		if (HX_FIELD_EQ(inName,"clip_y") ) { return hx::Val( clip_y ); }
		if (HX_FIELD_EQ(inName,"clip_w") ) { return hx::Val( clip_w ); }
		if (HX_FIELD_EQ(inName,"clip_h") ) { return hx::Val( clip_h ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return hx::Val( texture ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_clip") ) { return hx::Val( set_clip_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_depth") ) { return hx::Val( set_depth_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clone_onto") ) { return hx::Val( clone_onto_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return hx::Val( set_shader_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clip_x") ) { return hx::Val( set_clip_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clip_y") ) { return hx::Val( set_clip_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clip_w") ) { return hx::Val( set_clip_w_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clip_h") ) { return hx::Val( set_clip_h_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_texture") ) { return hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignore_blend") ) { return hx::Val( ignore_blend ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"blend_src_rgb") ) { return hx::Val( blend_src_rgb ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { return hx::Val( primitive_type ); }
		if (HX_FIELD_EQ(inName,"blend_disabled") ) { return hx::Val( blend_disabled ); }
		if (HX_FIELD_EQ(inName,"blend_dest_rgb") ) { return hx::Val( blend_dest_rgb ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blend_src_alpha") ) { return hx::Val( blend_src_alpha ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blend_dest_alpha") ) { return hx::Val( blend_dest_alpha ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_blend_src_rgb") ) { return hx::Val( set_blend_src_rgb_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_primitive_type") ) { return hx::Val( set_primitive_type_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend_disabled") ) { return hx::Val( set_blend_disabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend_dest_rgb") ) { return hx::Val( set_blend_dest_rgb_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_blend_src_alpha") ) { return hx::Val( set_blend_src_alpha_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_blend_dest_alpha") ) { return hx::Val( set_blend_dest_alpha_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GeometryState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_clip(inValue.Cast< bool >()) );clip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_depth(inValue.Cast< Float >()) );depth=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_shader(inValue.Cast<  ::phoenix::Shader >()) );shader=inValue.Cast<  ::phoenix::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_x") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_clip_x(inValue.Cast< Float >()) );clip_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_y") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_clip_y(inValue.Cast< Float >()) );clip_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_w") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_clip_w(inValue.Cast< Float >()) );clip_w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clip_h") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_clip_h(inValue.Cast< Float >()) );clip_h=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_texture(inValue.Cast<  ::phoenix::Texture >()) );texture=inValue.Cast<  ::phoenix::Texture >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignore_blend") ) { ignore_blend=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"blend_src_rgb") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blend_src_rgb(inValue.Cast< int >()) );blend_src_rgb=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primitive_type") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_primitive_type(inValue.Cast< int >()) );primitive_type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend_disabled") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blend_disabled(inValue.Cast< bool >()) );blend_disabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend_dest_rgb") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blend_dest_rgb(inValue.Cast< int >()) );blend_dest_rgb=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blend_src_alpha") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blend_src_alpha(inValue.Cast< int >()) );blend_src_alpha=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blend_dest_alpha") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blend_dest_alpha(inValue.Cast< int >()) );blend_dest_alpha=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeometryState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("ignore_blend","\x24","\x02","\xf8","\x78"));
	outFields->push(HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"));
	outFields->push(HX_HCSTRING("clip_x","\x09","\x16","\x58","\x0a"));
	outFields->push(HX_HCSTRING("clip_y","\x0a","\x16","\x58","\x0a"));
	outFields->push(HX_HCSTRING("clip_w","\x08","\x16","\x58","\x0a"));
	outFields->push(HX_HCSTRING("clip_h","\xf9","\x15","\x58","\x0a"));
	outFields->push(HX_HCSTRING("blend_disabled","\x6a","\x3e","\x58","\x24"));
	outFields->push(HX_HCSTRING("blend_src_alpha","\xd5","\x2b","\x5d","\x0e"));
	outFields->push(HX_HCSTRING("blend_src_rgb","\xc4","\x83","\xd8","\x0a"));
	outFields->push(HX_HCSTRING("blend_dest_alpha","\xef","\xd6","\x35","\x60"));
	outFields->push(HX_HCSTRING("blend_dest_rgb","\x5e","\x54","\xa8","\x6c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GeometryState_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GeometryState_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,ignore_blend),HX_HCSTRING("ignore_blend","\x24","\x02","\xf8","\x78")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,primitive_type),HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88")},
	{hx::fsObject /*::phoenix::Shader*/ ,(int)offsetof(GeometryState_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::phoenix::Texture*/ ,(int)offsetof(GeometryState_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,clip),HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,clip_x),HX_HCSTRING("clip_x","\x09","\x16","\x58","\x0a")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,clip_y),HX_HCSTRING("clip_y","\x0a","\x16","\x58","\x0a")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,clip_w),HX_HCSTRING("clip_w","\x08","\x16","\x58","\x0a")},
	{hx::fsFloat,(int)offsetof(GeometryState_obj,clip_h),HX_HCSTRING("clip_h","\xf9","\x15","\x58","\x0a")},
	{hx::fsBool,(int)offsetof(GeometryState_obj,blend_disabled),HX_HCSTRING("blend_disabled","\x6a","\x3e","\x58","\x24")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,blend_src_alpha),HX_HCSTRING("blend_src_alpha","\xd5","\x2b","\x5d","\x0e")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,blend_src_rgb),HX_HCSTRING("blend_src_rgb","\xc4","\x83","\xd8","\x0a")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,blend_dest_alpha),HX_HCSTRING("blend_dest_alpha","\xef","\xd6","\x35","\x60")},
	{hx::fsInt,(int)offsetof(GeometryState_obj,blend_dest_rgb),HX_HCSTRING("blend_dest_rgb","\x5e","\x54","\xa8","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GeometryState_obj_sStaticStorageInfo = 0;
#endif

static ::String GeometryState_obj_sMemberFields[] = {
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("ignore_blend","\x24","\x02","\xf8","\x78"),
	HX_HCSTRING("primitive_type","\x92","\xc8","\x6d","\x88"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("clip_x","\x09","\x16","\x58","\x0a"),
	HX_HCSTRING("clip_y","\x0a","\x16","\x58","\x0a"),
	HX_HCSTRING("clip_w","\x08","\x16","\x58","\x0a"),
	HX_HCSTRING("clip_h","\xf9","\x15","\x58","\x0a"),
	HX_HCSTRING("blend_disabled","\x6a","\x3e","\x58","\x24"),
	HX_HCSTRING("blend_src_alpha","\xd5","\x2b","\x5d","\x0e"),
	HX_HCSTRING("blend_src_rgb","\xc4","\x83","\xd8","\x0a"),
	HX_HCSTRING("blend_dest_alpha","\xef","\xd6","\x35","\x60"),
	HX_HCSTRING("blend_dest_rgb","\x5e","\x54","\xa8","\x6c"),
	HX_HCSTRING("clone_onto","\xbc","\x43","\x8c","\x64"),
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("clean","\x89","\x71","\x5b","\x48"),
	HX_HCSTRING("set_primitive_type","\xcf","\xdb","\xb6","\x00"),
	HX_HCSTRING("set_texture","\xfe","\x2f","\x48","\x2f"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("set_depth","\x66","\x39","\x24","\xfe"),
	HX_HCSTRING("set_clip","\xcd","\x83","\xda","\x6f"),
	HX_HCSTRING("set_clip_x","\x46","\x24","\x5d","\xfe"),
	HX_HCSTRING("set_clip_y","\x47","\x24","\x5d","\xfe"),
	HX_HCSTRING("set_clip_w","\x45","\x24","\x5d","\xfe"),
	HX_HCSTRING("set_clip_h","\x36","\x24","\x5d","\xfe"),
	HX_HCSTRING("set_blend_disabled","\xa7","\x51","\xa1","\x9c"),
	HX_HCSTRING("set_blend_src_alpha","\xf8","\xed","\x04","\xd6"),
	HX_HCSTRING("set_blend_src_rgb","\x27","\x67","\xb6","\x34"),
	HX_HCSTRING("set_blend_dest_alpha","\x6c","\xf3","\x57","\x4b"),
	HX_HCSTRING("set_blend_dest_rgb","\x9b","\x67","\xf1","\xe4"),
	::String(null()) };

static void GeometryState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeometryState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GeometryState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeometryState_obj::__mClass,"__mClass");
};

#endif

hx::Class GeometryState_obj::__mClass;

void GeometryState_obj::__register()
{
	hx::Object *dummy = new GeometryState_obj;
	GeometryState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("phoenix.geometry.GeometryState","\x22","\xa4","\x58","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GeometryState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GeometryState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeometryState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GeometryState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GeometryState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GeometryState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace phoenix
} // end namespace geometry