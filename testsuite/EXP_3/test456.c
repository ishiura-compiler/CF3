#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 477048U;
volatile uint16_t x5 = 19U;
int64_t x6 = INT64_MIN;
int16_t x14 = -1;
int16_t x15 = INT16_MIN;
volatile int16_t x23 = INT16_MIN;
static uint64_t x25 = UINT64_MAX;
uint64_t x30 = UINT64_MAX;
int32_t x34 = -258020819;
static uint32_t t9 = 85U;
volatile uint8_t x67 = 0U;
volatile int64_t t12 = -719969648LL;
volatile int8_t x69 = -1;
volatile uint64_t t13 = 6907LLU;
int32_t t14 = 544;
static int8_t x90 = INT8_MIN;
static int64_t t17 = 14448290100249715LL;
static volatile uint16_t x122 = 11687U;
int32_t t23 = 430667;
uint16_t x142 = 26433U;
int16_t x143 = -1;
static int16_t x154 = -1;
int8_t x155 = -1;
int16_t x157 = INT16_MAX;
static uint8_t x172 = UINT8_MAX;
static int8_t x197 = -1;
volatile uint16_t x199 = 2416U;
int64_t x203 = -31845195LL;
int16_t x206 = -1;
volatile int16_t x209 = 23;
static int8_t x212 = 13;
static volatile int64_t t38 = 22LL;
static int8_t x217 = INT8_MIN;
static int64_t x221 = INT64_MIN;
uint32_t x222 = 159U;
static volatile int32_t t40 = -772195062;
uint32_t x226 = 23U;
uint8_t x227 = UINT8_MAX;
uint8_t x231 = 3U;
volatile int8_t x232 = -1;
int16_t x233 = INT16_MIN;
volatile uint16_t x234 = UINT16_MAX;
int64_t x240 = -1LL;
int8_t x248 = -1;
static int32_t t47 = 1;
uint16_t x253 = 15680U;
int64_t x275 = INT64_MIN;
int64_t x286 = -15177LL;
volatile int16_t x288 = -1;
uint16_t x289 = 20850U;
int8_t x307 = INT8_MIN;
uint32_t x312 = UINT32_MAX;
int32_t x325 = -20;
int16_t x329 = INT16_MAX;
volatile int32_t t64 = 966137537;
int16_t x356 = INT16_MIN;
int8_t x360 = INT8_MIN;
int16_t x371 = INT16_MIN;
volatile int32_t t68 = 0;
static volatile uint32_t x374 = 788685193U;
uint64_t x376 = 88775380665797LLU;
static uint64_t x381 = 3308105111LLU;
uint16_t x383 = 5U;
static volatile uint16_t x384 = 1U;
static uint8_t x396 = 48U;
uint32_t x397 = UINT32_MAX;
volatile int16_t x399 = -152;
volatile int32_t x409 = 916976;
uint32_t x411 = 362048U;
volatile int8_t x427 = INT8_MIN;
volatile int64_t t79 = -1689989117128LL;
int32_t t80 = -429011639;
int8_t x450 = -20;
static volatile int32_t x451 = -566;
int16_t x452 = INT16_MIN;
volatile int32_t t86 = -62247339;
int16_t x467 = -1;
volatile int32_t t87 = 35409;
int8_t x472 = 0;
uint8_t x492 = UINT8_MAX;
int8_t x495 = -1;
int16_t x501 = INT16_MIN;
int8_t x503 = -1;
static int8_t x508 = 9;
int64_t x510 = INT64_MAX;
uint8_t x512 = 0U;


