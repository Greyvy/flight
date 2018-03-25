// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_api_buffers_DataView
#define INCLUDED_snow_api_buffers_DataView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,api,buffers,DataView)

namespace snow{
namespace api{
namespace buffers{


class HXCPP_CLASS_ATTRIBUTES DataView_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DataView_obj OBJ_;
		DataView_obj();

	public:
		enum { _hx_ClassId = 0x444068eb };

		void __construct(::Array< unsigned char > buffer,hx::Null< int >  __o_byteOffset, ::Dynamic byteLength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="snow.api.buffers.DataView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"snow.api.buffers.DataView"); }
		static hx::ObjectPtr< DataView_obj > __new(::Array< unsigned char > buffer,hx::Null< int >  __o_byteOffset, ::Dynamic byteLength);
		static hx::ObjectPtr< DataView_obj > __alloc(hx::Ctx *_hx_ctx,::Array< unsigned char > buffer,hx::Null< int >  __o_byteOffset, ::Dynamic byteLength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DataView","\xcf","\xcd","\x74","\x67"); }

		::Array< unsigned char > buffer;
		int byteLength;
		int byteOffset;
		int getInt8(int byteOffset);
		::Dynamic getInt8_dyn();

		int getInt16(int byteOffset);
		::Dynamic getInt16_dyn();

		int getInt32(int byteOffset);
		::Dynamic getInt32_dyn();

		int getUint8(int byteOffset);
		::Dynamic getUint8_dyn();

		int getUint16(int byteOffset);
		::Dynamic getUint16_dyn();

		int getUint32(int byteOffset);
		::Dynamic getUint32_dyn();

		Float getFloat32(int byteOffset);
		::Dynamic getFloat32_dyn();

		Float getFloat64(int byteOffset);
		::Dynamic getFloat64_dyn();

		void setInt8(int byteOffset,int value);
		::Dynamic setInt8_dyn();

		void setInt16(int byteOffset,int value);
		::Dynamic setInt16_dyn();

		void setInt32(int byteOffset,int value);
		::Dynamic setInt32_dyn();

		void setUint8(int byteOffset,int value);
		::Dynamic setUint8_dyn();

		void setUint16(int byteOffset,int value);
		::Dynamic setUint16_dyn();

		void setUint32(int byteOffset,int value);
		::Dynamic setUint32_dyn();

		void setFloat32(int byteOffset,Float value);
		::Dynamic setFloat32_dyn();

		void setFloat64(int byteOffset,Float value);
		::Dynamic setFloat64_dyn();

};

} // end namespace snow
} // end namespace api
} // end namespace buffers

#endif /* INCLUDED_snow_api_buffers_DataView */ 
