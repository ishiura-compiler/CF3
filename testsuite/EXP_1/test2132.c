#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x9 = INT64_MIN;
int32_t x13 = 3368157;
static uint16_t x14 = 0U;
int32_t x22 = 3248512;
uint8_t x28 = 3U;
uint16_t x40 = UINT16_MAX;
volatile int16_t x41 = INT16_MIN;
uint8_t x45 = 2U;
uint8_t x47 = 0U;
int32_t t11 = -3795;
volatile uint64_t x51 = UINT64_MAX;
int8_t x52 = INT8_MIN;
uint32_t x54 = UINT32_MAX;
uint8_t x60 = 4U;
volatile int32_t t14 = -182027085;
int16_t x61 = INT16_MIN;
int32_t x63 = -186748077;
int16_t x64 = -1;
uint16_t x68 = 3U;
volatile uint16_t x76 = UINT16_MAX;
volatile int32_t t18 = -4;
int32_t x77 = INT32_MAX;
volatile int32_t t19 = 575969;
int32_t x81 = INT32_MIN;
int8_t x93 = 39;
uint16_t x94 = 4751U;
uint16_t x97 = UINT16_MAX;
static volatile int32_t x102 = -78633966;
uint64_t x104 = 181519LLU;
int16_t x109 = INT16_MIN;
uint16_t x116 = 2764U;
int64_t t29 = -10LL;
int32_t x121 = -1;
int8_t x122 = -41;
int8_t x124 = -1;
volatile int8_t x126 = INT8_MIN;
int32_t x128 = INT32_MIN;
int32_t t33 = INT32_MIN;
static volatile int64_t x140 = 882259672945727534LL;
static int64_t x147 = INT64_MIN;
int32_t t36 = 6003;
int32_t x163 = 51517;
volatile int32_t t40 = -58478;
volatile int8_t x167 = -1;
int64_t x173 = 22469724433141LL;
static int32_t x193 = INT32_MIN;
int16_t x197 = INT16_MAX;
static volatile int32_t t49 = 431208380;
int64_t x202 = -1LL;
int8_t x208 = -1;
volatile int32_t t52 = 12298;
volatile int64_t x214 = INT64_MIN;
static int16_t x219 = INT16_MIN;
int8_t x222 = 1;
int64_t x229 = INT64_MIN;
int16_t x234 = INT16_MIN;
static int32_t x241 = INT32_MAX;
uint16_t x245 = 2331U;
int32_t x247 = -281;
uint32_t t61 = UINT32_MAX;
static volatile uint8_t x252 = 0U;
volatile uint16_t x255 = UINT16_MAX;
uint64_t x256 = 1355751886863LLU;
static volatile uint8_t x257 = 13U;
uint8_t x262 = 3U;
volatile int32_t x263 = INT32_MAX;
volatile int32_t t67 = 549979;
uint32_t x276 = 7235U;
static volatile uint64_t t69 = 178481833LLU;
uint16_t x282 = UINT16_MAX;
volatile int64_t t70 = INT64_MIN;
static int32_t x285 = INT32_MIN;
int64_t x286 = 1039926921159860257LL;
int32_t t71 = 2627982;
volatile int32_t t72 = 146530;
static int64_t x295 = INT64_MAX;
volatile int64_t t73 = INT64_MIN;
int32_t x297 = -105290;
volatile uint32_t x299 = 42661U;
int64_t x300 = INT64_MIN;
uint64_t x301 = 23588581620576507LLU;
volatile int32_t t75 = 29069;
uint64_t x305 = 2253464555243886LLU;
uint16_t x310 = 1U;
uint64_t x315 = 7666580722520238LLU;
int64_t x320 = INT64_MIN;
static int64_t t79 = INT64_MIN;
static uint64_t x321 = UINT64_MAX;
int32_t x322 = INT32_MIN;
int32_t x325 = 5;
uint8_t x328 = 5U;
uint32_t x331 = 874416U;
uint16_t x332 = 9U;
int32_t t82 = 1;
uint8_t x336 = 73U;
volatile uint32_t t84 = UINT32_MAX;
int32_t x350 = INT32_MAX;
int32_t t87 = -1;
static volatile uint8_t x356 = 5U;
uint32_t x359 = UINT32_MAX;
int16_t x360 = INT16_MAX;
volatile int32_t t89 = 8068;
static int16_t x361 = 4905;
uint64_t x363 = UINT64_MAX;
int32_t x364 = INT32_MIN;
static int32_t t92 = INT32_MIN;
int8_t x375 = INT8_MIN;
static int64_t x376 = -2856LL;
static volatile int64_t t93 = -2562267LL;
volatile uint32_t x377 = 338U;
int64_t x381 = INT64_MIN;
static uint8_t x386 = 7U;
int8_t x391 = INT8_MAX;
int32_t x394 = INT32_MIN;
static int32_t t98 = 161410;
int64_t x400 = INT64_MIN;


