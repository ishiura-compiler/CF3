#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 2671881155777045541LLU;
int16_t x8 = -19;
static int8_t x11 = -1;
static volatile int8_t x15 = 0;
int32_t t3 = -13;
static uint16_t x25 = UINT16_MAX;
uint8_t x28 = UINT8_MAX;
volatile int16_t x29 = INT16_MAX;
int64_t x39 = INT64_MIN;
uint32_t x49 = UINT32_MAX;
static int64_t x55 = INT64_MIN;
uint64_t x56 = 358795901626696LLU;
uint64_t t9 = 2250269684477LLU;
int64_t t11 = 41288935332LL;
uint64_t x65 = 14456960LLU;
int32_t x67 = -1;
static int8_t x100 = INT8_MIN;
int64_t x107 = INT64_MAX;
volatile int8_t x108 = INT8_MAX;
volatile int16_t x111 = -1;
volatile uint64_t t19 = 377456258LLU;
uint64_t x116 = UINT64_MAX;
uint64_t t20 = 23995760172LLU;
int16_t x118 = 6818;
uint16_t x119 = 2U;
volatile int32_t t21 = -13744288;
static uint64_t x131 = UINT64_MAX;
static int32_t t23 = -9;
int8_t x134 = -1;
uint32_t x145 = 180U;
static int8_t x147 = 2;
volatile int64_t x149 = 17762722237LL;
int64_t x150 = 48213019336189LL;
int32_t t27 = -16099;
int16_t x157 = 1;
volatile int32_t t29 = 331865481;
int16_t x175 = INT16_MIN;
static volatile int8_t x185 = INT8_MIN;
volatile uint16_t x187 = 4780U;
uint64_t x191 = 60468LLU;
int16_t x194 = -1;
volatile int32_t t39 = -12025334;
static int32_t t40 = -1;
volatile int64_t x215 = -1LL;
static volatile int64_t x217 = -1LL;
int8_t x242 = 6;
uint16_t x254 = 7392U;
uint16_t x258 = UINT16_MAX;
int64_t x269 = INT64_MAX;
int32_t x270 = 467;
uint32_t x272 = 37867834U;
int64_t x273 = -1LL;
volatile int32_t t53 = 921;
volatile int8_t x283 = INT8_MIN;
int32_t x286 = INT32_MIN;
uint8_t x288 = 34U;
int32_t t57 = 6;
volatile uint32_t x294 = 74816U;
static uint16_t x295 = 91U;
int64_t x296 = INT64_MIN;
static int32_t x301 = 362394;
uint64_t x326 = 9260865046LLU;
uint32_t x329 = UINT32_MAX;
int32_t t66 = 54;
uint8_t x337 = UINT8_MAX;
int16_t x338 = -1;
int64_t x341 = -110783LL;
int32_t t68 = 231;
int8_t x345 = -27;
volatile uint32_t x348 = 295266635U;
uint32_t t69 = 19541U;
uint8_t x350 = 33U;
int32_t t70 = 3565156;
int64_t x356 = INT64_MIN;
uint32_t x358 = 1512U;
int16_t x359 = -674;
int16_t x378 = -8;
uint64_t x380 = 2693657186316LLU;
int16_t x381 = INT16_MIN;
int16_t x388 = -257;
static int16_t x393 = INT16_MAX;
int32_t x407 = -1;
uint64_t x410 = UINT64_MAX;
int32_t x416 = -1;
int64_t x417 = INT64_MIN;
static int64_t x418 = -692110762LL;
uint32_t t83 = 9U;
volatile int16_t x423 = INT16_MIN;
static int32_t x425 = INT32_MIN;
uint8_t x428 = 8U;
int64_t x430 = INT64_MAX;
volatile int8_t x433 = INT8_MIN;
static int16_t x437 = INT16_MIN;
uint64_t x438 = 15479LLU;
uint32_t x455 = 1U;
int32_t x460 = INT32_MAX;
int32_t t92 = -228944;
int32_t x464 = INT32_MIN;
int32_t x475 = 0;
int64_t x479 = 23741572LL;
volatile int64_t x483 = -146LL;
int16_t x486 = INT16_MIN;
uint64_t x488 = 12876215LLU;


