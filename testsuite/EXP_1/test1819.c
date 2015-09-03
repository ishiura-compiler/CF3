#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int64_t t0 = -75932142119102LL;
int8_t x8 = -1;
static int32_t x9 = INT32_MAX;
uint8_t x10 = UINT8_MAX;
int32_t t2 = -104657018;
volatile int8_t x22 = INT8_MIN;
int8_t x24 = -3;
static int8_t x25 = INT8_MIN;
static uint64_t x26 = 540077439626905056LLU;
volatile uint32_t x28 = UINT32_MAX;
uint32_t t6 = UINT32_MAX;
int32_t t8 = 6772;
static int64_t x38 = INT64_MAX;
static uint8_t x51 = 16U;
int8_t x52 = INT8_MAX;
uint64_t x54 = UINT64_MAX;
uint16_t x56 = 74U;
volatile int32_t x57 = 27137676;
uint16_t x65 = UINT16_MAX;
int64_t x67 = -9LL;
int32_t x74 = INT32_MAX;
int32_t x78 = INT32_MIN;
volatile uint32_t t19 = 12743U;
int8_t x88 = INT8_MIN;
volatile int32_t t21 = 0;
static uint64_t t22 = 1658239369116445725LLU;
uint16_t x93 = 121U;
static int64_t x98 = INT64_MIN;
int64_t x100 = -1LL;
volatile int32_t t25 = INT32_MIN;
int32_t t26 = 114206313;
int64_t x112 = 38182531144849LL;
static int64_t x113 = INT64_MAX;
static uint64_t x121 = 4454144639333750LLU;
int32_t x132 = -1;
int32_t x136 = INT32_MIN;
volatile int32_t t33 = INT32_MIN;
uint64_t x140 = 7393603LLU;
int16_t x142 = INT16_MIN;
static volatile int32_t t35 = -257444;
volatile int32_t x147 = INT32_MIN;
int32_t t36 = 113232353;
int32_t x150 = INT32_MIN;
int32_t t38 = INT32_MAX;
int64_t x157 = INT64_MIN;
int8_t x160 = INT8_MAX;
volatile int32_t t39 = 36613004;
int16_t x165 = INT16_MIN;
uint8_t x167 = 14U;
static int16_t x172 = INT16_MIN;
volatile int32_t t42 = 10;
uint16_t x174 = 6U;
int64_t x178 = 374LL;
volatile int32_t x179 = INT32_MIN;
int64_t t44 = -2010LL;
int16_t x181 = INT16_MIN;
uint64_t x183 = 753390272942404644LLU;
int32_t t45 = 22992215;
static int8_t x190 = 1;
int8_t x193 = INT8_MAX;
uint64_t x194 = 556067461849LLU;
int32_t x196 = INT32_MIN;
int64_t x206 = INT64_MIN;
int32_t t51 = -789947;
int8_t x209 = INT8_MIN;
static int64_t x210 = INT64_MIN;
static int16_t x211 = -1;
uint64_t x214 = UINT64_MAX;
uint32_t t56 = UINT32_MAX;
int64_t x230 = 936910819LL;
int8_t x236 = 9;
int32_t x237 = -11;
int16_t x240 = INT16_MAX;
volatile int32_t t59 = -20;
int8_t x241 = 30;
volatile int64_t t60 = INT64_MIN;
int8_t x250 = 7;
volatile uint8_t x253 = 73U;
int32_t x255 = -492601247;
int8_t x263 = -13;
static uint32_t x271 = 8U;
uint64_t t69 = 78757480LLU;
static int32_t x286 = -1;
int8_t x292 = -17;
int8_t x297 = INT8_MIN;
volatile uint32_t x302 = 1U;
int8_t x307 = -1;
static int32_t t76 = -19702;
volatile uint64_t x311 = UINT64_MAX;
int32_t x314 = -1;
static int8_t x324 = -1;
uint16_t x325 = 834U;
int32_t x328 = INT32_MIN;
static volatile int16_t x334 = 214;
int64_t x336 = INT64_MIN;
int64_t t83 = INT64_MIN;
int64_t x337 = 666354576317236LL;
int8_t x338 = -1;
int32_t x346 = 80963;
volatile int8_t x353 = INT8_MIN;
int32_t t89 = -378284247;
int32_t t90 = -10344001;
static uint8_t x367 = 3U;
int32_t x371 = -4772279;
uint16_t x372 = 0U;
static volatile int32_t t92 = -171696;
int32_t x377 = INT32_MAX;
int8_t x378 = INT8_MIN;
uint16_t x392 = UINT16_MAX;
static int8_t x395 = INT8_MAX;
volatile int8_t x397 = -1;
int8_t x398 = INT8_MAX;
volatile uint8_t x399 = 14U;
volatile int32_t t99 = 21238753;