void f0(void) {
	uint64_t x1 = 8289884733LLU;
	int16_t x2 = INT16_MAX;
	volatile uint32_t x3 = 236575U;
	static uint32_t x4 = 3U;

	t0 = ((x1<=x2)+(x3*x4));

	if (t0 != 709725U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -5;

	t1 = ((x5<=x6)+(x7*x8));

	if (t1 != 4194304) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MIN;
	int8_t x16 = -1;
	volatile int32_t t2 = -72;

	t2 = ((x13<=x14)+(x15*x16));

	if (t2 != 32769) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	uint64_t x24 = 10005LLU;
	volatile uint64_t t3 = 47679775632LLU;

	t3 = ((x21<=x22)+(x23*x24));

	if (t3 != 18446744073381707776LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x26 = 44596737U;
	static uint64_t x27 = UINT64_MAX;
	volatile uint32_t x28 = 12U;
	static volatile uint64_t t4 = 125482794910370853LLU;

	t4 = ((x25<=x26)+(x27*x28));

	if (t4 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = INT16_MIN;
	uint8_t x31 = 65U;
	uint64_t x32 = 38LLU;
	uint64_t t5 = 129847231573342989LLU;

	t5 = ((x29<=x30)+(x31*x32));

	if (t5 != 2471LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 7298867LLU;
	uint64_t x35 = 2057512239LLU;
	static int32_t x36 = INT32_MIN;
	volatile uint64_t t6 = 254042LLU;

	t6 = ((x33<=x34)+(x35*x36));

	if (t6 != 14028270184897183745LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	int16_t x38 = -494;
	int16_t x39 = -1;
	uint32_t x40 = 193910661U;
	static volatile uint32_t t7 = 18U;

	t7 = ((x37<=x38)+(x39*x40));

	if (t7 != 4101056635U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 0;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	int16_t x44 = 9108;
	volatile int32_t t8 = -351;

	t8 = ((x41<=x42)+(x43*x44));

	if (t8 != -298450944) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -1LL;
	volatile int16_t x54 = INT16_MIN;
	uint32_t x55 = 69752226U;
	int32_t x56 = INT32_MIN;

	t9 = ((x53<=x54)+(x55*x56));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x57 = INT16_MIN;
	uint64_t x58 = 98LLU;
	int8_t x59 = INT8_MIN;
	volatile int8_t x60 = 0;
	static volatile int32_t t10 = 582435;

	t10 = ((x57<=x58)+(x59*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 60459U;
	volatile int32_t x62 = -1;
	int16_t x63 = -1;
	uint64_t x64 = 11900053211978LLU;
	static volatile uint64_t t11 = 39707746366748LLU;

	t11 = ((x61<=x62)+(x63*x64));

	if (t11 != 18446732173656339639LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x65 = -1;
	volatile int64_t x66 = INT64_MIN;
	static int64_t x68 = 78113396LL;

	t12 = ((x65<=x66)+(x67*x68));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x70 = INT32_MAX;
	volatile uint8_t x71 = UINT8_MAX;
	static uint64_t x72 = 17306121LLU;

	t13 = ((x69<=x70)+(x71*x72));

	if (t13 != 4413060856LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = INT8_MIN;
	static int32_t x74 = INT32_MIN;
	static volatile uint16_t x75 = UINT16_MAX;
	volatile int8_t x76 = -1;

	t14 = ((x73<=x74)+(x75*x76));

	if (t14 != -65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	int16_t x78 = -1;
	static uint8_t x79 = 14U;
	int64_t x80 = 21508965367743867LL;
	volatile int64_t t15 = 2457025100139703LL;

	t15 = ((x77<=x78)+(x79*x80));

	if (t15 != 301125515148414138LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;
	uint64_t t16 = 49955031624207574LLU;

	t16 = ((x89<=x90)+(x91*x92));

	if (t16 != 2147483648LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = 0;
	int32_t x94 = INT32_MIN;
	int16_t x95 = -1;
	static volatile int64_t x96 = -1LL;

	t17 = ((x93<=x94)+(x95*x96));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = INT32_MAX;
	int32_t x102 = INT32_MAX;
	static int64_t x103 = -1LL;
	static volatile int64_t x104 = -13656714373LL;
	static volatile int64_t t18 = 3169862254865773149LL;

	t18 = ((x101<=x102)+(x103*x104));

	if (t18 != 13656714374LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = -9796;
	volatile int32_t x106 = 731;
	int8_t x107 = 0;
	int8_t x108 = INT8_MAX;
	int32_t t19 = -635;

	t19 = ((x105<=x106)+(x107*x108));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x109 = 860U;
	static volatile uint32_t x110 = UINT32_MAX;
	volatile uint8_t x111 = UINT8_MAX;
	volatile int16_t x112 = -1;
	volatile int32_t t20 = 0;

	t20 = ((x109<=x110)+(x111*x112));

	if (t20 != -254) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x117 = -1;
	int16_t x118 = -1;
	volatile int8_t x119 = INT8_MIN;
	volatile uint32_t x120 = 1176057U;
	uint32_t t21 = 125587U;

	t21 = ((x117<=x118)+(x119*x120));

	if (t21 != 4144432001U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 2687U;
	uint16_t x123 = 11U;
	int32_t x124 = 8471722;
	volatile int32_t t22 = -131;

	t22 = ((x121<=x122)+(x123*x124));

	if (t22 != 93188943) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x125 = 1;
	volatile int8_t x126 = 0;
	static int8_t x127 = INT8_MIN;
	uint8_t x128 = UINT8_MAX;

	t23 = ((x125<=x126)+(x127*x128));

	if (t23 != -32640) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = INT64_MAX;
	static uint16_t x134 = UINT16_MAX;
	uint64_t x135 = 1766LLU;
	static int32_t x136 = -1;
	uint64_t t24 = 41LLU;

	t24 = ((x133<=x134)+(x135*x136));

	if (t24 != 18446744073709549850LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MAX;
	volatile int8_t x138 = INT8_MIN;
	uint32_t x139 = 88U;
	uint16_t x140 = UINT16_MAX;
	volatile uint32_t t25 = 102609720U;

	t25 = ((x137<=x138)+(x139*x140));

	if (t25 != 5767080U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x141 = 824220;
	uint64_t x144 = UINT64_MAX;
	uint64_t t26 = 9LLU;

	t26 = ((x141<=x142)+(x143*x144));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = -12LL;
	int64_t x156 = -1LL;
	volatile int64_t t27 = 106109529LL;

	t27 = ((x153<=x154)+(x155*x156));

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x158 = INT64_MIN;
	uint64_t x159 = 19030641LLU;
	uint32_t x160 = 17543488U;
	static volatile uint64_t t28 = 764875936050LLU;

	t28 = ((x157<=x158)+(x159*x160));

	if (t28 != 333863822015808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x169 = -1;
	int32_t x170 = -8;
	static int8_t x171 = INT8_MAX;
	int32_t t29 = -140132;

	t29 = ((x169<=x170)+(x171*x172));

	if (t29 != 32385) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x177 = 4612U;
	static int32_t x178 = INT32_MIN;
	uint8_t x179 = 0U;
	uint8_t x180 = 32U;
	volatile int32_t t30 = -33483807;

	t30 = ((x177<=x178)+(x179*x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = INT16_MIN;
	volatile uint32_t x182 = 95U;
	int64_t x183 = 218748620317LL;
	static int8_t x184 = -1;
	static int64_t t31 = -102790LL;

	t31 = ((x181<=x182)+(x183*x184));

	if (t31 != -218748620317LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = 4;
	int16_t x186 = -894;
	static int8_t x187 = 0;
	volatile int32_t x188 = -1;
	int32_t t32 = -27555;

	t32 = ((x185<=x186)+(x187*x188));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x189 = 393U;
	int64_t x190 = INT64_MAX;
	int32_t x191 = -17;
	int16_t x192 = -1;
	static int32_t t33 = 287379;

	t33 = ((x189<=x190)+(x191*x192));

	if (t33 != 18) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x193 = -6;
	volatile uint32_t x194 = 23U;
	static uint8_t x195 = 0U;
	int16_t x196 = INT16_MIN;
	int32_t t34 = 81059;

	t34 = ((x193<=x194)+(x195*x196));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x198 = INT16_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t35 = 8691215;

	t35 = ((x197<=x198)+(x199*x200));

	if (t35 != 306832) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x201 = 35U;
	int8_t x202 = 0;
	uint16_t x204 = 20889U;
	volatile int64_t t36 = 2965315605282889682LL;

	t36 = ((x201<=x202)+(x203*x204));

	if (t36 != -665214278355LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x205 = INT64_MIN;
	int8_t x207 = 44;
	int64_t x208 = -15LL;
	int64_t t37 = 63740751652LL;

	t37 = ((x205<=x206)+(x207*x208));

	if (t37 != -659LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x210 = 1U;
	int64_t x211 = 205220518638062LL;

	t38 = ((x209<=x210)+(x211*x212));

	if (t38 != 2667866742294806LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x218 = INT32_MAX;
	static volatile int64_t x219 = -3LL;
	int8_t x220 = -12;
	volatile int64_t t39 = 4846849LL;

	t39 = ((x217<=x218)+(x219*x220));

	if (t39 != 37LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x223 = UINT16_MAX;
	int32_t x224 = -293;

	t40 = ((x221<=x222)+(x223*x224));

	if (t40 != -19201754) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x228 = 116623U;
	static volatile uint32_t t41 = 134203395U;

	t41 = ((x225<=x226)+(x227*x228));

	if (t41 != 29738865U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x229 = INT64_MIN;
	volatile int8_t x230 = -10;
	static int32_t t42 = 27650;

	t42 = ((x229<=x230)+(x231*x232));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x235 = 3954398942610243568LLU;
	int16_t x236 = -1;
	uint64_t t43 = 6158928314566LLU;

	t43 = ((x233<=x234)+(x235*x236));

	if (t43 != 14492345131099308049LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x237 = -1;
	int32_t x238 = -5506;
	uint8_t x239 = 76U;
	int64_t t44 = -5LL;

	t44 = ((x237<=x238)+(x239*x240));

	if (t44 != -76LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x241 = -1;
	uint32_t x242 = 573605U;
	uint64_t x243 = 3LLU;
	int64_t x244 = 8543377899853LL;
	volatile uint64_t t45 = 50536084LLU;

	t45 = ((x241<=x242)+(x243*x244));

	if (t45 != 25630133699559LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x245 = UINT16_MAX;
	int16_t x246 = -1231;
	uint16_t x247 = UINT16_MAX;
	static volatile int32_t t46 = -70;

	t46 = ((x245<=x246)+(x247*x248));

	if (t46 != -65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = 28;
	static int8_t x251 = -1;
	int32_t x252 = 332931012;

	t47 = ((x249<=x250)+(x251*x252));

	if (t47 != -332931012) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x254 = -1;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = 22LLU;
	volatile uint64_t t48 = 46269LLU;

	t48 = ((x253<=x254)+(x255*x256));

	if (t48 != 18446744026464911360LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x257 = -1;
	int16_t x258 = INT16_MAX;
	volatile int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MAX;
	volatile int32_t t49 = 12542;

	t49 = ((x257<=x258)+(x259*x260));

	if (t49 != -4161535) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x269 = -6246;
	uint64_t x270 = 1251999748671LLU;
	int32_t x271 = INT32_MAX;
	static int32_t x272 = -1;
	int32_t t50 = -743907;

	t50 = ((x269<=x270)+(x271*x272));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	uint64_t x276 = 1013551253057LLU;
	uint64_t t51 = 3442518128531735305LLU;

	t51 = ((x273<=x274)+(x275*x276));

	if (t51 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x285 = INT64_MIN;
	int8_t x287 = 1;
	static volatile int32_t t52 = 38;

	t52 = ((x285<=x286)+(x287*x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x290 = INT32_MAX;
	uint16_t x291 = 0U;
	int32_t x292 = -1;
	volatile int32_t t53 = -32;

	t53 = ((x289<=x290)+(x291*x292));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x293 = 1U;
	int8_t x294 = -1;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = -42225680801LL;
	static volatile int64_t t54 = -259147087LL;

	t54 = ((x293<=x294)+(x295*x296));

	if (t54 != -2767259991293535LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x297 = 52269LL;
	int32_t x298 = 24997;
	int32_t x299 = -481;
	static uint16_t x300 = UINT16_MAX;
	volatile int32_t t55 = 1297425;

	t55 = ((x297<=x298)+(x299*x300));

	if (t55 != -31522335) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x305 = 56;
	int64_t x306 = INT64_MIN;
	uint16_t x308 = UINT16_MAX;
	int32_t t56 = 29317092;

	t56 = ((x305<=x306)+(x307*x308));

	if (t56 != -8388480) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x309 = INT32_MIN;
	static int16_t x310 = INT16_MIN;
	volatile int16_t x311 = 436;
	volatile uint32_t t57 = 529907748U;

	t57 = ((x309<=x310)+(x311*x312));

	if (t57 != 4294966861U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x313 = -697842970;
	volatile int32_t x314 = -1;
	static uint8_t x315 = UINT8_MAX;
	volatile int16_t x316 = INT16_MAX;
	volatile int32_t t58 = 1;

	t58 = ((x313<=x314)+(x315*x316));

	if (t58 != 8355586) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = 659383484276264LL;
	uint16_t x318 = 451U;
	uint16_t x319 = 843U;
	static uint32_t x320 = 333U;
	uint32_t t59 = 7U;

	t59 = ((x317<=x318)+(x319*x320));

	if (t59 != 280719U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x321 = 19U;
	int64_t x322 = 7329517655241LL;
	int16_t x323 = INT16_MIN;
	static volatile int8_t x324 = INT8_MIN;
	volatile int32_t t60 = -187376;

	t60 = ((x321<=x322)+(x323*x324));

	if (t60 != 4194305) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x326 = -49811;
	static int16_t x327 = -1;
	volatile int8_t x328 = INT8_MAX;
	volatile int32_t t61 = 47;

	t61 = ((x325<=x326)+(x327*x328));

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x330 = UINT8_MAX;
	volatile int8_t x331 = INT8_MIN;
	uint8_t x332 = 0U;
	volatile int32_t t62 = -3;

	t62 = ((x329<=x330)+(x331*x332));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x345 = -1;
	int64_t x346 = -6242088391437001LL;
	volatile int16_t x347 = -10;
	uint16_t x348 = 1671U;
	volatile int32_t t63 = -5433445;

	t63 = ((x345<=x346)+(x347*x348));

	if (t63 != -16710) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x349 = 1U;
	static uint64_t x350 = 1LLU;
	uint8_t x351 = 1U;
	int32_t x352 = -1;

	t64 = ((x349<=x350)+(x351*x352));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x353 = 28952133166714090LLU;
	static int64_t x354 = -256516696793LL;
	volatile uint16_t x355 = 10U;
	int32_t t65 = -5937615;

	t65 = ((x353<=x354)+(x355*x356));

	if (t65 != -327679) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x357 = 7845LL;
	int32_t x358 = -1;
	volatile int16_t x359 = INT16_MIN;
	static int32_t t66 = 25403210;

	t66 = ((x357<=x358)+(x359*x360));

	if (t66 != 4194304) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x365 = -9878;
	int8_t x366 = INT8_MIN;
	uint32_t x367 = 2025779167U;
	int16_t x368 = INT16_MAX;
	uint32_t t67 = 606595268U;

	t67 = ((x365<=x366)+(x367*x368));

	if (t67 != 4281372706U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x369 = 13;
	int64_t x370 = -518340230LL;
	static volatile uint8_t x372 = 0U;

	t68 = ((x369<=x370)+(x371*x372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x373 = INT16_MAX;
	uint32_t x375 = 182640180U;
	volatile uint64_t t69 = 935468LLU;

	t69 = ((x373<=x374)+(x375*x376));

	if (t69 != 17710207652697604613LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x377 = 12U;
	static int16_t x378 = INT16_MIN;
	int64_t x379 = 1697LL;
	volatile int16_t x380 = INT16_MIN;
	int64_t t70 = -329126LL;

	t70 = ((x377<=x378)+(x379*x380));

	if (t70 != -55607296LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x382 = INT64_MIN;
	volatile int32_t t71 = 85587241;

	t71 = ((x381<=x382)+(x383*x384));

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x389 = -28;
	uint32_t x390 = UINT32_MAX;
	volatile int64_t x391 = 32466LL;
	static uint8_t x392 = 9U;
	volatile int64_t t72 = -90LL;

	t72 = ((x389<=x390)+(x391*x392));

	if (t72 != 292195LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x393 = 12U;
	static volatile uint16_t x394 = 500U;
	uint16_t x395 = 350U;
	volatile int32_t t73 = 4;

	t73 = ((x393<=x394)+(x395*x396));

	if (t73 != 16801) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x398 = 26488U;
	static int16_t x400 = INT16_MIN;
	static volatile int32_t t74 = 0;

	t74 = ((x397<=x398)+(x399*x400));

	if (t74 != 4980736) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x401 = -1;
	static int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	int8_t x404 = 4;
	volatile int32_t t75 = -3761;

	t75 = ((x401<=x402)+(x403*x404));

	if (t75 != -512) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x405 = INT8_MAX;
	static int16_t x406 = INT16_MIN;
	static int8_t x407 = INT8_MIN;
	static uint8_t x408 = 92U;
	static volatile int32_t t76 = 66762666;

	t76 = ((x405<=x406)+(x407*x408));

	if (t76 != -11776) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x410 = 564U;
	volatile int32_t x412 = -8436;
	volatile uint32_t t77 = 6U;

	t77 = ((x409<=x410)+(x411*x412));

	if (t77 != 1240730368U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x421 = INT64_MAX;
	int8_t x422 = INT8_MAX;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = 2115U;
	volatile uint32_t t78 = 961U;

	t78 = ((x421<=x422)+(x423*x424));

	if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x425 = 19121LLU;
	uint16_t x426 = 229U;
	int64_t x428 = -1LL;

	t79 = ((x425<=x426)+(x427*x428));

	if (t79 != 128LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x429 = INT8_MIN;
	int32_t x430 = INT32_MIN;
	volatile int8_t x431 = -1;
	int8_t x432 = -1;

	t80 = ((x429<=x430)+(x431*x432));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x433 = INT32_MIN;
	static int32_t x434 = 27;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = 3425934U;
	volatile uint32_t t81 = 1038839697U;

	t81 = ((x433<=x434)+(x435*x436));

	if (t81 != 3856447745U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x441 = INT8_MAX;
	static int64_t x442 = INT64_MAX;
	uint32_t x443 = UINT32_MAX;
	uint64_t x444 = 717933395LLU;
	volatile uint64_t t82 = 1716161707LLU;

	t82 = ((x441<=x442)+(x443*x444));

	if (t82 != 3083500451513316526LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x445 = INT64_MIN;
	int64_t x446 = -1LL;
	uint64_t x447 = UINT64_MAX;
	volatile int16_t x448 = INT16_MIN;
	volatile uint64_t t83 = 181079233649LLU;

	t83 = ((x445<=x446)+(x447*x448));

	if (t83 != 32769LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x449 = 3U;
	volatile int32_t t84 = -5;

	t84 = ((x449<=x450)+(x451*x452));

	if (t84 != 18546688) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x453 = 10960269812197061LL;
	int16_t x454 = INT16_MAX;
	volatile int64_t x455 = 117LL;
	int16_t x456 = -1;
	static volatile int64_t t85 = -660LL;

	t85 = ((x453<=x454)+(x455*x456));

	if (t85 != -117LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x461 = INT8_MIN;
	int64_t x462 = INT64_MIN;
	uint8_t x463 = 28U;
	static volatile uint8_t x464 = UINT8_MAX;

	t86 = ((x461<=x462)+(x463*x464));

	if (t86 != 7140) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x465 = 1190328834892695LL;
	static volatile int32_t x466 = INT32_MIN;
	int32_t x468 = INT32_MAX;

	t87 = ((x465<=x466)+(x467*x468));

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x469 = INT32_MIN;
	volatile int64_t x470 = INT64_MIN;
	static uint16_t x471 = 12951U;
	static int32_t t88 = -10;

	t88 = ((x469<=x470)+(x471*x472));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x473 = -1814LL;
	int8_t x474 = INT8_MIN;
	volatile int16_t x475 = INT16_MIN;
	uint16_t x476 = 596U;
	int32_t t89 = 928776319;

	t89 = ((x473<=x474)+(x475*x476));

	if (t89 != -19529727) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x481 = INT16_MAX;
	int8_t x482 = 61;
	uint32_t x483 = 8010305U;
	int16_t x484 = INT16_MIN;
	uint32_t t90 = 78985U;

	t90 = ((x481<=x482)+(x483*x484));

	if (t90 != 3806298112U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x485 = UINT16_MAX;
	int8_t x486 = INT8_MIN;
	uint16_t x487 = 958U;
	static uint16_t x488 = UINT16_MAX;
	int32_t t91 = 1929677;

	t91 = ((x485<=x486)+(x487*x488));

	if (t91 != 62782530) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x489 = INT32_MIN;
	static int32_t x490 = -1;
	uint64_t x491 = UINT64_MAX;
	static volatile uint64_t t92 = 25370609LLU;

	t92 = ((x489<=x490)+(x491*x492));

	if (t92 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x493 = 1U;
	int16_t x494 = INT16_MAX;
	uint8_t x496 = 84U;
	int32_t t93 = 12913;

	t93 = ((x493<=x494)+(x495*x496));

	if (t93 != -83) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x497 = 20U;
	volatile uint8_t x498 = 1U;
	volatile int32_t x499 = -1;
	int16_t x500 = -6;
	static volatile int32_t t94 = 85;

	t94 = ((x497<=x498)+(x499*x500));

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x502 = INT64_MIN;
	uint64_t x504 = 12858675LLU;
	uint64_t t95 = 11173015553147218LLU;

	t95 = ((x501<=x502)+(x503*x504));

	if (t95 != 18446744073696692941LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x505 = UINT32_MAX;
	int64_t x506 = -35761392LL;
	uint16_t x507 = 1797U;
	int32_t t96 = 357101;

	t96 = ((x505<=x506)+(x507*x508));

	if (t96 != 16173) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x509 = 69U;
	static int8_t x511 = INT8_MIN;
	int32_t t97 = 5;

	t97 = ((x509<=x510)+(x511*x512));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x513 = 453288735075105LL;
	uint8_t x514 = 5U;
	int64_t x515 = -1LL;
	static volatile uint64_t x516 = 28LLU;
	uint64_t t98 = 495916LLU;

	t98 = ((x513<=x514)+(x515*x516));

	if (t98 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x517 = UINT16_MAX;
	volatile uint16_t x518 = 1175U;
	static int32_t x519 = INT32_MAX;
	int64_t x520 = 23962LL;
	static int64_t t99 = 51676925122040044LL;

	t99 = ((x517<=x518)+(x519*x520));

	if (t99 != 51458003149414LL) { NG(); } else { ; }
	
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

