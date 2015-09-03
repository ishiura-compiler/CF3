#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -47;
int64_t x15 = INT64_MIN;
int64_t x33 = -1LL;
int8_t x35 = -1;
volatile int8_t x51 = INT8_MIN;
int64_t x58 = -1LL;
volatile int16_t x62 = -5844;
uint8_t x66 = 1U;
int8_t x70 = INT8_MIN;
volatile int16_t x72 = INT16_MIN;
int16_t x73 = -1;
int64_t t14 = 108573504LL;
int64_t x82 = 168891225643793LL;
uint8_t x83 = UINT8_MAX;
volatile int64_t t17 = 1054978971962LL;
int64_t x107 = INT64_MIN;
volatile int64_t t20 = 1076846LL;
int32_t t21 = -199;
volatile int16_t x119 = -3;
int32_t x123 = -1;
int8_t x127 = INT8_MIN;
static int64_t x134 = -1818444LL;
uint32_t x138 = 403U;
int16_t x140 = INT16_MIN;
static volatile int8_t x146 = INT8_MIN;
static uint16_t x147 = 11U;
int16_t x150 = -7;
uint32_t x153 = UINT32_MAX;
int16_t x173 = 15014;
uint32_t x196 = 147328U;
int8_t x198 = INT8_MIN;
uint32_t x201 = 4351779U;
uint32_t t35 = 11190U;
volatile uint8_t x210 = 18U;
volatile int32_t t36 = -1484074;
int8_t x226 = INT8_MIN;
int16_t x239 = INT16_MAX;
volatile int8_t x240 = INT8_MIN;
static volatile uint32_t x245 = 43558U;
static uint32_t x248 = 307245587U;
volatile uint32_t t40 = 341171957U;
int16_t x251 = INT16_MIN;
int64_t x255 = -243569LL;
int64_t x259 = INT64_MAX;
static int16_t x267 = -1883;
volatile int32_t x271 = INT32_MIN;
volatile uint32_t x277 = UINT32_MAX;
uint64_t x280 = 39385373572734LLU;
int64_t x281 = 0LL;
uint32_t x282 = UINT32_MAX;
int32_t t49 = 36;
static int32_t x312 = -1682;
int64_t t51 = 66974477LL;
static uint64_t t52 = 0LLU;
uint32_t x328 = UINT32_MAX;
static int8_t x332 = -1;
static volatile int16_t x333 = -1;
static uint8_t x348 = 0U;
uint32_t t57 = 4322U;
volatile uint64_t t58 = 1437559641LLU;
uint64_t t59 = 366LLU;
int8_t x387 = -1;
static int32_t t63 = -1;
int8_t x389 = -1;
int32_t x402 = 31262635;
uint64_t x405 = 5812942031866817292LLU;
int8_t x417 = INT8_MIN;
volatile int64_t x433 = INT64_MIN;
uint64_t x434 = 120365501553LLU;
static volatile int32_t t72 = 22071;
volatile uint32_t t73 = 13124535U;
volatile int64_t t74 = -6LL;
uint32_t x478 = 111881046U;
int16_t x501 = INT16_MIN;
uint64_t x508 = UINT64_MAX;
volatile int32_t x525 = -1;
static uint8_t x526 = UINT8_MAX;
int8_t x529 = INT8_MIN;
static uint64_t x542 = UINT64_MAX;
static uint64_t t87 = 69009380LLU;
int16_t x547 = INT16_MIN;
volatile int32_t t88 = 1477829;
static int16_t x552 = INT16_MIN;
volatile uint64_t x553 = UINT64_MAX;
uint8_t x556 = 1U;
uint64_t t90 = 95167LLU;
static int8_t x561 = -40;
volatile int8_t x565 = INT8_MAX;
static int32_t t92 = -141902104;
volatile uint32_t t94 = 10U;
int16_t x605 = -1;
volatile int64_t t97 = 191400474784955659LL;
volatile uint32_t x618 = 23534075U;
int32_t x624 = -989388227;


