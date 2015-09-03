#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
volatile int8_t x4 = INT8_MIN;
static volatile uint64_t x7 = 647059137LLU;
uint64_t x11 = UINT64_MAX;
int16_t x12 = INT16_MAX;
uint64_t t2 = 10818637LLU;
volatile uint64_t x15 = 1110918628234490778LLU;
static uint64_t t3 = 477990LLU;
int64_t x19 = INT64_MIN;
volatile int64_t x32 = INT64_MIN;
int64_t t6 = -454090967LL;
volatile int8_t x37 = INT8_MIN;
volatile int16_t x57 = 8632;
int32_t x58 = INT32_MAX;
int16_t x63 = INT16_MAX;
uint32_t x64 = 16U;
static volatile int64_t t14 = -23445240LL;
uint32_t x83 = UINT32_MAX;
static int8_t x88 = -1;
volatile int32_t x116 = -1;
uint16_t x142 = 6929U;
int16_t x145 = -1;
int64_t t29 = 6673388682596LL;
volatile uint16_t x153 = 41U;
static volatile uint64_t x155 = UINT64_MAX;
static volatile uint32_t t33 = 886615U;
static int32_t x178 = -1;
volatile int64_t t34 = -51347269674635655LL;
uint32_t x181 = UINT32_MAX;
uint8_t x182 = 2U;
volatile uint64_t x189 = 725479503857185LLU;
uint16_t x192 = 2U;
static int16_t x194 = -2;
int64_t x200 = INT64_MAX;
uint64_t x203 = 825228866478LLU;
int8_t x206 = -5;
int8_t x210 = INT8_MAX;
volatile uint64_t x218 = 12662579LLU;
volatile uint32_t t44 = 5966U;
uint64_t t46 = 8056002LLU;
int32_t x241 = INT32_MAX;
uint32_t x242 = 479791746U;
uint16_t x246 = UINT16_MAX;
uint8_t x253 = 18U;
int16_t x258 = 462;
uint8_t x266 = 40U;
int16_t x268 = INT16_MIN;
int8_t x280 = INT8_MIN;
int64_t t55 = -34965515LL;
int64_t x300 = INT64_MAX;
uint64_t x305 = 451817908550946237LLU;
uint32_t x308 = 50681382U;
static uint8_t x317 = UINT8_MAX;
uint32_t x320 = 7041240U;
volatile uint64_t t60 = 22294471LLU;
int16_t x322 = INT16_MIN;
uint8_t x323 = 3U;
volatile int64_t t61 = 819043326389745282LL;
uint32_t x330 = 3108207U;
uint8_t x334 = UINT8_MAX;
uint8_t x335 = 97U;
int16_t x337 = -1;
volatile int32_t t65 = 466292086;
static uint64_t x345 = UINT64_MAX;
int16_t x352 = INT16_MIN;
uint16_t x355 = 350U;
int16_t x370 = -6264;
int32_t x378 = 544;
static uint64_t t71 = 1071049524791886801LLU;
volatile int16_t x395 = -2782;
uint64_t x397 = 812079602252LLU;
volatile int32_t x398 = INT32_MIN;
uint64_t t73 = 37658187LLU;
volatile uint64_t t74 = 237606388333623960LLU;
uint8_t x405 = 76U;
int8_t x407 = 9;
int64_t x410 = 1683266063132891401LL;
volatile int8_t x413 = INT8_MIN;
uint8_t x418 = 41U;
volatile int32_t t78 = 259;
static volatile int32_t x422 = 21708;
volatile int32_t t80 = -233175068;
int64_t x430 = INT64_MIN;
int16_t x437 = -649;
uint64_t x450 = 3935326365962LLU;
uint8_t x451 = UINT8_MAX;
int64_t x456 = 28936155823952812LL;
static int64_t x484 = 12011136025LL;
volatile int64_t t92 = 6005091583200720LL;
uint32_t x486 = 10852468U;
static int8_t x487 = INT8_MIN;
static int8_t x506 = INT8_MAX;
int32_t x517 = 8181950;
uint64_t x520 = 34743965LLU;
int8_t x540 = INT8_MAX;


