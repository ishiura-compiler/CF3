#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = 127LL;
volatile int32_t t3 = 1980;
static int16_t x33 = INT16_MIN;
static int64_t x52 = INT64_MAX;
int32_t t8 = -30618;
int16_t x65 = 3;
int32_t t12 = 3;
static int32_t t15 = -4;
uint64_t x86 = UINT64_MAX;
uint8_t x94 = 24U;
int8_t x95 = 2;
volatile int32_t t17 = -1674723;
int16_t x102 = -1;
int16_t x113 = -186;
uint8_t x116 = UINT8_MAX;
volatile int8_t x123 = INT8_MIN;
int64_t x130 = 553LL;
int16_t x131 = 51;
static volatile uint32_t x142 = 8U;
uint32_t x146 = 6U;
volatile int8_t x148 = INT8_MAX;
int32_t x174 = INT32_MIN;
uint64_t x179 = UINT64_MAX;
uint16_t x188 = 4U;
static int8_t x189 = INT8_MAX;
int32_t x204 = INT32_MIN;
volatile int8_t x213 = INT8_MAX;
static int32_t x216 = INT32_MIN;
volatile uint8_t x219 = UINT8_MAX;
int32_t x227 = INT32_MIN;
int32_t x233 = INT32_MIN;
static int64_t x249 = 130971LL;
int64_t x253 = -1LL;
int8_t x254 = 1;
int16_t x261 = 1;
int16_t x265 = INT16_MIN;
uint8_t x266 = UINT8_MAX;
int64_t x267 = INT64_MIN;
int64_t x279 = -455860011924LL;
int16_t x280 = INT16_MIN;
int32_t t48 = -1888;
volatile int8_t x286 = -31;
volatile int32_t t50 = 138;
uint16_t x294 = 1U;
uint32_t x296 = 420725433U;
uint16_t x307 = 15U;
uint64_t x311 = 103252970519640LLU;
volatile int16_t x319 = -16;
int32_t x320 = -1;
int32_t t57 = -1;
volatile int16_t x326 = INT16_MIN;
int32_t x327 = INT32_MIN;
volatile int32_t t58 = 3325120;
static int16_t x334 = INT16_MIN;
volatile int32_t t59 = 6545;
uint64_t x341 = UINT64_MAX;
static volatile int32_t t61 = 3961100;
uint64_t x345 = 2075870295872LLU;
uint32_t x346 = 0U;
volatile int32_t t62 = 4915961;
int32_t x352 = -1;
int8_t x355 = 3;
int64_t x362 = 65103342108LL;
volatile int8_t x363 = 14;
static uint16_t x364 = 48U;
static uint64_t x366 = 1117705738LLU;
int64_t x367 = -121496877480281LL;
int32_t t69 = -99;
int64_t x392 = -1LL;
volatile uint64_t x404 = 178LLU;
static uint16_t x406 = 3952U;
int32_t t74 = -76771281;
int8_t x410 = 43;
uint16_t x411 = 46U;
volatile int8_t x416 = -15;
uint16_t x422 = UINT16_MAX;
volatile int32_t t77 = -1475;
static int64_t x425 = -164886950LL;
int16_t x435 = INT16_MIN;
int32_t t79 = 17;
static uint64_t x449 = 1145517LLU;
uint64_t x452 = UINT64_MAX;
uint64_t x456 = 525733434LLU;
int32_t t82 = 333609886;
int16_t x457 = INT16_MAX;
volatile int32_t x475 = INT32_MIN;
uint32_t x480 = 394680U;
int64_t x484 = INT64_MAX;
static int16_t x486 = -1;
uint32_t x491 = UINT32_MAX;
uint64_t x498 = 50715868993086LLU;
int32_t x499 = 57806461;
uint16_t x502 = 7729U;
uint32_t x509 = 1684U;
static int64_t x512 = -1LL;
volatile uint16_t x513 = UINT16_MAX;
int64_t x515 = INT64_MIN;
static int64_t x525 = -249LL;
int16_t x526 = INT16_MIN;
uint32_t x535 = 3022U;
static int32_t t99 = 3;


