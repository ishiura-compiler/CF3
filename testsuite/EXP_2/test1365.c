#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
uint8_t x6 = 2U;
volatile int64_t t1 = 1090017016853217731LL;
int8_t x12 = -1;
volatile int32_t x20 = -1558473;
int16_t x22 = INT16_MIN;
static volatile uint32_t t5 = 39U;
static int64_t x31 = INT64_MIN;
volatile uint64_t x33 = UINT64_MAX;
int64_t x39 = -1LL;
int8_t x40 = 0;
int8_t x51 = -1;
int32_t x57 = INT32_MIN;
int32_t x61 = -21;
int16_t x63 = INT16_MIN;
static uint32_t x64 = UINT32_MAX;
volatile uint64_t x65 = 121796LLU;
static volatile int16_t x69 = -1;
static uint16_t x72 = UINT16_MAX;
static uint8_t x77 = 15U;
static int64_t x78 = 279220175613269021LL;
int8_t x81 = INT8_MIN;
volatile int32_t t18 = 178923;
volatile int8_t x87 = -1;
static int8_t x96 = INT8_MAX;
volatile int32_t t23 = 695682543;
volatile int32_t t25 = -1974;
int8_t x113 = 1;
int32_t x125 = 2048424;
uint32_t t29 = 177U;
static uint16_t x132 = 3074U;
uint8_t x138 = UINT8_MAX;
volatile int16_t x145 = -22;
uint32_t x149 = UINT32_MAX;
static int16_t x157 = INT16_MAX;
static int8_t x159 = -2;
int32_t t37 = -4;
int32_t x161 = -1;
uint8_t x164 = 6U;
static int32_t x165 = 32034;
int8_t x170 = -15;
int8_t x179 = INT8_MIN;
int64_t x180 = INT64_MAX;
uint8_t x182 = 0U;
volatile int16_t x185 = INT16_MIN;
static int16_t x189 = INT16_MAX;
uint16_t x199 = 0U;
int64_t t47 = 630484678227LL;
static volatile int8_t x203 = INT8_MAX;
uint16_t x208 = UINT16_MAX;
int32_t t49 = 3230416;
uint64_t x214 = 4010344LLU;
int32_t x216 = INT32_MIN;
volatile uint32_t x217 = UINT32_MAX;
int64_t t52 = 1147955930305LL;
static int64_t x224 = INT64_MIN;
uint8_t x225 = 51U;
uint32_t x226 = 110731300U;
static uint16_t x232 = 2U;
static volatile int64_t t56 = 3LL;
volatile uint64_t x237 = UINT64_MAX;
int64_t x239 = INT64_MAX;
static uint64_t t57 = 291LLU;
uint32_t x251 = UINT32_MAX;
uint32_t x256 = 3U;
uint16_t x266 = UINT16_MAX;
static int64_t t66 = -22150222831LL;
uint64_t x284 = UINT64_MAX;
int32_t x286 = INT32_MAX;
int64_t x291 = 1602LL;
int64_t x299 = 9206LL;
static volatile uint64_t t72 = UINT64_MAX;
static uint64_t x302 = 1711539967449LLU;
int64_t x310 = INT64_MIN;
int16_t x312 = 4419;
volatile uint64_t t74 = 302672060425LLU;
uint8_t x313 = UINT8_MAX;
int64_t x315 = 789353258746LL;
int64_t x321 = INT64_MAX;
int32_t x322 = INT32_MAX;
uint64_t t78 = 38165929131624460LLU;
static int8_t x346 = INT8_MAX;
volatile uint64_t t82 = 89781714584LLU;
static volatile int32_t t84 = 4739;
uint64_t x364 = UINT64_MAX;
uint32_t x368 = 38910U;
int64_t x370 = -1529642223151982806LL;
int32_t t88 = 660397859;
uint64_t t89 = 226893LLU;
uint32_t x380 = 59U;
uint16_t x385 = UINT16_MAX;
int16_t x386 = INT16_MIN;
volatile uint16_t x388 = UINT16_MAX;
int32_t x389 = -1;
int64_t x392 = INT64_MIN;
int16_t x396 = 526;
uint64_t x397 = 21597579311LLU;
static volatile uint32_t x400 = 262U;
int64_t x409 = -647733974446010LL;
uint32_t x413 = 1286U;


