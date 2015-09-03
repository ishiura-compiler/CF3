#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -3;
uint16_t x4 = UINT16_MAX;
int32_t t0 = 2;
int8_t x6 = 7;
static int32_t x13 = INT32_MIN;
uint64_t x16 = 37884950232144441LLU;
volatile int64_t x39 = INT64_MIN;
int64_t x43 = -5LL;
static int64_t x45 = -1LL;
uint16_t x46 = 4U;
int16_t x47 = -988;
static int64_t t11 = 44471128LL;
int64_t x55 = -11090302457LL;
volatile int32_t t13 = -30;
int8_t x59 = 17;
volatile int64_t t14 = 321490LL;
static volatile int16_t x63 = 23;
int8_t x65 = 2;
volatile int32_t x66 = INT32_MAX;
int16_t x69 = INT16_MIN;
static volatile int64_t x71 = 633LL;
int32_t t18 = 246767;
volatile uint8_t x77 = 10U;
uint8_t x88 = 105U;
uint32_t x92 = UINT32_MAX;
volatile int8_t x97 = -24;
int16_t x99 = -6;
int32_t x100 = 16455204;
static uint32_t x110 = 4763857U;
int8_t x112 = INT8_MAX;
static volatile uint64_t x115 = UINT64_MAX;
int16_t x117 = -1;
int32_t t29 = -1858;
int32_t x121 = INT32_MIN;
uint64_t x123 = 27LLU;
int16_t x126 = -1;
uint64_t x129 = UINT64_MAX;
volatile uint64_t t32 = 0LLU;
volatile int32_t x133 = 820924;
int8_t x136 = -1;
static volatile int8_t x137 = INT8_MIN;
int8_t x141 = -1;
static uint64_t x147 = 3305521505867354487LLU;
uint16_t x148 = 15517U;
volatile int32_t t36 = 1009877239;
uint64_t x157 = 2525576208595360LLU;
static int8_t x160 = INT8_MIN;
int32_t x171 = -1;
int32_t t42 = -17777666;
int64_t t45 = -8195728976LL;
volatile uint64_t x187 = UINT64_MAX;
int32_t x188 = 4180906;
static uint32_t t47 = 4U;
int16_t x193 = INT16_MIN;
volatile uint32_t x202 = 247477576U;
uint64_t x204 = 60304694589LLU;
int64_t x209 = 14525971495LL;
int64_t t52 = -479043247656LL;
volatile uint64_t x217 = 46928569LLU;
int64_t x221 = INT64_MIN;
volatile uint64_t x224 = 4677835649174566LLU;
static volatile uint32_t t59 = 1U;
static int8_t x241 = -1;
static int64_t x244 = -85030367800883LL;
uint8_t x246 = UINT8_MAX;
int16_t x255 = INT16_MIN;
static volatile int32_t t63 = 3741;
int64_t x262 = -47959180957619LL;
volatile int32_t t65 = 755919763;
int16_t x265 = -45;
static int32_t x268 = 19199546;
uint64_t x273 = 18463LLU;
volatile int16_t x276 = -1;
static volatile uint8_t x279 = 2U;
uint8_t x283 = UINT8_MAX;
uint16_t x286 = UINT16_MAX;
uint64_t x297 = 1842247228LLU;
uint16_t x298 = 0U;
volatile int32_t t76 = 9;
int16_t x311 = INT16_MIN;
uint32_t x313 = UINT32_MAX;
uint64_t x318 = 958381390044LLU;
static uint8_t x321 = 5U;
uint64_t x328 = UINT64_MAX;
int32_t x338 = 5;
uint8_t x350 = 6U;
uint8_t x359 = 2U;
volatile int64_t t90 = 2828890LL;
volatile int64_t x375 = 63457LL;
static uint8_t x378 = UINT8_MAX;
volatile int8_t x386 = 0;
int64_t x392 = -1LL;
int64_t t97 = 90547094458602151LL;


