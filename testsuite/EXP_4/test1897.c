#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = 8LL;
volatile int32_t x5 = -1045161104;
uint32_t x6 = 4025U;
static int16_t x9 = INT16_MIN;
int16_t x10 = INT16_MIN;
int64_t t2 = -1219LL;
int32_t x29 = INT32_MIN;
volatile uint8_t x31 = 7U;
uint32_t x32 = 355894U;
static int8_t x33 = INT8_MAX;
int32_t x36 = -22410666;
static int64_t t6 = -969407606LL;
int16_t x42 = -12069;
static int64_t t8 = 1LL;
int8_t x51 = -1;
int64_t t9 = -4423794LL;
volatile int32_t t14 = -28328;
static int32_t x85 = 8243887;
int64_t x89 = INT64_MIN;
int64_t x100 = INT64_MIN;
uint64_t x102 = UINT64_MAX;
volatile int16_t x111 = INT16_MIN;
static uint32_t x114 = UINT32_MAX;
int64_t x115 = INT64_MIN;
uint8_t x126 = UINT8_MAX;
int64_t x131 = INT64_MIN;
int8_t x136 = 8;
int16_t x144 = -1;
int32_t t27 = 412941;
static uint32_t x145 = 26U;
static uint32_t x153 = 7393738U;
int16_t x154 = 1621;
volatile int64_t t33 = 0LL;
uint32_t x176 = 494357701U;
uint64_t x181 = 0LLU;
int16_t x183 = INT16_MIN;
uint64_t t35 = 92119129795439308LLU;
uint8_t x191 = UINT8_MAX;
int32_t t36 = 217;
int64_t x193 = INT64_MIN;
int8_t x194 = INT8_MIN;
static volatile int64_t t37 = -122862046512136LL;
uint64_t x197 = 2094191803151744LLU;
uint8_t x198 = UINT8_MAX;
volatile uint8_t x202 = UINT8_MAX;
static uint32_t x204 = 313905239U;
volatile uint8_t x205 = 1U;
static int64_t x210 = 486LL;
static int64_t t41 = -584795494622LL;
int16_t x221 = -118;
int64_t t44 = 915791807809237595LL;
uint64_t x229 = UINT64_MAX;
uint16_t x236 = 14243U;
int64_t x237 = -1951148012652LL;
int32_t x238 = -65312892;
uint64_t x241 = 8767703234429LLU;
static volatile uint64_t t48 = 116586776LLU;
static uint64_t x250 = 46033494804655562LLU;
uint64_t x259 = UINT64_MAX;
uint16_t x262 = 0U;
uint64_t x268 = UINT64_MAX;
volatile uint64_t t52 = 4885526LLU;
uint64_t x270 = UINT64_MAX;
static int64_t x275 = -28559LL;
volatile int16_t x278 = -6199;
int8_t x290 = 0;
static uint32_t x291 = 390689U;
volatile uint16_t x292 = UINT16_MAX;
uint32_t t59 = 1719U;
volatile int8_t x309 = -1;
int8_t x312 = -2;
int32_t x315 = INT32_MAX;
int64_t x319 = -1LL;
int64_t t65 = -131LL;
int16_t x330 = 1;
uint32_t x335 = 1265979462U;
static uint8_t x337 = 2U;
int8_t x347 = -1;
volatile int64_t t70 = -218199398019796827LL;
volatile int16_t x364 = 6;
int32_t t73 = 0;
static int16_t x378 = INT16_MAX;
int16_t x380 = INT16_MAX;
uint32_t x381 = UINT32_MAX;
volatile uint32_t t77 = UINT32_MAX;
int32_t x389 = INT32_MAX;
static int64_t t82 = -576368766742658706LL;
static int32_t x415 = 3539909;
int64_t x416 = INT64_MIN;
volatile uint64_t t84 = 3411651LLU;
int16_t x426 = 4079;
uint16_t x432 = UINT16_MAX;
uint64_t t88 = UINT64_MAX;
uint32_t x449 = 1983U;
int8_t x452 = -3;
uint64_t t90 = 11524LLU;
int16_t x462 = INT16_MAX;
static int8_t x465 = 11;
int64_t t92 = -10217160LL;
volatile int64_t x469 = 401440170982210991LL;
volatile int64_t t93 = 286243646LL;
uint16_t x474 = UINT16_MAX;
static int8_t x475 = INT8_MAX;
int64_t t96 = -2340104524273LL;
volatile int32_t x491 = 2208437;
int8_t x497 = 1;
int8_t x500 = -26;
uint32_t x501 = UINT32_MAX;


