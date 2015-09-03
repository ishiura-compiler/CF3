#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = 3803LL;
uint16_t x21 = 2U;
volatile uint32_t x28 = UINT32_MAX;
static uint32_t t3 = 712U;
uint16_t x29 = UINT16_MAX;
uint64_t t4 = 1LLU;
static int8_t x54 = -16;
int64_t x65 = -1LL;
static int16_t x67 = -22;
static int32_t x73 = INT32_MIN;
uint64_t x78 = 148557471501LLU;
uint16_t x79 = 6309U;
volatile uint64_t x91 = 78951LLU;
uint64_t x92 = 35157481634835876LLU;
static uint64_t t11 = 497599LLU;
volatile uint64_t x96 = UINT64_MAX;
volatile uint64_t t12 = 196537032631597226LLU;
int32_t x97 = -46692046;
volatile int32_t x127 = -1;
uint8_t x139 = 0U;
uint16_t x140 = 112U;
uint8_t x144 = 34U;
int64_t t18 = 2LL;
static int64_t t21 = -203867982830LL;
int16_t x207 = INT16_MAX;
uint64_t t24 = 400170808612LLU;
static int64_t t25 = 396961091780LL;
volatile uint64_t t29 = 64342988LLU;
static int64_t x245 = -1LL;
int8_t x247 = 62;
uint16_t x249 = UINT16_MAX;
static int16_t x259 = INT16_MIN;
int16_t x262 = INT16_MIN;
volatile uint64_t t33 = 11823947777LLU;
int8_t x265 = -1;
int8_t x266 = INT8_MIN;
uint64_t x267 = 138137594670578498LLU;
uint64_t t34 = 138402LLU;
int16_t x287 = INT16_MIN;
static volatile uint64_t x292 = 0LLU;
volatile uint32_t t38 = 3949U;
int16_t x304 = 53;
volatile uint64_t t42 = 345849LLU;
static uint64_t t44 = 481LLU;
int16_t x337 = 123;
static int8_t x338 = -1;
uint64_t x340 = 11404LLU;
int64_t x354 = INT64_MAX;
uint64_t t47 = 9682785884486LLU;
int32_t x361 = INT32_MAX;
int16_t x385 = INT16_MAX;
int16_t x386 = 90;
int32_t x390 = -1;
int32_t t55 = -62541378;
static uint32_t x402 = 1998319U;
volatile int64_t x403 = INT64_MIN;
int64_t x404 = INT64_MIN;
volatile uint8_t x405 = 1U;
int32_t x406 = -62997;
int8_t x408 = INT8_MIN;
int32_t t57 = -935421;
static uint8_t x413 = 108U;
int16_t x446 = INT16_MIN;
uint64_t x451 = 14758586529LLU;
uint8_t x452 = 52U;
volatile uint64_t t62 = 79194748654251598LLU;
static uint32_t x460 = 87U;
int64_t x461 = -1LL;
int16_t x469 = INT16_MIN;
uint32_t x470 = 33471162U;
int8_t x473 = -1;
int8_t x476 = INT8_MAX;
volatile int8_t x506 = -1;
int64_t t74 = 7042LL;
static int8_t x526 = INT8_MIN;
int32_t x535 = 0;
int8_t x537 = INT8_MAX;
uint64_t t79 = 67451668308LLU;
int32_t x574 = -127515;
static uint64_t x576 = UINT64_MAX;
static volatile int32_t x583 = 6;
uint16_t x593 = 30U;
uint32_t x594 = 15485371U;
uint32_t x603 = 20U;
volatile uint32_t x629 = 13U;
int32_t x631 = -1;
static volatile int64_t t87 = -18589584340157691LL;
uint64_t x642 = 1LLU;
static volatile uint64_t t90 = 24777LLU;
int32_t x646 = INT32_MAX;
int32_t x652 = -1;
uint64_t t96 = 3015059LLU;
static volatile int8_t x677 = INT8_MAX;
uint32_t x681 = 7244U;
uint32_t t98 = 3697642U;
volatile int8_t x685 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x2 = -428777652184090LL;
	static uint16_t x3 = 5368U;
	volatile int8_t x4 = 27;
	volatile uint64_t t0 = 1064LLU;

	t0 = (x1*(x2*(x3-x4)));

	if (t0 != 2290101440315224690LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	static int16_t x10 = -1;
	static volatile int16_t x11 = INT16_MIN;
	static int64_t t1 = 17031684548456LL;

	t1 = (x9*(x10*(x11-x12)));

	if (t1 != 1198321957LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x22 = 65400U;
	volatile uint32_t x23 = UINT32_MAX;
	volatile int8_t x24 = 0;
	uint32_t t2 = 126813514U;

	t2 = (x21*(x22*(x23-x24)));

	if (t2 != 4294836496U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x25 = -3;
	uint32_t x26 = 16U;
	int16_t x27 = 2;

	t3 = (x25*(x26*(x27-x28)));

	if (t3 != 4294967152U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x30 = 49958871442080578LLU;
	uint8_t x31 = 91U;
	uint8_t x32 = UINT8_MAX;

	t4 = (x29*(x30*(x31-x32)));

	if (t4 != 2865544630517044808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x53 = 0;
	int8_t x55 = -1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t5 = 0;

	t5 = (x53*(x54*(x55-x56)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x61 = 8;
	static uint16_t x62 = 12U;
	volatile int8_t x63 = 0;
	static int8_t x64 = 7;
	int32_t t6 = 15;

	t6 = (x61*(x62*(x63-x64)));

	if (t6 != -672) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x66 = 31693U;
	volatile int64_t x68 = -119072LL;
	static int64_t t7 = -1594741LL;

	t7 = (x65*(x66*(x67-x68)));

	if (t7 != -3773051650LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x74 = 410704U;
	int16_t x75 = 185;
	static int32_t x76 = INT32_MAX;
	static uint32_t t8 = 1841310U;

	t8 = (x73*(x74*(x75-x76)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x77 = INT16_MIN;
	int8_t x80 = INT8_MAX;
	volatile uint64_t t9 = 182478817LLU;

	t9 = (x77*(x78*(x79-x80)));

	if (t9 != 6799937307392147456LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x81 = UINT32_MAX;
	static uint32_t x82 = UINT32_MAX;
	volatile uint8_t x83 = 33U;
	int32_t x84 = 267261618;
	uint32_t t10 = 600627U;

	t10 = (x81*(x82*(x83-x84)));

	if (t10 != 4027705711U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x89 = -1;
	int16_t x90 = -1;

	t11 = (x89*(x90*(x91-x92)));

	if (t11 != 18411586592074794691LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x93 = 95664011731LLU;
	uint32_t x94 = 568U;
	int8_t x95 = -1;

	t12 = (x93*(x94*(x95-x96)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x98 = 25034204882LLU;
	int32_t x99 = INT32_MIN;
	int32_t x100 = -128935;
	volatile uint64_t t13 = 243286233145LLU;

	t13 = (x97*(x98*(x99-x100)));

	if (t13 != 6897936016739925916LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x113 = 2U;
	int64_t x114 = INT64_MAX;
	uint64_t x115 = 19LLU;
	uint64_t x116 = 3810759LLU;
	volatile uint64_t t14 = 1097844634177669652LLU;

	t14 = (x113*(x114*(x115-x116)));

	if (t14 != 7621480LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x117 = -148LL;
	int16_t x118 = -8;
	static volatile uint32_t x119 = 404364U;
	volatile uint64_t x120 = 4620058291295LLU;
	volatile uint64_t t15 = 21538058423463LLU;

	t15 = (x117*(x118*(x119-x120)));

	if (t15 != 18441273925171425312LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x125 = -28;
	static int64_t x126 = INT64_MIN;
	volatile uint64_t x128 = 54334LLU;
	static volatile uint64_t t16 = 5636710749633599997LLU;

	t16 = (x125*(x126*(x127-x128)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x137 = 231563281945494961LLU;
	uint16_t x138 = 374U;
	static volatile uint64_t t17 = 864895496893LLU;

	t17 = (x137*(x138*(x139-x140)));

	if (t17 != 3264628638331223648LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x141 = 42U;
	uint8_t x142 = 3U;
	int64_t x143 = 63193908851LL;

	t18 = (x141*(x142*(x143-x144)));

	if (t18 != 7962432510942LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x153 = 0U;
	static int64_t x154 = -640177569LL;
	int8_t x155 = INT8_MIN;
	static int8_t x156 = INT8_MIN;
	int64_t t19 = 14640556LL;

	t19 = (x153*(x154*(x155-x156)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x157 = INT32_MAX;
	uint32_t x158 = 650476U;
	uint64_t x159 = 3886621LLU;
	int64_t x160 = INT64_MAX;
	volatile uint64_t t20 = 1342803LLU;

	t20 = (x157*(x158*(x159-x160)));

	if (t20 != 5827327546219451480LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	volatile uint32_t x163 = UINT32_MAX;
	int64_t x164 = -46LL;

	t21 = (x161*(x162*(x163-x164)));

	if (t21 != 140737489829888LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x173 = 7;
	int16_t x174 = INT16_MAX;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = INT16_MAX;
	uint64_t t22 = 165909297LLU;

	t22 = (x173*(x174*(x175-x176)));

	if (t22 != 18446744066193588224LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = INT16_MIN;
	static volatile uint64_t x208 = 182181856943LLU;
	uint64_t t23 = 4320370329497LLU;

	t23 = (x205*(x206*(x207-x208)));

	if (t23 != 7297940620419530752LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x209 = INT8_MIN;
	uint16_t x210 = 12U;
	int16_t x211 = INT16_MAX;
	uint64_t x212 = UINT64_MAX;

	t24 = (x209*(x210*(x211-x212)));

	if (t24 != 18446744073659219968LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x213 = 271U;
	int64_t x214 = -339696741903LL;
	static volatile uint8_t x215 = 14U;
	uint8_t x216 = 0U;

	t25 = (x213*(x214*(x215-x216)));

	if (t25 != -1288809438779982LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x217 = -1;
	uint64_t x218 = 452011LLU;
	int16_t x219 = -187;
	int32_t x220 = -33;
	uint64_t t26 = 9899756949LLU;

	t26 = (x217*(x218*(x219-x220)));

	if (t26 != 69609694LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x229 = INT64_MAX;
	volatile uint8_t x230 = 72U;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = -10604994061LL;
	volatile uint64_t t27 = 17136974844755975LLU;

	t27 = (x229*(x230*(x231-x232)));

	if (t27 != 18446743310149979296LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x237 = 27U;
	static volatile uint16_t x238 = UINT16_MAX;
	uint16_t x239 = 6189U;
	static uint64_t x240 = 6684390969517867635LLU;
	volatile uint64_t t28 = 0LLU;

	t28 = (x237*(x238*(x239-x240)));

	if (t28 != 2739378484249277794LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	static volatile uint64_t x244 = 14685911LLU;

	t29 = (x241*(x242*(x243-x244)));

	if (t29 != 14214966348760481792LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x246 = -1;
	uint64_t x248 = 2741507969221LLU;
	volatile uint64_t t30 = 4991696543674LLU;

	t30 = (x245*(x246*(x247-x248)));

	if (t30 != 18446741332201582457LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x250 = INT32_MAX;
	int32_t x251 = 3384724;
	uint64_t x252 = UINT64_MAX;
	uint64_t t31 = 1LLU;

	t31 = (x249*(x250*(x251-x252)));

	if (t31 != 15181824567340344725LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x257 = 1;
	static uint16_t x258 = 448U;
	volatile int8_t x260 = INT8_MIN;
	static volatile int32_t t32 = -1;

	t32 = (x257*(x258*(x259-x260)));

	if (t32 != -14622720) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x261 = INT8_MIN;
	uint16_t x263 = UINT16_MAX;
	uint64_t x264 = UINT64_MAX;

	t33 = (x261*(x262*(x263-x264)));

	if (t33 != 274877906944LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x268 = -1;

	t34 = (x265*(x266*(x267-x268)));

	if (t34 != 17681612117834047872LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x281 = 1;
	static volatile int64_t x282 = -1LL;
	int32_t x283 = INT32_MIN;
	int64_t x284 = -5509264594753LL;
	static int64_t t35 = 1583164978994782LL;

	t35 = (x281*(x282*(x283-x284)));

	if (t35 != -5507117111105LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x285 = -595971583;
	int64_t x286 = -1LL;
	volatile uint64_t x288 = 18424LLU;
	volatile uint64_t t36 = 68516LLU;

	t36 = (x285*(x286*(x287-x288)));

	if (t36 != 18446713564732274680LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x289 = 64825256U;
	int16_t x290 = INT16_MAX;
	uint16_t x291 = 1948U;
	static volatile uint64_t t37 = 3893068277484336LLU;

	t37 = (x289*(x290*(x291-x292)));

	if (t37 != 4137803610209696LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x293 = 994U;
	volatile int16_t x294 = INT16_MAX;
	uint32_t x295 = 290U;
	volatile int32_t x296 = INT32_MAX;

	t38 = (x293*(x294*(x295-x296)));

	if (t38 != 888051226U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x297 = INT8_MIN;
	static volatile int64_t x298 = -156681120LL;
	volatile int64_t x299 = -1LL;
	int64_t x300 = -1LL;
	int64_t t39 = 1553286082961901045LL;

	t39 = (x297*(x298*(x299-x300)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x301 = 20U;
	static int8_t x302 = 1;
	static uint64_t x303 = UINT64_MAX;
	volatile uint64_t t40 = 6195049LLU;

	t40 = (x301*(x302*(x303-x304)));

	if (t40 != 18446744073709550536LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x305 = INT32_MAX;
	uint64_t x306 = 295155456613LLU;
	volatile int32_t x307 = INT32_MIN;
	static uint32_t x308 = UINT32_MAX;
	volatile uint64_t t41 = 6024625LLU;

	t41 = (x305*(x306*(x307-x308)));

	if (t41 != 4611685723271931291LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x317 = 2U;
	int16_t x318 = INT16_MIN;
	volatile uint32_t x319 = UINT32_MAX;
	uint64_t x320 = 1LLU;

	t42 = (x317*(x318*(x319-x320)));

	if (t42 != 18446462598732972032LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x325 = INT32_MAX;
	volatile uint16_t x326 = 18944U;
	uint16_t x327 = 615U;
	uint64_t x328 = 9628349171840647LLU;
	uint64_t t43 = 19598075510917236LLU;

	t43 = (x325*(x326*(x327-x328)));

	if (t43 != 17204984657713643520LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x329 = -1;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = UINT64_MAX;
	uint32_t x332 = 2U;

	t44 = (x329*(x330*(x331-x332)));

	if (t44 != 18446744073709453312LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x339 = INT32_MAX;
	uint64_t t45 = 1LLU;

	t45 = (x337*(x338*(x339-x340)));

	if (t45 != 18446743809570465727LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x341 = 1602U;
	volatile int8_t x342 = 9;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = 59;
	volatile int32_t t46 = -2;

	t46 = (x341*(x342*(x343-x344)));

	if (t46 != 2825928) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x353 = -161;
	volatile uint64_t x355 = 15874212656LLU;
	static uint64_t x356 = 9047580799817777959LLU;

	t47 = (x353*(x354*(x355-x356)));

	if (t47 != 9855647644995339689LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x362 = 111LLU;
	int16_t x363 = -1;
	uint16_t x364 = 323U;
	volatile uint64_t t48 = 1915611045884800LLU;

	t48 = (x361*(x362*(x363-x364)));

	if (t48 != 18446666841607670908LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x369 = UINT32_MAX;
	static uint8_t x370 = 31U;
	volatile int16_t x371 = INT16_MAX;
	static uint8_t x372 = UINT8_MAX;
	volatile uint32_t t49 = 3704457U;

	t49 = (x369*(x370*(x371-x372)));

	if (t49 != 4293959424U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x373 = 0;
	int32_t x374 = -134552;
	static int64_t x375 = INT64_MIN;
	static volatile uint64_t x376 = 10554LLU;
	static volatile uint64_t t50 = 195844357LLU;

	t50 = (x373*(x374*(x375-x376)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x377 = 23U;
	volatile uint8_t x378 = 63U;
	uint16_t x379 = 0U;
	static int8_t x380 = INT8_MIN;
	volatile int32_t t51 = 57;

	t51 = (x377*(x378*(x379-x380)));

	if (t51 != 185472) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x381 = 123490LLU;
	uint16_t x382 = UINT16_MAX;
	uint32_t x383 = UINT32_MAX;
	static int16_t x384 = INT16_MIN;
	uint64_t t52 = 3LLU;

	t52 = (x381*(x382*(x383-x384)));

	if (t52 != 265180616254050LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x387 = INT8_MIN;
	volatile uint32_t x388 = UINT32_MAX;
	volatile uint32_t t53 = 143U;

	t53 = (x385*(x386*(x387-x388)));

	if (t53 != 3920440486U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x389 = 0LL;
	static uint32_t x391 = 30258U;
	static volatile int64_t x392 = -34505368029043LL;
	int64_t t54 = -422375498777204534LL;

	t54 = (x389*(x390*(x391-x392)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x397 = UINT8_MAX;
	static int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	static int16_t x400 = -1;

	t55 = (x397*(x398*(x399-x400)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x401 = UINT16_MAX;
	static volatile int64_t t56 = -33025377356LL;

	t56 = (x401*(x402*(x403-x404)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x407 = -1;

	t57 = (x405*(x406*(x407-x408)));

	if (t57 != -8000619) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x414 = 52U;
	int8_t x415 = -7;
	static uint64_t x416 = 12884LLU;
	static volatile uint64_t t58 = 886149613238878460LLU;

	t58 = (x413*(x414*(x415-x416)));

	if (t58 != 18446744073637155760LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x417 = -39;
	int64_t x418 = -1LL;
	volatile uint16_t x419 = 732U;
	uint64_t x420 = 3308844690400813LLU;
	static volatile uint64_t t59 = 6782072337180982LLU;

	t59 = (x417*(x418*(x419-x420)));

	if (t59 != 18317699130783948457LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x421 = INT16_MIN;
	int16_t x422 = -1;
	int8_t x423 = INT8_MIN;
	int64_t x424 = 278LL;
	int64_t t60 = 1737LL;

	t60 = (x421*(x422*(x423-x424)));

	if (t60 != -13303808LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x445 = 972661007632LLU;
	uint16_t x447 = UINT16_MAX;
	uint16_t x448 = 0U;
	static volatile uint64_t t61 = 29227229906LLU;

	t61 = (x445*(x446*(x447-x448)));

	if (t61 != 14187087621863768064LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x449 = -1LL;
	uint32_t x450 = 1U;

	t62 = (x449*(x450*(x451-x452)));

	if (t62 != 18446744058950965139LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x453 = 10;
	int32_t x454 = -1;
	int8_t x455 = 18;
	int16_t x456 = 3;
	static int32_t t63 = -3545;

	t63 = (x453*(x454*(x455-x456)));

	if (t63 != -150) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x457 = 8LL;
	static uint64_t x458 = 54834358149818LLU;
	uint32_t x459 = 6467758U;
	static volatile uint64_t t64 = 3024608LLU;

	t64 = (x457*(x458*(x459-x460)));

	if (t64 != 14852860795970873776LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x462 = 6U;
	static int8_t x463 = INT8_MIN;
	uint32_t x464 = 230848607U;
	int64_t t65 = -1LL;

	t65 = (x461*(x462*(x463-x464)));

	if (t65 != -2909874886LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x465 = -136;
	uint8_t x466 = 0U;
	static int8_t x467 = -1;
	uint32_t x468 = 25905196U;
	volatile uint32_t t66 = 7419054U;

	t66 = (x465*(x466*(x467-x468)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x471 = INT16_MAX;
	volatile int16_t x472 = -14000;
	uint32_t t67 = 2U;

	t67 = (x469*(x470*(x471-x472)));

	if (t67 != 258801664U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x474 = INT8_MIN;
	int8_t x475 = 4;
	static volatile int32_t t68 = 0;

	t68 = (x473*(x474*(x475-x476)));

	if (t68 != -15744) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x497 = INT8_MIN;
	uint8_t x498 = 1U;
	uint16_t x499 = 12810U;
	int16_t x500 = 288;
	volatile int32_t t69 = 44564608;

	t69 = (x497*(x498*(x499-x500)));

	if (t69 != -1602816) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x501 = -1;
	uint8_t x502 = 1U;
	int32_t x503 = INT32_MIN;
	static uint32_t x504 = UINT32_MAX;
	volatile uint32_t t70 = 192164U;

	t70 = (x501*(x502*(x503-x504)));

	if (t70 != 2147483647U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x505 = INT8_MAX;
	int16_t x507 = 13597;
	int16_t x508 = -1;
	int32_t t71 = -1;

	t71 = (x505*(x506*(x507-x508)));

	if (t71 != -1726946) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x509 = UINT64_MAX;
	uint64_t x510 = 0LLU;
	int32_t x511 = INT32_MAX;
	uint64_t x512 = 17LLU;
	volatile uint64_t t72 = 226220132845928159LLU;

	t72 = (x509*(x510*(x511-x512)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x513 = 11234U;
	int8_t x514 = 0;
	uint64_t x515 = 2018LLU;
	static uint8_t x516 = 0U;
	uint64_t t73 = 8405171151LLU;

	t73 = (x513*(x514*(x515-x516)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x521 = 0U;
	int64_t x522 = -1044667512227413LL;
	int32_t x523 = 0;
	int8_t x524 = -39;

	t74 = (x521*(x522*(x523-x524)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x525 = 745U;
	int64_t x527 = -26050290518755LL;
	static uint32_t x528 = 20011U;
	volatile int64_t t75 = -355248401666779965LL;

	t75 = (x525*(x526*(x527-x528)));

	if (t75 != 2484155705776725760LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x533 = 0U;
	static uint16_t x534 = 223U;
	volatile uint16_t x536 = 0U;
	int32_t t76 = 778337126;

	t76 = (x533*(x534*(x535-x536)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x538 = 0;
	static uint64_t x539 = 99023774404709LLU;
	static uint8_t x540 = 1U;
	volatile uint64_t t77 = 61572LLU;

	t77 = (x537*(x538*(x539-x540)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x541 = 1U;
	int8_t x542 = 1;
	uint64_t x543 = 8034038140809LLU;
	volatile uint64_t x544 = 3LLU;
	uint64_t t78 = 772431834688580799LLU;

	t78 = (x541*(x542*(x543-x544)));

	if (t78 != 8034038140806LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x553 = INT8_MIN;
	volatile int64_t x554 = INT64_MIN;
	int8_t x555 = INT8_MIN;
	static uint64_t x556 = UINT64_MAX;

	t79 = (x553*(x554*(x555-x556)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x557 = 3U;
	volatile uint8_t x558 = UINT8_MAX;
	int8_t x559 = -30;
	static int8_t x560 = INT8_MAX;
	volatile int32_t t80 = 1040196;

	t80 = (x557*(x558*(x559-x560)));

	if (t80 != -120105) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x565 = INT64_MIN;
	volatile int32_t x566 = INT32_MIN;
	uint64_t x567 = 0LLU;
	int32_t x568 = INT32_MIN;
	uint64_t t81 = 149255001808803491LLU;

	t81 = (x565*(x566*(x567-x568)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x573 = 2336U;
	uint64_t x575 = 620445361910LLU;
	uint64_t t82 = 35075761753288597LLU;

	t82 = (x573*(x574*(x575-x576)));

	if (t82 != 18098997813751466336LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x581 = INT16_MIN;
	volatile int16_t x582 = -1;
	int32_t x584 = -1;
	static volatile int32_t t83 = 70779;

	t83 = (x581*(x582*(x583-x584)));

	if (t83 != 229376) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x595 = -7;
	uint32_t x596 = UINT32_MAX;
	volatile uint32_t t84 = 740U;

	t84 = (x593*(x594*(x595-x596)));

	if (t84 != 1507600516U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x601 = -1;
	uint8_t x602 = 127U;
	int8_t x604 = 18;
	volatile uint32_t t85 = 4621U;

	t85 = (x601*(x602*(x603-x604)));

	if (t85 != 4294967042U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x625 = UINT16_MAX;
	uint64_t x626 = 67696LLU;
	uint8_t x627 = UINT8_MAX;
	uint64_t x628 = 950198LLU;
	volatile uint64_t t86 = 149890204477690LLU;

	t86 = (x625*(x626*(x627-x628)));

	if (t86 != 18442529692095621136LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x630 = -1LL;
	uint8_t x632 = 81U;

	t87 = (x629*(x630*(x631-x632)));

	if (t87 != 1066LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x633 = 37909U;
	int32_t x634 = 9170419;
	static int32_t x635 = INT32_MIN;
	uint64_t x636 = 165227015LLU;
	uint64_t t88 = 336753583LLU;

	t88 = (x633*(x634*(x635-x636)));

	if (t88 != 7662734483362464631LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x637 = 799795609762837137LL;
	int64_t x638 = INT64_MIN;
	static uint64_t x639 = 62051934009LLU;
	uint32_t x640 = 6073U;
	uint64_t t89 = 397419788LLU;

	t89 = (x637*(x638*(x639-x640)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x641 = INT8_MAX;
	static int64_t x643 = -1LL;
	static int16_t x644 = INT16_MIN;

	t90 = (x641*(x642*(x643-x644)));

	if (t90 != 4161409LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x645 = 3;
	static uint64_t x647 = 12129026007500LLU;
	volatile int16_t x648 = -425;
	volatile uint64_t t91 = 616096539747157LLU;

	t91 = (x645*(x646*(x647-x648)));

	if (t91 != 247121936229062049LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x649 = 15U;
	int8_t x650 = -8;
	int32_t x651 = -1;
	volatile uint32_t t92 = 1086957024U;

	t92 = (x649*(x650*(x651-x652)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x657 = -23;
	static int16_t x658 = INT16_MAX;
	int16_t x659 = INT16_MIN;
	volatile int16_t x660 = INT16_MIN;
	volatile int32_t t93 = 7702;

	t93 = (x657*(x658*(x659-x660)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x661 = 24484LLU;
	uint64_t x662 = 720020691394LLU;
	volatile int8_t x663 = INT8_MAX;
	static int16_t x664 = INT16_MIN;
	static uint64_t t94 = 70504315250000LLU;

	t94 = (x661*(x662*(x663-x664)));

	if (t94 != 8056448188147344824LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x665 = -1;
	volatile int16_t x666 = 13;
	uint8_t x667 = UINT8_MAX;
	int64_t x668 = -1LL;
	volatile int64_t t95 = 10652405419567718LL;

	t95 = (x665*(x666*(x667-x668)));

	if (t95 != -3328LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x669 = UINT32_MAX;
	static uint64_t x670 = 508747020835285LLU;
	int8_t x671 = 1;
	volatile int16_t x672 = -1;

	t96 = (x669*(x670*(x671-x672)));

	if (t96 != 14620538451407522902LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x678 = INT64_MIN;
	volatile uint64_t x679 = UINT64_MAX;
	uint32_t x680 = 398010001U;
	static volatile uint64_t t97 = 16825LLU;

	t97 = (x677*(x678*(x679-x680)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x682 = 3U;
	uint8_t x683 = 20U;
	int16_t x684 = INT16_MIN;

	t98 = (x681*(x682*(x683-x684)));

	if (t98 != 712548816U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x686 = -1LL;
	uint64_t x687 = 129663792446502432LLU;
	volatile int16_t x688 = INT16_MIN;
	volatile uint64_t t99 = 37526686943LLU;

	t99 = (x685*(x686*(x687-x688)));

	if (t99 != 129663792446535200LLU) { NG(); } else { ; }
	
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

