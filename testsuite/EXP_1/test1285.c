#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MIN;
int8_t x5 = 13;
int8_t x7 = -1;
uint32_t x8 = 7202U;
uint32_t t1 = 1215U;
int32_t t2 = 166176;
int16_t x20 = INT16_MIN;
static volatile int32_t t6 = -7405;
volatile uint16_t x45 = 34U;
int8_t x50 = -1;
int32_t x55 = -1;
int32_t t13 = 15818116;
int64_t x57 = 117427LL;
volatile int32_t x67 = 25940;
volatile int32_t t16 = -241;
int64_t x73 = INT64_MIN;
int64_t t19 = -15943972LL;
int32_t t21 = 691;
int64_t x90 = -1LL;
int64_t t22 = 75522111LL;
static int64_t x94 = INT64_MIN;
volatile int32_t t23 = 58366875;
int16_t x107 = INT16_MIN;
uint64_t t26 = 28585LLU;
volatile int32_t x111 = INT32_MIN;
static volatile int16_t x116 = -1;
int16_t x118 = INT16_MIN;
uint64_t x126 = 286550440546626LLU;
int64_t x129 = INT64_MAX;
int8_t x132 = INT8_MIN;
volatile int32_t t32 = 583698501;
uint32_t x135 = UINT32_MAX;
volatile int64_t x136 = -1LL;
int8_t x137 = INT8_MIN;
static uint8_t x141 = UINT8_MAX;
uint64_t t35 = 27578252045340507LLU;
int8_t x147 = 2;
uint16_t x149 = 1405U;
int8_t x153 = -36;
uint16_t x157 = 3U;
static volatile uint64_t t39 = 65LLU;
uint64_t x161 = 3818LLU;
int32_t t40 = -121;
uint16_t x165 = UINT16_MAX;
int64_t x170 = -1LL;
volatile int64_t t42 = -53731LL;
static int16_t x175 = INT16_MAX;
int32_t x176 = 1;
int32_t t43 = -3581033;
int32_t x177 = INT32_MIN;
int64_t t45 = 35092721466970870LL;
static uint8_t x187 = 28U;
volatile int16_t x190 = INT16_MAX;
static int32_t x195 = INT32_MIN;
uint32_t x199 = UINT32_MAX;
uint8_t x201 = UINT8_MAX;
static uint16_t x207 = UINT16_MAX;
int8_t x210 = -6;
int16_t x211 = -1;
int32_t x213 = 302915;
uint8_t x214 = 48U;
int64_t x223 = 1LL;
static volatile int16_t x224 = INT16_MIN;
int32_t t56 = -2359;
int8_t x229 = INT8_MIN;
int32_t x231 = 8027;
int8_t x232 = -1;
int32_t x243 = INT32_MAX;
static uint8_t x249 = 55U;
int64_t x250 = -1LL;
uint16_t x255 = UINT16_MAX;
static int32_t x260 = -1;
int32_t t64 = -508;
int32_t x265 = -1;
static volatile int16_t x267 = INT16_MIN;
static volatile int32_t t66 = 16405202;
volatile int64_t t67 = 759000LL;
static int32_t t69 = 814;
int8_t x288 = INT8_MIN;
static volatile int32_t t72 = -970594;
static uint8_t x293 = UINT8_MAX;
uint16_t x294 = 355U;
uint32_t x298 = 1391017U;
int8_t x300 = -1;
int32_t t74 = -1711;
int8_t x304 = INT8_MIN;
static volatile uint32_t x306 = 35784351U;
volatile int16_t x313 = INT16_MIN;
static volatile uint16_t x315 = 0U;
static volatile int16_t x326 = 179;
int8_t x327 = 0;
static int64_t x333 = 13239854LL;
int8_t x336 = -26;
int16_t x341 = 4;
uint16_t x344 = UINT16_MAX;
int8_t x345 = -1;
uint64_t x347 = 5669859766034453LLU;
volatile int64_t x348 = -256564447996603LL;
uint64_t x357 = 124905584614858LLU;
uint8_t x359 = 0U;
volatile uint32_t t89 = 119423U;
int8_t x363 = -1;
uint8_t x365 = UINT8_MAX;
int32_t t91 = -3;
uint64_t x372 = UINT64_MAX;
int32_t x373 = 4154;
volatile int32_t t93 = -27;
volatile int8_t x379 = INT8_MAX;
int8_t x381 = -1;
static int8_t x384 = -1;
int32_t x390 = -1;
int8_t x398 = -1;