void f0(void) {
	volatile uint8_t x1 = 117U;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = -1LL;

	t0 = (((x1&x2)<=x3)|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 16265029U;
	int64_t x6 = 85710LL;
	int16_t x7 = -1;
	int32_t t1 = 3769516;

	t1 = (((x5&x6)<=x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x11 = 3592264130410033LLU;
	int16_t x12 = -3;

	t2 = (((x9&x10)<=x11)|x12);

	if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = -76323351;
	int8_t x15 = INT8_MAX;
	uint8_t x16 = 1U;
	int32_t t3 = 389087999;

	t3 = (((x13&x14)<=x15)|x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = -2881342;
	static volatile int16_t x19 = -1;
	int64_t x20 = 13610LL;
	int64_t t4 = 5LL;

	t4 = (((x17&x18)<=x19)|x20);

	if (t4 != 13611LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 2U;
	static int8_t x23 = INT8_MAX;
	int32_t t5 = -2509;

	t5 = (((x21&x22)<=x23)|x24);

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x27 = UINT16_MAX;

	t6 = (((x25&x26)<=x27)|x28);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = INT64_MIN;
	volatile uint64_t x30 = 127913LLU;
	volatile uint32_t x31 = 412U;
	uint16_t x32 = 1139U;
	int32_t t7 = 654323;

	t7 = (((x29&x30)<=x31)|x32);

	if (t7 != 1139) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 7U;
	volatile int16_t x34 = -13;
	int64_t x35 = -1LL;
	int32_t x36 = -1;

	t8 = (((x33&x34)<=x35)|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int32_t x39 = -1;
	int32_t x40 = -1;
	static volatile int32_t t9 = -5507;

	t9 = (((x37&x38)<=x39)|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MAX;
	volatile uint16_t x43 = 14U;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -1;

	t10 = (((x41&x42)<=x43)|x44);

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 30733LL;
	int32_t x46 = INT32_MIN;
	uint32_t x47 = 85620U;
	uint8_t x48 = 0U;
	int32_t t11 = -1;

	t11 = (((x45&x46)<=x47)|x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int32_t x50 = -1;
	static volatile int32_t t12 = 461;

	t12 = (((x49&x50)<=x51)|x52);

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int64_t x55 = -1992LL;
	int32_t t13 = -107;

	t13 = (((x53&x54)<=x55)|x56);

	if (t13 != 75) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	volatile int32_t x59 = -27882;
	static volatile int8_t x60 = -5;
	volatile int32_t t14 = 161739946;

	t14 = (((x57&x58)<=x59)|x60);

	if (t14 != -5) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	uint8_t x62 = 5U;
	int8_t x63 = 1;
	static volatile uint16_t x64 = 274U;
	int32_t t15 = -1;

	t15 = (((x61&x62)<=x63)|x64);

	if (t15 != 274) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = UINT8_MAX;
	int16_t x68 = -1;
	volatile int32_t t16 = -3655380;

	t16 = (((x65&x66)<=x67)|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x70 = INT8_MIN;
	int64_t x71 = -1LL;
	volatile int32_t x72 = -1;
	static int32_t t17 = 504;

	t17 = (((x69&x70)<=x71)|x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = INT32_MAX;

	t18 = (((x73&x74)<=x75)|x76);

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile uint16_t x79 = 3U;
	volatile uint32_t x80 = 491401U;

	t19 = (((x77&x78)<=x79)|x80);

	if (t19 != 491401U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	int8_t x82 = -1;
	int32_t x83 = -1;
	static int16_t x84 = 11;
	int32_t t20 = -973952;

	t20 = (((x81&x82)<=x83)|x84);

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = UINT32_MAX;
	static int8_t x86 = INT8_MIN;
	int32_t x87 = -1;

	t21 = (((x85&x86)<=x87)|x88);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MIN;
	int32_t x91 = -1;
	uint64_t x92 = 7730LLU;

	t22 = (((x89&x90)<=x91)|x92);

	if (t22 != 7731LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x94 = UINT32_MAX;
	int16_t x95 = -1687;
	uint8_t x96 = 11U;
	volatile int32_t t23 = -7;

	t23 = (((x93&x94)<=x95)|x96);

	if (t23 != 11) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint32_t x99 = UINT32_MAX;
	int64_t t24 = 99411940925681069LL;

	t24 = (((x97&x98)<=x99)|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1399565;
	uint16_t x102 = UINT16_MAX;
	volatile uint16_t x103 = 8264U;
	int32_t x104 = INT32_MIN;

	t25 = (((x101&x102)<=x103)|x104);

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x105 = 421280356;
	uint8_t x106 = 7U;
	uint8_t x107 = 3U;
	volatile int16_t x108 = INT16_MAX;

	t26 = (((x105&x106)<=x107)|x108);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 1U;
	int8_t x110 = INT8_MAX;
	uint64_t x111 = UINT64_MAX;
	int64_t t27 = 38821934530758427LL;

	t27 = (((x109&x110)<=x111)|x112);

	if (t27 != 38182531144849LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 1;
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = 518;
	int32_t t28 = 6339722;

	t28 = (((x113&x114)<=x115)|x116);

	if (t28 != 519) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 59LLU;
	volatile int32_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 1106;

	t29 = (((x117&x118)<=x119)|x120);

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x122 = INT32_MIN;
	static int32_t x123 = 20;
	uint64_t x124 = 1610031401394867779LLU;
	static uint64_t t30 = 4314864393215LLU;

	t30 = (((x121&x122)<=x123)|x124);

	if (t30 != 1610031401394867779LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	volatile int64_t x126 = 5754541066291LL;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = -1;
	int32_t t31 = 769;

	t31 = (((x125&x126)<=x127)|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int64_t x130 = 5LL;
	int16_t x131 = INT16_MIN;
	int32_t t32 = -921;

	t32 = (((x129&x130)<=x131)|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MAX;
	int8_t x134 = -1;
	uint32_t x135 = UINT32_MAX;

	t33 = (((x133&x134)<=x135)|x136);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	int64_t x138 = INT64_MIN;
	static int64_t x139 = -1LL;
	volatile uint64_t t34 = 7LLU;

	t34 = (((x137&x138)<=x139)|x140);

	if (t34 != 7393603LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -6987;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MAX;

	t35 = (((x141&x142)<=x143)|x144);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	volatile uint8_t x146 = 3U;
	static int32_t x148 = -5239298;

	t36 = (((x145&x146)<=x147)|x148);

	if (t36 != -5239298) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = UINT32_MAX;
	static int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = (((x149&x150)<=x151)|x152);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 926189771LLU;
	int16_t x154 = INT16_MAX;
	volatile int32_t x155 = -1;
	volatile int32_t x156 = INT32_MAX;

	t38 = (((x153&x154)<=x155)|x156);

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 59U;
	static int16_t x159 = -1;

	t39 = (((x157&x158)<=x159)|x160);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MAX;
	static uint8_t x162 = UINT8_MAX;
	static uint16_t x163 = UINT16_MAX;
	static int64_t x164 = 14918064807749LL;
	int64_t t40 = -722LL;

	t40 = (((x161&x162)<=x163)|x164);

	if (t40 != 14918064807749LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = UINT8_MAX;
	int32_t x168 = -1;
	int32_t t41 = 25;

	t41 = (((x165&x166)<=x167)|x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = 51376791756515943LLU;
	static int64_t x170 = -1LL;
	int8_t x171 = INT8_MIN;

	t42 = (((x169&x170)<=x171)|x172);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 18U;
	int32_t x175 = -1;
	static int8_t x176 = INT8_MIN;
	static volatile int32_t t43 = -564089872;

	t43 = (((x173&x174)<=x175)|x176);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	volatile int64_t x180 = -14723LL;

	t44 = (((x177&x178)<=x179)|x180);

	if (t44 != -14723LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x182 = 873875914924LLU;
	static int16_t x184 = -1338;

	t45 = (((x181&x182)<=x183)|x184);

	if (t45 != -1337) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	uint8_t x186 = 6U;
	volatile int16_t x187 = -1;
	volatile int32_t x188 = INT32_MAX;
	volatile int32_t t46 = INT32_MAX;

	t46 = (((x185&x186)<=x187)|x188);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	uint32_t x191 = 146U;
	uint8_t x192 = 4U;
	volatile int32_t t47 = 3107;

	t47 = (((x189&x190)<=x191)|x192);

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x195 = -1LL;
	int32_t t48 = -5801;

	t48 = (((x193&x194)<=x195)|x196);

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x197 = INT64_MIN;
	int32_t x198 = -1;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t49 = 74071724;

	t49 = (((x197&x198)<=x199)|x200);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -1;
	int8_t x202 = INT8_MAX;
	uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t50 = -10736LL;

	t50 = (((x201&x202)<=x203)|x204);

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 11786U;
	static int64_t x207 = INT64_MIN;
	static int8_t x208 = 6;

	t51 = (((x205&x206)<=x207)|x208);

	if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x212 = INT64_MAX;
	volatile int64_t t52 = INT64_MAX;

	t52 = (((x209&x210)<=x211)|x212);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x213 = UINT64_MAX;
	int64_t x215 = INT64_MIN;
	static int32_t x216 = INT32_MIN;
	volatile int32_t t53 = INT32_MIN;

	t53 = (((x213&x214)<=x215)|x216);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	static uint64_t x218 = UINT64_MAX;
	static int8_t x219 = -1;
	uint32_t x220 = 16336437U;
	volatile uint32_t t54 = 10508U;

	t54 = (((x217&x218)<=x219)|x220);

	if (t54 != 16336437U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	static volatile uint8_t x222 = 3U;
	uint16_t x223 = 1980U;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -7042;

	t55 = (((x221&x222)<=x223)|x224);

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	volatile uint32_t x226 = 362982U;
	static int64_t x227 = -1432168112501LL;
	uint32_t x228 = UINT32_MAX;

	t56 = (((x225&x226)<=x227)|x228);

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int16_t x231 = INT16_MAX;
	int32_t x232 = -667232308;
	static int32_t t57 = -5010260;

	t57 = (((x229&x230)<=x231)|x232);

	if (t57 != -667232308) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 14633U;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = 60813683452634LL;
	volatile int32_t t58 = 1;

	t58 = (((x233&x234)<=x235)|x236);

	if (t58 != 9) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -14612491726500731LL;
	uint32_t x239 = 2060U;

	t59 = (((x237&x238)<=x239)|x240);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = -17LL;
	int64_t x243 = -1LL;
	volatile int64_t x244 = INT64_MIN;

	t60 = (((x241&x242)<=x243)|x244);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	int8_t x246 = -56;
	uint16_t x247 = 8U;
	int64_t x248 = 652004769LL;
	int64_t t61 = -3378LL;

	t61 = (((x245&x246)<=x247)|x248);

	if (t61 != 652004769LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 1700;
	uint16_t x251 = UINT16_MAX;
	static uint16_t x252 = 23897U;
	volatile int32_t t62 = 28070815;

	t62 = (((x249&x250)<=x251)|x252);

	if (t62 != 23897) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x254 = INT64_MIN;
	uint32_t x256 = 701244664U;
	static volatile uint32_t t63 = 38200U;

	t63 = (((x253&x254)<=x255)|x256);

	if (t63 != 701244664U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 4225781U;
	uint16_t x258 = 2665U;
	volatile uint8_t x259 = 42U;
	int64_t x260 = INT64_MIN;
	int64_t t64 = INT64_MIN;

	t64 = (((x257&x258)<=x259)|x260);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MAX;
	uint16_t x262 = UINT16_MAX;
	uint64_t x264 = UINT64_MAX;
	static volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x261&x262)<=x263)|x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	static volatile int64_t x266 = -9730704904523742LL;
	static int16_t x267 = INT16_MAX;
	static volatile int64_t x268 = 2969112274483LL;
	int64_t t66 = -13620780009177LL;

	t66 = (((x265&x266)<=x267)|x268);

	if (t66 != 2969112274483LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	volatile int16_t x270 = INT16_MAX;
	static int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -162;

	t67 = (((x269&x270)<=x271)|x272);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -16;
	uint64_t x274 = 35965010427890296LLU;
	int64_t x275 = 2807968288LL;
	volatile int64_t x276 = -1LL;
	int64_t t68 = -27480837701151573LL;

	t68 = (((x273&x274)<=x275)|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	int16_t x278 = -190;
	uint32_t x279 = UINT32_MAX;
	uint64_t x280 = 65LLU;

	t69 = (((x277&x278)<=x279)|x280);

	if (t69 != 65LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	int8_t x282 = 4;
	uint64_t x283 = UINT64_MAX;
	volatile uint16_t x284 = 68U;
	static volatile int32_t t70 = -57530;

	t70 = (((x281&x282)<=x283)|x284);

	if (t70 != 69) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 21U;
	volatile int8_t x287 = INT8_MAX;
	static volatile int64_t x288 = INT64_MIN;
	int64_t t71 = -3227349457457825151LL;

	t71 = (((x285&x286)<=x287)|x288);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = -1;
	static volatile int64_t x291 = 3714408083LL;
	static volatile int32_t t72 = 1;

	t72 = (((x289&x290)<=x291)|x292);

	if (t72 != -17) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	static int8_t x294 = INT8_MIN;
	uint16_t x295 = UINT16_MAX;
	uint32_t x296 = UINT32_MAX;
	static uint32_t t73 = UINT32_MAX;

	t73 = (((x293&x294)<=x295)|x296);

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MAX;
	int32_t x299 = 369396394;
	uint32_t x300 = 20U;
	volatile uint32_t t74 = 2517218U;

	t74 = (((x297&x298)<=x299)|x300);

	if (t74 != 21U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 12;
	static int8_t x303 = INT8_MAX;
	int64_t x304 = -1LL;
	int64_t t75 = -1LL;

	t75 = (((x301&x302)<=x303)|x304);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = 2;
	int8_t x308 = INT8_MIN;

	t76 = (((x305&x306)<=x307)|x308);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 6432U;
	int16_t x310 = 2;
	static volatile int8_t x312 = -1;
	volatile int32_t t77 = 23755044;

	t77 = (((x309&x310)<=x311)|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 49;
	int64_t x315 = 25631822244807531LL;
	int32_t x316 = INT32_MIN;
	int32_t t78 = -63829807;

	t78 = (((x313&x314)<=x315)|x316);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	int32_t x318 = -16146942;
	int16_t x319 = INT16_MAX;
	uint64_t x320 = 9LLU;
	volatile uint64_t t79 = 34260401918LLU;

	t79 = (((x317&x318)<=x319)|x320);

	if (t79 != 9LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -5695211403LL;
	volatile int32_t x322 = INT32_MAX;
	static uint8_t x323 = 60U;
	int32_t t80 = -766;

	t80 = (((x321&x322)<=x323)|x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -31062;
	int8_t x327 = INT8_MIN;
	volatile int32_t t81 = INT32_MIN;

	t81 = (((x325&x326)<=x327)|x328);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	static volatile uint64_t x330 = 1007561461823LLU;
	static int32_t x331 = -1;
	int32_t x332 = INT32_MAX;
	volatile int32_t t82 = INT32_MAX;

	t82 = (((x329&x330)<=x331)|x332);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	static int32_t x335 = -1;

	t83 = (((x333&x334)<=x335)|x336);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x339 = INT8_MAX;
	uint32_t x340 = 12U;
	uint32_t t84 = 36941U;

	t84 = (((x337&x338)<=x339)|x340);

	if (t84 != 12U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	uint8_t x342 = 2U;
	int16_t x343 = 266;
	static uint16_t x344 = 16U;
	int32_t t85 = 64953314;

	t85 = (((x341&x342)<=x343)|x344);

	if (t85 != 17) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	volatile int8_t x347 = INT8_MIN;
	int32_t x348 = -1;
	static int32_t t86 = 174465;

	t86 = (((x345&x346)<=x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	static int32_t x350 = INT32_MAX;
	int16_t x351 = INT16_MIN;
	volatile uint16_t x352 = UINT16_MAX;
	static volatile int32_t t87 = 10512;

	t87 = (((x349&x350)<=x351)|x352);

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x354 = 3325U;
	uint64_t x355 = UINT64_MAX;
	static volatile uint64_t x356 = UINT64_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = (((x353&x354)<=x355)|x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MAX;
	volatile int64_t x359 = -1LL;
	int8_t x360 = INT8_MIN;

	t89 = (((x357&x358)<=x359)|x360);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = 30;
	int64_t x362 = -558LL;
	uint32_t x363 = UINT32_MAX;
	static volatile int32_t x364 = 25524780;

	t90 = (((x361&x362)<=x363)|x364);

	if (t90 != 25524781) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 5U;
	static int32_t x366 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t91 = -24077;

	t91 = (((x365&x366)<=x367)|x368);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	static uint64_t x370 = 587LLU;

	t92 = (((x369&x370)<=x371)|x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 29049U;
	uint64_t x374 = 7465748LLU;
	int16_t x375 = INT16_MAX;
	int16_t x376 = 9;
	int32_t t93 = -1;

	t93 = (((x373&x374)<=x375)|x376);

	if (t93 != 9) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x379 = INT32_MIN;
	int64_t x380 = INT64_MAX;
	volatile int64_t t94 = INT64_MAX;

	t94 = (((x377&x378)<=x379)|x380);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -454LL;
	uint64_t x382 = 1435571338625937LLU;
	uint8_t x383 = 16U;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (((x381&x382)<=x383)|x384);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	uint64_t x387 = 915209841LLU;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t96 = INT32_MIN;

	t96 = (((x385&x386)<=x387)|x388);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -1;
	int16_t x390 = 3480;
	int16_t x391 = INT16_MIN;
	int32_t t97 = -9601;

	t97 = (((x389&x390)<=x391)|x392);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MAX;
	int64_t x394 = -1LL;
	int32_t x396 = INT32_MIN;
	int32_t t98 = INT32_MIN;

	t98 = (((x393&x394)<=x395)|x396);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x400 = INT8_MAX;

	t99 = (((x397&x398)<=x399)|x400);

	if (t99 != 127) { NG(); } else { ; }
	
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

