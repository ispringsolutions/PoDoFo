#ifndef PDF_PDFDICTIONARYUTILS_H
#define PDF_PDFDICTIONARYUTILS_H

#if defined(BUILDING_PODOFO)

#include "../PdfDictionary.h"
#include "../PdfArray.h"

namespace PoDoFo {
namespace Util {

/// Returns decode params dictionary used to initialize filters.
const PdfDictionary *GetObjectDecodeParms( const PdfDictionary *pDictionary );

/// Returns decode transform dictionary used after all filters.
const PdfArray *GetObjectDecode( const PdfDictionary *pDictionary );

/// Returns BitsPerComponent value for object dictionary,
/// or returns 0 if no BitsPerComponent exists.
pdf_int64 GetObjectBitsPerComponent( const PdfDictionary *pDictionary );

}
}

#endif

#endif