void f0(void) {
	uint16_t x2 = 256U;
	int16_t x3 = -1;
	volatile uint16_t x4 = 5U;
	int32_t t0 = 464;

	t0 = (((x1-x2)==x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 11U;
	volatile int8_t x6 = -1;
	volatile int32_t x7 = INT32_MIN;
	int32_t t1 = 11188;

	t1 = (((x5-x6)==x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1455799938LLU;
	int16_t x10 = -1;
	static uint32_t x12 = 5093751U;
	uint32_t t2 = 827705402U;

	t2 = (((x9-x10)==x11)/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -3407LL;
	uint32_t x14 = 19687708U;
	int32_t x16 = -32;

	t3 = (((x13-x14)==x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x26 = 25;
	uint64_t x27 = 1710931230090998762LLU;
	int32_t t4 = -12;

	t4 = (((x25-x26)==x27)/x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x30 = INT32_MAX;
	static uint16_t x31 = 2U;
	static int32_t x32 = -22;
	volatile int32_t t5 = -630154157;

	t5 = (((x29-x30)==x31)/x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -1;
	uint16_t x34 = 1477U;
	uint8_t x35 = 4U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t6 = 41959;

	t6 = (((x33-x34)==x35)/x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = INT16_MIN;
	uint32_t x38 = 51953U;
	static volatile uint64_t x40 = 62297411966759702LLU;
	uint64_t t7 = 188331979256451799LLU;

	t7 = (((x37-x38)==x39)/x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x50 = -398;
	int8_t x51 = 16;
	int8_t x52 = 30;
	int32_t t8 = -373;

	t8 = (((x49-x50)==x51)/x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MIN;

	t9 = (((x53-x54)==x55)/x56);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 0U;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t10 = -327423282;

	t10 = (((x57-x58)==x59)/x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MIN;
	static uint32_t x62 = 35987854U;
	int16_t x63 = INT16_MAX;
	volatile int64_t x64 = INT64_MAX;

	t11 = (((x61-x62)==x63)/x64);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x66 = INT16_MAX;
	static int64_t x68 = INT64_MIN;
	volatile int64_t t12 = 9090498LL;

	t12 = (((x65-x66)==x67)/x68);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = INT64_MAX;
	volatile uint8_t x70 = UINT8_MAX;
	uint64_t x71 = 429978307676017LLU;
	int32_t x72 = INT32_MAX;
	int32_t t13 = -50;

	t13 = (((x69-x70)==x71)/x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	static uint64_t x88 = 33568977973695416LLU;
	volatile uint64_t t14 = 24076617474LLU;

	t14 = (((x85-x86)==x87)/x88);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	int8_t x91 = 0;
	uint64_t x92 = UINT64_MAX;
	uint64_t t15 = 6578LLU;

	t15 = (((x89-x90)==x91)/x92);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = -13774LL;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 552U;
	volatile int32_t t16 = -55820;

	t16 = (((x97-x98)==x99)/x100);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = -125045103;
	static int32_t x102 = -157139572;
	int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MIN;
	volatile int32_t t17 = 73;

	t17 = (((x101-x102)==x103)/x104);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = -1;
	int8_t x106 = -14;
	int32_t t18 = -87628686;

	t18 = (((x105-x106)==x107)/x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = -14613;
	int8_t x110 = INT8_MAX;
	uint64_t x112 = 45076629086829LLU;

	t19 = (((x109-x110)==x111)/x112);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x113 = 110743221;
	uint8_t x114 = 15U;
	static uint16_t x115 = UINT16_MAX;

	t20 = (((x113-x114)==x115)/x116);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x117 = 2044U;
	uint8_t x120 = UINT8_MAX;

	t21 = (((x117-x118)==x119)/x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = 908811710;
	uint8_t x127 = 1U;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t22 = 5558281LLU;

	t22 = (((x125-x126)==x127)/x128);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x129 = INT64_MIN;
	volatile int8_t x130 = INT8_MIN;
	int32_t x132 = INT32_MIN;

	t23 = (((x129-x130)==x131)/x132);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x133 = 0U;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MAX;
	int32_t t24 = 455875;

	t24 = (((x133-x134)==x135)/x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x141 = 244216U;
	static uint32_t x142 = 33U;
	volatile uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t25 = 6215125;

	t25 = (((x141-x142)==x143)/x144);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x146 = 22;
	int16_t x148 = -1;
	int32_t t26 = 13698;

	t26 = (((x145-x146)==x147)/x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x151 = INT64_MAX;
	uint8_t x152 = UINT8_MAX;

	t27 = (((x149-x150)==x151)/x152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x153 = INT8_MIN;
	int64_t x154 = -1LL;
	uint16_t x155 = 357U;
	uint32_t x156 = 61U;
	uint32_t t28 = 76235157U;

	t28 = (((x153-x154)==x155)/x156);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x158 = UINT8_MAX;
	int32_t x159 = -1773;
	uint8_t x160 = 10U;

	t29 = (((x157-x158)==x159)/x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x161 = 0U;
	static int16_t x162 = INT16_MIN;
	uint64_t x163 = 455177812LLU;
	volatile uint8_t x164 = 46U;
	int32_t t30 = 2849908;

	t30 = (((x161-x162)==x163)/x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = 8010467;
	uint8_t x166 = 6U;
	volatile int32_t x167 = 3;
	volatile int32_t x168 = INT32_MIN;
	int32_t t31 = 685150142;

	t31 = (((x165-x166)==x167)/x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x169 = UINT64_MAX;
	uint16_t x170 = UINT16_MAX;
	volatile uint16_t x171 = 93U;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t32 = -302684646;

	t32 = (((x169-x170)==x171)/x172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = 50;
	int16_t x174 = -1;
	int16_t x176 = INT16_MAX;
	volatile int32_t t33 = -239;

	t33 = (((x173-x174)==x175)/x176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	int16_t x184 = 3270;
	volatile int32_t t34 = -11365;

	t34 = (((x181-x182)==x183)/x184);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x186 = UINT32_MAX;
	int16_t x188 = INT16_MIN;
	int32_t t35 = -757160412;

	t35 = (((x185-x186)==x187)/x188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = 65U;
	int64_t x190 = INT64_MAX;
	volatile int8_t x192 = -1;
	volatile int32_t t36 = 25876;

	t36 = (((x189-x190)==x191)/x192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x193 = INT32_MIN;
	int8_t x195 = -26;
	volatile int8_t x196 = -1;
	volatile int32_t t37 = 227;

	t37 = (((x193-x194)==x195)/x196);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x197 = UINT64_MAX;
	volatile uint32_t x198 = UINT32_MAX;
	uint8_t x199 = 77U;
	uint32_t x200 = 1U;
	static uint32_t t38 = 1305U;

	t38 = (((x197-x198)==x199)/x200);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x201 = 292U;
	volatile int16_t x202 = INT16_MAX;
	uint16_t x203 = UINT16_MAX;
	int32_t x204 = INT32_MIN;

	t39 = (((x201-x202)==x203)/x204);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = UINT16_MAX;
	volatile int64_t x206 = INT64_MAX;
	static uint64_t x207 = 166247LLU;
	uint8_t x208 = 22U;

	t40 = (((x205-x206)==x207)/x208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x209 = 3U;
	uint8_t x210 = 94U;
	static int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;
	int64_t t41 = -2921983777817526LL;

	t41 = (((x209-x210)==x211)/x212);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x213 = 1LL;
	static int8_t x214 = -1;
	int32_t x216 = -23;
	volatile int32_t t42 = -7229181;

	t42 = (((x213-x214)==x215)/x216);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x218 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;
	int64_t t43 = -30LL;

	t43 = (((x217-x218)==x219)/x220);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x221 = -1;
	volatile int16_t x222 = INT16_MAX;
	uint64_t x223 = 42570225383699322LLU;
	uint8_t x224 = UINT8_MAX;
	int32_t t44 = 1376330;

	t44 = (((x221-x222)==x223)/x224);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x225 = -1;
	int32_t x226 = INT32_MIN;
	volatile uint32_t x227 = UINT32_MAX;
	volatile uint16_t x228 = 3U;
	int32_t t45 = 8085;

	t45 = (((x225-x226)==x227)/x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x229 = -1LL;
	int8_t x230 = 55;
	int16_t x231 = INT16_MAX;
	int64_t x232 = INT64_MIN;
	volatile int64_t t46 = -2LL;

	t46 = (((x229-x230)==x231)/x232);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = 430;
	volatile int16_t x234 = INT16_MIN;
	volatile int64_t x235 = -1LL;
	int8_t x236 = INT8_MIN;
	volatile int32_t t47 = 448596;

	t47 = (((x233-x234)==x235)/x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x241 = UINT64_MAX;
	volatile uint32_t x243 = 18798292U;
	int32_t x244 = INT32_MAX;
	volatile int32_t t48 = 62155815;

	t48 = (((x241-x242)==x243)/x244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x253 = INT16_MIN;
	static uint32_t x255 = 7970U;
	volatile int32_t x256 = 1973;
	int32_t t49 = -1;

	t49 = (((x253-x254)==x255)/x256);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x257 = -1LL;
	uint32_t x259 = 11047U;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t50 = -221017509;

	t50 = (((x257-x258)==x259)/x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x261 = 30302641LLU;
	int8_t x262 = INT8_MIN;
	static int64_t x263 = -502030959LL;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t51 = 4709463456815LLU;

	t51 = (((x261-x262)==x263)/x264);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x271 = UINT16_MAX;
	volatile uint32_t t52 = 1731U;

	t52 = (((x269-x270)==x271)/x272);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x274 = 7305418269866341861LLU;
	int16_t x275 = -1;
	volatile int16_t x276 = -1;

	t53 = (((x273-x274)==x275)/x276);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x277 = 1305085751165172813LLU;
	uint16_t x278 = UINT16_MAX;
	int16_t x279 = -1;
	int8_t x280 = -1;
	int32_t t54 = 282882;

	t54 = (((x277-x278)==x279)/x280);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x281 = -301;
	static volatile int64_t x282 = 8396998963LL;
	uint16_t x284 = 3U;
	volatile int32_t t55 = -2;

	t55 = (((x281-x282)==x283)/x284);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x285 = 163261U;
	volatile int64_t x287 = -1LL;
	int32_t t56 = -17028717;

	t56 = (((x285-x286)==x287)/x288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = -40;
	static volatile int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;

	t57 = (((x289-x290)==x291)/x292);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x293 = INT8_MIN;
	volatile int64_t t58 = 6698LL;

	t58 = (((x293-x294)==x295)/x296);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x297 = 10U;
	static uint64_t x298 = 23206465331320LLU;
	uint64_t x299 = 140850173742LLU;
	int16_t x300 = INT16_MAX;
	volatile int32_t t59 = 11907557;

	t59 = (((x297-x298)==x299)/x300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x302 = 54U;
	static uint8_t x303 = 2U;
	int64_t x304 = INT64_MIN;
	volatile int64_t t60 = 664LL;

	t60 = (((x301-x302)==x303)/x304);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = INT16_MIN;
	volatile uint64_t x306 = UINT64_MAX;
	int16_t x307 = -1;
	volatile int16_t x308 = INT16_MIN;
	static volatile int32_t t61 = -5;

	t61 = (((x305-x306)==x307)/x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = INT16_MIN;
	volatile int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = 1898;
	volatile int32_t t62 = 1782;

	t62 = (((x309-x310)==x311)/x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x313 = 5U;
	volatile int32_t x314 = INT32_MAX;
	uint64_t x315 = 246936493806503LLU;
	static int32_t x316 = INT32_MAX;
	volatile int32_t t63 = -295316006;

	t63 = (((x313-x314)==x315)/x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MIN;
	volatile int32_t x319 = -111;
	int8_t x320 = INT8_MAX;
	int32_t t64 = -171507;

	t64 = (((x317-x318)==x319)/x320);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x325 = 52U;
	int32_t x327 = 876820;
	int64_t x328 = INT64_MIN;
	volatile int64_t t65 = -632436913829335LL;

	t65 = (((x325-x326)==x327)/x328);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x330 = 3154;
	uint8_t x331 = 1U;
	int16_t x332 = INT16_MAX;

	t66 = (((x329-x330)==x331)/x332);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x339 = 11180;
	volatile int8_t x340 = -6;
	static volatile int32_t t67 = -1865;

	t67 = (((x337-x338)==x339)/x340);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x342 = INT32_MIN;
	volatile int16_t x343 = -1;
	uint16_t x344 = 954U;

	t68 = (((x341-x342)==x343)/x344);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x346 = INT16_MIN;
	volatile int64_t x347 = -1LL;

	t69 = (((x345-x346)==x347)/x348);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x349 = -3;
	uint16_t x351 = 116U;
	uint8_t x352 = 4U;

	t70 = (((x349-x350)==x351)/x352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = -1;
	int32_t x355 = INT32_MAX;
	volatile int64_t t71 = -17024525813167179LL;

	t71 = (((x353-x354)==x355)/x356);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x357 = INT32_MAX;
	volatile uint64_t x360 = 311411057LLU;
	static volatile uint64_t t72 = 3749LLU;

	t72 = (((x357-x358)==x359)/x360);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x377 = INT16_MIN;
	uint8_t x379 = 4U;
	volatile uint64_t t73 = 1654505413495LLU;

	t73 = (((x377-x378)==x379)/x380);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x382 = -88LL;
	uint64_t x383 = 57LLU;
	int32_t x384 = INT32_MAX;
	int32_t t74 = -745003;

	t74 = (((x381-x382)==x383)/x384);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x385 = 1;
	int8_t x386 = INT8_MAX;
	volatile int32_t x387 = INT32_MAX;
	static volatile int32_t t75 = -3;

	t75 = (((x385-x386)==x387)/x388);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x389 = 2134;
	int32_t x390 = -7619;
	int64_t x391 = INT64_MAX;
	volatile int16_t x392 = 5242;
	static volatile int32_t t76 = -7;

	t76 = (((x389-x390)==x391)/x392);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x394 = -16LL;
	volatile int32_t x395 = INT32_MIN;
	static volatile int16_t x396 = -1;
	int32_t t77 = -9857997;

	t77 = (((x393-x394)==x395)/x396);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x397 = -55;
	int8_t x398 = INT8_MIN;
	int64_t x399 = 297988385LL;
	uint32_t x400 = 33838905U;
	static volatile uint32_t t78 = 24U;

	t78 = (((x397-x398)==x399)/x400);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = -384;
	int64_t x403 = INT64_MAX;
	static int16_t x404 = INT16_MIN;
	volatile int32_t t79 = -326;

	t79 = (((x401-x402)==x403)/x404);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x405 = 5U;
	volatile int16_t x406 = INT16_MAX;
	int32_t x408 = -918839958;
	volatile int32_t t80 = -7801969;

	t80 = (((x405-x406)==x407)/x408);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x409 = 1U;
	int32_t x411 = -1;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t81 = -23740954;

	t81 = (((x409-x410)==x411)/x412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x414 = INT64_MIN;
	int8_t x415 = INT8_MIN;
	volatile int32_t t82 = 120149;

	t82 = (((x413-x414)==x415)/x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x419 = INT8_MAX;
	uint32_t x420 = 23U;

	t83 = (((x417-x418)==x419)/x420);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x421 = -1;
	int16_t x422 = 1;
	volatile int16_t x424 = -6;
	volatile int32_t t84 = -41975973;

	t84 = (((x421-x422)==x423)/x424);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x426 = -214;
	int32_t x427 = INT32_MIN;
	int32_t t85 = 12416171;

	t85 = (((x425-x426)==x427)/x428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x429 = 15242085044LL;
	int64_t x431 = 24LL;
	int16_t x432 = -271;
	volatile int32_t t86 = 6;

	t86 = (((x429-x430)==x431)/x432);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x434 = 4;
	volatile int16_t x435 = INT16_MIN;
	static volatile int8_t x436 = -9;
	volatile int32_t t87 = -7021592;

	t87 = (((x433-x434)==x435)/x436);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x439 = 5U;
	int16_t x440 = -1;
	int32_t t88 = 13291;

	t88 = (((x437-x438)==x439)/x440);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x441 = UINT64_MAX;
	int16_t x442 = INT16_MIN;
	uint64_t x443 = 353587LLU;
	volatile int32_t x444 = 796562;
	volatile int32_t t89 = -1719;

	t89 = (((x441-x442)==x443)/x444);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MIN;
	int64_t x447 = -54534843123361LL;
	int16_t x448 = -1;
	volatile int32_t t90 = -3196193;

	t90 = (((x445-x446)==x447)/x448);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x453 = 15;
	static volatile int64_t x454 = -526778544801LL;
	int16_t x456 = -1090;
	int32_t t91 = 25308;

	t91 = (((x453-x454)==x455)/x456);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x457 = -1;
	uint64_t x458 = UINT64_MAX;
	int16_t x459 = INT16_MIN;

	t92 = (((x457-x458)==x459)/x460);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x461 = UINT32_MAX;
	int32_t x462 = 2;
	volatile uint32_t x463 = 25675U;
	volatile int32_t t93 = 20380;

	t93 = (((x461-x462)==x463)/x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x465 = UINT64_MAX;
	volatile int8_t x466 = -2;
	int64_t x467 = -411278171LL;
	int64_t x468 = INT64_MIN;
	volatile int64_t t94 = 1594630849514809098LL;

	t94 = (((x465-x466)==x467)/x468);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x473 = 814447384U;
	int16_t x474 = -1;
	volatile uint16_t x476 = 5262U;
	static volatile int32_t t95 = 150188077;

	t95 = (((x473-x474)==x475)/x476);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x477 = INT32_MIN;
	static int8_t x478 = -1;
	volatile int16_t x480 = -1;
	volatile int32_t t96 = -75;

	t96 = (((x477-x478)==x479)/x480);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x481 = -1LL;
	int64_t x482 = -1LL;
	static volatile uint8_t x484 = 11U;
	volatile int32_t t97 = -387;

	t97 = (((x481-x482)==x483)/x484);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x485 = INT8_MAX;
	volatile uint64_t x487 = 50024362257029716LLU;
	uint64_t t98 = 46752648160997791LLU;

	t98 = (((x485-x486)==x487)/x488);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x489 = 1123;
	int64_t x490 = -1LL;
	static volatile int16_t x491 = 601;
	volatile int16_t x492 = -1;
	int32_t t99 = -2328;

	t99 = (((x489-x490)==x491)/x492);

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

