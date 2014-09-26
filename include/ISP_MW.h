#ifndef ISP_MW_H_
#define ISP_MW_H_


#include "Type.h"
#include "Type_Conv.h"
#include "Calculation.h"
#include "Image_Type.h"
#include "Specification.h"
#include "LUT.h"
#include "Histogram.h"

#include "ImageIO.h"
#include "Transform.h"
#include "Convolution.h"
#include "Gaussian.h"
#include "Bilateral.h"
#include "Highlight_Removal.h"
#include "Tone_Mapping.h"
#include "Retinex.h"


int Filtering(const int argc, char ** argv);


#endif