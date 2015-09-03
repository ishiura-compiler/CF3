#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = -192;
uint8_t x11 = 1U;
int16_t x13 = -1;
static volatile uint32_t x14 = 11U;
static int8_t x17 = INT8_MIN;
int64_t x20 = INT64_MIN;
volatile int32_t t5 = 0;
int8_t x34 = INT8_MIN;
volatile uint8_t x36 = 23U;
int32_t t7 = -762200;
volatile uint64_t x41 = 410891757LLU;
int64_t x45 = -1LL;
int32_t x47 = 16038459;
int64_t x51 = INT64_MIN;
int64_t t11 = 14070LL;
volatile int32_t t12 = 9;
static volatile int8_t x57 = INT8_MIN;
int32_t x58 = INT32_MAX;
int32_t t13 = -9;
static uint16_t x63 = 35U;
int8_t x64 = 12;
volatile int32_t t14 = 358056;
uint8_t x70 = 0U;
static int32_t x82 = -105016;
static int16_t x86 = -1;
static uint32_t x87 = 236470801U;
uint16_t x91 = UINT16_MAX;
int64_t x92 = INT64_MIN;
int16_t x96 = -1;
uint16_t x98 = 3748U;
volatile int32_t t23 = -84;
static volatile int16_t x102 = INT16_MAX;
volatile int32_t x103 = -328674;
volatile int16_t x104 = INT16_MAX;
int8_t x107 = INT8_MIN;
volatile int64_t x109 = INT64_MIN;
static volatile int64_t x111 = INT64_MIN;
int8_t x112 = INT8_MIN;
volatile int32_t t26 = -7407;
int64_t x115 = 4685LL;
uint32_t t27 = 26955U;
int32_t x120 = 438;
static int32_t t28 = 317766798;
int32_t x126 = -1;
uint32_t x132 = UINT32_MAX;
uint32_t t31 = 6556048U;
volatile int64_t x139 = -1LL;
int16_t x140 = INT16_MIN;
static int32_t x143 = INT32_MIN;
int32_t t34 = 0;
int16_t x145 = -48;
int16_t x149 = INT16_MAX;
int32_t x151 = INT32_MIN;
static uint8_t x157 = 4U;
uint16_t x158 = 18U;
int16_t x159 = INT16_MIN;
static int64_t x160 = -7283296163014LL;
volatile int64_t x164 = -6010010157087268LL;
volatile int8_t x168 = -6;
int32_t t40 = -1;
int32_t t41 = -63;
volatile int32_t t42 = -1014;
int32_t x177 = -88232;
int64_t x182 = INT64_MIN;
static volatile int8_t x183 = INT8_MIN;
volatile int64_t t44 = 22LL;
static uint16_t x185 = 1987U;
int64_t x189 = INT64_MAX;
uint64_t t48 = 883540920893538LLU;
int64_t x203 = INT64_MAX;
volatile int32_t t51 = -6;
int8_t x213 = -56;
static int32_t x216 = INT32_MIN;
volatile int16_t x217 = 0;
uint8_t x220 = 30U;
int16_t x221 = 1;
int32_t x228 = INT32_MIN;
static uint32_t x235 = 14850261U;
volatile int8_t x236 = INT8_MAX;
uint32_t x239 = 5645U;
uint32_t x240 = UINT32_MAX;
static volatile uint8_t x242 = UINT8_MAX;
volatile uint8_t x253 = UINT8_MAX;
uint64_t x256 = 119925509386LLU;
uint8_t x258 = 13U;
volatile int16_t x267 = -5044;
uint64_t x268 = 1LLU;
volatile uint8_t x274 = 9U;
uint16_t x277 = 5U;
int64_t x280 = INT64_MIN;
int16_t x286 = INT16_MIN;
volatile uint8_t x289 = 3U;
uint32_t x292 = 2012391U;
uint64_t x310 = UINT64_MAX;
volatile uint64_t x316 = 213LLU;
static volatile uint32_t x322 = 4U;
int8_t x326 = -1;
int32_t x329 = -7803912;
int8_t x331 = INT8_MAX;
uint32_t x333 = UINT32_MAX;
volatile uint32_t t80 = 160U;
int64_t x337 = -31256657073LL;
int64_t x340 = INT64_MIN;
int8_t x344 = INT8_MIN;
static int32_t t85 = 823;
int8_t x360 = INT8_MAX;
int32_t t86 = 1;
uint32_t t87 = 54849768U;
int8_t x367 = 1;
static int16_t x373 = INT16_MIN;
int16_t x378 = INT16_MIN;
uint32_t x385 = UINT32_MAX;
static int16_t x387 = INT16_MAX;
static uint64_t x397 = 190347959392277LLU;
int32_t x404 = INT32_MAX;


