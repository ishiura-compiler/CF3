#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x12 = 3017529785LLU;
int64_t x18 = INT64_MAX;
volatile int64_t t4 = -9837728529898LL;
uint16_t x33 = UINT16_MAX;
int16_t x36 = -974;
static uint64_t t6 = 11385654456153LLU;
static int8_t x39 = INT8_MIN;
static volatile uint8_t x40 = UINT8_MAX;
int64_t x47 = -919047389104397LL;
int32_t t9 = 1072667619;
volatile int64_t t11 = -19LL;
uint16_t x61 = 1U;
uint8_t x64 = 26U;
int16_t x66 = -1;
int8_t x68 = -1;
uint8_t x82 = UINT8_MAX;
volatile uint16_t x85 = 3570U;
int16_t x86 = -1;
int64_t t16 = -86266563698LL;
int64_t x111 = 1LL;
static uint64_t x118 = 35LLU;
int8_t x133 = INT8_MAX;
static int8_t x136 = -1;
volatile int64_t t23 = 12010LL;
volatile int32_t x143 = -1;
volatile int16_t x147 = INT16_MAX;
uint32_t x148 = 811177730U;
static int32_t x165 = -116173147;
volatile uint32_t x166 = 101U;
int16_t x167 = -22;
uint8_t x170 = UINT8_MAX;
int32_t t29 = -1598517;
int8_t x173 = -1;
int64_t x182 = 644361980LL;
uint64_t t32 = 734831270060345LLU;
volatile int64_t x194 = -1LL;
static int16_t x196 = INT16_MIN;
uint8_t x206 = 43U;
uint64_t x220 = 400160884251LLU;
int8_t x225 = 1;
uint16_t x231 = UINT16_MAX;
volatile int32_t x248 = -427584;
volatile uint64_t t43 = 498346676452723436LLU;
int8_t x270 = INT8_MIN;
int8_t x271 = -1;
uint32_t x275 = 62040U;
volatile uint16_t x280 = 120U;
int16_t x285 = INT16_MIN;
static uint8_t x288 = 29U;
static volatile int32_t x290 = -1;
uint16_t x300 = 3495U;
volatile uint64_t t51 = 39LLU;
volatile int32_t t52 = -549181792;
volatile int16_t x316 = 4;
static int16_t x324 = INT16_MIN;
uint64_t t55 = 29500510768463LLU;
uint64_t t56 = 747408LLU;
int64_t t58 = 580445673LL;
int32_t x364 = -1;
uint32_t x370 = 6U;
uint8_t x380 = UINT8_MAX;
static volatile uint32_t t62 = 397281U;
int8_t x381 = INT8_MIN;
uint64_t x432 = 15301644LLU;
int8_t x443 = INT8_MIN;
volatile int16_t x446 = INT16_MIN;
int16_t x448 = INT16_MIN;
uint64_t t74 = 2604691245570241LLU;
volatile int64_t t75 = -985114871801905LL;
int32_t x465 = INT32_MIN;
uint64_t x469 = 3611099601LLU;
static volatile uint64_t t79 = 5298LLU;
static uint32_t x502 = 402U;
int16_t x513 = INT16_MAX;
static int64_t x514 = INT64_MIN;
int8_t x516 = -1;
volatile int64_t t84 = -55749854519308901LL;
int8_t x523 = INT8_MIN;
volatile int64_t t86 = 16221376722LL;
static int16_t x529 = INT16_MIN;
static uint16_t x530 = 7U;
int16_t x532 = INT16_MIN;
int8_t x533 = INT8_MIN;
int8_t x537 = -1;
int16_t x543 = -1470;
int64_t x556 = -348062LL;
uint8_t x557 = UINT8_MAX;
uint16_t x560 = 1U;
volatile int32_t x565 = INT32_MIN;
int16_t x587 = 5;
static int16_t x589 = -7;
int32_t x598 = -323373;
volatile int64_t t99 = -335761LL;


