#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = -1;
static int32_t x8 = -1;
int64_t x10 = INT64_MAX;
uint32_t x26 = UINT32_MAX;
static int8_t x29 = -6;
static volatile uint64_t t7 = 522411312293006LLU;
volatile int16_t x39 = -20;
uint64_t x40 = 957LLU;
int8_t x42 = INT8_MAX;
volatile uint32_t x45 = 107U;
uint64_t x55 = 3LLU;
uint64_t t12 = 2250054292733460LLU;
uint8_t x61 = 0U;
uint32_t x64 = 3479U;
int32_t x83 = INT32_MIN;
uint64_t x90 = 80LLU;
static uint16_t x98 = 10768U;
volatile int16_t x108 = -15090;
int16_t x110 = -1;
volatile int32_t t21 = 45552;
int8_t x121 = 11;
int32_t x127 = INT32_MIN;
static uint64_t x128 = 1020943478113466LLU;
int8_t x135 = 10;
static int16_t x146 = INT16_MIN;
int16_t x148 = INT16_MIN;
int8_t x154 = INT8_MAX;
volatile uint32_t x155 = 47260U;
static uint32_t t27 = 834U;
int64_t x157 = -37975181144773LL;
uint64_t x160 = 968599972511LLU;
static volatile int64_t x161 = -1LL;
int8_t x164 = -7;
static int32_t x166 = -1;
volatile uint8_t x167 = 117U;
uint64_t t31 = 499124903093260LLU;
volatile int32_t t32 = -1737;
int16_t x204 = 1163;
static uint64_t x215 = 2580LLU;
static int16_t x228 = INT16_MIN;
volatile int8_t x231 = INT8_MIN;
volatile uint64_t t40 = 18439LLU;
volatile uint32_t x233 = 2491006U;
static volatile int64_t t48 = -21LL;
static int64_t x293 = -1LL;
volatile uint64_t x297 = 13009315LLU;
int64_t x311 = -434LL;
volatile int64_t t52 = 1766693LL;
static volatile uint64_t x347 = 6385042LLU;
int16_t x356 = INT16_MIN;
static uint64_t x357 = UINT64_MAX;
volatile uint64_t t58 = 23399060823228LLU;
volatile int16_t x365 = 4519;
int32_t x368 = INT32_MIN;
static int8_t x369 = 0;
int32_t x374 = -1;
static int16_t x382 = -1;
volatile uint32_t x384 = 6238839U;
volatile int64_t t65 = -13240689418LL;
volatile int16_t x406 = -29;
int32_t x407 = -30039;
uint32_t x423 = 495104974U;
volatile int32_t x427 = 74;
int64_t x428 = -1LL;
int8_t x434 = 28;
volatile int64_t t72 = -1100624696LL;
static volatile int64_t t73 = 45955298LL;
volatile int16_t x453 = INT16_MAX;
uint32_t x456 = 383U;
uint32_t x468 = UINT32_MAX;
uint64_t x469 = 22712926504LLU;
int8_t x472 = INT8_MAX;
uint8_t x473 = 52U;
int32_t x475 = INT32_MAX;
int64_t t78 = -910271732LL;
int8_t x484 = INT8_MAX;
int64_t t81 = 35127180458928424LL;
uint32_t x497 = 52U;
static uint32_t x498 = UINT32_MAX;
int16_t x514 = -1;
static volatile int32_t x525 = -1;
uint64_t x535 = 525617096LLU;
uint32_t x550 = 23U;
static volatile uint64_t t90 = 21047706350LLU;
uint32_t x561 = 3U;
int8_t x564 = -46;
uint64_t t92 = 406LLU;
uint16_t x570 = 49U;
uint64_t x571 = 439287769LLU;
volatile uint64_t t93 = 65086248671479420LLU;
static volatile uint16_t x575 = UINT16_MAX;
int8_t x589 = -1;
int32_t x590 = 9832;
uint8_t x593 = UINT8_MAX;
uint64_t x603 = UINT64_MAX;
static int64_t x611 = -16LL;
static int8_t x612 = 1;
volatile int64_t t99 = 1LL;