void f0(void) {
	int8_t x6 = INT8_MAX;
	int32_t x7 = -427919;
	volatile uint32_t x8 = 20231U;
	uint32_t t0 = 1U;

	t0 = ((x5*x6)/(x7-x8));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	uint32_t x11 = 25U;
	int8_t x12 = 0;
	uint32_t t1 = 4403037U;

	t1 = ((x9*x10)/(x11-x12));

	if (t1 != 171463152U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = 680U;
	static volatile int32_t x14 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	int64_t t2 = 402693LL;

	t2 = ((x13*x14)/(x15-x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	volatile int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MAX;
	uint64_t x20 = 4152628432LLU;
	volatile uint64_t t3 = 1462LLU;

	t3 = ((x17*x18)/(x19-x20));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = UINT16_MAX;
	uint64_t x30 = 807416766911910LLU;
	volatile int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	static volatile uint64_t t4 = 640183LLU;

	t4 = ((x29*x30)/(x31-x32));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x34 = 1;
	uint8_t x36 = 122U;
	volatile int64_t t5 = -14507LL;

	t5 = ((x33*x34)/(x35-x36));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = 1942U;
	uint64_t x46 = 63688694521LLU;
	static volatile int64_t x47 = -1LL;
	int16_t x48 = -1212;
	uint64_t t6 = 80583860015511479LLU;

	t6 = ((x45*x46)/(x47-x48));

	if (t6 != 102133315243LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 0U;
	uint8_t x50 = 39U;
	static uint64_t x52 = UINT64_MAX;
	volatile uint64_t t7 = 10186721LLU;

	t7 = ((x49*x50)/(x51-x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x53 = 225U;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MAX;
	volatile int32_t x56 = 23;
	volatile uint32_t t8 = 53663U;

	t8 = ((x53*x54)/(x55-x56));

	if (t8 != 131167U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = -111;
	int32_t x59 = -5313000;
	uint8_t x60 = 5U;
	int64_t t9 = -25653435373906LL;

	t9 = ((x57*x58)/(x59-x60));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x61 = INT16_MIN;
	uint64_t x63 = 132408LLU;
	volatile int32_t x64 = 334295;
	volatile uint64_t t10 = 532984205751LLU;

	t10 = ((x61*x62)/(x63-x64));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 770898043470LLU;
	int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t11 = 55416158279LLU;

	t11 = ((x65*x66)/(x67-x68));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = 11367;
	int32_t x71 = INT32_MIN;
	int32_t t12 = 2303;

	t12 = ((x69*x70)/(x71-x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x74 = 0;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = 15733677260LL;
	static volatile int64_t t13 = 608LL;

	t13 = ((x73*x74)/(x75-x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x78 = INT8_MIN;
	int64_t x79 = -1195362LL;
	volatile int8_t x80 = -1;

	t14 = ((x77*x78)/(x79-x80));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x81 = -1;
	int8_t x84 = -1;
	volatile int64_t t15 = 18162LL;

	t15 = ((x81*x82)/(x83-x84));

	if (t15 != -659731350171LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = 4U;
	int8_t x86 = INT8_MIN;
	static uint8_t x87 = 0U;
	uint64_t x88 = 372799998351LLU;
	volatile uint64_t t16 = 230592136021696218LLU;

	t16 = ((x85*x86)/(x87-x88));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x90 = 6LL;
	int32_t x91 = INT32_MIN;
	uint32_t x92 = 14331635U;

	t17 = ((x89*x90)/(x91-x92));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MIN;
	int64_t x95 = -1LL;
	static uint32_t x96 = UINT32_MAX;
	volatile int64_t t18 = 2923164029LL;

	t18 = ((x93*x94)/(x95-x96));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 19U;
	uint32_t x102 = 54967U;
	static int32_t x103 = -1;
	int32_t x104 = -131995;
	volatile uint32_t t19 = 25553188U;

	t19 = ((x101*x102)/(x103-x104));

	if (t19 != 7U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x105 = UINT8_MAX;
	int8_t x106 = 1;
	volatile int32_t x108 = -1;

	t20 = ((x105*x106)/(x107-x108));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = -1;
	int8_t x110 = 1;
	uint8_t x111 = 9U;
	uint8_t x112 = UINT8_MAX;

	t21 = ((x109*x110)/(x111-x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x117 = UINT8_MAX;
	uint8_t x118 = UINT8_MAX;
	static int16_t x120 = -1;
	int32_t t22 = -25997279;

	t22 = ((x117*x118)/(x119-x120));

	if (t22 != -32512) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x121 = 107822672LLU;
	int64_t x122 = INT64_MIN;
	static uint32_t x124 = 21936852U;
	volatile uint64_t t23 = 104094577LLU;

	t23 = ((x121*x122)/(x123-x124));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -131705;
	int64_t x126 = 16191641537241LL;
	int8_t x128 = INT8_MAX;
	volatile int64_t t24 = -1805247420LL;

	t24 = ((x125*x126)/(x127-x128));

	if (t24 != 8362824112401278LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = UINT16_MAX;
	uint64_t x135 = UINT64_MAX;
	volatile int8_t x136 = INT8_MIN;
	volatile uint64_t t25 = 21LLU;

	t25 = ((x133*x134)/(x135-x136));

	if (t25 != 145249952397935622LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x137 = 2122;
	int8_t x139 = INT8_MIN;
	volatile uint32_t t26 = 1100785772U;

	t26 = ((x137*x138)/(x139-x140));

	if (t26 != 26U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x141 = UINT64_MAX;
	uint32_t x142 = 27U;
	static volatile int8_t x143 = 1;
	static int64_t x144 = -1LL;
	volatile uint64_t t27 = 407857288802029968LLU;

	t27 = ((x141*x142)/(x143-x144));

	if (t27 != 9223372036854775794LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = 959403275LLU;
	int8_t x148 = INT8_MIN;
	uint64_t t28 = 499312348347359LLU;

	t28 = ((x145*x146)/(x147-x148));

	if (t28 != 132710388136013902LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = 2;
	volatile int32_t x151 = 50;
	int8_t x152 = 2;
	volatile int32_t t29 = 417;

	t29 = ((x149*x150)/(x151-x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x154 = 34;
	uint8_t x155 = 19U;
	int64_t x156 = -1LL;
	volatile int64_t t30 = -37305465422915025LL;

	t30 = ((x153*x154)/(x155-x156));

	if (t30 != 214748363LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x165 = -75;
	volatile uint16_t x166 = 4355U;
	volatile int8_t x167 = INT8_MIN;
	int64_t x168 = INT64_MIN;
	volatile int64_t t31 = 10838LL;

	t31 = ((x165*x166)/(x167-x168));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x174 = -1;
	int64_t x175 = INT64_MIN;
	uint32_t x176 = 0U;
	volatile int64_t t32 = -8094354406767LL;

	t32 = ((x173*x174)/(x175-x176));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x193 = INT16_MIN;
	uint32_t x194 = 932256627U;
	uint32_t x195 = UINT32_MAX;
	uint32_t t33 = 3293U;

	t33 = ((x193*x194)/(x195-x196));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x197 = 3U;
	int16_t x199 = INT16_MAX;
	uint16_t x200 = 1U;
	int32_t t34 = 200;

	t34 = ((x197*x198)/(x199-x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x202 = -1933067;
	int16_t x203 = -7114;
	volatile int16_t x204 = INT16_MAX;

	t35 = ((x201*x202)/(x203-x204));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x209 = INT16_MIN;
	static uint16_t x211 = UINT16_MAX;
	uint8_t x212 = UINT8_MAX;

	t36 = ((x209*x210)/(x211-x212));

	if (t36 != -9) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x225 = 6U;
	volatile int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MIN;
	volatile uint32_t t37 = 287987U;

	t37 = ((x225*x226)/(x227-x228));

	if (t37 != 130565U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x237 = INT16_MIN;
	static int8_t x238 = -1;
	volatile int32_t t38 = 222993771;

	t38 = ((x237*x238)/(x239-x240));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x241 = -20;
	int32_t x242 = -1;
	uint16_t x243 = 0U;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t39 = -136;

	t39 = ((x241*x242)/(x243-x244));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x246 = 8U;
	static int32_t x247 = -434610045;

	t40 = ((x245*x246)/(x247-x248));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MIN;
	volatile uint64_t x252 = 5184002908304831965LLU;
	static volatile uint64_t t41 = 4249224476028LLU;

	t41 = ((x249*x250)/(x251-x252));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x253 = 2732U;
	uint64_t x254 = UINT64_MAX;
	int16_t x256 = INT16_MIN;
	uint64_t t42 = 87965015LLU;

	t42 = ((x253*x254)/(x255-x256));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x257 = INT16_MIN;
	volatile int8_t x258 = 0;
	uint64_t x260 = UINT64_MAX;
	static uint64_t t43 = 9461161837653LLU;

	t43 = ((x257*x258)/(x259-x260));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x265 = 1U;
	int16_t x266 = -1;
	int16_t x268 = -1;
	int32_t t44 = 49;

	t44 = ((x265*x266)/(x267-x268));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x269 = 227324154U;
	int32_t x270 = -121081634;
	int32_t x272 = -11;
	volatile uint32_t t45 = 6U;

	t45 = ((x269*x270)/(x271-x272));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x278 = INT16_MIN;
	int16_t x279 = -1;
	static volatile uint64_t t46 = 42318052432183373LLU;

	t46 = ((x277*x278)/(x279-x280));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x283 = 42;
	int64_t x284 = INT64_MAX;
	volatile int64_t t47 = 100629333044LL;

	t47 = ((x281*x282)/(x283-x284));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x285 = 1051;
	int64_t x286 = -181462276LL;
	int64_t x287 = -1LL;
	uint64_t x288 = 61LLU;
	uint64_t t48 = 13278449374LLU;

	t48 = ((x285*x286)/(x287-x288));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x289 = -4247;
	static int16_t x290 = 1668;
	volatile int16_t x291 = 51;
	static volatile int16_t x292 = INT16_MIN;

	t49 = ((x289*x290)/(x291-x292));

	if (t49 != -215) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int16_t x298 = -1;
	static int32_t x299 = 3033958;
	static int64_t x300 = INT64_MAX;
	volatile int64_t t50 = -337875LL;

	t50 = ((x297*x298)/(x299-x300));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x309 = 10;
	int16_t x310 = INT16_MIN;
	int64_t x311 = 2037798155292LL;

	t51 = ((x309*x310)/(x311-x312));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x313 = -34794LL;
	uint16_t x314 = 29712U;
	static uint64_t x315 = UINT64_MAX;
	int32_t x316 = -12300513;

	t52 = ((x313*x314)/(x315-x316));

	if (t52 != 1499672865054LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x317 = UINT16_MAX;
	uint64_t x318 = 14870151499095LLU;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MAX;
	volatile uint64_t t53 = 7762823529601LLU;

	t53 = ((x317*x318)/(x319-x320));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x325 = 0U;
	int64_t x326 = INT64_MIN;
	int32_t x327 = INT32_MAX;
	volatile int64_t t54 = -3807834814462878597LL;

	t54 = ((x325*x326)/(x327-x328));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	volatile int64_t t55 = -7728LL;

	t55 = ((x329*x330)/(x331-x332));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x334 = INT64_MAX;
	volatile uint16_t x335 = 17U;
	uint32_t x336 = UINT32_MAX;
	int64_t t56 = 964236710424235LL;

	t56 = ((x333*x334)/(x335-x336));

	if (t56 != -512409557603043100LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x345 = -1;
	uint32_t x346 = UINT32_MAX;
	uint8_t x347 = UINT8_MAX;

	t57 = ((x345*x346)/(x347-x348));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x349 = 527777205506518420LLU;
	int64_t x350 = -1LL;
	int16_t x351 = INT16_MIN;
	volatile int8_t x352 = 7;

	t58 = ((x349*x350)/(x351-x352));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x353 = -1;
	static volatile uint64_t x354 = 25LLU;
	static int8_t x355 = INT8_MIN;
	static int32_t x356 = INT32_MIN;

	t59 = ((x353*x354)/(x355-x356));

	if (t59 != 8589935104LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x357 = INT32_MAX;
	static uint64_t x358 = UINT64_MAX;
	int8_t x359 = INT8_MIN;
	static volatile uint32_t x360 = UINT32_MAX;
	uint64_t t60 = 29LLU;

	t60 = ((x357*x358)/(x359-x360));

	if (t60 != 4294967422LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x373 = INT8_MIN;
	int16_t x374 = 14301;
	uint32_t x375 = 57703U;
	uint64_t x376 = UINT64_MAX;
	uint64_t t61 = 8059388185674045871LLU;

	t61 = ((x373*x374)/(x375-x376));

	if (t61 != 319678775712389LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x381 = INT32_MAX;
	volatile int8_t x382 = -1;
	int16_t x383 = -1;
	static int64_t x384 = -66571LL;
	volatile int64_t t62 = -1LL;

	t62 = ((x381*x382)/(x383-x384));

	if (t62 != -32259LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x385 = 3020U;
	volatile int8_t x386 = INT8_MIN;
	int16_t x388 = INT16_MIN;

	t63 = ((x385*x386)/(x387-x388));

	if (t63 != -11) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x390 = -1;
	int8_t x391 = -12;
	int64_t x392 = 231950LL;
	volatile int64_t t64 = 0LL;

	t64 = ((x389*x390)/(x391-x392));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x401 = -1;
	int16_t x403 = 5;
	uint64_t x404 = 3375607545LLU;
	volatile uint64_t t65 = 0LLU;

	t65 = ((x401*x402)/(x403-x404));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x406 = UINT8_MAX;
	int64_t x407 = -1LL;
	uint16_t x408 = 19418U;
	uint64_t t66 = 14LLU;

	t66 = ((x405*x406)/(x407-x408));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x418 = 1430;
	static volatile int64_t x419 = -2465197007514412LL;
	int8_t x420 = -1;
	int64_t t67 = -2120331539363963736LL;

	t67 = ((x417*x418)/(x419-x420));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x421 = 0;
	static int32_t x422 = -1483;
	int16_t x423 = INT16_MAX;
	int32_t x424 = -1;
	int32_t t68 = -52830472;

	t68 = ((x421*x422)/(x423-x424));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x429 = INT16_MIN;
	uint16_t x430 = UINT16_MAX;
	uint8_t x431 = 4U;
	int64_t x432 = -1LL;
	volatile int64_t t69 = -434758840LL;

	t69 = ((x429*x430)/(x431-x432));

	if (t69 != -429490176LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x435 = UINT32_MAX;
	int8_t x436 = 54;
	volatile uint64_t t70 = 167610068664LLU;

	t70 = ((x433*x434)/(x435-x436));

	if (t70 != 2147483675LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x437 = 83163250LL;
	int16_t x438 = -2542;
	static volatile int32_t x439 = -243207;
	static uint16_t x440 = UINT16_MAX;
	volatile int64_t t71 = 0LL;

	t71 = ((x437*x438)/(x439-x440));

	if (t71 != 684717LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x441 = UINT8_MAX;
	static uint8_t x442 = UINT8_MAX;
	volatile int16_t x443 = 5;
	volatile int8_t x444 = INT8_MIN;

	t72 = ((x441*x442)/(x443-x444));

	if (t72 != 488) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x453 = INT8_MAX;
	uint16_t x454 = 8U;
	uint32_t x455 = 986356U;
	uint32_t x456 = 4789U;

	t73 = ((x453*x454)/(x455-x456));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x457 = 1131780184LL;
	int8_t x458 = -1;
	static int8_t x459 = -1;
	int16_t x460 = INT16_MIN;

	t74 = ((x457*x458)/(x459-x460));

	if (t74 != -34540LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x465 = -1;
	uint8_t x466 = 11U;
	uint32_t x467 = 67U;
	uint16_t x468 = 14653U;
	static uint32_t t75 = 33U;

	t75 = ((x465*x466)/(x467-x468));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x473 = 2676U;
	uint32_t x474 = 1737609U;
	int8_t x475 = INT8_MAX;
	int64_t x476 = -1LL;
	volatile int64_t t76 = -202LL;

	t76 = ((x473*x474)/(x475-x476));

	if (t76 != 2772456LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x477 = UINT8_MAX;
	int64_t x479 = INT64_MIN;
	uint64_t x480 = UINT64_MAX;
	uint64_t t77 = 4415LLU;

	t77 = ((x477*x478)/(x479-x480));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x502 = 45U;
	uint64_t x503 = 1LLU;
	int16_t x504 = INT16_MIN;
	static volatile uint64_t t78 = 3313864591517256LLU;

	t78 = ((x501*x502)/(x503-x504));

	if (t78 != 562932774076355LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x505 = INT32_MIN;
	volatile uint8_t x506 = 0U;
	int16_t x507 = 40;
	static volatile uint64_t t79 = 8225324LLU;

	t79 = ((x505*x506)/(x507-x508));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x509 = 0;
	int8_t x510 = -1;
	int16_t x511 = INT16_MIN;
	static int32_t x512 = INT32_MIN;
	int32_t t80 = -2569040;

	t80 = ((x509*x510)/(x511-x512));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x513 = 8U;
	int32_t x514 = 1;
	int8_t x515 = -45;
	int8_t x516 = -22;
	volatile int32_t t81 = 142811563;

	t81 = ((x513*x514)/(x515-x516));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x517 = 203205806727980022LL;
	volatile int8_t x518 = -1;
	int16_t x519 = INT16_MIN;
	int8_t x520 = -1;
	int64_t t82 = 521LL;

	t82 = ((x517*x518)/(x519-x520));

	if (t82 != 6201538338205LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x527 = INT8_MIN;
	int32_t x528 = INT32_MIN;
	int32_t t83 = 281470;

	t83 = ((x525*x526)/(x527-x528));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x530 = 21188792733932LLU;
	int32_t x531 = INT32_MIN;
	int64_t x532 = -1LL;
	uint64_t t84 = 31247044778180LLU;

	t84 = ((x529*x530)/(x531-x532));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x533 = -1;
	static volatile int8_t x534 = -1;
	int32_t x535 = INT32_MIN;
	uint64_t x536 = 28536846671LLU;
	static volatile uint64_t t85 = 7468448769698719115LLU;

	t85 = ((x533*x534)/(x535-x536));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x537 = UINT16_MAX;
	volatile int8_t x538 = INT8_MAX;
	static int16_t x539 = 3;
	volatile int8_t x540 = -1;
	int32_t t86 = -268683941;

	t86 = ((x537*x538)/(x539-x540));

	if (t86 != 2080736) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x541 = -1;
	static int16_t x543 = -34;
	uint32_t x544 = 1527636146U;

	t87 = ((x541*x542)/(x543-x544));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x545 = INT8_MIN;
	static uint8_t x546 = 43U;
	volatile int32_t x548 = -1;

	t88 = ((x545*x546)/(x547-x548));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x549 = -205;
	int64_t x550 = -1LL;
	static int64_t x551 = -1LL;
	static int64_t t89 = -15824722931743201LL;

	t89 = ((x549*x550)/(x551-x552));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x554 = -1;
	int8_t x555 = INT8_MIN;

	t90 = ((x553*x554)/(x555-x556));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x562 = 9U;
	static uint16_t x563 = 9U;
	uint8_t x564 = UINT8_MAX;
	volatile int32_t t91 = 3499870;

	t91 = ((x561*x562)/(x563-x564));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x566 = INT8_MIN;
	uint8_t x567 = 52U;
	int32_t x568 = -1;

	t92 = ((x565*x566)/(x567-x568));

	if (t92 != -306) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x573 = INT16_MAX;
	static uint8_t x574 = 31U;
	uint64_t x575 = 68904749921LLU;
	uint8_t x576 = 0U;
	volatile uint64_t t93 = 18LLU;

	t93 = ((x573*x574)/(x575-x576));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x589 = 242U;
	volatile uint32_t x590 = 0U;
	int8_t x591 = 0;
	int8_t x592 = -7;

	t94 = ((x589*x590)/(x591-x592));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x593 = 30532LLU;
	volatile int32_t x594 = INT32_MIN;
	volatile uint64_t x595 = UINT64_MAX;
	static int16_t x596 = INT16_MIN;
	static volatile uint64_t t95 = 12LLU;

	t95 = ((x593*x594)/(x595-x596));

	if (t95 != 562965132808582LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x606 = UINT64_MAX;
	uint64_t x607 = UINT64_MAX;
	volatile int32_t x608 = -7;
	uint64_t t96 = 2739LLU;

	t96 = ((x605*x606)/(x607-x608));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x613 = INT8_MIN;
	static int8_t x614 = INT8_MIN;
	int8_t x615 = INT8_MIN;
	int64_t x616 = 3925913226479LL;

	t97 = ((x613*x614)/(x615-x616));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x617 = INT8_MIN;
	int64_t x619 = -35616369864LL;
	static int64_t x620 = -41338LL;
	static volatile int64_t t98 = -193512456LL;

	t98 = ((x617*x618)/(x619-x620));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x621 = 2;
	int16_t x622 = -1;
	int16_t x623 = INT16_MAX;
	int32_t t99 = -1;

	t99 = ((x621*x622)/(x623-x624));

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

