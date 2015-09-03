#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -328313;
volatile int8_t x23 = INT8_MAX;
uint8_t x26 = UINT8_MAX;
uint16_t x34 = 1793U;
volatile uint32_t t6 = 3279U;
int16_t x38 = -28;
int64_t x42 = -1LL;
uint8_t x56 = UINT8_MAX;
volatile uint32_t x66 = UINT32_MAX;
volatile uint32_t t13 = 262119935U;
uint64_t x71 = UINT64_MAX;
static int8_t x73 = INT8_MIN;
static int8_t x74 = -1;
volatile uint16_t x76 = UINT16_MAX;
int8_t x99 = -36;
uint8_t x103 = UINT8_MAX;
static int16_t x109 = INT16_MAX;
uint16_t x110 = 11772U;
int32_t x112 = INT32_MAX;
static uint16_t x113 = UINT16_MAX;
int16_t x115 = -1280;
int64_t t21 = 12445665294LL;
uint64_t x121 = 13758LLU;
static uint64_t t22 = 181LLU;
volatile int32_t x128 = INT32_MIN;
volatile uint64_t t24 = 37LLU;
volatile int16_t x145 = 18;
int8_t x150 = INT8_MIN;
volatile int64_t t26 = -21849438476LL;
int16_t x153 = INT16_MAX;
volatile uint64_t x159 = 131329721693667LLU;
int16_t x189 = INT16_MAX;
volatile int16_t x196 = INT16_MAX;
static int32_t t34 = 1232;
int8_t x204 = INT8_MIN;
volatile int32_t t39 = -725;
volatile int64_t t40 = 12426065749191LL;
int16_t x238 = 348;
int8_t x242 = 1;
volatile int64_t x243 = INT64_MAX;
volatile int32_t x246 = -196139;
uint64_t x251 = 16616520371749102LLU;
uint64_t t44 = 41942354LLU;
int16_t x255 = -1;
static int8_t x260 = 50;
uint8_t x261 = 30U;
int64_t x289 = INT64_MIN;
int32_t x292 = 3;
volatile uint16_t x298 = 9U;
volatile int32_t x312 = -35619;
int8_t x315 = -1;
volatile uint16_t x317 = 464U;
uint8_t x322 = UINT8_MAX;
volatile uint64_t x328 = UINT64_MAX;
int64_t x333 = -1LL;
int16_t x340 = INT16_MAX;
volatile int32_t t62 = 1;
volatile uint64_t t63 = 929623790430597LLU;
int16_t x357 = INT16_MIN;
uint16_t x376 = 3U;
volatile int32_t x382 = 176914005;
uint64_t x395 = 131593301661689483LLU;
uint64_t t69 = 28893854711079LLU;
volatile int32_t x397 = INT32_MIN;
int8_t x399 = -40;
uint16_t x400 = 2017U;
volatile uint32_t x402 = 91U;
volatile uint16_t x411 = 7U;
int8_t x412 = -1;
static int64_t x427 = -1LL;
volatile int64_t t74 = -499LL;
int16_t x433 = INT16_MIN;
uint64_t x436 = 222LLU;
int16_t x438 = INT16_MAX;
volatile uint16_t x440 = 27682U;
int8_t x448 = INT8_MAX;
volatile int64_t t80 = -1071259516LL;
int32_t x462 = -5;
int32_t x473 = INT32_MIN;
static int64_t x476 = 242506LL;
static int64_t t85 = INT64_MIN;
int8_t x497 = 3;
static int32_t x508 = INT32_MAX;
int64_t t88 = 635259009443211LL;
int8_t x515 = INT8_MIN;
int16_t x516 = INT16_MIN;
int32_t t90 = 23;
uint32_t x530 = 486U;
uint16_t x533 = UINT16_MAX;
int32_t x534 = -1;
int32_t t93 = -3079439;
int16_t x546 = -64;
int8_t x551 = -1;
int8_t x552 = -1;
int64_t t95 = 1001LL;
static uint32_t x555 = 3U;
static uint64_t x558 = UINT64_MAX;
uint64_t x573 = 3077LLU;
static volatile uint16_t x575 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint64_t x2 = UINT64_MAX;
	static uint16_t x3 = 72U;
	int16_t x4 = -824;
	uint64_t t0 = 1655808LLU;

	t0 = ((x1/(x2*x3))&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int8_t x6 = -2;
	volatile int8_t x7 = -7;
	int8_t x8 = 0;

	t1 = ((x5/(x6*x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -51508LL;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = UINT32_MAX;
	int16_t x12 = INT16_MAX;
	static int64_t t2 = 3LL;

	t2 = ((x9/(x10*x11))&x12);

	if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	volatile int16_t x18 = INT16_MIN;
	int32_t x19 = -1;
	int32_t x20 = INT32_MIN;
	int32_t t3 = -31242347;

	t3 = ((x17/(x18*x19))&x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	uint64_t x22 = 10831024664004LLU;
	static int64_t x24 = INT64_MIN;
	static uint64_t t4 = 0LLU;

	t4 = ((x21/(x22*x23))&x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x27 = -1;
	volatile int64_t x28 = INT64_MIN;
	uint64_t t5 = 1541030265453679254LLU;

	t5 = ((x25/(x26*x27))&x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 6U;
	uint32_t x35 = 2265U;
	uint32_t x36 = UINT32_MAX;

	t6 = ((x33/(x34*x35))&x36);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x37 = 462U;
	volatile int16_t x39 = INT16_MIN;
	volatile int32_t x40 = INT32_MAX;
	volatile int32_t t7 = 5254;

	t7 = ((x37/(x38*x39))&x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = INT32_MIN;
	static uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MIN;
	volatile int64_t t8 = -74239LL;

	t8 = ((x41/(x42*x43))&x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	volatile int16_t x46 = -11306;
	int8_t x47 = -14;
	int8_t x48 = INT8_MIN;
	int32_t t9 = 187;

	t9 = ((x45/(x46*x47))&x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = -1LL;
	uint16_t x50 = UINT16_MAX;
	uint32_t x51 = 345U;
	int8_t x52 = INT8_MIN;
	int64_t t10 = 1206367694674LL;

	t10 = ((x49/(x50*x51))&x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 24;
	int16_t x54 = INT16_MAX;
	volatile int16_t x55 = INT16_MAX;
	int32_t t11 = 876;

	t11 = ((x53/(x54*x55))&x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = 49;
	uint16_t x62 = 12219U;
	volatile uint32_t x63 = 1U;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t12 = 2LLU;

	t12 = ((x61/(x62*x63))&x64);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	int8_t x67 = -26;
	int16_t x68 = INT16_MAX;

	t13 = ((x65/(x66*x67))&x68);

	if (t13 != 7556U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	uint64_t x70 = UINT64_MAX;
	static int8_t x72 = -2;
	volatile uint64_t t14 = 238LLU;

	t14 = ((x69/(x70*x71))&x72);

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x75 = INT16_MIN;
	volatile int32_t t15 = 998;

	t15 = ((x73/(x74*x75))&x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -57120631874LL;
	int32_t x86 = -1;
	int8_t x87 = 3;
	uint16_t x88 = UINT16_MAX;
	int64_t t16 = 845863LL;

	t16 = ((x85/(x86*x87))&x88);

	if (t16 != 36544LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = 6606330495LLU;
	int16_t x94 = 810;
	static int16_t x95 = INT16_MAX;
	int16_t x96 = INT16_MAX;
	volatile uint64_t t17 = 35244LLU;

	t17 = ((x93/(x94*x95))&x96);

	if (t17 != 248LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x97 = 0;
	uint64_t x98 = UINT64_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile uint64_t t18 = 644291831212LLU;

	t18 = ((x97/(x98*x99))&x100);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = INT16_MAX;
	static volatile int8_t x102 = -6;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t19 = -33010429;

	t19 = ((x101/(x102*x103))&x104);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x111 = 2;
	static volatile int32_t t20 = -11;

	t20 = ((x109/(x110*x111))&x112);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x114 = -1;
	int64_t x116 = -1144LL;

	t21 = ((x113/(x114*x115))&x116);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x122 = 13354730711763LLU;
	int8_t x123 = INT8_MIN;
	volatile uint16_t x124 = 17U;

	t22 = ((x121/(x122*x123))&x124);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x125 = INT8_MIN;
	uint64_t x126 = 6640LLU;
	int8_t x127 = -1;
	static volatile uint64_t t23 = 196203084534947757LLU;

	t23 = ((x125/(x126*x127))&x128);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x141 = INT8_MAX;
	static volatile uint64_t x142 = 250940575667252LLU;
	volatile int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MAX;

	t24 = ((x141/(x142*x143))&x144);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x146 = -1;
	int64_t x147 = -1LL;
	static volatile int8_t x148 = 1;
	int64_t t25 = 3391372LL;

	t25 = ((x145/(x146*x147))&x148);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x149 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	volatile int16_t x152 = INT16_MIN;

	t26 = ((x149/(x150*x151))&x152);

	if (t26 != -2199023255552LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x154 = -1;
	volatile int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MAX;
	volatile int32_t t27 = -2;

	t27 = ((x153/(x154*x155))&x156);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x157 = 249962U;
	int64_t x158 = INT64_MIN;
	int32_t x160 = INT32_MAX;
	uint64_t t28 = 918480698LLU;

	t28 = ((x157/(x158*x159))&x160);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x161 = 102U;
	int16_t x162 = INT16_MIN;
	static int16_t x163 = INT16_MIN;
	volatile uint16_t x164 = 7U;
	int32_t t29 = 5664;

	t29 = ((x161/(x162*x163))&x164);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x165 = -6093686LL;
	static uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	volatile int64_t x168 = 1001791LL;
	volatile uint64_t t30 = 679205LLU;

	t30 = ((x165/(x166*x167))&x168);

	if (t30 != 1001791LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x185 = INT32_MAX;
	volatile int32_t x186 = -6120;
	int16_t x187 = 431;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t31 = INT32_MIN;

	t31 = ((x185/(x186*x187))&x188);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x190 = -463164LL;
	uint32_t x191 = 2431797U;
	static uint16_t x192 = 0U;
	static volatile int64_t t32 = -1LL;

	t32 = ((x189/(x190*x191))&x192);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x193 = 23612U;
	int16_t x194 = -3;
	int32_t x195 = -5409;
	volatile uint32_t t33 = 22013U;

	t33 = ((x193/(x194*x195))&x196);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x197 = 18U;
	uint16_t x198 = 6U;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 1355U;

	t34 = ((x197/(x198*x199))&x200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x201 = 2U;
	uint64_t x202 = 5370040358645LLU;
	int16_t x203 = INT16_MIN;
	static uint64_t t35 = 8064040LLU;

	t35 = ((x201/(x202*x203))&x204);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = INT8_MIN;
	volatile int8_t x214 = -1;
	int16_t x215 = 1445;
	static uint32_t x216 = 473U;
	volatile uint32_t t36 = 22U;

	t36 = ((x213/(x214*x215))&x216);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x221 = 0U;
	volatile int8_t x222 = INT8_MIN;
	uint32_t x223 = UINT32_MAX;
	volatile uint32_t x224 = 14743543U;
	volatile uint32_t t37 = 2034742686U;

	t37 = ((x221/(x222*x223))&x224);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x225 = -1;
	int32_t x226 = INT32_MAX;
	static uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MIN;
	static volatile uint32_t t38 = 181357276U;

	t38 = ((x225/(x226*x227))&x228);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = -2;
	static volatile uint8_t x231 = 81U;
	static int8_t x232 = INT8_MIN;

	t39 = ((x229/(x230*x231))&x232);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x233 = -1LL;
	int8_t x234 = INT8_MIN;
	uint32_t x235 = 3U;
	static int64_t x236 = INT64_MIN;

	t40 = ((x233/(x234*x235))&x236);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x237 = INT32_MIN;
	static int64_t x239 = -1LL;
	uint8_t x240 = 25U;
	int64_t t41 = 51800LL;

	t41 = ((x237/(x238*x239))&x240);

	if (t41 != 16LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x241 = -79449745LL;
	volatile int64_t x244 = 6993727761572938LL;
	static volatile int64_t t42 = -21904695LL;

	t42 = ((x241/(x242*x243))&x244);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x245 = INT64_MIN;
	int64_t x247 = -1LL;
	int64_t x248 = INT64_MIN;
	volatile int64_t t43 = INT64_MIN;

	t43 = ((x245/(x246*x247))&x248);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x249 = -1;
	uint64_t x250 = 7939890764250900024LLU;
	static int64_t x252 = INT64_MIN;

	t44 = ((x249/(x250*x251))&x252);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x253 = -1;
	int32_t x254 = 4243;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t45 = 356142468;

	t45 = ((x253/(x254*x255))&x256);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x257 = INT16_MIN;
	static volatile uint16_t x258 = UINT16_MAX;
	int16_t x259 = 15;
	volatile int32_t t46 = 1036364754;

	t46 = ((x257/(x258*x259))&x260);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x262 = 31162714;
	volatile uint64_t x263 = 474908LLU;
	int16_t x264 = 3749;
	static uint64_t t47 = 23320414LLU;

	t47 = ((x261/(x262*x263))&x264);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x265 = 10462U;
	int16_t x266 = INT16_MIN;
	static int8_t x267 = -1;
	int32_t x268 = INT32_MAX;
	volatile uint32_t t48 = 7627U;

	t48 = ((x265/(x266*x267))&x268);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x273 = INT16_MAX;
	int8_t x274 = -3;
	uint32_t x275 = 680832380U;
	int16_t x276 = INT16_MAX;
	static volatile uint32_t t49 = 3291U;

	t49 = ((x273/(x274*x275))&x276);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x277 = UINT64_MAX;
	uint64_t x278 = UINT64_MAX;
	uint8_t x279 = UINT8_MAX;
	volatile uint16_t x280 = 1U;
	uint64_t t50 = 1102950990729923019LLU;

	t50 = ((x277/(x278*x279))&x280);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x290 = 2U;
	uint8_t x291 = 52U;
	volatile int64_t t51 = 41114692LL;

	t51 = ((x289/(x290*x291))&x292);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x297 = -417606808;
	int16_t x299 = INT16_MIN;
	int64_t x300 = 14833370901205LL;
	static int64_t t52 = 15637691125107LL;

	t52 = ((x297/(x298*x299))&x300);

	if (t52 != 128LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x301 = 17U;
	int32_t x302 = INT32_MIN;
	static int16_t x303 = 1;
	volatile int16_t x304 = INT16_MIN;
	int32_t t53 = 8074310;

	t53 = ((x301/(x302*x303))&x304);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x309 = -119140709LL;
	uint32_t x310 = UINT32_MAX;
	volatile int8_t x311 = 1;
	int64_t t54 = 1LL;

	t54 = ((x309/(x310*x311))&x312);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x313 = -1LL;
	int32_t x314 = -42;
	static int16_t x316 = INT16_MIN;
	int64_t t55 = -132721899017524758LL;

	t55 = ((x313/(x314*x315))&x316);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = INT8_MIN;
	static int16_t x320 = -814;
	volatile int32_t t56 = 600201;

	t56 = ((x317/(x318*x319))&x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x321 = 392LLU;
	int64_t x323 = -1LL;
	int8_t x324 = INT8_MIN;
	uint64_t t57 = 447804LLU;

	t57 = ((x321/(x322*x323))&x324);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x325 = 1011U;
	volatile int8_t x326 = 49;
	static uint32_t x327 = UINT32_MAX;
	volatile uint64_t t58 = 278238264416591LLU;

	t58 = ((x325/(x326*x327))&x328);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x329 = INT32_MAX;
	uint32_t x330 = 3869564U;
	int16_t x331 = -1;
	uint64_t x332 = 1206992307620782LLU;
	volatile uint64_t t59 = 0LLU;

	t59 = ((x329/(x330*x331))&x332);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x334 = -1;
	int8_t x335 = 1;
	volatile int32_t x336 = -1;
	static int64_t t60 = 1743750318LL;

	t60 = ((x333/(x334*x335))&x336);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x337 = 3U;
	int16_t x338 = -1;
	int64_t x339 = INT64_MAX;
	volatile int64_t t61 = -89LL;

	t61 = ((x337/(x338*x339))&x340);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x341 = 3655U;
	volatile uint8_t x342 = 1U;
	volatile int8_t x343 = -1;
	int8_t x344 = -1;

	t62 = ((x341/(x342*x343))&x344);

	if (t62 != -3655) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x345 = 23329U;
	uint8_t x346 = 6U;
	volatile uint64_t x347 = UINT64_MAX;
	uint16_t x348 = UINT16_MAX;

	t63 = ((x345/(x346*x347))&x348);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x358 = -1;
	uint32_t x359 = 55U;
	uint8_t x360 = 58U;
	uint32_t t64 = 5347U;

	t64 = ((x357/(x358*x359))&x360);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x365 = 32;
	volatile int16_t x366 = INT16_MAX;
	volatile int16_t x367 = INT16_MIN;
	uint64_t x368 = 58149308861766LLU;
	uint64_t t65 = 3827823516164LLU;

	t65 = ((x365/(x366*x367))&x368);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x373 = -1LL;
	uint8_t x374 = 8U;
	static uint64_t x375 = 673LLU;
	static volatile uint64_t t66 = 126362LLU;

	t66 = ((x373/(x374*x375))&x376);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x381 = -1;
	int32_t x383 = -1;
	int64_t x384 = INT64_MIN;
	int64_t t67 = 3005LL;

	t67 = ((x381/(x382*x383))&x384);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x389 = INT64_MIN;
	static uint8_t x390 = 7U;
	volatile int8_t x391 = INT8_MAX;
	int64_t x392 = -52899787522078311LL;
	int64_t t68 = 446778316LL;

	t68 = ((x389/(x390*x391))&x392);

	if (t68 != -54038882172436343LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x393 = -1;
	int32_t x394 = 1;
	uint64_t x396 = UINT64_MAX;

	t69 = ((x393/(x394*x395))&x396);

	if (t69 != 140LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x398 = INT8_MIN;
	volatile int32_t t70 = 38;

	t70 = ((x397/(x398*x399))&x400);

	if (t70 != 384) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x401 = INT8_MAX;
	static int64_t x403 = -1LL;
	int8_t x404 = INT8_MIN;
	volatile int64_t t71 = -73LL;

	t71 = ((x401/(x402*x403))&x404);

	if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x405 = 38;
	static volatile int8_t x406 = INT8_MAX;
	static int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MAX;
	static int32_t t72 = 3;

	t72 = ((x405/(x406*x407))&x408);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x409 = -8;
	volatile int64_t x410 = 108230LL;
	volatile int64_t t73 = -2590066044LL;

	t73 = ((x409/(x410*x411))&x412);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x425 = -1729581067LL;
	int64_t x426 = -1LL;
	int16_t x428 = -2;

	t74 = ((x425/(x426*x427))&x428);

	if (t74 != -1729581068LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x434 = -1;
	int8_t x435 = -4;
	uint64_t t75 = 179735310533LLU;

	t75 = ((x433/(x434*x435))&x436);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x437 = 7889608U;
	volatile uint32_t x439 = 41097778U;
	uint32_t t76 = 141655U;

	t76 = ((x437/(x438*x439))&x440);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x441 = -1;
	uint32_t x442 = UINT32_MAX;
	uint16_t x443 = 1U;
	int16_t x444 = INT16_MIN;
	uint32_t t77 = 2U;

	t77 = ((x441/(x442*x443))&x444);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x445 = -1991367167583LL;
	int16_t x446 = -119;
	int64_t x447 = -2900547LL;
	int64_t t78 = 205047LL;

	t78 = ((x445/(x446*x447))&x448);

	if (t78 != 119LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x453 = INT32_MIN;
	uint64_t x454 = 7177965700847539422LLU;
	int32_t x455 = INT32_MIN;
	uint32_t x456 = 14U;
	volatile uint64_t t79 = 12999458551348LLU;

	t79 = ((x453/(x454*x455))&x456);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x457 = -1;
	int64_t x458 = INT64_MIN;
	int8_t x459 = 1;
	uint16_t x460 = 4798U;

	t80 = ((x457/(x458*x459))&x460);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x461 = INT32_MAX;
	int16_t x463 = INT16_MIN;
	static int8_t x464 = INT8_MIN;
	static volatile int32_t t81 = 39996866;

	t81 = ((x461/(x462*x463))&x464);

	if (t81 != 13056) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x474 = INT16_MIN;
	uint8_t x475 = 1U;
	volatile int64_t t82 = 1801903597LL;

	t82 = ((x473/(x474*x475))&x476);

	if (t82 != 65536LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x477 = 2;
	int8_t x478 = -12;
	uint16_t x479 = UINT16_MAX;
	volatile int32_t x480 = -223;
	int32_t t83 = -2085;

	t83 = ((x477/(x478*x479))&x480);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x481 = INT64_MAX;
	uint32_t x482 = 804457252U;
	int32_t x483 = 55;
	volatile int64_t x484 = -1LL;
	volatile int64_t t84 = -1060805899LL;

	t84 = ((x481/(x482*x483))&x484);

	if (t84 != 7119678595LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x485 = INT32_MIN;
	volatile int32_t x486 = INT32_MAX;
	int16_t x487 = 1;
	int64_t x488 = INT64_MIN;

	t85 = ((x485/(x486*x487))&x488);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x493 = 1812986468702187626LL;
	uint32_t x494 = UINT32_MAX;
	int8_t x495 = INT8_MIN;
	int64_t x496 = INT64_MIN;
	volatile int64_t t86 = 352049215LL;

	t86 = ((x493/(x494*x495))&x496);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x498 = INT16_MAX;
	static uint64_t x499 = UINT64_MAX;
	volatile int16_t x500 = -1;
	volatile uint64_t t87 = 31LLU;

	t87 = ((x497/(x498*x499))&x500);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x505 = INT64_MIN;
	int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MIN;

	t88 = ((x505/(x506*x507))&x508);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x509 = 51LL;
	uint64_t x510 = 1244852584LLU;
	int16_t x511 = 1518;
	int64_t x512 = -881LL;
	static uint64_t t89 = 14524833962465829LLU;

	t89 = ((x509/(x510*x511))&x512);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x513 = 11383;
	volatile uint8_t x514 = 37U;

	t90 = ((x513/(x514*x515))&x516);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x529 = INT16_MIN;
	uint8_t x531 = UINT8_MAX;
	int32_t x532 = -1;
	uint32_t t91 = 19U;

	t91 = ((x529/(x530*x531))&x532);

	if (t91 != 34656U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x535 = 20470;
	static int32_t x536 = -1;
	int32_t t92 = 183;

	t92 = ((x533/(x534*x535))&x536);

	if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x537 = -1;
	volatile int8_t x538 = INT8_MIN;
	volatile uint16_t x539 = UINT16_MAX;
	uint16_t x540 = 1U;

	t93 = ((x537/(x538*x539))&x540);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x545 = -1;
	static volatile uint64_t x547 = UINT64_MAX;
	uint16_t x548 = 6U;
	volatile uint64_t t94 = 99384852660508LLU;

	t94 = ((x545/(x546*x547))&x548);

	if (t94 != 6LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x549 = -1LL;
	uint16_t x550 = 199U;

	t95 = ((x549/(x550*x551))&x552);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x553 = 4;
	int8_t x554 = -38;
	static int32_t x556 = -2421366;
	uint32_t t96 = 94459071U;

	t96 = ((x553/(x554*x555))&x556);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x557 = UINT32_MAX;
	static int64_t x559 = -6LL;
	int8_t x560 = -1;
	uint64_t t97 = 16876920828138771LLU;

	t97 = ((x557/(x558*x559))&x560);

	if (t97 != 715827882LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x569 = INT32_MAX;
	uint32_t x570 = 1U;
	volatile uint16_t x571 = 46U;
	static int32_t x572 = INT32_MAX;
	uint32_t t98 = 131526U;

	t98 = ((x569/(x570*x571))&x572);

	if (t98 != 46684427U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x574 = INT16_MIN;
	uint64_t x576 = UINT64_MAX;
	static uint64_t t99 = 6577081015834195320LLU;

	t99 = ((x573/(x574*x575))&x576);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

