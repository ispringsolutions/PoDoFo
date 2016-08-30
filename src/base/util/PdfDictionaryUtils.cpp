#include "PdfDictionaryUtils.h"

namespace PoDoFo {
namespace Util {

namespace
{
const PoDoFo::PdfDictionary * GetDictionaryByKey(const PdfDictionary *pDictionary, const PdfName &key)
{
	if (pDictionary && pDictionary->HasKey(key) && pDictionary->GetKey(key)->IsDictionary())
		return &(pDictionary->GetKey(key)->GetDictionary());
	return nullptr;
}

const PoDoFo::PdfArray * GetArrayByKey(const PdfDictionary *pDictionary, const PdfName &key)
{
	if (pDictionary && pDictionary->HasKey(key) && pDictionary->GetKey(key)->IsArray())
		return &(pDictionary->GetKey(key)->GetArray());
	return nullptr;
}

pdf_int64 GetNumberByKey(const PdfDictionary *pDictionary, const PdfName &key, pdf_int64 defaultValue)
{
	if (pDictionary && pDictionary->HasKey(key) && pDictionary->GetKey(key)->IsNumber())
		return pDictionary->GetKey(key)->GetNumber();
	return defaultValue;
}
}

const PoDoFo::PdfDictionary * GetObjectDecodeParms(const PdfDictionary *pDictionary)
{
	if (const PoDoFo::PdfDictionary *pDecodeParms = GetDictionaryByKey(pDictionary, "DecodeParms"))
	{
		return pDecodeParms;
	}
	if (const PoDoFo::PdfDictionary *pDP = GetDictionaryByKey(pDictionary, "DP"))
	{
		return pDP;
	}
	return pDictionary;
}

}
}