void f0(void) {
	uint16_t x1 = 20U;
	static uint32_t x2 = UINT32_MAX;
	static int64_t x3 = INT64_MIN;
	int32_t x4 = 740;
	static volatile int32_t t0 = -482194;

	t0 = (((x1^x2)==x3)^x4);

	if (t0 != 740) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 2U;
	static volatile int32_t x6 = INT32_MIN;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = 0U;
	volatile int32_t t1 = 20145;

	t1 = (((x5^x6)==x7)^x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int64_t x11 = INT64_MIN;
	volatile int64_t x12 = -1LL;
	int64_t t2 = -458316664447258981LL;

	t2 = (((x9^x10)==x11)^x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = -1;
	int32_t t3 = -45884;

	t3 = (((x13^x14)==x15)^x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	int32_t x18 = -1;
	static int32_t x19 = 799271;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = 10;

	t4 = (((x17^x18)==x19)^x20);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile uint8_t x23 = UINT8_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 56273;

	t5 = (((x21^x22)==x23)^x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	uint8_t x26 = 5U;
	static uint16_t x27 = 4091U;
	volatile int32_t t6 = 0;

	t6 = (((x25^x26)==x27)^x28);

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 184U;
	int8_t x32 = -30;
	volatile int32_t t7 = -17;

	t7 = (((x29^x30)==x31)^x32);

	if (t7 != -30) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MIN;
	static uint16_t x35 = 3404U;
	int8_t x36 = -1;
	int32_t t8 = 13250695;

	t8 = (((x33^x34)==x35)^x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static int32_t x38 = INT32_MIN;
	int64_t x39 = -1LL;
	int32_t t9 = 3175874;

	t9 = (((x37^x38)==x39)^x40);

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	int32_t x43 = -1;
	int8_t x44 = -1;
	volatile int32_t t10 = -124485;

	t10 = (((x41^x42)==x43)^x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = INT8_MAX;
	volatile uint8_t x48 = 2U;

	t11 = (((x45^x46)==x47)^x48);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	volatile int32_t t12 = -270629014;

	t12 = (((x49^x50)==x51)^x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -14152579;
	int64_t x55 = INT64_MIN;
	uint8_t x56 = 0U;
	volatile int32_t t13 = -1;

	t13 = (((x53^x54)==x55)^x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint16_t x58 = 43U;
	volatile uint64_t x59 = UINT64_MAX;

	t14 = (((x57^x58)==x59)^x60);

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MAX;
	volatile int32_t t15 = 340478;

	t15 = (((x61^x62)==x63)^x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	int8_t x66 = -1;
	volatile int32_t x67 = -1;
	volatile int32_t t16 = -236061;

	t16 = (((x65^x66)==x67)^x68);

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	static volatile int8_t x70 = INT8_MIN;
	int64_t x71 = 66815440459LL;
	int64_t x72 = INT64_MAX;
	int64_t t17 = INT64_MAX;

	t17 = (((x69^x70)==x71)^x72);

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 2001534694386744LLU;
	int32_t x74 = INT32_MIN;
	int32_t x75 = 2904;

	t18 = (((x73^x74)==x75)^x76);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	static int64_t x79 = 0LL;
	uint16_t x80 = UINT16_MAX;

	t19 = (((x77^x78)==x79)^x80);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -141779827;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = -1582344;

	t20 = (((x81^x82)==x83)^x84);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 2U;
	static int8_t x86 = INT8_MIN;
	volatile int64_t x87 = -1LL;
	volatile int16_t x88 = -1;
	int32_t t21 = 59720139;

	t21 = (((x85^x86)==x87)^x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -35368;
	int32_t x90 = INT32_MIN;
	int64_t x91 = 0LL;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 8;

	t22 = (((x89^x90)==x91)^x92);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x95 = -6;
	uint32_t x96 = UINT32_MAX;
	uint32_t t23 = UINT32_MAX;

	t23 = (((x93^x94)==x95)^x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = UINT16_MAX;
	int8_t x99 = -54;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 425850;

	t24 = (((x97^x98)==x99)^x100);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -1;
	static uint64_t x103 = 32827365894LLU;
	uint64_t t25 = 354623033093LLU;

	t25 = (((x101^x102)==x103)^x104);

	if (t25 != 181519LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -2949150LL;
	uint16_t x106 = 113U;
	uint64_t x107 = 4LLU;
	static int32_t x108 = INT32_MIN;
	int32_t t26 = INT32_MIN;

	t26 = (((x105^x106)==x107)^x108);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = -3;
	volatile int32_t x111 = INT32_MIN;
	int8_t x112 = 1;
	static volatile int32_t t27 = -213741175;

	t27 = (((x109^x110)==x111)^x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	uint64_t x114 = 110404LLU;
	static volatile uint64_t x115 = UINT64_MAX;
	static volatile int32_t t28 = 1;

	t28 = (((x113^x114)==x115)^x116);

	if (t28 != 2764) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -5;
	static uint64_t x118 = 14249832859567374LLU;
	int8_t x119 = INT8_MIN;
	volatile int64_t x120 = -1LL;

	t29 = (((x117^x118)==x119)^x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x123 = UINT16_MAX;
	volatile int32_t t30 = 435644;

	t30 = (((x121^x122)==x123)^x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	uint8_t x127 = UINT8_MAX;
	int32_t t31 = INT32_MIN;

	t31 = (((x125^x126)==x127)^x128);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MAX;
	int64_t x131 = 191883235960971LL;
	static int16_t x132 = 6182;
	volatile int32_t t32 = 5913437;

	t32 = (((x129^x130)==x131)^x132);

	if (t32 != 6182) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 195U;
	static int64_t x134 = INT64_MAX;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;

	t33 = (((x133^x134)==x135)^x136);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 0U;
	int8_t x138 = INT8_MAX;
	uint64_t x139 = 450039422759LLU;
	int64_t t34 = 1032LL;

	t34 = (((x137^x138)==x139)^x140);

	if (t34 != 882259672945727534LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 1U;
	static uint32_t x142 = 61U;
	int64_t x143 = -1LL;
	static int16_t x144 = INT16_MIN;
	static int32_t t35 = -143422343;

	t35 = (((x141^x142)==x143)^x144);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	int8_t x148 = INT8_MIN;

	t36 = (((x145^x146)==x147)^x148);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	volatile int8_t x150 = 6;
	int8_t x151 = -1;
	static int8_t x152 = INT8_MIN;
	int32_t t37 = -14279673;

	t37 = (((x149^x150)==x151)^x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 0U;
	static volatile int8_t x154 = 19;
	int64_t x155 = -1LL;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 0;

	t38 = (((x153^x154)==x155)^x156);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1;
	volatile uint16_t x158 = 710U;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MAX;
	int64_t t39 = INT64_MAX;

	t39 = (((x157^x158)==x159)^x160);

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static uint8_t x162 = UINT8_MAX;
	int8_t x164 = -46;

	t40 = (((x161^x162)==x163)^x164);

	if (t40 != -46) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int32_t x166 = INT32_MAX;
	int16_t x168 = -1;
	int32_t t41 = -267752171;

	t41 = (((x165^x166)==x167)^x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	uint8_t x170 = 3U;
	static int64_t x171 = -87340254494186743LL;
	static volatile int8_t x172 = INT8_MAX;
	static volatile int32_t t42 = -19;

	t42 = (((x169^x170)==x171)^x172);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 3603U;
	static volatile uint64_t x175 = 33488LLU;
	int32_t x176 = INT32_MAX;
	int32_t t43 = INT32_MAX;

	t43 = (((x173^x174)==x175)^x176);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	uint16_t x178 = 483U;
	int8_t x179 = -4;
	static int8_t x180 = INT8_MAX;
	int32_t t44 = -58896868;

	t44 = (((x177^x178)==x179)^x180);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = 17;
	int8_t x183 = -1;
	uint64_t x184 = UINT64_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x181^x182)==x183)^x184);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -7501;
	uint16_t x186 = 20U;
	int16_t x187 = 1;
	int32_t x188 = -81381;
	static int32_t t46 = -21;

	t46 = (((x185^x186)==x187)^x188);

	if (t46 != -81381) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 0U;
	uint16_t x190 = UINT16_MAX;
	static int8_t x191 = -2;
	int16_t x192 = INT16_MIN;
	int32_t t47 = -229279234;

	t47 = (((x189^x190)==x191)^x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x194 = 206405;
	int16_t x195 = INT16_MAX;
	int32_t x196 = INT32_MAX;
	int32_t t48 = INT32_MAX;

	t48 = (((x193^x194)==x195)^x196);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	static volatile int8_t x200 = INT8_MIN;

	t49 = (((x197^x198)==x199)^x200);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	volatile int32_t x203 = INT32_MIN;
	uint32_t x204 = 24355892U;
	volatile uint32_t t50 = 1201658781U;

	t50 = (((x201^x202)==x203)^x204);

	if (t50 != 24355892U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = -1;
	uint32_t x206 = 23685U;
	static int8_t x207 = INT8_MIN;
	int32_t t51 = -242;

	t51 = (((x205^x206)==x207)^x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = 454925596LLU;
	volatile uint16_t x212 = UINT16_MAX;

	t52 = (((x209^x210)==x211)^x212);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x215 = -179169735904430LL;
	uint32_t x216 = 145115U;
	static volatile uint32_t t53 = 1687U;

	t53 = (((x213^x214)==x215)^x216);

	if (t53 != 145115U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = -1LL;
	volatile uint16_t x218 = 152U;
	static uint64_t x220 = 4LLU;
	uint64_t t54 = 13742767408821359LLU;

	t54 = (((x217^x218)==x219)^x220);

	if (t54 != 4LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -1;
	uint16_t x223 = 1U;
	int64_t x224 = INT64_MIN;
	int64_t t55 = INT64_MIN;

	t55 = (((x221^x222)==x223)^x224);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = -1LL;
	uint32_t x226 = 22349481U;
	int32_t x227 = -1;
	int8_t x228 = INT8_MAX;
	int32_t t56 = -438;

	t56 = (((x225^x226)==x227)^x228);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = -1LL;
	volatile uint32_t x231 = 179355927U;
	static int64_t x232 = 759939679896851LL;
	int64_t t57 = 3461553097405LL;

	t57 = (((x229^x230)==x231)^x232);

	if (t57 != 759939679896851LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	static volatile uint16_t x235 = 3079U;
	static int32_t x236 = INT32_MAX;
	int32_t t58 = INT32_MAX;

	t58 = (((x233^x234)==x235)^x236);

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = 57;
	volatile int8_t x238 = -1;
	static uint64_t x239 = 264896999208LLU;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -17341396;

	t59 = (((x237^x238)==x239)^x240);

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MAX;
	volatile int16_t x244 = 233;
	static volatile int32_t t60 = -1;

	t60 = (((x241^x242)==x243)^x244);

	if (t60 != 233) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x246 = 1168;
	uint32_t x248 = UINT32_MAX;

	t61 = (((x245^x246)==x247)^x248);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = 27110055LL;
	int64_t x251 = INT64_MIN;
	volatile int32_t t62 = 748707;

	t62 = (((x249^x250)==x251)^x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static int64_t x254 = -1080LL;
	volatile uint64_t t63 = 208871161471649997LLU;

	t63 = (((x253^x254)==x255)^x256);

	if (t63 != 1355751886863LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x258 = INT16_MAX;
	static int8_t x259 = 4;
	int16_t x260 = INT16_MAX;
	static int32_t t64 = -672;

	t64 = (((x257^x258)==x259)^x260);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 2U;
	volatile int64_t x264 = -1LL;
	volatile int64_t t65 = -360823LL;

	t65 = (((x261^x262)==x263)^x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MIN;
	volatile int8_t x267 = INT8_MIN;
	volatile int64_t x268 = -1LL;
	int64_t t66 = -80560451782LL;

	t66 = (((x265^x266)==x267)^x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	volatile uint8_t x270 = 2U;
	static volatile int8_t x271 = -1;
	int8_t x272 = -3;

	t67 = (((x269^x270)==x271)^x272);

	if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	uint32_t x274 = 25764469U;
	uint8_t x275 = 0U;
	static volatile uint32_t t68 = 491546U;

	t68 = (((x273^x274)==x275)^x276);

	if (t68 != 7235U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int64_t x278 = -2398556242221306LL;
	int64_t x279 = INT64_MIN;
	static uint64_t x280 = 50LLU;

	t69 = (((x277^x278)==x279)^x280);

	if (t69 != 50LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = -9;
	int16_t x283 = -1;
	static int64_t x284 = INT64_MIN;

	t70 = (((x281^x282)==x283)^x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x287 = INT64_MIN;
	static int16_t x288 = INT16_MIN;

	t71 = (((x285^x286)==x287)^x288);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	volatile int64_t x290 = INT64_MIN;
	int8_t x291 = INT8_MIN;
	static int8_t x292 = -6;

	t72 = (((x289^x290)==x291)^x292);

	if (t72 != -6) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = -1;
	int64_t x296 = INT64_MIN;

	t73 = (((x293^x294)==x295)^x296);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = 50424247964602701LLU;
	int64_t t74 = INT64_MIN;

	t74 = (((x297^x298)==x299)^x300);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x302 = 1;
	uint16_t x303 = 1281U;
	static int8_t x304 = 19;

	t75 = (((x301^x302)==x303)^x304);

	if (t75 != 19) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	volatile int8_t x307 = INT8_MIN;
	int16_t x308 = 90;
	int32_t t76 = 7748;

	t76 = (((x305^x306)==x307)^x308);

	if (t76 != 90) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 231U;
	int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t77 = INT64_MIN;

	t77 = (((x309^x310)==x311)^x312);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 25071U;
	int8_t x314 = INT8_MIN;
	static int32_t x316 = -1;
	volatile int32_t t78 = -7481;

	t78 = (((x313^x314)==x315)^x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = UINT8_MAX;
	static int16_t x318 = -1;
	int64_t x319 = INT64_MIN;

	t79 = (((x317^x318)==x319)^x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x323 = INT64_MAX;
	static uint64_t x324 = 3802154106428281LLU;
	static uint64_t t80 = 3608018130674400LLU;

	t80 = (((x321^x322)==x323)^x324);

	if (t80 != 3802154106428281LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x326 = 46U;
	int8_t x327 = INT8_MAX;
	volatile int32_t t81 = -82;

	t81 = (((x325^x326)==x327)^x328);

	if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1668;
	static int32_t x330 = INT32_MIN;

	t82 = (((x329^x330)==x331)^x332);

	if (t82 != 9) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 1U;
	static uint64_t x334 = UINT64_MAX;
	int64_t x335 = INT64_MAX;
	int32_t t83 = 34;

	t83 = (((x333^x334)==x335)^x336);

	if (t83 != 73) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	uint32_t x340 = UINT32_MAX;

	t84 = (((x337^x338)==x339)^x340);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	volatile int32_t x342 = INT32_MIN;
	int32_t x343 = 38819;
	int32_t x344 = INT32_MIN;
	int32_t t85 = INT32_MIN;

	t85 = (((x341^x342)==x343)^x344);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = 14;
	uint32_t x346 = UINT32_MAX;
	uint32_t x347 = 440361U;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 4049;

	t86 = (((x345^x346)==x347)^x348);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int8_t x351 = -1;
	volatile int32_t x352 = -124243;

	t87 = (((x349^x350)==x351)^x352);

	if (t87 != -124243) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = 47612521513LL;
	static uint32_t x355 = 10132U;
	static int32_t t88 = -4;

	t88 = (((x353^x354)==x355)^x356);

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;

	t89 = (((x357^x358)==x359)^x360);

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = 26903;
	volatile int32_t t90 = INT32_MIN;

	t90 = (((x361^x362)==x363)^x364);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -11591149;
	int16_t x366 = -1;
	volatile int16_t x367 = -6570;
	static int8_t x368 = INT8_MIN;
	static int32_t t91 = -188163;

	t91 = (((x365^x366)==x367)^x368);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -48344382229511LL;
	volatile int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	volatile int32_t x372 = INT32_MIN;

	t92 = (((x369^x370)==x371)^x372);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	uint64_t x374 = UINT64_MAX;

	t93 = (((x373^x374)==x375)^x376);

	if (t93 != -2855LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = -1;
	static int32_t x379 = -1;
	int32_t x380 = -13;
	int32_t t94 = 23660955;

	t94 = (((x377^x378)==x379)^x380);

	if (t94 != -13) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x382 = 25U;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	static int32_t t95 = INT32_MIN;

	t95 = (((x381^x382)==x383)^x384);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	int16_t x387 = -259;
	uint16_t x388 = 0U;
	int32_t t96 = -241;

	t96 = (((x385^x386)==x387)^x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 16309U;
	int8_t x390 = -1;
	uint8_t x392 = UINT8_MAX;
	int32_t t97 = -61;

	t97 = (((x389^x390)==x391)^x392);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = 203;
	static int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;

	t98 = (((x393^x394)==x395)^x396);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint8_t x398 = UINT8_MAX;
	uint64_t x399 = UINT64_MAX;
	int64_t t99 = INT64_MIN;

	t99 = (((x397^x398)==x399)^x400);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

