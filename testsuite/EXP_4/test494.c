#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
volatile int16_t x7 = INT16_MAX;
int32_t x12 = -7588;
static int8_t x34 = INT8_MIN;
int64_t x42 = -2340021104LL;
uint64_t x43 = UINT64_MAX;
uint64_t x51 = 1560356LLU;
volatile uint64_t t9 = 4297224508005928LLU;
static int16_t x55 = 11534;
uint64_t t10 = 2LLU;
static volatile uint8_t x57 = 5U;
int16_t x59 = INT16_MAX;
int16_t x60 = INT16_MIN;
static int16_t x92 = INT16_MIN;
static int32_t x93 = INT32_MAX;
static uint64_t x95 = UINT64_MAX;
int64_t x96 = INT64_MIN;
int8_t x98 = INT8_MIN;
int16_t x101 = INT16_MIN;
int16_t x104 = 0;
volatile uint32_t t17 = UINT32_MAX;
volatile int64_t t19 = -35751660803872703LL;
int64_t t20 = 1648244858032LL;
uint64_t x124 = 3884746378183LLU;
volatile int32_t x131 = -132;
volatile uint8_t x143 = UINT8_MAX;
uint16_t x148 = 1603U;
volatile uint16_t x152 = 1314U;
uint8_t x154 = 32U;
volatile int64_t t26 = 629298552248LL;
int32_t x165 = INT32_MAX;
volatile uint64_t t29 = 248664LLU;
uint16_t x174 = 31072U;
int16_t x175 = -289;
volatile uint8_t x185 = 37U;
volatile int16_t x194 = -122;
int32_t t33 = 0;
uint32_t x206 = 98U;
static int16_t x210 = INT16_MAX;
volatile int32_t t35 = -15;
int8_t x218 = -1;
static volatile int32_t x229 = -22010;
static volatile uint64_t x238 = 2149843042425878454LLU;
uint32_t x240 = UINT32_MAX;
int64_t x253 = -116166LL;
volatile uint64_t t41 = 6972283LLU;
static int64_t x267 = -1LL;
static volatile int64_t t43 = -996LL;
volatile uint16_t x270 = 62U;
int8_t x276 = -41;
int32_t t45 = 452380;
int32_t t46 = 3075;
uint32_t x285 = UINT32_MAX;
int16_t x286 = 15;
static int8_t x288 = 0;
volatile uint8_t x298 = 2U;
static uint16_t x301 = 3U;
uint64_t x310 = 3638015540435951719LLU;
volatile int16_t x311 = 13;
uint64_t t52 = 1113263660920596028LLU;
int16_t x316 = INT16_MIN;
int32_t x318 = -1;
static int16_t x327 = -1400;
int64_t t55 = 452692348018LL;
static int8_t x332 = 0;
static int32_t t56 = -6350439;
uint8_t x336 = 1U;
volatile uint64_t x340 = UINT64_MAX;
int32_t x341 = -48863665;
volatile int32_t x344 = -1;
uint16_t x346 = 28523U;
uint16_t x348 = 27454U;
static uint64_t x356 = 513721910982398LLU;
static uint64_t t61 = 2748182768393LLU;
volatile int64_t x362 = 25LL;
static volatile int64_t x364 = INT64_MAX;
int8_t x368 = -1;
static int64_t x372 = INT64_MAX;
static int16_t x373 = -1;
uint64_t x377 = 211747289806457LLU;
int16_t x388 = 0;
volatile uint64_t t69 = 838645LLU;
volatile uint64_t x395 = 198LLU;
int16_t x399 = -1;
int16_t x408 = -1;
uint64_t x415 = UINT64_MAX;
static int32_t x417 = -47;
volatile int32_t t75 = -51508354;
uint32_t x436 = UINT32_MAX;
uint16_t x438 = 4U;
int8_t x439 = INT8_MIN;
int16_t x446 = INT16_MAX;
uint32_t x450 = 50634269U;
static int16_t x454 = -1;
int32_t t83 = -422;
int32_t x469 = INT32_MIN;
int64_t x473 = INT64_MIN;
volatile int16_t x475 = INT16_MAX;
static volatile int64_t t87 = -15485575083287LL;
uint16_t x478 = 2430U;
int16_t x480 = INT16_MIN;
int8_t x494 = -1;
int32_t x500 = INT32_MIN;
volatile uint16_t x511 = 2U;
uint64_t x512 = 12381060669877551LLU;
static uint64_t t94 = 876328512448868LLU;
static uint8_t x518 = 1U;
volatile int16_t x523 = INT16_MAX;
static uint32_t t98 = 455U;


