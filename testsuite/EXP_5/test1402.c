#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 940U;
static int8_t x7 = INT8_MAX;
uint16_t x12 = UINT16_MAX;
int8_t x14 = -1;
int8_t x26 = -1;
int64_t x27 = INT64_MIN;
volatile uint8_t x48 = 2U;
int64_t x58 = -756537LL;
int64_t x59 = -29023505722LL;
int32_t x64 = INT32_MIN;
static int32_t x66 = INT32_MAX;
int32_t x70 = INT32_MIN;
int64_t t16 = -409327134655LL;
int16_t x75 = INT16_MAX;
uint16_t x83 = 3898U;
int32_t x90 = INT32_MIN;
uint64_t x91 = 115607LLU;
int32_t x100 = -534000966;
volatile int64_t x114 = 27921787108LL;
static int64_t t28 = 0LL;
int16_t x131 = INT16_MIN;
static int8_t x133 = INT8_MAX;
static volatile int8_t x148 = -29;
static int64_t x158 = INT64_MAX;
static uint64_t x168 = 29440181730668152LLU;
int16_t x170 = INT16_MIN;
int32_t x172 = INT32_MIN;
uint8_t x182 = 2U;
int64_t x184 = INT64_MAX;
uint16_t x188 = 11U;
static int64_t t45 = 1928731388971414331LL;
int64_t x192 = INT64_MAX;
uint64_t x193 = 2182030858733394695LLU;
int16_t x198 = -1;
volatile int32_t t48 = -1589;
int16_t x209 = -1;
int8_t x212 = -1;
static volatile uint64_t x214 = UINT64_MAX;
int8_t x218 = INT8_MAX;
int32_t x219 = -216784468;
int8_t x221 = -1;
int16_t x223 = -575;
static volatile int8_t x226 = 1;
static int8_t x228 = INT8_MIN;
static int64_t x235 = -30LL;
int16_t x240 = INT16_MAX;
volatile int32_t t58 = -3;
volatile int32_t t61 = 501460;
static int8_t x268 = -1;
volatile uint32_t x276 = 18U;
volatile int32_t t66 = -25632065;
uint32_t x281 = 149969888U;
int8_t x293 = INT8_MIN;
static uint16_t x297 = 1082U;
volatile int16_t x300 = INT16_MIN;
int32_t t70 = 595151157;
volatile uint64_t t71 = 446843618011650LLU;
static int16_t x308 = INT16_MAX;
uint8_t x315 = UINT8_MAX;
static uint8_t x321 = 55U;
volatile uint64_t t76 = 2030879217714LLU;
static int16_t x325 = INT16_MIN;
volatile int32_t x337 = INT32_MIN;
uint32_t x345 = 116U;
volatile uint64_t t82 = 720328486LLU;
int16_t x357 = INT16_MIN;
static uint32_t x363 = UINT32_MAX;
static volatile uint8_t x366 = 60U;
static uint64_t x369 = 3366LLU;
int8_t x375 = 62;
uint32_t x382 = 12295U;
int32_t t92 = -262;
volatile uint8_t x397 = UINT8_MAX;
uint64_t x399 = 1448577387957834LLU;
static uint32_t x405 = 2103810U;
int16_t x411 = 2799;
uint16_t x413 = 47U;
static uint32_t x420 = UINT32_MAX;
int64_t t99 = 2072420935LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MIN;
	int8_t x4 = -1;
	static volatile uint32_t t0 = 651204720U;

	t0 = (x1&((x2<x3)/x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	int32_t x8 = -1;
	volatile int32_t t1 = 228;

	t1 = (x5&((x6<x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int64_t x10 = 6808378LL;
	uint64_t x11 = 2162456934595048LLU;
	int32_t t2 = -300948771;

	t2 = (x9&((x10<x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 4U;
	uint16_t x15 = UINT16_MAX;
	uint32_t x16 = UINT32_MAX;
	static uint32_t t3 = 1495U;

	t3 = (x13&((x14<x15)/x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x18 = 10007502676372939LL;
	int8_t x19 = INT8_MIN;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = -535783788;

	t4 = (x17&((x18<x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int16_t x22 = 4;
	static int8_t x23 = INT8_MAX;
	int32_t x24 = -1;
	uint32_t t5 = UINT32_MAX;

	t5 = (x21&((x22<x23)/x24));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 49434246;
	int32_t x28 = 15;
	volatile int32_t t6 = -28;

	t6 = (x25&((x26<x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	static uint8_t x30 = 81U;
	static uint64_t x31 = 86LLU;
	volatile int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 400133833;

	t7 = (x29&((x30<x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	volatile int8_t x34 = -1;
	int8_t x35 = -4;
	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = 1910;

	t8 = (x33&((x34<x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 10LL;
	volatile uint64_t x38 = 629LLU;
	uint32_t x39 = UINT32_MAX;
	volatile int32_t x40 = INT32_MAX;
	volatile int64_t t9 = 13LL;

	t9 = (x37&((x38<x39)/x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	int8_t x42 = INT8_MAX;
	volatile int64_t x43 = INT64_MAX;
	volatile uint16_t x44 = 3282U;
	volatile int32_t t10 = 44054791;

	t10 = (x41&((x42<x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint8_t x46 = 2U;
	int8_t x47 = 12;
	static volatile int32_t t11 = -16;

	t11 = (x45&((x46<x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	static int64_t x54 = 688299833LL;
	int16_t x55 = INT16_MIN;
	int64_t x56 = -1LL;
	int64_t t12 = 16LL;

	t12 = (x53&((x54<x55)/x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = 343;
	int16_t x60 = -1;
	volatile int32_t t13 = 76560;

	t13 = (x57&((x58<x59)/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MAX;
	int8_t x63 = -1;
	int32_t t14 = -1057688528;

	t14 = (x61&((x62<x63)/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int8_t x67 = -1;
	int16_t x68 = -1;
	int32_t t15 = 5;

	t15 = (x65&((x66<x67)/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = -1;
	int32_t x71 = INT32_MIN;
	static int64_t x72 = INT64_MIN;

	t16 = (x69&((x70<x71)/x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MIN;
	uint32_t x74 = 1523U;
	uint64_t x76 = 99056447LLU;
	volatile uint64_t t17 = 7132453536LLU;

	t17 = (x73&((x74<x75)/x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 251070LLU;
	uint16_t x78 = UINT16_MAX;
	static int8_t x79 = 2;
	volatile int16_t x80 = -1;
	uint64_t t18 = 15181286183755LLU;

	t18 = (x77&((x78<x79)/x80));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = -6;
	int16_t x82 = 1028;
	volatile uint16_t x84 = 166U;
	int32_t t19 = 3659;

	t19 = (x81&((x82<x83)/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	static int32_t x87 = -66901;
	uint64_t x88 = 1513802LLU;
	static volatile uint64_t t20 = 361717430447LLU;

	t20 = (x85&((x86<x87)/x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = UINT8_MAX;
	volatile uint64_t x92 = 95357964293880LLU;
	static uint64_t t21 = 419970911026052867LLU;

	t21 = (x89&((x90<x91)/x92));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	volatile uint8_t x94 = UINT8_MAX;
	volatile uint64_t x95 = 662021640956371LLU;
	volatile uint16_t x96 = 163U;
	static volatile int32_t t22 = -13449;

	t22 = (x93&((x94<x95)/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 30;
	int64_t x98 = INT64_MAX;
	volatile int8_t x99 = 13;
	int32_t t23 = 4030108;

	t23 = (x97&((x98<x99)/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	uint32_t x102 = 98030U;
	volatile uint16_t x103 = 1U;
	volatile uint64_t x104 = UINT64_MAX;
	uint64_t t24 = 2814LLU;

	t24 = (x101&((x102<x103)/x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 45560LLU;
	int32_t x106 = -1;
	int64_t x107 = -1LL;
	volatile uint8_t x108 = 3U;
	uint64_t t25 = 7076768595645090715LLU;

	t25 = (x105&((x106<x107)/x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = -17;
	volatile int8_t x110 = 1;
	int32_t x111 = INT32_MAX;
	int8_t x112 = -3;
	int32_t t26 = -3;

	t26 = (x109&((x110<x111)/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x113 = UINT64_MAX;
	int64_t x115 = 215258665344598727LL;
	uint16_t x116 = 114U;
	static uint64_t t27 = 13LLU;

	t27 = (x113&((x114<x115)/x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	static uint32_t x118 = 959616U;
	static int8_t x119 = -1;
	int64_t x120 = INT64_MAX;

	t28 = (x117&((x118<x119)/x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x121 = 3U;
	uint64_t x122 = 4232039889362LLU;
	static int64_t x123 = INT64_MAX;
	volatile uint16_t x124 = 9468U;
	int32_t t29 = -50037;

	t29 = (x121&((x122<x123)/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = -1;
	int32_t x127 = INT32_MIN;
	static volatile int8_t x128 = INT8_MIN;
	volatile int32_t t30 = 27799036;

	t30 = (x125&((x126<x127)/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 17U;
	int32_t x130 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t31 = 1019572;

	t31 = (x129&((x130<x131)/x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x134 = UINT8_MAX;
	int64_t x135 = -4790LL;
	static uint64_t x136 = 112169LLU;
	volatile uint64_t t32 = 84663387721LLU;

	t32 = (x133&((x134<x135)/x136));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x137 = 2U;
	int32_t x138 = 5;
	static uint64_t x139 = 470336760309LLU;
	static uint32_t x140 = 188111977U;
	uint32_t t33 = 61758684U;

	t33 = (x137&((x138<x139)/x140));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -2;
	int8_t x142 = INT8_MAX;
	uint32_t x143 = 23173U;
	static volatile int64_t x144 = INT64_MIN;
	volatile int64_t t34 = 3790LL;

	t34 = (x141&((x142<x143)/x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	volatile int32_t t35 = -1;

	t35 = (x145&((x146<x147)/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 15220203204141LLU;
	int64_t x150 = -1LL;
	int16_t x151 = INT16_MIN;
	static volatile int8_t x152 = -1;
	volatile uint64_t t36 = 997972001366433760LLU;

	t36 = (x149&((x150<x151)/x152));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -1;
	static int16_t x154 = INT16_MAX;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = INT32_MIN;
	volatile int32_t t37 = 442458857;

	t37 = (x153&((x154<x155)/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = 5737;
	static int64_t x159 = -1LL;
	int16_t x160 = INT16_MIN;
	int32_t t38 = 13243548;

	t38 = (x157&((x158<x159)/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = 19U;
	volatile int64_t x162 = INT64_MAX;
	int8_t x163 = -1;
	volatile int32_t x164 = -187533;
	static volatile int32_t t39 = 655;

	t39 = (x161&((x162<x163)/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = UINT8_MAX;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = -39549107533280242LL;
	uint64_t t40 = 134LLU;

	t40 = (x165&((x166<x167)/x168));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	int16_t x171 = -4;
	int32_t t41 = 1059251283;

	t41 = (x169&((x170<x171)/x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	volatile int32_t x175 = -1;
	int32_t x176 = -1;
	static int64_t t42 = 5622758449LL;

	t42 = (x173&((x174<x175)/x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 0U;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = INT16_MIN;
	volatile int8_t x180 = INT8_MAX;
	int32_t t43 = 16397722;

	t43 = (x177&((x178<x179)/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = INT64_MIN;
	static uint32_t x183 = 158U;
	volatile int64_t t44 = 403345602685739LL;

	t44 = (x181&((x182<x183)/x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -207LL;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = INT32_MIN;

	t45 = (x185&((x186<x187)/x188));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MAX;
	int8_t x190 = -9;
	static int32_t x191 = -4;
	int64_t t46 = 308615626882LL;

	t46 = (x189&((x190<x191)/x192));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x194 = 67U;
	int32_t x195 = INT32_MAX;
	uint32_t x196 = 119156U;
	uint64_t t47 = 6222074LLU;

	t47 = (x193&((x194<x195)/x196));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 0U;
	static uint32_t x199 = UINT32_MAX;
	int8_t x200 = 6;

	t48 = (x197&((x198<x199)/x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = UINT32_MAX;
	uint16_t x203 = 31U;
	volatile int32_t x204 = 170285;
	static int32_t t49 = -815666953;

	t49 = (x201&((x202<x203)/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = INT64_MIN;
	static int8_t x206 = INT8_MIN;
	uint32_t x207 = 163850512U;
	int64_t x208 = INT64_MAX;
	volatile int64_t t50 = -13LL;

	t50 = (x205&((x206<x207)/x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x210 = -1;
	volatile uint64_t x211 = 10933899390LLU;
	static int32_t t51 = 27985639;

	t51 = (x209&((x210<x211)/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x213 = INT64_MAX;
	int16_t x215 = INT16_MIN;
	volatile uint8_t x216 = 12U;
	int64_t t52 = -20960058057LL;

	t52 = (x213&((x214<x215)/x216));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = INT32_MIN;
	static int64_t x220 = INT64_MIN;
	volatile int64_t t53 = 463718887516LL;

	t53 = (x217&((x218<x219)/x220));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x222 = INT32_MAX;
	int16_t x224 = INT16_MIN;
	static int32_t t54 = 195000915;

	t54 = (x221&((x222<x223)/x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = 7045;
	int8_t x227 = INT8_MIN;
	volatile int32_t t55 = 43;

	t55 = (x225&((x226<x227)/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -1LL;
	int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	int64_t t56 = -9750688806LL;

	t56 = (x229&((x230<x231)/x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t57 = 60959374;

	t57 = (x233&((x234<x235)/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x237 = INT8_MAX;
	int16_t x238 = -1;
	int64_t x239 = INT64_MAX;

	t58 = (x237&((x238<x239)/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MAX;
	static uint32_t x243 = 46U;
	static uint32_t x244 = UINT32_MAX;
	static int64_t t59 = 166382005899LL;

	t59 = (x241&((x242<x243)/x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = -75;
	int64_t x246 = INT64_MIN;
	int8_t x247 = -30;
	volatile int8_t x248 = -46;
	int32_t t60 = 2344;

	t60 = (x245&((x246<x247)/x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = 1;
	uint64_t x250 = UINT64_MAX;
	volatile uint16_t x251 = UINT16_MAX;
	volatile int32_t x252 = INT32_MAX;

	t61 = (x249&((x250<x251)/x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x261 = INT8_MIN;
	static int64_t x262 = INT64_MIN;
	uint8_t x263 = 7U;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t62 = 139;

	t62 = (x261&((x262<x263)/x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = -1;
	uint8_t x266 = UINT8_MAX;
	int64_t x267 = INT64_MIN;
	int32_t t63 = -123;

	t63 = (x265&((x266<x267)/x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MIN;
	volatile uint8_t x271 = 51U;
	static int64_t x272 = -1LL;
	volatile int64_t t64 = -3163058138423658248LL;

	t64 = (x269&((x270<x271)/x272));

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x273 = 50150608510411LL;
	int32_t x274 = 505;
	int8_t x275 = INT8_MIN;
	int64_t t65 = -409LL;

	t65 = (x273&((x274<x275)/x276));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -1;
	volatile uint8_t x278 = UINT8_MAX;
	int8_t x279 = 7;
	uint16_t x280 = UINT16_MAX;

	t66 = (x277&((x278<x279)/x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x282 = 4603388043534360999LLU;
	volatile int16_t x283 = INT16_MIN;
	static volatile int16_t x284 = 2;
	static uint32_t t67 = 37U;

	t67 = (x281&((x282<x283)/x284));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = 2;
	uint16_t x286 = 0U;
	int32_t x287 = 56;
	uint8_t x288 = 45U;
	static volatile int32_t t68 = 225;

	t68 = (x285&((x286<x287)/x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x294 = INT64_MIN;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = -1LL;
	volatile int64_t t69 = -1LL;

	t69 = (x293&((x294<x295)/x296));

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x298 = UINT16_MAX;
	int64_t x299 = INT64_MIN;

	t70 = (x297&((x298<x299)/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x301 = 4005712LLU;
	static int16_t x302 = -1;
	int8_t x303 = INT8_MAX;
	volatile uint16_t x304 = 1921U;

	t71 = (x301&((x302<x303)/x304));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = 89U;
	int8_t x306 = -1;
	int8_t x307 = 0;
	int32_t t72 = 962193;

	t72 = (x305&((x306<x307)/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = -1;
	static int8_t x311 = -2;
	volatile uint64_t x312 = 1LLU;
	volatile uint64_t t73 = 5155377LLU;

	t73 = (x309&((x310<x311)/x312));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x313 = UINT8_MAX;
	volatile uint64_t x314 = UINT64_MAX;
	static int64_t x316 = -1LL;
	volatile int64_t t74 = -180820589865660LL;

	t74 = (x313&((x314<x315)/x316));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -1;
	uint32_t x318 = 2U;
	uint32_t x319 = UINT32_MAX;
	int64_t x320 = INT64_MAX;
	static volatile int64_t t75 = -940243805432244LL;

	t75 = (x317&((x318<x319)/x320));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = -21189;
	int32_t x323 = INT32_MAX;
	static uint64_t x324 = 567LLU;

	t76 = (x321&((x322<x323)/x324));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x326 = -1;
	static volatile uint32_t x327 = 1U;
	int8_t x328 = 13;
	volatile int32_t t77 = -264562;

	t77 = (x325&((x326<x327)/x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = 241;
	volatile int16_t x331 = INT16_MIN;
	volatile int64_t x332 = 4213179350728427LL;
	volatile int64_t t78 = -2LL;

	t78 = (x329&((x330<x331)/x332));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -1;
	volatile uint16_t x334 = 14U;
	int32_t x335 = -429917263;
	static int8_t x336 = 2;
	int32_t t79 = 2319435;

	t79 = (x333&((x334<x335)/x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x338 = UINT32_MAX;
	volatile uint16_t x339 = UINT16_MAX;
	volatile int32_t x340 = INT32_MAX;
	volatile int32_t t80 = 0;

	t80 = (x337&((x338<x339)/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MAX;
	int16_t x342 = -1;
	static int8_t x343 = INT8_MIN;
	volatile int32_t x344 = 9486;
	int32_t t81 = 52;

	t81 = (x341&((x342<x343)/x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x346 = -465575;
	int16_t x347 = -1;
	uint64_t x348 = 36549533LLU;

	t82 = (x345&((x346<x347)/x348));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = 3373;
	static uint64_t x350 = 64108LLU;
	uint8_t x351 = 14U;
	uint32_t x352 = 594966790U;
	static uint32_t t83 = 7367U;

	t83 = (x349&((x350<x351)/x352));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x358 = UINT32_MAX;
	volatile uint32_t x359 = 650451U;
	int8_t x360 = 1;
	int32_t t84 = -20387903;

	t84 = (x357&((x358<x359)/x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x361 = UINT16_MAX;
	int8_t x362 = 5;
	uint64_t x364 = 4979031LLU;
	static volatile uint64_t t85 = 2762623404301LLU;

	t85 = (x361&((x362<x363)/x364));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x367 = 45U;
	int64_t x368 = -1LL;
	static volatile int64_t t86 = 36294638LL;

	t86 = (x365&((x366<x367)/x368));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x370 = UINT16_MAX;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MAX;
	volatile uint64_t t87 = 16612137LLU;

	t87 = (x369&((x370<x371)/x372));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = -116826;
	uint8_t x374 = 27U;
	int16_t x376 = INT16_MAX;
	volatile int32_t t88 = -37220751;

	t88 = (x373&((x374<x375)/x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x377 = 3874820U;
	uint32_t x378 = UINT32_MAX;
	uint8_t x379 = 15U;
	volatile int32_t x380 = -12153;
	volatile uint32_t t89 = 24U;

	t89 = (x377&((x378<x379)/x380));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x381 = INT64_MIN;
	int16_t x383 = 15651;
	static volatile int32_t x384 = INT32_MIN;
	int64_t t90 = -16752719628705LL;

	t90 = (x381&((x382<x383)/x384));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = -110;
	static int64_t x387 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int64_t t91 = 1491061834LL;

	t91 = (x385&((x386<x387)/x388));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = INT16_MAX;
	int32_t x390 = 8;
	int32_t x391 = INT32_MIN;
	volatile int32_t x392 = -1;

	t92 = (x389&((x390<x391)/x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x393 = 0U;
	int16_t x394 = -2;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -1LL;
	int64_t t93 = -258000929531951657LL;

	t93 = (x393&((x394<x395)/x396));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x398 = 328U;
	static int32_t x400 = INT32_MIN;
	int32_t t94 = 0;

	t94 = (x397&((x398<x399)/x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = UINT64_MAX;
	uint32_t x402 = 6U;
	int32_t x403 = INT32_MIN;
	int16_t x404 = 391;
	volatile uint64_t t95 = 28LLU;

	t95 = (x401&((x402<x403)/x404));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x406 = -483588539213156LL;
	uint8_t x407 = UINT8_MAX;
	static uint16_t x408 = UINT16_MAX;
	volatile uint32_t t96 = 95U;

	t96 = (x405&((x406<x407)/x408));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = 1;
	int32_t x410 = 40802;
	volatile int32_t x412 = INT32_MIN;
	static volatile int32_t t97 = 28;

	t97 = (x409&((x410<x411)/x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x414 = UINT64_MAX;
	volatile int64_t x415 = -1026336032357556021LL;
	static int64_t x416 = -1LL;
	static volatile int64_t t98 = -2LL;

	t98 = (x413&((x414<x415)/x416));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = INT64_MAX;
	uint16_t x418 = UINT16_MAX;
	uint8_t x419 = UINT8_MAX;

	t99 = (x417&((x418<x419)/x420));

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

