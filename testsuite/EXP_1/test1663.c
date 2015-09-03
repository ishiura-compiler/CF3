#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
static volatile int32_t t0 = INT32_MIN;
uint64_t x11 = UINT64_MAX;
volatile uint64_t x16 = 6412920625LLU;
int32_t x18 = -448;
uint64_t x24 = UINT64_MAX;
uint64_t x25 = 1660591980966801765LLU;
int32_t x29 = INT32_MIN;
uint32_t x33 = 8378702U;
int32_t x35 = INT32_MIN;
uint8_t x36 = UINT8_MAX;
uint32_t x39 = 478U;
int32_t x54 = INT32_MIN;
volatile int32_t x56 = 1;
volatile uint8_t x60 = 1U;
int64_t x61 = -1253596716LL;
uint64_t x68 = 141LLU;
uint64_t t16 = 1101104721793997LLU;
uint32_t x72 = UINT32_MAX;
uint64_t x75 = 13LLU;
static int8_t x83 = INT8_MAX;
uint64_t x98 = 4459705LLU;
int64_t x101 = -3444451324090418LL;
int16_t x103 = INT16_MIN;
volatile int32_t t25 = 91086;
static volatile uint32_t x106 = 433962409U;
volatile int32_t t26 = 3101117;
uint32_t x113 = 121912094U;
static uint32_t x115 = 873693185U;
uint64_t x116 = 191436LLU;
int32_t x118 = INT32_MIN;
uint8_t x119 = 1U;
uint32_t t29 = UINT32_MAX;
int64_t x136 = -1LL;
int32_t x144 = -200804941;
int16_t x152 = INT16_MIN;
int32_t t37 = 723033048;
uint8_t x153 = 1U;
int64_t x166 = INT64_MIN;
uint16_t x170 = UINT16_MAX;
static uint8_t x172 = 3U;
uint8_t x179 = 105U;
static int64_t x182 = INT64_MAX;
int16_t x185 = INT16_MIN;
int8_t x187 = -3;
volatile int64_t x194 = -54LL;
uint16_t x195 = 60U;
static uint32_t t48 = UINT32_MAX;
volatile int8_t x198 = INT8_MIN;
int8_t x204 = -2;
uint64_t x209 = UINT64_MAX;
volatile uint8_t x211 = 12U;
static int32_t t52 = 2006374;
volatile int16_t x213 = INT16_MAX;
static int64_t x221 = -1LL;
uint16_t x222 = UINT16_MAX;
int16_t x228 = 0;
static int8_t x234 = -1;
uint16_t x235 = 6U;
static volatile uint32_t t58 = 1642377U;
int64_t x242 = -1LL;
uint32_t x247 = 9307U;
uint32_t t61 = 34U;
int8_t x252 = 15;
int32_t x263 = INT32_MIN;
uint64_t x269 = UINT64_MAX;
int8_t x277 = INT8_MIN;
volatile int8_t x278 = 10;
int32_t x280 = INT32_MAX;
volatile int32_t t69 = INT32_MAX;
int8_t x292 = INT8_MIN;
static int8_t x297 = INT8_MIN;
static uint64_t x303 = 43520LLU;
static volatile int16_t x305 = INT16_MIN;
int32_t x307 = -1;
uint32_t t76 = 31043U;
int8_t x311 = INT8_MAX;
int32_t x312 = -679657176;
int16_t x313 = INT16_MIN;
uint64_t x319 = 33965606866087LLU;
static uint64_t t79 = 1360160487816LLU;
uint8_t x321 = 78U;
int32_t x336 = INT32_MAX;
static uint8_t x340 = 26U;
static int32_t x341 = 3484;
int32_t x344 = 222387697;
volatile int32_t t86 = 1391948;
uint16_t x351 = 5U;
volatile int32_t x352 = 24583;
static uint32_t x354 = 11790U;
volatile int16_t x355 = -1;
volatile int64_t x358 = -1093945451620LL;
uint32_t x359 = UINT32_MAX;
static volatile int64_t x360 = INT64_MIN;
static int16_t x371 = INT16_MIN;
int64_t x372 = 238201LL;
volatile int64_t t93 = 45625LL;
int64_t x378 = 604341638301LL;
uint8_t x384 = UINT8_MAX;
volatile uint32_t x385 = UINT32_MAX;
int16_t x386 = INT16_MIN;
static uint64_t x389 = UINT64_MAX;
static int8_t x395 = INT8_MAX;
volatile int32_t t98 = 3754;
int16_t x399 = INT16_MIN;


