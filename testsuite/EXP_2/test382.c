#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MIN;
static int32_t x7 = INT32_MAX;
uint64_t t1 = 123111389603LLU;
int32_t x16 = INT32_MAX;
int64_t x30 = 48679LL;
volatile int64_t t4 = -2LL;
static uint32_t x34 = 254503U;
static uint8_t x40 = UINT8_MAX;
static int64_t x52 = INT64_MIN;
volatile int64_t t9 = 9LL;
int16_t x58 = -1;
static volatile uint8_t x70 = UINT8_MAX;
uint64_t x71 = 132047908841608726LLU;
volatile uint8_t x77 = 57U;
int16_t x89 = INT16_MIN;
int8_t x115 = -1;
int16_t x116 = INT16_MAX;
uint32_t x128 = 20583U;
volatile int32_t x132 = 1;
uint32_t x135 = 31884U;
int8_t x142 = -1;
volatile int8_t x148 = -1;
int8_t x183 = 7;
volatile int64_t t32 = -10129869716348136LL;
volatile int8_t x194 = -16;
uint16_t x203 = 4599U;
int32_t t35 = 1600;
int16_t x205 = INT16_MIN;
int16_t x208 = INT16_MAX;
int32_t t36 = 1473966;
static uint64_t x215 = UINT64_MAX;
uint64_t x216 = 1572LLU;
volatile uint8_t x217 = UINT8_MAX;
uint64_t x222 = UINT64_MAX;
int64_t x223 = -817804547013975LL;
uint32_t x232 = UINT32_MAX;
static int64_t x237 = INT64_MIN;
int64_t x243 = 5475801853LL;
uint64_t x253 = UINT64_MAX;
int64_t x263 = -1LL;
uint16_t x271 = 4U;
int16_t x282 = INT16_MIN;
uint32_t x288 = UINT32_MAX;
uint32_t t52 = 30748233U;
int64_t x299 = -98LL;
volatile int64_t t55 = -2990485709924389494LL;
uint32_t x311 = 795514U;
int8_t x313 = 10;
int16_t x318 = INT16_MAX;
uint64_t x319 = UINT64_MAX;
volatile uint64_t t60 = 258966LLU;
int16_t x339 = INT16_MAX;
static int64_t x343 = INT64_MIN;
volatile uint64_t t65 = 3LLU;
int32_t x346 = -25;
int16_t x349 = INT16_MIN;
static uint64_t x356 = 1308747530468668373LLU;
volatile uint64_t t68 = 121572LLU;
volatile int32_t x359 = INT32_MAX;
static uint64_t x362 = 1117166154405882919LLU;
uint8_t x377 = 3U;
int64_t x380 = -2117872011LL;
int64_t x395 = -2LL;
volatile uint32_t x405 = 638569241U;
static uint64_t x429 = UINT64_MAX;
int16_t x431 = -1;
static int32_t x434 = INT32_MAX;
int8_t x447 = -8;
static int64_t x449 = -1LL;
uint32_t x451 = 1U;
volatile int8_t x452 = 1;
static int32_t x453 = INT32_MIN;
uint32_t x468 = 110306757U;
int8_t x476 = INT8_MIN;
int16_t x479 = 74;
uint16_t x488 = UINT16_MAX;
int16_t x489 = INT16_MIN;
uint32_t x498 = UINT32_MAX;
volatile uint64_t t95 = 25331666683960221LLU;
int32_t x504 = INT32_MIN;
static int32_t t96 = 1;
uint32_t x505 = 34388015U;
int32_t x510 = -15758;
int8_t x512 = INT8_MAX;