void f0(void) {
	int8_t x6 = INT8_MAX;
	uint64_t x7 = 11951815154133LLU;
	volatile uint64_t t0 = 31057LLU;

	t0 = (x5/(x6*(x7-x8)));

	if (t0 != 12152LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	static uint64_t x11 = 6LLU;
	volatile int8_t x12 = INT8_MIN;
	uint64_t t1 = 15861035300LLU;

	t1 = (x9/(x10*(x11-x12)));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1294726;
	uint8_t x14 = 16U;
	uint64_t x15 = 714920LLU;
	int16_t x16 = INT16_MAX;
	uint64_t t2 = 165LLU;

	t2 = (x13/(x14*(x15-x16)));

	if (t2 != 1690121577720LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	volatile uint16_t x18 = UINT16_MAX;
	static int8_t x19 = INT8_MIN;
	static int64_t x20 = -1LL;
	volatile int64_t t3 = -145LL;

	t3 = (x17/(x18*(x19-x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	static uint32_t x22 = UINT32_MAX;
	uint16_t x23 = UINT16_MAX;
	static uint8_t x24 = 13U;
	static uint32_t t4 = 4235U;

	t4 = (x21/(x22*(x23-x24)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = INT8_MIN;
	int32_t x27 = INT32_MIN;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t5 = 1U;

	t5 = (x25/(x26*(x27-x28)));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MAX;
	int64_t x31 = -1LL;
	int8_t x32 = 4;
	volatile int64_t t6 = -1473264494805497LL;

	t6 = (x29/(x30*(x31-x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 40U;
	static int16_t x34 = INT16_MIN;
	uint64_t x35 = 1830470863286LLU;
	int32_t x36 = 3200759;

	t7 = (x33/(x34*(x35-x36)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	static volatile uint32_t x38 = 12U;
	uint64_t t8 = 521735570481088126LLU;

	t8 = (x37/(x38*(x39-x40)));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = 85;
	uint8_t x43 = 0U;
	int8_t x44 = 1;
	int32_t t9 = 1662;

	t9 = (x41/(x42*(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = -1;
	int64_t x47 = 2142534622LL;
	int8_t x48 = -1;
	int64_t t10 = -90070017887477895LL;

	t10 = (x45/(x46*(x47-x48)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x53 = 1U;
	static volatile int8_t x54 = INT8_MAX;
	int32_t x56 = 5641081;
	static volatile uint64_t t11 = 112513058229005LLU;

	t11 = (x53/(x54*(x55-x56)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 7975361LLU;
	int32_t x58 = -1;
	int32_t x59 = -25901265;
	volatile uint32_t x60 = 20U;

	t12 = (x57/(x58*(x59-x60)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x62 = UINT32_MAX;
	int32_t x63 = 12;
	uint32_t t13 = 59355667U;

	t13 = (x61/(x62*(x63-x64)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = -1;
	uint8_t x70 = 127U;
	int64_t x71 = 2153203887044736LL;
	int8_t x72 = -1;
	volatile int64_t t14 = 25629038622228549LL;

	t14 = (x69/(x70*(x71-x72)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = UINT32_MAX;
	uint16_t x74 = 1067U;
	uint32_t x75 = 106620499U;
	volatile uint16_t x76 = 13U;
	volatile uint32_t t15 = 98287U;

	t15 = (x73/(x74*(x75-x76)));

	if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = INT8_MIN;
	int64_t x78 = -1LL;
	int8_t x79 = 12;
	int64_t x80 = -3455926898717291756LL;
	static int64_t t16 = -4206097181786403LL;

	t16 = (x77/(x78*(x79-x80)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = -1LL;
	int16_t x84 = INT16_MIN;
	volatile int64_t t17 = -1LL;

	t17 = (x81/(x82*(x83-x84)));

	if (t17 != -4295032833LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = INT64_MIN;
	uint32_t x91 = 1332669048U;
	static int8_t x92 = INT8_MIN;
	static uint64_t t18 = 4LLU;

	t18 = (x89/(x90*(x91-x92)));

	if (t18 != 86512206LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = UINT16_MAX;
	uint32_t x99 = UINT32_MAX;
	static volatile uint32_t x100 = 334900404U;
	uint32_t t19 = 129196237U;

	t19 = (x97/(x98*(x99-x100)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 13U;
	static int8_t x106 = INT8_MIN;
	int16_t x107 = 1;
	static uint32_t t20 = 39626476U;

	t20 = (x105/(x106*(x107-x108)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MAX;
	int32_t x111 = INT32_MAX;
	static uint8_t x112 = 2U;

	t21 = (x109/(x110*(x111-x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x122 = INT16_MAX;
	uint64_t x123 = 0LLU;
	uint8_t x124 = UINT8_MAX;
	volatile uint64_t t22 = 1362LLU;

	t22 = (x121/(x122*(x123-x124)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	volatile uint64_t t23 = 161LLU;

	t23 = (x125/(x126*(x127-x128)));

	if (t23 != 18068LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x133 = 5U;
	uint32_t x134 = 4671132U;
	static int64_t x136 = 1279475LL;
	int64_t t24 = 7977711935697LL;

	t24 = (x133/(x134*(x135-x136)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x145 = -14167;
	volatile uint64_t x147 = UINT64_MAX;
	static uint64_t t25 = 1092911950793LLU;

	t25 = (x145/(x146*(x147-x148)));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x149 = INT8_MAX;
	int32_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	static int16_t x152 = INT16_MIN;
	uint32_t t26 = 502U;

	t26 = (x149/(x150*(x151-x152)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x153 = UINT8_MAX;
	volatile uint32_t x156 = 961823U;

	t27 = (x153/(x154*(x155-x156)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x158 = -1;
	int32_t x159 = INT32_MIN;
	volatile uint64_t t28 = 115093124230LLU;

	t28 = (x157/(x158*(x159-x160)));

	if (t28 != 19002579LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x162 = -1LL;
	volatile int64_t x163 = INT64_MIN;
	int64_t t29 = 340544932677535LL;

	t29 = (x161/(x162*(x163-x164)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x165 = INT8_MIN;
	int16_t x168 = -333;
	volatile int32_t t30 = -4478;

	t30 = (x165/(x166*(x167-x168)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x177 = 13316246201387679LL;
	volatile uint64_t x178 = 2752LLU;
	volatile uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MIN;

	t31 = (x177/(x178*(x179-x180)));

	if (t31 != 38100411444LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x181 = INT16_MIN;
	volatile int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	int16_t x184 = -1;

	t32 = (x181/(x182*(x183-x184)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x189 = INT32_MIN;
	int32_t x190 = -1;
	int8_t x191 = 11;
	uint32_t x192 = 487194584U;
	uint32_t t33 = 31U;

	t33 = (x189/(x190*(x191-x192)));

	if (t33 != 4U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x198 = 184438970;
	static uint64_t x199 = UINT64_MAX;
	int16_t x200 = INT16_MIN;
	uint64_t t34 = 58817675219260LLU;

	t34 = (x197/(x198*(x199-x200)));

	if (t34 != 3052322LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x201 = 7U;
	volatile uint32_t x202 = 267000339U;
	int16_t x203 = INT16_MAX;
	volatile uint32_t t35 = 0U;

	t35 = (x201/(x202*(x203-x204)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x205 = -17931191LL;
	int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = INT64_MIN;
	volatile int64_t t36 = 3869242272LL;

	t36 = (x205/(x206*(x207-x208)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MIN;
	static uint64_t x212 = 4270LLU;
	static uint64_t t37 = 8LLU;

	t37 = (x209/(x210*(x211-x212)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x213 = 7710303748LLU;
	static volatile int32_t x214 = 58140534;
	uint8_t x216 = UINT8_MAX;
	uint64_t t38 = 0LLU;

	t38 = (x213/(x214*(x215-x216)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 1354257263942LLU;
	static uint64_t t39 = 541968253LLU;

	t39 = (x225/(x226*(x227-x228)));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x229 = -1;
	uint64_t x230 = 46985836LLU;
	int16_t x232 = -1;

	t40 = (x229/(x230*(x231-x232)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x234 = 1;
	uint8_t x235 = 4U;
	int64_t x236 = -876873188574562LL;
	int64_t t41 = 160550961313LL;

	t41 = (x233/(x234*(x235-x236)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x237 = 93U;
	static int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	int8_t x240 = -1;
	volatile int32_t t42 = -57308170;

	t42 = (x237/(x238*(x239-x240)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x253 = -19;
	int16_t x254 = -448;
	uint8_t x255 = 63U;
	uint32_t x256 = 11U;
	volatile uint32_t t43 = 1660760U;

	t43 = (x253/(x254*(x255-x256)));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x269 = 61U;
	int8_t x270 = INT8_MAX;
	static int16_t x271 = -9;
	uint8_t x272 = 14U;
	int32_t t44 = 9;

	t44 = (x269/(x270*(x271-x272)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x273 = -1;
	uint32_t x274 = 87U;
	static int16_t x275 = -1922;
	static int8_t x276 = INT8_MAX;
	uint32_t t45 = 386U;

	t45 = (x273/(x274*(x275-x276)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x277 = -1;
	int8_t x278 = -1;
	int16_t x279 = -1;
	volatile uint32_t x280 = 239301728U;
	static uint32_t t46 = 210U;

	t46 = (x277/(x278*(x279-x280)));

	if (t46 != 17U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x285 = INT16_MIN;
	uint32_t x286 = 58273U;
	uint8_t x287 = 6U;
	uint16_t x288 = 15U;
	static volatile uint32_t t47 = 273520478U;

	t47 = (x285/(x286*(x287-x288)));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x289 = -1LL;
	int8_t x290 = -1;
	volatile uint32_t x291 = 50992807U;
	int8_t x292 = INT8_MIN;

	t48 = (x289/(x290*(x291-x292)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	volatile uint8_t x296 = 19U;
	volatile int64_t t49 = 45LL;

	t49 = (x293/(x294*(x295-x296)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x298 = INT16_MIN;
	volatile uint64_t x299 = 2016LLU;
	int64_t x300 = INT64_MAX;
	volatile uint64_t t50 = 6699581256296LLU;

	t50 = (x297/(x298*(x299-x300)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x309 = -474379257530602LL;
	int16_t x310 = INT16_MIN;
	uint64_t x312 = 1361LLU;
	static volatile uint64_t t51 = 0LLU;

	t51 = (x309/(x310*(x311-x312)));

	if (t51 != 313613078838LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x313 = -7;
	uint16_t x314 = 1U;
	volatile int32_t x315 = -1;
	int64_t x316 = -812810LL;

	t52 = (x313/(x314*(x315-x316)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x317 = 82727U;
	int16_t x318 = INT16_MAX;
	uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 0U;
	uint32_t t53 = 0U;

	t53 = (x317/(x318*(x319-x320)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x321 = INT16_MIN;
	int8_t x322 = -23;
	uint64_t x323 = 425434664943353859LLU;
	volatile uint16_t x324 = 7142U;
	volatile uint64_t t54 = 83864205900834LLU;

	t54 = (x321/(x322*(x323-x324)));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x329 = -11;
	volatile uint32_t x330 = 27U;
	volatile uint16_t x331 = 3U;
	uint8_t x332 = 0U;
	uint32_t t55 = 1391132651U;

	t55 = (x329/(x330*(x331-x332)));

	if (t55 != 53024287U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x345 = INT32_MAX;
	int64_t x346 = 167082841532LL;
	static uint64_t x348 = 163210217LLU;
	volatile uint64_t t56 = 8767198775013049430LLU;

	t56 = (x345/(x346*(x347-x348)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x353 = INT8_MIN;
	volatile uint64_t x354 = UINT64_MAX;
	int8_t x355 = -1;
	uint64_t t57 = 709022215357272985LLU;

	t57 = (x353/(x354*(x355-x356)));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x358 = UINT64_MAX;
	uint32_t x359 = 220859U;
	int32_t x360 = -1;

	t58 = (x357/(x358*(x359-x360)));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x361 = -1;
	static int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	volatile uint64_t x364 = 419319665862840LLU;
	uint64_t t59 = 6LLU;

	t59 = (x361/(x362*(x363-x364)));

	if (t59 != 343LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x366 = -1;
	int16_t x367 = INT16_MIN;
	static volatile int32_t t60 = 101;

	t60 = (x365/(x366*(x367-x368)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x370 = 4U;
	int64_t x371 = -1LL;
	uint8_t x372 = UINT8_MAX;
	int64_t t61 = 3115LL;

	t61 = (x369/(x370*(x371-x372)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x373 = INT16_MAX;
	volatile int32_t x375 = 388729;
	int32_t x376 = -1;
	static int32_t t62 = 3487387;

	t62 = (x373/(x374*(x375-x376)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x381 = -1;
	int8_t x383 = 0;
	static volatile uint32_t t63 = 780U;

	t63 = (x381/(x382*(x383-x384)));

	if (t63 != 688U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x385 = 12U;
	uint8_t x386 = UINT8_MAX;
	int32_t x387 = 1;
	static uint16_t x388 = UINT16_MAX;
	volatile int32_t t64 = 107;

	t64 = (x385/(x386*(x387-x388)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x389 = 17733U;
	volatile int8_t x390 = INT8_MIN;
	static volatile int8_t x391 = -1;
	static int64_t x392 = -29606011599649864LL;

	t65 = (x389/(x390*(x391-x392)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x397 = 14150U;
	int64_t x398 = -5LL;
	uint32_t x399 = 218307769U;
	static uint64_t x400 = 8555955136729428LLU;
	uint64_t t66 = 98318918799195LLU;

	t66 = (x397/(x398*(x399-x400)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x405 = INT16_MIN;
	int8_t x408 = -1;
	static int32_t t67 = 10;

	t67 = (x405/(x406*(x407-x408)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x409 = 15597574LLU;
	uint64_t x410 = 73LLU;
	int8_t x411 = 2;
	int8_t x412 = -11;
	static volatile uint64_t t68 = 125717737085362832LLU;

	t68 = (x409/(x410*(x411-x412)));

	if (t68 != 16435LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = -53;
	int32_t x424 = INT32_MIN;
	static uint32_t t69 = 1940965U;

	t69 = (x421/(x422*(x423-x424)));

	if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x425 = -109;
	static uint8_t x426 = 7U;
	int64_t t70 = 785653644851LL;

	t70 = (x425/(x426*(x427-x428)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x433 = -1;
	int64_t x435 = -1LL;
	static int64_t x436 = -1112228885673632LL;
	volatile int64_t t71 = 12019LL;

	t71 = (x433/(x434*(x435-x436)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x441 = UINT32_MAX;
	int64_t x442 = 61LL;
	volatile uint8_t x443 = 8U;
	volatile uint32_t x444 = 25774U;

	t72 = (x441/(x442*(x443-x444)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x445 = INT16_MIN;
	int64_t x446 = 87LL;
	int16_t x447 = -493;
	volatile int64_t x448 = -1LL;

	t73 = (x445/(x446*(x447-x448)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x449 = 25U;
	uint64_t x450 = 472248147557229LLU;
	uint64_t x451 = 1731LLU;
	int8_t x452 = -1;
	volatile uint64_t t74 = 3817796330073536LLU;

	t74 = (x449/(x450*(x451-x452)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x454 = -1;
	int32_t x455 = INT32_MIN;
	uint32_t t75 = 249630710U;

	t75 = (x453/(x454*(x455-x456)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x465 = 850562640163LLU;
	int16_t x466 = -1;
	static int16_t x467 = -6025;
	volatile uint64_t t76 = 19389LLU;

	t76 = (x465/(x466*(x467-x468)));

	if (t76 != 141195657LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x470 = INT16_MAX;
	uint8_t x471 = 39U;
	uint64_t t77 = 2096874526LLU;

	t77 = (x469/(x470*(x471-x472)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x474 = -1LL;
	int8_t x476 = 37;

	t78 = (x473/(x474*(x475-x476)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x477 = UINT8_MAX;
	volatile uint32_t x478 = 1U;
	static int16_t x479 = -1;
	int8_t x480 = INT8_MIN;
	static uint32_t t79 = 39U;

	t79 = (x477/(x478*(x479-x480)));

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x481 = 0U;
	static volatile int16_t x482 = INT16_MAX;
	static uint16_t x483 = 183U;
	int32_t t80 = 664;

	t80 = (x481/(x482*(x483-x484)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x485 = INT64_MIN;
	int8_t x486 = -4;
	static int32_t x487 = -1;
	int8_t x488 = INT8_MAX;

	t81 = (x485/(x486*(x487-x488)));

	if (t81 != -18014398509481984LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x499 = 0U;
	uint32_t x500 = 449851U;
	volatile uint32_t t82 = 30823909U;

	t82 = (x497/(x498*(x499-x500)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x513 = UINT64_MAX;
	int8_t x515 = -35;
	uint32_t x516 = 25U;
	volatile uint64_t t83 = 312LLU;

	t83 = (x513/(x514*(x515-x516)));

	if (t83 != 307445734561825860LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x517 = 65U;
	int8_t x518 = 5;
	int64_t x519 = -1LL;
	int8_t x520 = INT8_MIN;
	int64_t t84 = -179907418LL;

	t84 = (x517/(x518*(x519-x520)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x521 = 273040744LLU;
	static volatile uint8_t x522 = 70U;
	uint16_t x523 = UINT16_MAX;
	int8_t x524 = 10;
	volatile uint64_t t85 = 0LLU;

	t85 = (x521/(x522*(x523-x524)));

	if (t85 != 59LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x526 = 99U;
	static int8_t x527 = INT8_MAX;
	uint16_t x528 = 2587U;
	static volatile int32_t t86 = -3402089;

	t86 = (x525/(x526*(x527-x528)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x533 = INT16_MAX;
	int64_t x534 = INT64_MAX;
	int32_t x536 = -1;
	volatile uint64_t t87 = 864715832553176815LLU;

	t87 = (x533/(x534*(x535-x536)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x537 = INT16_MAX;
	static uint64_t x538 = UINT64_MAX;
	static volatile int16_t x539 = -1;
	uint8_t x540 = 0U;
	uint64_t t88 = 560333622381195012LLU;

	t88 = (x537/(x538*(x539-x540)));

	if (t88 != 32767LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x545 = INT8_MIN;
	static uint32_t x546 = UINT32_MAX;
	uint64_t x547 = 86595129815810512LLU;
	volatile int32_t x548 = -1;
	volatile uint64_t t89 = 130092726733911LLU;

	t89 = (x545/(x546*(x547-x548)));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x549 = 646839515LLU;
	volatile int16_t x551 = INT16_MAX;
	uint64_t x552 = UINT64_MAX;

	t90 = (x549/(x550*(x551-x552)));

	if (t90 != 858LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x553 = 229;
	int64_t x554 = INT64_MAX;
	int8_t x555 = 2;
	uint32_t x556 = 1U;
	int64_t t91 = 663LL;

	t91 = (x553/(x554*(x555-x556)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x562 = INT32_MIN;
	uint64_t x563 = UINT64_MAX;

	t92 = (x561/(x562*(x563-x564)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x569 = INT16_MAX;
	static int64_t x572 = INT64_MIN;

	t93 = (x569/(x570*(x571-x572)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x573 = -1LL;
	int32_t x574 = INT32_MAX;
	static uint64_t x576 = UINT64_MAX;
	volatile uint64_t t94 = 13718LLU;

	t94 = (x573/(x574*(x575-x576)));

	if (t94 != 131072LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x581 = -1;
	volatile uint8_t x582 = 6U;
	int16_t x583 = -1;
	int64_t x584 = -888LL;
	volatile int64_t t95 = 4508544882682LL;

	t95 = (x581/(x582*(x583-x584)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x591 = 227782970LL;
	volatile uint32_t x592 = UINT32_MAX;
	volatile int64_t t96 = -7505542511371382LL;

	t96 = (x589/(x590*(x591-x592)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x594 = -1LL;
	int64_t x595 = -66627399560LL;
	volatile int32_t x596 = -2592;
	volatile int64_t t97 = 10463281486325LL;

	t97 = (x593/(x594*(x595-x596)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x601 = INT64_MAX;
	uint8_t x602 = UINT8_MAX;
	int32_t x604 = INT32_MIN;
	uint64_t t98 = 488387LLU;

	t98 = (x601/(x602*(x603-x604)));

	if (t98 != 16843009LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x609 = INT64_MIN;
	static int32_t x610 = INT32_MAX;

	t99 = (x609/(x610*(x611-x612)));

	if (t99 != 252645135LL) { NG(); } else { ; }
	
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