void f0(void) {
	volatile int32_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = INT8_MAX;
	uint64_t x4 = 7192245988LLU;
	uint64_t t0 = 198342929272848569LLU;

	t0 = ((x1+x2)+(x3*x4));

	if (t0 != 917710207770LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 4U;
	uint8_t x6 = UINT8_MAX;
	uint16_t x7 = 27U;
	int64_t x8 = -1578107LL;
	int64_t t1 = -2692LL;

	t1 = ((x5+x6)+(x7*x8));

	if (t1 != -42608630LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	static uint32_t x10 = UINT32_MAX;
	uint32_t x11 = UINT32_MAX;
	static uint64_t t2 = 6210048170203784950LLU;

	t2 = ((x9+x10)+(x11*x12));

	if (t2 != 12960191738263414341LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	int8_t x14 = 2;
	volatile int64_t x15 = -1707245325LL;
	int8_t x16 = INT8_MIN;
	int64_t t3 = -27650247324530639LL;

	t3 = ((x13+x14)+(x15*x16));

	if (t3 != 216379917954LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = -1;
	volatile int8_t x19 = INT8_MIN;
	uint16_t x20 = UINT16_MAX;

	t4 = ((x17+x18)+(x19*x20));

	if (t4 != 9223372036846387326LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	volatile uint16_t x26 = 1U;
	uint8_t x27 = 5U;
	static uint32_t x28 = UINT32_MAX;
	volatile uint32_t t5 = 1063U;

	t5 = ((x25+x26)+(x27*x28));

	if (t5 != 4294934524U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x34 = 1017686407LLU;
	int16_t x35 = INT16_MIN;

	t6 = ((x33+x34)+(x35*x36));

	if (t6 != 1049667974LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	volatile int16_t x38 = INT16_MIN;
	int32_t t7 = 1582;

	t7 = ((x37+x38)+(x39*x40));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x45 = UINT8_MAX;
	uint64_t x46 = UINT64_MAX;
	int8_t x48 = INT8_MAX;
	static uint64_t t8 = 8734LLU;

	t8 = ((x45+x46)+(x47*x48));

	if (t8 != 18330025055293293451LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 0;
	int8_t x50 = INT8_MAX;
	int32_t x51 = -278;
	int8_t x52 = 2;

	t9 = ((x49+x50)+(x51*x52));

	if (t9 != -429) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = 0LL;
	int8_t x54 = -1;
	static int8_t x55 = -1;
	static int64_t x56 = 1322645113817848570LL;
	int64_t t10 = 49795629092616659LL;

	t10 = ((x53+x54)+(x55*x56));

	if (t10 != -1322645113817848571LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = -237;
	volatile int16_t x58 = INT16_MAX;
	volatile int16_t x59 = INT16_MAX;
	static int64_t x60 = -7384095534569LL;

	t11 = ((x57+x58)+(x59*x60));

	if (t11 != -241954658381189893LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x62 = UINT16_MAX;
	volatile int32_t x63 = -1014;
	static int32_t t12 = 3834262;

	t12 = ((x61+x62)+(x63*x64));

	if (t12 != 39172) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = INT8_MAX;
	int64_t x67 = -2977175727624LL;
	volatile int64_t t13 = -23245LL;

	t13 = ((x65+x66)+(x67*x68));

	if (t13 != 2977175727750LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x73 = UINT32_MAX;
	int32_t x74 = 2583806;
	int64_t x75 = 9418549548LL;
	static uint64_t x76 = 347741208309579060LLU;
	volatile uint64_t t14 = 110592442LLU;

	t14 = ((x73+x74)+(x75*x76));

	if (t14 != 13371507296655590893LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x81 = 336232LLU;
	static uint32_t x83 = 10070615U;
	int16_t x84 = INT16_MIN;
	volatile uint64_t t15 = 444732517864194LLU;

	t15 = ((x81+x82)+(x83*x84));

	if (t15 != 718905959LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x87 = -15043130659004549LL;
	uint8_t x88 = 4U;

	t16 = ((x85+x86)+(x87*x88));

	if (t16 != -60172522636014627LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = -1;
	volatile uint16_t x99 = 930U;
	volatile uint64_t x100 = 615788868973666973LLU;
	static uint64_t t17 = 9924LLU;

	t17 = ((x97+x98)+(x99*x100));

	if (t17 != 10057953897368960600LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = 11535497729680LL;
	int16_t x103 = INT16_MAX;
	static int8_t x104 = -1;
	volatile int64_t t18 = -2111329032482LL;

	t18 = ((x101+x102)+(x103*x104));

	if (t18 != 11535497696785LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x109 = -1;
	uint64_t x110 = 52735187635434691LLU;
	int16_t x112 = INT16_MAX;
	volatile uint64_t t19 = 2838833544906LLU;

	t19 = ((x109+x110)+(x111*x112));

	if (t19 != 52735187635467457LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x119 = 0U;
	volatile int64_t x120 = INT64_MAX;
	uint64_t t20 = 402604841264789LLU;

	t20 = ((x117+x118)+(x119*x120));

	if (t20 != 9223372036854775843LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x125 = UINT32_MAX;
	int32_t x126 = INT32_MAX;
	uint32_t x127 = 227237U;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t21 = 1U;

	t21 = ((x125+x126)+(x127*x128));

	if (t21 != 3291316222U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x129 = INT8_MAX;
	static int32_t x130 = INT32_MIN;
	static int16_t x131 = INT16_MIN;
	int8_t x132 = -1;
	int32_t t22 = 1;

	t22 = ((x129+x130)+(x131*x132));

	if (t22 != -2147450753) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x134 = 333999303;
	static int64_t x135 = 108179LL;

	t23 = ((x133+x134)+(x135*x136));

	if (t23 != 333891251LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x141 = 269U;
	int32_t x142 = INT32_MIN;
	int16_t x144 = -3;
	volatile int32_t t24 = 1927;

	t24 = ((x141+x142)+(x143*x144));

	if (t24 != -2147483376) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x145 = UINT32_MAX;
	uint16_t x146 = UINT16_MAX;
	uint32_t t25 = 966118957U;

	t25 = ((x145+x146)+(x147*x148));

	if (t25 != 2603116796U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = 5;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = 0;
	volatile int32_t t26 = -80908176;

	t26 = ((x149+x150)+(x151*x152));

	if (t26 != -123) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x157 = -1;
	static int16_t x158 = -7;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t27 = -3198781;

	t27 = ((x157+x158)+(x159*x160));

	if (t27 != -32648) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x168 = 0;
	uint32_t t28 = 15323590U;

	t28 = ((x165+x166)+(x167*x168));

	if (t28 != 4178794250U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x169 = -116646;
	int16_t x171 = INT16_MAX;
	int32_t x172 = 2;

	t29 = ((x169+x170)+(x171*x172));

	if (t29 != -50857) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x174 = -1LL;
	uint16_t x175 = 502U;
	volatile uint16_t x176 = 117U;
	int64_t t30 = -1011206667LL;

	t30 = ((x173+x174)+(x175*x176));

	if (t30 != 58732LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x177 = -1;
	static volatile int8_t x178 = 1;
	volatile int32_t x179 = INT32_MIN;
	int64_t x180 = -1LL;
	int64_t t31 = -6LL;

	t31 = ((x177+x178)+(x179*x180));

	if (t31 != 2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x181 = 40199729219422LL;
	uint32_t x183 = UINT32_MAX;
	volatile uint64_t x184 = UINT64_MAX;

	t32 = ((x181+x182)+(x183*x184));

	if (t32 != 40196078614107LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x189 = 34329U;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = 234U;
	int64_t x192 = -1LL;
	volatile int64_t t33 = 1475295823222LL;

	t33 = ((x189+x190)+(x191*x192));

	if (t33 != 2147517743LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x193 = UINT32_MAX;
	int64_t x195 = 94590LL;
	volatile int64_t t34 = 7616884199080LL;

	t34 = ((x193+x194)+(x195*x196));

	if (t34 != 1195442174LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x197 = 1258U;
	uint32_t x198 = UINT32_MAX;
	static uint16_t x199 = UINT16_MAX;
	static uint16_t x200 = 29U;
	volatile uint32_t t35 = 42543318U;

	t35 = ((x197+x198)+(x199*x200));

	if (t35 != 1901772U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = 12;
	int16_t x207 = 3322;
	static uint8_t x208 = 6U;
	int32_t t36 = 14;

	t36 = ((x205+x206)+(x207*x208));

	if (t36 != 19987) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MAX;
	int8_t x216 = -1;
	int64_t t37 = -767007335LL;

	t37 = ((x213+x214)+(x215*x216));

	if (t37 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int64_t x218 = -1LL;
	int32_t x219 = INT32_MAX;
	static uint64_t t38 = 4749746740432586LLU;

	t38 = ((x217+x218)+(x219*x220));

	if (t38 != 10788727707443034595LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x221 = UINT16_MAX;
	uint16_t x222 = 197U;
	volatile int8_t x223 = 41;
	uint32_t x224 = 6U;
	uint32_t t39 = 11U;

	t39 = ((x221+x222)+(x223*x224));

	if (t39 != 65978U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x226 = 6550;
	static int8_t x227 = 1;
	int64_t x228 = 368614982602666095LL;
	volatile int64_t t40 = -500LL;

	t40 = ((x225+x226)+(x227*x228));

	if (t40 != 368614982602672646LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x229 = 25;
	int64_t x230 = 0LL;
	volatile int32_t x232 = -12999;
	int64_t t41 = 178390416745335LL;

	t41 = ((x229+x230)+(x231*x232));

	if (t41 != -851889440LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x233 = 118U;
	static int32_t x234 = INT32_MIN;
	static uint16_t x235 = UINT16_MAX;
	uint64_t x236 = 34048773906LLU;
	volatile uint64_t t42 = 77625922685LLU;

	t42 = ((x233+x234)+(x235*x236));

	if (t42 != 2231384250446180LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x245 = 0U;
	uint64_t x246 = 197867211LLU;
	uint8_t x247 = UINT8_MAX;

	t43 = ((x245+x246)+(x247*x248));

	if (t43 != 88833291LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x261 = 63U;
	static int64_t x262 = INT64_MIN;
	static volatile uint32_t x263 = 915015U;
	uint8_t x264 = 48U;
	int64_t t44 = -5LL;

	t44 = ((x261+x262)+(x263*x264));

	if (t44 != -9223372036810855025LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x265 = INT16_MAX;
	volatile uint16_t x266 = 7U;
	static int16_t x267 = INT16_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t45 = 23U;

	t45 = ((x265+x266)+(x267*x268));

	if (t45 != 65542U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x269 = -1LL;
	uint16_t x272 = UINT16_MAX;
	static volatile int64_t t46 = -46456103LL;

	t46 = ((x269+x270)+(x271*x272));

	if (t46 != -65664LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x273 = 909U;
	int8_t x274 = INT8_MIN;
	static uint16_t x276 = 19633U;
	volatile uint32_t t47 = 9U;

	t47 = ((x273+x274)+(x275*x276));

	if (t47 != 1218032101U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x279 = -1;
	static volatile int32_t t48 = 0;

	t48 = ((x277+x278)+(x279*x280));

	if (t48 != -2147418233) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x286 = -1;
	uint8_t x287 = 1U;
	volatile int32_t t49 = 33240200;

	t49 = ((x285+x286)+(x287*x288));

	if (t49 != -32740) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x289 = -1;
	static int16_t x291 = 6431;
	uint32_t x292 = UINT32_MAX;
	uint32_t t50 = 120375U;

	t50 = ((x289+x290)+(x291*x292));

	if (t50 != 4294960863U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x297 = INT8_MAX;
	static uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 1872305LLU;

	t51 = ((x297+x298)+(x299*x300));

	if (t51 != 6543706101LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x301 = 1U;
	volatile int8_t x302 = -1;
	int16_t x303 = -234;
	volatile int8_t x304 = INT8_MIN;

	t52 = ((x301+x302)+(x303*x304));

	if (t52 != 29952) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x306 = 502180118369LLU;
	int16_t x307 = INT16_MIN;
	volatile int8_t x308 = INT8_MIN;
	uint64_t t53 = 206517110LLU;

	t53 = ((x305+x306)+(x307*x308));

	if (t53 != 502184312545LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x313 = UINT32_MAX;
	static volatile int32_t x314 = 762;
	int16_t x315 = -1;
	static volatile uint32_t t54 = 988U;

	t54 = ((x313+x314)+(x315*x316));

	if (t54 != 757U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x321 = 2132;
	uint64_t x322 = 74024813579223LLU;
	int32_t x323 = 25833;

	t55 = ((x321+x322)+(x323*x324));

	if (t55 != 74023967085611LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x337 = INT64_MIN;
	static uint8_t x338 = 1U;
	static uint64_t x339 = UINT64_MAX;
	volatile uint8_t x340 = UINT8_MAX;

	t56 = ((x337+x338)+(x339*x340));

	if (t56 != 9223372036854775554LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x341 = 27U;
	volatile int32_t x342 = INT32_MIN;
	int8_t x343 = 26;
	uint32_t x344 = UINT32_MAX;
	static volatile uint32_t t57 = 247738U;

	t57 = ((x341+x342)+(x343*x344));

	if (t57 != 2147483649U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	uint8_t x359 = 6U;
	volatile int64_t x360 = -1245138LL;

	t58 = ((x357+x358)+(x359*x360));

	if (t58 != -7503724LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x361 = -2515;
	volatile int32_t x362 = -222238;
	uint64_t x363 = UINT64_MAX;
	volatile uint64_t t59 = 3LLU;

	t59 = ((x361+x362)+(x363*x364));

	if (t59 != 18446744073709326864LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x369 = UINT64_MAX;
	int8_t x371 = 0;
	int16_t x372 = INT16_MIN;
	volatile uint64_t t60 = 21566402739366LLU;

	t60 = ((x369+x370)+(x371*x372));

	if (t60 != 5LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x373 = 1421189695555369430LL;
	int32_t x374 = INT32_MIN;
	int8_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	static int64_t t61 = 771573320354823LL;

	t61 = ((x373+x374)+(x375*x376));

	if (t61 != 1421189693407885783LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x377 = UINT32_MAX;
	int32_t x378 = -867;
	int16_t x379 = INT16_MIN;

	t62 = ((x377+x378)+(x379*x380));

	if (t62 != 4286610588U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x382 = INT16_MIN;
	uint64_t x383 = 5805899864587877LLU;
	int16_t x384 = -1;
	uint64_t t63 = 2LLU;

	t63 = ((x381+x382)+(x383*x384));

	if (t63 != 18440938173844930843LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x389 = -1;
	volatile int8_t x390 = -1;
	int16_t x391 = -1;
	int64_t x392 = 166236418215928LL;
	static volatile int64_t t64 = 2103660LL;

	t64 = ((x389+x390)+(x391*x392));

	if (t64 != -166236418215930LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x393 = INT64_MIN;
	uint8_t x394 = 1U;
	uint64_t x395 = 846456322166LLU;
	int8_t x396 = INT8_MIN;
	uint64_t t65 = 373LLU;

	t65 = ((x393+x394)+(x395*x396));

	if (t65 != 9223263690445538561LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x397 = INT32_MAX;
	volatile uint32_t x398 = UINT32_MAX;
	uint8_t x399 = 95U;
	uint16_t x400 = 118U;
	volatile uint32_t t66 = 47207U;

	t66 = ((x397+x398)+(x399*x400));

	if (t66 != 2147494856U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x409 = INT16_MIN;
	uint32_t x410 = 4499U;
	volatile int8_t x411 = 1;
	int16_t x412 = INT16_MIN;
	volatile uint32_t t67 = 274827261U;

	t67 = ((x409+x410)+(x411*x412));

	if (t67 != 4294906259U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x417 = UINT8_MAX;
	static int8_t x418 = 1;
	static uint8_t x419 = 29U;
	int8_t x420 = INT8_MAX;
	volatile int32_t t68 = -155;

	t68 = ((x417+x418)+(x419*x420));

	if (t68 != 3939) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x421 = 16034998744703632LL;
	uint8_t x422 = 8U;
	uint32_t x423 = UINT32_MAX;
	static int16_t x424 = INT16_MIN;
	static volatile int64_t t69 = 57869778949953LL;

	t69 = ((x421+x422)+(x423*x424));

	if (t69 != 16034998744736408LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x429 = UINT32_MAX;
	volatile int32_t x430 = -1;
	int8_t x431 = -1;
	volatile uint64_t t70 = 390420LLU;

	t70 = ((x429+x430)+(x431*x432));

	if (t70 != 4279665650LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x433 = 0;
	int16_t x434 = -15;
	int64_t x435 = 2658LL;
	uint64_t x436 = UINT64_MAX;
	uint64_t t71 = 161694LLU;

	t71 = ((x433+x434)+(x435*x436));

	if (t71 != 18446744073709548943LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x437 = -73;
	static uint16_t x438 = 66U;
	int8_t x439 = -1;
	int8_t x440 = INT8_MIN;
	int32_t t72 = 2;

	t72 = ((x437+x438)+(x439*x440));

	if (t72 != 121) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x441 = INT64_MAX;
	volatile uint64_t x442 = 27255LLU;
	volatile int32_t x444 = 786467;
	uint64_t t73 = 5536409967350928LLU;

	t73 = ((x441+x442)+(x443*x444));

	if (t73 != 9223372036754135286LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x445 = 659925419714LLU;
	static int8_t x447 = INT8_MAX;

	t74 = ((x445+x446)+(x447*x448));

	if (t74 != 659921225410LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x449 = 44298294LL;
	int16_t x450 = INT16_MIN;
	uint8_t x451 = 15U;
	static int8_t x452 = 5;

	t75 = ((x449+x450)+(x451*x452));

	if (t75 != 44265601LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x453 = INT32_MAX;
	uint32_t x454 = UINT32_MAX;
	static int8_t x455 = INT8_MAX;
	static int32_t x456 = 953;
	volatile uint32_t t76 = 2353U;

	t76 = ((x453+x454)+(x455*x456));

	if (t76 != 2147604677U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x466 = 507U;
	static int16_t x467 = -23;
	uint32_t x468 = 3U;
	volatile uint32_t t77 = 6U;

	t77 = ((x465+x466)+(x467*x468));

	if (t77 != 2147484086U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x470 = -943253192217255LL;
	uint8_t x471 = 39U;
	int16_t x472 = INT16_MAX;
	uint64_t t78 = 67661847852120051LLU;

	t78 = ((x469+x470)+(x471*x472));

	if (t78 != 18445800824129711875LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x477 = -63;
	volatile uint64_t x478 = UINT64_MAX;
	int64_t x479 = INT64_MIN;
	uint64_t x480 = 10675LLU;

	t79 = ((x477+x478)+(x479*x480));

	if (t79 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x489 = INT64_MAX;
	int32_t x490 = -915548450;
	int8_t x491 = INT8_MAX;
	static uint32_t x492 = 4U;
	static volatile int64_t t80 = -77827488239541LL;

	t80 = ((x489+x490)+(x491*x492));

	if (t80 != 9223372035939227865LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x501 = -1;
	uint32_t x503 = UINT32_MAX;
	volatile int8_t x504 = INT8_MAX;
	static uint32_t t81 = 727102111U;

	t81 = ((x501+x502)+(x503*x504));

	if (t81 != 274U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x505 = -330802849527043LL;
	volatile int64_t x506 = 113836491LL;
	static int64_t x507 = -1703LL;
	static volatile int16_t x508 = -31;
	int64_t t82 = 6826732232219940LL;

	t82 = ((x505+x506)+(x507*x508));

	if (t82 != -330802735637759LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x509 = UINT16_MAX;
	int64_t x510 = 0LL;
	volatile int64_t x511 = -1LL;
	int8_t x512 = -4;
	int64_t t83 = -572009628547008LL;

	t83 = ((x509+x510)+(x511*x512));

	if (t83 != 65539LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x515 = 11;

	t84 = ((x513+x514)+(x515*x516));

	if (t84 != -9223372036854743052LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x521 = 26179;
	int64_t x522 = -3466780757398908163LL;
	int8_t x524 = INT8_MIN;
	static int64_t t85 = -414305LL;

	t85 = ((x521+x522)+(x523*x524));

	if (t85 != -3466780757398865600LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x525 = -1;
	int32_t x526 = -38;
	volatile uint16_t x527 = 1U;
	volatile int64_t x528 = INT64_MAX;

	t86 = ((x525+x526)+(x527*x528));

	if (t86 != 9223372036854775768LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x531 = 3U;
	static volatile int32_t t87 = -379289;

	t87 = ((x529+x530)+(x531*x532));

	if (t87 != -131065) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x534 = 7606;
	int64_t x535 = 128288044997LL;
	uint32_t x536 = 17U;
	static int64_t t88 = -67050003157LL;

	t88 = ((x533+x534)+(x535*x536));

	if (t88 != 2180896772427LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x538 = -1697411971LL;
	int8_t x539 = 1;
	volatile uint16_t x540 = 19796U;
	int64_t t89 = -729553818LL;

	t89 = ((x537+x538)+(x539*x540));

	if (t89 != -1697392176LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x541 = 31U;
	volatile uint16_t x542 = 149U;
	volatile uint64_t x544 = UINT64_MAX;
	uint64_t t90 = 758599517996LLU;

	t90 = ((x541+x542)+(x543*x544));

	if (t90 != 1650LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x545 = -1;
	int8_t x546 = -1;
	uint32_t x547 = 16U;
	int8_t x548 = -1;
	static uint32_t t91 = 1U;

	t91 = ((x545+x546)+(x547*x548));

	if (t91 != 4294967278U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x553 = -1LL;
	int8_t x554 = 2;
	int32_t x555 = 1;
	volatile int64_t t92 = 1504161698824327LL;

	t92 = ((x553+x554)+(x555*x556));

	if (t92 != -348061LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x558 = -1;
	int8_t x559 = 47;
	volatile int32_t t93 = -111891;

	t93 = ((x557+x558)+(x559*x560));

	if (t93 != 301) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x561 = INT8_MIN;
	uint64_t x562 = 236LLU;
	uint32_t x563 = 0U;
	int32_t x564 = INT32_MIN;
	static uint64_t t94 = 6472296751652276369LLU;

	t94 = ((x561+x562)+(x563*x564));

	if (t94 != 108LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x566 = UINT32_MAX;
	uint32_t x567 = 13U;
	int8_t x568 = INT8_MIN;
	uint32_t t95 = 252301131U;

	t95 = ((x565+x566)+(x567*x568));

	if (t95 != 2147481983U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x569 = INT64_MIN;
	uint64_t x570 = UINT64_MAX;
	uint16_t x571 = 884U;
	volatile uint64_t x572 = 963218420912135LLU;
	static volatile uint64_t t96 = 39323441328614LLU;

	t96 = ((x569+x570)+(x571*x572));

	if (t96 != 10074857120941103147LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x585 = 1;
	uint64_t x586 = UINT64_MAX;
	volatile int16_t x588 = INT16_MIN;
	volatile uint64_t t97 = 252703942357LLU;

	t97 = ((x585+x586)+(x587*x588));

	if (t97 != 18446744073709387776LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x590 = 1U;
	int8_t x591 = INT8_MIN;
	uint64_t x592 = 670094757809222279LLU;
	volatile uint64_t t98 = 137355086769LLU;

	t98 = ((x589+x590)+(x591*x592));

	if (t98 != 6461591373262273658LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x597 = INT64_MAX;
	int8_t x599 = INT8_MIN;
	volatile int32_t x600 = 1830;

	t99 = ((x597+x598)+(x599*x600));

	if (t99 != 9223372036854218194LL) { NG(); } else { ; }
	
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

