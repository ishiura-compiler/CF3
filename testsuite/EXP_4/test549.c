#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x22 = -9740;
int32_t x24 = 77;
volatile int32_t t1 = -22863;
static int64_t x26 = -1LL;
uint64_t x27 = 53480954040LLU;
volatile uint64_t t2 = 1069436717LLU;
int8_t x35 = INT8_MIN;
uint16_t x58 = 8488U;
int32_t x59 = INT32_MIN;
uint8_t x93 = 3U;
volatile int64_t t8 = 189419173LL;
volatile int32_t t9 = 1857;
volatile int16_t x109 = -1;
int16_t x110 = 6483;
int8_t x112 = INT8_MAX;
int64_t x167 = -16198LL;
static volatile uint8_t x172 = 5U;
int32_t x175 = -185764900;
volatile uint64_t t21 = 1979380246807LLU;
volatile int16_t x186 = INT16_MIN;
volatile uint32_t t22 = 720320U;
volatile uint8_t x212 = 14U;
int8_t x229 = INT8_MIN;
int8_t x230 = INT8_MIN;
int8_t x257 = INT8_MIN;
static uint16_t x259 = 22737U;
volatile int32_t x265 = -1;
int32_t t31 = 146287451;
int64_t x277 = INT64_MIN;
int8_t x280 = 3;
volatile uint64_t t34 = 6466846LLU;
volatile int32_t x292 = 12670;
int8_t x293 = 1;
int64_t x295 = -910850LL;
int8_t x302 = -1;
uint64_t t37 = 388LLU;
static uint16_t x306 = 1U;
volatile int32_t t38 = -11167156;
volatile int8_t x309 = -1;
int32_t x331 = INT32_MIN;
volatile int64_t x359 = 14LL;
uint32_t x360 = 5U;
int8_t x361 = -32;
static uint32_t x362 = 77U;
int16_t x364 = 73;
int64_t x402 = -1LL;
int8_t x403 = -1;
static int16_t x433 = INT16_MAX;
static int16_t x437 = 0;
static int64_t x438 = INT64_MIN;
int64_t x445 = -1498219309092852LL;
volatile int8_t x449 = 1;
static int16_t x452 = INT16_MIN;
volatile int64_t t53 = -1859LL;
static uint64_t x460 = UINT64_MAX;
static volatile int32_t x500 = INT32_MIN;
volatile uint64_t t56 = 1485595863624333LLU;
int8_t x536 = 1;
int64_t x550 = INT64_MIN;
static volatile uint32_t x560 = 312U;
uint32_t t61 = 7248U;
int8_t x565 = INT8_MIN;
static int8_t x566 = 1;
volatile int64_t t63 = 791947064739695254LL;
uint8_t x581 = 14U;
uint16_t x591 = UINT16_MAX;
int64_t t66 = 2093713545343LL;
uint64_t t67 = 15107632653723LLU;
int64_t t68 = 380151226441584LL;
int32_t x624 = INT32_MAX;
uint16_t x628 = UINT16_MAX;
uint16_t x715 = UINT16_MAX;
static int8_t x726 = -1;
int16_t x757 = INT16_MIN;
int32_t x759 = INT32_MIN;
static int8_t x828 = -3;
static volatile uint64_t x834 = 3349254041475LLU;
volatile int32_t x841 = INT32_MIN;
volatile int64_t x842 = 109358646LL;
uint32_t x846 = 2787596U;
int8_t x850 = INT8_MIN;
int8_t x852 = INT8_MIN;
uint16_t x856 = UINT16_MAX;
volatile int64_t t88 = 71651LL;
int16_t x858 = INT16_MIN;
int32_t x860 = -1;
volatile int64_t t89 = 19136LL;
int64_t x878 = -1LL;
uint64_t t93 = 118605494LLU;
static int16_t x896 = -485;
int32_t x903 = -461;
volatile uint8_t x906 = 4U;
volatile uint8_t x908 = 6U;


