#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x8 = 7U;
int16_t x12 = 0;
volatile int32_t t2 = -1;
int64_t x17 = INT64_MIN;
uint32_t x21 = UINT32_MAX;
static int32_t x27 = -1;
int8_t x33 = INT8_MIN;
static int8_t x39 = -1;
int8_t x45 = INT8_MIN;
static int32_t t11 = 10;
int64_t x51 = -1LL;
int8_t x54 = -59;
static int16_t x55 = 355;
uint16_t x57 = UINT16_MAX;
int8_t x59 = 5;
static volatile int32_t t14 = -33;
uint16_t x63 = 5U;
int64_t x69 = INT64_MIN;
uint64_t x72 = 419234575896LLU;
int32_t x85 = INT32_MIN;
uint32_t x89 = 163727670U;
int8_t x95 = INT8_MIN;
volatile int32_t t23 = 0;
static int8_t x97 = -1;
uint64_t x99 = 2471712340567LLU;
int16_t x104 = INT16_MIN;
uint16_t x109 = 29719U;
int16_t x112 = INT16_MAX;
volatile int32_t t27 = -1335280;
int8_t x114 = INT8_MIN;
int64_t x115 = 32058043606081859LL;
int64_t t28 = 0LL;
uint8_t x117 = 91U;
int64_t x120 = -1LL;
uint8_t x124 = 2U;
int32_t x127 = -1;
static int32_t t31 = -3;
int32_t x130 = -11;
volatile int32_t x132 = -10;
int32_t t35 = 60;
volatile int16_t x150 = INT16_MAX;
int8_t x152 = -11;
static int32_t x157 = INT32_MAX;
int8_t x162 = INT8_MIN;
uint32_t x167 = 444177678U;
static int64_t x168 = INT64_MIN;
volatile int64_t t41 = INT64_MIN;
int32_t x171 = -1;
int32_t x172 = -1;
int64_t x178 = INT64_MIN;
static int32_t x187 = INT32_MIN;
uint16_t x188 = UINT16_MAX;
volatile int64_t t47 = INT64_MIN;
int64_t x195 = INT64_MIN;
static uint32_t t48 = 4U;
int16_t x203 = -5344;
static int32_t x205 = INT32_MAX;
volatile int16_t x209 = INT16_MIN;
int8_t x210 = INT8_MIN;
int8_t x212 = INT8_MIN;
uint64_t x219 = 1072648004LLU;
int64_t t54 = 6365994859LL;
int64_t x225 = INT64_MIN;
volatile int64_t x227 = INT64_MIN;
volatile int32_t t56 = -549898170;
int8_t x231 = -1;
volatile int64_t t60 = -3LL;
static uint8_t x259 = UINT8_MAX;
volatile uint16_t x261 = 2039U;
uint8_t x265 = UINT8_MAX;
volatile int8_t x266 = -1;
static uint16_t x267 = 124U;
uint16_t x275 = 6U;
int32_t t69 = -236350070;
int64_t x285 = INT64_MIN;
int64_t x289 = -642399559412608LL;
int8_t x295 = INT8_MAX;
int32_t t73 = -43511;
int64_t x300 = INT64_MIN;
int16_t x305 = 1;
int32_t x312 = INT32_MIN;
int32_t x313 = INT32_MIN;
volatile uint8_t x314 = 124U;
int16_t x320 = -1;
static volatile int16_t x333 = 96;
static uint16_t x339 = 946U;
static uint8_t x350 = 1U;
int8_t x355 = 11;
int8_t x362 = INT8_MIN;
volatile uint32_t x366 = 1U;
static uint32_t t92 = 47583877U;
static uint8_t x373 = 20U;
volatile int32_t t93 = 43921;
uint64_t x380 = 165480226645123965LLU;
uint64_t x387 = UINT64_MAX;
int64_t t96 = -116LL;
int32_t x390 = -1;
static uint16_t x395 = 10U;
int32_t x397 = INT32_MAX;
volatile int32_t x400 = INT32_MAX;


