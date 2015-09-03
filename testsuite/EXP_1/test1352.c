#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = 0;
uint64_t x5 = 22005069578748LLU;
uint8_t x15 = UINT8_MAX;
int64_t x21 = INT64_MIN;
int8_t x25 = -1;
static int8_t x28 = -1;
volatile uint16_t x30 = UINT16_MAX;
volatile int16_t x32 = 53;
volatile uint64_t t7 = 8064608448253LLU;
uint64_t x33 = UINT64_MAX;
int16_t x34 = INT16_MAX;
int64_t x40 = 120881731025LL;
int32_t x53 = INT32_MIN;
int8_t x55 = INT8_MIN;
static int16_t x64 = INT16_MAX;
int64_t x68 = -1LL;
uint8_t x75 = UINT8_MAX;
volatile int32_t t22 = -6961;
static volatile int32_t t24 = 2429;
static volatile int16_t x111 = 529;
int64_t x121 = 55946983LL;
uint64_t t30 = 5LLU;
static volatile int32_t t32 = -1;
uint8_t x135 = 15U;
uint16_t x138 = 4U;
uint16_t x140 = UINT16_MAX;
uint32_t x144 = UINT32_MAX;
int64_t x148 = -1LL;
static uint16_t x149 = 1511U;
static int8_t x151 = 31;
static volatile uint16_t x154 = 1U;
static uint32_t x157 = UINT32_MAX;
volatile int16_t x165 = INT16_MAX;
uint64_t x167 = UINT64_MAX;
uint16_t x169 = UINT16_MAX;
int16_t x170 = -1;
int64_t t42 = -26384LL;
static int8_t x176 = INT8_MIN;
int8_t x180 = -16;
int64_t x188 = INT64_MIN;
int16_t x191 = 1;
uint32_t x203 = 1999188U;
volatile uint32_t t50 = 50U;
volatile int16_t x214 = INT16_MIN;
uint32_t x216 = UINT32_MAX;
int64_t x221 = INT64_MIN;
int64_t x226 = -1LL;
volatile int32_t t56 = 2341862;
int16_t x229 = INT16_MIN;
int8_t x230 = INT8_MAX;
volatile uint16_t x238 = 1U;
int32_t t59 = -365737;
int64_t t60 = 8555087471155LL;
int16_t x252 = INT16_MIN;
static volatile uint64_t t62 = 31213437637618LLU;
int16_t x255 = 8784;
int32_t t63 = 915;
int64_t x259 = INT64_MIN;
static volatile int64_t t64 = 4362854028807833385LL;
volatile uint64_t x261 = 514079LLU;
int32_t t66 = 65064109;
int32_t x271 = INT32_MIN;
int64_t x275 = 10372690418986LL;
int8_t x278 = INT8_MAX;
uint64_t x284 = 55045625LLU;
int16_t x287 = INT16_MAX;
volatile int32_t t71 = 973447237;
uint16_t x292 = UINT16_MAX;
int16_t x305 = 15173;
volatile int32_t t77 = 498;
int64_t x316 = INT64_MIN;
static volatile int32_t x320 = INT32_MAX;
int64_t x324 = -65410636524951422LL;
int64_t t80 = -30LL;
int8_t x330 = INT8_MIN;
uint64_t x333 = 313790359825659LLU;
uint32_t x335 = 213U;
static int64_t x336 = -2861379986LL;
int16_t x341 = INT16_MAX;
int64_t x352 = INT64_MIN;
static volatile int8_t x353 = -16;
int32_t x354 = -455;
int8_t x355 = -1;
int8_t x358 = INT8_MIN;
volatile int16_t x367 = INT16_MIN;
int16_t x368 = 1;
static int32_t x373 = INT32_MAX;
volatile uint16_t x379 = 7750U;
volatile int64_t t94 = -382LL;
uint32_t x383 = 50565U;
volatile int64_t t97 = -5617847414186LL;
int8_t x393 = INT8_MIN;
static int8_t x396 = -33;
static uint64_t t98 = 3LLU;
static uint32_t x400 = UINT32_MAX;
uint32_t t99 = UINT32_MAX;