void f0(void) {
	int32_t x1 = 246142;
	uint16_t x2 = 0U;
	volatile int32_t x3 = -842720713;
	static volatile int64_t t0 = -35421028055LL;

	t0 = (x1|(x2*(x3|x4)));

	if (t0 != 246142LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x7 = -1947476;
	volatile uint16_t x8 = 2U;
	uint32_t t1 = 38783U;

	t1 = (x5|(x6*(x7|x8)));

	if (t1 != 3992764414U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = -4009117853LL;
	int16_t x12 = INT16_MIN;

	t2 = (x9|(x10*(x11|x12)));

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = -1;
	int16_t x18 = INT16_MAX;
	uint64_t x19 = 1971395LLU;
	static uint16_t x20 = UINT16_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x17|(x18*(x19|x20)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = 13;
	volatile int8_t x26 = 0;
	int8_t x27 = 53;
	static uint32_t x28 = UINT32_MAX;
	static volatile uint32_t t4 = 25U;

	t4 = (x25|(x26*(x27|x28)));

	if (t4 != 13U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x30 = 14U;
	static uint32_t t5 = 13059182U;

	t5 = (x29|(x30*(x31|x32)));

	if (t5 != 2152466178U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x34 = 1LL;
	volatile int16_t x35 = -1;

	t6 = (x33|(x34*(x35|x36)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = 6307772;
	uint64_t x38 = 2831464LLU;
	int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MIN;
	uint64_t t7 = 852102467499293LLU;

	t7 = (x37|(x38*(x39|x40)));

	if (t7 != 6307772LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 695;
	int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;

	t8 = (x41|(x42*(x43|x44)));

	if (t8 != 12215LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x49 = UINT8_MAX;
	int8_t x50 = -24;
	int64_t x52 = INT64_MIN;

	t9 = (x49|(x50*(x51|x52)));

	if (t9 != 255LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x61 = 6528187154215LLU;
	int8_t x62 = INT8_MAX;
	static uint8_t x63 = 34U;
	static uint64_t x64 = 3724700716847518LLU;
	volatile uint64_t t10 = 564LLU;

	t10 = (x61|(x62*(x63|x64)));

	if (t10 != 473042818878652263LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x65 = -1;
	int8_t x66 = -5;
	int64_t x67 = -1LL;
	int32_t x68 = -1;
	volatile int64_t t11 = 57545169163LL;

	t11 = (x65|(x66*(x67|x68)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = INT64_MAX;
	static uint16_t x70 = 8905U;
	int8_t x71 = 7;
	uint64_t x72 = 150754490013520LLU;
	uint64_t t12 = 118396947814LLU;

	t12 = (x69|(x70*(x71|x72)));

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = 116LLU;
	int16_t x74 = 1;
	int64_t x75 = INT64_MIN;
	int32_t x76 = -1;
	uint64_t t13 = UINT64_MAX;

	t13 = (x73|(x74*(x75|x76)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = -1;
	static int8_t x78 = -43;
	volatile uint8_t x79 = 94U;
	int8_t x80 = -1;

	t14 = (x77|(x78*(x79|x80)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x86 = UINT8_MAX;
	volatile int8_t x87 = INT8_MIN;
	int8_t x88 = -58;
	int32_t t15 = 2;

	t15 = (x85|(x86*(x87|x88)));

	if (t15 != -12609) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x90 = INT32_MIN;
	uint16_t x91 = UINT16_MAX;
	int64_t x92 = 2LL;
	volatile int64_t t16 = -704851121390027LL;

	t16 = (x89|(x90*(x91|x92)));

	if (t16 != -140735340871680LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x93 = INT32_MIN;
	uint64_t x94 = 309548493LLU;
	uint64_t x95 = 6903029LLU;
	int16_t x96 = -1;
	volatile uint64_t t17 = 240539760073794LLU;

	t17 = (x93|(x94*(x95|x96)));

	if (t17 != 18446744073400003123LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 2134494358LL;
	static int32_t x98 = 93;
	int64_t x99 = -1LL;
	static int64_t t18 = 24940856LL;

	t18 = (x97|(x98*(x99|x100)));

	if (t18 != -73LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	int32_t x104 = 207;
	volatile uint64_t t19 = 28948533LLU;

	t19 = (x101|(x102*(x103|x104)));

	if (t19 != 18446744073709551409LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x109 = INT8_MIN;
	volatile uint64_t x110 = UINT64_MAX;
	int32_t x112 = INT32_MAX;
	uint64_t t20 = 1LLU;

	t20 = (x109|(x110*(x111|x112)));

	if (t20 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = -123693036141260LL;
	int64_t x116 = INT64_MAX;
	volatile int64_t t21 = -544797216265440202LL;

	t21 = (x113|(x114*(x115|x116)));

	if (t21 != -2272983755LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x117 = UINT8_MAX;
	uint8_t x118 = UINT8_MAX;
	uint16_t x119 = 81U;
	volatile int16_t x120 = -3;
	int32_t t22 = -66247;

	t22 = (x117|(x118*(x119|x120)));

	if (t22 != -513) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = 87U;
	volatile int32_t x127 = 7712;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint64_t t23 = 10830168309069LLU;

	t23 = (x125|(x126*(x127|x128)));

	if (t23 != 18446744073709551447LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = 38U;
	int16_t x130 = INT16_MIN;
	static int64_t x132 = INT64_MAX;
	int64_t t24 = -879123LL;

	t24 = (x129|(x130*(x131|x132)));

	if (t24 != 32806LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = -3707631;
	int32_t x134 = -1;
	int16_t x135 = INT16_MIN;
	int32_t t25 = 49042662;

	t25 = (x133|(x134*(x135|x136)));

	if (t25 != -3702791) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MIN;
	static uint16_t x138 = 532U;
	static int16_t x139 = INT16_MIN;
	int32_t x140 = -1;
	volatile int32_t t26 = 53206534;

	t26 = (x137|(x138*(x139|x140)));

	if (t26 != -532) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x141 = -12;
	volatile int16_t x142 = -1;
	volatile uint8_t x143 = UINT8_MAX;

	t27 = (x141|(x142*(x143|x144)));

	if (t27 != -11) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x146 = -426359464211LL;
	uint8_t x147 = 3U;
	int16_t x148 = INT16_MIN;
	static int64_t t28 = -635988447LL;

	t28 = (x145|(x146*(x147|x148)));

	if (t28 != 13969667844873439LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x149 = 2U;
	volatile uint64_t x150 = UINT64_MAX;
	static uint16_t x151 = 17U;
	volatile uint64_t x152 = UINT64_MAX;
	uint64_t t29 = 16638812189428350LLU;

	t29 = (x149|(x150*(x151|x152)));

	if (t29 != 3LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x155 = 30924U;
	uint32_t x156 = UINT32_MAX;
	static uint32_t t30 = 1504844U;

	t30 = (x153|(x154*(x155|x156)));

	if (t30 != 4294965739U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x157 = 29U;
	int32_t x158 = -1;
	int64_t x159 = -483662LL;
	uint8_t x160 = 52U;
	int64_t t31 = 254LL;

	t31 = (x157|(x158*(x159|x160)));

	if (t31 != 483679LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x161 = 1827826429841644649LLU;
	volatile int32_t x162 = -1;
	volatile int64_t x163 = INT64_MAX;
	volatile int64_t x164 = INT64_MIN;
	static uint64_t t32 = 1633762491630307LLU;

	t32 = (x161|(x162*(x163|x164)));

	if (t32 != 1827826429841644649LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = -2;
	int64_t x170 = 3048LL;
	volatile int64_t x171 = 25409113LL;
	uint32_t x172 = UINT32_MAX;

	t33 = (x169|(x170*(x171|x172)));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x173 = 147855692U;
	static int8_t x174 = INT8_MAX;
	uint64_t x175 = UINT64_MAX;
	volatile uint64_t t34 = 93234968LLU;

	t34 = (x173|(x174*(x175|x176)));

	if (t34 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x182 = -4;
	int32_t x184 = INT32_MIN;

	t35 = (x181|(x182*(x183|x184)));

	if (t35 != 131072LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = 1555U;
	volatile int8_t x190 = INT8_MIN;
	int16_t x192 = -1;

	t36 = (x189|(x190*(x191|x192)));

	if (t36 != 1683) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MIN;

	t37 = (x193|(x194*(x195|x196)));

	if (t37 != -9223372036854759424LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x199 = UINT16_MAX;
	volatile uint32_t x200 = 56318917U;
	uint64_t t38 = 1508982421737LLU;

	t38 = (x197|(x198*(x199|x200)));

	if (t38 != 2094193281859457LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x201 = 46151;
	static int16_t x203 = INT16_MIN;
	volatile uint32_t t39 = 773686554U;

	t39 = (x201|(x202*(x203|x204)));

	if (t39 != 4291868399U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x206 = 398944549644669LLU;
	uint64_t x207 = UINT64_MAX;
	volatile int32_t x208 = INT32_MIN;
	static uint64_t t40 = 0LLU;

	t40 = (x205|(x206*(x207|x208)));

	if (t40 != 18446345129159906947LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x209 = 4250U;
	uint8_t x211 = 17U;
	int16_t x212 = 41;

	t41 = (x209|(x210*(x211|x212)));

	if (t41 != 31934LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x213 = 1;
	volatile int16_t x214 = INT16_MIN;
	uint8_t x215 = UINT8_MAX;
	static volatile uint64_t x216 = 7470LLU;
	uint64_t t42 = 11888LLU;

	t42 = (x213|(x214*(x215|x216)));

	if (t42 != 18446744073457926145LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = INT64_MAX;
	int16_t x218 = -1;
	static volatile int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MIN;
	static volatile int64_t t43 = INT64_MAX;

	t43 = (x217|(x218*(x219|x220)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x222 = INT16_MAX;
	uint8_t x223 = 32U;
	volatile int64_t x224 = -1002917513987LL;

	t44 = (x221|(x222*(x223|x224)));

	if (t44 != -117LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x230 = 13125677865267LLU;
	volatile int64_t x231 = INT64_MIN;
	int16_t x232 = -118;
	uint64_t t45 = UINT64_MAX;

	t45 = (x229|(x230*(x231|x232)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x233 = INT32_MIN;
	uint8_t x234 = 51U;
	int8_t x235 = -20;
	static volatile int32_t t46 = 0;

	t46 = (x233|(x234*(x235|x236)));

	if (t46 != -867) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MIN;
	int64_t t47 = -3136193539947372LL;

	t47 = (x237|(x238*(x239|x240)));

	if (t47 != -1950069538924LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x242 = INT8_MIN;
	static uint8_t x243 = 27U;
	static int64_t x244 = -1LL;

	t48 = (x241|(x242*(x243|x244)));

	if (t48 != 8767703234557LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = -1;
	static int16_t x251 = INT16_MAX;
	int8_t x252 = INT8_MIN;
	uint64_t t49 = UINT64_MAX;

	t49 = (x249|(x250*(x251|x252)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t50 = 1936461030931640054LLU;

	t50 = (x257|(x258*(x259|x260)));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x261 = INT64_MIN;
	int16_t x263 = -1;
	volatile int16_t x264 = -1;
	int64_t t51 = INT64_MIN;

	t51 = (x261|(x262*(x263|x264)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = 971464398965627330LLU;
	static uint8_t x267 = 81U;

	t52 = (x265|(x266*(x267|x268)));

	if (t52 != 18446744073709528638LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x269 = 702642LLU;
	int16_t x271 = -1;
	int64_t x272 = INT64_MAX;
	static uint64_t t53 = 2028LLU;

	t53 = (x269|(x270*(x271|x272)));

	if (t53 != 702643LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x273 = 102U;
	volatile int32_t x274 = -32619664;
	int64_t x276 = INT64_MAX;
	volatile int64_t t54 = -1LL;

	t54 = (x273|(x274*(x275|x276)));

	if (t54 != 32619766LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = -1;
	int64_t x279 = 19900688041164112LL;
	volatile int32_t x280 = INT32_MIN;
	static volatile int64_t t55 = 0LL;

	t55 = (x277|(x278*(x279|x280)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MAX;
	volatile int32_t x283 = 4614479;
	static uint32_t x284 = 11085048U;
	static uint32_t t56 = 466356U;

	t56 = (x281|(x282*(x283|x284)));

	if (t56 != 4294967169U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x285 = -50LL;
	uint32_t x286 = UINT32_MAX;
	uint32_t x287 = 39934U;
	static uint32_t x288 = UINT32_MAX;
	int64_t t57 = 4933638755188LL;

	t57 = (x285|(x286*(x287|x288)));

	if (t57 != -49LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x289 = 8LL;
	int64_t t58 = 2968100838122904088LL;

	t58 = (x289|(x290*(x291|x292)));

	if (t58 != 8LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	int32_t x295 = -1;
	uint32_t x296 = 5213U;

	t59 = (x293|(x294*(x295|x296)));

	if (t59 != 4294934528U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = INT32_MAX;
	uint32_t x298 = UINT32_MAX;
	uint8_t x299 = UINT8_MAX;
	static int32_t x300 = INT32_MAX;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x297|(x298*(x299|x300)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x301 = INT16_MAX;
	uint64_t x302 = 19LLU;
	uint32_t x303 = 23U;
	volatile int16_t x304 = INT16_MIN;
	uint64_t t61 = 503159341LLU;

	t61 = (x301|(x302*(x303|x304)));

	if (t61 != 81603788799LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x305 = 269911156LLU;
	int8_t x306 = INT8_MAX;
	uint8_t x307 = 6U;
	volatile int16_t x308 = INT16_MAX;
	uint64_t t62 = 57693124LLU;

	t62 = (x305|(x306*(x307|x308)));

	if (t62 != 272629749LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x310 = UINT32_MAX;
	uint64_t x311 = 51263791LLU;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x309|(x310*(x311|x312)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x313 = 165U;
	static volatile int32_t x314 = -1;
	volatile uint16_t x316 = 10640U;
	volatile uint32_t t64 = 16U;

	t64 = (x313|(x314*(x315|x316)));

	if (t64 != 2147483813U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MAX;
	uint32_t x320 = 24855U;

	t65 = (x317|(x318*(x319|x320)));

	if (t65 != -32513LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x321 = UINT16_MAX;
	static int8_t x322 = -3;
	int32_t x323 = INT32_MIN;
	int64_t x324 = 144LL;
	volatile int64_t t66 = -679LL;

	t66 = (x321|(x322*(x323|x324)));

	if (t66 != 6442450943LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x329 = -1;
	uint8_t x331 = UINT8_MAX;
	static int8_t x332 = 0;
	volatile int32_t t67 = 1;

	t67 = (x329|(x330*(x331|x332)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x333 = 1U;
	int32_t x334 = INT32_MAX;
	int16_t x336 = -1;
	static uint32_t t68 = 1U;

	t68 = (x333|(x334*(x335|x336)));

	if (t68 != 2147483649U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x338 = INT32_MIN;
	volatile uint32_t x339 = 30U;
	volatile int8_t x340 = -9;
	volatile uint32_t t69 = 141U;

	t69 = (x337|(x338*(x339|x340)));

	if (t69 != 2147483650U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x345 = 2U;
	int32_t x346 = -1;
	int64_t x348 = 5971325310983LL;

	t70 = (x345|(x346*(x347|x348)));

	if (t70 != 3LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x349 = 1548U;
	int8_t x350 = -1;
	static int8_t x351 = 11;
	int16_t x352 = 4;
	int32_t t71 = -3367;

	t71 = (x349|(x350*(x351|x352)));

	if (t71 != -3) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x357 = 2U;
	int8_t x358 = -37;
	volatile int16_t x359 = INT16_MIN;
	uint32_t x360 = UINT32_MAX;
	uint32_t t72 = 760656U;

	t72 = (x357|(x358*(x359|x360)));

	if (t72 != 39U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x361 = -1;
	static int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;

	t73 = (x361|(x362*(x363|x364)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x365 = 291156619278690LLU;
	static int8_t x366 = INT8_MIN;
	int8_t x367 = -1;
	uint16_t x368 = 2U;
	volatile uint64_t t74 = 392643258191558850LLU;

	t74 = (x365|(x366*(x367|x368)));

	if (t74 != 291156619278818LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x373 = -252;
	uint8_t x374 = 5U;
	static int8_t x375 = INT8_MIN;
	static int64_t x376 = -1LL;
	static volatile int64_t t75 = 48660394LL;

	t75 = (x373|(x374*(x375|x376)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x377 = -1LL;
	uint64_t x379 = 98LLU;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x377|(x378*(x379|x380)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x382 = -7677;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = INT8_MAX;

	t77 = (x381|(x382*(x383|x384)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x385 = INT8_MIN;
	volatile int64_t x386 = INT64_MAX;
	volatile int16_t x387 = -1;
	volatile uint64_t x388 = 40541547LLU;
	volatile uint64_t t78 = 13532LLU;

	t78 = (x385|(x386*(x387|x388)));

	if (t78 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x390 = 0;
	int64_t x391 = INT64_MAX;
	static volatile int32_t x392 = 7;
	int64_t t79 = 6210712685869875LL;

	t79 = (x389|(x390*(x391|x392)));

	if (t79 != 2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x393 = 696U;
	static uint64_t x394 = UINT64_MAX;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = INT16_MIN;
	static volatile uint64_t t80 = 79LLU;

	t80 = (x393|(x394*(x395|x396)));

	if (t80 != 697LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x397 = INT8_MIN;
	static uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MIN;
	static int32_t x400 = -7;
	int32_t t81 = -1856;

	t81 = (x397|(x398*(x399|x400)));

	if (t81 != -121) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MAX;
	int16_t x404 = -1;

	t82 = (x401|(x402*(x403|x404)));

	if (t82 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = INT16_MAX;
	int8_t x406 = INT8_MIN;
	volatile uint32_t x407 = 3U;
	int64_t x408 = 478670138LL;
	volatile int64_t t83 = -375476343210978770LL;

	t83 = (x405|(x406*(x407|x408)));

	if (t83 != -61269770241LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x413 = 9779276LL;
	static volatile uint64_t x414 = UINT64_MAX;

	t84 = (x413|(x414*(x415|x416)));

	if (t84 != 9223372036852546687LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x417 = INT16_MAX;
	uint64_t x418 = UINT64_MAX;
	uint64_t x419 = UINT64_MAX;
	static volatile int32_t x420 = -420431652;
	uint64_t t85 = 3421517913517LLU;

	t85 = (x417|(x418*(x419|x420)));

	if (t85 != 32767LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x425 = -1;
	int16_t x427 = 43;
	uint64_t x428 = UINT64_MAX;
	static uint64_t t86 = UINT64_MAX;

	t86 = (x425|(x426*(x427|x428)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x429 = -1;
	int64_t x430 = -191LL;
	static volatile int32_t x431 = INT32_MAX;
	volatile int64_t t87 = -210051852914LL;

	t87 = (x429|(x430*(x431|x432)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x441 = -1;
	uint64_t x442 = 3430811871703766009LLU;
	int32_t x443 = INT32_MAX;
	int32_t x444 = 10;

	t88 = (x441|(x442*(x443|x444)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x450 = -1;
	static int32_t x451 = 17292704;
	uint32_t t89 = 91566962U;

	t89 = (x449|(x450*(x451|x452)));

	if (t89 != 1983U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x457 = INT8_MIN;
	uint64_t x458 = UINT64_MAX;
	int64_t x459 = -4960LL;
	uint64_t x460 = 1LLU;

	t90 = (x457|(x458*(x459|x460)));

	if (t90 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x461 = 1;
	static uint16_t x463 = 32012U;
	int8_t x464 = -1;
	volatile int32_t t91 = 974758;

	t91 = (x461|(x462*(x463|x464)));

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x466 = 7LL;
	uint32_t x467 = 18U;
	int8_t x468 = INT8_MIN;

	t92 = (x465|(x466*(x467|x468)));

	if (t92 != 30064770303LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x470 = 1U;
	static uint32_t x471 = 25200454U;
	volatile uint32_t x472 = 55492910U;

	t93 = (x469|(x470*(x471|x472)));

	if (t93 != 401440171016323055LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x473 = -1;
	volatile uint8_t x476 = 20U;
	volatile int32_t t94 = -5658;

	t94 = (x473|(x474*(x475|x476)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x477 = -1LL;
	int64_t x478 = -6663LL;
	uint8_t x479 = UINT8_MAX;
	int32_t x480 = INT32_MIN;
	static volatile int64_t t95 = 13235LL;

	t95 = (x477|(x478*(x479|x480)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x481 = INT64_MIN;
	int16_t x482 = 7068;
	int32_t x483 = -149;
	int8_t x484 = INT8_MIN;

	t96 = (x481|(x482*(x483|x484)));

	if (t96 != -148428LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x489 = 28586U;
	int8_t x490 = INT8_MAX;
	static int64_t x492 = 4671875LL;
	static int64_t t97 = 126800093LL;

	t97 = (x489|(x490*(x491|x492)));

	if (t97 != 865468395LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x498 = 58U;
	static volatile int64_t x499 = -122733894495421218LL;
	int64_t t98 = -132578134885222645LL;

	t98 = (x497|(x498*(x499|x500)));

	if (t98 != -115LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x502 = 620015009759451849LLU;
	uint8_t x503 = 6U;
	int32_t x504 = INT32_MAX;
	static uint64_t t99 = 1529899525201322LLU;

	t99 = (x501|(x502*(x503|x504)));

	if (t99 != 15957644392047575039LLU) { NG(); } else { ; }
	
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

