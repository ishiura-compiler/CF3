#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 3755LLU;
int32_t x8 = INT32_MIN;
volatile uint8_t x13 = UINT8_MAX;
static volatile uint64_t x18 = UINT64_MAX;
static volatile uint8_t x19 = 6U;
uint64_t x31 = 365804LLU;
volatile uint64_t x44 = UINT64_MAX;
int32_t x47 = -1;
volatile int32_t t8 = -3809556;
volatile int16_t x51 = -4;
int8_t x57 = INT8_MIN;
static uint64_t x60 = 6576LLU;
int64_t x61 = INT64_MIN;
int8_t x62 = INT8_MIN;
uint64_t x75 = UINT64_MAX;
volatile int8_t x76 = INT8_MAX;
volatile int16_t x78 = -1;
volatile int64_t t17 = -1339655105LL;
uint8_t x101 = 36U;
static int8_t x108 = INT8_MIN;
static volatile uint32_t t19 = 29280986U;
static int64_t x112 = INT64_MIN;
static int32_t x119 = -733774;
uint64_t x125 = 4649998267LLU;
static volatile int32_t x127 = INT32_MIN;
int32_t x128 = INT32_MIN;
int16_t x130 = 4;
uint64_t x132 = UINT64_MAX;
volatile int32_t x150 = -106532;
volatile int64_t t27 = -7712LL;
static int64_t x166 = INT64_MIN;
uint16_t x167 = UINT16_MAX;
int16_t x181 = -1;
uint16_t x182 = UINT16_MAX;
int32_t x192 = INT32_MAX;
int32_t x195 = INT32_MIN;
int16_t x204 = -1;
int16_t x205 = INT16_MIN;
static int16_t x206 = INT16_MIN;
volatile uint8_t x208 = UINT8_MAX;
volatile uint16_t x223 = UINT16_MAX;
volatile int32_t x234 = 517278;
static volatile int32_t t45 = 279197155;
int64_t x238 = 207312407583757186LL;
int16_t x241 = INT16_MAX;
static uint16_t x244 = 119U;
static volatile uint32_t x252 = 202U;
volatile int64_t t49 = -72087836062952973LL;
uint16_t x259 = 906U;
static volatile int8_t x263 = 6;
int8_t x269 = -1;
static int64_t t52 = 2214394868LL;
static int64_t t54 = -1900LL;
int32_t x316 = INT32_MAX;
int64_t x318 = INT64_MIN;
volatile uint16_t x321 = UINT16_MAX;
static uint64_t x324 = UINT64_MAX;
int32_t x327 = INT32_MAX;
int64_t x331 = -69354LL;
int64_t t63 = -11LL;
volatile int64_t t66 = -257LL;
static int32_t x357 = INT32_MIN;
uint32_t x359 = UINT32_MAX;
volatile int16_t x360 = -1;
int16_t x382 = -1;
uint64_t x395 = 77800327695083LLU;
volatile int32_t x397 = -1;
uint32_t x399 = 4137354U;
volatile uint32_t t76 = 43U;
uint64_t x404 = 31426LLU;
int8_t x407 = INT8_MAX;
int8_t x410 = 1;
static uint32_t x412 = UINT32_MAX;
int64_t x424 = -1LL;
volatile int64_t t81 = 2072988260488160325LL;
int64_t x427 = 2595772268110LL;
static volatile int32_t t83 = 807113894;
int64_t x450 = INT64_MIN;
int32_t x454 = INT32_MAX;
static uint8_t x455 = UINT8_MAX;
int16_t x458 = INT16_MAX;
uint64_t t86 = 125592LLU;
int64_t x470 = -297LL;
int32_t x471 = INT32_MAX;
uint32_t x475 = UINT32_MAX;
volatile int32_t x478 = -33;
volatile int32_t x496 = -1;
volatile uint32_t x498 = 139U;
volatile int64_t x499 = -1LL;
static int16_t x502 = -1;
volatile uint32_t x503 = 187U;
static volatile uint32_t x504 = 10U;
static volatile int32_t t97 = -4188709;
uint32_t x513 = UINT32_MAX;
uint64_t x514 = UINT64_MAX;
static int64_t x516 = INT64_MIN;
static int64_t t99 = 20LL;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	static uint32_t x2 = UINT32_MAX;
	int64_t x3 = 3632331043179679LL;
	int32_t x4 = -1;
	static volatile int64_t t0 = 21671009105528LL;

	t0 = ((x1<x2)/(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int64_t x7 = -185548LL;
	int64_t t1 = 284LL;

	t1 = ((x5<x6)/(x7&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static uint8_t x10 = UINT8_MAX;
	int8_t x11 = INT8_MAX;
	volatile int32_t x12 = 1;
	int32_t t2 = 14397944;

	t2 = ((x9<x10)/(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	int16_t x15 = -1515;
	static int64_t x16 = -1LL;
	int64_t t3 = 18370597LL;

	t3 = ((x13<x14)/(x15&x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	static int32_t x20 = -1661547;
	static int32_t t4 = -6253065;

	t4 = ((x17<x18)/(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = -1LL;
	uint32_t x32 = UINT32_MAX;
	static volatile uint64_t t5 = 379LLU;

	t5 = ((x29<x30)/(x31&x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = UINT64_MAX;
	uint32_t x39 = UINT32_MAX;
	int64_t x40 = -95560672831LL;
	volatile int64_t t6 = -3161585712LL;

	t6 = ((x37<x38)/(x39&x40));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = INT32_MIN;
	volatile int8_t x42 = -3;
	int32_t x43 = 838;
	static volatile uint64_t t7 = 680LLU;

	t7 = ((x41<x42)/(x43&x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x45 = INT32_MAX;
	static uint32_t x46 = 144198382U;
	static uint16_t x48 = UINT16_MAX;

	t8 = ((x45<x46)/(x47&x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x49 = 1773686777U;
	static volatile int8_t x50 = -5;
	uint16_t x52 = 15578U;
	int32_t t9 = 219;

	t9 = ((x49<x50)/(x51&x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x58 = INT64_MAX;
	static volatile int16_t x59 = -12;
	uint64_t t10 = 25017LLU;

	t10 = ((x57<x58)/(x59&x60));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x63 = 20U;
	static int16_t x64 = 61;
	volatile int32_t t11 = -6271430;

	t11 = ((x61<x62)/(x63&x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = 29475079345500929LL;
	int32_t x66 = -4;
	volatile uint32_t x67 = UINT32_MAX;
	uint8_t x68 = UINT8_MAX;
	static volatile uint32_t t12 = 19256253U;

	t12 = ((x65<x66)/(x67&x68));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = -1;
	static int8_t x74 = -1;
	volatile uint64_t t13 = 119687057LLU;

	t13 = ((x73<x74)/(x75&x76));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x77 = UINT16_MAX;
	volatile int8_t x79 = INT8_MIN;
	volatile uint16_t x80 = 496U;
	volatile int32_t t14 = -1004;

	t14 = ((x77<x78)/(x79&x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = INT16_MAX;
	volatile uint16_t x82 = 14U;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = 63361759LLU;
	volatile uint64_t t15 = 61912729822996753LLU;

	t15 = ((x81<x82)/(x83&x84));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x85 = INT64_MIN;
	volatile int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MAX;
	int32_t x88 = -1;
	static volatile int32_t t16 = 1;

	t16 = ((x85<x86)/(x87&x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x93 = 7;
	static int64_t x94 = 88593205LL;
	int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MAX;

	t17 = ((x93<x94)/(x95&x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x102 = UINT8_MAX;
	volatile int8_t x103 = 31;
	volatile int32_t x104 = -1;
	static volatile int32_t t18 = 35;

	t18 = ((x101<x102)/(x103&x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x105 = -6839;
	volatile int8_t x106 = -16;
	uint32_t x107 = 1998098568U;

	t19 = ((x105<x106)/(x107&x108));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = -1;
	volatile int64_t x111 = INT64_MIN;
	int64_t t20 = -336019LL;

	t20 = ((x109<x110)/(x111&x112));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x117 = INT32_MAX;
	int8_t x118 = -1;
	int8_t x120 = -1;
	volatile int32_t t21 = 6737301;

	t21 = ((x117<x118)/(x119&x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x121 = 27U;
	uint64_t x122 = 466611LLU;
	static int32_t x123 = 22053;
	volatile int8_t x124 = -1;
	volatile int32_t t22 = -201760;

	t22 = ((x121<x122)/(x123&x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x126 = INT8_MIN;
	int32_t t23 = 293;

	t23 = ((x125<x126)/(x127&x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = UINT32_MAX;
	static int64_t x131 = INT64_MIN;
	volatile uint64_t t24 = 560889748LLU;

	t24 = ((x129<x130)/(x131&x132));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x133 = 160736175801742838LL;
	static int16_t x134 = INT16_MAX;
	volatile int8_t x135 = 12;
	int8_t x136 = -1;
	int32_t t25 = -190923;

	t25 = ((x133<x134)/(x135&x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x145 = 51;
	static int32_t x146 = INT32_MIN;
	int16_t x147 = 62;
	static uint32_t x148 = UINT32_MAX;
	uint32_t t26 = 13349441U;

	t26 = ((x145<x146)/(x147&x148));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = -1LL;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;

	t27 = ((x149<x150)/(x151&x152));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x153 = UINT16_MAX;
	static uint64_t x154 = UINT64_MAX;
	static int8_t x155 = -1;
	int64_t x156 = -1LL;
	int64_t t28 = -767694800LL;

	t28 = ((x153<x154)/(x155&x156));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = 22688U;
	int8_t x158 = 5;
	int64_t x159 = INT64_MIN;
	int16_t x160 = -1;
	volatile int64_t t29 = -19682LL;

	t29 = ((x157<x158)/(x159&x160));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = 74094530;
	uint8_t x162 = UINT8_MAX;
	static volatile int8_t x163 = INT8_MIN;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t30 = 371477;

	t30 = ((x161<x162)/(x163&x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x165 = INT8_MAX;
	volatile int32_t x168 = 1;
	volatile int32_t t31 = 47743;

	t31 = ((x165<x166)/(x167&x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x173 = INT8_MAX;
	int16_t x174 = -1;
	int16_t x175 = -1;
	volatile uint16_t x176 = UINT16_MAX;
	int32_t t32 = 487543676;

	t32 = ((x173<x174)/(x175&x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x177 = INT16_MIN;
	uint64_t x178 = 3742485453039757991LLU;
	int8_t x179 = -1;
	volatile int32_t x180 = 16024396;
	int32_t t33 = -28;

	t33 = ((x177<x178)/(x179&x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = 3223655018908LL;
	volatile int64_t t34 = -2045404229LL;

	t34 = ((x181<x182)/(x183&x184));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -1LL;
	uint8_t x190 = 13U;
	volatile int32_t x191 = -1;
	int32_t t35 = -3695120;

	t35 = ((x189<x190)/(x191&x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MIN;
	volatile int64_t x196 = INT64_MIN;
	volatile int64_t t36 = 5306690206274LL;

	t36 = ((x193<x194)/(x195&x196));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = -683LL;
	uint8_t x199 = 1U;
	int32_t x200 = INT32_MAX;
	int32_t t37 = -2061259;

	t37 = ((x197<x198)/(x199&x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x201 = UINT8_MAX;
	static volatile int32_t x202 = INT32_MAX;
	volatile uint64_t x203 = 52708478722872853LLU;
	uint64_t t38 = 31808507602LLU;

	t38 = ((x201<x202)/(x203&x204));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x207 = UINT32_MAX;
	uint32_t t39 = 245U;

	t39 = ((x205<x206)/(x207&x208));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x209 = 2620;
	static uint16_t x210 = 31U;
	uint64_t x211 = 20000395973LLU;
	int8_t x212 = -1;
	uint64_t t40 = 3136004232682LLU;

	t40 = ((x209<x210)/(x211&x212));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = INT64_MIN;
	static volatile int32_t x214 = -1;
	int8_t x215 = -43;
	static uint64_t x216 = 1018104405LLU;
	uint64_t t41 = 6240626657896LLU;

	t41 = ((x213<x214)/(x215&x216));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x221 = 17;
	int32_t x222 = INT32_MIN;
	static int16_t x224 = 2572;
	int32_t t42 = -565456;

	t42 = ((x221<x222)/(x223&x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x225 = 2;
	int8_t x226 = 18;
	int8_t x227 = -4;
	int32_t x228 = -1;
	int32_t t43 = -152;

	t43 = ((x225<x226)/(x227&x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x229 = -1LL;
	int32_t x230 = 2648;
	int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t44 = 46494300;

	t44 = ((x229<x230)/(x231&x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x233 = UINT16_MAX;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = INT8_MIN;

	t45 = ((x233<x234)/(x235&x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x237 = INT16_MAX;
	static uint16_t x239 = UINT16_MAX;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t46 = -89724857;

	t46 = ((x237<x238)/(x239&x240));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x242 = -1;
	uint8_t x243 = 115U;
	int32_t t47 = -130074;

	t47 = ((x241<x242)/(x243&x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x249 = 74U;
	static int64_t x250 = 3198514902LL;
	static int8_t x251 = -1;
	volatile uint32_t t48 = 385U;

	t48 = ((x249<x250)/(x251&x252));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x253 = -1;
	uint32_t x254 = 1986742127U;
	int64_t x255 = -139060095309LL;
	int8_t x256 = INT8_MAX;

	t49 = ((x253<x254)/(x255&x256));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x257 = -1;
	volatile int8_t x258 = INT8_MAX;
	int16_t x260 = -154;
	volatile int32_t t50 = 165837;

	t50 = ((x257<x258)/(x259&x260));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x261 = 11LLU;
	int64_t x262 = INT64_MAX;
	static volatile uint8_t x264 = 3U;
	int32_t t51 = 61;

	t51 = ((x261<x262)/(x263&x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MAX;
	int8_t x272 = INT8_MIN;

	t52 = ((x269<x270)/(x271&x272));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x273 = INT64_MAX;
	int32_t x274 = INT32_MAX;
	int16_t x275 = -5935;
	int32_t x276 = -1;
	int32_t t53 = 234220;

	t53 = ((x273<x274)/(x275&x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x277 = -1584310277LL;
	int8_t x278 = INT8_MIN;
	int16_t x279 = 2727;
	int64_t x280 = -272314188424809293LL;

	t54 = ((x277<x278)/(x279&x280));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MIN;
	static volatile int16_t x287 = 50;
	volatile int8_t x288 = -1;
	int32_t t55 = -131442417;

	t55 = ((x285<x286)/(x287&x288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int32_t x302 = INT32_MAX;
	uint8_t x303 = 1U;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t56 = 231040735U;

	t56 = ((x301<x302)/(x303&x304));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x305 = 196878LLU;
	static int32_t x306 = -1;
	int32_t x307 = 30;
	uint64_t x308 = 33547066LLU;
	volatile uint64_t t57 = 717717411314LLU;

	t57 = ((x305<x306)/(x307&x308));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x309 = 26173;
	int8_t x310 = 0;
	int16_t x311 = 49;
	int32_t x312 = 617192;
	volatile int32_t t58 = 261121842;

	t58 = ((x309<x310)/(x311&x312));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x313 = UINT64_MAX;
	volatile uint8_t x314 = 96U;
	static int64_t x315 = 31580863748637LL;
	int64_t t59 = -2829342534LL;

	t59 = ((x313<x314)/(x315&x316));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x317 = -1;
	int64_t x319 = -102455635775LL;
	static int32_t x320 = INT32_MIN;
	int64_t t60 = -527711114280589248LL;

	t60 = ((x317<x318)/(x319&x320));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x322 = UINT64_MAX;
	volatile int16_t x323 = INT16_MIN;
	uint64_t t61 = 0LLU;

	t61 = ((x321<x322)/(x323&x324));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = INT8_MIN;
	static int64_t x326 = INT64_MAX;
	volatile uint64_t x328 = 169397811LLU;
	uint64_t t62 = 304486162643LLU;

	t62 = ((x325<x326)/(x327&x328));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = -44;
	uint16_t x332 = 7U;

	t63 = ((x329<x330)/(x331&x332));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x333 = INT64_MIN;
	int64_t x334 = INT64_MAX;
	static int64_t x335 = INT64_MAX;
	int32_t x336 = INT32_MIN;
	int64_t t64 = -658508LL;

	t64 = ((x333<x334)/(x335&x336));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x337 = UINT64_MAX;
	static int16_t x338 = -858;
	uint32_t x339 = 132U;
	int8_t x340 = INT8_MIN;
	volatile uint32_t t65 = 5767U;

	t65 = ((x337<x338)/(x339&x340));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x345 = INT8_MIN;
	uint8_t x346 = 16U;
	int64_t x347 = INT64_MAX;
	int16_t x348 = INT16_MIN;

	t66 = ((x345<x346)/(x347&x348));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x349 = -3;
	static uint64_t x350 = 4974024065774263LLU;
	static uint16_t x351 = 14U;
	uint16_t x352 = 2124U;
	volatile int32_t t67 = -23289;

	t67 = ((x349<x350)/(x351&x352));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x353 = INT8_MIN;
	uint8_t x354 = 83U;
	int8_t x355 = -1;
	int16_t x356 = -1;
	volatile int32_t t68 = -58553;

	t68 = ((x353<x354)/(x355&x356));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x358 = 11U;
	volatile uint32_t t69 = 1878U;

	t69 = ((x357<x358)/(x359&x360));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x361 = -250502890642894594LL;
	int64_t x362 = 13364893895180031LL;
	int64_t x363 = 582LL;
	volatile uint8_t x364 = UINT8_MAX;
	int64_t t70 = -13755127LL;

	t70 = ((x361<x362)/(x363&x364));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x365 = 10;
	int16_t x366 = -2;
	volatile uint64_t x367 = 43LLU;
	uint16_t x368 = UINT16_MAX;
	uint64_t t71 = 52LLU;

	t71 = ((x365<x366)/(x367&x368));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x373 = -1;
	volatile int16_t x374 = -1;
	volatile int64_t x375 = 258091671924LL;
	int32_t x376 = INT32_MAX;
	volatile int64_t t72 = 83LL;

	t72 = ((x373<x374)/(x375&x376));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x381 = INT64_MAX;
	int64_t x383 = 53315879793638LL;
	volatile uint32_t x384 = 133U;
	int64_t t73 = -8136877308102428LL;

	t73 = ((x381<x382)/(x383&x384));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x389 = -31;
	int32_t x390 = INT32_MAX;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = -1;
	volatile int32_t t74 = 187018;

	t74 = ((x389<x390)/(x391&x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x393 = -3;
	int64_t x394 = 6219251LL;
	static int16_t x396 = INT16_MIN;
	volatile uint64_t t75 = 452580531LLU;

	t75 = ((x393<x394)/(x395&x396));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x398 = 45U;
	uint8_t x400 = 58U;

	t76 = ((x397<x398)/(x399&x400));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MAX;
	static volatile uint16_t x403 = 24040U;
	volatile uint64_t t77 = 88957810465614612LLU;

	t77 = ((x401<x402)/(x403&x404));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x405 = UINT8_MAX;
	uint64_t x406 = UINT64_MAX;
	volatile int8_t x408 = INT8_MAX;
	static volatile int32_t t78 = -80811968;

	t78 = ((x405<x406)/(x407&x408));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x409 = INT16_MIN;
	int32_t x411 = INT32_MIN;
	volatile uint32_t t79 = 1001941214U;

	t79 = ((x409<x410)/(x411&x412));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x417 = 7U;
	static uint8_t x418 = 12U;
	uint64_t x419 = 14735198LLU;
	static int8_t x420 = INT8_MIN;
	uint64_t t80 = 623142283LLU;

	t80 = ((x417<x418)/(x419&x420));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x421 = 116U;
	int32_t x422 = -1;
	int32_t x423 = 303747;

	t81 = ((x421<x422)/(x423&x424));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x425 = 4;
	volatile int32_t x426 = INT32_MIN;
	uint16_t x428 = UINT16_MAX;
	volatile int64_t t82 = -124LL;

	t82 = ((x425<x426)/(x427&x428));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x437 = 2473590122779LLU;
	int64_t x438 = 255LL;
	volatile int8_t x439 = 20;
	int8_t x440 = -6;

	t83 = ((x437<x438)/(x439&x440));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x449 = -1LL;
	uint16_t x451 = 11188U;
	volatile uint8_t x452 = UINT8_MAX;
	static volatile int32_t t84 = -1678238;

	t84 = ((x449<x450)/(x451&x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x453 = -1LL;
	static volatile uint8_t x456 = UINT8_MAX;
	int32_t t85 = -1091504;

	t85 = ((x453<x454)/(x455&x456));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x457 = 3;
	int32_t x459 = -1;
	static uint64_t x460 = UINT64_MAX;

	t86 = ((x457<x458)/(x459&x460));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x461 = -1;
	volatile uint16_t x462 = 25U;
	int16_t x463 = -1;
	uint32_t x464 = 36509721U;
	uint32_t t87 = 763733479U;

	t87 = ((x461<x462)/(x463&x464));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x465 = -173163279;
	uint16_t x466 = 4472U;
	uint8_t x467 = 95U;
	int8_t x468 = -1;
	volatile int32_t t88 = -1;

	t88 = ((x465<x466)/(x467&x468));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x469 = 35U;
	int16_t x472 = 5664;
	static int32_t t89 = -408;

	t89 = ((x469<x470)/(x471&x472));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x473 = 15U;
	uint16_t x474 = 10U;
	int16_t x476 = INT16_MIN;
	volatile uint32_t t90 = 68141U;

	t90 = ((x473<x474)/(x475&x476));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x477 = INT64_MIN;
	int32_t x479 = INT32_MAX;
	int8_t x480 = -1;
	volatile int32_t t91 = -1896;

	t91 = ((x477<x478)/(x479&x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x485 = INT16_MIN;
	int32_t x486 = 1766851;
	static volatile int16_t x487 = 74;
	static uint32_t x488 = 1662237U;
	volatile uint32_t t92 = 56U;

	t92 = ((x485<x486)/(x487&x488));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x489 = -1;
	volatile int64_t x490 = INT64_MAX;
	int8_t x491 = INT8_MIN;
	uint16_t x492 = UINT16_MAX;
	int32_t t93 = 52367;

	t93 = ((x489<x490)/(x491&x492));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x493 = INT16_MIN;
	int32_t x494 = INT32_MIN;
	int64_t x495 = INT64_MIN;
	volatile int64_t t94 = -5842273LL;

	t94 = ((x493<x494)/(x495&x496));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x497 = 15906LLU;
	volatile int8_t x500 = 15;
	volatile int64_t t95 = -32390344LL;

	t95 = ((x497<x498)/(x499&x500));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x501 = INT16_MIN;
	uint32_t t96 = 148339U;

	t96 = ((x501<x502)/(x503&x504));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x505 = INT32_MAX;
	static int32_t x506 = 43557;
	uint16_t x507 = 13724U;
	int32_t x508 = INT32_MAX;

	t97 = ((x505<x506)/(x507&x508));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x509 = 198746LL;
	int16_t x510 = INT16_MAX;
	volatile int32_t x511 = 4;
	int32_t x512 = INT32_MAX;
	int32_t t98 = 823;

	t98 = ((x509<x510)/(x511&x512));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x515 = INT64_MIN;

	t99 = ((x513<x514)/(x515&x516));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