void f0(void) {
	volatile uint16_t x1 = 830U;
	int16_t x3 = -37;
	static uint64_t x4 = 552713490LLU;
	volatile uint64_t t0 = 31046518176LLU;

	t0 = ((x1+(x2<x3))^x4);

	if (t0 != 552713772LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int32_t x7 = 8600;
	volatile int64_t x8 = 1401419LL;

	t1 = ((x5+(x6<x7))^x8);

	if (t1 != -9223372036853374390LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 246U;
	volatile int32_t x10 = INT32_MIN;
	uint32_t x11 = 1030871363U;
	int32_t t2 = 10842332;

	t2 = ((x9+(x10<x11))^x12);

	if (t2 != -247) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 828608U;
	int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MAX;
	int16_t x16 = 12584;
	volatile uint32_t t3 = 19U;

	t3 = ((x13+(x14<x15))^x16);

	if (t3 != 824809U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	int16_t x19 = -1;
	int32_t t4 = 1;

	t4 = ((x17+(x18<x19))^x20);

	if (t4 != 1554486) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 75553U;
	static uint32_t x23 = UINT32_MAX;
	static volatile uint8_t x24 = 20U;

	t5 = ((x21+(x22<x23))^x24);

	if (t5 != 75574U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static uint8_t x26 = 2U;
	uint16_t x27 = 1163U;
	static int64_t x28 = -1LL;
	int64_t t6 = -7142375370LL;

	t6 = ((x25+(x26<x27))^x28);

	if (t6 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	uint8_t x30 = 9U;
	int16_t x32 = -1;
	volatile int32_t t7 = -1;

	t7 = ((x29+(x30<x31))^x32);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MAX;
	static int32_t x35 = -1;
	int64_t x36 = -381LL;
	volatile uint64_t t8 = 130344746327902LLU;

	t8 = ((x33+(x34<x35))^x36);

	if (t8 != 380LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int8_t x38 = INT8_MIN;
	volatile int64_t t9 = 195320752LL;

	t9 = ((x37+(x38<x39))^x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 608U;
	volatile int64_t x42 = -131593332LL;
	uint16_t x43 = 253U;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -3746284;

	t10 = ((x41+(x42<x43))^x44);

	if (t10 != 542) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	uint16_t x46 = 11U;
	int32_t x47 = INT32_MAX;
	uint64_t x48 = UINT64_MAX;
	static uint64_t t11 = UINT64_MAX;

	t11 = ((x45+(x46<x47))^x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	static int8_t x50 = INT8_MIN;
	static int8_t x52 = -1;
	int32_t t12 = -7705;

	t12 = ((x49+(x50<x51))^x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = INT32_MAX;
	static volatile int32_t x59 = INT32_MAX;
	volatile int64_t x60 = INT64_MIN;
	int64_t t13 = 192LL;

	t13 = ((x57+(x58<x59))^x60);

	if (t13 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x62 = INT64_MAX;
	static uint32_t t14 = 14U;

	t14 = ((x61+(x62<x63))^x64);

	if (t14 != 20U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x66 = INT16_MIN;
	static int64_t x67 = -10LL;
	int64_t x68 = -3473LL;
	volatile uint64_t t15 = 892934785990986LLU;

	t15 = ((x65+(x66<x67))^x68);

	if (t15 != 18446744073709431210LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = 789216970;
	static int32_t x71 = 37393337;
	int32_t t16 = -1286822;

	t16 = ((x69+(x70<x71))^x72);

	if (t16 != -65536) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x79 = -1;
	int8_t x80 = -1;
	int32_t t17 = -2239;

	t17 = ((x77+(x78<x79))^x80);

	if (t17 != -16) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x82 = 0LLU;
	int8_t x83 = -4;
	int8_t x84 = 0;

	t18 = ((x81+(x82<x83))^x84);

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x85 = INT64_MIN;
	static uint64_t x86 = 1439834454200637589LLU;
	int32_t x88 = INT32_MIN;
	int64_t t19 = -39708700LL;

	t19 = ((x85+(x86<x87))^x88);

	if (t19 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = -1;
	uint8_t x91 = 7U;
	int32_t x92 = -1;
	volatile int32_t t20 = 0;

	t20 = ((x89+(x90<x91))^x92);

	if (t20 != 2147483646) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 579U;
	static uint8_t x94 = 0U;
	int8_t x95 = INT8_MIN;
	static volatile int32_t t21 = -15;

	t21 = ((x93+(x94<x95))^x96);

	if (t21 != 572) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	uint16_t x98 = UINT16_MAX;
	uint8_t x99 = 15U;
	int32_t x100 = 44;
	volatile int32_t t22 = 12042749;

	t22 = ((x97+(x98<x99))^x100);

	if (t22 != -84) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	static int16_t x102 = -1;
	int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MIN;

	t23 = ((x101+(x102<x103))^x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 51U;
	int8_t x106 = 3;
	static int16_t x107 = INT16_MAX;
	int64_t x108 = -1LL;
	int64_t t24 = -10863526754940575LL;

	t24 = ((x105+(x106<x107))^x108);

	if (t24 != -53LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = INT32_MIN;
	static int32_t x110 = -4266883;
	int64_t x111 = INT64_MAX;
	volatile uint16_t x112 = UINT16_MAX;

	t25 = ((x109+(x110<x111))^x112);

	if (t25 != -2147418114) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = INT64_MIN;
	volatile int64_t x115 = 8440LL;
	int32_t x116 = INT32_MIN;
	static int32_t t26 = -100080;

	t26 = ((x113+(x114<x115))^x116);

	if (t26 != -2147483646) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = -1;
	int64_t x118 = -61LL;
	static int16_t x119 = 12;
	int32_t x120 = -1;
	int32_t t27 = 1881;

	t27 = ((x117+(x118<x119))^x120);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	static int8_t x122 = 0;
	int8_t x123 = -1;
	volatile int32_t x124 = -1;
	volatile int32_t t28 = 2532;

	t28 = ((x121+(x122<x123))^x124);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = INT64_MIN;
	int16_t x127 = 13392;
	uint32_t x128 = 29443574U;

	t29 = ((x125+(x126<x127))^x128);

	if (t29 != 31327327U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 3752384LLU;
	static int32_t x130 = INT32_MAX;
	int16_t x131 = 4;
	volatile uint64_t t30 = 108LLU;

	t30 = ((x129+(x130<x131))^x132);

	if (t30 != 3755458LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 5U;
	int8_t x134 = 26;
	int16_t x135 = INT16_MIN;
	static uint64_t x136 = 1222LLU;
	static volatile uint64_t t31 = 8707LLU;

	t31 = ((x133+(x134<x135))^x136);

	if (t31 != 1219LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -1;
	static uint16_t x139 = 424U;
	int64_t x140 = INT64_MIN;
	volatile int64_t t32 = INT64_MIN;

	t32 = ((x137+(x138<x139))^x140);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 848302467LLU;
	int64_t x142 = INT64_MAX;
	int8_t x143 = -1;
	uint64_t x144 = 271198LLU;
	static volatile uint64_t t33 = 11618658LLU;

	t33 = ((x141+(x142<x143))^x144);

	if (t33 != 848573149LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x146 = 1U;
	static uint32_t x147 = 31510U;
	int32_t x148 = INT32_MAX;
	int32_t t34 = -27324;

	t34 = ((x145+(x146<x147))^x148);

	if (t34 != -2147483628) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x150 = INT16_MIN;
	uint16_t x151 = 1U;
	int8_t x152 = -1;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = ((x149+(x150<x151))^x152);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	int8_t x154 = 1;
	int8_t x155 = 0;
	volatile int8_t x156 = INT8_MIN;
	static volatile int32_t t36 = 0;

	t36 = ((x153+(x154<x155))^x156);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = INT64_MAX;
	uint8_t x160 = 1U;

	t37 = ((x157+(x158<x159))^x160);

	if (t37 != 32766) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = INT64_MAX;
	int8_t x163 = INT8_MIN;
	static volatile int32_t t38 = 0;

	t38 = ((x161+(x162<x163))^x164);

	if (t38 != -7) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x166 = -36;
	int8_t x167 = INT8_MAX;
	volatile int32_t x168 = -15;
	volatile int32_t t39 = 474096792;

	t39 = ((x165+(x166<x167))^x168);

	if (t39 != -32046) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -1;
	static uint16_t x171 = UINT16_MAX;
	volatile uint8_t x172 = 13U;
	int32_t t40 = 896815204;

	t40 = ((x169+(x170<x171))^x172);

	if (t40 != 13) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x173 = 1U;
	static int64_t x174 = 0LL;
	uint16_t x175 = UINT16_MAX;
	int16_t x176 = INT16_MAX;
	uint32_t t41 = 254U;

	t41 = ((x173+(x174<x175))^x176);

	if (t41 != 32765U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -53355347;
	uint16_t x178 = UINT16_MAX;
	int64_t t42 = -26453LL;

	t42 = ((x177+(x178<x179))^x180);

	if (t42 != -9223372036801420462LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x181 = 1;
	volatile int64_t x183 = INT64_MIN;
	volatile uint32_t x184 = 1648257U;
	volatile uint32_t t43 = 45501353U;

	t43 = ((x181+(x182<x183))^x184);

	if (t43 != 1648256U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x186 = -1LL;
	volatile int16_t x187 = -1;
	static volatile int8_t x188 = 0;
	static int32_t t44 = 1;

	t44 = ((x185+(x186<x187))^x188);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = INT16_MIN;
	int64_t x191 = -862132012890112860LL;
	volatile uint64_t x192 = 91767178494183LLU;
	uint64_t t45 = 221046776500708LLU;

	t45 = ((x189+(x190<x191))^x192);

	if (t45 != 91767178526488LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 1U;
	volatile uint64_t x194 = 592309770LLU;
	static uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 118982102981507009LLU;
	uint64_t t46 = 454904786709LLU;

	t46 = ((x193+(x194<x195))^x196);

	if (t46 != 118982102981507011LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	static uint32_t x198 = 64680U;
	uint8_t x200 = 28U;

	t47 = ((x197+(x198<x199))^x200);

	if (t47 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = INT16_MAX;
	uint32_t x202 = 11978U;
	volatile int8_t x204 = 54;
	int32_t t48 = -1925992;

	t48 = ((x201+(x202<x203))^x204);

	if (t48 != 32713) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x205 = 0;
	static int8_t x206 = INT8_MIN;
	static uint16_t x207 = 64U;

	t49 = ((x205+(x206<x207))^x208);

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = -1506;
	int32_t x210 = INT32_MAX;
	int16_t x211 = 1418;
	int16_t x212 = INT16_MIN;
	volatile int32_t t50 = 66801232;

	t50 = ((x209+(x210<x211))^x212);

	if (t50 != 31262) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MIN;
	static volatile int8_t x215 = INT8_MIN;
	int32_t t51 = 1;

	t51 = ((x213+(x214<x215))^x216);

	if (t51 != 2147450881) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	int64_t x220 = -273861LL;

	t52 = ((x217+(x218<x219))^x220);

	if (t52 != -4294693436LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x221 = INT16_MAX;
	volatile int64_t x222 = INT64_MAX;
	volatile int32_t x223 = INT32_MAX;
	int64_t t53 = 392824139713914LL;

	t53 = ((x221+(x222<x223))^x224);

	if (t53 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x227 = 2U;
	int16_t x228 = 3742;
	static volatile int32_t t54 = 52686922;

	t54 = ((x225+(x226<x227))^x228);

	if (t54 != 3757) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x229 = 0U;
	int32_t x230 = INT32_MIN;
	int32_t x231 = 8065628;
	volatile int32_t t55 = 64;

	t55 = ((x229+(x230<x231))^x232);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = -101391LL;
	uint8_t x234 = UINT8_MAX;
	volatile int8_t x235 = INT8_MIN;
	int64_t x236 = -1LL;

	t56 = ((x233+(x234<x235))^x236);

	if (t56 != 101390LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x238 = 1;
	static int64_t x240 = -94230026LL;

	t57 = ((x237+(x238<x239))^x240);

	if (t57 != 18446744073615321590LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = 23;
	int32_t x242 = INT32_MIN;
	static int8_t x243 = INT8_MIN;
	static volatile int8_t x244 = INT8_MIN;
	int32_t t58 = -10790;

	t58 = ((x241+(x242<x243))^x244);

	if (t58 != -104) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -10917;
	int8_t x246 = INT8_MIN;
	int16_t x247 = 29;
	static int8_t x248 = INT8_MAX;
	volatile int32_t t59 = -37453;

	t59 = ((x245+(x246<x247))^x248);

	if (t59 != -10973) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	static uint64_t x250 = 440800694774LLU;
	int32_t x252 = INT32_MAX;
	int64_t t60 = 1074718334522LL;

	t60 = ((x249+(x250<x251))^x252);

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x253 = 185495LLU;
	int32_t x254 = 21;
	int8_t x255 = 0;
	uint64_t t61 = 438691LLU;

	t61 = ((x253+(x254<x255))^x256);

	if (t61 != 185492LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = 4266338538640150LLU;
	static int8_t x259 = 3;
	int64_t x260 = INT64_MAX;
	volatile int64_t t62 = 38653806LL;

	t62 = ((x257+(x258<x259))^x260);

	if (t62 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	static uint32_t x262 = 423514U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = 170LL;
	volatile int64_t t63 = 5LL;

	t63 = ((x261+(x262<x263))^x264);

	if (t63 != -32597LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x265 = UINT8_MAX;
	static int32_t x267 = INT32_MIN;
	int64_t x268 = 1201017988LL;
	int64_t t64 = -8023LL;

	t64 = ((x265+(x266<x267))^x268);

	if (t64 != 1201017979LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MAX;
	volatile int8_t x271 = -1;
	uint8_t x272 = 60U;
	int32_t t65 = 2014;

	t65 = ((x269+(x270<x271))^x272);

	if (t65 != -2147483588) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 96LL;
	volatile uint64_t x274 = 516039404385135LLU;
	int32_t x275 = -1;
	volatile int8_t x276 = INT8_MIN;

	t66 = ((x273+(x274<x275))^x276);

	if (t66 != -31LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x277 = INT16_MIN;
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	volatile int64_t x280 = INT64_MIN;
	int64_t t67 = -12838139634818LL;

	t67 = ((x277+(x278<x279))^x280);

	if (t67 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -181413389307249LL;
	uint16_t x282 = 26701U;
	volatile uint64_t x283 = 961033739154657500LLU;
	uint64_t t68 = 571988413356583682LLU;

	t68 = ((x281+(x282<x283))^x284);

	if (t68 != 181413389307247LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = 0;
	volatile int8_t x287 = -1;
	int8_t x288 = 1;
	int32_t t69 = 1;

	t69 = ((x285+(x286<x287))^x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 0;
	int64_t x290 = 224506777361LL;
	int64_t x292 = -1LL;
	volatile int64_t t70 = 2078LL;

	t70 = ((x289+(x290<x291))^x292);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 1666U;
	uint16_t x294 = UINT16_MAX;
	uint8_t x295 = 3U;
	volatile int32_t x296 = INT32_MIN;
	int32_t t71 = 55687;

	t71 = ((x293+(x294<x295))^x296);

	if (t71 != -2147481982) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x297 = UINT64_MAX;
	int32_t x298 = INT32_MIN;
	static int8_t x300 = -1;

	t72 = ((x297+(x298<x299))^x300);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = 820712605;
	static uint16_t x303 = 938U;
	static uint32_t x304 = UINT32_MAX;
	volatile uint32_t t73 = 13852U;

	t73 = ((x301+(x302<x303))^x304);

	if (t73 != 3474254690U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 3580462072370120709LLU;
	volatile int8_t x311 = INT8_MAX;

	t74 = ((x309+(x310<x311))^x312);

	if (t74 != 3580462072370125125LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x314 = -10310;
	uint8_t x316 = 7U;
	volatile int32_t t75 = 1;

	t75 = ((x313+(x314<x315))^x316);

	if (t75 != 263) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = UINT64_MAX;
	int32_t x318 = 15;
	static int8_t x319 = -1;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t76 = 37433462LLU;

	t76 = ((x317+(x318<x319))^x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x323 = 1;
	uint64_t x324 = 371542431LLU;
	volatile uint64_t t77 = 4538219LLU;

	t77 = ((x321+(x322<x323))^x324);

	if (t77 != 9223372036483233376LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x325 = UINT64_MAX;
	uint8_t x326 = 1U;
	uint8_t x327 = 75U;
	volatile int32_t x328 = INT32_MAX;

	t78 = ((x325+(x326<x327))^x328);

	if (t78 != 2147483647LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x333 = UINT8_MAX;
	static uint8_t x334 = 51U;
	volatile int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	int64_t t79 = 30423400LL;

	t79 = ((x333+(x334<x335))^x336);

	if (t79 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = 2;
	static volatile uint64_t x339 = 542242881841347LLU;
	int8_t x340 = INT8_MIN;
	volatile int32_t t80 = -4;

	t80 = ((x337+(x338<x339))^x340);

	if (t80 != -384) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x341 = 1U;
	uint16_t x342 = 800U;
	volatile int8_t x343 = INT8_MIN;
	uint8_t x344 = 62U;
	int32_t t81 = 9900;

	t81 = ((x341+(x342<x343))^x344);

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x345 = 1137829093216093322LLU;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = -1;

	t82 = ((x345+(x346<x347))^x348);

	if (t82 != 17308914980493458292LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 148U;
	static int32_t x350 = -508;
	uint8_t x351 = 23U;
	volatile int8_t x352 = INT8_MIN;
	static volatile int32_t t83 = 5517270;

	t83 = ((x349+(x350<x351))^x352);

	if (t83 != -235) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x353 = 0U;
	int64_t x354 = -1LL;
	int8_t x355 = -37;
	static uint16_t x356 = UINT16_MAX;

	t84 = ((x353+(x354<x355))^x356);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MIN;
	volatile uint16_t x358 = 2U;
	int32_t x359 = INT32_MAX;
	uint8_t x360 = UINT8_MAX;
	static int32_t t85 = -16705861;

	t85 = ((x357+(x358<x359))^x360);

	if (t85 != -2147483394) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = INT16_MAX;
	volatile uint64_t x362 = 7904824618050LLU;
	int16_t x363 = INT16_MIN;
	uint64_t t86 = 518104613082LLU;

	t86 = ((x361+(x362<x363))^x364);

	if (t86 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x366 = 839U;
	int32_t x367 = 158;
	volatile uint32_t t87 = 0U;

	t87 = ((x365+(x366<x367))^x368);

	if (t87 != 4294907902U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x369 = INT16_MIN;
	int8_t x371 = -1;
	static volatile int16_t x372 = INT16_MAX;

	t88 = ((x369+(x370<x371))^x372);

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x373 = INT8_MIN;
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MIN;
	static volatile uint64_t x376 = 1351235127LLU;

	t89 = ((x373+(x374<x375))^x376);

	if (t89 != 18446744072358316471LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x377 = INT16_MIN;
	volatile int64_t x378 = INT64_MIN;
	uint64_t x379 = UINT64_MAX;
	static uint32_t t90 = 19U;

	t90 = ((x377+(x378<x379))^x380);

	if (t90 != 4294934586U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x381 = 1;
	int64_t x382 = 577102701LL;
	uint32_t x383 = 13231U;
	int64_t x384 = 1468902476695LL;
	volatile int64_t t91 = 251827125744LL;

	t91 = ((x381+(x382<x383))^x384);

	if (t91 != 1468902476694LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x387 = 29U;
	static int32_t t92 = 102;

	t92 = ((x385+(x386<x387))^x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x390 = 5951U;
	int64_t x391 = INT64_MIN;
	volatile int64_t t93 = INT64_MAX;

	t93 = ((x389+(x390<x391))^x392);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = 1;
	int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	static volatile int32_t t94 = 31713792;

	t94 = ((x393+(x394<x395))^x396);

	if (t94 != 527) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x398 = 14;
	static int8_t x399 = -1;
	uint64_t t95 = 17605LLU;

	t95 = ((x397+(x398<x399))^x400);

	if (t95 != 21597579561LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x401 = INT32_MIN;
	uint64_t x402 = 11026092256746LLU;
	static int16_t x403 = INT16_MIN;
	static volatile int8_t x404 = INT8_MIN;
	static int32_t t96 = 104590;

	t96 = ((x401+(x402<x403))^x404);

	if (t96 != 2147483521) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MIN;
	volatile int8_t x406 = INT8_MIN;
	int16_t x407 = INT16_MIN;
	int16_t x408 = 5480;
	volatile int32_t t97 = -317324092;

	t97 = ((x405+(x406<x407))^x408);

	if (t97 != -2147478168) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x410 = 32337U;
	int64_t x411 = INT64_MIN;
	uint32_t x412 = 4U;
	int64_t t98 = 52691819191924LL;

	t98 = ((x409+(x410<x411))^x412);

	if (t98 != -647733974446014LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x414 = 122U;
	int16_t x415 = INT16_MIN;
	int64_t x416 = INT64_MIN;
	volatile int64_t t99 = -148857769LL;

	t99 = ((x413+(x414<x415))^x416);

	if (t99 != -9223372036854774522LL) { NG(); } else { ; }
	
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