void f0(void) {
	static uint64_t x1 = 5185109706981198483LLU;
	volatile int64_t x2 = -110293814LL;
	uint64_t t0 = 45LLU;

	t0 = ((x1/(x2%x3))&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 654689162LLU;
	int16_t x6 = -1;
	uint8_t x8 = UINT8_MAX;
	volatile uint64_t t1 = 54095677367005050LLU;

	t1 = ((x5/(x6%x7))&x8);

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 0U;
	int64_t x10 = INT64_MIN;

	t2 = ((x9/(x10%x11))&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int16_t x14 = -1;
	int8_t x16 = INT8_MIN;

	t3 = ((x13/(x14%x15))&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 228U;
	static int16_t x18 = 15298;
	static int16_t x20 = -1;
	volatile int64_t t4 = -121565LL;

	t4 = ((x17/(x18%x19))&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = 5214;
	static volatile uint16_t x27 = 3440U;
	volatile int8_t x28 = INT8_MIN;
	int32_t t5 = 1;

	t5 = ((x25/(x26%x27))&x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = UINT16_MAX;
	uint8_t x30 = 4U;
	uint32_t x31 = 860U;

	t6 = ((x29/(x30%x31))&x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x38 = INT32_MAX;
	static uint16_t x39 = UINT16_MAX;
	uint8_t x40 = 123U;
	volatile int32_t t7 = -21017912;

	t7 = ((x37/(x38%x39))&x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 16561189LLU;
	static int64_t x42 = INT64_MIN;
	int64_t x43 = -8394497811LL;
	uint32_t x44 = 119062U;
	volatile uint64_t t8 = 0LLU;

	t8 = ((x41/(x42%x43))&x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	static uint32_t x46 = 1U;
	int16_t x47 = -238;
	uint8_t x48 = 0U;
	uint32_t t9 = 416817U;

	t9 = ((x45/(x46%x47))&x48);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -20;
	uint64_t x50 = 26062728507494953LLU;
	int8_t x51 = 62;
	int64_t x52 = -339333242254200LL;
	volatile uint64_t t10 = 7554566500281730LLU;

	t10 = ((x49/(x50%x51))&x52);

	if (t10 != 392448688531702920LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = INT32_MAX;
	volatile int64_t x54 = INT64_MAX;
	uint64_t x55 = 1132751480132584799LLU;
	static int8_t x56 = -9;
	volatile uint64_t t11 = 25898894LLU;

	t11 = ((x53/(x54%x55))&x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x59 = 77441359971LLU;
	int64_t x60 = INT64_MAX;
	uint64_t t12 = 4002160LLU;

	t12 = ((x57/(x58%x59))&x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = -1;
	int16_t x62 = INT16_MIN;
	volatile uint32_t t13 = 638957059U;

	t13 = ((x61/(x62%x63))&x64);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = INT16_MIN;
	static int64_t x66 = INT64_MIN;
	uint16_t x67 = 90U;
	int8_t x68 = 1;

	t14 = ((x65/(x66%x67))&x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MIN;
	static uint8_t x75 = 120U;
	int64_t x76 = -12383048272209LL;
	int64_t t15 = 113331702527378LL;

	t15 = ((x73/(x74%x75))&x76);

	if (t15 != -12383048278015LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x81 = 173;
	uint8_t x82 = UINT8_MAX;
	uint64_t x84 = 44040222283549LLU;
	uint64_t t16 = 3378502553LLU;

	t16 = ((x81/(x82%x83))&x84);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = 5449U;
	volatile uint8_t x86 = 3U;
	volatile uint16_t x87 = UINT16_MAX;
	uint32_t t17 = 7U;

	t17 = ((x85/(x86%x87))&x88);

	if (t17 != 1816U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -39629396;
	int8_t x90 = 12;
	int32_t x91 = -539;
	int32_t x92 = 110;
	int32_t t18 = -202969;

	t18 = ((x89/(x90%x91))&x92);

	if (t18 != 78) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = -1;
	static uint32_t x98 = 63966U;
	uint8_t x99 = 25U;
	int8_t x100 = -1;
	static volatile uint32_t t19 = 19U;

	t19 = ((x97/(x98%x99))&x100);

	if (t19 != 268435455U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	int64_t x103 = 5316LL;
	static int8_t x104 = INT8_MIN;
	static int64_t t20 = -3025018864269347212LL;

	t20 = ((x101/(x102%x103))&x104);

	if (t20 != 128LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = 1579U;
	uint64_t x110 = 334230571025630LLU;
	volatile int64_t x111 = INT64_MIN;
	uint8_t x112 = 3U;
	uint64_t t21 = 3LLU;

	t21 = ((x109/(x110%x111))&x112);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x113 = 10318LLU;
	uint32_t x114 = UINT32_MAX;
	volatile int64_t x115 = INT64_MIN;
	uint64_t t22 = 74LLU;

	t22 = ((x113/(x114%x115))&x116);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = 33U;
	int8_t x118 = INT8_MIN;
	int64_t x119 = 4293238973180437462LL;
	volatile uint8_t x120 = 0U;
	volatile int64_t t23 = -2LL;

	t23 = ((x117/(x118%x119))&x120);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x121 = INT32_MAX;
	int64_t x122 = 410511928LL;
	volatile uint16_t x123 = 8636U;
	uint8_t x124 = 79U;
	volatile int64_t t24 = -285928733552LL;

	t24 = ((x121/(x122%x123))&x124);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x125 = INT16_MIN;
	int64_t x126 = 1656705053070114068LL;
	volatile int16_t x127 = 15;
	static uint32_t x128 = UINT32_MAX;
	int64_t t25 = -255332402154LL;

	t25 = ((x125/(x126%x127))&x128);

	if (t25 != 4294963200LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = -212;
	static volatile uint8_t x134 = 3U;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -121596678;
	int32_t t26 = 57143;

	t26 = ((x133/(x134%x135))&x136);

	if (t26 != -121596742) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MIN;
	volatile int64_t x138 = INT64_MAX;
	uint32_t x139 = 2109316U;
	static uint8_t x140 = 4U;
	int64_t t27 = 770LL;

	t27 = ((x137/(x138%x139))&x140);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = INT8_MIN;
	static uint16_t x143 = 3752U;
	uint16_t x144 = 2931U;
	volatile int32_t t28 = 1021;

	t28 = ((x141/(x142%x143))&x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x146 = -1;
	int64_t x147 = INT64_MAX;
	int8_t x148 = -1;

	t29 = ((x145/(x146%x147))&x148);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x149 = 12U;
	volatile int16_t x150 = -1481;
	static uint64_t x151 = UINT64_MAX;
	int8_t x152 = INT8_MAX;
	static volatile uint64_t t30 = 7848666000691882716LLU;

	t30 = ((x149/(x150%x151))&x152);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x154 = INT16_MAX;
	volatile int64_t x156 = -4LL;
	static uint64_t t31 = 790363695860LLU;

	t31 = ((x153/(x154%x155))&x156);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = UINT32_MAX;
	volatile int16_t x158 = INT16_MAX;
	int8_t x159 = -16;
	static uint32_t x160 = 28U;
	uint32_t t32 = 447559333U;

	t32 = ((x157/(x158%x159))&x160);

	if (t32 != 16U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x165 = 1U;
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = INT32_MIN;
	volatile uint8_t x168 = UINT8_MAX;

	t33 = ((x165/(x166%x167))&x168);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = -1;
	int32_t x179 = -259900;
	int64_t x180 = INT64_MAX;

	t34 = ((x177/(x178%x179))&x180);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x183 = -36;
	static int8_t x184 = -2;
	volatile uint32_t t35 = 16418U;

	t35 = ((x181/(x182%x183))&x184);

	if (t35 != 2147483646U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MAX;
	uint32_t x187 = UINT32_MAX;
	static volatile uint64_t x188 = UINT64_MAX;
	volatile uint64_t t36 = 202966LLU;

	t36 = ((x185/(x186%x187))&x188);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x190 = INT32_MIN;
	volatile uint8_t x191 = 17U;
	volatile uint64_t t37 = 525336645081919LLU;

	t37 = ((x189/(x190%x191))&x192);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x193 = -1;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 61U;
	int32_t t38 = 58468;

	t38 = ((x193/(x194%x195))&x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = 172LL;
	int32_t x198 = INT32_MIN;
	int64_t x199 = 2013237LL;
	int64_t t39 = -2775141033872LL;

	t39 = ((x197/(x198%x199))&x200);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x201 = INT64_MIN;
	uint16_t x202 = 13U;
	static int8_t x204 = INT8_MIN;
	volatile uint64_t t40 = 11877753LLU;

	t40 = ((x201/(x202%x203))&x204);

	if (t40 != 709490156681136512LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = INT16_MIN;
	static int16_t x207 = -115;
	uint8_t x208 = 3U;
	int32_t t41 = 14;

	t41 = ((x205/(x206%x207))&x208);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x209 = 838547U;
	uint32_t x211 = UINT32_MAX;
	static int8_t x212 = INT8_MAX;
	volatile uint32_t t42 = 463U;

	t42 = ((x209/(x210%x211))&x212);

	if (t42 != 74U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x217 = 1;
	int16_t x219 = 25;
	int16_t x220 = INT16_MAX;
	uint64_t t43 = 318449LLU;

	t43 = ((x217/(x218%x219))&x220);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x226 = 21758U;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MIN;

	t44 = ((x225/(x226%x227))&x228);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x229 = -7;
	uint64_t x230 = 53830021250LLU;
	uint8_t x231 = UINT8_MAX;
	uint16_t x232 = UINT16_MAX;
	volatile uint64_t t45 = 1855609LLU;

	t45 = ((x229/(x230%x231))&x232);

	if (t45 != 16852LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x233 = INT16_MIN;
	uint64_t x234 = 5978969657723811073LLU;
	volatile int32_t x235 = -1;
	static uint64_t x236 = 16976LLU;

	t46 = ((x233/(x234%x235))&x236);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x243 = 126908U;
	uint16_t x244 = 718U;
	uint32_t t47 = 14623U;

	t47 = ((x241/(x242%x243))&x244);

	if (t47 != 130U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x245 = 23U;
	static int32_t x247 = 8985;
	static int16_t x248 = INT16_MAX;
	int32_t t48 = -26271;

	t48 = ((x245/(x246%x247))&x248);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x254 = -1;
	static volatile uint16_t x255 = 11595U;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t49 = INT32_MIN;

	t49 = ((x253/(x254%x255))&x256);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = INT8_MIN;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MAX;
	static volatile int64_t t50 = 155020731328741232LL;

	t50 = ((x257/(x258%x259))&x260);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x261 = UINT8_MAX;
	static volatile int64_t x262 = INT64_MIN;
	uint64_t x263 = 12514906LLU;
	static int32_t x264 = INT32_MIN;
	static uint64_t t51 = 255654LLU;

	t51 = ((x261/(x262%x263))&x264);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x265 = 569;
	static uint32_t x267 = 55166321U;
	volatile uint32_t t52 = 496U;

	t52 = ((x265/(x266%x267))&x268);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	int64_t x279 = -42955631LL;
	int64_t t53 = 10282473421030LL;

	t53 = ((x277/(x278%x279))&x280);

	if (t53 != 222295207168LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x281 = INT16_MIN;
	int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t54 = 152343574;

	t54 = ((x281/(x282%x283))&x284);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = 928750101727LL;
	static int8_t x286 = -21;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;

	t55 = ((x285/(x286%x287))&x288);

	if (t55 != -45097156608LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x289 = UINT32_MAX;
	uint8_t x290 = UINT8_MAX;
	uint16_t x291 = 22U;
	uint16_t x292 = 6U;
	uint32_t t56 = 1393386388U;

	t56 = ((x289/(x290%x291))&x292);

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x297 = INT8_MIN;
	uint8_t x298 = 1U;
	uint16_t x299 = 12U;
	static int64_t t57 = 1901194094087LL;

	t57 = ((x297/(x298%x299))&x300);

	if (t57 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x306 = INT32_MIN;
	uint8_t x307 = 7U;
	volatile uint64_t t58 = 80222733995LLU;

	t58 = ((x305/(x306%x307))&x308);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x313 = 32U;
	static uint64_t x314 = 503273LLU;
	int32_t x315 = -1;
	static uint8_t x316 = 0U;
	static volatile uint64_t t59 = 10LLU;

	t59 = ((x313/(x314%x315))&x316);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x318 = UINT64_MAX;
	volatile int32_t x319 = INT32_MIN;

	t60 = ((x317/(x318%x319))&x320);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x321 = -2911507075139009LL;
	static uint32_t x324 = UINT32_MAX;

	t61 = ((x321/(x322%x323))&x324);

	if (t61 != 142394080LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MIN;
	uint8_t x327 = UINT8_MAX;
	static volatile int32_t x328 = -1;
	volatile int32_t t62 = 0;

	t62 = ((x325/(x326%x327))&x328);

	if (t62 != 256) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x329 = -1;
	int16_t x331 = INT16_MAX;
	uint16_t x332 = 45U;
	volatile uint32_t t63 = 84823664U;

	t63 = ((x329/(x330%x331))&x332);

	if (t63 != 12U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x333 = UINT64_MAX;
	static int32_t x336 = -1;
	static uint64_t t64 = 2612339033530209LLU;

	t64 = ((x333/(x334%x335))&x336);

	if (t64 != 302405640552615600LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x338 = INT32_MIN;
	int16_t x339 = 14;
	static uint8_t x340 = UINT8_MAX;

	t65 = ((x337/(x338%x339))&x340);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x346 = UINT64_MAX;
	uint64_t x347 = 382LLU;
	uint16_t x348 = UINT16_MAX;
	volatile uint64_t t66 = 51022LLU;

	t66 = ((x345/(x346%x347))&x348);

	if (t66 != 15728LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x349 = 13120585;
	uint8_t x350 = 6U;
	uint32_t x351 = 371283U;
	volatile uint32_t t67 = 3U;

	t67 = ((x349/(x350%x351))&x352);

	if (t67 != 2162688U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x353 = UINT32_MAX;
	volatile int8_t x354 = -1;
	int8_t x356 = -30;
	volatile uint32_t t68 = 7U;

	t68 = ((x353/(x354%x355))&x356);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x369 = INT8_MIN;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 607U;
	int32_t t69 = -292091;

	t69 = ((x369/(x370%x371))&x372);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x377 = INT64_MIN;
	volatile int8_t x379 = INT8_MAX;
	static uint32_t x380 = UINT32_MAX;
	volatile int64_t t70 = -8LL;

	t70 = ((x377/(x378%x379))&x380);

	if (t70 != 1908874354LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x381 = INT8_MIN;
	static uint32_t x382 = 9U;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = -1056065888;

	t71 = ((x381/(x382%x383))&x384);

	if (t71 != 2049638229594149920LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x393 = UINT16_MAX;
	static volatile uint8_t x394 = 3U;
	volatile uint8_t x396 = UINT8_MAX;
	int32_t t72 = 2805043;

	t72 = ((x393/(x394%x395))&x396);

	if (t72 != 85) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x399 = INT64_MAX;
	int8_t x400 = INT8_MAX;

	t73 = ((x397/(x398%x399))&x400);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x401 = INT64_MIN;
	static uint16_t x402 = 1U;
	int64_t x403 = 131585625296320281LL;
	volatile uint64_t x404 = 172115333791381LLU;

	t74 = ((x401/(x402%x403))&x404);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x406 = -1;
	static int64_t x408 = -151LL;
	int64_t t75 = 28LL;

	t75 = ((x405/(x406%x407))&x408);

	if (t75 != -224LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x409 = UINT16_MAX;
	int32_t x411 = INT32_MIN;
	int32_t x412 = -138775662;
	static volatile int64_t t76 = -1696520697491504LL;

	t76 = ((x409/(x410%x411))&x412);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x414 = INT8_MIN;
	int32_t x415 = INT32_MIN;
	int8_t x416 = 35;
	volatile int32_t t77 = -4935;

	t77 = ((x413/(x414%x415))&x416);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x417 = INT16_MIN;
	int8_t x419 = INT8_MAX;
	volatile int32_t x420 = INT32_MAX;

	t78 = ((x417/(x418%x419))&x420);

	if (t78 != 2147482849) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x421 = INT8_MIN;
	static int32_t x423 = INT32_MIN;
	volatile uint64_t x424 = 2843038377547LLU;
	uint64_t t79 = 5894017343871112LLU;

	t79 = ((x421/(x422%x423))&x424);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x425 = INT16_MAX;
	volatile int32_t x426 = INT32_MAX;
	int16_t x427 = INT16_MIN;
	int16_t x428 = -1892;

	t80 = ((x425/(x426%x427))&x428);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x429 = INT16_MAX;
	static int32_t x431 = 12;
	int32_t x432 = -332611;
	static volatile int64_t t81 = -851046848012398532LL;

	t81 = ((x429/(x430%x431))&x432);

	if (t81 != -335871LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x433 = UINT32_MAX;
	static int16_t x434 = 6;
	int32_t x435 = INT32_MIN;
	int8_t x436 = -3;
	uint32_t t82 = 51754U;

	t82 = ((x433/(x434%x435))&x436);

	if (t82 != 715827880U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x438 = INT8_MAX;
	static uint64_t x439 = 3192296465LLU;
	int32_t x440 = INT32_MIN;
	uint64_t t83 = 5711135679987542778LLU;

	t83 = ((x437/(x438%x439))&x440);

	if (t83 != 145249952795197440LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x441 = 486850556U;
	int8_t x442 = INT8_MAX;
	int64_t x443 = INT64_MIN;
	volatile int64_t x444 = INT64_MIN;
	int64_t t84 = 25106769LL;

	t84 = ((x441/(x442%x443))&x444);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x445 = INT64_MIN;
	volatile int64_t x446 = INT64_MIN;
	uint32_t x447 = UINT32_MAX;
	int64_t x448 = INT64_MIN;
	int64_t t85 = 135903LL;

	t85 = ((x445/(x446%x447))&x448);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x449 = -1;
	uint32_t x452 = 2U;
	static volatile uint64_t t86 = 120687034968553872LLU;

	t86 = ((x449/(x450%x451))&x452);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MIN;
	int32_t x455 = 59366;
	volatile int64_t t87 = 3230LL;

	t87 = ((x453/(x454%x455))&x456);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x457 = 23U;
	int64_t x458 = 1LL;
	static uint64_t x459 = 377938797240268LLU;
	int16_t x460 = -18;
	volatile uint64_t t88 = 425727LLU;

	t88 = ((x457/(x458%x459))&x460);

	if (t88 != 6LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x461 = INT64_MIN;
	int8_t x462 = INT8_MAX;
	uint32_t x463 = 617U;
	volatile uint8_t x464 = UINT8_MAX;
	static volatile int64_t t89 = 213630LL;

	t89 = ((x461/(x462%x463))&x464);

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x465 = 6LLU;
	static int16_t x466 = 171;
	int32_t x467 = -45;
	int64_t x468 = INT64_MIN;
	uint64_t t90 = 1208931165987630172LLU;

	t90 = ((x465/(x466%x467))&x468);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x473 = -21;
	int64_t x474 = -1LL;
	uint32_t x475 = 1643U;
	static int16_t x476 = -1;
	static volatile int64_t t91 = -1293LL;

	t91 = ((x473/(x474%x475))&x476);

	if (t91 != 21LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x481 = 19U;
	uint16_t x482 = UINT16_MAX;
	int64_t x483 = INT64_MIN;

	t92 = ((x481/(x482%x483))&x484);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x485 = INT8_MIN;
	static uint32_t x488 = 28U;
	uint32_t t93 = 79659U;

	t93 = ((x485/(x486%x487))&x488);

	if (t93 != 8U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x489 = -1;
	uint32_t x490 = 1772719009U;
	uint64_t x491 = UINT64_MAX;
	int8_t x492 = -15;
	volatile uint64_t t94 = 6LLU;

	t94 = ((x489/(x490%x491))&x492);

	if (t94 != 10405904129LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x493 = INT64_MAX;
	uint16_t x494 = 28U;
	static volatile uint64_t x495 = 2588464236795LLU;
	static uint16_t x496 = UINT16_MAX;
	uint64_t t95 = 8LLU;

	t95 = ((x493/(x494%x495))&x496);

	if (t95 != 9362LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x505 = -1;
	static int64_t x507 = INT64_MIN;
	volatile int64_t x508 = INT64_MIN;
	volatile int64_t t96 = -43331555LL;

	t96 = ((x505/(x506%x507))&x508);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x513 = INT8_MIN;
	int32_t x514 = -26228125;
	volatile uint16_t x515 = 585U;
	static volatile int8_t x516 = INT8_MIN;
	volatile int32_t t97 = -1;

	t97 = ((x513/(x514%x515))&x516);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x518 = 64161LLU;
	uint16_t x519 = 88U;
	uint64_t t98 = 54972LLU;

	t98 = ((x517/(x518%x519))&x520);

	if (t98 != 1553LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x537 = -1;
	int16_t x538 = 97;
	volatile int64_t x539 = INT64_MAX;
	int64_t t99 = 1108992962LL;

	t99 = ((x537/(x538%x539))&x540);

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

