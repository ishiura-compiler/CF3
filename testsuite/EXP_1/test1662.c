#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = 34;
int8_t x6 = -1;
uint8_t x7 = 120U;
int64_t x8 = -1LL;
volatile int32_t x11 = INT32_MAX;
int64_t t2 = -133272170LL;
int8_t x13 = 1;
uint32_t t3 = 177375051U;
int16_t x17 = INT16_MIN;
static int16_t x20 = INT16_MIN;
int8_t x26 = INT8_MIN;
volatile int64_t t6 = 74668562379LL;
uint32_t x39 = 173899721U;
uint16_t x46 = 103U;
static int8_t x49 = INT8_MIN;
static int8_t x59 = INT8_MIN;
static volatile uint64_t x64 = UINT64_MAX;
uint16_t x65 = 32U;
int32_t x67 = INT32_MAX;
static int64_t t17 = 243872LL;
int32_t x81 = -401;
static uint32_t x83 = UINT32_MAX;
uint32_t x84 = 162U;
int64_t x85 = -1LL;
volatile int16_t x90 = -8731;
volatile int64_t x91 = INT64_MIN;
int64_t t22 = 232253LL;
int8_t x93 = 1;
uint64_t x106 = 470888550853828075LLU;
int16_t x110 = -13;
volatile int64_t t28 = 48LL;
int64_t x117 = INT64_MIN;
uint64_t x118 = 7260358157790LLU;
volatile uint16_t x127 = UINT16_MAX;
volatile int32_t t31 = 19923430;
int16_t x135 = INT16_MIN;
int16_t x140 = INT16_MIN;
static uint32_t x143 = UINT32_MAX;
volatile int16_t x147 = 152;
volatile int32_t t36 = -220483688;
volatile int32_t x154 = -1;
uint8_t x159 = 58U;
int16_t x172 = 8780;
static volatile int64_t t43 = -1482LL;
uint32_t x183 = 243U;
static uint32_t x186 = 2294U;
volatile uint64_t t47 = 4423251112839784616LLU;
uint16_t x196 = UINT16_MAX;
static uint16_t x197 = UINT16_MAX;
int8_t x198 = INT8_MIN;
int64_t x203 = INT64_MIN;
int64_t t51 = -3152LL;
uint16_t x214 = 1737U;
int32_t x216 = INT32_MIN;
uint8_t x219 = 4U;
int32_t t54 = 112;
int32_t x221 = INT32_MIN;
uint64_t x222 = 715971LLU;
int32_t x226 = -1;
uint64_t t57 = 27LLU;
static int8_t x236 = INT8_MIN;
uint32_t t58 = 844253138U;
int32_t x237 = 719863;
static int8_t x246 = -3;
uint32_t x247 = UINT32_MAX;
int16_t x252 = -33;
static volatile uint64_t t62 = 268613597401395LLU;
volatile uint16_t x271 = UINT16_MAX;
int16_t x273 = INT16_MIN;
static int8_t x274 = INT8_MAX;
volatile uint32_t t69 = 45456U;
int64_t x282 = INT64_MAX;
static int8_t x289 = INT8_MIN;
int8_t x290 = INT8_MAX;
volatile int32_t x292 = INT32_MAX;
volatile int64_t t73 = 45460LL;
int8_t x304 = INT8_MIN;
uint64_t x308 = UINT64_MAX;
static int8_t x309 = -1;
static int64_t x313 = INT64_MIN;
static uint8_t x315 = 14U;
int32_t x320 = -1;
static int32_t x321 = -1785;
volatile int32_t t80 = -91107;
uint8_t x325 = UINT8_MAX;
static int64_t x331 = 113037919025LL;
int16_t x334 = 6349;
uint16_t x335 = 6587U;
static volatile int8_t x341 = INT8_MIN;
volatile int32_t t85 = -15414988;
int32_t t86 = -2324671;
uint32_t x350 = 0U;
volatile int32_t x351 = INT32_MIN;
uint32_t x356 = 360U;
uint32_t t88 = 21637110U;
static uint8_t x358 = 23U;
int32_t x361 = -1;
uint8_t x362 = UINT8_MAX;
volatile uint32_t x363 = UINT32_MAX;
volatile uint32_t t90 = 1U;
uint32_t x372 = 28021U;
int64_t t92 = -73958706215961LL;
int16_t x373 = INT16_MIN;
uint64_t t93 = 1151663634351LLU;
volatile int32_t x388 = INT32_MIN;
volatile int32_t t97 = 209683;
volatile int32_t t98 = 140635785;
int64_t x398 = INT64_MIN;