void f0(void) {
	static uint64_t x1 = 1728103818LLU;
	uint64_t x3 = 427766159946LLU;
	int32_t x4 = INT32_MAX;
	static volatile int32_t t0 = -104789053;

	t0 = (((x1==x2)==x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x6 = UINT8_MAX;

	t1 = (((x5==x6)==x7)&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int8_t x10 = INT8_MAX;
	int64_t x11 = -153977654LL;
	static int32_t x12 = 110;

	t2 = (((x9==x10)==x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -524984335478859735LL;
	static uint64_t x14 = 6LLU;
	static int64_t x15 = INT64_MIN;
	static int8_t x16 = -1;
	volatile int32_t t3 = 40595298;

	t3 = (((x13==x14)==x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MAX;
	int64_t x19 = INT64_MAX;
	volatile int32_t t4 = -2488965;

	t4 = (((x17==x18)==x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	uint8_t x22 = 10U;
	int32_t x23 = INT32_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 857;

	t5 = (((x21==x22)==x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	uint8_t x26 = UINT8_MAX;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = -1;

	t6 = (((x25==x26)==x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = -80;
	int64_t x30 = 41401LL;
	volatile int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = 0;

	t7 = (((x29==x30)==x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -62;
	int16_t x34 = -1;
	static int16_t x35 = -1;
	static int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = 1838;

	t8 = (((x33==x34)==x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1960196393589276047LL;
	int16_t x38 = -3;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = INT16_MAX;
	static int32_t t9 = 3545553;

	t9 = (((x37==x38)==x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 5212033U;
	volatile int32_t x42 = INT32_MIN;
	uint32_t x43 = UINT32_MAX;
	volatile uint16_t x44 = 14168U;
	int32_t t10 = 3;

	t10 = (((x41==x42)==x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x46 = 1U;
	int8_t x47 = 3;
	uint16_t x48 = 279U;
	int32_t t11 = 1782;

	t11 = (((x45==x46)==x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	uint8_t x51 = 119U;
	uint16_t x52 = 13177U;
	volatile int32_t t12 = -6;

	t12 = (((x49==x50)==x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 8001;
	int8_t x54 = INT8_MAX;
	uint8_t x56 = 6U;

	t13 = (((x53==x54)==x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	volatile int8_t x59 = -1;
	uint16_t x60 = 17226U;
	int32_t t14 = -60866;

	t14 = (((x57==x58)==x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = INT8_MIN;
	volatile int8_t x62 = INT8_MAX;
	int32_t x63 = 6880075;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 71345669;

	t15 = (((x61==x62)==x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint32_t x66 = 460748048U;
	int32_t x68 = 458634;

	t16 = (((x65==x66)==x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static uint32_t x70 = UINT32_MAX;
	uint8_t x71 = UINT8_MAX;
	static volatile int8_t x72 = 48;
	static int32_t t17 = -6117;

	t17 = (((x69==x70)==x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -1LL;
	static volatile int16_t x75 = 6909;
	int32_t x76 = -519089;
	int32_t t18 = -3305;

	t18 = (((x73==x74)==x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 15U;
	int32_t x78 = INT32_MIN;
	volatile int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MIN;

	t19 = (((x77==x78)==x79)&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = -124016544LL;
	static uint8_t x83 = 9U;
	int32_t x84 = INT32_MIN;
	int32_t t20 = 941292;

	t20 = (((x81==x82)==x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -31;
	int8_t x86 = 1;
	uint64_t x87 = 1177LLU;
	int32_t x88 = 1;

	t21 = (((x85==x86)==x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x91 = INT8_MAX;
	int64_t x92 = -1894809117584501LL;

	t22 = (((x89==x90)==x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile uint64_t x95 = 32825133650LLU;
	int8_t x96 = INT8_MIN;

	t23 = (((x93==x94)==x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 38266LLU;
	uint64_t x98 = 3787824139347575736LLU;
	static int32_t x99 = -1;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 58331;

	t24 = (((x97==x98)==x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1023LL;
	static int8_t x102 = INT8_MIN;
	int8_t x103 = -1;
	static uint16_t x104 = 3U;
	int32_t t25 = 6;

	t25 = (((x101==x102)==x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -27;
	int32_t x106 = INT32_MIN;
	volatile uint64_t x108 = 2LLU;

	t26 = (((x105==x106)==x107)&x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 0;
	volatile int8_t x110 = 7;
	uint8_t x112 = 7U;
	volatile int32_t t27 = 326115;

	t27 = (((x109==x110)==x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int32_t x114 = 31562630;
	volatile uint16_t x115 = UINT16_MAX;
	volatile int32_t t28 = 368319500;

	t28 = (((x113==x114)==x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 341;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -11861090865760LL;

	t29 = (((x117==x118)==x119)&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 800U;
	volatile uint8_t x122 = UINT8_MAX;
	uint8_t x123 = 10U;
	static uint64_t x124 = 5859LLU;
	uint64_t t30 = 43189168380144LLU;

	t30 = (((x121==x122)==x123)&x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -4;
	int8_t x127 = INT8_MIN;
	int64_t x128 = 96919LL;
	int64_t t31 = -75751386200132LL;

	t31 = (((x125==x126)==x127)&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 20407U;
	volatile uint32_t x131 = 1623U;

	t32 = (((x129==x130)==x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MAX;
	int64_t t33 = 451043425LL;

	t33 = (((x133==x134)==x135)&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = 2;
	volatile uint32_t x139 = 3929244U;
	int16_t x140 = -1;
	volatile int32_t t34 = 20530;

	t34 = (((x137==x138)==x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = -1;
	volatile int32_t x143 = INT32_MIN;
	static uint64_t x144 = 419449451411872812LLU;

	t35 = (((x141==x142)==x143)&x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	uint64_t x146 = UINT64_MAX;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -17169126;

	t36 = (((x145==x146)==x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 2U;
	int8_t x151 = INT8_MAX;
	static int64_t x152 = 1LL;
	volatile int64_t t37 = -4228LL;

	t37 = (((x149==x150)==x151)&x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 15U;
	static volatile int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	int64_t t38 = -177928LL;

	t38 = (((x153==x154)==x155)&x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = 1442;
	int16_t x159 = -3;
	static uint64_t x160 = 316073403805LLU;

	t39 = (((x157==x158)==x159)&x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x162 = -1;
	uint32_t x163 = UINT32_MAX;
	int8_t x164 = INT8_MAX;

	t40 = (((x161==x162)==x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x166 = UINT32_MAX;
	int8_t x167 = INT8_MAX;
	static int16_t x168 = INT16_MAX;
	int32_t t41 = -1481;

	t41 = (((x165==x166)==x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 1166;
	int16_t x171 = -1;
	static int64_t x172 = INT64_MIN;

	t42 = (((x169==x170)==x171)&x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	static int64_t x174 = INT64_MAX;

	t43 = (((x173==x174)==x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -54;
	uint8_t x179 = 22U;
	uint16_t x180 = UINT16_MAX;
	int32_t t44 = 82380198;

	t44 = (((x177==x178)==x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 34U;
	volatile uint64_t x182 = 1024055294896291LLU;
	int16_t x183 = INT16_MIN;
	static int64_t x184 = INT64_MIN;

	t45 = (((x181==x182)==x183)&x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int64_t x186 = INT64_MIN;
	static int32_t x188 = -1;
	volatile int32_t t46 = -46358;

	t46 = (((x185==x186)==x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	uint32_t x191 = 839047078U;
	int64_t x192 = -6150LL;
	volatile int64_t t47 = 2LL;

	t47 = (((x189==x190)==x191)&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint8_t x194 = UINT8_MAX;
	uint64_t x196 = UINT64_MAX;
	static uint64_t t48 = 145165857643875LLU;

	t48 = (((x193==x194)==x195)&x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	uint16_t x198 = UINT16_MAX;
	uint64_t x200 = 36904533LLU;
	volatile uint64_t t49 = 65LLU;

	t49 = (((x197==x198)==x199)&x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x202 = INT32_MIN;
	static volatile int64_t x203 = 399705253595LL;
	uint64_t x204 = 14656045733148LLU;
	static uint64_t t50 = 458980538685048028LLU;

	t50 = (((x201==x202)==x203)&x204);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MAX;
	int8_t x206 = INT8_MIN;
	static int32_t x208 = INT32_MIN;
	int32_t t51 = 140795;

	t51 = (((x205==x206)==x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	int8_t x212 = -59;
	int32_t t52 = -56013;

	t52 = (((x209==x210)==x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x215 = INT8_MAX;
	int8_t x216 = 1;
	volatile int32_t t53 = 39349861;

	t53 = (((x213==x214)==x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = -1;
	uint16_t x218 = 6419U;
	int64_t x219 = INT64_MIN;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -174161856;

	t54 = (((x217==x218)==x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = UINT32_MAX;
	static uint16_t x222 = UINT16_MAX;
	int32_t t55 = 1119137;

	t55 = (((x221==x222)==x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	volatile uint16_t x227 = 7852U;
	static volatile int16_t x228 = INT16_MAX;

	t56 = (((x225==x226)==x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;
	volatile int32_t t57 = 0;

	t57 = (((x229==x230)==x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	int8_t x234 = INT8_MIN;
	int16_t x235 = -1;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = 582918872309172803LLU;

	t58 = (((x233==x234)==x235)&x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	static volatile int8_t x238 = INT8_MAX;
	int16_t x239 = -1;
	uint8_t x240 = 2U;
	int32_t t59 = 11669;

	t59 = (((x237==x238)==x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 1;
	static uint32_t x242 = 25U;
	uint32_t x244 = UINT32_MAX;
	uint32_t t60 = 1548699873U;

	t60 = (((x241==x242)==x243)&x244);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -14;
	uint32_t x246 = 23U;
	static uint16_t x247 = UINT16_MAX;
	volatile int64_t x248 = INT64_MIN;
	int64_t t61 = 220377537137LL;

	t61 = (((x245==x246)==x247)&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x251 = 3U;
	volatile int64_t x252 = INT64_MIN;
	static int64_t t62 = 1530232LL;

	t62 = (((x249==x250)==x251)&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1995;
	static volatile int16_t x254 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = 43513015525170LL;

	t63 = (((x253==x254)==x255)&x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 7U;

	t64 = (((x257==x258)==x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	static int32_t x262 = -1;
	int8_t x263 = INT8_MIN;
	static volatile uint64_t x264 = 12881216556122LLU;
	static uint64_t t65 = 18081LLU;

	t65 = (((x261==x262)==x263)&x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = UINT8_MAX;
	int32_t x268 = INT32_MIN;

	t66 = (((x265==x266)==x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	volatile uint16_t x270 = 6512U;
	uint64_t x271 = 1297023386314005LLU;
	int64_t x272 = -40278480LL;

	t67 = (((x269==x270)==x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	volatile uint8_t x274 = UINT8_MAX;
	uint32_t x275 = 57U;
	volatile uint16_t x276 = 0U;
	int32_t t68 = -48326731;

	t68 = (((x273==x274)==x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = INT8_MIN;
	static int64_t x278 = INT64_MIN;
	volatile int16_t x279 = INT16_MIN;
	int8_t x280 = -3;

	t69 = (((x277==x278)==x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	volatile uint32_t x282 = UINT32_MAX;
	int16_t x283 = 630;
	int32_t x284 = -114;
	int32_t t70 = 562460;

	t70 = (((x281==x282)==x283)&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	static uint32_t x286 = 107076U;
	int16_t x287 = INT16_MIN;
	volatile int32_t t71 = 459114;

	t71 = (((x285==x286)==x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = 0;
	uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MAX;
	static volatile int32_t x292 = INT32_MIN;

	t72 = (((x289==x290)==x291)&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x295 = 3U;
	static uint32_t x296 = UINT32_MAX;
	uint32_t t73 = 115676U;

	t73 = (((x293==x294)==x295)&x296);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	static int16_t x299 = INT16_MAX;

	t74 = (((x297==x298)==x299)&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	static uint64_t x302 = 2862432873295718LLU;
	uint8_t x303 = 3U;
	int32_t t75 = -519038519;

	t75 = (((x301==x302)==x303)&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	static int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 1027;

	t76 = (((x305==x306)==x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	static int16_t x310 = INT16_MIN;
	static int8_t x311 = 5;
	uint16_t x312 = 27U;
	volatile int32_t t77 = -62041998;

	t77 = (((x309==x310)==x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x314 = INT16_MIN;
	uint16_t x316 = 170U;
	volatile int32_t t78 = 41;

	t78 = (((x313==x314)==x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = -1LL;
	int64_t x318 = -4554738762824082138LL;
	int8_t x319 = INT8_MAX;
	static int16_t x320 = -1;
	static volatile int32_t t79 = 369650841;

	t79 = (((x317==x318)==x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	static uint16_t x323 = 296U;
	static int16_t x324 = -4;
	volatile int32_t t80 = 1537;

	t80 = (((x321==x322)==x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x325 = -1;
	uint16_t x328 = 529U;
	int32_t t81 = -933716597;

	t81 = (((x325==x326)==x327)&x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int8_t x330 = 0;
	int64_t x331 = -1755750401LL;
	int64_t x332 = INT64_MAX;
	static volatile int64_t t82 = -73638LL;

	t82 = (((x329==x330)==x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = UINT32_MAX;
	uint8_t x335 = 1U;
	int32_t t83 = -3;

	t83 = (((x333==x334)==x335)&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MAX;
	uint8_t x339 = 1U;
	volatile uint8_t x340 = 7U;
	int32_t t84 = -127;

	t84 = (((x337==x338)==x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = UINT32_MAX;
	static int8_t x343 = -1;
	int32_t t85 = -3014;

	t85 = (((x341==x342)==x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x346 = INT64_MIN;
	int64_t t86 = 904803441LL;

	t86 = (((x345==x346)==x347)&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x349 = -1;
	static int16_t x350 = INT16_MIN;
	int64_t x351 = -1LL;
	uint16_t x352 = 471U;
	int32_t t87 = 1;

	t87 = (((x349==x350)==x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t88 = 1736234664794LL;

	t88 = (((x353==x354)==x355)&x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = 195U;
	uint32_t x360 = 24U;

	t89 = (((x357==x358)==x359)&x360);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	volatile int32_t x362 = INT32_MIN;
	uint32_t x364 = 19944U;
	uint32_t t90 = 160506U;

	t90 = (((x361==x362)==x363)&x364);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1LL;
	volatile uint64_t x367 = 239LLU;
	volatile int8_t x368 = -1;

	t91 = (((x365==x366)==x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	uint64_t x370 = UINT64_MAX;
	static int64_t x371 = INT64_MIN;
	volatile uint64_t t92 = 48424149824408138LLU;

	t92 = (((x369==x370)==x371)&x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MAX;
	static int64_t x375 = -1LL;
	int32_t x376 = 497074;

	t93 = (((x373==x374)==x375)&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = 1;
	int64_t x378 = INT64_MIN;
	int64_t x380 = -2260007LL;
	volatile int64_t t94 = -57157964191978LL;

	t94 = (((x377==x378)==x379)&x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	static int8_t x383 = 4;
	static volatile int32_t t95 = 7;

	t95 = (((x381==x382)==x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	uint16_t x388 = UINT16_MAX;
	int32_t t96 = -2698102;

	t96 = (((x385==x386)==x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 49U;
	int64_t x391 = INT64_MIN;
	static int64_t x392 = -16130519467668LL;
	static volatile int64_t t97 = 17366588931358LL;

	t97 = (((x389==x390)==x391)&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 1941;
	int16_t x394 = -3;
	static int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -17588515;

	t98 = (((x393==x394)==x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = 2095U;
	static volatile int32_t t99 = -89380171;

	t99 = (((x397==x398)==x399)&x400);

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

