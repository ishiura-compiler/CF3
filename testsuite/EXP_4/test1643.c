#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x11 = 1U;
int32_t x18 = INT32_MIN;
int32_t x20 = -426;
int32_t t3 = 0;
static int32_t x22 = INT32_MIN;
int64_t x23 = -9LL;
int64_t x27 = INT64_MIN;
static int8_t x28 = INT8_MIN;
uint64_t t8 = 200LLU;
int64_t x63 = 14007LL;
static volatile int32_t t10 = -237872350;
uint16_t x72 = 4U;
int8_t x76 = INT8_MIN;
int64_t t12 = -3828363LL;
volatile int32_t t13 = -859231455;
int8_t x88 = -1;
int32_t x99 = INT32_MAX;
int32_t t17 = -187;
int32_t x117 = INT32_MAX;
volatile int64_t x146 = INT64_MIN;
int32_t x158 = -362;
volatile int32_t x159 = 2264325;
int8_t x168 = 31;
volatile int32_t t24 = -282376;
volatile int64_t t28 = -128LL;
static uint64_t t30 = 110198711502779LLU;
int16_t x225 = -10349;
static int16_t x226 = -671;
int16_t x233 = INT16_MIN;
int16_t x254 = -943;
int8_t x262 = -1;
static uint64_t x263 = 1055074340LLU;
uint64_t x264 = 7960941490751638LLU;
int32_t x292 = INT32_MAX;
static volatile int8_t x333 = INT8_MAX;
uint64_t x335 = 437LLU;
static int16_t x343 = INT16_MIN;
volatile uint32_t x356 = UINT32_MAX;
int16_t x385 = 0;
static volatile int32_t t48 = -8;
int32_t x397 = -1;
int64_t x398 = -1LL;
int32_t x416 = -1;
int64_t x421 = INT64_MIN;
int32_t x423 = -1;
uint8_t x424 = 4U;
int64_t x434 = -1LL;
int64_t x435 = -1LL;
static int8_t x443 = -1;
int8_t x446 = -1;
int32_t x447 = INT32_MAX;
int32_t x456 = INT32_MIN;
int8_t x474 = INT8_MIN;
volatile int16_t x480 = INT16_MIN;
int32_t t61 = 319457062;
uint16_t x508 = 597U;
uint8_t x509 = 0U;
int32_t x517 = 0;
static int64_t x542 = -1LL;
int64_t x543 = -646106500LL;
int16_t x544 = INT16_MAX;
static int8_t x576 = INT8_MAX;
volatile int32_t t71 = -43266;
int32_t x598 = -1;
static int32_t x663 = INT32_MAX;
static volatile uint32_t x671 = 44563333U;
int64_t x681 = -1LL;
uint8_t x693 = 27U;
static int8_t x696 = 17;
static uint64_t t86 = 3305543246220498205LLU;
static volatile int8_t x735 = -1;
volatile int32_t t88 = -1;
int8_t x749 = INT8_MIN;
int64_t x779 = INT64_MIN;
volatile uint32_t t92 = 44282U;
int16_t x808 = INT16_MIN;
volatile int8_t x811 = 0;
int32_t t94 = -1;
int16_t x814 = INT16_MIN;
volatile int32_t t96 = -23173276;
int32_t x821 = INT32_MIN;
static int32_t t98 = 5660254;
static int64_t x836 = 1412761214LL;