void f0(void) {
	static int8_t x6 = 7;
	volatile int64_t x7 = -1LL;
	int32_t x8 = -65108045;
	int32_t t0 = 407845;

	t0 = ((x5*x6)<(x7<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	uint8_t x10 = 57U;
	uint32_t x11 = 975245U;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t1 = 108529;

	t1 = ((x9*x10)<(x11<x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x17 = 1U;
	int16_t x18 = INT16_MAX;
	int32_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	int32_t t2 = 128839861;

	t2 = ((x17*x18)<(x19<x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x25 = 284551894757343525LLU;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = -1;
	int16_t x28 = INT16_MIN;

	t3 = ((x25*x26)<(x27<x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x29 = UINT8_MAX;
	volatile int8_t x30 = INT8_MIN;
	uint16_t x31 = 32004U;
	uint16_t x32 = 0U;
	int32_t t4 = 0;

	t4 = ((x29*x30)<(x31<x32));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x34 = -1;
	uint32_t x35 = 26094U;
	volatile int16_t x36 = INT16_MIN;
	static volatile int32_t t5 = 7962893;

	t5 = ((x33*x34)<(x35<x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x37 = 2;
	static int8_t x38 = INT8_MIN;
	volatile int64_t x39 = INT64_MIN;
	uint16_t x40 = 2U;
	volatile int32_t t6 = 7;

	t6 = ((x37*x38)<(x39<x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = 98U;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = INT64_MIN;
	uint64_t x48 = 22118822110LLU;
	int32_t t7 = -1084;

	t7 = ((x45*x46)<(x47<x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = -1;
	uint64_t x50 = 33260988069594317LLU;
	uint8_t x51 = UINT8_MAX;

	t8 = ((x49*x50)<(x51<x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MAX;
	int16_t x54 = 6265;
	volatile int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;
	static int32_t t9 = 444473594;

	t9 = ((x53*x54)<(x55<x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x57 = UINT8_MAX;
	volatile int64_t x58 = -3526089864832837LL;
	uint8_t x59 = UINT8_MAX;
	volatile uint64_t x60 = 3844400111710LLU;
	int32_t t10 = 0;

	t10 = ((x57*x58)<(x59<x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = -517538;
	int64_t x63 = INT64_MIN;
	volatile uint64_t x64 = UINT64_MAX;
	int32_t t11 = -397336;

	t11 = ((x61*x62)<(x63<x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x66 = -1;
	int64_t x67 = -193LL;
	volatile int64_t x68 = INT64_MAX;

	t12 = ((x65*x66)<(x67<x68));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int16_t x70 = -1;
	volatile int64_t x71 = -1LL;
	static volatile int32_t x72 = INT32_MAX;
	volatile int32_t t13 = -11807424;

	t13 = ((x69*x70)<(x71<x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x73 = 978229U;
	static uint64_t x74 = 383LLU;
	int8_t x75 = -1;
	int32_t x76 = INT32_MIN;
	volatile int32_t t14 = 1;

	t14 = ((x73*x74)<(x75<x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = 235883961;
	int32_t x84 = INT32_MAX;

	t15 = ((x81*x82)<(x83<x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = 263387666LL;
	static int16_t x87 = -1;
	int8_t x88 = INT8_MAX;
	volatile int32_t t16 = 92695;

	t16 = ((x85*x86)<(x87<x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = 4203;
	int64_t x96 = INT64_MAX;

	t17 = ((x93*x94)<(x95<x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = 173U;
	static uint32_t x103 = 3088U;
	int16_t x104 = INT16_MAX;
	int32_t t18 = 7;

	t18 = ((x101*x102)<(x103<x104));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x114 = UINT64_MAX;
	uint32_t x115 = 1020888U;
	volatile int32_t t19 = 62468647;

	t19 = ((x113*x114)<(x115<x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x121 = 22U;
	volatile uint32_t x122 = 985298992U;
	static int8_t x124 = -3;
	int32_t t20 = -88494;

	t20 = ((x121*x122)<(x123<x124));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x125 = 1766U;
	int32_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	int32_t x128 = 22794;
	volatile int32_t t21 = -3891;

	t21 = ((x125*x126)<(x127<x128));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x129 = 10U;
	static int8_t x132 = 0;
	static volatile int32_t t22 = -26542;

	t22 = ((x129*x130)<(x131<x132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x137 = 467662130LL;
	uint64_t x138 = 385028LLU;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = 0U;
	volatile int32_t t23 = -1426254;

	t23 = ((x137*x138)<(x139<x140));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x141 = 42597594420LLU;
	uint32_t x143 = 105U;
	static uint32_t x144 = 149848U;
	static volatile int32_t t24 = 1552;

	t24 = ((x141*x142)<(x143<x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x145 = INT32_MAX;
	int32_t x147 = -1;
	static volatile int32_t t25 = -10535476;

	t25 = ((x145*x146)<(x147<x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = -7301LL;
	int32_t x150 = INT32_MAX;
	int8_t x151 = INT8_MAX;
	volatile int64_t x152 = INT64_MAX;
	int32_t t26 = 33743;

	t26 = ((x149*x150)<(x151<x152));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x154 = 0U;
	static volatile uint32_t x155 = 22484U;
	static int32_t x156 = 661898;
	int32_t t27 = -1804729;

	t27 = ((x153*x154)<(x155<x156));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x165 = 19U;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -20910514;
	uint64_t x168 = 53556305967LLU;
	int32_t t28 = 21;

	t28 = ((x165*x166)<(x167<x168));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x173 = 43749266U;
	static int64_t x175 = INT64_MIN;
	static int16_t x176 = INT16_MIN;
	static int32_t t29 = -554294636;

	t29 = ((x173*x174)<(x175<x176));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x177 = -1LL;
	static volatile int64_t x178 = -1170946464167LL;
	int8_t x180 = INT8_MIN;
	static int32_t t30 = 513732719;

	t30 = ((x177*x178)<(x179<x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x185 = 77956U;
	int8_t x186 = -5;
	static uint8_t x187 = 3U;
	int32_t t31 = 0;

	t31 = ((x185*x186)<(x187<x188));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x190 = 228U;
	int16_t x191 = -7668;
	uint64_t x192 = 25712LLU;
	volatile int32_t t32 = 16;

	t32 = ((x189*x190)<(x191<x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x193 = -1LL;
	uint32_t x194 = 1123U;
	volatile int16_t x195 = INT16_MAX;
	int64_t x196 = INT64_MAX;
	int32_t t33 = 43;

	t33 = ((x193*x194)<(x195<x196));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x197 = -12187;
	int8_t x198 = INT8_MIN;
	uint8_t x199 = UINT8_MAX;
	volatile uint64_t x200 = 671292LLU;
	int32_t t34 = -841407807;

	t34 = ((x197*x198)<(x199<x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x201 = 2U;
	static int16_t x202 = INT16_MIN;
	static int8_t x203 = -1;
	volatile int32_t t35 = -322;

	t35 = ((x201*x202)<(x203<x204));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x205 = 3702509731147LLU;
	int8_t x206 = -28;
	int16_t x207 = -1;
	uint64_t x208 = 5482515LLU;
	volatile int32_t t36 = 27024;

	t36 = ((x205*x206)<(x207<x208));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x214 = 261099U;
	volatile int16_t x215 = 1772;
	static volatile int32_t t37 = 3871616;

	t37 = ((x213*x214)<(x215<x216));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x217 = 143U;
	uint16_t x218 = 3758U;
	uint32_t x220 = 5675383U;
	volatile int32_t t38 = 19886;

	t38 = ((x217*x218)<(x219<x220));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x221 = 461304304587343LL;
	uint64_t x222 = 1LLU;
	static int16_t x223 = 3236;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t39 = 621;

	t39 = ((x221*x222)<(x223<x224));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = INT8_MIN;
	volatile uint32_t x226 = 5115U;
	int64_t x228 = INT64_MIN;
	int32_t t40 = -1;

	t40 = ((x225*x226)<(x227<x228));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x234 = 0U;
	uint16_t x235 = 0U;
	int32_t x236 = INT32_MIN;
	static int32_t t41 = -6356942;

	t41 = ((x233*x234)<(x235<x236));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x237 = 21812LLU;
	int64_t x238 = -1LL;
	static uint8_t x239 = 79U;
	volatile int8_t x240 = -1;
	int32_t t42 = 6424;

	t42 = ((x237*x238)<(x239<x240));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x241 = 11476995989576573LLU;
	uint32_t x242 = 91387U;
	int16_t x243 = -1;
	int64_t x244 = INT64_MAX;
	int32_t t43 = -1841;

	t43 = ((x241*x242)<(x243<x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x250 = 60526U;
	int8_t x251 = INT8_MIN;
	int8_t x252 = 60;
	volatile int32_t t44 = -55;

	t44 = ((x249*x250)<(x251<x252));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x255 = INT64_MIN;
	int8_t x256 = 3;
	volatile int32_t t45 = 1931249;

	t45 = ((x253*x254)<(x255<x256));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x262 = INT8_MIN;
	volatile int8_t x263 = INT8_MIN;
	int16_t x264 = 6;
	int32_t t46 = 0;

	t46 = ((x261*x262)<(x263<x264));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x268 = UINT16_MAX;
	int32_t t47 = 2411746;

	t47 = ((x265*x266)<(x267<x268));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = -1;

	t48 = ((x277*x278)<(x279<x280));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x281 = 255;
	static uint64_t x282 = 617LLU;
	uint8_t x283 = 7U;
	static int8_t x284 = -6;
	volatile int32_t t49 = 29;

	t49 = ((x281*x282)<(x283<x284));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int32_t x287 = INT32_MAX;
	int64_t x288 = -1LL;

	t50 = ((x285*x286)<(x287<x288));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x289 = INT64_MIN;
	uint64_t x290 = 4478392745LLU;
	volatile uint32_t x291 = 189899872U;
	int64_t x292 = INT64_MIN;
	static volatile int32_t t51 = -6040;

	t51 = ((x289*x290)<(x291<x292));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	volatile int32_t t52 = 374880;

	t52 = ((x293*x294)<(x295<x296));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x297 = -55349025;
	uint8_t x298 = 4U;
	int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MAX;
	volatile int32_t t53 = -122082799;

	t53 = ((x297*x298)<(x299<x300));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x301 = 0U;
	static uint32_t x302 = 151661U;
	uint32_t x303 = 275608U;
	uint64_t x304 = 2763355892709702LLU;
	volatile int32_t t54 = -1152506;

	t54 = ((x301*x302)<(x303<x304));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x305 = 1715782392U;
	uint32_t x306 = 3022U;
	int64_t x308 = INT64_MAX;
	static volatile int32_t t55 = -3332937;

	t55 = ((x305*x306)<(x307<x308));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x309 = -1;
	uint64_t x310 = 58426285617024LLU;
	int8_t x312 = INT8_MAX;
	static int32_t t56 = -604923;

	t56 = ((x309*x310)<(x311<x312));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x317 = 27645U;
	uint8_t x318 = 57U;

	t57 = ((x317*x318)<(x319<x320));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x325 = -1;
	uint8_t x328 = UINT8_MAX;

	t58 = ((x325*x326)<(x327<x328));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x333 = 3LL;
	int16_t x335 = INT16_MIN;
	volatile int8_t x336 = INT8_MIN;

	t59 = ((x333*x334)<(x335<x336));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x337 = -1;
	uint32_t x338 = UINT32_MAX;
	uint16_t x339 = 14206U;
	static uint16_t x340 = 699U;
	int32_t t60 = -61528;

	t60 = ((x337*x338)<(x339<x340));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x342 = 0U;
	int8_t x343 = 0;
	int32_t x344 = -1;

	t61 = ((x341*x342)<(x343<x344));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x347 = 2U;
	static int8_t x348 = -1;

	t62 = ((x345*x346)<(x347<x348));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x349 = 4U;
	int16_t x350 = 2;
	int64_t x351 = INT64_MIN;
	int32_t t63 = 82756288;

	t63 = ((x349*x350)<(x351<x352));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x353 = -1LL;
	static int32_t x354 = 5;
	static uint16_t x356 = 25U;
	int32_t t64 = -11;

	t64 = ((x353*x354)<(x355<x356));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x357 = 170952U;
	int8_t x358 = -1;
	int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MAX;
	volatile int32_t t65 = -49754;

	t65 = ((x357*x358)<(x359<x360));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x361 = -1;
	volatile int32_t t66 = -11;

	t66 = ((x361*x362)<(x363<x364));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x365 = UINT32_MAX;
	int8_t x368 = INT8_MAX;
	int32_t t67 = 523140;

	t67 = ((x365*x366)<(x367<x368));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = 4001200117278134LL;
	static int8_t x379 = INT8_MIN;
	volatile int32_t x380 = -1;
	int32_t t68 = 8101;

	t68 = ((x377*x378)<(x379<x380));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x381 = 2417U;
	volatile int32_t x382 = 110;
	static int16_t x383 = -47;
	uint16_t x384 = UINT16_MAX;

	t69 = ((x381*x382)<(x383<x384));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x385 = 7;
	static int8_t x386 = 15;
	int64_t x387 = INT64_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t70 = 127899646;

	t70 = ((x385*x386)<(x387<x388));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = 143;
	volatile int32_t t71 = 81174483;

	t71 = ((x389*x390)<(x391<x392));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x394 = -304597131527995279LL;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = UINT16_MAX;
	static int32_t t72 = 217474361;

	t72 = ((x393*x394)<(x395<x396));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x401 = -58;
	uint32_t x402 = 589U;
	int16_t x403 = INT16_MIN;
	int32_t t73 = 19;

	t73 = ((x401*x402)<(x403<x404));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x405 = 12U;
	int64_t x407 = INT64_MIN;
	uint64_t x408 = 1011LLU;

	t74 = ((x405*x406)<(x407<x408));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x409 = 51932122LLU;
	static int16_t x412 = 2;
	volatile int32_t t75 = -124254637;

	t75 = ((x409*x410)<(x411<x412));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x413 = -38635275;
	int64_t x414 = -34140LL;
	static uint16_t x415 = UINT16_MAX;
	volatile int32_t t76 = -52667;

	t76 = ((x413*x414)<(x415<x416));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x421 = 42U;
	int32_t x423 = INT32_MIN;
	static int16_t x424 = 1649;

	t77 = ((x421*x422)<(x423<x424));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x426 = INT8_MAX;
	volatile uint8_t x427 = UINT8_MAX;
	static int32_t x428 = INT32_MAX;
	int32_t t78 = -64;

	t78 = ((x425*x426)<(x427<x428));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x433 = UINT16_MAX;
	int32_t x434 = -1;
	uint32_t x436 = UINT32_MAX;

	t79 = ((x433*x434)<(x435<x436));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x437 = INT16_MIN;
	int16_t x438 = -1;
	int8_t x439 = INT8_MAX;
	static volatile int64_t x440 = INT64_MIN;
	static int32_t t80 = -236997834;

	t80 = ((x437*x438)<(x439<x440));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x450 = 12768833305LL;
	int16_t x451 = INT16_MAX;
	int32_t t81 = 28;

	t81 = ((x449*x450)<(x451<x452));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x453 = INT16_MAX;
	int64_t x454 = -1LL;
	volatile int32_t x455 = INT32_MIN;

	t82 = ((x453*x454)<(x455<x456));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x458 = 3;
	volatile int64_t x459 = -279345LL;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t83 = -117321;

	t83 = ((x457*x458)<(x459<x460));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x469 = 8365331978986764LLU;
	volatile int32_t x470 = INT32_MAX;
	volatile int32_t x471 = INT32_MIN;
	uint32_t x472 = 6382269U;
	int32_t t84 = 0;

	t84 = ((x469*x470)<(x471<x472));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x473 = 37543615LLU;
	int32_t x474 = INT32_MIN;
	uint16_t x476 = 66U;
	volatile int32_t t85 = -12;

	t85 = ((x473*x474)<(x475<x476));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x477 = 6489172122LLU;
	int16_t x478 = INT16_MIN;
	uint8_t x479 = UINT8_MAX;
	volatile int32_t t86 = -989;

	t86 = ((x477*x478)<(x479<x480));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x481 = 126U;
	int32_t x482 = -223;
	volatile uint8_t x483 = 19U;
	int32_t t87 = -64273957;

	t87 = ((x481*x482)<(x483<x484));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x485 = -5LL;
	static uint64_t x487 = UINT64_MAX;
	int16_t x488 = -425;
	volatile int32_t t88 = 382;

	t88 = ((x485*x486)<(x487<x488));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x489 = INT16_MIN;
	int64_t x490 = 226531LL;
	int64_t x492 = -1LL;
	int32_t t89 = 58;

	t89 = ((x489*x490)<(x491<x492));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x493 = INT8_MIN;
	static int32_t x494 = -1;
	uint32_t x495 = 35465U;
	int16_t x496 = INT16_MIN;
	volatile int32_t t90 = -10162;

	t90 = ((x493*x494)<(x495<x496));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x497 = 28941266242232277LLU;
	int32_t x500 = -1;
	int32_t t91 = -99;

	t91 = ((x497*x498)<(x499<x500));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x501 = 2U;
	static volatile int32_t x503 = -9230599;
	static int64_t x504 = INT64_MIN;
	int32_t t92 = -15871701;

	t92 = ((x501*x502)<(x503<x504));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x510 = 0;
	int16_t x511 = -1;
	int32_t t93 = -422;

	t93 = ((x509*x510)<(x511<x512));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x514 = -1LL;
	uint64_t x516 = UINT64_MAX;
	static volatile int32_t t94 = -1;

	t94 = ((x513*x514)<(x515<x516));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x517 = -2115;
	static int64_t x518 = -1LL;
	uint16_t x519 = 11U;
	int8_t x520 = 3;
	volatile int32_t t95 = -33501806;

	t95 = ((x517*x518)<(x519<x520));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x521 = INT8_MAX;
	uint8_t x522 = 26U;
	uint8_t x523 = 56U;
	static int16_t x524 = -969;
	volatile int32_t t96 = -144546;

	t96 = ((x521*x522)<(x523<x524));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x527 = -1;
	int64_t x528 = 38928820180LL;
	int32_t t97 = -2143;

	t97 = ((x525*x526)<(x527<x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x529 = 3U;
	uint64_t x530 = 273866281707LLU;
	uint64_t x531 = 4153778311044420727LLU;
	uint64_t x532 = UINT64_MAX;
	volatile int32_t t98 = 1399240;

	t98 = ((x529*x530)<(x531<x532));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x533 = 3U;
	volatile int8_t x534 = -1;
	int8_t x536 = INT8_MIN;

	t99 = ((x533*x534)<(x535<x536));

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