void f0(void) {
	volatile int64_t x2 = INT64_MAX;
	uint64_t x3 = 12LLU;

	t0 = (x1*((x2==x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1845U;
	int32_t x7 = 1;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 565;

	t1 = (x5*((x6==x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int16_t x10 = -3;
	volatile int64_t x11 = INT64_MIN;
	int16_t x12 = -1;
	volatile int32_t t2 = 113611;

	t2 = (x9*((x10==x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	static int64_t x15 = 8346664LL;
	static uint64_t t3 = 951836037631LLU;

	t3 = (x13*((x14==x15)&x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = UINT32_MAX;
	static uint16_t x18 = 2U;
	uint16_t x19 = UINT16_MAX;
	uint8_t x20 = UINT8_MAX;
	uint32_t t4 = 44993604U;

	t4 = (x17*((x18==x19)&x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = 3;
	uint8_t x23 = 5U;
	static uint32_t x24 = 247423U;
	volatile uint32_t t5 = 10910289U;

	t5 = (x21*((x22==x23)&x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -5;
	int8_t x26 = -4;
	int16_t x27 = -4530;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -321618;

	t6 = (x25*((x26==x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1686825U;
	static int64_t x30 = INT64_MIN;
	static int16_t x31 = 15101;
	int16_t x32 = INT16_MIN;
	static uint32_t t7 = 63U;

	t7 = (x29*((x30==x31)&x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 0U;
	uint16_t x34 = UINT16_MAX;
	static uint16_t x35 = UINT16_MAX;
	int8_t x36 = 1;
	int32_t t8 = 35;

	t8 = (x33*((x34==x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MIN;
	static int64_t x40 = INT64_MIN;
	int64_t t9 = -222693553229149146LL;

	t9 = (x37*((x38==x39)&x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 2;
	volatile uint8_t x42 = 1U;
	static int64_t x44 = INT64_MIN;
	static volatile int64_t t10 = -181851LL;

	t10 = (x41*((x42==x43)&x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x48 = -1;

	t11 = (x45*((x46==x47)&x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int32_t x50 = 2;
	uint16_t x51 = 15U;
	static int64_t x52 = -3610574LL;
	int64_t t12 = 24LL;

	t12 = (x49*((x50==x51)&x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1779903;
	int16_t x54 = INT16_MIN;
	int32_t x56 = INT32_MIN;

	t13 = (x53*((x54==x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	volatile uint64_t x58 = 5423783LLU;
	int64_t x60 = INT64_MAX;

	t14 = (x57*((x58==x59)&x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 838U;
	volatile int64_t x62 = INT64_MIN;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 993339895;

	t15 = (x61*((x62==x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x67 = -369LL;
	volatile int8_t x68 = -1;
	volatile int32_t t16 = 156;

	t16 = (x65*((x66==x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x70 = UINT64_MAX;
	int16_t x72 = 133;
	int32_t t17 = -6063;

	t17 = (x69*((x70==x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 27U;
	int32_t x74 = INT32_MIN;
	uint32_t x75 = 930935U;
	int16_t x76 = -540;

	t18 = (x73*((x74==x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 3U;
	int8_t x79 = INT8_MAX;
	uint16_t x80 = UINT16_MAX;
	static int32_t t19 = -112770153;

	t19 = (x77*((x78==x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = UINT8_MAX;
	int8_t x82 = -3;
	int32_t x83 = -1;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 5473001;

	t20 = (x81*((x82==x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static int64_t x86 = -1LL;
	int16_t x87 = INT16_MIN;
	int32_t t21 = -464;

	t21 = (x85*((x86==x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 62U;
	volatile int16_t x90 = -1;
	static int16_t x91 = 3;
	volatile uint32_t t22 = 2858U;

	t22 = (x89*((x90==x91)&x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 0;
	int64_t x94 = INT64_MIN;
	int8_t x95 = -1;
	int8_t x96 = -28;
	static volatile int32_t t23 = 245519617;

	t23 = (x93*((x94==x95)&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = INT32_MIN;
	int32_t t24 = -1569975;

	t24 = (x97*((x98==x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 13U;
	int16_t x102 = 0;
	volatile int64_t x103 = INT64_MIN;
	uint32_t x104 = 2174U;
	static volatile uint32_t t25 = 34810814U;

	t25 = (x101*((x102==x103)&x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = -15403;
	static int32_t x106 = -1;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t26 = 64LLU;

	t26 = (x105*((x106==x107)&x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 484U;
	int64_t x111 = -98074216LL;
	static int32_t t27 = 7772;

	t27 = (x109*((x110==x111)&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	uint64_t x114 = 1621361LLU;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t28 = 13111746034616LLU;

	t28 = (x113*((x114==x115)&x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x118 = INT64_MIN;
	uint32_t x119 = 1U;
	static volatile uint16_t x120 = 4378U;

	t29 = (x117*((x118==x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	int64_t x124 = -1LL;
	volatile int64_t t30 = -3541140097LL;

	t30 = (x121*((x122==x123)&x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = UINT64_MAX;
	volatile uint8_t x127 = UINT8_MAX;
	int64_t x128 = 353356629LL;
	volatile uint64_t t31 = 63627415531963LLU;

	t31 = (x125*((x126==x127)&x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = -1;
	volatile int16_t x131 = INT16_MIN;
	volatile int16_t x132 = 4;

	t32 = (x129*((x130==x131)&x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 807U;
	volatile int32_t x135 = INT32_MAX;
	int32_t t33 = 7188989;

	t33 = (x133*((x134==x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	uint8_t x139 = 58U;
	int8_t x140 = -11;
	static volatile int32_t t34 = -7301;

	t34 = (x137*((x138==x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MAX;
	static int16_t x143 = INT16_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile uint32_t t35 = 207582U;

	t35 = (x141*((x142==x143)&x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int16_t x146 = INT16_MIN;

	t36 = (x145*((x146==x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 61029947;
	uint16_t x150 = 2252U;
	int32_t x151 = -29182684;
	uint64_t x152 = 6LLU;
	volatile uint64_t t37 = 0LLU;

	t37 = (x149*((x150==x151)&x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = UINT32_MAX;
	int32_t x154 = -1035;
	uint16_t x155 = 11U;
	volatile int8_t x156 = INT8_MIN;
	volatile uint32_t t38 = 4970934U;

	t38 = (x153*((x154==x155)&x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x158 = -11139;
	int32_t x159 = -118622993;
	static volatile uint64_t t39 = 1467LLU;

	t39 = (x157*((x158==x159)&x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = 1648U;
	int32_t x163 = INT32_MAX;
	uint8_t x164 = 5U;
	volatile int32_t t40 = 126140;

	t40 = (x161*((x162==x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = 367712848LL;
	int16_t x166 = 13;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MIN;
	static int64_t t41 = 629503630638LL;

	t41 = (x165*((x166==x167)&x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MIN;
	int16_t x172 = INT16_MIN;

	t42 = (x169*((x170==x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = INT16_MAX;
	int8_t x174 = INT8_MIN;
	int32_t x175 = -6;
	uint8_t x176 = 0U;
	volatile int32_t t43 = -785033682;

	t43 = (x173*((x174==x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -52800LL;
	static uint64_t x178 = 4615899265214223314LLU;
	int32_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int64_t t44 = -13278LL;

	t44 = (x177*((x178==x179)&x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -1LL;
	static volatile int64_t x182 = 16672485164388LL;
	volatile int8_t x183 = INT8_MIN;
	int8_t x184 = -3;

	t45 = (x181*((x182==x183)&x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	uint8_t x186 = 35U;
	volatile int32_t t46 = -1;

	t46 = (x185*((x186==x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 6118244U;
	int64_t x190 = INT64_MIN;
	uint8_t x191 = 79U;
	uint16_t x192 = UINT16_MAX;

	t47 = (x189*((x190==x191)&x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = UINT8_MAX;
	int16_t x195 = -1;
	volatile int16_t x196 = INT16_MAX;
	volatile int32_t t48 = -96798448;

	t48 = (x193*((x194==x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	int64_t x198 = 269363511550961LL;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = 60144576U;
	static uint32_t t49 = 5732457U;

	t49 = (x197*((x198==x199)&x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	volatile int8_t x203 = 27;
	uint64_t t50 = 1343LLU;

	t50 = (x201*((x202==x203)&x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -50017742039LL;
	int64_t x206 = INT64_MIN;
	int16_t x207 = 6;
	int8_t x208 = INT8_MIN;
	int64_t t51 = -118161608LL;

	t51 = (x205*((x206==x207)&x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x210 = UINT32_MAX;
	static int16_t x211 = -1;
	static uint8_t x212 = UINT8_MAX;

	t52 = (x209*((x210==x211)&x212));

	if (t52 != 14525971495LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	uint32_t x214 = 50050200U;
	static int8_t x215 = -3;
	volatile uint16_t x216 = 6645U;
	uint32_t t53 = 11662U;

	t53 = (x213*((x214==x215)&x216));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x218 = 1771U;
	int16_t x219 = INT16_MAX;
	static int64_t x220 = INT64_MIN;
	static volatile uint64_t t54 = 96249089LLU;

	t54 = (x217*((x218==x219)&x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MIN;
	uint8_t x223 = UINT8_MAX;
	uint64_t t55 = 3342672394851774LLU;

	t55 = (x221*((x222==x223)&x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	static volatile int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	int32_t x228 = -1;
	int32_t t56 = -1561;

	t56 = (x225*((x226==x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	static uint32_t x230 = UINT32_MAX;
	uint8_t x231 = 52U;
	int8_t x232 = INT8_MIN;
	static volatile int32_t t57 = 82155296;

	t57 = (x229*((x230==x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 26U;
	volatile int64_t x234 = INT64_MAX;
	int64_t x235 = 215212823182LL;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = 9972509263841907LLU;

	t58 = (x233*((x234==x235)&x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -496;
	uint8_t x238 = 0U;
	static int16_t x239 = 15;
	uint32_t x240 = 16717268U;

	t59 = (x237*((x238==x239)&x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x242 = 1313018U;
	int64_t x243 = -1LL;
	static volatile int64_t t60 = -74917974418888641LL;

	t60 = (x241*((x242==x243)&x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	uint8_t x247 = 56U;
	int32_t x248 = -497387085;
	static volatile uint32_t t61 = 2222689U;

	t61 = (x245*((x246==x247)&x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	volatile uint16_t x250 = UINT16_MAX;
	static uint32_t x251 = 22U;
	volatile int32_t x252 = INT32_MAX;
	int32_t t62 = -12;

	t62 = (x249*((x250==x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	int8_t x254 = INT8_MIN;
	int8_t x256 = INT8_MIN;

	t63 = (x253*((x254==x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 32917778LL;
	int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MIN;
	int64_t t64 = -33033275688547810LL;

	t64 = (x257*((x258==x259)&x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x263 = 443U;
	static uint8_t x264 = 60U;

	t65 = (x261*((x262==x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = 1U;
	int16_t x267 = -1;
	static volatile int32_t t66 = 213491;

	t66 = (x265*((x266==x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int8_t x270 = 26;
	volatile uint64_t x271 = 896LLU;
	int64_t x272 = INT64_MIN;
	int64_t t67 = -95478446725752LL;

	t67 = (x269*((x270==x271)&x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = -15;
	volatile int16_t x275 = INT16_MIN;
	volatile uint64_t t68 = 374859LLU;

	t68 = (x273*((x274==x275)&x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 48522367026550LLU;
	uint8_t x278 = 3U;
	int64_t x280 = INT64_MAX;
	static uint64_t t69 = 62892LLU;

	t69 = (x277*((x278==x279)&x280));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 7398350U;
	static uint32_t x282 = 3072U;
	static volatile int16_t x284 = INT16_MAX;
	uint32_t t70 = 1730U;

	t70 = (x281*((x282==x283)&x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	static uint64_t x287 = 79926806LLU;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t71 = 281601039;

	t71 = (x285*((x286==x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 1U;
	static int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MIN;
	int8_t x292 = 11;
	int32_t t72 = -10315;

	t72 = (x289*((x290==x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 18U;
	static int8_t x294 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -796369;

	t73 = (x293*((x294==x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x299 = UINT16_MAX;
	int32_t x300 = 203560120;
	volatile uint64_t t74 = 185413705309557LLU;

	t74 = (x297*((x298==x299)&x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = -1LL;
	int16_t x303 = -67;
	int32_t x304 = -1;
	static int32_t t75 = -518114894;

	t75 = (x301*((x302==x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -3;
	int32_t x306 = -1;
	int64_t x307 = -10193148LL;
	static int32_t x308 = INT32_MIN;

	t76 = (x305*((x306==x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int64_t x310 = -1LL;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t77 = 14526201U;

	t77 = (x309*((x310==x311)&x312));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 246793LLU;
	int16_t x315 = INT16_MIN;
	static volatile int32_t x316 = -1;
	volatile uint32_t t78 = 48U;

	t78 = (x313*((x314==x315)&x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	uint16_t x319 = 1U;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 494;

	t79 = (x317*((x318==x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x322 = 5372062LLU;
	uint16_t x323 = 46U;
	uint64_t x324 = UINT64_MAX;
	uint64_t t80 = 1639141640661LLU;

	t80 = (x321*((x322==x323)&x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	static int32_t x326 = INT32_MIN;
	volatile int32_t x327 = -446;
	uint64_t t81 = 489791LLU;

	t81 = (x325*((x326==x327)&x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int8_t x330 = -1;
	volatile uint8_t x331 = UINT8_MAX;
	int32_t x332 = INT32_MAX;
	volatile int32_t t82 = -513364;

	t82 = (x329*((x330==x331)&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 252;
	static int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	static volatile int32_t x336 = -1;
	int32_t t83 = -241381412;

	t83 = (x333*((x334==x335)&x336));

	if (t83 != 252) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	volatile int8_t x339 = INT8_MIN;
	int64_t x340 = 27894651LL;
	volatile int64_t t84 = 29023029LL;

	t84 = (x337*((x338==x339)&x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MIN;
	int8_t x343 = 4;
	uint32_t x344 = 658857182U;
	volatile int64_t t85 = 46487095604871LL;

	t85 = (x341*((x342==x343)&x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = UINT32_MAX;
	int32_t x346 = -2222;
	static int16_t x347 = -10;
	static int16_t x348 = INT16_MIN;
	uint32_t t86 = 6788065U;

	t86 = (x345*((x346==x347)&x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	static volatile int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MAX;
	volatile int32_t t87 = 3052;

	t87 = (x349*((x350==x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = UINT16_MAX;
	int64_t x354 = -1343559401001927LL;
	volatile int16_t x355 = INT16_MAX;
	uint8_t x356 = 37U;
	static volatile int32_t t88 = -35269428;

	t88 = (x353*((x354==x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t89 = 5555970;

	t89 = (x357*((x358==x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = UINT16_MAX;
	int16_t x362 = -1;
	static int16_t x363 = INT16_MAX;
	volatile int64_t x364 = INT64_MIN;

	t90 = (x361*((x362==x363)&x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = INT8_MIN;
	int64_t x368 = 182355916826LL;
	int64_t t91 = -6LL;

	t91 = (x365*((x366==x367)&x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 230381161LLU;
	int16_t x370 = INT16_MIN;
	volatile int16_t x371 = INT16_MIN;
	int64_t x372 = -1LL;
	uint64_t t92 = 384166LLU;

	t92 = (x369*((x370==x371)&x372));

	if (t92 != 230381161LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MIN;
	static int32_t x376 = -5;
	volatile int64_t t93 = 1522518640LL;

	t93 = (x373*((x374==x375)&x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 236652849U;
	static uint8_t x379 = 27U;
	volatile int8_t x380 = 0;
	uint32_t t94 = 14U;

	t94 = (x377*((x378==x379)&x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 3;
	int64_t x382 = INT64_MIN;
	int8_t x383 = 12;
	static volatile int16_t x384 = 207;
	static volatile int32_t t95 = 15272940;

	t95 = (x381*((x382==x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	volatile int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 16648516;

	t96 = (x385*((x386==x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = -1;
	uint16_t x390 = 1U;
	static int16_t x391 = -1;

	t97 = (x389*((x390==x391)&x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -1;
	static int32_t x394 = -1;
	static volatile int16_t x395 = INT16_MIN;
	uint16_t x396 = UINT16_MAX;
	int32_t t98 = -612;

	t98 = (x393*((x394==x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MAX;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MAX;
	volatile int16_t x400 = 173;
	static volatile int32_t t99 = -2;

	t99 = (x397*((x398==x399)&x400));

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

