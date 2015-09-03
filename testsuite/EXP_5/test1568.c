#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 566997583347932780LLU;
int16_t x2 = INT16_MIN;
volatile int8_t x6 = INT8_MIN;
int64_t x7 = INT64_MIN;
uint16_t x35 = UINT16_MAX;
static int8_t x36 = INT8_MIN;
volatile uint32_t x41 = UINT32_MAX;
int32_t t11 = -558745587;
int32_t x49 = INT32_MIN;
int32_t x52 = -397389001;
int32_t x60 = INT32_MAX;
uint8_t x61 = 26U;
int32_t x62 = 185375784;
volatile int32_t t15 = -5624;
int32_t x68 = INT32_MIN;
static volatile uint8_t x72 = 59U;
static volatile int32_t t18 = -84061;
int32_t x84 = INT32_MAX;
int64_t x86 = -13211589443LL;
volatile int32_t t22 = 40888;
volatile uint8_t x106 = 0U;
int32_t t26 = 857;
static int64_t x111 = INT64_MIN;
static int8_t x117 = INT8_MIN;
int16_t x120 = 3;
volatile int16_t x127 = INT16_MIN;
int32_t x128 = 15187046;
static int32_t x130 = -1;
int8_t x131 = INT8_MIN;
volatile int32_t t32 = 6623947;
int64_t x133 = INT64_MIN;
uint8_t x134 = 60U;
uint32_t x142 = 75032989U;
int32_t x147 = INT32_MIN;
int16_t x148 = -46;
volatile int16_t x151 = -1;
static volatile int32_t t36 = 11967607;
uint8_t x156 = 1U;
int8_t x161 = 1;
volatile int32_t x164 = -1;
int8_t x165 = -1;
volatile uint64_t x171 = UINT64_MAX;
int8_t x176 = -1;
volatile int16_t x180 = 35;
int16_t x189 = INT16_MIN;
int32_t x190 = -1;
int16_t x194 = INT16_MIN;
int32_t t47 = -6020;
int16_t x200 = -1;
int32_t t49 = -72535555;
int32_t t53 = -2627;
int16_t x228 = -1;
volatile int32_t t55 = 639091599;
int64_t x239 = INT64_MIN;
int32_t t57 = -283802107;
uint16_t x241 = 455U;
int32_t t59 = -1;
volatile int32_t t60 = 252;
static uint8_t x254 = UINT8_MAX;
int16_t x256 = INT16_MAX;
volatile int16_t x258 = INT16_MAX;
int32_t t62 = 1931;
uint32_t x264 = 7U;
uint16_t x269 = UINT16_MAX;
int32_t t65 = -256809219;
int64_t x273 = -1LL;
uint64_t x276 = 10279862481160LLU;
int32_t t66 = 88;
volatile int8_t x282 = INT8_MIN;
uint32_t x285 = UINT32_MAX;
volatile int32_t t70 = -78;
int32_t x294 = -22901;
int16_t x295 = 4;
static int8_t x296 = -1;
volatile int32_t x302 = INT32_MAX;
int64_t x308 = INT64_MAX;
static int32_t t74 = 59;
int32_t x311 = INT32_MAX;
int16_t x316 = -1461;
uint32_t x320 = 44U;
static int32_t x322 = -1;
int32_t x323 = INT32_MIN;
uint16_t x324 = 1U;
int32_t t78 = 893437;
volatile int64_t x330 = -1LL;
uint64_t x331 = 165412478265LLU;
static int64_t x344 = -1LL;
int32_t t83 = 0;
int16_t x352 = 11650;
int32_t t84 = 21898;
static uint8_t x355 = UINT8_MAX;
volatile uint16_t x357 = 15973U;
uint8_t x358 = 1U;
static uint8_t x364 = UINT8_MAX;
static uint8_t x369 = 77U;
int16_t x383 = INT16_MIN;
uint16_t x385 = UINT16_MAX;
int64_t x392 = INT64_MAX;
uint64_t x394 = 729860534531671LLU;
int8_t x397 = INT8_MIN;
int64_t x400 = INT64_MIN;
static uint8_t x401 = UINT8_MAX;
int32_t x402 = -29212;
static int16_t x411 = -1;
int16_t x412 = 6057;
volatile int32_t t99 = -459998857;