void f0(void) {
	int32_t x1 = -1;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = 2U;
	int64_t x4 = 14508035042LL;
	static volatile int32_t t0 = -21;

	t0 = (x1%(x2<=(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 30U;
	int32_t x10 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	volatile uint32_t t1 = 0U;

	t1 = (x9%(x10<=(x11<=x12)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 11;
	int8_t x14 = -1;
	volatile int32_t x15 = 38;
	int64_t x16 = -25812907936010LL;
	volatile int32_t t2 = -15611;

	t2 = (x13%(x14<=(x15<=x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int16_t x19 = 0;

	t3 = (x17%(x18<=(x19<=x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	volatile int64_t x24 = INT64_MAX;
	volatile int32_t t4 = 113050747;

	t4 = (x21%(x22<=(x23<=x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -1;
	int8_t x26 = INT8_MIN;
	static volatile int32_t t5 = -20941453;

	t5 = (x25%(x26<=(x27<=x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MAX;
	int16_t x38 = -3;
	static volatile int16_t x39 = -2;
	int64_t x40 = -10LL;
	int32_t t6 = 21403391;

	t6 = (x37%(x38<=(x39<=x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = INT64_MAX;
	volatile int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 107U;
	volatile int64_t t7 = 2LL;

	t7 = (x41%(x42<=(x43<=x44)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 258227492196273914LLU;
	int16_t x46 = INT16_MIN;
	int8_t x47 = 10;
	uint32_t x48 = 210087237U;

	t8 = (x45%(x46<=(x47<=x48)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = -38;
	volatile int16_t x51 = INT16_MIN;
	uint32_t x52 = 12U;
	volatile uint64_t t9 = 1093510118804034LLU;

	t9 = (x49%(x50<=(x51<=x52)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = 8498U;
	static int64_t x62 = INT64_MIN;
	int32_t x64 = INT32_MAX;

	t10 = (x61%(x62<=(x63<=x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = INT64_MIN;
	volatile int32_t x71 = INT32_MAX;
	volatile int32_t t11 = -77;

	t11 = (x69%(x70<=(x71<=x72)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x73 = -1LL;
	volatile int32_t x74 = -1;
	volatile int64_t x75 = INT64_MIN;

	t12 = (x73%(x74<=(x75<=x76)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = INT32_MIN;
	uint8_t x83 = 2U;
	int32_t x84 = INT32_MAX;

	t13 = (x81%(x82<=(x83<=x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = 11502LL;
	volatile int16_t x86 = -1;
	uint16_t x87 = 4687U;
	int64_t t14 = 45LL;

	t14 = (x85%(x86<=(x87<=x88)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = INT64_MAX;
	volatile int64_t x90 = -942708039886LL;
	static volatile int32_t x91 = -1;
	int16_t x92 = -1;
	volatile int64_t t15 = 3724826496LL;

	t15 = (x89%(x90<=(x91<=x92)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = 16U;
	static int32_t x94 = -1;
	static uint16_t x95 = 8212U;
	int32_t x96 = -1;
	int32_t t16 = -14;

	t16 = (x93%(x94<=(x95<=x96)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x97 = 1;
	volatile int8_t x98 = -1;
	uint16_t x100 = 10U;

	t17 = (x97%(x98<=(x99<=x100)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = -1;
	int8_t x106 = -43;
	static int16_t x107 = -1;
	static int16_t x108 = -1;
	volatile int32_t t18 = -3538;

	t18 = (x105%(x106<=(x107<=x108)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;
	int32_t t19 = 1840984;

	t19 = (x117%(x118<=(x119<=x120)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x125 = 89U;
	int32_t x126 = INT32_MIN;
	static volatile int8_t x127 = INT8_MIN;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t20 = 373116129;

	t20 = (x125%(x126<=(x127<=x128)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x141 = 58;
	static int8_t x142 = INT8_MIN;
	uint16_t x143 = 1773U;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t21 = 2336;

	t21 = (x141%(x142<=(x143<=x144)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x145 = 4005U;
	uint64_t x147 = 2LLU;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t22 = 702105583;

	t22 = (x145%(x146<=(x147<=x148)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x157 = INT64_MIN;
	int16_t x160 = -2;
	int64_t t23 = -20LL;

	t23 = (x157%(x158<=(x159<=x160)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x165 = UINT8_MAX;
	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;

	t24 = (x165%(x166<=(x167<=x168)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x177 = -1;
	int8_t x178 = -6;
	int32_t x179 = 2;
	uint32_t x180 = 69U;
	static int32_t t25 = 19583;

	t25 = (x177%(x178<=(x179<=x180)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MIN;
	static uint32_t x184 = 4072U;
	int32_t t26 = -58079301;

	t26 = (x181%(x182<=(x183<=x184)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x197 = 1U;
	int32_t x198 = 0;
	int8_t x199 = INT8_MAX;
	volatile uint32_t x200 = 93809483U;
	static volatile int32_t t27 = -253553165;

	t27 = (x197%(x198<=(x199<=x200)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x201 = -1LL;
	int64_t x202 = -1LL;
	int64_t x203 = INT64_MIN;
	static uint8_t x204 = 15U;

	t28 = (x201%(x202<=(x203<=x204)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x205 = -1;
	int32_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int8_t x208 = 4;
	int32_t t29 = 691;

	t29 = (x205%(x206<=(x207<=x208)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x213 = 36373017508529LLU;
	int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MAX;
	int16_t x216 = INT16_MAX;

	t30 = (x213%(x214<=(x215<=x216)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x217 = 122U;
	int8_t x218 = -63;
	volatile int8_t x219 = INT8_MAX;
	int64_t x220 = -1LL;
	int32_t t31 = 1452832;

	t31 = (x217%(x218<=(x219<=x220)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x227 = -24;
	static uint16_t x228 = 0U;
	static int32_t t32 = 3531773;

	t32 = (x225%(x226<=(x227<=x228)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x229 = -1LL;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = UINT16_MAX;
	uint64_t x232 = UINT64_MAX;
	volatile int64_t t33 = -5634446302934LL;

	t33 = (x229%(x230<=(x231<=x232)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = 1U;
	volatile int32_t t34 = -102502;

	t34 = (x233%(x234<=(x235<=x236)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x253 = -1;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	static int32_t t35 = 2172847;

	t35 = (x253%(x254<=(x255<=x256)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x261 = 14;
	volatile int32_t t36 = -4723091;

	t36 = (x261%(x262<=(x263<=x264)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MIN;
	int32_t x267 = -1;
	volatile int16_t x268 = INT16_MIN;
	int32_t t37 = -182;

	t37 = (x265%(x266<=(x267<=x268)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x289 = -1;
	int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;
	volatile int32_t t38 = -438;

	t38 = (x289%(x290<=(x291<=x292)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x313 = -1740162;
	int8_t x314 = -56;
	uint16_t x315 = UINT16_MAX;
	int16_t x316 = -24;
	volatile int32_t t39 = 1059103656;

	t39 = (x313%(x314<=(x315<=x316)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x317 = 6;
	int8_t x318 = INT8_MIN;
	static int8_t x319 = -2;
	volatile uint32_t x320 = UINT32_MAX;
	static volatile int32_t t40 = -12896;

	t40 = (x317%(x318<=(x319<=x320)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t41 = -192;

	t41 = (x321%(x322<=(x323<=x324)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x334 = -8;
	volatile uint64_t x336 = 2939995924287136LLU;
	volatile int32_t t42 = -2;

	t42 = (x333%(x334<=(x335<=x336)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x341 = -27331LL;
	static int8_t x342 = -20;
	volatile int32_t x344 = INT32_MAX;
	volatile int64_t t43 = -6702062836371847LL;

	t43 = (x341%(x342<=(x343<=x344)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x345 = 157421846841350903LLU;
	int32_t x346 = INT32_MIN;
	volatile uint64_t x347 = 2500000394563095054LLU;
	int64_t x348 = INT64_MAX;
	volatile uint64_t t44 = 66LLU;

	t44 = (x345%(x346<=(x347<=x348)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x353 = 17877U;
	static int8_t x354 = -1;
	uint64_t x355 = UINT64_MAX;
	volatile int32_t t45 = 1478548;

	t45 = (x353%(x354<=(x355<=x356)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x357 = INT32_MIN;
	static int64_t x358 = -3770915LL;
	static int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MAX;
	volatile int32_t t46 = -152440290;

	t46 = (x357%(x358<=(x359<=x360)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x373 = -31;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = 770LLU;
	uint32_t x376 = 26325U;
	static int32_t t47 = -530;

	t47 = (x373%(x374<=(x375<=x376)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;

	t48 = (x385%(x386<=(x387<=x388)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x389 = 836LLU;
	volatile int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile uint64_t t49 = 25287790081616LLU;

	t49 = (x389%(x390<=(x391<=x392)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x399 = -1;
	int16_t x400 = 2198;
	int32_t t50 = -5989;

	t50 = (x397%(x398<=(x399<=x400)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x401 = -1;
	int32_t x402 = -940794;
	uint8_t x403 = 43U;
	int16_t x404 = -1;
	static volatile int32_t t51 = 1311199;

	t51 = (x401%(x402<=(x403<=x404)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x413 = UINT8_MAX;
	int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	int32_t t52 = -37;

	t52 = (x413%(x414<=(x415<=x416)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x422 = INT16_MIN;
	volatile int64_t t53 = 39387605513178LL;

	t53 = (x421%(x422<=(x423<=x424)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x425 = INT64_MIN;
	static int64_t x426 = INT64_MIN;
	int32_t x427 = -3153646;
	int32_t x428 = -1;
	int64_t t54 = -617LL;

	t54 = (x425%(x426<=(x427<=x428)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x433 = 3952271077773699400LLU;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t55 = 27215379140529LLU;

	t55 = (x433%(x434<=(x435<=x436)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x441 = -34085;
	int8_t x442 = 0;
	static uint32_t x444 = 115U;
	volatile int32_t t56 = 60618066;

	t56 = (x441%(x442<=(x443<=x444)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x445 = 3U;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t57 = 1131;

	t57 = (x445%(x446<=(x447<=x448)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x453 = UINT64_MAX;
	static volatile int16_t x454 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	volatile uint64_t t58 = 6842470611952278LLU;

	t58 = (x453%(x454<=(x455<=x456)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x469 = UINT32_MAX;
	int16_t x470 = -18;
	int32_t x471 = INT32_MIN;
	uint8_t x472 = UINT8_MAX;
	uint32_t t59 = 62894136U;

	t59 = (x469%(x470<=(x471<=x472)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x473 = 1854391797325LLU;
	int32_t x475 = INT32_MIN;
	static int64_t x476 = INT64_MIN;
	static volatile uint64_t t60 = 30207LLU;

	t60 = (x473%(x474<=(x475<=x476)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x477 = 1;
	static int16_t x478 = INT16_MIN;
	static int32_t x479 = -1;

	t61 = (x477%(x478<=(x479<=x480)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x497 = 1842441U;
	volatile int64_t x498 = -1LL;
	uint32_t x499 = 16U;
	uint32_t x500 = 2U;
	uint32_t t62 = 6503807U;

	t62 = (x497%(x498<=(x499<=x500)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x501 = 1566;
	static int8_t x502 = -1;
	int32_t x503 = INT32_MAX;
	int64_t x504 = INT64_MAX;
	int32_t t63 = -118;

	t63 = (x501%(x502<=(x503<=x504)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x505 = INT64_MIN;
	volatile int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MAX;
	int64_t t64 = 0LL;

	t64 = (x505%(x506<=(x507<=x508)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x510 = -1LL;
	int32_t x511 = INT32_MIN;
	int64_t x512 = -1LL;
	volatile int32_t t65 = -135235;

	t65 = (x509%(x510<=(x511<=x512)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x518 = INT8_MIN;
	static int16_t x519 = INT16_MIN;
	static uint8_t x520 = 0U;
	int32_t t66 = -47910;

	t66 = (x517%(x518<=(x519<=x520)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x521 = INT8_MIN;
	volatile int8_t x522 = -1;
	int32_t x523 = INT32_MAX;
	int64_t x524 = -14981003053357LL;
	int32_t t67 = 238514562;

	t67 = (x521%(x522<=(x523<=x524)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x541 = 61U;
	int32_t t68 = -11770;

	t68 = (x541%(x542<=(x543<=x544)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x545 = UINT32_MAX;
	int8_t x546 = -1;
	static int16_t x547 = 7948;
	uint64_t x548 = UINT64_MAX;
	volatile uint32_t t69 = 906905203U;

	t69 = (x545%(x546<=(x547<=x548)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x565 = INT64_MAX;
	static int64_t x566 = INT64_MIN;
	int16_t x567 = INT16_MIN;
	int8_t x568 = -20;
	static int64_t t70 = -7538LL;

	t70 = (x565%(x566<=(x567<=x568)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x573 = INT32_MIN;
	int64_t x574 = -1447030592096035168LL;
	static volatile int32_t x575 = 726;

	t71 = (x573%(x574<=(x575<=x576)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x593 = 18271587U;
	int32_t x594 = INT32_MIN;
	volatile int32_t x595 = 2514;
	uint8_t x596 = 7U;
	static volatile uint32_t t72 = 556U;

	t72 = (x593%(x594<=(x595<=x596)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x597 = 7934U;
	uint64_t x599 = UINT64_MAX;
	int8_t x600 = INT8_MIN;
	int32_t t73 = -17696;

	t73 = (x597%(x598<=(x599<=x600)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x613 = 218976928569LLU;
	int32_t x614 = INT32_MIN;
	volatile int64_t x615 = -217979LL;
	int64_t x616 = -90205721785882LL;
	uint64_t t74 = 0LLU;

	t74 = (x613%(x614<=(x615<=x616)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x621 = UINT64_MAX;
	volatile int8_t x622 = -1;
	int16_t x623 = -1;
	uint64_t x624 = UINT64_MAX;
	static uint64_t t75 = 9029562883528700331LLU;

	t75 = (x621%(x622<=(x623<=x624)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x637 = 215255042549LL;
	static volatile int16_t x638 = -1;
	int64_t x639 = INT64_MIN;
	uint8_t x640 = 46U;
	static volatile int64_t t76 = -218LL;

	t76 = (x637%(x638<=(x639<=x640)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x641 = 2U;
	int16_t x642 = 0;
	volatile int8_t x643 = INT8_MIN;
	uint32_t x644 = 1784677U;
	volatile uint32_t t77 = 13U;

	t77 = (x641%(x642<=(x643<=x644)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x661 = INT8_MIN;
	int16_t x662 = 0;
	uint8_t x664 = 31U;
	int32_t t78 = 70181211;

	t78 = (x661%(x662<=(x663<=x664)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x669 = -1;
	int32_t x670 = -311;
	volatile int32_t x672 = -37293208;
	volatile int32_t t79 = -7891;

	t79 = (x669%(x670<=(x671<=x672)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x682 = INT64_MIN;
	volatile int8_t x683 = INT8_MIN;
	uint32_t x684 = 4282U;
	volatile int64_t t80 = -274LL;

	t80 = (x681%(x682<=(x683<=x684)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x685 = 5345551215LLU;
	int64_t x686 = INT64_MIN;
	int16_t x687 = INT16_MIN;
	int32_t x688 = INT32_MIN;
	uint64_t t81 = 1018077687LLU;

	t81 = (x685%(x686<=(x687<=x688)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x694 = -12;
	int16_t x695 = INT16_MIN;
	int32_t t82 = -35;

	t82 = (x693%(x694<=(x695<=x696)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x705 = UINT16_MAX;
	int64_t x706 = INT64_MIN;
	int8_t x707 = INT8_MIN;
	static uint16_t x708 = UINT16_MAX;
	static int32_t t83 = 437203170;

	t83 = (x705%(x706<=(x707<=x708)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x713 = 1U;
	int8_t x714 = -1;
	static int8_t x715 = INT8_MAX;
	static volatile int32_t x716 = INT32_MIN;
	volatile int32_t t84 = 7;

	t84 = (x713%(x714<=(x715<=x716)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x721 = INT16_MAX;
	static uint64_t x722 = 0LLU;
	int32_t x723 = -1;
	volatile int32_t x724 = INT32_MAX;
	volatile int32_t t85 = 21744;

	t85 = (x721%(x722<=(x723<=x724)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x729 = 3336121529LLU;
	int32_t x730 = INT32_MIN;
	volatile int64_t x731 = 5300LL;
	static int16_t x732 = INT16_MIN;

	t86 = (x729%(x730<=(x731<=x732)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x733 = 13;
	int16_t x734 = INT16_MIN;
	int64_t x736 = INT64_MAX;
	static volatile int32_t t87 = -22816663;

	t87 = (x733%(x734<=(x735<=x736)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x745 = INT32_MIN;
	int16_t x746 = INT16_MIN;
	volatile int64_t x747 = INT64_MIN;
	int32_t x748 = 1;

	t88 = (x745%(x746<=(x747<=x748)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x750 = INT8_MIN;
	int32_t x751 = -195076;
	static volatile int32_t x752 = INT32_MIN;
	volatile int32_t t89 = 2144201;

	t89 = (x749%(x750<=(x751<=x752)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x773 = INT16_MAX;
	int16_t x774 = INT16_MIN;
	uint64_t x775 = UINT64_MAX;
	int16_t x776 = INT16_MIN;
	volatile int32_t t90 = -3;

	t90 = (x773%(x774<=(x775<=x776)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x777 = INT64_MIN;
	int32_t x778 = INT32_MIN;
	uint32_t x780 = UINT32_MAX;
	static int64_t t91 = 991LL;

	t91 = (x777%(x778<=(x779<=x780)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x793 = 218638U;
	volatile int8_t x794 = -1;
	uint64_t x795 = 1047488933161676939LLU;
	volatile uint64_t x796 = UINT64_MAX;

	t92 = (x793%(x794<=(x795<=x796)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x805 = UINT16_MAX;
	int16_t x806 = INT16_MIN;
	volatile uint16_t x807 = 158U;
	volatile int32_t t93 = 14991986;

	t93 = (x805%(x806<=(x807<=x808)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x809 = INT32_MIN;
	volatile int64_t x810 = -1LL;
	static volatile uint32_t x812 = 11601U;

	t94 = (x809%(x810<=(x811<=x812)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x813 = UINT64_MAX;
	int64_t x815 = -1LL;
	int32_t x816 = INT32_MIN;
	static volatile uint64_t t95 = 57183706777865LLU;

	t95 = (x813%(x814<=(x815<=x816)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x817 = -28;
	int8_t x818 = -1;
	volatile uint32_t x819 = 17U;
	uint8_t x820 = UINT8_MAX;

	t96 = (x817%(x818<=(x819<=x820)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x822 = INT16_MIN;
	uint8_t x823 = 1U;
	static volatile int32_t x824 = 2068;
	int32_t t97 = -14977313;

	t97 = (x821%(x822<=(x823<=x824)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x825 = INT32_MIN;
	int32_t x826 = -1;
	uint8_t x827 = UINT8_MAX;
	volatile int64_t x828 = 1694677526449169LL;

	t98 = (x825%(x826<=(x827<=x828)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x833 = -1;
	volatile int8_t x834 = -1;
	static int8_t x835 = 51;
	volatile int32_t t99 = -61627;

	t99 = (x833%(x834<=(x835<=x836)));

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

