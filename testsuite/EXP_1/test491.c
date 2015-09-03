#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
uint8_t x13 = UINT8_MAX;
int32_t x16 = INT32_MIN;
int8_t x25 = -53;
int16_t x33 = INT16_MAX;
int64_t x42 = INT64_MAX;
uint64_t x57 = UINT64_MAX;
int8_t x63 = -4;
static volatile int32_t t9 = 2382473;
static int16_t x72 = INT16_MIN;
int8_t x78 = -49;
int8_t x89 = 0;
int8_t x90 = 0;
uint64_t x97 = 9152841095300480576LLU;
int32_t t16 = 89773;
volatile int64_t x103 = INT64_MIN;
uint64_t x106 = 2136960376197048LLU;
int64_t x116 = INT64_MIN;
int16_t x117 = 1;
int32_t x120 = INT32_MIN;
static volatile int32_t t20 = 644;
volatile uint64_t x123 = 12116902298LLU;
static volatile int32_t x135 = -1;
static volatile int64_t x138 = -1LL;
int16_t x139 = INT16_MIN;
uint8_t x142 = 0U;
static int32_t t24 = 1371;
static int32_t x156 = -1;
int32_t t25 = -1911;
static uint32_t x162 = 2U;
static volatile int8_t x169 = 23;
uint8_t x181 = UINT8_MAX;
int64_t x183 = INT64_MIN;
volatile int32_t t29 = 68698821;
int32_t t31 = -201272;
volatile int32_t t33 = -1382611;
int16_t x209 = -1;
int32_t x213 = 33;
volatile int32_t x214 = -183;
volatile int32_t x215 = -1;
volatile int32_t t35 = -10;
uint16_t x217 = 6564U;
volatile int64_t x219 = INT64_MIN;
int16_t x222 = -1;
volatile int32_t t37 = -11;
volatile int16_t x225 = INT16_MIN;
uint16_t x230 = 28U;
static volatile int32_t t40 = 647994099;
uint16_t x245 = UINT16_MAX;
int8_t x247 = INT8_MIN;
int32_t t42 = 3;
int16_t x249 = INT16_MIN;
int32_t t43 = -13;
static int64_t x262 = -32238550016805LL;
static int32_t x267 = -1;
uint16_t x277 = 1965U;
int16_t x279 = -1;
uint64_t x292 = 13581572LLU;
volatile int32_t t50 = -3621294;
int16_t x309 = 5;
static volatile uint64_t x311 = 458037LLU;
int32_t t54 = 3;
static volatile uint16_t x315 = UINT16_MAX;
static int32_t x316 = -29322649;
int16_t x319 = 90;
volatile int8_t x323 = INT8_MIN;
int8_t x324 = INT8_MAX;
int64_t x331 = -1LL;
int16_t x332 = INT16_MAX;
int32_t x345 = -1;
int8_t x350 = INT8_MIN;
volatile int32_t t63 = 33359;
int16_t x353 = 0;
volatile int8_t x366 = INT8_MAX;
volatile int32_t t66 = -83375103;
uint8_t x378 = 30U;
int32_t x386 = -1;
static volatile uint64_t x391 = 115LLU;
int8_t x401 = 7;
int32_t t73 = 10066;
static int32_t x416 = INT32_MIN;
static int32_t t75 = 1626;
volatile int8_t x421 = 2;
uint16_t x423 = 3U;
int64_t x424 = 4024LL;
static int32_t x426 = 5;
uint32_t x427 = 1599855U;
static int64_t x431 = INT64_MIN;
int16_t x432 = 2539;
volatile int32_t t80 = -68786417;
uint64_t x437 = 167989560140132054LLU;
volatile int8_t x459 = -1;
int16_t x463 = INT16_MIN;
volatile int32_t t84 = 206494194;
volatile int32_t t85 = -8132;
int64_t x487 = -1LL;
static int16_t x496 = 12468;
uint8_t x498 = 30U;
int16_t x500 = 662;
static volatile uint32_t x502 = UINT32_MAX;
uint64_t x504 = UINT64_MAX;
volatile uint32_t x506 = 967U;
uint64_t x516 = 32621256LLU;
int32_t t94 = -2746302;
volatile int32_t t95 = 398381;
static uint64_t x523 = UINT64_MAX;
volatile int8_t x528 = -14;
volatile int16_t x536 = 35;