void f0(void) {
	uint16_t x2 = 2U;
	volatile int8_t x3 = INT8_MIN;
	static int16_t x4 = 1;
	int32_t t0 = 854;

	t0 = (((x1==x2)^x3)^x4);

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int16_t x7 = 2;
	int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = 1;

	t1 = (((x5==x6)^x7)^x8);

	if (t1 != -2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 146;
	uint32_t x10 = 249442U;
	int8_t x11 = -9;
	static uint16_t x12 = 401U;
	int32_t t2 = -488565;

	t2 = (((x9==x10)^x11)^x12);

	if (t2 != -410) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	static uint16_t x14 = 121U;
	static uint64_t x16 = 694953087801LLU;
	uint64_t t3 = 52360LLU;

	t3 = (((x13==x14)^x15)^x16);

	if (t3 != 694953087942LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 12483U;
	int64_t x18 = -1LL;
	static int8_t x19 = INT8_MIN;
	volatile int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -6322692;

	t4 = (((x17==x18)^x19)^x20);

	if (t4 != 32640) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = 598950677829186913LL;
	static int64_t x23 = -130055363905LL;
	int8_t x24 = -1;
	static int64_t t5 = -978832193385LL;

	t5 = (((x21==x22)^x23)^x24);

	if (t5 != 130055363904LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MIN;
	static int32_t t6 = -978577;

	t6 = (((x25==x26)^x27)^x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	uint64_t x31 = UINT64_MAX;

	t7 = (((x29==x30)^x31)^x32);

	if (t7 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x35 = UINT8_MAX;
	volatile uint16_t x36 = 43U;
	volatile int32_t t8 = 224;

	t8 = (((x33==x34)^x35)^x36);

	if (t8 != 212) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile uint8_t x38 = 77U;
	int16_t x39 = 7190;
	volatile int64_t t9 = -432971LL;

	t9 = (((x37==x38)^x39)^x40);

	if (t9 != 120881727943LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	int64_t x43 = -385LL;
	static volatile uint32_t x44 = 27238679U;
	static volatile int64_t t10 = 118962782LL;

	t10 = (((x41==x42)^x43)^x44);

	if (t10 != -27238552LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int8_t x46 = 1;
	static int8_t x47 = -2;
	int16_t x48 = 45;
	int32_t t11 = -71263;

	t11 = (((x45==x46)^x47)^x48);

	if (t11 != -45) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x50 = 127U;
	int32_t x51 = 8892;
	static volatile uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 180LLU;

	t12 = (((x49==x50)^x51)^x52);

	if (t12 != 18446744073709542723LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 6858049347LLU;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 352;

	t13 = (((x53==x54)^x55)^x56);

	if (t13 != 2147483520) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 10U;
	int64_t x58 = INT64_MIN;
	static int16_t x59 = -1;
	volatile uint32_t x60 = 3206934U;
	static volatile uint32_t t14 = 285013U;

	t14 = (((x57==x58)^x59)^x60);

	if (t14 != 4291760361U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 19;
	int8_t x62 = -16;
	static volatile int32_t x63 = -132;
	int32_t t15 = 77189224;

	t15 = (((x61==x62)^x63)^x64);

	if (t15 != -32637) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 4120;
	static int32_t x66 = INT32_MAX;
	static int32_t x67 = INT32_MIN;
	volatile int64_t t16 = -5299LL;

	t16 = (((x65==x66)^x67)^x68);

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MIN;
	volatile int64_t x72 = INT64_MAX;
	volatile int64_t t17 = 66500444LL;

	t17 = (((x69==x70)^x71)^x72);

	if (t17 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int32_t x74 = -1;
	int16_t x76 = -52;
	volatile int32_t t18 = -8013;

	t18 = (((x73==x74)^x75)^x76);

	if (t18 != -206) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MAX;
	volatile int32_t x79 = INT32_MIN;
	int16_t x80 = -1;
	volatile int32_t t19 = INT32_MAX;

	t19 = (((x77==x78)^x79)^x80);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = -1;
	static int32_t x83 = INT32_MIN;
	int32_t x84 = 2582427;
	volatile int32_t t20 = -1;

	t20 = (((x81==x82)^x83)^x84);

	if (t20 != -2144901221) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	volatile int16_t x86 = -214;
	uint16_t x87 = 6U;
	volatile uint16_t x88 = UINT16_MAX;
	static int32_t t21 = 763485;

	t21 = (((x85==x86)^x87)^x88);

	if (t21 != 65529) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 25699U;
	int64_t x90 = 4607618541781431534LL;
	uint8_t x91 = 1U;
	int16_t x92 = INT16_MIN;

	t22 = (((x89==x90)^x91)^x92);

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = 1610657429716LL;
	int16_t x94 = INT16_MIN;
	int64_t x95 = -1LL;
	volatile int16_t x96 = INT16_MIN;
	volatile int64_t t23 = 12812622016154LL;

	t23 = (((x93==x94)^x95)^x96);

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 3U;
	int8_t x98 = INT8_MAX;
	int8_t x99 = INT8_MAX;
	static int16_t x100 = -1;

	t24 = (((x97==x98)^x99)^x100);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	int16_t x104 = -1781;
	int64_t t25 = -6835032LL;

	t25 = (((x101==x102)^x103)^x104);

	if (t25 != 9223372036854774026LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	uint32_t x106 = UINT32_MAX;
	static int32_t x107 = INT32_MAX;
	uint64_t x108 = 18403063546514LLU;
	uint64_t t26 = 299959LLU;

	t26 = (((x105==x106)^x107)^x108);

	if (t26 != 18402658696557LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MAX;
	int64_t x110 = INT64_MAX;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 1;

	t27 = (((x109==x110)^x111)^x112);

	if (t27 != -2147483120) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	uint8_t x114 = 3U;
	uint32_t x115 = UINT32_MAX;
	int64_t x116 = -1LL;
	volatile int64_t t28 = -1913LL;

	t28 = (((x113==x114)^x115)^x116);

	if (t28 != -4294967296LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 178;
	int32_t x118 = 60461418;
	uint64_t x119 = 160791240LLU;
	uint32_t x120 = 1228910U;
	volatile uint64_t t29 = 7076199LLU;

	t29 = (((x117==x118)^x119)^x120);

	if (t29 != 159890086LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = UINT64_MAX;
	static uint16_t x123 = 4427U;
	uint64_t x124 = UINT64_MAX;

	t30 = (((x121==x122)^x123)^x124);

	if (t30 != 18446744073709547188LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 21U;
	int32_t x126 = -81710;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -13557100;

	t31 = (((x125==x126)^x127)^x128);

	if (t31 != 2147483520) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1LL;
	static volatile int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	int8_t x132 = -11;

	t32 = (((x129==x130)^x131)^x132);

	if (t32 != 10) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = UINT8_MAX;
	int32_t x134 = INT32_MIN;
	volatile int16_t x136 = 512;
	static int32_t t33 = 237603708;

	t33 = (((x133==x134)^x135)^x136);

	if (t33 != 527) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 11;
	volatile uint32_t x139 = 28U;
	static volatile uint32_t t34 = 511U;

	t34 = (((x137==x138)^x139)^x140);

	if (t34 != 65507U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static volatile int64_t x142 = 8526LL;
	uint64_t x143 = 2LLU;
	static uint64_t t35 = 103305048952968486LLU;

	t35 = (((x141==x142)^x143)^x144);

	if (t35 != 4294967293LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	uint32_t x146 = UINT32_MAX;
	int32_t x147 = 617751379;
	int64_t t36 = 16578778446LL;

	t36 = (((x145==x146)^x147)^x148);

	if (t36 != -617751380LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	static int32_t x152 = INT32_MIN;
	int32_t t37 = -16134;

	t37 = (((x149==x150)^x151)^x152);

	if (t37 != -2147483617) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	static int16_t x155 = -1;
	int16_t x156 = -1;
	volatile int32_t t38 = 41686900;

	t38 = (((x153==x154)^x155)^x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x158 = -1LL;
	int32_t x159 = INT32_MAX;
	static int32_t x160 = -1;
	int32_t t39 = INT32_MIN;

	t39 = (((x157==x158)^x159)^x160);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1U;
	uint32_t x162 = UINT32_MAX;
	volatile int8_t x163 = -1;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 238650638;

	t40 = (((x161==x162)^x163)^x164);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = -29938098419LL;
	int32_t x168 = -5;
	volatile uint64_t t41 = 1293173178821261LLU;

	t41 = (((x165==x166)^x167)^x168);

	if (t41 != 4LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x171 = INT64_MIN;
	volatile int32_t x172 = INT32_MIN;

	t42 = (((x169==x170)^x171)^x172);

	if (t42 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	volatile uint32_t x174 = UINT32_MAX;
	static volatile int32_t x175 = INT32_MIN;
	volatile int32_t t43 = -1037489627;

	t43 = (((x173==x174)^x175)^x176);

	if (t43 != 2147483521) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	static uint64_t x178 = 182LLU;
	int64_t x179 = -1LL;
	volatile int64_t t44 = -1410465943LL;

	t44 = (((x177==x178)^x179)^x180);

	if (t44 != 15LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	static int32_t x182 = 115;
	volatile uint32_t x183 = 12U;
	int32_t x184 = INT32_MIN;
	volatile uint32_t t45 = 13410917U;

	t45 = (((x181==x182)^x183)^x184);

	if (t45 != 2147483660U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	uint8_t x186 = UINT8_MAX;
	static volatile int16_t x187 = INT16_MIN;
	volatile int64_t t46 = 5537LL;

	t46 = (((x185==x186)^x187)^x188);

	if (t46 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	volatile int64_t x190 = -1LL;
	static int32_t x192 = 123411015;
	volatile int32_t t47 = -13021;

	t47 = (((x189==x190)^x191)^x192);

	if (t47 != 123411014) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = 5;
	static volatile int32_t x194 = INT32_MIN;
	static int32_t x195 = -1;
	int32_t x196 = INT32_MAX;
	volatile int32_t t48 = INT32_MIN;

	t48 = (((x193==x194)^x195)^x196);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 1091205706635211LLU;
	int8_t x198 = INT8_MIN;
	int32_t x199 = 26467718;
	int64_t x200 = -2LL;
	static int64_t t49 = -2211LL;

	t49 = (((x197==x198)^x199)^x200);

	if (t49 != -26467720LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 853267LLU;
	static int64_t x202 = INT64_MIN;
	static volatile int32_t x204 = 36037953;

	t50 = (((x201==x202)^x203)^x204);

	if (t50 != 37446677U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	uint64_t x206 = UINT64_MAX;
	static int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	int64_t t51 = 326744743LL;

	t51 = (((x205==x206)^x207)^x208);

	if (t51 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	static uint16_t x210 = 1384U;
	volatile int16_t x211 = -1;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -57760;

	t52 = (((x209==x210)^x211)^x212);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int64_t x215 = INT64_MAX;
	int64_t t53 = -22129LL;

	t53 = (((x213==x214)^x215)^x216);

	if (t53 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	int8_t x218 = 11;
	int16_t x219 = 0;
	int64_t x220 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = (((x217==x218)^x219)^x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 746500667322LLU;
	static int64_t x223 = INT64_MIN;
	uint8_t x224 = 1U;
	int64_t t55 = -24264331220LL;

	t55 = (((x221==x222)^x223)^x224);

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	static int32_t x227 = INT32_MAX;
	volatile int32_t x228 = INT32_MIN;

	t56 = (((x225==x226)^x227)^x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x231 = -6;
	uint64_t x232 = UINT64_MAX;
	uint64_t t57 = 1LLU;

	t57 = (((x229==x230)^x231)^x232);

	if (t57 != 5LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 159881U;
	int32_t x234 = INT32_MAX;
	int64_t x235 = INT64_MAX;
	uint16_t x236 = 40U;
	int64_t t58 = 5050543665353256LL;

	t58 = (((x233==x234)^x235)^x236);

	if (t58 != 9223372036854775767LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -15;
	static volatile int32_t x239 = -1;
	int16_t x240 = 5927;

	t59 = (((x237==x238)^x239)^x240);

	if (t59 != -5928) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint64_t x242 = 12968815007769220LLU;
	int16_t x243 = 56;
	int64_t x244 = INT64_MIN;

	t60 = (((x241==x242)^x243)^x244);

	if (t60 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -1;
	volatile int8_t x246 = 0;
	uint16_t x247 = 689U;
	static uint32_t x248 = 58U;
	uint32_t t61 = 7U;

	t61 = (((x245==x246)^x247)^x248);

	if (t61 != 651U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint32_t x250 = 1857U;
	volatile uint64_t x251 = 112152767169LLU;

	t62 = (((x249==x250)^x251)^x252);

	if (t62 != 18446743961556806337LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	volatile int64_t x254 = INT64_MIN;
	int8_t x256 = INT8_MIN;

	t63 = (((x253==x254)^x255)^x256);

	if (t63 != -8752) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	volatile int32_t x258 = INT32_MIN;
	uint32_t x260 = 11U;

	t64 = (((x257==x258)^x259)^x260);

	if (t64 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = 4;
	static int16_t x263 = INT16_MAX;
	int8_t x264 = INT8_MIN;
	static int32_t t65 = -916633;

	t65 = (((x261==x262)^x263)^x264);

	if (t65 != -32641) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = INT64_MIN;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = -1;

	t66 = (((x265==x266)^x267)^x268);

	if (t66 != -65536) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = -1;
	int16_t x270 = -1;
	int16_t x272 = -1;
	volatile int32_t t67 = 0;

	t67 = (((x269==x270)^x271)^x272);

	if (t67 != 2147483646) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	static int32_t x274 = 24308111;
	static int16_t x276 = -1;
	int64_t t68 = 1689842478LL;

	t68 = (((x273==x274)^x275)^x276);

	if (t68 != -10372690418987LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x279 = -1;
	int64_t x280 = -1LL;
	int64_t t69 = 160422LL;

	t69 = (((x277==x278)^x279)^x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MAX;
	static int16_t x283 = INT16_MIN;
	volatile uint64_t t70 = 170450073518LLU;

	t70 = (((x281==x282)^x283)^x284);

	if (t70 != 18446744073654529529LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	volatile int16_t x286 = INT16_MAX;
	static int32_t x288 = 19907;

	t71 = (((x285==x286)^x287)^x288);

	if (t71 != 12860) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	static int16_t x290 = INT16_MIN;
	volatile int8_t x291 = -7;
	volatile int32_t t72 = -22240;

	t72 = (((x289==x290)^x291)^x292);

	if (t72 != -65530) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int16_t x294 = 3770;
	int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;
	volatile int64_t t73 = 290871374489241327LL;

	t73 = (((x293==x294)^x295)^x296);

	if (t73 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	volatile int8_t x298 = -1;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = 171LLU;
	uint64_t t74 = 695887923096258383LLU;

	t74 = (((x297==x298)^x299)^x300);

	if (t74 != 18446744071562068139LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile int16_t x302 = -1;
	static volatile int32_t x303 = -1;
	int8_t x304 = -1;
	static volatile int32_t t75 = -8486;

	t75 = (((x301==x302)^x303)^x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = 5U;
	uint32_t x307 = UINT32_MAX;
	int32_t x308 = 48017;
	static volatile uint32_t t76 = 16540U;

	t76 = (((x305==x306)^x307)^x308);

	if (t76 != 4294919278U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 81U;
	int64_t x310 = -37261523LL;
	int8_t x311 = INT8_MIN;
	static int32_t x312 = INT32_MIN;

	t77 = (((x309==x310)^x311)^x312);

	if (t77 != 2147483520) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static int8_t x314 = INT8_MAX;
	int64_t x315 = 0LL;
	volatile int64_t t78 = INT64_MIN;

	t78 = (((x313==x314)^x315)^x316);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MIN;
	uint32_t x318 = 15938U;
	volatile int8_t x319 = -34;
	int32_t t79 = -6;

	t79 = (((x317==x318)^x319)^x320);

	if (t79 != -2147483615) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MAX;

	t80 = (((x321==x322)^x323)^x324);

	if (t80 != -65410637779822723LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -9;
	int16_t x326 = -1;
	int64_t x327 = INT64_MIN;
	volatile uint32_t x328 = 330772U;
	volatile int64_t t81 = -73326LL;

	t81 = (((x325==x326)^x327)^x328);

	if (t81 != -9223372036854445036LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	uint16_t x332 = UINT16_MAX;
	static int32_t t82 = 48154;

	t82 = (((x329==x330)^x331)^x332);

	if (t82 != -65409) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = INT64_MIN;
	volatile int64_t t83 = 11582572824818LL;

	t83 = (((x333==x334)^x335)^x336);

	if (t83 != -2861379909LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 49U;
	static int8_t x338 = -1;
	static volatile int16_t x339 = INT16_MIN;
	uint8_t x340 = UINT8_MAX;
	static volatile int32_t t84 = -6;

	t84 = (((x337==x338)^x339)^x340);

	if (t84 != -32513) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x342 = -110LL;
	static volatile int32_t x343 = -11;
	int64_t x344 = INT64_MIN;
	int64_t t85 = -5LL;

	t85 = (((x341==x342)^x343)^x344);

	if (t85 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	static int64_t x346 = -1LL;
	static int32_t x347 = INT32_MAX;
	static int64_t x348 = INT64_MIN;
	static int64_t t86 = -350280LL;

	t86 = (((x345==x346)^x347)^x348);

	if (t86 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = 2;
	volatile int32_t x351 = INT32_MAX;
	volatile int64_t t87 = 0LL;

	t87 = (((x349==x350)^x351)^x352);

	if (t87 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x356 = INT16_MIN;
	int32_t t88 = -981;

	t88 = (((x353==x354)^x355)^x356);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x359 = -2;
	int16_t x360 = -90;
	volatile int32_t t89 = 14541;

	t89 = (((x357==x358)^x359)^x360);

	if (t89 != 88) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint32_t x362 = 30U;
	static int64_t x363 = -1LL;
	int64_t x364 = -157208327048314247LL;
	int64_t t90 = 3LL;

	t90 = (((x361==x362)^x363)^x364);

	if (t90 != 157208327048314246LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 250584542482725333LLU;
	uint32_t x366 = 59U;
	static volatile int32_t t91 = 1006125530;

	t91 = (((x365==x366)^x367)^x368);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = 1084U;
	uint64_t x370 = 34297011525LLU;
	uint8_t x371 = 104U;
	static volatile uint8_t x372 = 52U;
	int32_t t92 = -5;

	t92 = (((x369==x370)^x371)^x372);

	if (t92 != 92) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = 0U;
	int16_t x375 = INT16_MIN;
	volatile int64_t x376 = 293023214911980LL;
	volatile int64_t t93 = 46521010885LL;

	t93 = (((x373==x374)^x375)^x376);

	if (t93 != -293023214910996LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 190U;
	int16_t x378 = 9778;
	int64_t x380 = -4267308870247117237LL;

	t94 = (((x377==x378)^x379)^x380);

	if (t94 != -4267308870247116787LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 31U;
	static int32_t x382 = INT32_MAX;
	volatile int8_t x384 = INT8_MAX;
	uint32_t t95 = 60725175U;

	t95 = (((x381==x382)^x383)^x384);

	if (t95 != 50682U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 251U;
	volatile int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	static uint16_t x388 = 266U;
	volatile int32_t t96 = 1651840;

	t96 = (((x385==x386)^x387)^x388);

	if (t96 != -2147483382) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = 27;
	volatile int64_t x391 = -1LL;
	volatile int8_t x392 = INT8_MIN;

	t97 = (((x389==x390)^x391)^x392);

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = UINT16_MAX;
	volatile uint64_t x395 = 19387762988LLU;

	t98 = (((x393==x394)^x395)^x396);

	if (t98 != 18446744054321788659LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MIN;
	int8_t x398 = 2;
	static int8_t x399 = 0;

	t99 = (((x397==x398)^x399)^x400);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