void f0(void) {
	static int32_t x3 = -1;
	static int64_t x4 = 1965708365LL;
	volatile int32_t t0 = 771699751;

	t0 = (x1==((x2<=x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 15585U;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = -3217;

	t1 = (x5==((x6<=x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 32144U;
	static int16_t x10 = INT16_MAX;
	volatile int16_t x11 = INT16_MAX;
	static volatile int16_t x12 = INT16_MIN;
	int32_t t2 = -1;

	t2 = (x9==((x10<=x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 85LLU;
	volatile int32_t x14 = INT32_MIN;
	static int8_t x15 = INT8_MIN;
	int16_t x16 = -62;
	static volatile int32_t t3 = 40074;

	t3 = (x13==((x14<=x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = -111987;
	static volatile int32_t x19 = INT32_MAX;
	static int32_t x20 = -51267;
	static volatile int32_t t4 = -287248232;

	t4 = (x17==((x18<=x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -532313852;
	uint16_t x22 = 4U;
	int64_t x23 = INT64_MAX;
	volatile uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -30406;

	t5 = (x21==((x22<=x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static int8_t x26 = INT8_MIN;
	int16_t x27 = -5;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -6213;

	t6 = (x25==((x26<=x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	volatile int64_t x30 = -86924118LL;
	int64_t x31 = -1LL;
	static volatile uint64_t x32 = 6126740873LLU;
	int32_t t7 = -27342;

	t7 = (x29==((x30<=x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MAX;
	volatile int32_t t8 = -5519;

	t8 = (x33==((x34<=x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = UINT32_MAX;
	volatile uint32_t x38 = 452637U;
	int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -508075055;

	t9 = (x37==((x38<=x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -1;
	int64_t x43 = -32341872740LL;
	static volatile uint64_t x44 = UINT64_MAX;
	static volatile int32_t t10 = 673634;

	t10 = (x41==((x42<=x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int16_t x46 = INT16_MIN;
	volatile int64_t x47 = INT64_MIN;
	static int64_t x48 = 118807065360116LL;

	t11 = (x45==((x46<=x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x50 = UINT32_MAX;
	volatile int16_t x51 = INT16_MIN;
	volatile int32_t t12 = 0;

	t12 = (x49==((x50<=x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	int32_t x54 = 1279;
	static volatile uint8_t x55 = UINT8_MAX;
	int32_t x56 = -1;
	int32_t t13 = 13619663;

	t13 = (x53==((x54<=x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile int8_t x58 = 1;
	int16_t x59 = INT16_MIN;
	volatile int32_t t14 = -1823;

	t14 = (x57==((x58<=x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x63 = INT8_MAX;
	int32_t x64 = INT32_MIN;

	t15 = (x61==((x62<=x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	static uint16_t x66 = 1U;
	uint16_t x67 = 705U;
	volatile int32_t t16 = -797406;

	t16 = (x65==((x66<=x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static uint64_t x70 = 91930377536LLU;
	int64_t x71 = 3071635187836715LL;
	static int32_t t17 = 32;

	t17 = (x69==((x70<=x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	static uint32_t x74 = UINT32_MAX;
	int8_t x75 = -1;
	int64_t x76 = -1LL;

	t18 = (x73==((x74<=x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	static int32_t x78 = INT32_MIN;
	int64_t x79 = -371289351013834LL;
	int64_t x80 = -30LL;
	volatile int32_t t19 = -1;

	t19 = (x77==((x78<=x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int32_t x82 = INT32_MIN;
	volatile int16_t x83 = INT16_MIN;
	volatile int32_t t20 = -65496254;

	t20 = (x81==((x82<=x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	static int64_t x87 = -17377757753797087LL;
	static uint64_t x88 = 6910806957733LLU;
	static volatile int32_t t21 = 4078283;

	t21 = (x85==((x86<=x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	static int16_t x90 = -50;
	uint16_t x91 = 19994U;
	static volatile uint16_t x92 = 23756U;

	t22 = (x89==((x90<=x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 1080U;
	static volatile int32_t x94 = 616;
	uint16_t x95 = 0U;
	volatile uint8_t x96 = UINT8_MAX;
	int32_t t23 = 60155096;

	t23 = (x93==((x94<=x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint32_t x98 = 864U;
	uint8_t x99 = UINT8_MAX;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = -3888060;

	t24 = (x97==((x98<=x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 2;
	uint8_t x102 = 1U;
	int16_t x103 = INT16_MAX;
	int8_t x104 = -29;
	int32_t t25 = -193895;

	t25 = (x101==((x102<=x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	int64_t x107 = -80LL;
	volatile int64_t x108 = -1LL;

	t26 = (x105==((x106<=x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -2109884718247329218LL;
	volatile int8_t x110 = INT8_MIN;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = -234268331;

	t27 = (x109==((x110<=x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MAX;
	static int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MIN;
	int64_t x116 = -1LL;
	int32_t t28 = 175214141;

	t28 = (x113==((x114<=x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = UINT64_MAX;
	uint8_t x119 = 12U;
	int32_t t29 = -440;

	t29 = (x117==((x118<=x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = -123375243;

	t30 = (x121==((x122<=x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	uint16_t x126 = UINT16_MAX;
	volatile int32_t t31 = 1;

	t31 = (x125==((x126<=x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 5981228U;
	uint64_t x132 = UINT64_MAX;

	t32 = (x129==((x130<=x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x135 = 62276809873LL;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t33 = -359;

	t33 = (x133==((x134<=x135)/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 7280121U;
	static uint16_t x143 = 10266U;
	uint8_t x144 = 1U;
	static int32_t t34 = 4530213;

	t34 = (x141==((x142<=x143)/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = UINT32_MAX;
	static int64_t x146 = INT64_MIN;
	volatile int32_t t35 = 426;

	t35 = (x145==((x146<=x147)/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = INT16_MIN;
	static int16_t x150 = -1;
	static uint16_t x152 = 1616U;

	t36 = (x149==((x150<=x151)/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 0U;
	int64_t x154 = -1LL;
	int64_t x155 = 651530122833LL;
	volatile int32_t t37 = 10811;

	t37 = (x153==((x154<=x155)/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -59;
	uint16_t x158 = 1074U;
	uint32_t x159 = 81337569U;
	int8_t x160 = -1;
	volatile int32_t t38 = 211;

	t38 = (x157==((x158<=x159)/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x162 = 11U;
	int8_t x163 = INT8_MAX;
	int32_t t39 = -1194331;

	t39 = (x161==((x162<=x163)/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x166 = -66;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -1;
	int32_t t40 = -19288;

	t40 = (x165==((x166<=x167)/x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MAX;
	int16_t x172 = -1;
	volatile int32_t t41 = -31;

	t41 = (x169==((x170<=x171)/x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x173 = UINT8_MAX;
	uint64_t x174 = 1LLU;
	uint64_t x175 = 8323317LLU;
	volatile int32_t t42 = 159549;

	t42 = (x173==((x174<=x175)/x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 6017144160085LLU;
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = INT32_MIN;
	int32_t t43 = -235;

	t43 = (x177==((x178<=x179)/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x181 = -27;
	volatile int16_t x182 = INT16_MIN;
	volatile int64_t x183 = INT64_MAX;
	volatile int32_t x184 = 100;
	static volatile int32_t t44 = -11;

	t44 = (x181==((x182<=x183)/x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = UINT16_MAX;
	int8_t x186 = -3;
	int32_t x187 = 13;
	int8_t x188 = 59;
	int32_t t45 = 1230764;

	t45 = (x185==((x186<=x187)/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x191 = INT8_MIN;
	uint16_t x192 = UINT16_MAX;
	int32_t t46 = 2425;

	t46 = (x189==((x190<=x191)/x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x193 = INT64_MAX;
	int32_t x195 = INT32_MIN;
	volatile int64_t x196 = -1664LL;

	t47 = (x193==((x194<=x195)/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x197 = 3291665416LLU;
	int8_t x198 = 1;
	volatile int64_t x199 = INT64_MAX;
	static volatile int32_t t48 = 0;

	t48 = (x197==((x198<=x199)/x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 12859LLU;
	int16_t x202 = 0;
	int16_t x203 = INT16_MIN;
	static volatile uint32_t x204 = UINT32_MAX;

	t49 = (x201==((x202<=x203)/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 4U;
	uint8_t x206 = UINT8_MAX;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = -1;
	int32_t t50 = -954592117;

	t50 = (x205==((x206<=x207)/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MIN;
	volatile uint8_t x210 = UINT8_MAX;
	int8_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t51 = -58884017;

	t51 = (x209==((x210<=x211)/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -1;
	int8_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t52 = 536000690;

	t52 = (x217==((x218<=x219)/x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x221 = 15716U;
	volatile uint64_t x222 = 3352083053LLU;
	uint8_t x223 = 5U;
	int64_t x224 = 880663LL;

	t53 = (x221==((x222<=x223)/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -2;
	uint16_t x226 = 156U;
	int32_t x227 = INT32_MAX;
	volatile int32_t t54 = 2851711;

	t54 = (x225==((x226<=x227)/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 24U;
	int64_t x230 = INT64_MIN;
	static int16_t x231 = -1;
	uint16_t x232 = 10439U;

	t55 = (x229==((x230<=x231)/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x234 = INT32_MIN;
	int16_t x235 = -10;
	int8_t x236 = -2;
	volatile int32_t t56 = -1;

	t56 = (x233==((x234<=x235)/x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MAX;
	volatile int8_t x238 = -1;
	int64_t x240 = INT64_MIN;

	t57 = (x237==((x238<=x239)/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x242 = UINT32_MAX;
	volatile int32_t x243 = 12;
	int64_t x244 = INT64_MIN;
	volatile int32_t t58 = 1;

	t58 = (x241==((x242<=x243)/x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x245 = -1;
	int8_t x246 = 3;
	static uint64_t x247 = 3214LLU;
	uint32_t x248 = UINT32_MAX;

	t59 = (x245==((x246<=x247)/x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MIN;
	int8_t x251 = 11;
	volatile int64_t x252 = -1LL;

	t60 = (x249==((x250<=x251)/x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x253 = 8003LLU;
	static volatile int64_t x255 = INT64_MIN;
	int32_t t61 = -35946;

	t61 = (x253==((x254<=x255)/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 0U;
	uint32_t x259 = 323U;
	static volatile int16_t x260 = INT16_MAX;

	t62 = (x257==((x258<=x259)/x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = UINT16_MAX;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t t63 = -6292;

	t63 = (x261==((x262<=x263)/x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -1;
	int8_t x266 = -2;
	static uint16_t x267 = 1U;
	int8_t x268 = INT8_MAX;
	static volatile int32_t t64 = -1;

	t64 = (x265==((x266<=x267)/x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x270 = INT16_MIN;
	int64_t x271 = -1LL;
	static volatile int16_t x272 = -1;

	t65 = (x269==((x270<=x271)/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x274 = UINT8_MAX;
	volatile int8_t x275 = INT8_MIN;

	t66 = (x273==((x274<=x275)/x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x277 = INT16_MAX;
	int64_t x278 = 0LL;
	volatile int64_t x279 = INT64_MIN;
	int32_t x280 = 392;
	static int32_t t67 = -1;

	t67 = (x277==((x278<=x279)/x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = -46;
	int64_t x283 = INT64_MAX;
	static int64_t x284 = -1LL;
	static volatile int32_t t68 = 17620;

	t68 = (x281==((x282<=x283)/x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x286 = -13;
	int16_t x287 = INT16_MIN;
	int32_t x288 = -1;
	int32_t t69 = -58813360;

	t69 = (x285==((x286<=x287)/x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = UINT32_MAX;
	uint8_t x290 = UINT8_MAX;
	static uint32_t x291 = 264U;
	static uint8_t x292 = 1U;

	t70 = (x289==((x290<=x291)/x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = 4U;
	int32_t t71 = -3;

	t71 = (x293==((x294<=x295)/x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MAX;
	int64_t x298 = -8510101LL;
	int16_t x299 = 1175;
	int64_t x300 = INT64_MIN;
	int32_t t72 = 2;

	t72 = (x297==((x298<=x299)/x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x301 = 58153821896107075LL;
	static uint8_t x303 = 19U;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t73 = -301876;

	t73 = (x301==((x302<=x303)/x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x305 = -1;
	int32_t x306 = 1179;
	int8_t x307 = 10;

	t74 = (x305==((x306<=x307)/x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MAX;
	static int8_t x310 = INT8_MAX;
	volatile uint32_t x312 = 1U;
	static int32_t t75 = 8;

	t75 = (x309==((x310<=x311)/x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = -3392641;
	uint16_t x314 = 497U;
	int64_t x315 = INT64_MIN;
	static volatile int32_t t76 = -444262202;

	t76 = (x313==((x314<=x315)/x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x317 = 1U;
	static int16_t x318 = -84;
	volatile uint8_t x319 = 1U;
	volatile int32_t t77 = -35582;

	t77 = (x317==((x318<=x319)/x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = -1;

	t78 = (x321==((x322<=x323)/x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x325 = -1LL;
	static int64_t x326 = 1141LL;
	static int16_t x327 = INT16_MAX;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t79 = -142069;

	t79 = (x325==((x326<=x327)/x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x329 = 3161546805LL;
	volatile uint8_t x332 = 1U;
	int32_t t80 = 5649;

	t80 = (x329==((x330<=x331)/x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -7602;
	int16_t x334 = -1;
	int8_t x335 = -41;
	uint32_t x336 = 730U;
	volatile int32_t t81 = -23164919;

	t81 = (x333==((x334<=x335)/x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 3377U;
	volatile int32_t x338 = 11306539;
	static int32_t x339 = -1;
	static uint16_t x340 = UINT16_MAX;
	volatile int32_t t82 = -8120;

	t82 = (x337==((x338<=x339)/x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 515U;
	volatile uint16_t x342 = UINT16_MAX;
	uint64_t x343 = 2307370423LLU;

	t83 = (x341==((x342<=x343)/x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = INT64_MIN;
	int32_t x350 = INT32_MAX;
	volatile int16_t x351 = -4;

	t84 = (x349==((x350<=x351)/x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	volatile uint8_t x354 = 7U;
	uint64_t x356 = UINT64_MAX;
	static volatile int32_t t85 = -508374349;

	t85 = (x353==((x354<=x355)/x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x359 = INT16_MIN;
	int32_t x360 = -121233;
	volatile int32_t t86 = 99;

	t86 = (x357==((x358<=x359)/x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MAX;
	static uint32_t x362 = 4040514U;
	volatile int8_t x363 = -1;
	volatile int32_t t87 = -60;

	t87 = (x361==((x362<=x363)/x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	uint64_t x366 = 15719866LLU;
	uint16_t x367 = UINT16_MAX;
	int64_t x368 = 816LL;
	volatile int32_t t88 = 112;

	t88 = (x365==((x366<=x367)/x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x370 = INT32_MIN;
	volatile int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t89 = -3528222;

	t89 = (x369==((x370<=x371)/x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x373 = 3779LLU;
	uint16_t x374 = UINT16_MAX;
	int64_t x375 = -19LL;
	volatile int64_t x376 = -108586258LL;
	volatile int32_t t90 = 39758529;

	t90 = (x373==((x374<=x375)/x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 6U;
	int32_t x378 = INT32_MAX;
	uint8_t x379 = UINT8_MAX;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t91 = 153627578;

	t91 = (x377==((x378<=x379)/x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x381 = UINT8_MAX;
	static int32_t x382 = INT32_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t92 = -405149213;

	t92 = (x381==((x382<=x383)/x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x386 = 1;
	int8_t x387 = -1;
	uint8_t x388 = 8U;
	int32_t t93 = -2;

	t93 = (x385==((x386<=x387)/x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = -1;
	int32_t x390 = 7850153;
	int16_t x391 = INT16_MIN;
	static int32_t t94 = 8168419;

	t94 = (x389==((x390<=x391)/x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = 4516251;
	int8_t x395 = INT8_MIN;
	volatile int64_t x396 = 864LL;
	static volatile int32_t t95 = -41500;

	t95 = (x393==((x394<=x395)/x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x398 = -92;
	uint16_t x399 = 0U;
	volatile int32_t t96 = 379;

	t96 = (x397==((x398<=x399)/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x403 = 17416058021751LLU;
	int8_t x404 = -1;
	int32_t t97 = 14545;

	t97 = (x401==((x402<=x403)/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = INT8_MIN;
	int64_t x406 = 190878234893LL;
	int16_t x407 = -6;
	int64_t x408 = INT64_MAX;
	static volatile int32_t t98 = -510486;

	t98 = (x405==((x406<=x407)/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x409 = 1244513713LL;
	int64_t x410 = -676810691LL;

	t99 = (x409==((x410<=x411)/x412));

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