void f0(void) {
	volatile int32_t x1 = -12;
	int8_t x2 = INT8_MIN;
	int32_t x4 = INT32_MIN;

	t0 = (((x1<=x2)&x3)|x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	uint32_t x6 = UINT32_MAX;
	static int16_t x7 = 4761;
	uint32_t x8 = 96U;
	volatile uint32_t t1 = 1481407305U;

	t1 = (((x5<=x6)&x7)|x8);

	if (t1 != 97U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	uint32_t x10 = 56U;
	static uint16_t x12 = 1337U;
	uint64_t t2 = 925555376379LLU;

	t2 = (((x9<=x10)&x11)|x12);

	if (t2 != 1337LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = UINT8_MAX;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint64_t t3 = 29LLU;

	t3 = (((x13<=x14)&x15)|x16);

	if (t3 != 6412920625LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t x19 = -56832732196640LL;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = INT64_MAX;

	t4 = (((x17<=x18)&x19)|x20);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	int8_t x23 = -1;
	uint64_t t5 = UINT64_MAX;

	t5 = (((x21<=x22)&x23)|x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = INT32_MIN;
	int64_t x27 = -34155474828850712LL;
	int16_t x28 = -1;
	static volatile int64_t t6 = -26226LL;

	t6 = (((x25<=x26)&x27)|x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int8_t x31 = 1;
	int8_t x32 = -1;
	volatile int32_t t7 = 92715527;

	t7 = (((x29<=x30)&x31)|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	int32_t t8 = 3524372;

	t8 = (((x33<=x34)&x35)|x36);

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 709U;
	uint16_t x38 = 1U;
	volatile uint64_t x40 = UINT64_MAX;
	uint64_t t9 = UINT64_MAX;

	t9 = (((x37<=x38)&x39)|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int16_t x42 = 53;
	uint64_t x43 = 0LLU;
	static uint16_t x44 = 59U;
	static uint64_t t10 = 1438037607187LLU;

	t10 = (((x41<=x42)&x43)|x44);

	if (t10 != 59LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 6U;
	uint64_t x46 = UINT64_MAX;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 119;

	t11 = (((x45<=x46)&x47)|x48);

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x49 = 460372737334LLU;
	int16_t x50 = 3;
	int16_t x51 = -1;
	int64_t x52 = 4464855646LL;
	volatile int64_t t12 = -540760062458317LL;

	t12 = (((x49<=x50)&x51)|x52);

	if (t12 != 4464855646LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -392LL;
	int8_t x55 = 3;
	int32_t t13 = 10250140;

	t13 = (((x53<=x54)&x55)|x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = UINT64_MAX;
	volatile uint16_t x58 = 7U;
	volatile int32_t x59 = INT32_MAX;
	static volatile int32_t t14 = -20899187;

	t14 = (((x57<=x58)&x59)|x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x62 = INT8_MAX;
	int8_t x63 = -1;
	volatile int16_t x64 = -1;
	volatile int32_t t15 = 1;

	t15 = (((x61<=x62)&x63)|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint64_t x66 = 1999156LLU;
	int32_t x67 = -5;

	t16 = (((x65<=x66)&x67)|x68);

	if (t16 != 141LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -28;
	uint32_t x70 = 2648U;
	static int8_t x71 = 11;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (((x69<=x70)&x71)|x72);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1366111LL;
	uint32_t x74 = UINT32_MAX;
	int64_t x76 = 63276096101LL;
	uint64_t t18 = 4705956812130649LLU;

	t18 = (((x73<=x74)&x75)|x76);

	if (t18 != 63276096101LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int8_t x78 = INT8_MIN;
	int64_t x79 = 1064480153163LL;
	uint32_t x80 = 987568U;
	volatile int64_t t19 = 169202956120631674LL;

	t19 = (((x77<=x78)&x79)|x80);

	if (t19 != 987568LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 981316195U;
	int16_t x82 = -3013;
	volatile int32_t x84 = -29191882;
	static volatile int32_t t20 = -349902227;

	t20 = (((x81<=x82)&x83)|x84);

	if (t20 != -29191881) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static int16_t x86 = -1;
	volatile uint64_t x87 = UINT64_MAX;
	volatile uint32_t x88 = 146533555U;
	static uint64_t t21 = 39125815067136659LLU;

	t21 = (((x85<=x86)&x87)|x88);

	if (t21 != 146533555LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = -1;
	uint8_t x90 = 2U;
	static int16_t x91 = 3;
	volatile int8_t x92 = -1;
	volatile int32_t t22 = 13613524;

	t22 = (((x89<=x90)&x91)|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 17041744295126LLU;
	static volatile int8_t x94 = -1;
	int64_t x95 = 322196469487945159LL;
	static volatile uint16_t x96 = UINT16_MAX;
	int64_t t23 = -3287287096758LL;

	t23 = (((x93<=x94)&x95)|x96);

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint64_t x99 = 13LLU;
	static int64_t x100 = INT64_MAX;
	uint64_t t24 = 54LLU;

	t24 = (((x97<=x98)&x99)|x100);

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x102 = 16U;
	int8_t x104 = 6;

	t25 = (((x101<=x102)&x103)|x104);

	if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	int16_t x107 = INT16_MAX;
	int8_t x108 = -1;

	t26 = (((x105<=x106)&x107)|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 2181U;
	int64_t x110 = 176149966LL;
	volatile int16_t x111 = INT16_MAX;
	int64_t x112 = -1LL;
	static int64_t t27 = -451166549594027913LL;

	t27 = (((x109<=x110)&x111)|x112);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MAX;
	volatile uint64_t t28 = 211096888861905LLU;

	t28 = (((x113<=x114)&x115)|x116);

	if (t28 != 191436LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -14;
	uint32_t x120 = UINT32_MAX;

	t29 = (((x117<=x118)&x119)|x120);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -111520595076LL;
	volatile uint8_t x122 = 61U;
	uint16_t x123 = 0U;
	int64_t x124 = INT64_MAX;
	volatile int64_t t30 = INT64_MAX;

	t30 = (((x121<=x122)&x123)|x124);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = 4250;
	uint8_t x126 = 21U;
	volatile int64_t x127 = INT64_MIN;
	static uint32_t x128 = 26U;
	int64_t t31 = -1944LL;

	t31 = (((x125<=x126)&x127)|x128);

	if (t31 != 26LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	volatile uint8_t x130 = 28U;
	static int16_t x131 = INT16_MAX;
	uint16_t x132 = 1201U;
	int32_t t32 = 2432931;

	t32 = (((x129<=x130)&x131)|x132);

	if (t32 != 1201) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 2U;
	int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MAX;
	volatile int64_t t33 = 32279133501LL;

	t33 = (((x133<=x134)&x135)|x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -31;
	int32_t x138 = 0;
	uint64_t x139 = UINT64_MAX;
	int64_t x140 = -1LL;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (((x137<=x138)&x139)|x140);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	uint16_t x142 = 494U;
	volatile int64_t x143 = 2LL;
	int64_t t35 = 62017928103LL;

	t35 = (((x141<=x142)&x143)|x144);

	if (t35 != -200804941LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 94U;
	volatile uint64_t x146 = 71LLU;
	uint64_t x147 = 245323315677634935LLU;
	volatile uint64_t x148 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = (((x145<=x146)&x147)|x148);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = 1996082821965LL;
	volatile int64_t x150 = -1LL;
	int32_t x151 = 61;

	t37 = (((x149<=x150)&x151)|x152);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	int32_t x155 = 555323538;
	static volatile uint32_t x156 = UINT32_MAX;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = (((x153<=x154)&x155)|x156);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 37U;
	int64_t x158 = 30510839304LL;
	volatile int64_t x159 = -1LL;
	int64_t x160 = INT64_MIN;
	int64_t t39 = -178611154459632LL;

	t39 = (((x157<=x158)&x159)|x160);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	uint8_t x162 = 50U;
	uint16_t x163 = UINT16_MAX;
	uint32_t x164 = 10071U;
	uint32_t t40 = 8U;

	t40 = (((x161<=x162)&x163)|x164);

	if (t40 != 10071U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 49114379331123LLU;
	int8_t x167 = 17;
	int16_t x168 = INT16_MAX;
	static int32_t t41 = 1;

	t41 = (((x165<=x166)&x167)|x168);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x171 = INT32_MIN;
	volatile int32_t t42 = -467247;

	t42 = (((x169<=x170)&x171)|x172);

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	volatile int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 0U;
	volatile int64_t t43 = -2763056130632LL;

	t43 = (((x173<=x174)&x175)|x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 20U;
	int16_t x178 = 6776;
	volatile int16_t x180 = INT16_MIN;
	int32_t t44 = -96087;

	t44 = (((x177<=x178)&x179)|x180);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	int32_t x183 = 5297931;
	volatile int32_t x184 = -1;
	volatile int32_t t45 = 912;

	t45 = (((x181<=x182)&x183)|x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = UINT32_MAX;
	uint32_t x188 = 7U;
	uint32_t t46 = 3527U;

	t46 = (((x185<=x186)&x187)|x188);

	if (t46 != 7U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = -1;
	volatile uint16_t x190 = 14169U;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	static int64_t t47 = 224373LL;

	t47 = (((x189<=x190)&x191)|x192);

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = -19;
	uint32_t x196 = UINT32_MAX;

	t48 = (((x193<=x194)&x195)|x196);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int32_t x199 = -1;
	uint64_t x200 = UINT64_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = (((x197<=x198)&x199)|x200);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -2;
	int32_t x202 = 0;
	int64_t x203 = -1LL;
	volatile int64_t t50 = 3598647016821155789LL;

	t50 = (((x201<=x202)&x203)|x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile int16_t x206 = -12717;
	int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = (((x205<=x206)&x207)|x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x210 = -1;
	static int16_t x212 = INT16_MIN;

	t52 = (((x209<=x210)&x211)|x212);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = 5U;
	int64_t x215 = INT64_MAX;
	static int32_t x216 = INT32_MAX;
	volatile int64_t t53 = 329502978565194038LL;

	t53 = (((x213<=x214)&x215)|x216);

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static int16_t x218 = -243;
	volatile int8_t x219 = 1;
	uint8_t x220 = 11U;
	int32_t t54 = 3;

	t54 = (((x217<=x218)&x219)|x220);

	if (t54 != 11) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x223 = INT32_MIN;
	int32_t x224 = -22;
	int32_t t55 = 1148;

	t55 = (((x221<=x222)&x223)|x224);

	if (t55 != -22) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int8_t x226 = 0;
	uint64_t x227 = 645897855LLU;
	uint64_t t56 = 200LLU;

	t56 = (((x225<=x226)&x227)|x228);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MIN;
	int64_t t57 = INT64_MIN;

	t57 = (((x229<=x230)&x231)|x232);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 3627;
	uint32_t x236 = 91U;

	t58 = (((x233<=x234)&x235)|x236);

	if (t58 != 91U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = -360;
	volatile uint16_t x239 = 39U;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -18;

	t59 = (((x237<=x238)&x239)|x240);

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 1122LLU;
	volatile int8_t x243 = 15;
	int32_t x244 = INT32_MAX;
	volatile int32_t t60 = INT32_MAX;

	t60 = (((x241<=x242)&x243)|x244);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MIN;
	uint8_t x248 = 2U;

	t61 = (((x245<=x246)&x247)|x248);

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 33U;
	uint16_t x250 = 2U;
	int8_t x251 = INT8_MIN;
	int32_t t62 = 121596090;

	t62 = (((x249<=x250)&x251)|x252);

	if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = 126U;
	uint64_t x254 = 481307000887165765LLU;
	uint64_t x255 = UINT64_MAX;
	uint64_t x256 = UINT64_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = (((x253<=x254)&x255)|x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = 834590150LL;
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MAX;
	static uint64_t x260 = 609714LLU;
	volatile uint64_t t64 = 1750LLU;

	t64 = (((x257<=x258)&x259)|x260);

	if (t64 != 609714LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = -1;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 229194;

	t65 = (((x261<=x262)&x263)|x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile uint16_t x266 = UINT16_MAX;
	uint16_t x267 = UINT16_MAX;
	volatile int32_t x268 = INT32_MIN;
	static int32_t t66 = -37316888;

	t66 = (((x265<=x266)&x267)|x268);

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x270 = 1;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = 1234;
	volatile uint32_t t67 = 6489U;

	t67 = (((x269<=x270)&x271)|x272);

	if (t67 != 1234U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	static volatile uint8_t x274 = 15U;
	static int32_t x275 = INT32_MIN;
	static int32_t x276 = INT32_MAX;
	int32_t t68 = INT32_MAX;

	t68 = (((x273<=x274)&x275)|x276);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x279 = -1;

	t69 = (((x277<=x278)&x279)|x280);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 7U;
	uint16_t x282 = 14921U;
	uint64_t x283 = 1LLU;
	volatile int8_t x284 = -1;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x281<=x282)&x283)|x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	volatile uint16_t x286 = 9386U;
	int64_t x287 = -1LL;
	volatile int16_t x288 = -1;
	int64_t t71 = -6625LL;

	t71 = (((x285<=x286)&x287)|x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	static uint16_t x290 = 235U;
	int32_t x291 = 47846;
	int32_t t72 = 57;

	t72 = (((x289<=x290)&x291)|x292);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = -844;
	volatile int64_t x294 = INT64_MAX;
	int32_t x295 = 727699;
	int8_t x296 = INT8_MAX;
	int32_t t73 = 7;

	t73 = (((x293<=x294)&x295)|x296);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MIN;
	volatile int64_t x299 = -69498040558245LL;
	volatile int64_t x300 = -270LL;
	volatile int64_t t74 = 2LL;

	t74 = (((x297<=x298)&x299)|x300);

	if (t74 != -269LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 64396506U;
	uint8_t x302 = 16U;
	int64_t x304 = 22458011746LL;
	volatile uint64_t t75 = 5486112LLU;

	t75 = (((x301<=x302)&x303)|x304);

	if (t75 != 22458011746LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	uint32_t x308 = 4U;

	t76 = (((x305<=x306)&x307)|x308);

	if (t76 != 5U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x309 = 864;
	int32_t x310 = -19;
	volatile int32_t t77 = -2316;

	t77 = (((x309<=x310)&x311)|x312);

	if (t77 != -679657176) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -436227;
	int32_t x315 = 1;
	uint8_t x316 = 1U;
	int32_t t78 = 1;

	t78 = (((x313<=x314)&x315)|x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MIN;
	uint32_t x318 = 723147493U;
	volatile uint8_t x320 = UINT8_MAX;

	t79 = (((x317<=x318)&x319)|x320);

	if (t79 != 255LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = -240180;
	int64_t x323 = INT64_MIN;
	int16_t x324 = 2056;
	volatile int64_t t80 = -10LL;

	t80 = (((x321<=x322)&x323)|x324);

	if (t80 != 2056LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	volatile int8_t x326 = INT8_MIN;
	static uint8_t x327 = 41U;
	volatile uint32_t x328 = 36742910U;
	volatile uint32_t t81 = 109U;

	t81 = (((x325<=x326)&x327)|x328);

	if (t81 != 36742910U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	volatile int16_t x330 = -689;
	uint8_t x331 = 1U;
	static uint32_t x332 = 12534U;
	volatile uint32_t t82 = 19U;

	t82 = (((x329<=x330)&x331)|x332);

	if (t82 != 12535U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	static volatile int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	int32_t t83 = INT32_MAX;

	t83 = (((x333<=x334)&x335)|x336);

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = -1;
	volatile int32_t x338 = -791216;
	uint64_t x339 = UINT64_MAX;
	uint64_t t84 = 163305590LLU;

	t84 = (((x337<=x338)&x339)|x340);

	if (t84 != 26LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x342 = UINT64_MAX;
	int16_t x343 = INT16_MIN;
	int32_t t85 = 42;

	t85 = (((x341<=x342)&x343)|x344);

	if (t85 != 222387697) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MAX;
	int8_t x346 = -1;
	int8_t x347 = 1;
	int16_t x348 = -1;

	t86 = (((x345<=x346)&x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 15U;
	int32_t x350 = 310761;
	static volatile int32_t t87 = -3507;

	t87 = (((x349<=x350)&x351)|x352);

	if (t87 != 24583) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MAX;
	int32_t x356 = -843847168;
	volatile int32_t t88 = 118368768;

	t88 = (((x353<=x354)&x355)|x356);

	if (t88 != -843847168) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	static int64_t t89 = INT64_MIN;

	t89 = (((x357<=x358)&x359)|x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	static volatile uint32_t x362 = 3715874U;
	int16_t x363 = INT16_MIN;
	static int8_t x364 = INT8_MIN;
	int32_t t90 = -4;

	t90 = (((x361<=x362)&x363)|x364);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	volatile int8_t x366 = INT8_MIN;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MAX;
	volatile int32_t t91 = INT32_MAX;

	t91 = (((x365<=x366)&x367)|x368);

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x369 = INT32_MIN;
	int64_t x370 = -1LL;
	volatile int64_t t92 = -32011082866LL;

	t92 = (((x369<=x370)&x371)|x372);

	if (t92 != 238201LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MIN;
	int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;

	t93 = (((x373<=x374)&x375)|x376);

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 9037U;
	int16_t x379 = INT16_MAX;
	int16_t x380 = 2422;
	int32_t t94 = 2472885;

	t94 = (((x377<=x378)&x379)|x380);

	if (t94 != 2423) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	uint8_t x382 = 31U;
	int16_t x383 = INT16_MIN;
	volatile int32_t t95 = 32039816;

	t95 = (((x381<=x382)&x383)|x384);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MAX;
	int32_t t96 = 49482;

	t96 = (((x385<=x386)&x387)|x388);

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MIN;
	int8_t x391 = -14;
	uint32_t x392 = UINT32_MAX;
	uint32_t t97 = UINT32_MAX;

	t97 = (((x389<=x390)&x391)|x392);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	int16_t x396 = INT16_MIN;

	t98 = (((x393<=x394)&x395)|x396);

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 56U;
	volatile int8_t x398 = INT8_MIN;
	uint8_t x400 = 17U;
	volatile int32_t t99 = -12;

	t99 = (((x397<=x398)&x399)|x400);

	if (t99 != 17) { NG(); } else { ; }
	
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

