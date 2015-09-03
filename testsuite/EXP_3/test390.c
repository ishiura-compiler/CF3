#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1;
int8_t x23 = INT8_MIN;
static int16_t x31 = INT16_MIN;
uint16_t x37 = 405U;
static uint64_t t7 = 65943441LLU;
static volatile uint64_t x53 = 240125972LLU;
volatile uint64_t t8 = 60LLU;
int32_t x61 = 0;
static uint16_t x62 = 11017U;
volatile int32_t x64 = -1;
volatile uint64_t t11 = 36920196947LLU;
volatile uint16_t x79 = 1320U;
uint16_t x80 = UINT16_MAX;
int32_t t13 = 1897661;
int16_t x88 = -22;
volatile int64_t x93 = -10007341938LL;
uint64_t x94 = 474LLU;
int16_t x103 = INT16_MIN;
static volatile int32_t t16 = 17261;
int16_t x109 = -1;
int64_t t18 = 4217172706775037413LL;
volatile uint64_t x119 = 200269LLU;
int32_t x120 = -1;
uint64_t x122 = UINT64_MAX;
volatile uint64_t t20 = 384468620338LLU;
int64_t x125 = INT64_MIN;
static int8_t x129 = INT8_MAX;
int64_t x137 = INT64_MIN;
volatile int64_t x141 = INT64_MAX;
int64_t x142 = -1LL;
uint32_t t27 = 18U;
int64_t x161 = 161293980355353LL;
volatile int8_t x164 = INT8_MAX;
int8_t x168 = INT8_MIN;
uint8_t x178 = 42U;
int16_t x180 = INT16_MIN;
volatile int32_t x182 = 553;
int64_t t34 = 2215492777923LL;
static int16_t x193 = INT16_MIN;
uint32_t x194 = 1966U;
int16_t x205 = -1;
volatile int8_t x209 = 0;
static int16_t x214 = INT16_MAX;
int64_t x216 = -14086564LL;
volatile uint8_t x218 = 1U;
uint32_t x220 = 1U;
int16_t x223 = 11;
static volatile int64_t x240 = 102381579LL;
volatile uint32_t x243 = 438753U;
static int64_t x247 = 114884LL;
volatile int32_t t46 = -828058;
int16_t x269 = -891;
int64_t x270 = -1LL;
static int64_t x274 = 227760079886916LL;
uint8_t x276 = UINT8_MAX;
volatile int64_t t50 = -64LL;
static uint32_t x277 = 1494034078U;
static int64_t t52 = 233355393253569LL;
uint64_t x289 = 14213999LLU;
int32_t x290 = -1;
int16_t x292 = INT16_MIN;
static uint16_t x296 = 502U;
int32_t x306 = 51467432;
uint8_t x311 = UINT8_MAX;
int8_t x325 = -62;
static volatile int32_t x328 = INT32_MAX;
int16_t x332 = -18;
uint32_t x335 = 664U;
int16_t x336 = -172;
uint64_t x343 = 9637749577LLU;
static int32_t x357 = -13;
uint8_t x370 = 28U;
uint16_t x381 = 945U;
int8_t x399 = -3;
uint32_t x406 = UINT32_MAX;
uint16_t x409 = UINT16_MAX;
int32_t x410 = 177;
uint32_t x418 = 407303915U;
uint8_t x420 = 103U;
uint32_t t78 = 2590U;
int16_t x431 = INT16_MIN;
int16_t x436 = INT16_MIN;
static volatile int64_t t81 = -42LL;
int8_t x438 = INT8_MIN;
int16_t x439 = INT16_MIN;
volatile int16_t x472 = 2887;
volatile int32_t t87 = -205;
int16_t x474 = INT16_MIN;
int8_t x480 = INT8_MAX;
uint8_t x485 = UINT8_MAX;
static uint8_t x489 = 4U;
volatile int32_t x490 = INT32_MIN;
uint16_t x494 = UINT16_MAX;
volatile uint64_t x512 = 363856686742498915LLU;
int16_t x523 = 1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint16_t x2 = 20U;
	int16_t x3 = INT16_MAX;
	volatile int16_t x4 = INT16_MIN;

	t0 = ((x1/x2)^(x3*x4));

	if (t0 != 1073707418) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	int32_t x10 = INT32_MIN;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = 5;
	volatile uint32_t t1 = 1832431829U;

	t1 = ((x9/x10)^(x11*x12));

	if (t1 != 4294967291U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -735406573328147LL;
	int8_t x14 = -1;
	volatile int8_t x15 = INT8_MIN;
	static volatile int16_t x16 = -1;
	int64_t t2 = 3254217858035302844LL;

	t2 = ((x13/x14)^(x15*x16));

	if (t2 != 735406573328275LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x21 = 0U;
	int64_t x22 = -1LL;
	volatile uint64_t x24 = 1484972500928287LLU;
	volatile uint64_t t3 = 43962977232LLU;

	t3 = ((x21/x22)^(x23*x24));

	if (t3 != 18256667593590730880LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -10695;
	int64_t x26 = -207LL;
	uint8_t x27 = 1U;
	volatile int8_t x28 = INT8_MIN;
	int64_t t4 = 52LL;

	t4 = ((x25/x26)^(x27*x28));

	if (t4 != -77LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MAX;
	volatile int32_t x32 = -167;
	volatile uint32_t t5 = 17395U;

	t5 = ((x29/x30)^(x31*x32));

	if (t5 != 5341188U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x38 = 2806LL;
	uint8_t x39 = 31U;
	static volatile int16_t x40 = 2;
	volatile int64_t t6 = -102LL;

	t6 = ((x37/x38)^(x39*x40));

	if (t6 != 62LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 339542942965237LLU;
	int8_t x46 = INT8_MAX;
	uint64_t x47 = 2415530LLU;
	int16_t x48 = INT16_MAX;

	t7 = ((x45/x46)^(x47*x48));

	if (t7 != 2731889316607LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x54 = -1LL;
	uint16_t x55 = 36U;
	volatile int8_t x56 = INT8_MAX;

	t8 = ((x53/x54)^(x55*x56));

	if (t8 != 4572LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x57 = 30U;
	int64_t x58 = INT64_MIN;
	static volatile uint16_t x59 = 30767U;
	int8_t x60 = 3;
	volatile int64_t t9 = 97LL;

	t9 = ((x57/x58)^(x59*x60));

	if (t9 != 92301LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x63 = 47;
	volatile int32_t t10 = 75;

	t10 = ((x61/x62)^(x63*x64));

	if (t10 != -47) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = -22841LL;
	uint64_t x71 = 530LLU;
	int16_t x72 = -8292;

	t11 = ((x69/x70)^(x71*x72));

	if (t11 != 18446744073705156857LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x73 = INT8_MIN;
	uint64_t x74 = 93363931LLU;
	int16_t x75 = INT16_MAX;
	int8_t x76 = INT8_MIN;
	static uint64_t t12 = 4051454805235938LLU;

	t12 = ((x73/x74)^(x75*x76));

	if (t12 != 18446743876130502521LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MAX;
	int16_t x78 = -1;

	t13 = ((x77/x78)^(x79*x80));

	if (t13 != -86506151) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x85 = INT64_MIN;
	static uint8_t x86 = 1U;
	uint16_t x87 = 116U;
	static int64_t t14 = 118325475307532021LL;

	t14 = ((x85/x86)^(x87*x88));

	if (t14 != 9223372036854773256LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x95 = 2U;
	uint32_t x96 = 1574352U;
	static uint64_t t15 = 8921846404702199930LLU;

	t15 = ((x93/x94)^(x95*x96));

	if (t15 != 38917181570042019LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x101 = INT8_MIN;
	uint8_t x102 = 1U;
	volatile uint8_t x104 = 15U;

	t16 = ((x101/x102)^(x103*x104));

	if (t16 != 491392) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x110 = INT8_MIN;
	uint8_t x111 = 7U;
	volatile uint16_t x112 = 30U;
	int32_t t17 = 49;

	t17 = ((x109/x110)^(x111*x112));

	if (t17 != 210) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = -1;
	static int32_t x114 = INT32_MIN;
	int64_t x115 = -61102446832LL;
	int32_t x116 = 93;

	t18 = ((x113/x114)^(x115*x116));

	if (t18 != -5682527555376LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x117 = -61;
	static uint64_t x118 = UINT64_MAX;
	static uint64_t t19 = 61625167092LLU;

	t19 = ((x117/x118)^(x119*x120));

	if (t19 != 18446744073709351347LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x121 = INT64_MAX;
	static uint32_t x123 = UINT32_MAX;
	int32_t x124 = -66182;

	t20 = ((x121/x122)^(x123*x124));

	if (t20 != 66182LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x126 = 6;
	int64_t x127 = -1LL;
	static volatile int32_t x128 = 2;
	int64_t t21 = 234692874270LL;

	t21 = ((x125/x126)^(x127*x128));

	if (t21 != 1537228672809129301LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 2U;
	int64_t x132 = -771553432500609LL;
	volatile int64_t t22 = -20434548889716LL;

	t22 = ((x129/x130)^(x131*x132));

	if (t22 != -1543106865001218LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x138 = INT64_MIN;
	static int8_t x139 = INT8_MAX;
	int8_t x140 = INT8_MAX;
	static volatile int64_t t23 = 2164788LL;

	t23 = ((x137/x138)^(x139*x140));

	if (t23 != 16128LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x143 = 7;
	uint32_t x144 = 7134317U;
	static int64_t t24 = -130922505604568349LL;

	t24 = ((x141/x142)^(x143*x144));

	if (t24 != -9223372036804835590LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x145 = -14320268LL;
	int32_t x146 = INT32_MAX;
	int32_t x147 = 2;
	uint64_t x148 = UINT64_MAX;
	uint64_t t25 = 8533156709673637591LLU;

	t25 = ((x145/x146)^(x147*x148));

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x149 = UINT64_MAX;
	uint64_t x150 = 93914520LLU;
	int16_t x151 = -1;
	int64_t x152 = -227955499LL;
	uint64_t t26 = 109756LLU;

	t26 = ((x149/x150)^(x151*x152));

	if (t26 != 196327142000LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x157 = INT8_MAX;
	int8_t x158 = INT8_MAX;
	uint32_t x159 = 4U;
	int32_t x160 = 9664;

	t27 = ((x157/x158)^(x159*x160));

	if (t27 != 38657U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x162 = 597412279U;
	uint8_t x163 = 6U;
	int64_t t28 = -1887363257370LL;

	t28 = ((x161/x162)^(x163*x164));

	if (t28 != 269401LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x165 = 3U;
	volatile uint64_t x166 = 3946977LLU;
	volatile int32_t x167 = -596;
	uint64_t t29 = 7245605867005LLU;

	t29 = ((x165/x166)^(x167*x168));

	if (t29 != 76288LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x169 = 22;
	static int64_t x170 = INT64_MIN;
	uint8_t x171 = 6U;
	int8_t x172 = 47;
	int64_t t30 = -791259685LL;

	t30 = ((x169/x170)^(x171*x172));

	if (t30 != 282LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x177 = -1LL;
	static volatile int16_t x179 = 0;
	static volatile int64_t t31 = -371497340348943469LL;

	t31 = ((x177/x178)^(x179*x180));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x181 = -19160;
	int16_t x183 = -1;
	int64_t x184 = -1357330491LL;
	volatile int64_t t32 = -146064291373480LL;

	t32 = ((x181/x182)^(x183*x184));

	if (t32 != -1357330459LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = INT16_MAX;
	volatile int64_t x186 = INT64_MIN;
	volatile uint16_t x187 = 8U;
	int32_t x188 = -245323432;
	volatile int64_t t33 = -1681852588LL;

	t33 = ((x185/x186)^(x187*x188));

	if (t33 != -1962587456LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x189 = 5U;
	volatile int32_t x190 = -1;
	int8_t x191 = 1;
	static int64_t x192 = 6LL;

	t34 = ((x189/x190)^(x191*x192));

	if (t34 != -3LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x195 = 28540205593LLU;
	volatile uint8_t x196 = 1U;
	static uint64_t t35 = 26LLU;

	t35 = ((x193/x194)^(x195*x196));

	if (t35 != 28538154884LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x197 = 1768U;
	static int32_t x198 = 39;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t36 = 167802LLU;

	t36 = ((x197/x198)^(x199*x200));

	if (t36 != 32813LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x206 = 3388U;
	volatile int32_t x207 = 0;
	volatile int16_t x208 = INT16_MIN;
	volatile uint32_t t37 = 233851084U;

	t37 = ((x205/x206)^(x207*x208));

	if (t37 != 1267699U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x210 = INT8_MIN;
	uint64_t x211 = 1088996752LLU;
	uint8_t x212 = 9U;
	uint64_t t38 = 20309220030LLU;

	t38 = ((x209/x210)^(x211*x212));

	if (t38 != 9800970768LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x213 = 0;
	static volatile int8_t x215 = 24;
	volatile int64_t t39 = -268172435685674746LL;

	t39 = ((x213/x214)^(x215*x216));

	if (t39 != -338077536LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x219 = 5781U;
	uint32_t t40 = 199821U;

	t40 = ((x217/x218)^(x219*x220));

	if (t40 != 4294940309U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x221 = 5U;
	static volatile uint32_t x222 = 210467836U;
	uint32_t x224 = UINT32_MAX;
	uint32_t t41 = 99U;

	t41 = ((x221/x222)^(x223*x224));

	if (t41 != 4294967285U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x225 = -1LL;
	volatile uint32_t x226 = UINT32_MAX;
	int8_t x227 = -1;
	static volatile uint8_t x228 = 41U;
	volatile int64_t t42 = -7664166517LL;

	t42 = ((x225/x226)^(x227*x228));

	if (t42 != -41LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x237 = INT32_MAX;
	int16_t x238 = INT16_MIN;
	uint64_t x239 = 10438504647LLU;
	static uint64_t t43 = 153329925LLU;

	t43 = ((x237/x238)^(x239*x240));

	if (t43 != 17378033485550903436LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x241 = 26U;
	volatile int64_t x242 = INT64_MIN;
	static uint8_t x244 = 1U;
	static volatile int64_t t44 = 74238LL;

	t44 = ((x241/x242)^(x243*x244));

	if (t44 != 438753LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x245 = 57522649LLU;
	int16_t x246 = -1;
	uint16_t x248 = UINT16_MAX;
	volatile uint64_t t45 = 170784LLU;

	t45 = ((x245/x246)^(x247*x248));

	if (t45 != 7528922940LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x257 = -607;
	uint16_t x258 = 746U;
	int8_t x259 = 0;
	int8_t x260 = INT8_MAX;

	t46 = ((x257/x258)^(x259*x260));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x261 = -1LL;
	int16_t x262 = INT16_MIN;
	static int8_t x263 = -1;
	static int16_t x264 = -171;
	static volatile int64_t t47 = -334541LL;

	t47 = ((x261/x262)^(x263*x264));

	if (t47 != 171LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x265 = 105U;
	int64_t x266 = -1LL;
	int8_t x267 = INT8_MIN;
	static int16_t x268 = INT16_MIN;
	int64_t t48 = 7178860156621923LL;

	t48 = ((x265/x266)^(x267*x268));

	if (t48 != -4194409LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x271 = INT8_MIN;
	uint16_t x272 = 3U;
	int64_t t49 = -43827LL;

	t49 = ((x269/x270)^(x271*x272));

	if (t49 != -517LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x273 = 77475U;
	static int64_t x275 = -1LL;

	t50 = ((x273/x274)^(x275*x276));

	if (t50 != -255LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x278 = INT16_MIN;
	static int8_t x279 = INT8_MIN;
	static volatile uint16_t x280 = 96U;
	static uint32_t t51 = 4U;

	t51 = ((x277/x278)^(x279*x280));

	if (t51 != 4294955008U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x281 = UINT16_MAX;
	static int8_t x282 = -50;
	static int64_t x283 = 1LL;
	static uint8_t x284 = UINT8_MAX;

	t52 = ((x281/x282)^(x283*x284));

	if (t52 != -1507LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x285 = INT64_MIN;
	volatile int64_t x286 = 397488828521833LL;
	int32_t x287 = INT32_MAX;
	uint64_t x288 = UINT64_MAX;
	uint64_t t53 = 3547387723LLU;

	t53 = ((x285/x286)^(x287*x288));

	if (t53 != 2147460445LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x291 = INT16_MIN;
	volatile uint64_t t54 = 115721287312581365LLU;

	t54 = ((x289/x290)^(x291*x292));

	if (t54 != 1073741824LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = INT64_MAX;
	int16_t x294 = -6;
	uint64_t x295 = 1553827095LLU;
	uint64_t t55 = 4242LLU;

	t55 = ((x293/x294)^(x295*x296));

	if (t55 != 16909514801947365809LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x305 = UINT16_MAX;
	uint8_t x307 = 28U;
	int16_t x308 = -1;
	int32_t t56 = -15035;

	t56 = ((x305/x306)^(x307*x308));

	if (t56 != -28) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x309 = 285039851;
	uint32_t x310 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	volatile uint32_t t57 = 418697872U;

	t57 = ((x309/x310)^(x311*x312));

	if (t57 != 4286611456U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x317 = INT16_MIN;
	uint8_t x318 = UINT8_MAX;
	volatile int16_t x319 = -7;
	uint32_t x320 = UINT32_MAX;
	volatile uint32_t t58 = 133879297U;

	t58 = ((x317/x318)^(x319*x320));

	if (t58 != 4294967175U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = -1;
	int16_t x322 = INT16_MAX;
	static int64_t x323 = 16551199LL;
	static uint16_t x324 = UINT16_MAX;
	static int64_t t59 = -425443417830837LL;

	t59 = ((x321/x322)^(x323*x324));

	if (t59 != 1084682826465LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x326 = -1;
	int16_t x327 = -1;
	volatile int32_t t60 = -28;

	t60 = ((x325/x326)^(x327*x328));

	if (t60 != -2147483585) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x329 = INT8_MAX;
	volatile uint32_t x330 = 152188U;
	static uint32_t x331 = 5245U;
	volatile uint32_t t61 = 1984U;

	t61 = ((x329/x330)^(x331*x332));

	if (t61 != 4294872886U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x333 = 1U;
	volatile int32_t x334 = 64706794;
	static volatile uint32_t t62 = 1997449009U;

	t62 = ((x333/x334)^(x335*x336));

	if (t62 != 4294853088U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x337 = UINT8_MAX;
	static volatile int32_t x338 = INT32_MIN;
	uint8_t x339 = 29U;
	uint32_t x340 = 190284U;
	volatile uint32_t t63 = 28914U;

	t63 = ((x337/x338)^(x339*x340));

	if (t63 != 5518236U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x341 = 2;
	int32_t x342 = 3413919;
	uint32_t x344 = UINT32_MAX;
	static volatile uint64_t t64 = 883260537928LLU;

	t64 = ((x341/x342)^(x343*x344));

	if (t64 != 4500331083195980983LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x353 = 6056224222LL;
	volatile uint16_t x354 = 30U;
	volatile int16_t x355 = INT16_MIN;
	static volatile int32_t x356 = -1;
	volatile int64_t t65 = 2309614790730LL;

	t65 = ((x353/x354)^(x355*x356));

	if (t65 != 201906908LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x358 = 5578243905LLU;
	volatile uint64_t x359 = UINT64_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	static volatile uint64_t t66 = 4761LLU;

	t66 = ((x357/x358)^(x359*x360));

	if (t66 != 18446744070402632871LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MAX;
	uint8_t x363 = UINT8_MAX;
	int8_t x364 = INT8_MIN;
	volatile int32_t t67 = 284979466;

	t67 = ((x361/x362)^(x363*x364));

	if (t67 != 32639) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x365 = -1LL;
	int64_t x366 = INT64_MIN;
	int64_t x367 = -1LL;
	uint8_t x368 = UINT8_MAX;
	volatile int64_t t68 = -60618215479LL;

	t68 = ((x365/x366)^(x367*x368));

	if (t68 != -255LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x369 = -128LL;
	int64_t x371 = -65827LL;
	int16_t x372 = 1;
	volatile int64_t t69 = -484650805105492588LL;

	t69 = ((x369/x370)^(x371*x372));

	if (t69 != 65825LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x373 = INT32_MIN;
	static uint16_t x374 = 14926U;
	static volatile int64_t x375 = -1LL;
	static int16_t x376 = INT16_MIN;
	volatile int64_t t70 = 1457486LL;

	t70 = ((x373/x374)^(x375*x376));

	if (t70 != -176643LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x377 = 1U;
	int8_t x378 = -1;
	int32_t x379 = 1;
	uint32_t x380 = 97U;
	volatile uint32_t t71 = 635338U;

	t71 = ((x377/x378)^(x379*x380));

	if (t71 != 4294967198U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x382 = -1;
	int8_t x383 = 10;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t72 = 7756729109271043LLU;

	t72 = ((x381/x382)^(x383*x384));

	if (t72 != 953LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x385 = 2U;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = -18;
	uint32_t t73 = 16387U;

	t73 = ((x385/x386)^(x387*x388));

	if (t73 != 18U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x397 = -4;
	volatile int8_t x398 = INT8_MIN;
	static uint16_t x400 = UINT16_MAX;
	volatile int32_t t74 = 17;

	t74 = ((x397/x398)^(x399*x400));

	if (t74 != -196605) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x405 = -1;
	static volatile int32_t x407 = INT32_MAX;
	uint32_t x408 = UINT32_MAX;
	uint32_t t75 = 9U;

	t75 = ((x405/x406)^(x407*x408));

	if (t75 != 2147483648U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x411 = 52U;
	int8_t x412 = INT8_MIN;
	volatile uint32_t t76 = 192098U;

	t76 = ((x409/x410)^(x411*x412));

	if (t76 != 4294961010U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x413 = 12678U;
	int32_t x414 = -132662861;
	int8_t x415 = -22;
	int8_t x416 = -1;
	static int32_t t77 = -47;

	t77 = ((x413/x414)^(x415*x416));

	if (t77 != 22) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x417 = 1;
	static int8_t x419 = 2;

	t78 = ((x417/x418)^(x419*x420));

	if (t78 != 206U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MAX;
	int8_t x427 = INT8_MAX;
	int16_t x428 = -1;
	volatile int64_t t79 = 169017516894236LL;

	t79 = ((x425/x426)^(x427*x428));

	if (t79 != 126LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x429 = INT64_MIN;
	uint32_t x430 = 696971876U;
	static volatile int64_t x432 = -1LL;
	static int64_t t80 = -104181157LL;

	t80 = ((x429/x430)^(x431*x432));

	if (t80 != -13233525186LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x433 = INT32_MIN;
	static int64_t x434 = INT64_MIN;
	int64_t x435 = 1163LL;

	t81 = ((x433/x434)^(x435*x436));

	if (t81 != -38109184LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x437 = -3;
	static int16_t x440 = INT16_MIN;
	volatile int32_t t82 = -127343;

	t82 = ((x437/x438)^(x439*x440));

	if (t82 != 1073741824) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x445 = INT8_MIN;
	uint8_t x446 = UINT8_MAX;
	volatile int16_t x447 = INT16_MAX;
	int64_t x448 = -1LL;
	volatile int64_t t83 = -692221643276642779LL;

	t83 = ((x445/x446)^(x447*x448));

	if (t83 != -32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x449 = -1;
	int64_t x450 = -2347961663895601LL;
	uint64_t x451 = 364165882LLU;
	static volatile uint8_t x452 = UINT8_MAX;
	uint64_t t84 = 5353618448188LLU;

	t84 = ((x449/x450)^(x451*x452));

	if (t84 != 92862299910LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x453 = 0U;
	uint16_t x454 = 22U;
	uint64_t x455 = UINT64_MAX;
	static int64_t x456 = INT64_MAX;
	volatile uint64_t t85 = 432747356LLU;

	t85 = ((x453/x454)^(x455*x456));

	if (t85 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x457 = 0;
	uint8_t x458 = UINT8_MAX;
	uint16_t x459 = 17121U;
	int16_t x460 = INT16_MIN;
	int32_t t86 = -47704809;

	t86 = ((x457/x458)^(x459*x460));

	if (t86 != -561020928) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x469 = INT32_MIN;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 3U;

	t87 = ((x469/x470)^(x471*x472));

	if (t87 != 74197) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x473 = 844973247U;
	int8_t x475 = 0;
	volatile uint64_t x476 = UINT64_MAX;
	volatile uint64_t t88 = 167311481LLU;

	t88 = ((x473/x474)^(x475*x476));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x477 = UINT16_MAX;
	int16_t x478 = -5967;
	int32_t x479 = 7495380;
	volatile int32_t t89 = -75775;

	t89 = ((x477/x478)^(x479*x480));

	if (t89 != -951913254) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x481 = UINT32_MAX;
	static uint16_t x482 = UINT16_MAX;
	volatile int64_t x483 = -1LL;
	int32_t x484 = INT32_MAX;
	volatile int64_t t90 = -17299553808LL;

	t90 = ((x481/x482)^(x483*x484));

	if (t90 != -2147418112LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x486 = INT32_MAX;
	static volatile uint64_t x487 = 900308500976LLU;
	static int8_t x488 = INT8_MIN;
	uint64_t t91 = 15064066804LLU;

	t91 = ((x485/x486)^(x487*x488));

	if (t91 != 18446628834221426688LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x491 = -7;
	volatile int64_t x492 = -1LL;
	volatile int64_t t92 = -6253320781LL;

	t92 = ((x489/x490)^(x491*x492));

	if (t92 != 7LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x493 = INT64_MIN;
	static int16_t x495 = 4;
	int16_t x496 = -1;
	int64_t t93 = 2538LL;

	t93 = ((x493/x494)^(x495*x496));

	if (t93 != 140739635871740LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x497 = INT64_MIN;
	int32_t x498 = INT32_MIN;
	int8_t x499 = INT8_MAX;
	static int16_t x500 = INT16_MIN;
	int64_t t94 = 31634515839841LL;

	t94 = ((x497/x498)^(x499*x500));

	if (t94 != -4299128832LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x501 = 25;
	volatile uint16_t x502 = UINT16_MAX;
	int16_t x503 = -1;
	static uint64_t x504 = 975385642292623LLU;
	uint64_t t95 = 4460487895679550763LLU;

	t95 = ((x501/x502)^(x503*x504));

	if (t95 != 18445768688067258993LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x505 = INT32_MAX;
	int32_t x506 = INT32_MIN;
	uint64_t x507 = 97693884822614LLU;
	uint64_t x508 = UINT64_MAX;
	static volatile uint64_t t96 = 635631LLU;

	t96 = ((x505/x506)^(x507*x508));

	if (t96 != 18446646379824729002LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x509 = INT64_MAX;
	volatile int32_t x510 = INT32_MIN;
	int64_t x511 = -169489462839903664LL;
	uint64_t t97 = 25652611306LLU;

	t97 = ((x509/x510)^(x511*x512));

	if (t97 != 12914568351115160817LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x513 = -63;
	volatile uint32_t x514 = 62U;
	int16_t x515 = -1;
	int8_t x516 = INT8_MAX;
	volatile uint32_t t98 = 1U;

	t98 = ((x513/x514)^(x515*x516));

	if (t98 != 4225693632U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x521 = INT16_MAX;
	static int8_t x522 = INT8_MAX;
	uint32_t x524 = UINT32_MAX;
	uint32_t t99 = 700336U;

	t99 = ((x521/x522)^(x523*x524));

	if (t99 != 4294967037U) { NG(); } else { ; }
	
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

