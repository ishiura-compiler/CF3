#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = -1512;
static volatile int32_t t7 = 7721955;
static int16_t x35 = -368;
int32_t x40 = INT32_MIN;
volatile int32_t t9 = -8606;
uint16_t x41 = 5U;
int8_t x42 = 17;
int32_t t10 = -2194;
volatile uint8_t x47 = 118U;
int64_t x50 = INT64_MAX;
uint8_t x58 = UINT8_MAX;
uint16_t x60 = 2U;
volatile int32_t t14 = -364279993;
volatile int16_t x61 = 4;
int32_t x62 = INT32_MAX;
volatile int32_t t15 = 29612;
int8_t x66 = INT8_MIN;
static int16_t x67 = 511;
volatile int8_t x68 = INT8_MAX;
volatile int32_t t18 = 1752;
static int16_t x77 = INT16_MIN;
int64_t x78 = 1LL;
volatile int16_t x79 = INT16_MAX;
static uint16_t x81 = 0U;
int32_t t20 = 777;
int32_t x86 = -258048;
int16_t x88 = -3;
uint64_t x94 = UINT64_MAX;
volatile int8_t x99 = 61;
volatile int64_t x103 = 4218LL;
int32_t x105 = INT32_MAX;
int32_t t27 = 398093;
uint64_t x114 = UINT64_MAX;
static int32_t t30 = -6133554;
int8_t x128 = INT8_MIN;
volatile int32_t t32 = -814821;
volatile int32_t t33 = -5473044;
int64_t x138 = INT64_MIN;
int16_t x149 = -4671;
static int64_t x152 = INT64_MIN;
volatile int32_t t37 = 75125152;
uint32_t x160 = UINT32_MAX;
int16_t x161 = -1733;
int32_t t40 = -3740315;
uint16_t x178 = 7U;
int64_t x179 = INT64_MIN;
uint32_t x183 = 36739U;
int64_t x185 = -1LL;
int32_t x186 = -1;
uint32_t x188 = 16U;
int8_t x193 = INT8_MIN;
volatile int8_t x197 = INT8_MAX;
volatile int8_t x198 = INT8_MIN;
volatile int32_t t51 = -92513408;
int16_t x215 = INT16_MIN;
int8_t x216 = INT8_MIN;
uint64_t x221 = 455494717210458LLU;
volatile int32_t t55 = 2;
int16_t x229 = -1;
int8_t x234 = INT8_MAX;
int32_t x236 = INT32_MIN;
volatile int32_t t57 = 13;
uint64_t x237 = 53463LLU;
volatile int32_t t58 = -48455;
volatile int8_t x243 = INT8_MIN;
static int64_t x248 = 22363621263LL;
int16_t x251 = -1;
int8_t x254 = INT8_MIN;
uint64_t x255 = 231201557997LLU;
volatile int8_t x264 = INT8_MIN;
uint64_t x267 = UINT64_MAX;
uint64_t x274 = 8821149005107296LLU;
volatile int16_t x275 = INT16_MAX;
int8_t x277 = -1;
int64_t x279 = INT64_MIN;
volatile int32_t t68 = 836;
int8_t x288 = -36;
volatile int32_t t70 = 3327;
volatile int32_t t71 = 370;
int8_t x294 = INT8_MAX;
volatile int8_t x300 = INT8_MIN;
volatile int8_t x303 = -58;
volatile int64_t x314 = INT64_MAX;
int32_t t77 = 17008;
int32_t t78 = 14643407;
volatile int16_t x322 = INT16_MIN;
int8_t x323 = INT8_MIN;
volatile int64_t x330 = -1475383LL;
volatile uint16_t x331 = 305U;
int32_t x332 = -70138;
int64_t x340 = -591674LL;
int32_t t83 = -57466581;
uint32_t x342 = 460273U;
int32_t x349 = -182518003;
volatile int32_t x350 = INT32_MAX;
volatile int32_t t85 = 1;
volatile int32_t t86 = -20;
volatile int32_t t88 = -20559;
volatile uint8_t x374 = 94U;
volatile int32_t t90 = 0;
static int8_t x377 = INT8_MIN;
static int16_t x384 = -1828;
int16_t x385 = 1;
volatile int32_t t93 = 1;
static uint8_t x392 = 1U;
int16_t x398 = INT16_MIN;
int32_t x403 = INT32_MIN;
static int32_t x409 = -1;
volatile int32_t t99 = -1;