void f0(void) {
	volatile int32_t x1 = 1;
	uint8_t x2 = 5U;
	uint32_t x3 = 1675761000U;
	int16_t x4 = -1;
	volatile int32_t t0 = -44239;

	t0 = (((x1==x2)<=x3)/x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int32_t x6 = -1323929;
	volatile int32_t x7 = INT32_MIN;
	static int16_t x8 = 8820;

	t1 = (((x5==x6)<=x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint16_t x10 = UINT16_MAX;
	static int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -57119163;

	t2 = (((x9==x10)<=x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = -7757;
	int16_t x16 = INT16_MIN;
	static int32_t t3 = 449;

	t3 = (((x13==x14)<=x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = INT64_MIN;
	uint64_t x19 = 1035128538033760LLU;
	int64_t t4 = -37045152098178467LL;

	t4 = (((x17==x18)<=x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	int32_t x27 = -1;
	int8_t x28 = INT8_MIN;

	t5 = (((x25==x26)<=x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = INT64_MAX;
	int64_t x30 = INT64_MAX;
	uint32_t x31 = 677793654U;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = 2473640;

	t6 = (((x29==x30)<=x31)/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int32_t x35 = INT32_MAX;

	t7 = (((x33==x34)<=x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	static int8_t x38 = 34;
	int32_t x39 = INT32_MIN;
	volatile uint32_t x40 = 3118413U;
	uint32_t t8 = 5744U;

	t8 = (((x37==x38)<=x39)/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = 57U;
	volatile int8_t x43 = -1;
	int32_t x44 = -1;
	int32_t t9 = 181738;

	t9 = (((x41==x42)<=x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MAX;
	static uint8_t x48 = UINT8_MAX;
	static int32_t t10 = -104;

	t10 = (((x45==x46)<=x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	static int32_t x50 = INT32_MAX;
	static int64_t x52 = -1LL;

	t11 = (((x49==x50)<=x51)/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	uint64_t x54 = 1868236088795LLU;
	uint8_t x55 = 10U;
	uint16_t x56 = 30U;

	t12 = (((x53==x54)<=x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x59 = 4975278U;
	uint16_t x60 = 52U;

	t13 = (((x57==x58)<=x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	int64_t x62 = -1LL;

	t14 = (((x61==x62)<=x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 10U;
	uint64_t x66 = 61088486LLU;
	volatile int8_t x67 = INT8_MAX;
	uint8_t x68 = UINT8_MAX;
	int32_t t15 = 18;

	t15 = (((x65==x66)<=x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 5913U;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = 15632;
	volatile int32_t t16 = -4;

	t16 = (((x69==x70)<=x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MIN;
	volatile uint64_t x76 = 87273LLU;
	volatile uint64_t t17 = 207289148LLU;

	t17 = (((x73==x74)<=x75)/x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = UINT8_MAX;
	int16_t x78 = INT16_MIN;
	volatile int64_t x79 = -1LL;
	int8_t x80 = INT8_MIN;
	volatile int32_t t18 = 7563560;

	t18 = (((x77==x78)<=x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -14;
	uint8_t x83 = 0U;
	int64_t x84 = -1LL;
	volatile int64_t t19 = 8697242324702916LL;

	t19 = (((x81==x82)<=x83)/x84);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	volatile int32_t x88 = INT32_MIN;
	volatile int32_t t20 = 2158;

	t20 = (((x85==x86)<=x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	uint16_t x90 = UINT16_MAX;
	volatile int64_t t21 = -1985076LL;

	t21 = (((x89==x90)<=x91)/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -32;
	uint64_t x94 = 417063405316185776LLU;
	int16_t x95 = -1;
	static int32_t t22 = 2117;

	t22 = (((x93==x94)<=x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 1;
	uint32_t x99 = 223376U;
	int16_t x100 = -796;

	t23 = (((x97==x98)<=x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	static int32_t t24 = 43758;

	t24 = (((x101==x102)<=x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = -1;
	int64_t x106 = INT64_MIN;
	static uint64_t x108 = 266921642660894298LLU;
	static uint64_t t25 = 1069929LLU;

	t25 = (((x105==x106)<=x107)/x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = INT8_MAX;

	t26 = (((x109==x110)<=x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	int64_t x114 = -1LL;
	uint32_t x116 = UINT32_MAX;

	t27 = (((x113==x114)<=x115)/x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	static int32_t x118 = -365;
	int64_t x119 = INT64_MAX;

	t28 = (((x117==x118)<=x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = 0;
	int64_t x122 = 3LL;
	uint32_t x123 = 7270509U;
	static uint8_t x124 = 1U;
	volatile int32_t t29 = -21;

	t29 = (((x121==x122)<=x123)/x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	uint8_t x127 = 50U;
	static int32_t x128 = INT32_MIN;
	int32_t t30 = -1023;

	t30 = (((x125==x126)<=x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x129 = -3;
	uint64_t x130 = 2LLU;
	static volatile uint32_t x131 = 8106670U;

	t31 = (((x129==x130)<=x131)/x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = 512;
	uint32_t x134 = 12U;
	uint8_t x135 = 2U;
	int16_t x136 = -1802;
	int32_t t32 = 418;

	t32 = (((x133==x134)<=x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = 46;
	int32_t x138 = INT32_MIN;
	volatile int32_t t33 = 1;

	t33 = (((x137==x138)<=x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	volatile int16_t x142 = -14898;
	int32_t x144 = -1;

	t34 = (((x141==x142)<=x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x146 = -59;
	static volatile int8_t x147 = INT8_MIN;
	uint64_t x148 = UINT64_MAX;
	static uint64_t t35 = 5847281485LLU;

	t35 = (((x145==x146)<=x147)/x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x150 = -18651272;
	uint8_t x152 = 2U;
	int32_t t36 = 10341572;

	t36 = (((x149==x150)<=x151)/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = -53;
	int8_t x154 = 18;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = 6;
	volatile int32_t t37 = 702437;

	t37 = (((x153==x154)<=x155)/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t t38 = -2LL;

	t38 = (((x157==x158)<=x159)/x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	volatile uint32_t x162 = 1U;
	volatile int64_t x163 = INT64_MAX;
	volatile int64_t t39 = 7576574028149LL;

	t39 = (((x161==x162)<=x163)/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = INT32_MAX;
	int64_t x166 = 105421971031LL;
	volatile uint64_t x167 = 1600534LLU;

	t40 = (((x165==x166)<=x167)/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x169 = -1;
	volatile int16_t x170 = INT16_MIN;
	volatile uint32_t x171 = 12U;
	int16_t x172 = 1021;

	t41 = (((x169==x170)<=x171)/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	uint8_t x174 = 3U;
	uint32_t x175 = UINT32_MAX;
	volatile int32_t x176 = INT32_MAX;

	t42 = (((x173==x174)<=x175)/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x178 = INT8_MAX;
	uint8_t x179 = 2U;
	volatile int16_t x180 = INT16_MAX;
	int32_t t43 = 4;

	t43 = (((x177==x178)<=x179)/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -1;
	int64_t x184 = INT64_MAX;

	t44 = (((x181==x182)<=x183)/x184);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x186 = 487520;
	int64_t x187 = INT64_MAX;
	static int8_t x188 = -8;
	volatile int32_t t45 = 22655;

	t45 = (((x185==x186)<=x187)/x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x190 = -1;
	static int64_t x191 = 364521890LL;
	volatile int8_t x192 = 1;
	int32_t t46 = 12;

	t46 = (((x189==x190)<=x191)/x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MAX;
	int64_t x194 = 1LL;
	volatile int32_t x195 = INT32_MAX;
	int32_t x196 = -26870719;
	int32_t t47 = 20894;

	t47 = (((x193==x194)<=x195)/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = -1;
	int8_t x198 = -1;
	int32_t x199 = 323;
	uint64_t x200 = 28252LLU;

	t48 = (((x197==x198)<=x199)/x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -80;
	static int16_t x202 = INT16_MAX;
	static int16_t x204 = 11609;
	volatile int32_t t49 = -441863;

	t49 = (((x201==x202)<=x203)/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	int64_t x207 = -1LL;
	int64_t x208 = 3LL;
	static int64_t t50 = 11167890LL;

	t50 = (((x205==x206)<=x207)/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x209 = 90U;
	static volatile int8_t x210 = 32;
	uint64_t x211 = 44322388070763LLU;
	static int32_t x212 = INT32_MIN;

	t51 = (((x209==x210)<=x211)/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x214 = UINT64_MAX;
	int8_t x215 = 0;
	int32_t t52 = -1249;

	t52 = (((x213==x214)<=x215)/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x218 = -162006LL;
	int64_t x219 = INT64_MAX;
	int32_t t53 = -24013124;

	t53 = (((x217==x218)<=x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x222 = INT32_MIN;
	uint8_t x223 = 67U;
	int32_t x224 = INT32_MIN;
	int32_t t54 = -118;

	t54 = (((x221==x222)<=x223)/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x225 = INT16_MAX;
	int64_t x226 = -1LL;
	volatile int16_t x227 = INT16_MIN;
	int32_t t55 = -30911524;

	t55 = (((x225==x226)<=x227)/x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	uint64_t x230 = 3LLU;
	volatile uint64_t x231 = UINT64_MAX;
	int16_t x232 = 442;
	static int32_t t56 = -18992275;

	t56 = (((x229==x230)<=x231)/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	int32_t t57 = 41;

	t57 = (((x233==x234)<=x235)/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	static int64_t x238 = INT64_MIN;
	uint32_t t58 = 26368779U;

	t58 = (((x237==x238)<=x239)/x240);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MIN;
	static int8_t x243 = -1;
	uint8_t x244 = 24U;
	static volatile int32_t t59 = 6;

	t59 = (((x241==x242)<=x243)/x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = -1;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 3127186629993033825LLU;
	int8_t x248 = 15;
	int32_t t60 = 0;

	t60 = (((x245==x246)<=x247)/x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x254 = -1;
	uint64_t x255 = 305032308072597336LLU;
	uint64_t t61 = 7645888112280LLU;

	t61 = (((x253==x254)<=x255)/x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = 1;
	volatile int32_t x259 = INT32_MIN;
	int64_t x260 = -1LL;
	int64_t t62 = -57913584706519797LL;

	t62 = (((x257==x258)<=x259)/x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = 2U;
	static int32_t x263 = -5;
	uint8_t x264 = 14U;
	volatile int32_t t63 = -123989;

	t63 = (((x261==x262)<=x263)/x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MIN;
	volatile uint64_t t64 = 676115116660853LLU;

	t64 = (((x265==x266)<=x267)/x268);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	static int32_t x270 = INT32_MAX;
	uint32_t x271 = 945U;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t65 = 34713;

	t65 = (((x269==x270)<=x271)/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MIN;
	static uint16_t x275 = 0U;
	int32_t x276 = INT32_MIN;
	int32_t t66 = -338;

	t66 = (((x273==x274)<=x275)/x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x278 = 4LLU;
	int8_t x279 = -36;
	volatile int64_t t67 = 888406523304514LL;

	t67 = (((x277==x278)<=x279)/x280);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MAX;
	volatile uint16_t x284 = 150U;
	static volatile int32_t t68 = -11436;

	t68 = (((x281==x282)<=x283)/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x285 = 1528;
	int16_t x287 = -682;
	static uint64_t x288 = UINT64_MAX;
	volatile uint64_t t69 = 6355364583LLU;

	t69 = (((x285==x286)<=x287)/x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x290 = 232267U;
	int32_t x291 = -1;
	volatile uint32_t t70 = 5573852U;

	t70 = (((x289==x290)<=x291)/x292);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 1717U;
	static uint64_t x294 = 10705957004334LLU;
	int32_t x295 = INT32_MIN;
	static int16_t x296 = INT16_MIN;
	int32_t t71 = -48083162;

	t71 = (((x293==x294)<=x295)/x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MAX;
	int32_t x298 = 2092;
	static volatile int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t72 = -19316;

	t72 = (((x297==x298)<=x299)/x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -244631910;
	volatile uint8_t x302 = 2U;
	static int32_t x303 = INT32_MIN;
	volatile int16_t x304 = 5;
	int32_t t73 = 490;

	t73 = (((x301==x302)<=x303)/x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -1;
	static uint32_t x311 = 1U;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t74 = 166;

	t74 = (((x309==x310)<=x311)/x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	int32_t x314 = 8055;
	int16_t x315 = -11;
	static volatile uint64_t t75 = 1LLU;

	t75 = (((x313==x314)<=x315)/x316);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = UINT32_MAX;
	int8_t x318 = INT8_MAX;
	uint32_t x319 = 161757U;
	int64_t x320 = INT64_MAX;
	volatile int64_t t76 = -637706200993376908LL;

	t76 = (((x317==x318)<=x319)/x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = UINT8_MAX;
	uint16_t x323 = 2U;
	volatile uint64_t x324 = 61167178299010099LLU;
	volatile uint64_t t77 = 8682262282167LLU;

	t77 = (((x321==x322)<=x323)/x324);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x327 = 1071874284897LLU;
	int32_t x328 = -262517396;
	static int32_t t78 = -6;

	t78 = (((x325==x326)<=x327)/x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x330 = -1;
	uint8_t x332 = 23U;
	volatile int32_t t79 = -16;

	t79 = (((x329==x330)<=x331)/x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x334 = 12913U;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = UINT32_MAX;

	t80 = (((x333==x334)<=x335)/x336);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x338 = INT16_MIN;
	volatile uint64_t x339 = 22441718LLU;
	int64_t t81 = -849280LL;

	t81 = (((x337==x338)<=x339)/x340);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = INT64_MAX;
	int16_t x342 = 0;
	int8_t x343 = INT8_MIN;
	static int32_t t82 = 73870;

	t82 = (((x341==x342)<=x343)/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MAX;
	int32_t x347 = INT32_MAX;
	volatile int32_t x348 = 1211;
	int32_t t83 = 5134;

	t83 = (((x345==x346)<=x347)/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x349 = 8086251753759LLU;
	volatile int64_t x350 = 73345801157093809LL;
	uint32_t x351 = UINT32_MAX;
	static int64_t x352 = INT64_MIN;
	volatile int64_t t84 = 56497LL;

	t84 = (((x349==x350)<=x351)/x352);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MIN;
	uint32_t x355 = 109U;
	static int16_t x356 = -21;

	t85 = (((x353==x354)<=x355)/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int32_t x358 = INT32_MIN;
	volatile int16_t x359 = -1;

	t86 = (((x357==x358)<=x359)/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	static int16_t x362 = -4;
	uint8_t x363 = 1U;
	uint32_t x364 = 441774498U;

	t87 = (((x361==x362)<=x363)/x364);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = -1;
	uint16_t x366 = 1U;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t88 = -1;

	t88 = (((x365==x366)<=x367)/x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = -6;
	int8_t x370 = INT8_MIN;
	int64_t x371 = -168841793888557484LL;
	int32_t x372 = INT32_MIN;
	int32_t t89 = 19819;

	t89 = (((x369==x370)<=x371)/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x374 = INT32_MIN;
	static int64_t x375 = INT64_MIN;
	int8_t x376 = -1;
	static int32_t t90 = 350218686;

	t90 = (((x373==x374)<=x375)/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x377 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t91 = 51;

	t91 = (((x377==x378)<=x379)/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = UINT32_MAX;
	static uint8_t x382 = 8U;
	volatile uint32_t x383 = 1U;
	volatile uint64_t x384 = 211590046LLU;
	volatile uint64_t t92 = 190718833142157LLU;

	t92 = (((x381==x382)<=x383)/x384);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x386 = INT8_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t93 = 439;

	t93 = (((x385==x386)<=x387)/x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x389 = INT16_MAX;
	int16_t x390 = 10657;
	volatile int8_t x391 = -28;
	int16_t x392 = -1;
	static volatile int32_t t94 = -1841;

	t94 = (((x389==x390)<=x391)/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = 1482U;
	int32_t x395 = -1;
	int32_t x396 = INT32_MAX;
	static int32_t t95 = -1;

	t95 = (((x393==x394)<=x395)/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x398 = 3977485;
	static uint64_t x399 = 52575LLU;
	volatile uint64_t x400 = 455LLU;
	volatile uint64_t t96 = 2465LLU;

	t96 = (((x397==x398)<=x399)/x400);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MAX;
	static int32_t x402 = 6;
	volatile int32_t x403 = INT32_MIN;
	static int32_t t97 = 1031;

	t97 = (((x401==x402)<=x403)/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = 61U;
	static int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MIN;
	static uint8_t x408 = UINT8_MAX;
	int32_t t98 = 797284;

	t98 = (((x405==x406)<=x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = 3556U;
	static int16_t x410 = INT16_MIN;
	volatile int8_t x411 = 1;
	static uint16_t x412 = 66U;
	static int32_t t99 = -2;

	t99 = (((x409==x410)<=x411)/x412);

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

