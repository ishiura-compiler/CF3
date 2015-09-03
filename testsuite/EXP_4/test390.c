#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = 64571LL;
int8_t x11 = INT8_MAX;
int16_t x16 = INT16_MIN;
int64_t x19 = 1965503411LL;
volatile uint8_t x25 = 1U;
int8_t x26 = -1;
static int8_t x27 = 58;
int32_t x28 = 4;
static volatile int64_t x33 = INT64_MIN;
volatile int32_t x38 = -1;
uint8_t x46 = UINT8_MAX;
uint16_t x48 = UINT16_MAX;
int64_t x71 = 31LL;
uint64_t x72 = 3057LLU;
int64_t x78 = -1LL;
int8_t x79 = INT8_MIN;
static int32_t x85 = INT32_MIN;
volatile int32_t x86 = INT32_MIN;
int32_t x97 = 24122;
uint64_t x98 = 5625595128LLU;
volatile int16_t x101 = INT16_MIN;
int64_t x104 = 1272807107689334LL;
uint64_t x109 = 112179353746439895LLU;
uint16_t x121 = 7423U;
uint8_t x122 = UINT8_MAX;
static int8_t x134 = -20;
int64_t x138 = INT64_MAX;
uint16_t x180 = UINT16_MAX;
int16_t x182 = INT16_MIN;
uint8_t x186 = 44U;
static uint32_t x204 = 540181083U;
uint8_t x209 = UINT8_MAX;
static volatile uint16_t x218 = 34U;
uint32_t x220 = 45886U;
static uint32_t t40 = 5083561U;
static int32_t x222 = INT32_MIN;
int64_t x236 = INT64_MIN;
volatile uint64_t x240 = 238LLU;
static uint64_t x264 = UINT64_MAX;
int32_t x270 = 551533;
int32_t x280 = -1;
static uint64_t x285 = UINT64_MAX;
int16_t x287 = -1;
int32_t x293 = INT32_MIN;
volatile int16_t x294 = -1;
int16_t x303 = INT16_MIN;
int8_t x304 = -1;
int64_t x306 = 3LL;
volatile uint64_t x308 = UINT64_MAX;
int32_t x311 = INT32_MIN;
uint64_t x312 = UINT64_MAX;
int8_t x319 = -1;
static uint64_t t55 = 2054583667LLU;
static volatile int64_t t57 = -776134LL;
uint16_t x331 = 146U;
uint16_t x332 = UINT16_MAX;
int32_t x345 = -318884;
static volatile int16_t x346 = INT16_MIN;
static int16_t x348 = INT16_MAX;
uint32_t x362 = 25610077U;
uint32_t t64 = UINT32_MAX;
int64_t x389 = INT64_MIN;
static uint64_t x408 = UINT64_MAX;
int8_t x412 = 1;
int8_t x415 = -8;
int8_t x421 = INT8_MIN;
uint32_t x427 = 4720907U;
int32_t x439 = -1875;
int64_t x446 = 594464808LL;
int16_t x447 = -1;
volatile int32_t x449 = 880641415;
uint32_t t81 = 199708U;
uint32_t x462 = 1607U;
int16_t x463 = INT16_MAX;
int16_t x472 = INT16_MAX;
volatile int32_t t86 = -24;
uint32_t x498 = 8U;
static int16_t x500 = 711;
int8_t x504 = INT8_MIN;
uint32_t x514 = 782U;
volatile int16_t x515 = 1;
uint16_t x516 = UINT16_MAX;
uint64_t t91 = 937064342LLU;
uint16_t x527 = 1068U;
int16_t x547 = -943;
uint8_t x549 = 11U;
int8_t x550 = INT8_MIN;
static int32_t x552 = INT32_MIN;
uint64_t t97 = 1482269787361574276LLU;
int32_t x553 = 6998784;
int64_t x556 = -1LL;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint32_t x2 = 58U;
	int8_t x3 = -1;
	volatile int64_t t0 = 1436014279LL;

	t0 = (x1^(x2/(x3*x4)));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 129U;
	int32_t x6 = INT32_MIN;
	static uint16_t x7 = 14U;
	int8_t x8 = -1;
	int32_t t1 = -303;

	t1 = (x5^(x6/(x7*x8)));

	if (t1 != 153391816) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -4;
	int8_t x10 = -1;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 160903548;

	t2 = (x9^(x10/(x11*x12)));

	if (t2 != -4) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MIN;
	uint16_t x15 = UINT16_MAX;
	int32_t t3 = -78782;

	t3 = (x13^(x14/(x15*x16)));

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 11282LLU;
	int64_t x18 = INT64_MAX;
	uint32_t x20 = 166U;
	uint64_t t4 = 95166822LLU;

	t4 = (x17^(x18/(x19*x20)));

	if (t4 != 28275980LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t t5 = -214437212;

	t5 = (x25^(x26/(x27*x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x34 = 176122U;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MAX;
	static int64_t t6 = INT64_MIN;

	t6 = (x33^(x34/(x35*x36)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 21556801542LLU;
	int8_t x39 = 12;
	uint32_t x40 = UINT32_MAX;
	uint64_t t7 = 3368093933LLU;

	t7 = (x37^(x38/(x39*x40)));

	if (t7 != 21556801543LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x41 = 1906913164009LLU;
	int32_t x42 = -1;
	uint16_t x43 = UINT16_MAX;
	uint64_t x44 = 100836538782LLU;
	static volatile uint64_t t8 = 112818873354LLU;

	t8 = (x41^(x42/(x43*x44)));

	if (t8 != 1906913161230LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 18U;
	int8_t x47 = INT8_MAX;
	volatile int32_t t9 = -260665806;

	t9 = (x45^(x46/(x47*x48)));

	if (t9 != 18) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = UINT32_MAX;
	static uint32_t t10 = 206U;

	t10 = (x49^(x50/(x51*x52)));

	if (t10 != 4294934529U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 263U;
	int16_t x54 = 10761;
	uint32_t x55 = 505873U;
	uint64_t x56 = 24LLU;
	static volatile uint64_t t11 = 321LLU;

	t11 = (x53^(x54/(x55*x56)));

	if (t11 != 263LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = 1155413097751135LL;
	volatile int8_t x66 = INT8_MIN;
	static int16_t x67 = INT16_MIN;
	static int16_t x68 = INT16_MIN;
	volatile int64_t t12 = 3507LL;

	t12 = (x65^(x66/(x67*x68)));

	if (t12 != 1155413097751135LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = 74;
	volatile uint64_t t13 = 1458413307LLU;

	t13 = (x69^(x70/(x71*x72)));

	if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = INT8_MIN;
	uint64_t x74 = 2026974462717LLU;
	static volatile int8_t x75 = -1;
	uint8_t x76 = UINT8_MAX;
	static uint64_t t14 = 114727643988LLU;

	t14 = (x73^(x74/(x75*x76)));

	if (t14 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x77 = 0;
	uint8_t x80 = 1U;
	int64_t t15 = 9LL;

	t15 = (x77^(x78/(x79*x80)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x87 = -1;
	int8_t x88 = -34;
	volatile int32_t t16 = -63248;

	t16 = (x85^(x86/(x87*x88)));

	if (t16 != 2084322365) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x99 = -1;
	uint16_t x100 = 11202U;
	volatile uint64_t t17 = 23LLU;

	t17 = (x97^(x98/(x99*x100)));

	if (t17 != 24122LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x102 = 18U;
	int8_t x103 = INT8_MAX;
	static volatile int64_t t18 = -1255445971LL;

	t18 = (x101^(x102/(x103*x104)));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = -1LL;
	int64_t x106 = INT64_MIN;
	static uint32_t x107 = 56104316U;
	uint8_t x108 = 29U;
	volatile int64_t t19 = -364073068410073160LL;

	t19 = (x105^(x106/(x107*x108)));

	if (t19 != 5668856413LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x110 = INT16_MIN;
	uint8_t x111 = UINT8_MAX;
	uint32_t x112 = UINT32_MAX;
	uint64_t t20 = 3625LLU;

	t20 = (x109^(x110/(x111*x112)));

	if (t20 != 112179353746439895LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x113 = INT32_MAX;
	int16_t x114 = 5733;
	static volatile int16_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	int32_t t21 = INT32_MAX;

	t21 = (x113^(x114/(x115*x116)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x123 = 932818220472569LLU;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t22 = 52LLU;

	t22 = (x121^(x122/(x123*x124)));

	if (t22 != 7423LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x125 = -1LL;
	uint16_t x126 = UINT16_MAX;
	static uint16_t x127 = UINT16_MAX;
	uint16_t x128 = 29019U;
	static int64_t t23 = -53041197LL;

	t23 = (x125^(x126/(x127*x128)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = UINT8_MAX;
	static volatile int16_t x131 = INT16_MIN;
	int16_t x132 = 403;
	int32_t t24 = INT32_MIN;

	t24 = (x129^(x130/(x131*x132)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 472395014378432LLU;
	volatile int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	uint64_t t25 = 1642928111LLU;

	t25 = (x133^(x134/(x135*x136)));

	if (t25 != 472395014378432LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = 19;
	int32_t x139 = INT32_MIN;
	int64_t x140 = -1LL;
	int64_t t26 = -6123LL;

	t26 = (x137^(x138/(x139*x140)));

	if (t26 != 4294967276LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	volatile int16_t x144 = INT16_MIN;
	volatile int64_t t27 = INT64_MIN;

	t27 = (x141^(x142/(x143*x144)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x149 = 1097059U;
	uint32_t x150 = UINT32_MAX;
	volatile int8_t x151 = -1;
	static uint64_t x152 = 499476291750027951LLU;
	volatile uint64_t t28 = 3LLU;

	t28 = (x149^(x150/(x151*x152)));

	if (t28 != 1097059LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = 4U;
	int32_t x158 = 571;
	int32_t x159 = -140;
	static volatile int16_t x160 = INT16_MIN;
	int32_t t29 = -1404;

	t29 = (x157^(x158/(x159*x160)));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = -3174;
	static volatile uint8_t x171 = 13U;
	int32_t x172 = -1;
	volatile int32_t t30 = -111120;

	t30 = (x169^(x170/(x171*x172)));

	if (t30 != -32524) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MAX;
	volatile uint16_t x175 = 997U;
	int8_t x176 = -1;
	volatile int32_t t31 = 258450;

	t31 = (x173^(x174/(x175*x176)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x177 = -1;
	uint32_t x178 = UINT32_MAX;
	static uint8_t x179 = 29U;
	uint32_t t32 = 89U;

	t32 = (x177^(x178/(x179*x180)));

	if (t32 != 4294965036U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x181 = 74498024468031LLU;
	int16_t x183 = 1959;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t33 = 20073286028169687LLU;

	t33 = (x181^(x182/(x183*x184)));

	if (t33 != 74498024468031LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x185 = INT16_MIN;
	volatile uint64_t x187 = 751245LLU;
	uint64_t x188 = UINT64_MAX;
	uint64_t t34 = 146640857210826LLU;

	t34 = (x185^(x186/(x187*x188)));

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = -1LL;
	int32_t x191 = -1;
	uint8_t x192 = 1U;
	static volatile int64_t t35 = -1013830315001538521LL;

	t35 = (x189^(x190/(x191*x192)));

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	static uint8_t x195 = 3U;
	int8_t x196 = -1;
	volatile int32_t t36 = 254788414;

	t36 = (x193^(x194/(x195*x196)));

	if (t36 != -86) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = 1;
	int16_t x202 = INT16_MIN;
	uint8_t x203 = 4U;
	uint32_t t37 = 32912296U;

	t37 = (x201^(x202/(x203*x204)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = -534LL;
	uint16_t x207 = 57U;
	static int8_t x208 = INT8_MAX;
	int64_t t38 = INT64_MIN;

	t38 = (x205^(x206/(x207*x208)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x210 = INT8_MIN;
	static uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MIN;
	volatile uint32_t t39 = 5U;

	t39 = (x209^(x210/(x211*x212)));

	if (t39 != 33554176U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x217 = 28943383;
	volatile int16_t x219 = -13;

	t40 = (x217^(x218/(x219*x220)));

	if (t40 != 28943383U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x221 = INT8_MIN;
	static int32_t x223 = -124756533;
	int64_t x224 = -43063447157LL;
	static int64_t t41 = 7LL;

	t41 = (x221^(x222/(x223*x224)));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = 5;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = 6;
	int64_t x228 = 227723452587LL;
	volatile uint64_t t42 = 120729260665543LLU;

	t42 = (x225^(x226/(x227*x228)));

	if (t42 != 13500832LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x233 = 1623087510169357729LL;
	volatile uint16_t x234 = 28938U;
	uint64_t x235 = UINT64_MAX;
	volatile uint64_t t43 = 17595LLU;

	t43 = (x233^(x234/(x235*x236)));

	if (t43 != 1623087510169357729LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MAX;
	volatile uint64_t t44 = 2614162704502LLU;

	t44 = (x237^(x238/(x239*x240)));

	if (t44 != 1183822917459LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = 38U;
	int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	int16_t x260 = 978;
	volatile uint32_t t45 = 403152U;

	t45 = (x257^(x258/(x259*x260)));

	if (t45 != 38U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x261 = UINT16_MAX;
	volatile int16_t x262 = -3;
	int64_t x263 = INT64_MAX;
	static uint64_t t46 = 6566659565843859LLU;

	t46 = (x261^(x262/(x263*x264)));

	if (t46 != 65534LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x269 = 69U;
	volatile int8_t x271 = -1;
	int16_t x272 = -1;
	volatile int32_t t47 = -1190;

	t47 = (x269^(x270/(x271*x272)));

	if (t47 != 551464) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x277 = INT8_MIN;
	static int16_t x278 = INT16_MAX;
	int16_t x279 = -1;
	static int32_t t48 = 584716;

	t48 = (x277^(x278/(x279*x280)));

	if (t48 != -32641) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x286 = -11;
	static int16_t x288 = -1;
	volatile uint64_t t49 = 336102621180282LLU;

	t49 = (x285^(x286/(x287*x288)));

	if (t49 != 10LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x295 = -1LL;
	uint64_t x296 = 4476427498108196257LLU;
	volatile uint64_t t50 = 19068536350341LLU;

	t50 = (x293^(x294/(x295*x296)));

	if (t50 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	volatile int32_t t51 = 140814073;

	t51 = (x301^(x302/(x303*x304)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x305 = 176;
	int16_t x307 = 5638;
	volatile uint64_t t52 = 126207LLU;

	t52 = (x305^(x306/(x307*x308)));

	if (t52 != 176LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x309 = INT32_MIN;
	int64_t x310 = -245995904013LL;
	uint64_t t53 = 2567771852290705409LLU;

	t53 = (x309^(x310/(x311*x312)));

	if (t53 != 18446744067267100557LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x313 = 1LL;
	volatile int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = -1;
	volatile int64_t t54 = 98243350692LL;

	t54 = (x313^(x314/(x315*x316)));

	if (t54 != 281474976710654LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x318 = INT64_MAX;
	uint32_t x320 = 7U;

	t55 = (x317^(x318/(x319*x320)));

	if (t55 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x321 = -1;
	uint16_t x322 = 948U;
	int64_t x323 = -1LL;
	volatile int32_t x324 = -31337;
	int64_t t56 = 879LL;

	t56 = (x321^(x322/(x323*x324)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x325 = -1LL;
	int32_t x326 = -1006;
	int8_t x327 = INT8_MAX;
	int64_t x328 = -8062877903828LL;

	t57 = (x325^(x326/(x327*x328)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x329 = UINT16_MAX;
	uint8_t x330 = 0U;
	volatile int32_t t58 = -1;

	t58 = (x329^(x330/(x331*x332)));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x333 = 1045U;
	volatile int32_t x334 = INT32_MIN;
	static int16_t x335 = -1;
	static int16_t x336 = INT16_MAX;
	static int32_t t59 = -1954;

	t59 = (x333^(x334/(x335*x336)));

	if (t59 != 66583) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x347 = 36;
	volatile int32_t t60 = 125732;

	t60 = (x345^(x346/(x347*x348)));

	if (t60 != -318884) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x353 = 4643U;
	uint32_t x354 = UINT32_MAX;
	volatile int64_t x355 = INT64_MAX;
	static uint64_t x356 = 9LLU;
	uint64_t t61 = 52952659580LLU;

	t61 = (x353^(x354/(x355*x356)));

	if (t61 != 4643LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x361 = -2224;
	static volatile int16_t x363 = 6564;
	uint16_t x364 = 901U;
	uint32_t t62 = 30784263U;

	t62 = (x361^(x362/(x363*x364)));

	if (t62 != 4294965076U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x365 = 23;
	int32_t x366 = INT32_MIN;
	static uint64_t x367 = 539LLU;
	int32_t x368 = INT32_MIN;
	static volatile uint64_t t63 = 3233352041LLU;

	t63 = (x365^(x366/(x367*x368)));

	if (t63 != 22LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int8_t x374 = INT8_MIN;
	static int8_t x375 = 63;
	volatile int8_t x376 = INT8_MAX;

	t64 = (x373^(x374/(x375*x376)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x377 = 1434;
	static int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MIN;
	int8_t x380 = 50;
	static int32_t t65 = -7494420;

	t65 = (x377^(x378/(x379*x380)));

	if (t65 != 132) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x381 = INT32_MAX;
	static int32_t x382 = INT32_MIN;
	static volatile uint32_t x383 = 68U;
	int64_t x384 = 1316LL;
	int64_t t66 = -14966150LL;

	t66 = (x381^(x382/(x383*x384)));

	if (t66 != -2147459652LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MIN;
	int8_t x387 = INT8_MAX;
	int16_t x388 = -309;
	volatile int32_t t67 = -17503;

	t67 = (x385^(x386/(x387*x388)));

	if (t67 != 54717) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x390 = 114U;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = 7722293788556846LLU;
	uint64_t t68 = 1222768397800LLU;

	t68 = (x389^(x390/(x391*x392)));

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x393 = -29;
	int8_t x394 = 1;
	static int8_t x395 = -27;
	uint8_t x396 = 66U;
	int32_t t69 = 1;

	t69 = (x393^(x394/(x395*x396)));

	if (t69 != -29) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x397 = 277;
	static int8_t x398 = -1;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = 6393755683LLU;
	uint64_t t70 = 652LLU;

	t70 = (x397^(x398/(x399*x400)));

	if (t70 != 278LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x405 = 570023012463310660LLU;
	volatile uint8_t x406 = UINT8_MAX;
	int8_t x407 = INT8_MIN;
	uint64_t t71 = 999720480433484763LLU;

	t71 = (x405^(x406/(x407*x408)));

	if (t71 != 570023012463310661LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x409 = 240;
	int64_t x410 = -1LL;
	uint32_t x411 = UINT32_MAX;
	int64_t t72 = 781650706565LL;

	t72 = (x409^(x410/(x411*x412)));

	if (t72 != 240LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x413 = INT64_MIN;
	int8_t x414 = 1;
	volatile uint64_t x416 = UINT64_MAX;
	uint64_t t73 = 10192837820885461LLU;

	t73 = (x413^(x414/(x415*x416)));

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x417 = 61958582U;
	int16_t x418 = INT16_MIN;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = INT16_MIN;
	volatile uint32_t t74 = 33674U;

	t74 = (x417^(x418/(x419*x420)));

	if (t74 != 61904457U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x422 = INT32_MIN;
	int16_t x423 = -1;
	uint32_t x424 = 47982U;
	volatile uint32_t t75 = 222U;

	t75 = (x421^(x422/(x423*x424)));

	if (t75 != 4294967168U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x425 = 7U;
	volatile uint32_t x426 = 841U;
	static int16_t x428 = -1;
	static volatile uint32_t t76 = 278015U;

	t76 = (x425^(x426/(x427*x428)));

	if (t76 != 7U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x437 = 59U;
	uint16_t x438 = UINT16_MAX;
	uint8_t x440 = 1U;
	volatile int32_t t77 = 1;

	t77 = (x437^(x438/(x439*x440)));

	if (t77 != -27) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x441 = -1LL;
	int64_t x442 = INT64_MAX;
	static volatile int32_t x443 = 27;
	int64_t x444 = -1LL;
	int64_t t78 = 194140LL;

	t78 = (x441^(x442/(x443*x444)));

	if (t78 != 341606371735362065LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x445 = INT32_MIN;
	int16_t x448 = INT16_MIN;
	volatile int64_t t79 = 12099516701LL;

	t79 = (x445^(x446/(x447*x448)));

	if (t79 != -2147465507LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x450 = INT8_MIN;
	volatile int16_t x451 = INT16_MIN;
	int16_t x452 = 4;
	volatile int32_t t80 = 1;

	t80 = (x449^(x450/(x451*x452)));

	if (t80 != 880641415) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x453 = 0;
	int8_t x454 = INT8_MIN;
	uint32_t x455 = 1496U;
	static int16_t x456 = -1;

	t81 = (x453^(x454/(x455*x456)));

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x457 = UINT64_MAX;
	volatile int32_t x458 = 5689;
	static uint16_t x459 = UINT16_MAX;
	int8_t x460 = INT8_MIN;
	uint64_t t82 = UINT64_MAX;

	t82 = (x457^(x458/(x459*x460)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x461 = -1;
	int8_t x464 = INT8_MIN;
	uint32_t t83 = UINT32_MAX;

	t83 = (x461^(x462/(x463*x464)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x465 = 7;
	int8_t x466 = INT8_MAX;
	volatile int8_t x467 = -1;
	int64_t x468 = INT64_MAX;
	int64_t t84 = -83899887LL;

	t84 = (x465^(x466/(x467*x468)));

	if (t84 != 7LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x469 = INT8_MIN;
	int32_t x470 = INT32_MIN;
	int8_t x471 = -1;
	int32_t t85 = -90507;

	t85 = (x469^(x470/(x471*x472)));

	if (t85 != -65662) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = INT8_MIN;
	int16_t x474 = 21;
	uint8_t x475 = 9U;
	int8_t x476 = -6;

	t86 = (x473^(x474/(x475*x476)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x493 = INT16_MIN;
	uint16_t x494 = 5U;
	uint64_t x495 = 24178980LLU;
	uint16_t x496 = 302U;
	volatile uint64_t t87 = 2044145004538LLU;

	t87 = (x493^(x494/(x495*x496)));

	if (t87 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x497 = -1;
	uint32_t x499 = UINT32_MAX;
	uint32_t t88 = UINT32_MAX;

	t88 = (x497^(x498/(x499*x500)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x501 = INT32_MAX;
	int64_t x502 = INT64_MIN;
	uint16_t x503 = 54U;
	int64_t t89 = -5055815303LL;

	t89 = (x501^(x502/(x503*x504)));

	if (t89 != 1334400446346277LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x509 = 10U;
	volatile uint16_t x510 = 5002U;
	uint64_t x511 = UINT64_MAX;
	uint32_t x512 = 573319069U;
	static volatile uint64_t t90 = 351038433LLU;

	t90 = (x509^(x510/(x511*x512)));

	if (t90 != 10LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x513 = 796078371LLU;

	t91 = (x513^(x514/(x515*x516)));

	if (t91 != 796078371LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x517 = 1;
	int64_t x518 = INT64_MIN;
	volatile uint64_t x519 = 3121346LLU;
	int16_t x520 = INT16_MIN;
	volatile uint64_t t92 = 222079653036LLU;

	t92 = (x517^(x518/(x519*x520)));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x521 = 75095200U;
	int64_t x522 = -61159878415LL;
	uint16_t x523 = 180U;
	int64_t x524 = 2244471131095LL;
	volatile int64_t t93 = 114750LL;

	t93 = (x521^(x522/(x523*x524)));

	if (t93 != 75095200LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x525 = INT64_MAX;
	static int64_t x526 = INT64_MAX;
	uint64_t x528 = 13354784064870970LLU;
	volatile uint64_t t94 = 182483576LLU;

	t94 = (x525^(x526/(x527*x528)));

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x529 = INT32_MAX;
	int8_t x530 = INT8_MAX;
	volatile int16_t x531 = -1;
	uint16_t x532 = UINT16_MAX;
	static int32_t t95 = INT32_MAX;

	t95 = (x529^(x530/(x531*x532)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x545 = 37;
	static uint64_t x546 = 378239LLU;
	volatile int32_t x548 = -1;
	volatile uint64_t t96 = 3094LLU;

	t96 = (x545^(x546/(x547*x548)));

	if (t96 != 436LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x551 = UINT64_MAX;

	t97 = (x549^(x550/(x551*x552)));

	if (t97 != 8589934580LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x554 = INT64_MIN;
	int32_t x555 = INT32_MIN;
	int64_t t98 = -2247LL;

	t98 = (x553^(x554/(x555*x556)));

	if (t98 != -4287968512LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x557 = UINT8_MAX;
	uint16_t x558 = 99U;
	int16_t x559 = INT16_MAX;
	int16_t x560 = INT16_MIN;
	volatile int32_t t99 = -206;

	t99 = (x557^(x558/(x559*x560)));

	if (t99 != 255) { NG(); } else { ; }
	
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