void f0(void) {
	int16_t x1 = 1;
	int64_t x2 = -148494022823LL;
	static uint16_t x3 = UINT16_MAX;
	static volatile int64_t x4 = -2522751832463LL;
	volatile int64_t t0 = -767189586676284331LL;

	t0 = (x1^(x2|(x3*x4)));

	if (t0 != -148457711650LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = -1;
	int16_t x8 = -65;
	volatile int32_t t1 = -14;

	t1 = (x5^(x6|(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 20U;
	int64_t x10 = -1LL;
	int64_t x11 = -1LL;
	static volatile int64_t t2 = 131279394231184LL;

	t2 = (x9^(x10|(x11*x12)));

	if (t2 != -21LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 30;
	volatile int64_t x14 = -242307LL;
	uint16_t x15 = 10U;
	uint32_t x16 = UINT32_MAX;
	volatile int64_t t3 = 88677320LL;

	t3 = (x13^(x14|(x15*x16)));

	if (t3 != -31LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = 26420525540LLU;
	volatile uint8_t x31 = UINT8_MAX;
	int16_t x32 = -2211;
	volatile uint64_t t4 = 25LLU;

	t4 = (x29^(x30|(x31*x32)));

	if (t4 != 9223372036854742503LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = -1109070444671231530LL;
	uint64_t x35 = 1322406211038LLU;
	static int8_t x36 = -12;
	static uint64_t t5 = 9950LLU;

	t5 = (x33^(x34|(x35*x36)));

	if (t5 != 1109070444671231566LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -1;
	uint8_t x38 = 7U;
	uint64_t x39 = 1224602LLU;
	uint8_t x40 = 98U;
	volatile uint64_t t6 = 3645480315944LLU;

	t6 = (x37^(x38|(x39*x40)));

	if (t6 != 18446744073589540616LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = -1;
	uint64_t x44 = 11281LLU;
	uint64_t t7 = 2227595665158LLU;

	t7 = (x41^(x42|(x43*x44)));

	if (t7 != 8192LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 13U;
	int16_t x46 = INT16_MIN;
	int32_t x47 = 130653;
	int32_t x48 = 15;
	volatile int32_t t8 = 32686;

	t8 = (x45^(x46|(x47*x48)));

	if (t8 != -6274) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = 23;
	int8_t x50 = -1;
	volatile uint8_t x52 = 9U;

	t9 = (x49^(x50|(x51*x52)));

	if (t9 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	volatile int64_t x54 = -1LL;
	uint64_t x56 = 267LLU;

	t10 = (x53^(x54|(x55*x56)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x58 = INT16_MIN;
	static volatile int32_t t11 = 0;

	t11 = (x57^(x58|(x59*x60)));

	if (t11 != -32763) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	int8_t x62 = -1;
	static int8_t x63 = -54;
	uint32_t x64 = UINT32_MAX;
	uint32_t t12 = 2921U;

	t12 = (x61^(x62|(x63*x64)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = INT32_MAX;
	uint64_t x74 = 143518878LLU;
	int64_t x75 = INT64_MAX;
	volatile int16_t x76 = -1;
	uint64_t t13 = 117832760036LLU;

	t13 = (x73^(x74|(x75*x76)));

	if (t13 != 9223372038858740576LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x89 = UINT16_MAX;
	static int16_t x90 = -81;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t t14 = -56887;

	t14 = (x89^(x90|(x91*x92)));

	if (t14 != -65456) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x94 = 983863579043LLU;
	uint64_t t15 = 1498LLU;

	t15 = (x93^(x94|(x95*x96)));

	if (t15 != 9223373022233701980LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x97 = -1;
	static int8_t x99 = -52;
	int8_t x100 = -15;
	volatile int32_t t16 = 8006;

	t16 = (x97^(x98|(x99*x100)));

	if (t16 != 115) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x102 = INT16_MAX;
	static volatile uint32_t x103 = UINT32_MAX;

	t17 = (x101^(x102|(x103*x104)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x106 = -1LL;
	int8_t x107 = -54;
	uint64_t x108 = UINT64_MAX;
	static uint64_t t18 = 56497LLU;

	t18 = (x105^(x106|(x107*x108)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = -1;
	uint8_t x110 = UINT8_MAX;
	static uint32_t x111 = UINT32_MAX;
	volatile int64_t x112 = -901967909LL;

	t19 = (x109^(x110|(x111*x112)));

	if (t19 != 3873922670294535936LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = -66;
	int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = 958109816LL;

	t20 = (x113^(x114|(x115*x116)));

	if (t20 != 32702LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x121 = 3LLU;
	int32_t x122 = -1;
	int8_t x123 = INT8_MAX;
	volatile uint64_t t21 = 1928200191521LLU;

	t21 = (x121^(x122|(x123*x124)));

	if (t21 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x129 = 40U;
	uint32_t x130 = 1940857144U;
	static int32_t x132 = -1;
	volatile uint32_t t22 = 8095U;

	t22 = (x129^(x130|(x131*x132)));

	if (t22 != 1940857236U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x141 = 0U;
	volatile int64_t x142 = INT64_MAX;
	volatile int16_t x144 = 2551;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x141^(x142|(x143*x144)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x145 = INT16_MIN;
	uint8_t x146 = 115U;
	static int8_t x147 = -59;
	int32_t t24 = 117371946;

	t24 = (x145^(x146|(x147*x148)));

	if (t24 != 69375) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = -1;
	uint16_t x150 = UINT16_MAX;
	volatile int32_t x151 = -104;
	volatile int32_t t25 = -41;

	t25 = (x149^(x150|(x151*x152)));

	if (t25 != 131072) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x153 = INT32_MIN;
	static int32_t x155 = 26;
	int64_t x156 = 78069148452197576LL;

	t26 = (x153^(x154|(x155*x156)));

	if (t26 != -2029797860405666704LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x157 = 58U;
	volatile uint64_t x158 = UINT64_MAX;
	int64_t x159 = -1LL;
	static int32_t x160 = 85698803;
	uint64_t t27 = 504911736325LLU;

	t27 = (x157^(x158|(x159*x160)));

	if (t27 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x161 = INT8_MAX;
	volatile uint64_t x162 = 348026112091LLU;
	int16_t x163 = INT16_MIN;
	static int8_t x164 = -1;
	volatile uint64_t t28 = 33172LLU;

	t28 = (x161^(x162|(x163*x164)));

	if (t28 != 348026144804LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x166 = 63LLU;
	volatile int8_t x167 = -1;
	int32_t x168 = INT32_MAX;

	t29 = (x165^(x166|(x167*x168)));

	if (t29 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x169 = INT8_MIN;
	volatile int16_t x170 = 2;
	int16_t x171 = INT16_MAX;
	int16_t x172 = -1;
	int32_t t30 = -6036;

	t30 = (x169^(x170|(x171*x172)));

	if (t30 != 32643) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = -2;
	volatile uint32_t x176 = 14439077U;
	uint32_t t31 = 391U;

	t31 = (x173^(x174|(x175*x176)));

	if (t31 != 4172874757U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x186 = INT8_MIN;
	int64_t x187 = -348307358LL;
	volatile uint64_t x188 = UINT64_MAX;
	uint64_t t32 = 667490255834LLU;

	t32 = (x185^(x186|(x187*x188)));

	if (t32 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x193 = 3U;
	volatile int16_t x195 = -1;
	static uint16_t x196 = UINT16_MAX;

	t33 = (x193^(x194|(x195*x196)));

	if (t33 != -124) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x205 = 1U;
	uint16_t x207 = UINT16_MAX;
	volatile uint8_t x208 = UINT8_MAX;
	uint32_t t34 = 1U;

	t34 = (x205^(x206|(x207*x208)));

	if (t34 != 16711522U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x209 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	static int16_t x212 = -107;

	t35 = (x209^(x210|(x211*x212)));

	if (t35 != -3506177) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x217 = -1LL;
	volatile int64_t x219 = 1LL;
	int32_t x220 = -1456978;
	int64_t t36 = -86652LL;

	t36 = (x217^(x218|(x219*x220)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x221 = 213098;
	int64_t x222 = INT64_MAX;
	static volatile uint32_t x223 = 1U;
	uint8_t x224 = UINT8_MAX;
	int64_t t37 = -145221118LL;

	t37 = (x221^(x222|(x223*x224)));

	if (t37 != 9223372036854562709LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x225 = INT8_MIN;
	volatile int64_t x226 = -246006017LL;
	uint16_t x227 = 24U;
	uint16_t x228 = UINT16_MAX;
	int64_t t38 = -131571486311798402LL;

	t38 = (x225^(x226|(x227*x228)));

	if (t38 != 245891199LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x230 = UINT64_MAX;
	int16_t x231 = INT16_MAX;
	uint16_t x232 = 10555U;
	uint64_t t39 = 1730831LLU;

	t39 = (x229^(x230|(x231*x232)));

	if (t39 != 22009LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x237 = -1LL;
	int32_t x239 = 17587;
	static volatile uint64_t t40 = 15590773546LLU;

	t40 = (x237^(x238|(x239*x240)));

	if (t40 != 16296901028375183360LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x254 = UINT64_MAX;
	uint64_t x255 = 492442702LLU;
	static uint8_t x256 = UINT8_MAX;

	t41 = (x253^(x254|(x255*x256)));

	if (t41 != 116165LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x257 = INT16_MIN;
	uint32_t x258 = UINT32_MAX;
	volatile uint16_t x259 = UINT16_MAX;
	static uint16_t x260 = 997U;
	uint32_t t42 = 0U;

	t42 = (x257^(x258|(x259*x260)));

	if (t42 != 32767U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x265 = -67727;
	int16_t x266 = 1;
	uint8_t x268 = 1U;

	t43 = (x265^(x266|(x267*x268)));

	if (t43 != 67726LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x269 = 335681371234LL;
	uint16_t x271 = 62U;
	int64_t x272 = -1LL;
	int64_t t44 = -11829260LL;

	t44 = (x269^(x270|(x271*x272)));

	if (t44 != -335681371236LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x273 = -1;
	uint8_t x274 = 1U;
	int16_t x275 = INT16_MIN;

	t45 = (x273^(x274|(x275*x276)));

	if (t45 != -1343490) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x277 = 86U;
	int16_t x278 = -1;
	static int8_t x279 = 2;
	int8_t x280 = -59;

	t46 = (x277^(x278|(x279*x280)));

	if (t46 != -87) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x287 = UINT64_MAX;
	static uint64_t t47 = 46109416854093752LLU;

	t47 = (x285^(x286|(x287*x288)));

	if (t47 != 4294967280LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x289 = -1;
	int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = 55U;
	int64_t t48 = INT64_MIN;

	t48 = (x289^(x290|(x291*x292)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x293 = INT16_MAX;
	volatile int64_t x294 = 3852850LL;
	int64_t x295 = 3952LL;
	int8_t x296 = INT8_MIN;
	volatile int64_t t49 = -1916403LL;

	t49 = (x293^(x294|(x295*x296)));

	if (t49 != -346675LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x297 = -1;
	static uint32_t x299 = UINT32_MAX;
	uint32_t x300 = 20938703U;
	static volatile uint32_t t50 = 1820U;

	t50 = (x297^(x298|(x299*x300)));

	if (t50 != 20938700U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x302 = -1;
	int16_t x303 = -1;
	static volatile int8_t x304 = INT8_MAX;
	volatile int32_t t51 = 28;

	t51 = (x301^(x302|(x303*x304)));

	if (t51 != -4) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x309 = UINT16_MAX;
	uint16_t x312 = UINT16_MAX;

	t52 = (x309^(x310|(x311*x312)));

	if (t52 != 3638015540436205576LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x313 = INT64_MIN;
	volatile int16_t x314 = INT16_MIN;
	static int32_t x315 = -1647;
	volatile int64_t t53 = 164628413781775LL;

	t53 = (x313^(x314|(x315*x316)));

	if (t53 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x317 = 1631177U;
	uint32_t x319 = 32508329U;
	int8_t x320 = INT8_MIN;
	uint32_t t54 = 843010U;

	t54 = (x317^(x318|(x319*x320)));

	if (t54 != 4293336118U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x325 = INT16_MAX;
	int64_t x326 = INT64_MIN;
	int16_t x328 = INT16_MAX;

	t55 = (x325^(x326|(x327*x328)));

	if (t55 != -45843833LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x329 = 403;
	volatile int32_t x330 = INT32_MIN;
	volatile int8_t x331 = INT8_MAX;

	t56 = (x329^(x330|(x331*x332)));

	if (t56 != -2147483245) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x333 = 352912208;
	uint16_t x334 = 0U;
	static int8_t x335 = -1;
	volatile int32_t t57 = -1013844805;

	t57 = (x333^(x334|(x335*x336)));

	if (t57 != -352912209) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x337 = UINT32_MAX;
	uint8_t x338 = 37U;
	uint16_t x339 = UINT16_MAX;
	uint64_t t58 = 993694LLU;

	t58 = (x337^(x338|(x339*x340)));

	if (t58 != 18446744069414649818LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	volatile int64_t t59 = 5LL;

	t59 = (x341^(x342|(x343*x344)));

	if (t59 != 2098619982LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t t60 = -54244;

	t60 = (x345^(x346|(x347*x348)));

	if (t60 != -2140471317) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x353 = 1244901LL;
	static volatile int8_t x354 = INT8_MIN;
	static volatile uint16_t x355 = UINT16_MAX;

	t61 = (x353^(x354|(x355*x356)));

	if (t61 != 18446744073708306791LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x357 = 916268202LLU;
	int16_t x358 = INT16_MIN;
	uint64_t x359 = UINT64_MAX;
	int64_t x360 = -1LL;
	volatile uint64_t t62 = 15698453295952402LLU;

	t62 = (x357^(x358|(x359*x360)));

	if (t62 != 18446744072793269419LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x361 = 0U;
	int16_t x363 = -1;
	static volatile int64_t t63 = -4094LL;

	t63 = (x361^(x362|(x363*x364)));

	if (t63 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x365 = -1;
	int16_t x366 = INT16_MAX;
	static int32_t x367 = -1;
	int32_t t64 = -3;

	t64 = (x365^(x366|(x367*x368)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x369 = INT64_MIN;
	static volatile uint64_t x370 = UINT64_MAX;
	int16_t x371 = 1;
	volatile uint64_t t65 = 6021LLU;

	t65 = (x369^(x370|(x371*x372)));

	if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x374 = 5211U;
	static volatile uint8_t x375 = UINT8_MAX;
	int8_t x376 = 13;
	volatile int32_t t66 = 457619211;

	t66 = (x373^(x374|(x375*x376)));

	if (t66 != -7420) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x378 = INT8_MIN;
	static uint16_t x379 = UINT16_MAX;
	uint8_t x380 = UINT8_MAX;
	static volatile uint64_t t67 = 2975635571363LLU;

	t67 = (x377^(x378|(x379*x380)));

	if (t67 != 18446532326419745272LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x385 = 1;
	static uint16_t x386 = 0U;
	volatile int8_t x387 = INT8_MIN;
	volatile int32_t t68 = -25597935;

	t68 = (x385^(x386|(x387*x388)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x389 = UINT64_MAX;
	int32_t x390 = INT32_MAX;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MIN;

	t69 = (x389^(x390|(x391*x392)));

	if (t69 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x393 = INT32_MAX;
	uint8_t x394 = UINT8_MAX;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t70 = 8862247878935386LLU;

	t70 = (x393^(x394|(x395*x396)));

	if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x397 = 8088U;
	static int64_t x398 = INT64_MAX;
	uint8_t x400 = 0U;
	int64_t t71 = -8104LL;

	t71 = (x397^(x398|(x399*x400)));

	if (t71 != 9223372036854767719LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x401 = -1LL;
	volatile int8_t x402 = -1;
	uint16_t x403 = 192U;
	volatile int16_t x404 = INT16_MAX;
	static int64_t t72 = 114456378070451203LL;

	t72 = (x401^(x402|(x403*x404)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x405 = UINT16_MAX;
	volatile int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MAX;
	volatile int64_t t73 = 12149556242311LL;

	t73 = (x405^(x406|(x407*x408)));

	if (t73 != -65410LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x413 = 220785769LLU;
	volatile int16_t x414 = INT16_MIN;
	int32_t x416 = INT32_MIN;
	static volatile uint64_t t74 = 7209364205049LLU;

	t74 = (x413^(x414|(x415*x416)));

	if (t74 != 18446744073488788585LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x418 = 12U;
	static volatile uint16_t x419 = 1U;
	static volatile int16_t x420 = 1;

	t75 = (x417^(x418|(x419*x420)));

	if (t75 != -36) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x421 = 33U;
	int8_t x422 = INT8_MIN;
	volatile uint64_t x423 = UINT64_MAX;
	uint32_t x424 = 62056U;
	uint64_t t76 = 4115916LLU;

	t76 = (x421^(x422|(x423*x424)));

	if (t76 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x425 = INT16_MAX;
	int8_t x426 = 2;
	volatile uint32_t x427 = 6165520U;
	int8_t x428 = -36;
	uint32_t t77 = 3U;

	t77 = (x425^(x426|(x427*x428)));

	if (t77 != 4073017917U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x433 = INT32_MIN;
	int16_t x434 = -956;
	static int8_t x435 = -1;
	uint32_t t78 = 58U;

	t78 = (x433^(x434|(x435*x436)));

	if (t78 != 2147482693U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x437 = 1U;
	int8_t x440 = INT8_MIN;
	volatile int32_t t79 = -483081;

	t79 = (x437^(x438|(x439*x440)));

	if (t79 != 16389) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x441 = INT64_MAX;
	uint32_t x442 = UINT32_MAX;
	uint64_t x443 = 1677426993894LLU;
	int8_t x444 = -1;
	uint64_t t80 = 110314973LLU;

	t80 = (x441^(x442|(x443*x444)));

	if (t80 != 9223373711892021248LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x445 = -11424LL;
	uint64_t x447 = 34LLU;
	static uint16_t x448 = 1357U;
	volatile uint64_t t81 = 7709LLU;

	t81 = (x445^(x446|(x447*x448)));

	if (t81 != 18446744073709497503LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x449 = UINT32_MAX;
	int16_t x451 = INT16_MAX;
	static uint32_t x452 = UINT32_MAX;
	uint32_t t82 = 73U;

	t82 = (x449^(x450|(x451*x452)));

	if (t82 != 25058U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x453 = INT8_MIN;
	int32_t x455 = -1;
	int8_t x456 = INT8_MIN;

	t83 = (x453^(x454|(x455*x456)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x457 = UINT8_MAX;
	volatile uint8_t x458 = UINT8_MAX;
	int8_t x459 = 60;
	int64_t x460 = 1331756173880LL;
	volatile int64_t t84 = -17365797293099703LL;

	t84 = (x457^(x458|(x459*x460)));

	if (t84 != 79905370432768LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x461 = INT64_MIN;
	uint16_t x462 = 3313U;
	int32_t x463 = -1;
	volatile int16_t x464 = INT16_MIN;
	int64_t t85 = -4025254356433749LL;

	t85 = (x461^(x462|(x463*x464)));

	if (t85 != -9223372036854739727LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x470 = 892LLU;
	volatile int8_t x471 = INT8_MIN;
	int64_t x472 = 15776LL;
	volatile uint64_t t86 = 1636164516035902772LLU;

	t86 = (x469^(x470|(x471*x472)));

	if (t86 != 2145465212LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x474 = INT32_MIN;
	uint8_t x476 = 1U;

	t87 = (x473^(x474|(x475*x476)));

	if (t87 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x477 = INT32_MAX;
	static uint16_t x479 = UINT16_MAX;
	int32_t t88 = 2385;

	t88 = (x477^(x478|(x479*x480)));

	if (t88 != -35199) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x485 = UINT64_MAX;
	int16_t x486 = INT16_MAX;
	volatile uint8_t x487 = 1U;
	static uint32_t x488 = UINT32_MAX;
	static uint64_t t89 = 5948188924385617LLU;

	t89 = (x485^(x486|(x487*x488)));

	if (t89 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x489 = INT64_MIN;
	int64_t x490 = -22402774358159LL;
	int32_t x491 = 294;
	static int32_t x492 = 128804;
	int64_t t90 = -7366424545662LL;

	t90 = (x489^(x490|(x491*x492)));

	if (t90 != 9223349634084632441LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x493 = -1;
	int8_t x495 = 0;
	int64_t x496 = INT64_MAX;
	int64_t t91 = 10466657LL;

	t91 = (x493^(x494|(x495*x496)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x497 = INT16_MIN;
	uint64_t x498 = 183241LLU;
	int32_t x499 = 1;
	uint64_t t92 = 14349848600707075LLU;

	t92 = (x497^(x498|(x499*x500)));

	if (t92 != 2147306441LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x501 = INT16_MIN;
	int16_t x502 = INT16_MIN;
	int8_t x503 = 15;
	volatile int16_t x504 = -507;
	static int32_t t93 = 6781228;

	t93 = (x501^(x502|(x503*x504)));

	if (t93 != 25163) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x509 = 3U;
	uint32_t x510 = 3560U;

	t94 = (x509^(x510|(x511*x512)));

	if (t94 != 24762121339756541LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x513 = INT32_MIN;
	int8_t x514 = -1;
	int16_t x515 = INT16_MAX;
	uint8_t x516 = 3U;
	static volatile int32_t t95 = INT32_MAX;

	t95 = (x513^(x514|(x515*x516)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = INT8_MIN;
	uint64_t x519 = UINT64_MAX;
	uint32_t x520 = 205U;
	volatile uint64_t t96 = 535568645448LLU;

	t96 = (x517^(x518|(x519*x520)));

	if (t96 != 179LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x521 = -45219911694167686LL;
	static uint16_t x522 = UINT16_MAX;
	volatile uint64_t x524 = 41406429694807LLU;
	uint64_t t97 = 4LLU;

	t97 = (x521^(x522|(x523*x524)));

	if (t97 != 17116892049758695045LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x525 = 450U;
	static int8_t x526 = -1;
	volatile uint16_t x527 = 8U;
	uint16_t x528 = 6U;

	t98 = (x525^(x526|(x527*x528)));

	if (t98 != 4294966845U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x533 = 335U;
	int64_t x534 = -15166LL;
	static uint16_t x535 = UINT16_MAX;
	int16_t x536 = INT16_MIN;
	int64_t t99 = 1579LL;

	t99 = (x533^(x534|(x535*x536)));

	if (t99 != -14963LL) { NG(); } else { ; }
	
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