void f0(void) {
	volatile int32_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int32_t x3 = -1;
	volatile int32_t t0 = -32;

	t0 = (((x1<=x2)&x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -7;
	volatile int64_t t1 = 4337247204080LL;

	t1 = (((x5<=x6)&x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int8_t x10 = -9;
	static int64_t x12 = -1LL;

	t2 = (((x9<=x10)&x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = 36U;
	uint32_t x15 = 35U;
	static int16_t x16 = 53;

	t3 = (((x13<=x14)&x15)&x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 1777LLU;
	int8_t x19 = INT8_MAX;
	volatile int32_t t4 = 4;

	t4 = (((x17<=x18)&x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1812561018531661LLU;
	int8_t x22 = -1;
	int64_t x23 = -1LL;
	static int8_t x24 = INT8_MIN;
	static volatile int64_t t5 = -98493683298LL;

	t5 = (((x21<=x22)&x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 73U;
	int64_t x27 = INT64_MIN;
	static int32_t x28 = -21196118;

	t6 = (((x25<=x26)&x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	volatile int16_t x30 = 1937;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	volatile int64_t t7 = 399LL;

	t7 = (((x29<=x30)&x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 0LL;
	int64_t x34 = 252LL;
	static volatile uint8_t x35 = UINT8_MAX;
	uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 196869482633074695LLU;

	t8 = (((x33<=x34)&x35)&x36);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 851;
	uint64_t x38 = 0LLU;
	int16_t x40 = INT16_MIN;
	volatile uint32_t t9 = 692U;

	t9 = (((x37<=x38)&x39)&x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = 66U;
	uint8_t x43 = 17U;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = 0LL;

	t10 = (((x41<=x42)&x43)&x44);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	static int32_t x47 = 52;
	volatile int32_t x48 = INT32_MAX;
	int32_t t11 = 27408;

	t11 = (((x45<=x46)&x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x50 = 3U;
	uint32_t x51 = 1438490U;
	int64_t x52 = INT64_MIN;
	int64_t t12 = 6249041676520LL;

	t12 = (((x49<=x50)&x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -14283434;
	static int32_t x54 = 10936;
	int16_t x55 = 1;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = 1276LL;

	t13 = (((x53<=x54)&x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -5;
	int64_t x58 = INT64_MIN;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = -26692;

	t14 = (((x57<=x58)&x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	volatile int32_t x62 = INT32_MIN;
	uint8_t x63 = UINT8_MAX;
	volatile uint64_t t15 = 5389317450219304LLU;

	t15 = (((x61<=x62)&x63)&x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -99;
	uint8_t x68 = 4U;
	int32_t t16 = 85;

	t16 = (((x65<=x66)&x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = 0;
	static int16_t x70 = -1109;
	int8_t x71 = INT8_MIN;
	volatile int64_t x72 = INT64_MIN;

	t17 = (((x69<=x70)&x71)&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int8_t x74 = INT8_MAX;
	static volatile int64_t x75 = -1LL;
	static int8_t x76 = INT8_MIN;
	volatile int64_t t18 = 2830303582378005744LL;

	t18 = (((x73<=x74)&x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile uint16_t x78 = 44U;
	uint8_t x79 = UINT8_MAX;
	static int64_t x80 = -1LL;
	static int64_t t19 = 54584657069823583LL;

	t19 = (((x77<=x78)&x79)&x80);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	uint32_t t20 = 1858814U;

	t20 = (((x81<=x82)&x83)&x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x86 = -2142LL;
	uint16_t x87 = 1490U;
	uint8_t x88 = 1U;
	static int32_t t21 = -151978;

	t21 = (((x85<=x86)&x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int64_t x92 = -1LL;

	t22 = (((x89<=x90)&x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	uint32_t t23 = 54906976U;

	t23 = (((x93<=x94)&x95)&x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	volatile uint8_t x98 = 16U;
	int8_t x99 = INT8_MIN;
	volatile int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 14999;

	t24 = (((x97<=x98)&x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = 41;
	static volatile uint16_t x103 = 5U;
	uint64_t x104 = 97255266982758LLU;
	static volatile uint64_t t25 = 48392724137013LLU;

	t25 = (((x101<=x102)&x103)&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x107 = 0U;
	int64_t x108 = -8471867555280LL;
	int64_t t26 = 3294488LL;

	t26 = (((x105<=x106)&x107)&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	volatile uint64_t x111 = 46LLU;
	volatile int64_t x112 = -1LL;
	volatile uint64_t t27 = 262270LLU;

	t27 = (((x109<=x110)&x111)&x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 73538663592LLU;
	static int64_t x115 = INT64_MIN;
	static int8_t x116 = 0;

	t28 = (((x113<=x114)&x115)&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x119 = -1;
	volatile int32_t x120 = INT32_MAX;
	int32_t t29 = 698912;

	t29 = (((x117<=x118)&x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = 4;
	int32_t x122 = INT32_MIN;
	static int8_t x123 = -18;
	int32_t x124 = 26261;
	volatile int32_t t30 = 272;

	t30 = (((x121<=x122)&x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 3;
	int64_t x126 = 17630769503798894LL;
	int32_t x128 = -2;

	t31 = (((x125<=x126)&x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 3U;
	static uint16_t x130 = 3534U;
	volatile int16_t x131 = INT16_MIN;
	int32_t x132 = 8202;
	volatile int32_t t32 = 3453507;

	t32 = (((x129<=x130)&x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = UINT64_MAX;
	uint64_t x134 = 257350513919497362LLU;
	uint32_t x136 = 1U;
	volatile uint32_t t33 = 2805U;

	t33 = (((x133<=x134)&x135)&x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	int64_t x139 = -6403419979593406LL;
	int64_t t34 = 331699LL;

	t34 = (((x137<=x138)&x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 16;
	int64_t x142 = INT64_MIN;
	int32_t x144 = INT32_MIN;
	volatile uint32_t t35 = 480494U;

	t35 = (((x141<=x142)&x143)&x144);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	uint8_t x148 = UINT8_MAX;

	t36 = (((x145<=x146)&x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	int8_t x150 = -29;
	static uint16_t x151 = UINT16_MAX;
	int32_t x152 = -9606;
	int32_t t37 = -40;

	t37 = (((x149<=x150)&x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -13;
	int8_t x155 = INT8_MAX;
	int16_t x156 = -860;
	volatile int32_t t38 = 4250068;

	t38 = (((x153<=x154)&x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = -1;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -186;

	t39 = (((x157<=x158)&x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 65923961418061LLU;
	int8_t x162 = -1;
	int16_t x163 = 1;
	uint8_t x164 = 1U;
	volatile int32_t t40 = 36054631;

	t40 = (((x161<=x162)&x163)&x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	uint8_t x166 = 22U;
	uint64_t x167 = 278LLU;
	int64_t x168 = 4538380707880445868LL;
	uint64_t t41 = 289672083820LLU;

	t41 = (((x165<=x166)&x167)&x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -1;
	int16_t x170 = INT16_MAX;
	static uint16_t x171 = 3U;
	volatile int32_t t42 = -109217;

	t42 = (((x169<=x170)&x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	uint16_t x174 = UINT16_MAX;
	int64_t x175 = -84603079911044LL;
	static int32_t x176 = -7627;

	t43 = (((x173<=x174)&x175)&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = 2656;
	int32_t x178 = INT32_MIN;
	int16_t x179 = 0;
	int32_t x180 = INT32_MIN;
	int32_t t44 = -47;

	t44 = (((x177<=x178)&x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 0U;
	int32_t x182 = INT32_MIN;
	uint16_t x184 = 1U;
	static volatile uint32_t t45 = 1687277U;

	t45 = (((x181<=x182)&x183)&x184);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 12U;
	static uint16_t x187 = UINT16_MAX;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t46 = -59702444;

	t46 = (((x185<=x186)&x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int16_t x191 = -63;
	volatile uint64_t x192 = 8434129173LLU;

	t47 = (((x189<=x190)&x191)&x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	volatile int16_t x194 = 202;
	volatile int64_t x195 = -66142990764246LL;
	volatile int64_t t48 = -87415447937LL;

	t48 = (((x193<=x194)&x195)&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x199 = UINT32_MAX;
	static uint8_t x200 = 36U;
	volatile uint32_t t49 = 588352354U;

	t49 = (((x197<=x198)&x199)&x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 78U;
	volatile uint32_t x202 = UINT32_MAX;
	uint16_t x204 = UINT16_MAX;
	int64_t t50 = 155893LL;

	t50 = (((x201<=x202)&x203)&x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int64_t x206 = 121737LL;
	uint32_t x207 = 23236U;
	static int64_t x208 = INT64_MIN;

	t51 = (((x205<=x206)&x207)&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	volatile int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	int32_t x212 = -3520;
	volatile int32_t t52 = -6392974;

	t52 = (((x209<=x210)&x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x213 = INT32_MIN;
	int16_t x215 = -6;
	volatile int32_t t53 = -1981193;

	t53 = (((x213<=x214)&x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	volatile int8_t x218 = -7;
	static int32_t x220 = INT32_MIN;

	t54 = (((x217<=x218)&x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x223 = INT64_MIN;
	static volatile int8_t x224 = 7;
	int64_t t55 = -805063806827843816LL;

	t55 = (((x221<=x222)&x223)&x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	static volatile int64_t x227 = INT64_MIN;
	volatile int8_t x228 = 0;
	int64_t t56 = 95281863927733LL;

	t56 = (((x225<=x226)&x227)&x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile int32_t x230 = INT32_MIN;
	uint8_t x231 = 54U;
	uint64_t x232 = UINT64_MAX;

	t57 = (((x229<=x230)&x231)&x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = -1;
	uint32_t x235 = 22375223U;

	t58 = (((x233<=x234)&x235)&x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x238 = 30885U;
	volatile int16_t x239 = INT16_MIN;
	static int64_t x240 = INT64_MAX;
	volatile int64_t t59 = -4368829185819LL;

	t59 = (((x237<=x238)&x239)&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 13513958749LL;
	uint16_t x242 = 106U;
	int32_t x243 = -579326782;
	int32_t x244 = -1;
	static volatile int32_t t60 = 1;

	t60 = (((x241<=x242)&x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = UINT16_MAX;
	static volatile uint64_t x248 = 74911620LLU;
	uint64_t t61 = 1775088LLU;

	t61 = (((x245<=x246)&x247)&x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -24;
	int8_t x250 = 0;
	uint64_t x251 = 11276403LLU;

	t62 = (((x249<=x250)&x251)&x252);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -807990578219716376LL;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = UINT32_MAX;
	int64_t x256 = INT64_MAX;
	static int64_t t63 = 450152473333387840LL;

	t63 = (((x253<=x254)&x255)&x256);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	int16_t x258 = INT16_MIN;
	int16_t x259 = 0;
	uint8_t x260 = 1U;
	volatile int32_t t64 = -883446;

	t64 = (((x257<=x258)&x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MAX;
	uint64_t x262 = 8187LLU;
	volatile int32_t x263 = -1;
	volatile uint64_t x264 = 1713643LLU;
	uint64_t t65 = 29LLU;

	t65 = (((x261<=x262)&x263)&x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	static volatile int8_t x266 = -7;
	uint16_t x267 = 3759U;
	int8_t x268 = -1;
	volatile int32_t t66 = 11158565;

	t66 = (((x265<=x266)&x267)&x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1328194437LL;
	uint8_t x270 = 18U;
	int64_t x272 = INT64_MIN;
	static int64_t t67 = -58025162LL;

	t67 = (((x269<=x270)&x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x275 = -1;
	int8_t x276 = 30;
	volatile int32_t t68 = -158885;

	t68 = (((x273<=x274)&x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = -1LL;
	uint16_t x278 = 110U;
	uint32_t x279 = 0U;
	int8_t x280 = INT8_MIN;

	t69 = (((x277<=x278)&x279)&x280);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 7134225U;
	volatile int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MIN;
	static int64_t t70 = -10510293543LL;

	t70 = (((x281<=x282)&x283)&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 202699684930039635LL;
	int16_t x286 = -1644;
	static int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MIN;
	static volatile int64_t t71 = -10876855103LL;

	t71 = (((x285<=x286)&x287)&x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x291 = 26691284785LLU;
	volatile uint64_t t72 = 4142478681LLU;

	t72 = (((x289<=x290)&x291)&x292);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = 43342640;
	volatile int64_t x295 = 666073768239801369LL;
	int32_t x296 = -1;

	t73 = (((x293<=x294)&x295)&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int32_t x298 = 639418231;
	static int32_t x299 = INT32_MAX;
	static int16_t x300 = -1;
	volatile int32_t t74 = -1792752;

	t74 = (((x297<=x298)&x299)&x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	static int16_t x302 = INT16_MIN;
	static int64_t x303 = INT64_MAX;
	static int64_t t75 = -3LL;

	t75 = (((x301<=x302)&x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 1U;
	int64_t x307 = -1LL;
	uint64_t t76 = 21746179LLU;

	t76 = (((x305<=x306)&x307)&x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = 11994;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = 157LL;
	volatile int64_t t77 = 12662408120LL;

	t77 = (((x309<=x310)&x311)&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = -52;
	int64_t x316 = -1LL;
	int64_t t78 = -1029559LL;

	t78 = (((x313<=x314)&x315)&x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -30;
	static uint16_t x318 = 3U;
	int8_t x319 = -1;
	volatile int32_t t79 = 89;

	t79 = (((x317<=x318)&x319)&x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MAX;
	int32_t x323 = INT32_MIN;
	static int8_t x324 = INT8_MAX;

	t80 = (((x321<=x322)&x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = 28899697;
	volatile uint64_t x327 = 8764718269083799LLU;
	static int8_t x328 = INT8_MAX;
	volatile uint64_t t81 = 5917875LLU;

	t81 = (((x325<=x326)&x327)&x328);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -491LL;
	uint64_t x330 = 4608035839479454013LLU;
	static volatile int32_t x332 = 15954973;
	volatile int64_t t82 = 6656247LL;

	t82 = (((x329<=x330)&x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 10U;
	int32_t x336 = -39498471;
	int32_t t83 = -447050197;

	t83 = (((x333<=x334)&x335)&x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	volatile int32_t x338 = -771136;
	int64_t x339 = 261584230850983573LL;
	int16_t x340 = INT16_MAX;
	static int64_t t84 = 25736322455384LL;

	t84 = (((x337<=x338)&x339)&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x342 = -1;
	static volatile int16_t x343 = -2450;
	int32_t x344 = INT32_MIN;

	t85 = (((x341<=x342)&x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = 0;
	uint16_t x346 = 27793U;
	int8_t x347 = -17;
	static volatile int32_t x348 = -1;

	t86 = (((x345<=x346)&x347)&x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = -62;
	uint8_t x352 = 26U;
	int32_t t87 = -36;

	t87 = (((x349<=x350)&x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;

	t88 = (((x353<=x354)&x355)&x356);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 6140U;
	int32_t x359 = INT32_MIN;
	static volatile int16_t x360 = -1;
	int32_t t89 = 56;

	t89 = (((x357<=x358)&x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x364 = -1;

	t90 = (((x361<=x362)&x363)&x364);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 629161900LLU;
	int16_t x366 = INT16_MIN;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = INT32_MIN;
	volatile uint64_t t91 = 303595058913732LLU;

	t91 = (((x365<=x366)&x367)&x368);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = -3;
	int64_t x371 = -1LL;

	t92 = (((x369<=x370)&x371)&x372);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = UINT32_MAX;
	static uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 7U;

	t93 = (((x373<=x374)&x375)&x376);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	uint64_t x378 = UINT64_MAX;
	int16_t x379 = INT16_MAX;
	int32_t x380 = 3;
	int32_t t94 = -4824204;

	t94 = (((x377<=x378)&x379)&x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	uint32_t x384 = 1455147U;
	uint32_t t95 = 20415660U;

	t95 = (((x381<=x382)&x383)&x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint16_t x386 = 3178U;
	uint64_t x387 = 26395236LLU;
	volatile uint64_t t96 = 10012LLU;

	t96 = (((x385<=x386)&x387)&x388);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 47U;
	int16_t x390 = -1;
	volatile int8_t x391 = INT8_MIN;
	int16_t x392 = 2;

	t97 = (((x389<=x390)&x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	static int64_t x394 = -1LL;
	int8_t x395 = 14;
	int8_t x396 = INT8_MAX;

	t98 = (((x393<=x394)&x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int16_t x399 = 5431;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = -1001545691;

	t99 = (((x397<=x398)&x399)&x400);

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