void f0(void) {
	int8_t x1 = 12;
	uint32_t x2 = UINT32_MAX;
	int16_t x3 = -1;
	volatile int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -1;

	t0 = (((x1*x2)|x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	int8_t x7 = INT8_MAX;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 84985794;

	t1 = (((x5*x6)|x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = -239LL;
	uint8_t x11 = UINT8_MAX;
	static volatile int64_t x12 = -1LL;
	static volatile int32_t t2 = -723419;

	t2 = (((x9*x10)|x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	static int64_t x15 = INT64_MIN;
	volatile int32_t t3 = -212;

	t3 = (((x13*x14)|x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x26 = UINT8_MAX;
	static uint64_t x27 = 1LLU;
	int16_t x28 = -4383;
	volatile int32_t t4 = 0;

	t4 = (((x25*x26)|x27)<=x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x34 = 3;
	int8_t x35 = 0;
	int8_t x36 = INT8_MAX;
	static int32_t t5 = -7972213;

	t5 = (((x33*x34)|x35)<=x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x41 = -1;
	static int16_t x43 = 0;
	uint8_t x44 = 14U;
	static volatile int32_t t6 = -819;

	t6 = (((x41*x42)|x43)<=x44);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x58 = 3U;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t7 = 522;

	t7 = (((x57*x58)|x59)<=x60);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = -1;
	int64_t x62 = INT64_MAX;
	volatile int32_t x64 = 1408;
	static volatile int32_t t8 = -1;

	t8 = (((x61*x62)|x63)<=x64);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x65 = 2U;
	volatile int64_t x66 = -1LL;
	static int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;

	t9 = (((x65*x66)|x67)<=x68);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = -41;
	uint64_t x70 = 423145884591LLU;
	volatile uint8_t x71 = 1U;
	volatile int32_t t10 = 156271;

	t10 = (((x69*x70)|x71)<=x72);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x73 = -1LL;
	int8_t x74 = 1;
	int32_t x75 = -12767092;
	static int16_t x76 = -12;
	static volatile int32_t t11 = -5413210;

	t11 = (((x73*x74)|x75)<=x76);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x77 = -217;
	int8_t x79 = 26;
	int8_t x80 = INT8_MAX;
	int32_t t12 = 13558048;

	t12 = (((x77*x78)|x79)<=x80);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 131794349U;
	int32_t x86 = INT32_MAX;
	int32_t x87 = 3;
	volatile uint64_t x88 = 47989311312436LLU;
	static int32_t t13 = 1;

	t13 = (((x85*x86)|x87)<=x88);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x91 = UINT64_MAX;
	uint32_t x92 = 1460409255U;
	static int32_t t14 = 32;

	t14 = (((x89*x90)|x91)<=x92);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x93 = -1LL;
	uint16_t x94 = 1U;
	volatile int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = 7262U;
	static volatile int32_t t15 = -3628682;

	t15 = (((x93*x94)|x95)<=x96);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x98 = 6026;
	int32_t x99 = INT32_MIN;
	static int64_t x100 = INT64_MIN;

	t16 = (((x97*x98)|x99)<=x100);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = 91LLU;
	int8_t x102 = 36;
	static uint8_t x104 = 7U;
	int32_t t17 = 881399348;

	t17 = (((x101*x102)|x103)<=x104);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x105 = -1;
	int64_t x107 = 100219937458LL;
	int64_t x108 = -1LL;
	volatile int32_t t18 = -3;

	t18 = (((x105*x106)|x107)<=x108);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x113 = INT16_MAX;
	static int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int32_t t19 = -2;

	t19 = (((x113*x114)|x115)<=x116);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x118 = 4;
	int8_t x119 = INT8_MAX;

	t20 = (((x117*x118)|x119)<=x120);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MAX;
	static uint64_t x122 = UINT64_MAX;
	uint32_t x124 = 34593139U;
	int32_t t21 = -1221;

	t21 = (((x121*x122)|x123)<=x124);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x133 = 10LLU;
	volatile int16_t x134 = 8;
	int32_t x136 = INT32_MIN;
	volatile int32_t t22 = 42;

	t22 = (((x133*x134)|x135)<=x136);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x137 = -57;
	int8_t x140 = INT8_MAX;
	int32_t t23 = 0;

	t23 = (((x137*x138)|x139)<=x140);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x141 = 20LLU;
	static uint8_t x143 = UINT8_MAX;
	static volatile int64_t x144 = -20585635274702201LL;

	t24 = (((x141*x142)|x143)<=x144);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x153 = -1;
	uint32_t x154 = UINT32_MAX;
	volatile int32_t x155 = INT32_MAX;

	t25 = (((x153*x154)|x155)<=x156);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x161 = INT8_MIN;
	uint64_t x163 = 913LLU;
	static volatile uint16_t x164 = 4U;
	static int32_t t26 = 624;

	t26 = (((x161*x162)|x163)<=x164);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x170 = 371U;
	uint16_t x171 = 2274U;
	static int16_t x172 = 507;
	int32_t t27 = 968359181;

	t27 = (((x169*x170)|x171)<=x172);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x182 = 2U;
	uint8_t x184 = 1U;
	int32_t t28 = -4216215;

	t28 = (((x181*x182)|x183)<=x184);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x185 = 108900270603LLU;
	static int32_t x186 = INT32_MIN;
	static int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;

	t29 = (((x185*x186)|x187)<=x188);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x189 = -1;
	uint8_t x190 = 1U;
	int64_t x191 = INT64_MAX;
	uint16_t x192 = 13430U;
	volatile int32_t t30 = 6;

	t30 = (((x189*x190)|x191)<=x192);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x193 = 8270354906LL;
	int16_t x194 = INT16_MAX;
	int32_t x195 = INT32_MAX;
	uint32_t x196 = 58U;

	t31 = (((x193*x194)|x195)<=x196);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x201 = 1204;
	int32_t x202 = -1;
	int8_t x203 = -1;
	static int64_t x204 = -3486508339259356LL;
	volatile int32_t t32 = 122830;

	t32 = (((x201*x202)|x203)<=x204);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x205 = 77U;
	volatile uint32_t x206 = 12565953U;
	volatile int16_t x207 = 2;
	static int64_t x208 = 3681300LL;

	t33 = (((x205*x206)|x207)<=x208);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x210 = UINT64_MAX;
	uint32_t x211 = UINT32_MAX;
	uint64_t x212 = UINT64_MAX;
	static volatile int32_t t34 = -13;

	t34 = (((x209*x210)|x211)<=x212);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x216 = 671;

	t35 = (((x213*x214)|x215)<=x216);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x218 = 6LL;
	int16_t x220 = -30;
	static volatile int32_t t36 = -5;

	t36 = (((x217*x218)|x219)<=x220);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x221 = 231867836832652902LLU;
	int64_t x223 = -264640798712755LL;
	volatile int64_t x224 = 553LL;

	t37 = (((x221*x222)|x223)<=x224);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x226 = -1LL;
	int8_t x227 = -9;
	volatile int16_t x228 = -1;
	volatile int32_t t38 = 121737;

	t38 = (((x225*x226)|x227)<=x228);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x229 = 44;
	volatile uint64_t x231 = 205660162103965315LLU;
	static uint8_t x232 = 7U;
	int32_t t39 = 176899;

	t39 = (((x229*x230)|x231)<=x232);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x233 = INT8_MAX;
	uint64_t x234 = 8606605481353296825LLU;
	int32_t x235 = -1;
	static int16_t x236 = INT16_MAX;

	t40 = (((x233*x234)|x235)<=x236);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x241 = 125U;
	uint64_t x242 = 1555404211969LLU;
	int8_t x243 = 22;
	volatile uint16_t x244 = 117U;
	volatile int32_t t41 = 26183881;

	t41 = (((x241*x242)|x243)<=x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x246 = INT16_MAX;
	int8_t x248 = INT8_MIN;

	t42 = (((x245*x246)|x247)<=x248);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x250 = -1;
	uint16_t x251 = 14U;
	uint32_t x252 = 311U;

	t43 = (((x249*x250)|x251)<=x252);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = -1;
	uint8_t x258 = 5U;
	static int16_t x259 = INT16_MIN;
	int64_t x260 = -1LL;
	int32_t t44 = 13;

	t44 = (((x257*x258)|x259)<=x260);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x261 = -1;
	volatile uint8_t x263 = 43U;
	int8_t x264 = -1;
	int32_t t45 = -15;

	t45 = (((x261*x262)|x263)<=x264);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x265 = 90U;
	static int8_t x266 = INT8_MIN;
	int64_t x268 = INT64_MAX;
	static int32_t t46 = -672;

	t46 = (((x265*x266)|x267)<=x268);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x273 = 105U;
	volatile uint32_t x274 = 8119256U;
	int16_t x275 = INT16_MIN;
	uint64_t x276 = UINT64_MAX;
	int32_t t47 = -764;

	t47 = (((x273*x274)|x275)<=x276);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x278 = 563073504749LL;
	volatile uint16_t x280 = 1666U;
	volatile int32_t t48 = 1064;

	t48 = (((x277*x278)|x279)<=x280);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x285 = 298916912890LLU;
	static int64_t x286 = INT64_MAX;
	static int32_t x287 = INT32_MIN;
	volatile uint32_t x288 = 71U;
	int32_t t49 = 1;

	t49 = (((x285*x286)|x287)<=x288);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x289 = 1085962962472LLU;
	int64_t x290 = -54879LL;
	int8_t x291 = -48;

	t50 = (((x289*x290)|x291)<=x292);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x297 = 13179251LLU;
	volatile int8_t x298 = INT8_MIN;
	static int32_t x299 = INT32_MAX;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t51 = 30;

	t51 = (((x297*x298)|x299)<=x300);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x301 = INT16_MIN;
	uint8_t x302 = 43U;
	volatile int16_t x303 = 0;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t52 = 76;

	t52 = (((x301*x302)|x303)<=x304);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x305 = -1;
	volatile uint32_t x306 = UINT32_MAX;
	int8_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int32_t t53 = -24790;

	t53 = (((x305*x306)|x307)<=x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x310 = -460;
	int16_t x312 = -1;

	t54 = (((x309*x310)|x311)<=x312);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x313 = UINT64_MAX;
	volatile uint64_t x314 = UINT64_MAX;
	volatile int32_t t55 = -1;

	t55 = (((x313*x314)|x315)<=x316);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int8_t x318 = -1;
	uint64_t x320 = 1018595709675LLU;
	volatile int32_t t56 = 21960629;

	t56 = (((x317*x318)|x319)<=x320);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x321 = 20U;
	static int8_t x322 = INT8_MIN;
	volatile int32_t t57 = -57644018;

	t57 = (((x321*x322)|x323)<=x324);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = -1LL;
	uint8_t x326 = UINT8_MAX;
	static volatile uint64_t x327 = 57756LLU;
	uint8_t x328 = UINT8_MAX;
	int32_t t58 = -92788599;

	t58 = (((x325*x326)|x327)<=x328);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x329 = 50;
	volatile int64_t x330 = -3449671539LL;
	int32_t t59 = 268544;

	t59 = (((x329*x330)|x331)<=x332);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x337 = -1LL;
	uint16_t x338 = 16U;
	static int32_t x339 = INT32_MIN;
	volatile int32_t x340 = -3052;
	int32_t t60 = -6016;

	t60 = (((x337*x338)|x339)<=x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x341 = -1;
	int32_t x342 = 3372816;
	int16_t x343 = INT16_MIN;
	int16_t x344 = 870;
	volatile int32_t t61 = 38957;

	t61 = (((x341*x342)|x343)<=x344);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x346 = -10354082897677LL;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = 1262U;
	int32_t t62 = -3181;

	t62 = (((x345*x346)|x347)<=x348);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x351 = INT32_MAX;
	int16_t x352 = 96;

	t63 = (((x349*x350)|x351)<=x352);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x354 = 0;
	static int16_t x355 = INT16_MAX;
	static volatile uint32_t x356 = 15572809U;
	int32_t t64 = -8410174;

	t64 = (((x353*x354)|x355)<=x356);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x365 = -1;
	int16_t x367 = INT16_MIN;
	volatile int32_t x368 = -1;
	int32_t t65 = 433;

	t65 = (((x365*x366)|x367)<=x368);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = 785LL;
	int16_t x370 = INT16_MIN;
	volatile int8_t x371 = INT8_MIN;
	volatile int16_t x372 = -1;

	t66 = (((x369*x370)|x371)<=x372);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x373 = -1;
	static int32_t x374 = -9407;
	volatile uint16_t x375 = UINT16_MAX;
	int32_t x376 = -65633;
	volatile int32_t t67 = 1387881;

	t67 = (((x373*x374)|x375)<=x376);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x377 = INT16_MAX;
	uint8_t x379 = 1U;
	int32_t x380 = INT32_MAX;
	volatile int32_t t68 = -1;

	t68 = (((x377*x378)|x379)<=x380);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = 19;
	int8_t x383 = 13;
	int8_t x384 = 3;
	volatile int32_t t69 = 7498835;

	t69 = (((x381*x382)|x383)<=x384);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x385 = -1;
	uint32_t x387 = UINT32_MAX;
	uint16_t x388 = UINT16_MAX;
	int32_t t70 = -110836704;

	t70 = (((x385*x386)|x387)<=x388);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x389 = 129725375U;
	int32_t x390 = -1;
	uint32_t x392 = 2058U;
	volatile int32_t t71 = -1532;

	t71 = (((x389*x390)|x391)<=x392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x393 = 1U;
	volatile int16_t x394 = INT16_MIN;
	static volatile uint16_t x395 = 44U;
	static uint8_t x396 = 4U;
	volatile int32_t t72 = -35;

	t72 = (((x393*x394)|x395)<=x396);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x402 = INT8_MIN;
	uint64_t x403 = 3457773083069816LLU;
	static int8_t x404 = INT8_MIN;

	t73 = (((x401*x402)|x403)<=x404);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x405 = INT16_MIN;
	static int16_t x406 = INT16_MIN;
	int16_t x407 = 11979;
	volatile uint16_t x408 = 82U;
	volatile int32_t t74 = 12019;

	t74 = (((x405*x406)|x407)<=x408);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x413 = 7U;
	static uint8_t x414 = 0U;
	static int8_t x415 = INT8_MAX;

	t75 = (((x413*x414)|x415)<=x416);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x417 = INT64_MAX;
	int16_t x418 = -1;
	uint8_t x419 = 0U;
	static volatile int16_t x420 = 167;
	static int32_t t76 = -345975330;

	t76 = (((x417*x418)|x419)<=x420);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x422 = -281;
	volatile int32_t t77 = 59631;

	t77 = (((x421*x422)|x423)<=x424);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x425 = 101U;
	static int16_t x428 = -84;
	int32_t t78 = 154758;

	t78 = (((x425*x426)|x427)<=x428);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x429 = 6LL;
	uint8_t x430 = UINT8_MAX;
	int32_t t79 = 126;

	t79 = (((x429*x430)|x431)<=x432);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x433 = -1;
	uint16_t x434 = 335U;
	int32_t x435 = -82;
	static uint32_t x436 = UINT32_MAX;

	t80 = (((x433*x434)|x435)<=x436);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x438 = 568U;
	int16_t x439 = INT16_MIN;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t81 = -45894;

	t81 = (((x437*x438)|x439)<=x440);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x441 = INT8_MAX;
	static uint32_t x442 = UINT32_MAX;
	uint32_t x443 = UINT32_MAX;
	int64_t x444 = -961446LL;
	volatile int32_t t82 = 52394;

	t82 = (((x441*x442)|x443)<=x444);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x457 = 8531839253520936LLU;
	int16_t x458 = -7931;
	static volatile int16_t x460 = 27;
	volatile int32_t t83 = -431;

	t83 = (((x457*x458)|x459)<=x460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x461 = INT8_MIN;
	int32_t x462 = -2662497;
	static uint8_t x464 = UINT8_MAX;

	t84 = (((x461*x462)|x463)<=x464);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x473 = -21;
	static volatile int16_t x474 = INT16_MIN;
	volatile int32_t x475 = INT32_MIN;
	static int8_t x476 = INT8_MAX;

	t85 = (((x473*x474)|x475)<=x476);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x477 = 0;
	int16_t x478 = 179;
	static int16_t x479 = -94;
	int64_t x480 = INT64_MAX;
	volatile int32_t t86 = 2;

	t86 = (((x477*x478)|x479)<=x480);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x481 = -1;
	uint64_t x482 = UINT64_MAX;
	int64_t x483 = 216234334LL;
	int8_t x484 = INT8_MIN;
	volatile int32_t t87 = 2020901;

	t87 = (((x481*x482)|x483)<=x484);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x485 = UINT64_MAX;
	int8_t x486 = -1;
	uint32_t x488 = 121775341U;
	volatile int32_t t88 = 375;

	t88 = (((x485*x486)|x487)<=x488);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x493 = INT16_MIN;
	volatile uint64_t x494 = 12319141344796LLU;
	int8_t x495 = -1;
	volatile int32_t t89 = -27714243;

	t89 = (((x493*x494)|x495)<=x496);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x497 = UINT16_MAX;
	static volatile int64_t x499 = INT64_MIN;
	static volatile int32_t t90 = -365295;

	t90 = (((x497*x498)|x499)<=x500);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x501 = 1U;
	volatile int64_t x503 = 112LL;
	int32_t t91 = -1834848;

	t91 = (((x501*x502)|x503)<=x504);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x505 = INT32_MIN;
	uint64_t x507 = UINT64_MAX;
	int8_t x508 = 3;
	volatile int32_t t92 = 18148;

	t92 = (((x505*x506)|x507)<=x508);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x509 = 101U;
	int16_t x510 = INT16_MAX;
	volatile int8_t x511 = INT8_MAX;
	static int16_t x512 = INT16_MIN;
	int32_t t93 = -72616837;

	t93 = (((x509*x510)|x511)<=x512);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x513 = INT16_MIN;
	uint64_t x514 = 1580827640LLU;
	volatile int64_t x515 = INT64_MAX;

	t94 = (((x513*x514)|x515)<=x516);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x517 = 6;
	uint32_t x518 = 16121U;
	uint64_t x519 = UINT64_MAX;
	int8_t x520 = -1;

	t95 = (((x517*x518)|x519)<=x520);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x521 = 21;
	static int8_t x522 = -1;
	static volatile int32_t x524 = INT32_MIN;
	volatile int32_t t96 = -27;

	t96 = (((x521*x522)|x523)<=x524);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x525 = INT8_MIN;
	volatile uint16_t x526 = UINT16_MAX;
	static volatile int64_t x527 = 103877495629LL;
	int32_t t97 = -11668595;

	t97 = (((x525*x526)|x527)<=x528);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x533 = 2U;
	int16_t x534 = INT16_MIN;
	int16_t x535 = -1;
	int32_t t98 = -995335837;

	t98 = (((x533*x534)|x535)<=x536);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x537 = -1;
	static int32_t x538 = -1;
	volatile int64_t x539 = -224LL;
	static volatile uint32_t x540 = UINT32_MAX;
	static volatile int32_t t99 = 789689181;

	t99 = (((x537*x538)|x539)<=x540);

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

