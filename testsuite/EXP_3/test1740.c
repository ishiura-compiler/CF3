#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MIN;
volatile int64_t x15 = INT64_MAX;
int16_t x26 = 16;
uint16_t x38 = 4U;
uint64_t x40 = UINT64_MAX;
volatile uint32_t x41 = 387500504U;
uint8_t x43 = 114U;
static volatile uint8_t x45 = 2U;
volatile int32_t t10 = -1868885;
int64_t x52 = INT64_MIN;
uint32_t t12 = 4613U;
volatile uint16_t x62 = 6U;
int64_t t14 = -26443431984080402LL;
uint16_t x71 = 53U;
volatile int64_t t16 = 0LL;
volatile uint64_t t17 = 762610LLU;
static volatile uint64_t x89 = 304929LLU;
uint64_t x93 = UINT64_MAX;
static int64_t x101 = INT64_MAX;
uint16_t x106 = UINT16_MAX;
int64_t t24 = -6299827973LL;
int64_t x113 = -1LL;
static volatile int16_t x114 = INT16_MIN;
static int8_t x115 = INT8_MIN;
static uint64_t x119 = 96676546542396LLU;
volatile uint64_t t26 = 215561LLU;
int16_t x122 = -6355;
static int16_t x139 = -5773;
uint64_t x151 = 762646254796553LLU;
volatile int64_t t34 = 18626122710186LL;
uint32_t x171 = 770951745U;
uint32_t t38 = 1247766986U;
volatile int32_t t40 = 25;
static int8_t x193 = INT8_MAX;
volatile uint32_t x196 = 435U;
int64_t t43 = -1454268540836284LL;
static int16_t x205 = -1;
int64_t x214 = INT64_MIN;
static volatile int64_t t47 = 6172697572LL;
volatile int8_t x221 = -1;
int8_t x224 = INT8_MAX;
int64_t t50 = 31838947474062624LL;
static uint16_t x231 = UINT16_MAX;
int16_t x243 = INT16_MAX;
static uint64_t x260 = UINT64_MAX;
uint32_t x263 = 8201741U;
static int64_t x264 = -1LL;
volatile uint8_t x267 = 99U;
int16_t x270 = INT16_MAX;
volatile int32_t t61 = -104055395;
volatile int32_t x274 = -1;
static uint64_t x276 = UINT64_MAX;
uint64_t x278 = UINT64_MAX;
int16_t x280 = INT16_MIN;
int16_t x281 = -627;
int16_t x290 = INT16_MIN;
static int32_t x291 = INT32_MIN;
volatile int64_t x298 = -111691LL;
static int32_t x301 = -57568;
int8_t x302 = INT8_MIN;
volatile uint16_t x310 = UINT16_MAX;
uint8_t x311 = 0U;
int32_t x312 = INT32_MIN;
int16_t x313 = -256;
uint8_t x315 = 126U;
volatile int16_t x318 = -163;
static volatile int8_t x324 = INT8_MIN;
int8_t x336 = INT8_MAX;
static int32_t x339 = -35557;
volatile uint32_t t78 = 20832U;
int64_t x347 = -50723560LL;
int32_t x353 = -22117;
int64_t x354 = INT64_MIN;
static uint16_t x356 = 72U;
int64_t x361 = 6880LL;
uint8_t x362 = 8U;
static uint16_t x371 = 0U;
uint64_t t87 = 7158140941331LLU;
uint64_t x380 = 3732LLU;
static int32_t x384 = -2;
uint64_t t90 = 3803127587498506LLU;
int16_t x396 = INT16_MIN;
int8_t x397 = -1;
uint64_t t92 = 290072380LLU;
int64_t x401 = -1LL;
int8_t x402 = INT8_MAX;
volatile int32_t x407 = -197095383;
volatile int64_t x413 = INT64_MIN;
static int8_t x418 = INT8_MAX;
int8_t x423 = 3;
int64_t x425 = 64250046806405LL;
int32_t x430 = INT32_MIN;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int8_t x2 = -1;
	uint32_t x4 = 5093908U;
	uint32_t t0 = 10U;

	t0 = ((x1/x2)&(x3&x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = INT32_MIN;
	volatile int8_t x7 = INT8_MIN;
	volatile int32_t x8 = -1072624447;
	volatile int32_t t1 = -6321;

	t1 = ((x5/x6)&(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	uint16_t x14 = UINT16_MAX;
	static int8_t x16 = -6;
	int64_t t2 = 18596177743LL;

	t2 = ((x13/x14)&(x15&x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 2U;
	static int16_t x18 = 507;
	int64_t x19 = 536364817602449441LL;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t3 = 3049LLU;

	t3 = ((x17/x18)&(x19&x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int16_t x22 = 16300;
	uint32_t x23 = UINT32_MAX;
	volatile int64_t x24 = INT64_MAX;
	volatile int64_t t4 = 37239998586LL;

	t4 = ((x21/x22)&(x23&x24));

	if (t4 != 4LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -541;
	int16_t x27 = -1;
	int32_t x28 = 4;
	volatile int32_t t5 = -6237338;

	t5 = ((x25/x26)&(x27&x28));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	int64_t x30 = -1LL;
	int16_t x31 = 231;
	int64_t x32 = INT64_MIN;
	int64_t t6 = 686683549LL;

	t6 = ((x29/x30)&(x31&x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	static int64_t x34 = INT64_MIN;
	volatile int64_t x35 = INT64_MAX;
	int64_t x36 = INT64_MIN;
	static int64_t t7 = 12529060678550043LL;

	t7 = ((x33/x34)&(x35&x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -1;
	uint32_t x39 = 209543U;
	uint64_t t8 = 88577655233733LLU;

	t8 = ((x37/x38)&(x39&x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x42 = 7874;
	uint32_t x44 = UINT32_MAX;
	uint32_t t9 = 4619U;

	t9 = ((x41/x42)&(x43&x44));

	if (t9 != 48U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = 73252471;
	static int16_t x47 = 1;
	uint16_t x48 = UINT16_MAX;

	t10 = ((x45/x46)&(x47&x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 2078;
	static int64_t x50 = 7873272492LL;
	static volatile uint16_t x51 = 11U;
	static volatile int64_t t11 = -38LL;

	t11 = ((x49/x50)&(x51&x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MAX;
	static uint32_t x54 = 252U;
	int8_t x55 = -1;
	int8_t x56 = 1;

	t12 = ((x53/x54)&(x55&x56));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -1;
	int16_t x58 = 1;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = 811171235585654LLU;
	volatile uint64_t t13 = 22276LLU;

	t13 = ((x57/x58)&(x59&x60));

	if (t13 != 811171235561472LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	volatile int32_t x63 = INT32_MIN;
	int16_t x64 = INT16_MIN;

	t14 = ((x61/x62)&(x63&x64));

	if (t14 != -1537228673524957184LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int64_t x66 = -5707018916LL;
	int64_t x67 = INT64_MIN;
	volatile int16_t x68 = INT16_MIN;
	int64_t t15 = 8221657859642905LL;

	t15 = ((x65/x66)&(x67&x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 30U;
	int32_t x70 = -1;
	volatile int64_t x72 = INT64_MIN;

	t16 = ((x69/x70)&(x71&x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 6032356LLU;
	int32_t x74 = INT32_MIN;
	static volatile int64_t x75 = -1LL;
	uint64_t x76 = 9966640650LLU;

	t17 = ((x73/x74)&(x75&x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 13963LLU;
	uint32_t x78 = 3590U;
	uint16_t x79 = 2283U;
	static int32_t x80 = 4;
	uint64_t t18 = 2884145144290905879LLU;

	t18 = ((x77/x78)&(x79&x80));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	static int32_t x82 = INT32_MIN;
	volatile int8_t x83 = -1;
	int16_t x84 = INT16_MIN;
	volatile int32_t t19 = -6256;

	t19 = ((x81/x82)&(x83&x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = INT32_MAX;
	int64_t x91 = 125030LL;
	uint16_t x92 = UINT16_MAX;
	volatile uint64_t t20 = 3394749433LLU;

	t20 = ((x89/x90)&(x91&x92));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = -1;
	static uint8_t x95 = 124U;
	int16_t x96 = INT16_MIN;
	static uint64_t t21 = 56945398399LLU;

	t21 = ((x93/x94)&(x95&x96));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MAX;
	uint16_t x100 = 11021U;
	int64_t t22 = 15989673LL;

	t22 = ((x97/x98)&(x99&x100));

	if (t22 != 11016LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x102 = -3;
	uint64_t x103 = 112363LLU;
	uint8_t x104 = 47U;
	volatile uint64_t t23 = 1432019913435222022LLU;

	t23 = ((x101/x102)&(x103&x104));

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MAX;
	uint8_t x107 = 6U;
	int16_t x108 = INT16_MIN;

	t24 = ((x105/x106)&(x107&x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x116 = INT16_MIN;
	int64_t t25 = 98919929234452677LL;

	t25 = ((x113/x114)&(x115&x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x118 = INT64_MIN;
	volatile int64_t x120 = -56046911884LL;

	t26 = ((x117/x118)&(x119&x120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	static uint16_t x123 = 1U;
	uint64_t x124 = 3524715244626LLU;
	uint64_t t27 = 7539266LLU;

	t27 = ((x121/x122)&(x123&x124));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MAX;
	int8_t x126 = 9;
	int64_t x127 = INT64_MAX;
	static int32_t x128 = -1;
	volatile int64_t t28 = -3408192LL;

	t28 = ((x125/x126)&(x127&x128));

	if (t28 != 3640LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = 359;
	int64_t x130 = -1LL;
	uint16_t x131 = 0U;
	static int8_t x132 = -1;
	volatile int64_t t29 = 13435096LL;

	t29 = ((x129/x130)&(x131&x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;
	static int64_t x135 = INT64_MIN;
	static int8_t x136 = INT8_MIN;
	volatile int64_t t30 = -2042314LL;

	t30 = ((x133/x134)&(x135&x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -4;
	int32_t x138 = -564856092;
	int32_t x140 = INT32_MIN;
	volatile int32_t t31 = -1306;

	t31 = ((x137/x138)&(x139&x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 22U;
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = 2141644440U;
	volatile int64_t x144 = INT64_MAX;
	volatile int64_t t32 = 1043219347LL;

	t32 = ((x141/x142)&(x143&x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	int16_t x152 = -2;
	volatile uint64_t t33 = 24918LLU;

	t33 = ((x149/x150)&(x151&x152));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x153 = UINT8_MAX;
	static volatile int32_t x154 = -1;
	int64_t x155 = -1LL;
	uint32_t x156 = 62559U;

	t34 = ((x153/x154)&(x155&x156));

	if (t34 != 62465LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = -931;
	int8_t x158 = INT8_MIN;
	int64_t x159 = -284LL;
	int32_t x160 = INT32_MAX;
	static int64_t t35 = -132899061259647855LL;

	t35 = ((x157/x158)&(x159&x160));

	if (t35 != 4LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = 235;
	uint8_t x162 = UINT8_MAX;
	static int16_t x163 = 3186;
	volatile int64_t x164 = INT64_MAX;
	int64_t t36 = -429LL;

	t36 = ((x161/x162)&(x163&x164));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = 589;
	uint16_t x166 = 14U;
	static int16_t x167 = INT16_MIN;
	int16_t x168 = -8;
	volatile int32_t t37 = 2;

	t37 = ((x165/x166)&(x167&x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 4U;
	int32_t x170 = -7;
	int8_t x172 = INT8_MAX;

	t38 = ((x169/x170)&(x171&x172));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x174 = -102414749;
	volatile int32_t x175 = 43866947;
	int8_t x176 = -15;
	static uint64_t t39 = 227LLU;

	t39 = ((x173/x174)&(x175&x176));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -30;
	int8_t x178 = 11;
	volatile int8_t x179 = -2;
	int8_t x180 = INT8_MIN;

	t40 = ((x177/x178)&(x179&x180));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = -1;
	uint8_t x182 = 103U;
	uint8_t x183 = 34U;
	volatile uint8_t x184 = 44U;
	int32_t t41 = -135355;

	t41 = ((x181/x182)&(x183&x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x189 = -1;
	int16_t x190 = -1;
	uint32_t x191 = 24284U;
	static uint64_t x192 = UINT64_MAX;
	static volatile uint64_t t42 = 3363939LLU;

	t42 = ((x189/x190)&(x191&x192));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = -1;
	volatile int64_t x195 = -71984LL;

	t43 = ((x193/x194)&(x195&x196));

	if (t43 != 128LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = INT32_MAX;
	int32_t x202 = INT32_MAX;
	int16_t x203 = -11812;
	int32_t x204 = 270;
	int32_t t44 = -204186;

	t44 = ((x201/x202)&(x203&x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x206 = -51392867LL;
	static volatile int64_t x207 = INT64_MIN;
	int64_t x208 = -1LL;
	int64_t t45 = 20328791832193LL;

	t45 = ((x205/x206)&(x207&x208));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x209 = INT32_MIN;
	int64_t x210 = -7483970LL;
	uint16_t x211 = 1391U;
	int8_t x212 = INT8_MIN;
	volatile int64_t t46 = -118272424537917LL;

	t46 = ((x209/x210)&(x211&x212));

	if (t46 != 256LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x213 = INT8_MIN;
	int16_t x215 = -1;
	uint8_t x216 = UINT8_MAX;

	t47 = ((x213/x214)&(x215&x216));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x217 = 27540729;
	int16_t x218 = INT16_MAX;
	volatile int32_t x219 = INT32_MAX;
	uint32_t x220 = UINT32_MAX;
	uint32_t t48 = 22500195U;

	t48 = ((x217/x218)&(x219&x220));

	if (t48 != 840U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x222 = -1;
	int16_t x223 = INT16_MIN;
	int32_t t49 = 2;

	t49 = ((x221/x222)&(x223&x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MIN;
	volatile int64_t x227 = 254LL;
	int64_t x228 = INT64_MIN;

	t50 = ((x225/x226)&(x227&x228));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MIN;
	int64_t x230 = -236058215924LL;
	int8_t x232 = 20;
	int64_t t51 = 6569058659LL;

	t51 = ((x229/x230)&(x231&x232));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = -1;
	static int64_t x234 = -1LL;
	int16_t x235 = INT16_MIN;
	uint32_t x236 = UINT32_MAX;
	static volatile int64_t t52 = -4314803303830477LL;

	t52 = ((x233/x234)&(x235&x236));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x237 = INT16_MAX;
	static int16_t x238 = 565;
	int64_t x239 = INT64_MIN;
	volatile int32_t x240 = INT32_MIN;
	int64_t t53 = 11718LL;

	t53 = ((x237/x238)&(x239&x240));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = 6397659U;
	int8_t x244 = 0;
	volatile uint32_t t54 = 7990U;

	t54 = ((x241/x242)&(x243&x244));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MAX;
	static int8_t x247 = INT8_MIN;
	volatile uint64_t x248 = 88043900LLU;
	static uint64_t t55 = 3159467264422171922LLU;

	t55 = ((x245/x246)&(x247&x248));

	if (t55 != 256LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x249 = INT32_MIN;
	uint16_t x250 = UINT16_MAX;
	static volatile uint64_t x251 = 44758734968400LLU;
	uint32_t x252 = UINT32_MAX;
	volatile uint64_t t56 = 6363294813399329LLU;

	t56 = ((x249/x250)&(x251&x252));

	if (t56 != 880771072LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = INT64_MIN;
	uint8_t x254 = 1U;
	static volatile int16_t x255 = 12320;
	volatile int8_t x256 = INT8_MIN;
	int64_t t57 = -2193105813LL;

	t57 = ((x253/x254)&(x255&x256));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x257 = INT32_MAX;
	uint8_t x258 = 12U;
	int8_t x259 = INT8_MAX;
	volatile uint64_t t58 = 0LLU;

	t58 = ((x257/x258)&(x259&x260));

	if (t58 != 42LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x261 = 160621631105970LL;
	int32_t x262 = INT32_MAX;
	int64_t t59 = -1005384513157LL;

	t59 = ((x261/x262)&(x263&x264));

	if (t59 != 74761LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = 428683872869038LLU;
	volatile uint8_t x268 = UINT8_MAX;
	uint64_t t60 = 19319254818LLU;

	t60 = ((x265/x266)&(x267&x268));

	if (t60 != 3LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -6;
	int8_t x271 = INT8_MAX;
	static int16_t x272 = -1;

	t61 = ((x269/x270)&(x271&x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = INT32_MAX;
	uint16_t x275 = UINT16_MAX;
	uint64_t t62 = 18914131LLU;

	t62 = ((x273/x274)&(x275&x276));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x277 = 1569U;
	int64_t x279 = INT64_MIN;
	uint64_t t63 = 246670332LLU;

	t63 = ((x277/x278)&(x279&x280));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = -1;
	int32_t x284 = 14304;
	int32_t t64 = 3432;

	t64 = ((x281/x282)&(x283&x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x285 = -2;
	static volatile int64_t x286 = INT64_MIN;
	int16_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile int64_t t65 = 74LL;

	t65 = ((x285/x286)&(x287&x288));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x289 = UINT32_MAX;
	uint8_t x292 = UINT8_MAX;
	uint32_t t66 = 4585U;

	t66 = ((x289/x290)&(x291&x292));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = INT64_MIN;
	volatile int16_t x294 = 3444;
	volatile uint64_t x295 = UINT64_MAX;
	static int32_t x296 = -1;
	uint64_t t67 = 1LLU;

	t67 = ((x293/x294)&(x295&x296));

	if (t67 != 18444065974976434666LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = INT32_MIN;
	uint32_t x299 = 1037801U;
	int32_t x300 = INT32_MAX;
	int64_t t68 = 51063509LL;

	t68 = ((x297/x298)&(x299&x300));

	if (t68 != 16649LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x303 = 3359505505383315LL;
	static int32_t x304 = INT32_MAX;
	int64_t t69 = -38255637207926LL;

	t69 = ((x301/x302)&(x303&x304));

	if (t69 != 385LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x305 = UINT16_MAX;
	int16_t x306 = 293;
	uint8_t x307 = 47U;
	uint64_t x308 = UINT64_MAX;
	uint64_t t70 = 15062198654689069LLU;

	t70 = ((x305/x306)&(x307&x308));

	if (t70 != 15LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x309 = INT8_MIN;
	int32_t t71 = -3056393;

	t71 = ((x309/x310)&(x311&x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x314 = -1LL;
	int64_t x316 = INT64_MIN;
	volatile int64_t t72 = -1790LL;

	t72 = ((x313/x314)&(x315&x316));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x317 = INT8_MIN;
	int16_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	static volatile int32_t t73 = 46003612;

	t73 = ((x317/x318)&(x319&x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = 130563772286420LLU;
	int64_t x322 = -2787511346993047LL;
	int8_t x323 = 0;
	volatile uint64_t t74 = 8924236839322LLU;

	t74 = ((x321/x322)&(x323&x324));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x325 = 6;
	volatile int64_t x326 = 1560147327LL;
	volatile int16_t x327 = 113;
	volatile int32_t x328 = -62;
	int64_t t75 = 429992199470229LL;

	t75 = ((x325/x326)&(x327&x328));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = -1459;
	int64_t x330 = INT64_MIN;
	int8_t x331 = -27;
	static volatile int8_t x332 = 4;
	static int64_t t76 = 4418610LL;

	t76 = ((x329/x330)&(x331&x332));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = -1;
	int8_t x334 = -3;
	static volatile uint64_t x335 = UINT64_MAX;
	volatile uint64_t t77 = 6790401LLU;

	t77 = ((x333/x334)&(x335&x336));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x337 = UINT32_MAX;
	volatile int8_t x338 = INT8_MAX;
	static uint8_t x340 = UINT8_MAX;

	t78 = ((x337/x338)&(x339&x340));

	if (t78 != 16U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x341 = 2710549U;
	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	volatile int16_t x344 = INT16_MIN;
	volatile uint32_t t79 = 4U;

	t79 = ((x341/x342)&(x343&x344));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MIN;
	int8_t x348 = -1;
	int64_t t80 = 835979798743746LL;

	t80 = ((x345/x346)&(x347&x348));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x349 = INT16_MIN;
	static int64_t x350 = 1LL;
	uint16_t x351 = 90U;
	static int32_t x352 = -1;
	int64_t t81 = -20264LL;

	t81 = ((x349/x350)&(x351&x352));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x355 = INT32_MIN;
	static volatile int64_t t82 = -530929385LL;

	t82 = ((x353/x354)&(x355&x356));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x357 = 55899;
	int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MAX;
	static int64_t t83 = 323446LL;

	t83 = ((x357/x358)&(x359&x360));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x363 = -1;
	int32_t x364 = INT32_MAX;
	volatile int64_t t84 = -25LL;

	t84 = ((x361/x362)&(x363&x364));

	if (t84 != 860LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = -1LL;
	int32_t x366 = -1;
	int16_t x367 = 228;
	int16_t x368 = 0;
	volatile int64_t t85 = -9699187LL;

	t85 = ((x365/x366)&(x367&x368));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x369 = UINT32_MAX;
	int16_t x370 = -1;
	int16_t x372 = INT16_MAX;
	uint32_t t86 = 4015U;

	t86 = ((x369/x370)&(x371&x372));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x373 = 4397601U;
	uint32_t x374 = 2U;
	volatile uint64_t x375 = 10085260449LLU;
	static int16_t x376 = INT16_MIN;

	t87 = ((x373/x374)&(x375&x376));

	if (t87 != 2129920LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = -1;
	static int8_t x378 = -1;
	static uint32_t x379 = 29885U;
	volatile uint64_t t88 = 8443688LLU;

	t88 = ((x377/x378)&(x379&x380));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x381 = INT32_MAX;
	uint64_t x382 = 3246750414451538058LLU;
	static volatile int32_t x383 = 471796;
	volatile uint64_t t89 = 1523440857LLU;

	t89 = ((x381/x382)&(x383&x384));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = INT8_MIN;
	static uint64_t x390 = 533136125980109708LLU;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MIN;

	t90 = ((x389/x390)&(x391&x392));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x393 = UINT32_MAX;
	int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MAX;
	int64_t t91 = 517187LL;

	t91 = ((x393/x394)&(x395&x396));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x398 = 15U;
	volatile uint64_t x399 = 3472833LLU;
	int16_t x400 = INT16_MAX;

	t92 = ((x397/x398)&(x399&x400));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x403 = 23;
	int8_t x404 = -27;
	int64_t t93 = -66266821117274LL;

	t93 = ((x401/x402)&(x403&x404));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = 184834382291642294LL;
	int64_t x406 = INT64_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t94 = 62274LLU;

	t94 = ((x405/x406)&(x407&x408));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x414 = 1;
	volatile int32_t x415 = INT32_MAX;
	volatile int64_t x416 = INT64_MIN;
	int64_t t95 = 502910756566215LL;

	t95 = ((x413/x414)&(x415&x416));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x417 = UINT16_MAX;
	uint32_t x419 = 3U;
	uint16_t x420 = UINT16_MAX;
	volatile uint32_t t96 = 10702U;

	t96 = ((x417/x418)&(x419&x420));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x421 = -1;
	volatile uint32_t x422 = 219U;
	static int8_t x424 = INT8_MIN;
	static uint32_t t97 = 8544322U;

	t97 = ((x421/x422)&(x423&x424));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x426 = 987LLU;
	static volatile uint8_t x427 = 14U;
	int16_t x428 = -105;
	uint64_t t98 = 412292528LLU;

	t98 = ((x425/x426)&(x427&x428));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = INT32_MIN;
	static uint8_t x431 = 1U;
	int16_t x432 = INT16_MAX;
	volatile int32_t t99 = 6511998;

	t99 = ((x429/x430)&(x431&x432));

	if (t99 != 1) { NG(); } else { ; }
	
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