void f0(void) {
	static int64_t x1 = -1LL;
	int8_t x2 = INT8_MIN;
	int64_t x3 = -1LL;
	static int64_t x4 = 91110645LL;
	int64_t t0 = -958764LL;

	t0 = (((x1|x2)<=x3)^x4);

	if (t0 != 91110644LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint8_t x6 = 1U;
	volatile int8_t x7 = 17;
	volatile int32_t t1 = -6591480;

	t1 = (((x5|x6)<=x7)^x8);

	if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 742U;
	uint64_t x10 = 25535701636LLU;
	int32_t x11 = -266970677;

	t2 = (((x9|x10)<=x11)^x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MAX;
	uint8_t x16 = UINT8_MAX;
	static int32_t t3 = -131;

	t3 = (((x13|x14)<=x15)^x16);

	if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = -1;
	int16_t x19 = -34;
	int64_t x20 = 540740153469LL;
	int64_t t4 = -40LL;

	t4 = (((x17|x18)<=x19)^x20);

	if (t4 != 540740153469LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	int8_t x23 = 1;
	volatile int64_t x24 = -16048LL;
	volatile int64_t t5 = 992753608590LL;

	t5 = (((x21|x22)<=x23)^x24);

	if (t5 != -16048LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint32_t x26 = 19U;
	int16_t x28 = 846;
	int32_t t6 = 14814598;

	t6 = (((x25|x26)<=x27)^x28);

	if (t6 != 847) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 82U;
	volatile int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = INT64_MIN;

	t7 = (((x29|x30)<=x31)^x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = INT16_MAX;
	uint64_t x35 = UINT64_MAX;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 4967;

	t8 = (((x33|x34)<=x35)^x36);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int64_t x38 = -6403LL;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -480756162;

	t9 = (((x37|x38)<=x39)^x40);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = -1;
	int8_t x42 = 3;
	int8_t x43 = INT8_MIN;
	static uint16_t x44 = UINT16_MAX;
	static volatile int32_t t10 = 14500;

	t10 = (((x41|x42)<=x43)^x44);

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = -1883463501782542453LL;
	static int8_t x47 = -1;
	static uint8_t x48 = 0U;

	t11 = (((x45|x46)<=x47)^x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MIN;
	uint32_t x52 = UINT32_MAX;
	static volatile uint32_t t12 = 405412799U;

	t12 = (((x49|x50)<=x51)^x52);

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1481U;
	static uint8_t x56 = 0U;
	volatile int32_t t13 = -1;

	t13 = (((x53|x54)<=x55)^x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	int8_t x60 = 0;

	t14 = (((x57|x58)<=x59)^x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -1;
	int64_t x62 = INT64_MIN;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 13853;

	t15 = (((x61|x62)<=x63)^x64);

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int32_t x66 = INT32_MIN;
	volatile uint16_t x67 = UINT16_MAX;
	int64_t x68 = -1LL;
	int64_t t16 = -14LL;

	t16 = (((x65|x66)<=x67)^x68);

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -3;
	volatile uint16_t x71 = 0U;
	volatile uint64_t t17 = 2185133858802947236LLU;

	t17 = (((x69|x70)<=x71)^x72);

	if (t17 != 419234575897LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 1;
	static int64_t x74 = -1LL;
	volatile uint8_t x75 = UINT8_MAX;
	static uint16_t x76 = UINT16_MAX;
	int32_t t18 = 683377449;

	t18 = (((x73|x74)<=x75)^x76);

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MAX;
	volatile int8_t x78 = INT8_MIN;
	uint16_t x79 = 0U;
	uint64_t x80 = 7910387006003985LLU;
	uint64_t t19 = 14496191878869021LLU;

	t19 = (((x77|x78)<=x79)^x80);

	if (t19 != 7910387006003984LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 56330LL;
	int16_t x82 = -1;
	int32_t x83 = INT32_MIN;
	volatile uint64_t x84 = UINT64_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (((x81|x82)<=x83)^x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = UINT32_MAX;
	uint64_t x87 = 42019154882LLU;
	uint64_t x88 = 7509482612430281LLU;
	uint64_t t21 = 5277LLU;

	t21 = (((x85|x86)<=x87)^x88);

	if (t21 != 7509482612430280LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = 1;
	int8_t x91 = -12;
	uint64_t x92 = 529403434626LLU;
	uint64_t t22 = 472796165789132196LLU;

	t22 = (((x89|x90)<=x91)^x92);

	if (t22 != 529403434627LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	int16_t x94 = 0;
	int8_t x96 = INT8_MIN;

	t23 = (((x93|x94)<=x95)^x96);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = INT32_MAX;

	t24 = (((x97|x98)<=x99)^x100);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 13;
	int8_t x102 = INT8_MIN;
	int64_t x103 = INT64_MIN;
	volatile int32_t t25 = -1283;

	t25 = (((x101|x102)<=x103)^x104);

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -2LL;
	int16_t x106 = INT16_MIN;
	volatile uint16_t x107 = 446U;
	int64_t x108 = INT64_MIN;
	int64_t t26 = 218916612663914LL;

	t26 = (((x105|x106)<=x107)^x108);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x110 = UINT32_MAX;
	volatile int64_t x111 = INT64_MAX;

	t27 = (((x109|x110)<=x111)^x112);

	if (t27 != 32766) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 7U;
	int64_t x116 = 4395565733268LL;

	t28 = (((x113|x114)<=x115)^x116);

	if (t28 != 4395565733269LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = 13U;
	static volatile uint64_t x119 = 18658291LLU;
	volatile int64_t t29 = -20999864584904698LL;

	t29 = (((x117|x118)<=x119)^x120);

	if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -18LL;
	static volatile uint16_t x122 = 2U;
	volatile int16_t x123 = INT16_MIN;
	int32_t t30 = 26;

	t30 = (((x121|x122)<=x123)^x124);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x125 = 76LLU;
	int64_t x126 = INT64_MIN;
	int8_t x128 = INT8_MIN;

	t31 = (((x125|x126)<=x127)^x128);

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	volatile uint16_t x131 = 130U;
	static volatile int32_t t32 = 1736904;

	t32 = (((x129|x130)<=x131)^x132);

	if (t32 != -10) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x133 = INT64_MIN;
	uint64_t x134 = UINT64_MAX;
	uint16_t x135 = 419U;
	uint8_t x136 = 23U;
	static volatile int32_t t33 = 63033037;

	t33 = (((x133|x134)<=x135)^x136);

	if (t33 != 23) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	volatile uint64_t x138 = 6885028LLU;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t34 = -83;

	t34 = (((x137|x138)<=x139)^x140);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int8_t x142 = INT8_MIN;
	static int16_t x143 = INT16_MIN;
	uint16_t x144 = 21U;

	t35 = (((x141|x142)<=x143)^x144);

	if (t35 != 21) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x145 = 516187349357301LLU;
	int16_t x146 = 10571;
	int16_t x147 = -1;
	uint16_t x148 = 1U;
	volatile int32_t t36 = -8490;

	t36 = (((x145|x146)<=x147)^x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	static uint64_t x151 = 2327437408929296LLU;
	int32_t t37 = -98627000;

	t37 = (((x149|x150)<=x151)^x152);

	if (t37 != -12) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile int32_t x155 = 100287155;
	int16_t x156 = -3457;
	volatile int32_t t38 = 92962;

	t38 = (((x153|x154)<=x155)^x156);

	if (t38 != -3457) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = 7665183183867774610LLU;
	int8_t x159 = -5;
	volatile int16_t x160 = INT16_MAX;
	int32_t t39 = -148;

	t39 = (((x157|x158)<=x159)^x160);

	if (t39 != 32766) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 13403579399LLU;
	int64_t x163 = INT64_MIN;
	int64_t x164 = -1LL;
	static volatile int64_t t40 = 387LL;

	t40 = (((x161|x162)<=x163)^x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 67U;
	int16_t x166 = -4330;

	t41 = (((x165|x166)<=x167)^x168);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MIN;
	uint16_t x170 = 53U;
	volatile int32_t t42 = 3725719;

	t42 = (((x169|x170)<=x171)^x172);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	uint32_t x174 = UINT32_MAX;
	int16_t x175 = INT16_MIN;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = -74505826;

	t43 = (((x173|x174)<=x175)^x176);

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x179 = UINT32_MAX;
	volatile int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 476;

	t44 = (((x177|x178)<=x179)^x180);

	if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -24035108939LL;
	int16_t x182 = INT16_MIN;
	volatile int32_t x183 = INT32_MIN;
	static int64_t x184 = INT64_MAX;
	static volatile int64_t t45 = INT64_MAX;

	t45 = (((x181|x182)<=x183)^x184);

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static volatile int16_t x186 = -1;
	int32_t t46 = 11051122;

	t46 = (((x185|x186)<=x187)^x188);

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint8_t x190 = 1U;
	int8_t x191 = INT8_MAX;
	static int64_t x192 = INT64_MIN;

	t47 = (((x189|x190)<=x191)^x192);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 1U;
	uint16_t x194 = 12218U;
	uint32_t x196 = 217897845U;

	t48 = (((x193|x194)<=x195)^x196);

	if (t48 != 217897845U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 44511213049541727LLU;
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 314647155;

	t49 = (((x197|x198)<=x199)^x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 1;
	int32_t x202 = 0;
	uint32_t x204 = 847431265U;
	volatile uint32_t t50 = 0U;

	t50 = (((x201|x202)<=x203)^x204);

	if (t50 != 847431265U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = UINT16_MAX;
	volatile int32_t x207 = -1;
	volatile uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = 43583630;

	t51 = (((x205|x206)<=x207)^x208);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x211 = -95;
	static int32_t t52 = 25738;

	t52 = (((x209|x210)<=x211)^x212);

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 1035651012065LLU;
	uint16_t x214 = 1U;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t x216 = 20;
	volatile int32_t t53 = 1;

	t53 = (((x213|x214)<=x215)^x216);

	if (t53 != 21) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	volatile uint16_t x218 = 8U;
	volatile int64_t x220 = 0LL;

	t54 = (((x217|x218)<=x219)^x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 5972;
	int8_t x222 = INT8_MAX;
	volatile int64_t x223 = INT64_MIN;
	static volatile int16_t x224 = -1833;
	volatile int32_t t55 = -765031114;

	t55 = (((x221|x222)<=x223)^x224);

	if (t55 != -1833) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -50407;
	static volatile int32_t x228 = -115;

	t56 = (((x225|x226)<=x227)^x228);

	if (t56 != -115) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	static int32_t x230 = 1569;
	int8_t x232 = 7;
	int32_t t57 = -184788036;

	t57 = (((x229|x230)<=x231)^x232);

	if (t57 != 6) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = 8135208;
	volatile int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = -22923871;

	t58 = (((x233|x234)<=x235)^x236);

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	uint8_t x238 = UINT8_MAX;
	int64_t x239 = 10835581215991452LL;
	static int8_t x240 = INT8_MIN;
	int32_t t59 = -1;

	t59 = (((x237|x238)<=x239)^x240);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -484146;
	int16_t x242 = INT16_MAX;
	static int32_t x243 = INT32_MIN;
	static int64_t x244 = -1LL;

	t60 = (((x241|x242)<=x243)^x244);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 4;
	int32_t x246 = INT32_MAX;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = UINT64_MAX;
	static volatile uint64_t t61 = UINT64_MAX;

	t61 = (((x245|x246)<=x247)^x248);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 2U;
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = INT16_MIN;
	int32_t t62 = -465035;

	t62 = (((x249|x250)<=x251)^x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 0U;
	int32_t x254 = INT32_MIN;
	int32_t x255 = -213416046;
	static int16_t x256 = -1;
	volatile int32_t t63 = 16615830;

	t63 = (((x253|x254)<=x255)^x256);

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = -1;
	volatile int8_t x260 = INT8_MIN;
	static volatile int32_t t64 = 1440866;

	t64 = (((x257|x258)<=x259)^x260);

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x262 = 14U;
	volatile int16_t x263 = -140;
	volatile uint64_t x264 = 3072759602544LLU;
	volatile uint64_t t65 = 30734184675749LLU;

	t65 = (((x261|x262)<=x263)^x264);

	if (t65 != 3072759602544LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x268 = -2;
	static int32_t t66 = 79567875;

	t66 = (((x265|x266)<=x267)^x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 1U;
	int64_t x270 = -1LL;
	static uint32_t x271 = 130439524U;
	int64_t x272 = -41248LL;
	volatile int64_t t67 = 12LL;

	t67 = (((x269|x270)<=x271)^x272);

	if (t67 != -41247LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -153383263;

	t68 = (((x273|x274)<=x275)^x276);

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 4055266090350LLU;
	volatile int32_t x278 = -1;
	static int8_t x279 = -6;
	int16_t x280 = INT16_MIN;

	t69 = (((x277|x278)<=x279)^x280);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	static volatile int64_t x282 = INT64_MAX;
	static volatile int64_t x283 = INT64_MAX;
	int8_t x284 = INT8_MIN;
	static int32_t t70 = -402008;

	t70 = (((x281|x282)<=x283)^x284);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MAX;
	int64_t x288 = -1LL;
	int64_t t71 = -1993980311344582709LL;

	t71 = (((x285|x286)<=x287)^x288);

	if (t71 != -2LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x290 = 82914974723LL;
	volatile int8_t x291 = -1;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t72 = 91689485348LL;

	t72 = (((x289|x290)<=x291)^x292);

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = -1LL;
	int16_t x294 = -15;
	uint16_t x296 = UINT16_MAX;

	t73 = (((x293|x294)<=x295)^x296);

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = 1;
	int8_t x298 = -1;
	int16_t x299 = 2;
	int64_t t74 = -469228033LL;

	t74 = (((x297|x298)<=x299)^x300);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	volatile uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 250179646LLU;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t75 = INT32_MAX;

	t75 = (((x301|x302)<=x303)^x304);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	static uint32_t x307 = UINT32_MAX;
	uint8_t x308 = 107U;
	static volatile int32_t t76 = -124802501;

	t76 = (((x305|x306)<=x307)^x308);

	if (t76 != 106) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	volatile int8_t x310 = INT8_MIN;
	static int8_t x311 = -60;
	static int32_t t77 = INT32_MIN;

	t77 = (((x309|x310)<=x311)^x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x315 = INT32_MAX;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t78 = -2449;

	t78 = (((x313|x314)<=x315)^x316);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MIN;
	uint32_t x319 = 101080U;
	int32_t t79 = 2105;

	t79 = (((x317|x318)<=x319)^x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 1U;
	int32_t x322 = -1;
	int8_t x323 = 2;
	uint64_t x324 = 256000277104123LLU;
	static uint64_t t80 = 31566696025851LLU;

	t80 = (((x321|x322)<=x323)^x324);

	if (t80 != 256000277104122LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	int64_t x327 = -1LL;
	int64_t x328 = INT64_MIN;
	int64_t t81 = -1380579296647003LL;

	t81 = (((x325|x326)<=x327)^x328);

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	volatile int8_t x330 = -43;
	int64_t x331 = 1LL;
	volatile int8_t x332 = -3;
	int32_t t82 = -6613;

	t82 = (((x329|x330)<=x331)^x332);

	if (t82 != -4) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = 71083LL;
	static int64_t x335 = INT64_MAX;
	static int32_t x336 = -1;
	int32_t t83 = -23;

	t83 = (((x333|x334)<=x335)^x336);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = INT16_MIN;
	static uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = -1;

	t84 = (((x337|x338)<=x339)^x340);

	if (t84 != 65534) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MAX;
	uint64_t x342 = 631LLU;
	int32_t x343 = -1;
	static int16_t x344 = INT16_MAX;
	int32_t t85 = 1033527;

	t85 = (((x341|x342)<=x343)^x344);

	if (t85 != 32766) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = UINT8_MAX;
	int16_t x346 = 124;
	volatile int8_t x347 = INT8_MAX;
	static volatile int32_t x348 = INT32_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = (((x345|x346)<=x347)^x348);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	static uint8_t x351 = 1U;
	volatile int16_t x352 = INT16_MIN;
	static volatile int32_t t87 = 1631;

	t87 = (((x349|x350)<=x351)^x352);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 383867644U;
	int64_t x354 = -1LL;
	int16_t x356 = -1;
	static int32_t t88 = -137172;

	t88 = (((x353|x354)<=x355)^x356);

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -1;
	int32_t x358 = 94389;
	static int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MAX;
	int32_t t89 = 170224;

	t89 = (((x357|x358)<=x359)^x360);

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int32_t x363 = -17342446;
	int64_t x364 = -1LL;
	volatile int64_t t90 = -39812967377078803LL;

	t90 = (((x361|x362)<=x363)^x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	static uint16_t x367 = 116U;
	int64_t x368 = 1330948327360LL;
	static int64_t t91 = 7037699LL;

	t91 = (((x365|x366)<=x367)^x368);

	if (t91 != 1330948327360LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	static uint32_t x370 = 129435976U;
	int16_t x371 = -1;
	uint32_t x372 = 224337498U;

	t92 = (((x369|x370)<=x371)^x372);

	if (t92 != 224337499U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x374 = UINT16_MAX;
	uint32_t x375 = UINT32_MAX;
	static int8_t x376 = INT8_MAX;

	t93 = (((x373|x374)<=x375)^x376);

	if (t93 != 126) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	static uint64_t x378 = UINT64_MAX;
	uint64_t x379 = 897LLU;
	volatile uint64_t t94 = 230730569LLU;

	t94 = (((x377|x378)<=x379)^x380);

	if (t94 != 165480226645123965LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = -1LL;
	volatile int64_t x382 = -1LL;
	int16_t x383 = INT16_MIN;
	static int8_t x384 = -15;
	static int32_t t95 = -72550789;

	t95 = (((x381|x382)<=x383)^x384);

	if (t95 != -15) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 3370;
	static volatile int8_t x386 = INT8_MIN;
	static int64_t x388 = INT64_MIN;

	t96 = (((x385|x386)<=x387)^x388);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	static int64_t x391 = 274LL;
	uint64_t x392 = 828216LLU;
	volatile uint64_t t97 = 7587950866623990LLU;

	t97 = (((x389|x390)<=x391)^x392);

	if (t97 != 828217LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = 0U;
	static uint64_t x394 = UINT64_MAX;
	int32_t x396 = INT32_MAX;
	int32_t t98 = INT32_MAX;

	t98 = (((x393|x394)<=x395)^x396);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MIN;
	uint64_t x399 = 309LLU;
	int32_t t99 = INT32_MAX;

	t99 = (((x397|x398)<=x399)^x400);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

