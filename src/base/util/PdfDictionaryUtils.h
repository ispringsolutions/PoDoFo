#ifndef PDF_PDFDICTIONARYUTILS_H
#define PDF_PDFDICTIONARYUTILS_H

#if defined(BUILDING_PODOFO)

#include "../PdfDictionary.h"
#include "../PdfArray.h"

namespace PoDoFo {
namespace Util {

/// Returns decode params dictionary used to initialize filters.
const PdfDictionary *GetObjectDecodeParms( const PdfDictionary *pDictionary );

}
}

#endif

#endif