void f0(void) {
	volatile uint8_t x1 = 0U;
	uint64_t x2 = 502LLU;
	uint8_t x3 = 120U;
	static int8_t x4 = -18;
	volatile uint64_t t0 = 766710403781928013LLU;

	t0 = ((x1/(x2*x3))%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -1;
	uint64_t x8 = 35393901242660329LLU;

	t1 = ((x5/(x6*x7))%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	uint16_t x14 = 22U;
	volatile uint32_t x15 = 414474081U;
	uint32_t t2 = 75472U;

	t2 = ((x13/(x14*x15))%x16);

	if (t2 != 8U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 61;
	uint32_t x22 = 1650738249U;
	int32_t x23 = INT32_MAX;
	static int16_t x24 = -1;
	uint32_t t3 = 230616U;

	t3 = ((x21/(x22*x23))%x24);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MAX;
	static int32_t x31 = -19;
	volatile int64_t x32 = INT64_MAX;

	t4 = ((x29/(x30*x31))%x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = -5LL;
	volatile int16_t x35 = INT16_MAX;
	uint16_t x36 = 16377U;
	volatile int64_t t5 = -17323786049811166LL;

	t5 = ((x33/(x34*x35))%x36);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MAX;
	uint64_t x39 = UINT64_MAX;
	uint64_t t6 = 590720866414LLU;

	t6 = ((x37/(x38*x39))%x40);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x41 = INT32_MAX;
	static int8_t x42 = INT8_MIN;
	uint64_t x43 = 11092545247LLU;
	uint16_t x44 = 6305U;
	volatile uint64_t t7 = 17475921LLU;

	t7 = ((x41/(x42*x43))%x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = 74465553;
	int32_t x46 = 121;
	int8_t x47 = INT8_MAX;
	int64_t x48 = INT64_MIN;
	static volatile int64_t t8 = 19562616840134LL;

	t8 = ((x45/(x46*x47))%x48);

	if (t8 != 4845LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MAX;
	static int8_t x50 = -1;
	static int64_t x51 = -1LL;

	t9 = ((x49/(x50*x51))%x52);

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = 47;
	int16_t x54 = INT16_MIN;
	static int32_t x55 = -2565;
	int64_t x56 = INT64_MIN;
	volatile int64_t t10 = 1LL;

	t10 = ((x53/(x54*x55))%x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -187562023;
	int8_t x59 = -1;
	uint64_t x60 = 33595300488691LLU;
	uint64_t t11 = 709414735228LLU;

	t11 = ((x57/(x58*x59))%x60);

	if (t11 != 1314088114476LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x69 = INT16_MAX;
	static int16_t x72 = 2415;
	uint64_t t12 = 13710859119624LLU;

	t12 = ((x69/(x70*x71))%x72);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MAX;
	uint32_t x74 = 3608491U;
	uint64_t x75 = 1LLU;
	int32_t x76 = INT32_MAX;
	uint64_t t13 = 2843453731777306LLU;

	t13 = ((x73/(x74*x75))%x76);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x78 = 1LLU;
	uint8_t x79 = 95U;
	uint8_t x80 = 3U;
	static volatile uint64_t t14 = 66008LLU;

	t14 = ((x77/(x78*x79))%x80);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x85 = -116;
	static uint64_t x86 = 119298090905259988LLU;
	uint32_t x87 = 8214U;
	static int16_t x88 = INT16_MAX;
	static uint64_t t15 = 104169LLU;

	t15 = ((x85/(x86*x87))%x88);

	if (t15 != 8LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x90 = 1681825104LLU;
	static volatile int8_t x91 = -1;
	int64_t x92 = INT64_MIN;
	static volatile uint64_t t16 = 179LLU;

	t16 = ((x89/(x90*x91))%x92);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x93 = -1;
	int64_t x94 = -1580LL;
	static int32_t x95 = INT32_MIN;
	volatile int32_t x96 = INT32_MIN;
	int64_t t17 = 213445093070424422LL;

	t17 = ((x93/(x94*x95))%x96);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x101 = INT64_MIN;
	volatile uint16_t x102 = 6U;
	volatile int8_t x103 = -1;
	uint8_t x104 = 6U;
	volatile int64_t t18 = -247019LL;

	t18 = ((x101/(x102*x103))%x104);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = 249705408108LL;
	static int8_t x107 = INT8_MIN;
	static int32_t x108 = -3721228;
	volatile int64_t t19 = 105960000309782LL;

	t19 = ((x105/(x106*x107))%x108);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x113 = 5U;
	int8_t x114 = -1;
	int32_t t20 = -19;

	t20 = ((x113/(x114*x115))%x116);

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = 2765;
	int8_t x122 = -1;
	static int16_t x123 = -281;
	int16_t x124 = -1;
	volatile int32_t t21 = -182527;

	t21 = ((x121/(x122*x123))%x124);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = 5;
	static int64_t x126 = -1LL;
	int32_t x127 = INT32_MIN;
	volatile int64_t t22 = 848LL;

	t22 = ((x125/(x126*x127))%x128);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MIN;
	volatile int32_t x130 = INT32_MAX;
	volatile int64_t x131 = -1LL;
	volatile int64_t t23 = -3631447164867462LL;

	t23 = ((x129/(x130*x131))%x132);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x133 = 830U;
	uint16_t x134 = UINT16_MAX;
	volatile uint16_t x136 = UINT16_MAX;
	static uint32_t t24 = 4U;

	t24 = ((x133/(x134*x135))%x136);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x141 = 719U;
	volatile int16_t x143 = 1547;
	uint16_t x144 = 1U;
	volatile int32_t t25 = -6358;

	t25 = ((x141/(x142*x143))%x144);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x145 = 1U;
	int32_t x146 = INT32_MIN;
	static uint64_t x147 = 91640080118642LLU;
	uint64_t t26 = 3LLU;

	t26 = ((x145/(x146*x147))%x148);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = 65;
	int8_t x150 = -8;
	uint64_t x151 = UINT64_MAX;
	int8_t x152 = INT8_MIN;
	uint64_t t27 = 501156579349LLU;

	t27 = ((x149/(x150*x151))%x152);

	if (t27 != 8LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x153 = 41089036561518356LLU;
	uint8_t x154 = UINT8_MAX;
	static uint64_t x155 = UINT64_MAX;
	volatile uint16_t x156 = 208U;
	uint64_t t28 = 540LLU;

	t28 = ((x153/(x154*x155))%x156);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x161 = -6510606779LL;
	static volatile int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	int32_t x164 = INT32_MIN;
	static volatile int64_t t29 = -16518567740LL;

	t29 = ((x161/(x162*x163))%x164);

	if (t29 != -198687LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = 40;
	uint16_t x174 = 1U;
	int64_t x175 = INT64_MIN;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t30 = 43471LL;

	t30 = ((x173/(x174*x175))%x176);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x181 = 112300067272620217LLU;
	uint8_t x182 = 89U;
	int8_t x184 = -47;
	uint64_t t31 = 263369331991701597LLU;

	t31 = ((x181/(x182*x183))%x184);

	if (t31 != 180256929811589LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x185 = -1LL;
	static uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MAX;
	int32_t x188 = -66138694;

	t32 = ((x185/(x186*x187))%x188);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = -6;
	int16_t x190 = INT16_MAX;
	volatile int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MAX;
	volatile int64_t t33 = -792133036LL;

	t33 = ((x189/(x190*x191))%x192);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x193 = -1;
	int32_t x195 = -103;
	volatile uint8_t x196 = UINT8_MAX;
	int32_t t34 = 73;

	t34 = ((x193/(x194*x195))%x196);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = -1;
	volatile int8_t x204 = INT8_MAX;

	t35 = ((x201/(x202*x203))%x204);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x206 = -3;
	static int8_t x207 = 19;

	t36 = ((x205/(x206*x207))%x208);

	if (t36 != 574) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = INT8_MAX;
	static uint16_t x210 = 24428U;
	static int16_t x211 = 5079;
	static int32_t x212 = INT32_MAX;
	int32_t t37 = -200;

	t37 = ((x209/(x210*x211))%x212);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x213 = 446U;
	static int64_t x214 = INT64_MIN;
	static volatile uint64_t t38 = 1232563LLU;

	t38 = ((x213/(x214*x215))%x216);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 19035U;
	int8_t x220 = -1;
	static volatile int32_t t39 = 894;

	t39 = ((x217/(x218*x219))%x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x221 = -309608767255549419LL;
	static int64_t x224 = -7922613532877457LL;
	volatile uint64_t t40 = 914417130LLU;

	t40 = ((x221/(x222*x223))%x224);

	if (t40 != 22177LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x229 = -2278;
	uint8_t x230 = 1U;
	int64_t x231 = INT64_MIN;
	volatile int64_t t41 = -53144LL;

	t41 = ((x229/(x230*x231))%x232);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = -1LL;
	volatile int16_t x234 = INT16_MAX;
	uint16_t x235 = 10267U;
	int32_t x236 = INT32_MIN;
	volatile int64_t t42 = 2277017509383409LL;

	t42 = ((x233/(x234*x235))%x236);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -771;
	volatile int64_t t43 = -233319171530756LL;

	t43 = ((x237/(x238*x239))%x240);

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x241 = 23U;
	int32_t x242 = -1;
	uint8_t x244 = 28U;
	volatile int64_t t44 = 2028LL;

	t44 = ((x241/(x242*x243))%x244);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x245 = 2505U;
	static int8_t x246 = INT8_MAX;
	volatile uint16_t x247 = 3276U;
	int8_t x248 = INT8_MIN;
	int32_t t45 = -12;

	t45 = ((x245/(x246*x247))%x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x249 = 42139797;
	int16_t x250 = INT16_MAX;
	int32_t x251 = -1;
	int8_t x252 = INT8_MIN;
	int32_t t46 = 411496111;

	t46 = ((x249/(x250*x251))%x252);

	if (t46 != -6) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x254 = INT8_MIN;
	static volatile int8_t x255 = -1;
	int32_t x256 = INT32_MAX;
	volatile uint64_t t47 = 1846055470LLU;

	t47 = ((x253/(x254*x255))%x256);

	if (t47 != 67108863LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x261 = 52;
	volatile int32_t x262 = -83;
	volatile int64_t x264 = INT64_MAX;
	static int64_t t48 = -29061131LL;

	t48 = ((x261/(x262*x263))%x264);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x265 = INT8_MAX;
	int16_t x266 = INT16_MAX;
	int32_t x267 = -2869;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t49 = 7905;

	t49 = ((x265/(x266*x267))%x268);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x269 = INT16_MIN;
	int8_t x270 = -1;
	static volatile int16_t x272 = -1;
	int32_t t50 = 1;

	t50 = ((x269/(x270*x271))%x272);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x281 = INT8_MIN;
	int64_t x283 = -1LL;
	volatile int16_t x284 = INT16_MIN;
	int64_t t51 = 39LL;

	t51 = ((x281/(x282*x283))%x284);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x285 = INT16_MIN;
	static int32_t x286 = INT32_MAX;
	volatile uint32_t x287 = UINT32_MAX;

	t52 = ((x285/(x286*x287))%x288);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x289 = 37901490644LL;
	static int8_t x290 = INT8_MIN;
	uint8_t x291 = 55U;
	volatile int32_t x292 = INT32_MIN;
	int64_t t53 = 154897564584LL;

	t53 = ((x289/(x290*x291))%x292);

	if (t53 != -5383734LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	int16_t x295 = 1;
	static int8_t x296 = INT8_MAX;
	static volatile int64_t t54 = -371007156433830LL;

	t54 = ((x293/(x294*x295))%x296);

	if (t54 != 64LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x297 = -1;
	int64_t x298 = 2991593913575826LL;
	uint32_t x300 = UINT32_MAX;

	t55 = ((x297/(x298*x299))%x300);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x301 = 3595873292LLU;
	uint8_t x302 = UINT8_MAX;
	uint16_t x303 = 23U;
	static volatile int8_t x304 = INT8_MIN;
	static uint64_t t56 = 17LLU;

	t56 = ((x301/(x302*x303))%x304);

	if (t56 != 613107LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x305 = 121U;
	static int32_t x306 = INT32_MAX;
	static int8_t x307 = -1;
	int32_t x308 = -1;
	static volatile int32_t t57 = 258629462;

	t57 = ((x305/(x306*x307))%x308);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x309 = 201U;
	int32_t x310 = INT32_MAX;
	int32_t x312 = -1;
	uint32_t t58 = 230794382U;

	t58 = ((x309/(x310*x311))%x312);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x314 = 2;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MAX;
	volatile int64_t t59 = -363144102LL;

	t59 = ((x313/(x314*x315))%x316);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x317 = 2766;
	static uint32_t x320 = 3486685U;

	t60 = ((x317/(x318*x319))%x320);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = INT32_MAX;
	static volatile int8_t x323 = -1;
	int8_t x324 = INT8_MAX;
	volatile uint64_t t61 = 2172523894367444LLU;

	t61 = ((x321/(x322*x323))%x324);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x325 = 2955U;
	static volatile uint32_t x326 = 87U;
	volatile int8_t x327 = -1;
	static uint8_t x328 = 7U;
	uint32_t t62 = 3648U;

	t62 = ((x325/(x326*x327))%x328);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x333 = INT32_MAX;
	int32_t x334 = INT32_MAX;
	uint64_t x335 = 126742589LLU;
	uint32_t x336 = 636583446U;
	static uint64_t t63 = 5817LLU;

	t63 = ((x333/(x334*x335))%x336);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x337 = INT16_MAX;
	static int8_t x338 = INT8_MIN;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t64 = -2624165;

	t64 = ((x337/(x338*x339))%x340);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x341 = 3;
	static uint64_t x342 = 91957LLU;
	int8_t x344 = -1;

	t65 = ((x341/(x342*x343))%x344);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x345 = INT64_MIN;
	int64_t x347 = -1LL;
	int16_t x348 = -7;
	int64_t t66 = 779LL;

	t66 = ((x345/(x346*x347))%x348);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x350 = UINT64_MAX;
	volatile int64_t x351 = 207106767670LL;
	int64_t x352 = INT64_MIN;
	static volatile uint64_t t67 = 105462957715074LLU;

	t67 = ((x349/(x350*x351))%x352);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x353 = INT64_MAX;
	static uint32_t x354 = 44724U;
	static int32_t x355 = INT32_MAX;

	t68 = ((x353/(x354*x355))%x356);

	if (t68 != 2147506010LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x357 = 212551228LLU;
	int64_t x358 = -6456404LL;
	volatile int32_t x360 = -1;
	uint64_t t69 = 16095504164LLU;

	t69 = ((x357/(x358*x359))%x360);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x361 = INT8_MAX;
	int64_t x363 = -128879LL;
	int64_t x364 = 4302581185LL;
	static uint64_t t70 = 3725511LLU;

	t70 = ((x361/(x362*x363))%x364);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x378 = 11941374872563262LLU;
	int64_t x379 = -26810514746121029LL;
	uint64_t t71 = 48460LLU;

	t71 = ((x377/(x378*x379))%x380);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x382 = 85U;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = 112LLU;
	volatile uint64_t t72 = 9LLU;

	t72 = ((x381/(x382*x383))%x384);

	if (t72 != 35LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x385 = -1LL;
	int16_t x386 = -1;
	uint64_t x387 = 82566567391511LLU;
	volatile int32_t x388 = INT32_MIN;
	volatile uint64_t t73 = 36648243LLU;

	t73 = ((x385/(x386*x387))%x388);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x393 = INT32_MIN;
	uint8_t x394 = 2U;
	int8_t x396 = 3;
	int64_t t74 = -16333094442138450LL;

	t74 = ((x393/(x394*x395))%x396);

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x401 = -2600182484LL;
	uint16_t x402 = 5039U;
	int8_t x403 = INT8_MAX;
	int32_t x404 = -1;
	volatile int64_t t75 = -1LL;

	t75 = ((x401/(x402*x403))%x404);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x406 = INT8_MIN;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MAX;
	volatile int64_t t76 = 0LL;

	t76 = ((x405/(x406*x407))%x408);

	if (t76 != 38975LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x413 = -1;
	static int16_t x414 = INT16_MAX;
	int16_t x415 = 14427;
	volatile int8_t x416 = INT8_MIN;
	static int32_t t77 = 2517567;

	t77 = ((x413/(x414*x415))%x416);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x417 = INT16_MAX;
	volatile int8_t x418 = INT8_MAX;
	volatile int64_t x419 = 1LL;
	int32_t x420 = INT32_MIN;
	int64_t t78 = -1424678546233LL;

	t78 = ((x417/(x418*x419))%x420);

	if (t78 != 258LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x421 = INT64_MAX;
	volatile uint16_t x422 = UINT16_MAX;
	volatile uint32_t x423 = 2306485U;
	static volatile int16_t x424 = INT16_MIN;
	int64_t t79 = 33LL;

	t79 = ((x421/(x422*x423))%x424);

	if (t79 != 2566LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x425 = 10U;
	uint16_t x426 = 817U;
	int16_t x427 = 266;
	volatile uint32_t x428 = 82890265U;
	volatile uint32_t t80 = 5514U;

	t80 = ((x425/(x426*x427))%x428);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x430 = -1;
	uint32_t x432 = 9U;
	uint64_t t81 = 2LLU;

	t81 = ((x429/(x430*x431))%x432);

	if (t81 != 6LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x433 = INT64_MIN;
	int32_t x435 = -1;
	static uint16_t x436 = UINT16_MAX;
	volatile int64_t t82 = 510892LL;

	t82 = ((x433/(x434*x435))%x436);

	if (t82 != 3LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x441 = UINT8_MAX;
	int16_t x442 = INT16_MIN;
	uint8_t x443 = 7U;
	int64_t x444 = INT64_MAX;
	int64_t t83 = -21327372LL;

	t83 = ((x441/(x442*x443))%x444);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x445 = -4;
	uint64_t x446 = UINT64_MAX;
	uint64_t x448 = UINT64_MAX;
	uint64_t t84 = 3LLU;

	t84 = ((x445/(x446*x447))%x448);

	if (t84 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x450 = UINT64_MAX;
	volatile uint64_t t85 = 129168281827282LLU;

	t85 = ((x449/(x450*x451))%x452);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x454 = -1LL;
	int64_t x455 = 6LL;
	static uint64_t x456 = UINT64_MAX;
	uint64_t t86 = 5010860975773217560LLU;

	t86 = ((x453/(x454*x455))%x456);

	if (t86 != 357913941LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x457 = -1LL;
	static int8_t x458 = INT8_MIN;
	volatile int8_t x459 = -18;
	uint8_t x460 = UINT8_MAX;
	volatile int64_t t87 = 28364LL;

	t87 = ((x457/(x458*x459))%x460);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x465 = INT32_MIN;
	int8_t x466 = 21;
	uint8_t x467 = UINT8_MAX;
	volatile uint32_t t88 = 6890900U;

	t88 = ((x465/(x466*x467))%x468);

	if (t88 != 102909506U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x469 = 2U;
	int64_t x470 = INT64_MAX;
	int16_t x471 = -1;
	static int64_t x472 = -360345LL;
	int64_t t89 = -3165243LL;

	t89 = ((x469/(x470*x471))%x472);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x473 = -41;
	uint16_t x474 = 55U;
	uint32_t x475 = 6U;
	uint32_t t90 = 14652U;

	t90 = ((x473/(x474*x475))%x476);

	if (t90 != 13015052U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x477 = 2999696581453924LL;
	uint8_t x478 = UINT8_MAX;
	uint64_t x480 = UINT64_MAX;
	uint64_t t91 = 243730277LLU;

	t91 = ((x477/(x478*x479))%x480);

	if (t91 != 158966432509LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x481 = -1;
	volatile uint8_t x482 = 1U;
	volatile int64_t x483 = 1LL;
	int16_t x484 = -1;
	volatile int64_t t92 = -92971777863764184LL;

	t92 = ((x481/(x482*x483))%x484);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x485 = INT32_MAX;
	volatile uint64_t x486 = 1603LLU;
	uint16_t x487 = 10352U;
	volatile uint64_t t93 = 51LLU;

	t93 = ((x485/(x486*x487))%x488);

	if (t93 != 129LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x490 = INT16_MAX;
	int16_t x491 = INT16_MIN;
	uint32_t x492 = 218948U;
	uint32_t t94 = 1327U;

	t94 = ((x489/(x490*x491))%x492);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x497 = -1;
	int16_t x499 = -1;
	uint64_t x500 = UINT64_MAX;

	t95 = ((x497/(x498*x499))%x500);

	if (t95 != 4294967295LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x501 = INT8_MAX;
	int8_t x502 = 37;
	int16_t x503 = -8;

	t96 = ((x501/(x502*x503))%x504);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x506 = INT8_MAX;
	int64_t x507 = -34425LL;
	int32_t x508 = -44268;
	volatile int64_t t97 = -13993485432535LL;

	t97 = ((x505/(x506*x507))%x508);

	if (t97 != -7LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x509 = -4099;
	int64_t x511 = -1LL;
	volatile int64_t t98 = -2231111239749683LL;

	t98 = ((x509/(x510*x511))%x512);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x513 = INT8_MIN;
	int16_t x514 = -1;
	int32_t x515 = INT32_MAX;
	static int16_t x516 = INT16_MAX;
	volatile int32_t t99 = 5;

	t99 = ((x513/(x514*x515))%x516);

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