void f0(void) {
	int32_t x1 = -1;
	volatile int32_t x2 = INT32_MAX;
	volatile int64_t x3 = -1LL;
	uint8_t x4 = UINT8_MAX;
	static int32_t t0 = 108865188;

	t0 = ((x1==(x2/x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x6 = 3178;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 12780987;

	t1 = ((x5==(x6/x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile uint16_t x10 = 27957U;
	int16_t x11 = INT16_MIN;
	static int8_t x12 = 2;
	int32_t t2 = 193365757;

	t2 = ((x9==(x10/x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MIN;
	static int32_t x15 = INT32_MAX;
	int16_t x16 = -1;

	t3 = ((x13==(x14/x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	volatile int32_t x20 = -1;
	int32_t t4 = 1;

	t4 = ((x17==(x18/x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 1383110580199420731LLU;
	int32_t x22 = INT32_MIN;
	uint32_t x23 = 15134282U;
	static volatile int8_t x24 = 0;
	int32_t t5 = -402;

	t5 = ((x21==(x22/x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 4179583641165417LLU;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 37040241410LLU;
	static int32_t t6 = -51725;

	t6 = ((x25==(x26/x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 15U;
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	int16_t x32 = INT16_MAX;

	t7 = ((x29==(x30/x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	int64_t x34 = INT64_MIN;
	static int32_t x36 = 72;
	int32_t t8 = 199875653;

	t8 = ((x33==(x34/x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 5780290LL;
	int8_t x38 = -1;
	uint64_t x39 = UINT64_MAX;

	t9 = ((x37==(x38/x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x43 = INT32_MIN;
	int8_t x44 = 0;

	t10 = ((x41==(x42/x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	int32_t x46 = 27458092;
	volatile int32_t x48 = 762185440;
	static volatile int32_t t11 = 67;

	t11 = ((x45==(x46/x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -5;
	uint8_t x51 = 46U;
	static uint8_t x52 = UINT8_MAX;
	int32_t t12 = -1750;

	t12 = ((x49==(x50/x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile uint16_t x54 = 44U;
	int16_t x55 = INT16_MIN;
	uint64_t x56 = 31034695301LLU;
	static volatile int32_t t13 = -17739699;

	t13 = ((x53==(x54/x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile int8_t x59 = 1;

	t14 = ((x57==(x58/x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = INT8_MAX;
	int8_t x64 = INT8_MAX;

	t15 = ((x61==(x62/x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	int32_t t16 = -5862;

	t16 = ((x65==(x66/x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 20;
	int32_t x70 = -2;
	static uint8_t x71 = UINT8_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -8;

	t17 = ((x69==(x70/x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 55U;
	volatile int32_t x74 = INT32_MIN;
	uint16_t x75 = UINT16_MAX;
	volatile int64_t x76 = INT64_MAX;

	t18 = ((x73==(x74/x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x80 = INT16_MIN;
	static int32_t t19 = -307985290;

	t19 = ((x77==(x78/x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	volatile int64_t x84 = -1LL;

	t20 = ((x81==(x82/x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -1;
	int32_t x87 = -6;
	static volatile int32_t t21 = -1839497;

	t21 = ((x85==(x86/x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	volatile int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -1764815;

	t22 = ((x89==(x90/x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	volatile int8_t x95 = -60;
	int32_t x96 = INT32_MIN;
	int32_t t23 = 0;

	t23 = ((x93==(x94/x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	uint8_t x100 = 1U;
	int32_t t24 = 9849;

	t24 = ((x97==(x98/x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 77U;
	uint32_t x104 = 654283204U;
	volatile int32_t t25 = -10383;

	t25 = ((x101==(x102/x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x106 = 0U;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = 2;

	t26 = ((x105==(x106/x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 88U;
	int8_t x110 = 0;
	uint8_t x111 = UINT8_MAX;
	volatile uint16_t x112 = 13748U;

	t27 = ((x109==(x110/x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int8_t x115 = INT8_MAX;
	int16_t x116 = -11;
	int32_t t28 = 113496;

	t28 = ((x113==(x114/x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	int64_t x118 = -26LL;
	static uint8_t x119 = 22U;
	int8_t x120 = 2;
	volatile int32_t t29 = -42;

	t29 = ((x117==(x118/x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	uint32_t x122 = 869U;
	volatile int16_t x123 = INT16_MAX;
	static int8_t x124 = INT8_MIN;

	t30 = ((x121==(x122/x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	uint16_t x126 = 10U;
	int16_t x127 = -1;
	static int32_t t31 = -13;

	t31 = ((x125==(x126/x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 399670803U;
	volatile uint8_t x130 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = -1LL;

	t32 = ((x129==(x130/x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MAX;
	volatile uint16_t x134 = 1U;
	int32_t x135 = -16;
	uint32_t x136 = 57347090U;

	t33 = ((x133==(x134/x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -32;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = 2016211877U;
	volatile int32_t t34 = -8148592;

	t34 = ((x137==(x138/x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 28U;
	static uint32_t x142 = 120U;
	int8_t x143 = 13;
	int64_t x144 = -180827972LL;
	int32_t t35 = 146286413;

	t35 = ((x141==(x142/x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	int32_t t36 = 8;

	t36 = ((x149==(x150/x151))<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -194513LL;
	static int32_t x154 = -247103125;
	int64_t x155 = -3LL;
	uint16_t x156 = UINT16_MAX;

	t37 = ((x153==(x154/x155))<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x157 = 5392026U;
	static int16_t x158 = -1;
	int32_t x159 = -390;
	int32_t t38 = -3;

	t38 = ((x157==(x158/x159))<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MIN;
	volatile uint16_t x163 = UINT16_MAX;
	static uint16_t x164 = UINT16_MAX;
	volatile int32_t t39 = 8;

	t39 = ((x161==(x162/x163))<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -1;
	static uint16_t x166 = 572U;
	static volatile uint64_t x167 = 334LLU;
	int32_t x168 = INT32_MIN;

	t40 = ((x165==(x166/x167))<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MAX;
	static volatile int8_t x172 = INT8_MIN;
	volatile int32_t t41 = -1588;

	t41 = ((x169==(x170/x171))<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = UINT64_MAX;
	int32_t t42 = -50;

	t42 = ((x173==(x174/x175))<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = INT8_MIN;
	uint16_t x180 = 0U;
	int32_t t43 = -41;

	t43 = ((x177==(x178/x179))<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = 9;
	int8_t x182 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	int32_t t44 = 142368801;

	t44 = ((x181==(x182/x183))<x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x187 = 126;
	int32_t t45 = -27387;

	t45 = ((x185==(x186/x187))<x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	volatile int8_t x190 = 0;
	static int64_t x191 = INT64_MAX;
	int64_t x192 = INT64_MIN;
	static int32_t t46 = -1;

	t46 = ((x189==(x190/x191))<x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x194 = 112110903LLU;
	int16_t x195 = -1;
	volatile uint32_t x196 = 7294U;
	int32_t t47 = 0;

	t47 = ((x193==(x194/x195))<x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x199 = INT8_MIN;
	static volatile uint8_t x200 = 44U;
	volatile int32_t t48 = 417;

	t48 = ((x197==(x198/x199))<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -3624552;
	int32_t x202 = INT32_MIN;
	static volatile uint16_t x203 = 12714U;
	int64_t x204 = 1951241330LL;
	int32_t t49 = 2223;

	t49 = ((x201==(x202/x203))<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MAX;
	static int16_t x206 = -31;
	volatile int32_t x207 = -1;
	volatile int8_t x208 = INT8_MIN;
	static volatile int32_t t50 = -5974;

	t50 = ((x205==(x206/x207))<x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = 1U;
	uint16_t x210 = 10015U;
	static int64_t x211 = 9687379917LL;
	static volatile int32_t x212 = -1232131;

	t51 = ((x209==(x210/x211))<x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = 2;
	static int32_t x214 = INT32_MIN;
	int32_t t52 = 3;

	t52 = ((x213==(x214/x215))<x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -5377LL;
	static int32_t x218 = -57653244;
	volatile uint64_t x219 = 1676599037441LLU;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t53 = -338025365;

	t53 = ((x217==(x218/x219))<x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x222 = -1;
	static int64_t x223 = 2113302908543959066LL;
	int8_t x224 = INT8_MIN;
	int32_t t54 = 1;

	t54 = ((x221==(x222/x223))<x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MIN;
	static volatile int64_t x227 = 1651730LL;
	volatile int8_t x228 = 8;

	t55 = ((x225==(x226/x227))<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x230 = 0U;
	volatile uint64_t x231 = 221642768741550LLU;
	volatile int16_t x232 = INT16_MIN;
	volatile int32_t t56 = 73970081;

	t56 = ((x229==(x230/x231))<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = INT16_MIN;
	int64_t x235 = 69539588116LL;

	t57 = ((x233==(x234/x235))<x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x238 = INT64_MIN;
	volatile int64_t x239 = INT64_MAX;
	int32_t x240 = -1;

	t58 = ((x237==(x238/x239))<x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -2372LL;
	volatile int64_t x242 = -1LL;
	static int64_t x244 = -1565651752LL;
	static volatile int32_t t59 = -2850;

	t59 = ((x241==(x242/x243))<x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	int32_t x247 = INT32_MAX;
	volatile int32_t t60 = -1070753114;

	t60 = ((x245==(x246/x247))<x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -1;
	int16_t x250 = 1;
	int32_t x252 = -20;
	int32_t t61 = 12550;

	t61 = ((x249==(x250/x251))<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x253 = INT64_MIN;
	volatile int16_t x256 = -4;
	volatile int32_t t62 = -16644201;

	t62 = ((x253==(x254/x255))<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 4U;
	volatile int64_t x258 = -1LL;
	static volatile int16_t x259 = -1;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t63 = 445;

	t63 = ((x257==(x258/x259))<x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = UINT64_MAX;
	static int16_t x262 = INT16_MAX;
	static int32_t x263 = INT32_MAX;
	int32_t t64 = -76;

	t64 = ((x261==(x262/x263))<x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 1LLU;
	int64_t x266 = 1966556369870LL;
	static uint32_t x268 = 974458U;
	int32_t t65 = -291498161;

	t65 = ((x265==(x266/x267))<x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = -203711LL;
	static uint8_t x270 = 1U;
	int64_t x271 = INT64_MIN;
	volatile int16_t x272 = 3;
	static int32_t t66 = 11;

	t66 = ((x269==(x270/x271))<x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x276 = INT32_MAX;
	volatile int32_t t67 = -9;

	t67 = ((x273==(x274/x275))<x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x278 = -111;
	int8_t x280 = INT8_MAX;

	t68 = ((x277==(x278/x279))<x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = 60;
	int8_t x283 = INT8_MIN;
	int64_t x284 = -1LL;
	volatile int32_t t69 = 231584;

	t69 = ((x281==(x282/x283))<x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x285 = 23636U;
	uint32_t x286 = 6453483U;
	int16_t x287 = -1;

	t70 = ((x285==(x286/x287))<x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x289 = 3LL;
	uint64_t x290 = 5585733082397980750LLU;
	uint32_t x291 = 7U;
	int64_t x292 = INT64_MAX;

	t71 = ((x289==(x290/x291))<x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = INT32_MIN;
	int32_t x295 = 433944;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t72 = 3;

	t72 = ((x293==(x294/x295))<x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	static uint16_t x299 = 1935U;
	volatile int32_t t73 = 1935204;

	t73 = ((x297==(x298/x299))<x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	volatile uint8_t x302 = 24U;
	volatile int64_t x304 = INT64_MIN;
	int32_t t74 = 374;

	t74 = ((x301==(x302/x303))<x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MAX;
	uint8_t x306 = 0U;
	int64_t x307 = INT64_MIN;
	static uint16_t x308 = 182U;
	volatile int32_t t75 = -703129654;

	t75 = ((x305==(x306/x307))<x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MIN;
	volatile uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	volatile int32_t t76 = 30;

	t76 = ((x309==(x310/x311))<x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x315 = 1U;
	volatile int64_t x316 = 28390LL;

	t77 = ((x313==(x314/x315))<x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x317 = 30970828LLU;
	int64_t x318 = -1LL;
	uint32_t x319 = 60380567U;
	volatile uint64_t x320 = 303854178LLU;

	t78 = ((x317==(x318/x319))<x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = -1;
	int64_t x324 = -1LL;
	volatile int32_t t79 = -1795177;

	t79 = ((x321==(x322/x323))<x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MAX;
	static int8_t x326 = INT8_MIN;
	int16_t x327 = 43;
	uint8_t x328 = UINT8_MAX;
	static volatile int32_t t80 = -1004132;

	t80 = ((x325==(x326/x327))<x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = -1LL;
	int32_t t81 = 2821495;

	t81 = ((x329==(x330/x331))<x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = 0;
	volatile int8_t x334 = INT8_MIN;
	static uint8_t x335 = 2U;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t82 = -5644;

	t82 = ((x333==(x334/x335))<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = INT8_MIN;
	uint16_t x338 = 2562U;
	static int16_t x339 = -1;

	t83 = ((x337==(x338/x339))<x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x341 = 378595;
	volatile int8_t x343 = -1;
	int32_t x344 = INT32_MIN;
	volatile int32_t t84 = -464;

	t84 = ((x341==(x342/x343))<x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x351 = 4U;
	static uint32_t x352 = UINT32_MAX;

	t85 = ((x349==(x350/x351))<x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x353 = -7379;
	volatile uint64_t x354 = 15669833LLU;
	static int16_t x355 = INT16_MIN;
	int8_t x356 = 0;

	t86 = ((x353==(x354/x355))<x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = 8752676U;
	volatile int64_t x362 = INT64_MAX;
	int16_t x363 = -1;
	int64_t x364 = -1LL;
	static volatile int32_t t87 = -7837;

	t87 = ((x361==(x362/x363))<x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x365 = 2009U;
	int16_t x366 = -87;
	int64_t x367 = INT64_MIN;
	volatile int16_t x368 = INT16_MAX;

	t88 = ((x365==(x366/x367))<x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -7215374LL;
	volatile int8_t x370 = -8;
	int64_t x371 = 176400540676222LL;
	uint8_t x372 = 55U;
	volatile int32_t t89 = -5;

	t89 = ((x369==(x370/x371))<x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = 852U;
	int32_t x375 = 128450293;
	int8_t x376 = 0;

	t90 = ((x373==(x374/x375))<x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x378 = -3;
	int64_t x379 = INT64_MAX;
	volatile int64_t x380 = -8275LL;
	int32_t t91 = -6355;

	t91 = ((x377==(x378/x379))<x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	int32_t t92 = 53903;

	t92 = ((x381==(x382/x383))<x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x386 = INT16_MIN;
	static uint32_t x387 = UINT32_MAX;
	int16_t x388 = INT16_MAX;

	t93 = ((x385==(x386/x387))<x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x389 = -1;
	uint32_t x390 = 181U;
	volatile uint64_t x391 = 84669737052LLU;
	int32_t t94 = 92107023;

	t94 = ((x389==(x390/x391))<x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x393 = -1;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -1LL;
	volatile uint8_t x396 = 21U;
	volatile int32_t t95 = 763019;

	t95 = ((x393==(x394/x395))<x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x397 = INT64_MIN;
	int32_t x399 = 31558;
	uint32_t x400 = 198900U;
	volatile int32_t t96 = 193665697;

	t96 = ((x397==(x398/x399))<x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = 4U;
	int8_t x402 = INT8_MIN;
	int64_t x404 = -1LL;
	int32_t t97 = -8926;

	t97 = ((x401==(x402/x403))<x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = -1;
	uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -1LL;
	static int32_t t98 = 0;

	t98 = ((x405==(x406/x407))<x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x410 = INT32_MAX;
	volatile int16_t x411 = INT16_MIN;
	volatile int32_t x412 = INT32_MIN;

	t99 = ((x409==(x410/x411))<x412);

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