void f0(void) {
	int64_t x9 = INT64_MIN;
	volatile uint8_t x10 = 6U;
	static int64_t x11 = INT64_MAX;
	volatile int32_t x12 = INT32_MAX;
	static int64_t t0 = -158438834430654903LL;

	t0 = (x9*(x10/(x11/x12)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x21 = INT16_MAX;
	volatile int8_t x23 = INT8_MAX;

	t1 = (x21*(x22/(x23/x24)));

	if (t1 != -319150580) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x25 = 77U;
	uint32_t x28 = 1U;

	t2 = (x25*(x26/(x27/x28)));

	if (t2 != 26558974442LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x33 = 3U;
	int8_t x34 = INT8_MAX;
	static volatile int8_t x36 = 3;
	volatile int32_t t3 = -15849;

	t3 = (x33*(x34/(x35/x36)));

	if (t3 != -9) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x53 = 7;
	uint64_t x54 = 17540669LLU;
	uint64_t x55 = 11797551868950LLU;
	uint8_t x56 = UINT8_MAX;
	static uint64_t t4 = 245LLU;

	t4 = (x53*(x54/(x55/x56)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x57 = INT16_MAX;
	uint64_t x60 = 458504978265LLU;
	uint64_t t5 = 509423399061866LLU;

	t5 = (x57*(x58/(x59/x60)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x73 = 11912442LLU;
	static uint32_t x74 = 568U;
	int32_t x75 = INT32_MAX;
	static uint8_t x76 = UINT8_MAX;
	uint64_t t6 = 1066805830150849LLU;

	t6 = (x73*(x74/(x75/x76)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x94 = 467U;
	volatile uint8_t x95 = 121U;
	uint8_t x96 = 75U;
	int32_t t7 = 95035;

	t7 = (x93*(x94/(x95/x96)));

	if (t7 != 1401) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x97 = 89973562LL;
	static volatile int64_t x98 = -1LL;
	static int32_t x99 = INT32_MAX;
	int8_t x100 = -5;

	t8 = (x97*(x98/(x99/x100)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x105 = 28U;
	static int16_t x106 = -1;
	int32_t x107 = INT32_MAX;
	uint16_t x108 = 10U;

	t9 = (x105*(x106/(x107/x108)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x111 = -131382333554162442LL;
	static int64_t t10 = -160251096318LL;

	t10 = (x109*(x110/(x111/x112)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x113 = 33;
	int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = 4059U;
	uint32_t t11 = 430403978U;

	t11 = (x113*(x114/(x115/x116)));

	if (t11 != 66957U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x121 = INT32_MIN;
	volatile int16_t x122 = -4;
	static int32_t x123 = INT32_MIN;
	uint8_t x124 = 33U;
	static volatile int32_t t12 = 371224689;

	t12 = (x121*(x122/(x123/x124)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x125 = INT8_MAX;
	static uint64_t x126 = 3LLU;
	static int16_t x127 = INT16_MIN;
	uint64_t x128 = 14LLU;
	uint64_t t13 = 25LLU;

	t13 = (x125*(x126/(x127/x128)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x129 = -1;
	static int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MAX;
	static int16_t x132 = -7046;
	volatile int64_t t14 = 9242085LL;

	t14 = (x129*(x130/(x131/x132)));

	if (t14 != -7046LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x133 = UINT16_MAX;
	volatile uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MAX;
	int32_t x136 = -1;
	volatile uint32_t t15 = 116337U;

	t15 = (x133*(x134/(x135/x136)));

	if (t15 != 65535U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x157 = -1;
	int32_t x158 = INT32_MIN;
	static uint64_t x159 = UINT64_MAX;
	int64_t x160 = -838394260776131LL;
	volatile uint64_t t16 = 11LLU;

	t16 = (x157*(x158/(x159/x160)));

	if (t16 != 2147483648LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x165 = 1917737;
	int8_t x166 = -1;
	uint64_t x168 = 3793906438716LLU;
	uint64_t t17 = 254535LLU;

	t17 = (x165*(x166/(x167/x168)));

	if (t17 != 7275715069831008855LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = -1;
	volatile int64_t x171 = -650LL;
	static int64_t t18 = -63758700045LL;

	t18 = (x169*(x170/(x171/x172)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x173 = INT32_MIN;
	static uint16_t x174 = 1854U;
	volatile int8_t x176 = -60;
	volatile int32_t t19 = -3394;

	t19 = (x173*(x174/(x175/x176)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x177 = 16171U;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = 263744U;
	static int64_t t20 = 16089476360356862LL;

	t20 = (x177*(x178/(x179/x180)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x181 = 445U;
	uint64_t x182 = 4263747LLU;
	int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MIN;

	t21 = (x181*(x182/(x183/x184)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x185 = UINT8_MAX;
	uint32_t x187 = 823646U;
	int16_t x188 = INT16_MAX;

	t22 = (x185*(x186/(x187/x188)));

	if (t22 != 858659195U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x209 = 2622LLU;
	int64_t x210 = INT64_MAX;
	static uint32_t x211 = 685055U;
	volatile uint64_t t23 = 949975451948562LLU;

	t23 = (x209*(x210/(x211/x212)));

	if (t23 != 494230390759282290LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x225 = 39U;
	int16_t x226 = INT16_MAX;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	uint32_t t24 = 4246711U;

	t24 = (x225*(x226/(x227/x228)));

	if (t24 != 1277913U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x231 = INT64_MIN;
	static volatile int64_t x232 = 18540LL;
	volatile int64_t t25 = 4227232825LL;

	t25 = (x229*(x230/(x231/x232)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int8_t x234 = INT8_MAX;
	int8_t x235 = 4;
	int8_t x236 = 1;
	uint32_t t26 = 208424U;

	t26 = (x233*(x234/(x235/x236)));

	if (t26 != 4294967265U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x237 = 1641542916991098577LLU;
	int8_t x238 = INT8_MAX;
	volatile uint32_t x239 = 28998227U;
	volatile int16_t x240 = 11195;
	uint64_t t27 = 90009LLU;

	t27 = (x237*(x238/(x239/x240)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = 0U;
	uint16_t x247 = 4711U;
	volatile int32_t x248 = -1;
	volatile int64_t t28 = 5441769553111375LL;

	t28 = (x245*(x246/(x247/x248)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x249 = INT32_MIN;
	int8_t x250 = -1;
	int64_t x251 = INT64_MIN;
	static volatile uint8_t x252 = 116U;
	int64_t t29 = 3666557787LL;

	t29 = (x249*(x250/(x251/x252)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x258 = 20U;
	int32_t x260 = -605;
	volatile int32_t t30 = -145828;

	t30 = (x257*(x258/(x259/x260)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x266 = 1375U;
	volatile int16_t x267 = -15;
	int16_t x268 = -7;

	t31 = (x265*(x266/(x267/x268)));

	if (t31 != -687) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x269 = -1;
	static uint8_t x270 = UINT8_MAX;
	uint32_t x271 = 207253U;
	uint32_t x272 = 6U;
	volatile uint32_t t32 = 27421U;

	t32 = (x269*(x270/(x271/x272)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x273 = -1;
	int32_t x274 = -1;
	volatile uint8_t x275 = 14U;
	volatile int8_t x276 = -1;
	int32_t t33 = -4432;

	t33 = (x273*(x274/(x275/x276)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x278 = -2;
	uint64_t x279 = 12LLU;

	t34 = (x277*(x278/(x279/x280)));

	if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x289 = 111U;
	uint64_t x290 = 419152LLU;
	int64_t x291 = INT64_MAX;
	static uint64_t t35 = 1LLU;

	t35 = (x289*(x290/(x291/x292)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x294 = -1LL;
	volatile uint8_t x296 = 86U;
	static volatile int64_t t36 = -1153903LL;

	t36 = (x293*(x294/(x295/x296)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x301 = UINT64_MAX;
	volatile int64_t x303 = 26810LL;
	int8_t x304 = INT8_MAX;

	t37 = (x301*(x302/(x303/x304)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x305 = -28363;
	volatile uint16_t x307 = 26159U;
	int16_t x308 = -1;

	t38 = (x305*(x306/(x307/x308)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x310 = 6LL;
	volatile uint16_t x311 = UINT16_MAX;
	int8_t x312 = 1;
	static volatile int64_t t39 = 16575683539747LL;

	t39 = (x309*(x310/(x311/x312)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MIN;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t40 = 290256799192LLU;

	t40 = (x329*(x330/(x331/x332)));

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x357 = INT16_MAX;
	int64_t x358 = -5921042LL;
	int64_t t41 = -17035345LL;

	t41 = (x357*(x358/(x359/x360)));

	if (t41 != -97007391607LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x363 = INT64_MIN;
	int64_t t42 = -29698370LL;

	t42 = (x361*(x362/(x363/x364)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x365 = -1;
	volatile uint32_t x366 = 15U;
	volatile uint32_t x367 = 352839151U;
	uint32_t x368 = 1973U;
	uint32_t t43 = 89132U;

	t43 = (x365*(x366/(x367/x368)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x389 = -16872913;
	volatile int16_t x390 = -1;
	static uint64_t x391 = 17LLU;
	static uint16_t x392 = 1U;
	volatile uint64_t t44 = 2285142879128LLU;

	t44 = (x389*(x390/(x391/x392)));

	if (t44 != 13021231110854793665LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	int16_t x395 = INT16_MIN;
	static volatile uint16_t x396 = 18543U;
	uint64_t t45 = 27291987398688LLU;

	t45 = (x393*(x394/(x395/x396)));

	if (t45 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x401 = UINT8_MAX;
	volatile int32_t x404 = -1;
	int64_t t46 = -516843749367706LL;

	t46 = (x401*(x402/(x403/x404)));

	if (t46 != -255LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x413 = -1;
	static uint8_t x414 = 27U;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = 6LL;
	volatile int64_t t47 = -17118670LL;

	t47 = (x413*(x414/(x415/x416)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	uint64_t x427 = 859082927392654LLU;
	static uint64_t x428 = 112083LLU;
	uint64_t t48 = 221677LLU;

	t48 = (x425*(x426/(x427/x428)));

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x434 = 67120U;
	int8_t x435 = 5;
	uint32_t x436 = 1U;
	volatile uint32_t t49 = 10388U;

	t49 = (x433*(x434/(x435/x436)));

	if (t49 != 439864208U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x439 = INT32_MAX;
	int32_t x440 = INT32_MAX;
	volatile int64_t t50 = 20658904309149LL;

	t50 = (x437*(x438/(x439/x440)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x446 = INT8_MIN;
	int8_t x447 = -1;
	volatile uint32_t x448 = 50U;
	volatile int64_t t51 = -2340783443LL;

	t51 = (x445*(x446/(x447/x448)));

	if (t51 != -73412746145549748LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x450 = INT32_MIN;
	int64_t x451 = 117395LL;
	volatile int64_t t52 = 8710046818572LL;

	t52 = (x449*(x450/(x451/x452)));

	if (t52 != 715827882LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x453 = INT8_MIN;
	static int64_t x454 = -1083500LL;
	static int64_t x455 = 999608608127530155LL;
	volatile int32_t x456 = INT32_MIN;

	t53 = (x453*(x454/(x455/x456)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x457 = INT32_MAX;
	int16_t x458 = INT16_MAX;
	uint64_t x459 = UINT64_MAX;
	uint64_t t54 = 115LLU;

	t54 = (x457*(x458/(x459/x460)));

	if (t54 != 70366596661249LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x461 = INT8_MIN;
	uint8_t x462 = 5U;
	volatile int8_t x463 = INT8_MIN;
	uint32_t x464 = 3101U;
	static uint32_t t55 = 3760685U;

	t55 = (x461*(x462/(x463/x464)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x497 = -341044;
	uint32_t x498 = 5105507U;
	volatile uint64_t x499 = UINT64_MAX;

	t56 = (x497*(x498/(x499/x500)));

	if (t56 != 18446742332507022308LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x501 = 46U;
	static int64_t x502 = -1LL;
	static int8_t x503 = INT8_MAX;
	uint8_t x504 = 119U;
	int64_t t57 = 162LL;

	t57 = (x501*(x502/(x503/x504)));

	if (t57 != -46LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x525 = 14;
	static uint8_t x526 = 11U;
	volatile int32_t x527 = INT32_MAX;
	uint8_t x528 = 1U;
	volatile int32_t t58 = 59134;

	t58 = (x525*(x526/(x527/x528)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x533 = -1727;
	uint32_t x534 = 64U;
	int8_t x535 = INT8_MAX;
	volatile uint32_t t59 = 861U;

	t59 = (x533*(x534/(x535/x536)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x549 = 0;
	int64_t x551 = INT64_MIN;
	volatile int8_t x552 = INT8_MAX;
	int64_t t60 = 5578LL;

	t60 = (x549*(x550/(x551/x552)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x557 = 10107393U;
	static int32_t x558 = INT32_MIN;
	volatile int16_t x559 = INT16_MAX;

	t61 = (x557*(x558/(x559/x560)));

	if (t61 != 1899842945U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x561 = INT8_MIN;
	volatile int8_t x562 = 0;
	int64_t x563 = INT64_MAX;
	static int16_t x564 = 14027;
	int64_t t62 = 442651071770126005LL;

	t62 = (x561*(x562/(x563/x564)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x567 = INT64_MIN;
	int16_t x568 = INT16_MIN;

	t63 = (x565*(x566/(x567/x568)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x582 = 2427U;
	volatile int8_t x583 = -1;
	int32_t x584 = -1;
	static uint32_t t64 = 25227U;

	t64 = (x581*(x582/(x583/x584)));

	if (t64 != 33978U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x585 = -7553214687LL;
	int32_t x586 = INT32_MAX;
	volatile int64_t x587 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	int64_t t65 = -60283443568LL;

	t65 = (x585*(x586/(x587/x588)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x589 = -7;
	volatile int64_t x590 = -1937948476373LL;
	static int8_t x592 = INT8_MAX;

	t66 = (x589*(x590/(x591/x592)));

	if (t66 != 26289998707LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x605 = 6240637U;
	volatile uint64_t x606 = 941LLU;
	int8_t x607 = INT8_MIN;
	int8_t x608 = INT8_MAX;

	t67 = (x605*(x606/(x607/x608)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x613 = 113308336LL;
	int8_t x614 = -3;
	static uint16_t x615 = UINT16_MAX;
	int8_t x616 = 9;

	t68 = (x613*(x614/(x615/x616)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x621 = UINT64_MAX;
	volatile int64_t x622 = -1365LL;
	uint64_t x623 = 188727293669068LLU;
	volatile uint64_t t69 = 114055227813943891LLU;

	t69 = (x621*(x622/(x623/x624)));

	if (t69 != 18446534170156222043LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x625 = 14970U;
	int16_t x626 = -1;
	static int64_t x627 = INT64_MAX;
	static int64_t t70 = -20LL;

	t70 = (x625*(x626/(x627/x628)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x637 = 15U;
	volatile uint16_t x638 = 15U;
	uint8_t x639 = UINT8_MAX;
	uint8_t x640 = 1U;
	int32_t t71 = 14;

	t71 = (x637*(x638/(x639/x640)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x649 = -9;
	static uint64_t x650 = 83099123547877579LLU;
	uint32_t x651 = UINT32_MAX;
	uint32_t x652 = 380U;
	static uint64_t t72 = 612LLU;

	t72 = (x649*(x650/(x651/x652)));

	if (t72 != 18446744007539311912LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x673 = INT32_MIN;
	uint16_t x674 = UINT16_MAX;
	int16_t x675 = INT16_MIN;
	static uint64_t x676 = 29409062042LLU;
	volatile uint64_t t73 = 44LLU;

	t73 = (x673*(x674/(x675/x676)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x681 = INT16_MIN;
	volatile int64_t x682 = -314367253764566895LL;
	int64_t x683 = 17547165130503749LL;
	volatile int16_t x684 = -2;
	static int64_t t74 = 67622837610862763LL;

	t74 = (x681*(x682/(x683/x684)));

	if (t74 != -1146880LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x689 = UINT16_MAX;
	static int64_t x690 = INT64_MAX;
	int64_t x691 = -48701643394LL;
	int8_t x692 = INT8_MIN;
	int64_t t75 = -18970604585562165LL;

	t75 = (x689*(x690/(x691/x692)));

	if (t75 != 1588654231648245LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x705 = 0;
	int32_t x706 = 0;
	int64_t x707 = INT64_MIN;
	int8_t x708 = INT8_MIN;
	static int64_t t76 = -2073938511015941LL;

	t76 = (x705*(x706/(x707/x708)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x713 = 1504208786U;
	int16_t x714 = -832;
	int16_t x716 = INT16_MIN;
	volatile uint32_t t77 = 20428U;

	t77 = (x713*(x714/(x715/x716)));

	if (t77 != 1666226816U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x725 = -5;
	static int8_t x727 = -33;
	int32_t x728 = -1;
	int32_t t78 = -280;

	t78 = (x725*(x726/(x727/x728)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x741 = 7611;
	uint32_t x742 = 81U;
	static int64_t x743 = INT64_MIN;
	int8_t x744 = INT8_MIN;
	static int64_t t79 = 304LL;

	t79 = (x741*(x742/(x743/x744)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x758 = INT8_MIN;
	static volatile uint64_t x760 = 6429264358065LLU;
	static volatile uint64_t t80 = 6972LLU;

	t80 = (x757*(x758/(x759/x760)));

	if (t80 != 18236069920428589056LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x785 = 92LL;
	uint8_t x786 = UINT8_MAX;
	int8_t x787 = INT8_MIN;
	int8_t x788 = INT8_MAX;
	volatile int64_t t81 = -1062476730LL;

	t81 = (x785*(x786/(x787/x788)));

	if (t81 != -23460LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x797 = 25;
	int16_t x798 = INT16_MIN;
	int64_t x799 = INT64_MIN;
	uint64_t x800 = 8434735372807662LLU;
	static uint64_t t82 = 24941LLU;

	t82 = (x797*(x798/(x799/x800)));

	if (t82 != 421929187413300975LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x825 = INT8_MAX;
	static uint64_t x826 = UINT64_MAX;
	int8_t x827 = -31;
	volatile uint64_t t83 = 60426597594543LLU;

	t83 = (x825*(x826/(x827/x828)));

	if (t83 != 12912720851596686055LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x833 = -1;
	volatile uint8_t x835 = UINT8_MAX;
	int64_t x836 = -55LL;
	volatile uint64_t t84 = 18LLU;

	t84 = (x833*(x834/(x835/x836)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x843 = INT8_MIN;
	volatile int8_t x844 = 1;
	int64_t t85 = -234LL;

	t85 = (x841*(x842/(x843/x844)));

	if (t85 != 1834732719439872LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x845 = UINT64_MAX;
	int32_t x847 = INT32_MIN;
	int8_t x848 = 20;
	volatile uint64_t t86 = 43547476918039657LLU;

	t86 = (x845*(x846/(x847/x848)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x849 = 551872;
	int32_t x851 = INT32_MAX;
	int32_t t87 = -18;

	t87 = (x849*(x850/(x851/x852)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x853 = -1LL;
	volatile int64_t x854 = INT64_MIN;
	static uint32_t x855 = 742645U;

	t88 = (x853*(x854/(x855/x856)));

	if (t88 != 838488366986797800LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x857 = INT32_MIN;
	int64_t x859 = 15802095LL;

	t89 = (x857*(x858/(x859/x860)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x861 = UINT64_MAX;
	uint32_t x862 = 207675239U;
	int32_t x863 = 6242784;
	int8_t x864 = -12;
	uint64_t t90 = 337578930452LLU;

	t90 = (x861*(x862/(x863/x864)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x865 = INT16_MIN;
	uint64_t x866 = 8093076505264898136LLU;
	int64_t x867 = INT64_MAX;
	volatile int16_t x868 = -8;
	static uint64_t t91 = 31LLU;

	t91 = (x865*(x866/(x867/x868)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x869 = 1492662U;
	static int8_t x870 = 6;
	int32_t x871 = -1;
	static uint32_t x872 = 52176722U;
	volatile uint32_t t92 = 128617U;

	t92 = (x869*(x870/(x871/x872)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x877 = 7U;
	uint64_t x879 = UINT64_MAX;
	uint64_t x880 = 1003061892901999LLU;

	t93 = (x877*(x878/(x879/x880)));

	if (t93 != 7021599158018858LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x881 = INT32_MIN;
	static int16_t x882 = INT16_MAX;
	int32_t x883 = 382014;
	static volatile int8_t x884 = -1;
	volatile int32_t t94 = 1023737;

	t94 = (x881*(x882/(x883/x884)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x889 = INT8_MIN;
	volatile int8_t x890 = INT8_MAX;
	int64_t x891 = -543853066997472LL;
	int32_t x892 = 3389;
	int64_t t95 = -4028264512LL;

	t95 = (x889*(x890/(x891/x892)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x893 = 3249917LLU;
	uint64_t x894 = 551016970204895LLU;
	volatile uint64_t x895 = UINT64_MAX;
	uint64_t t96 = 95087716169628480LLU;

	t96 = (x893*(x894/(x895/x896)));

	if (t96 != 1425243607555236963LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x897 = INT8_MIN;
	uint32_t x898 = 967U;
	uint16_t x899 = 111U;
	int8_t x900 = 1;
	uint32_t t97 = 19349605U;

	t97 = (x897*(x898/(x899/x900)));

	if (t97 != 4294966272U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x901 = INT64_MIN;
	uint64_t x902 = 214LLU;
	uint8_t x904 = 13U;
	static uint64_t t98 = 18LLU;

	t98 = (x901*(x902/(x903/x904)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x905 = -1;
	uint64_t x907 = UINT64_MAX;
	static volatile uint64_t t99 = 255782702595470LLU;

	t99 = (x905*(x906/(x907/x908)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

