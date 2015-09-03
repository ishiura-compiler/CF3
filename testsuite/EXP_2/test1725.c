#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x12 = INT8_MIN;
int32_t t1 = 389;
uint64_t x18 = 928951322331056LLU;
int32_t x38 = -1;
int32_t t7 = 1;
volatile int32_t t8 = 52137211;
int64_t x48 = -4379425298LL;
uint32_t x52 = 4582U;
uint8_t x54 = 3U;
volatile int32_t t11 = 34744;
int32_t x59 = -1;
static volatile int32_t t12 = 6018;
static int8_t x62 = -2;
static int32_t t13 = 65508685;
uint64_t x66 = 775092562805622120LLU;
int16_t x69 = INT16_MIN;
uint64_t x70 = UINT64_MAX;
static int16_t x80 = INT16_MAX;
static volatile int64_t x89 = 232181658LL;
int32_t t19 = -12995937;
uint32_t x112 = 25494260U;
volatile uint16_t x113 = UINT16_MAX;
volatile int8_t x117 = INT8_MIN;
int64_t x118 = 0LL;
volatile int32_t t23 = -238257;
int16_t x125 = -1;
volatile int8_t x135 = -1;
int64_t x148 = 78783230969563LL;
volatile int64_t x150 = -1LL;
static volatile int32_t t29 = 1486294;
int32_t t30 = -1761;
int8_t x163 = INT8_MIN;
uint16_t x165 = UINT16_MAX;
int8_t x166 = 12;
int16_t x172 = -8893;
volatile int32_t t34 = 43595256;
int64_t x173 = -96740930LL;
int32_t x174 = INT32_MIN;
int32_t x176 = -224795;
volatile int16_t x179 = INT16_MAX;
int64_t x188 = INT64_MIN;
volatile uint8_t x193 = UINT8_MAX;
int64_t x194 = -1LL;
static uint32_t x196 = 532U;
volatile int8_t x199 = -1;
int16_t x202 = INT16_MAX;
int32_t x209 = INT32_MIN;
static volatile int32_t t45 = 1577;
uint32_t x218 = UINT32_MAX;
int64_t x219 = INT64_MAX;
uint32_t x223 = 594U;
uint64_t x225 = 5227538323999203151LLU;
int64_t x229 = -1LL;
volatile int32_t t52 = 1;
int16_t x250 = INT16_MAX;
static int64_t x257 = INT64_MIN;
int32_t x260 = 7719;
volatile int64_t x270 = INT64_MIN;
volatile uint64_t x272 = UINT64_MAX;
static volatile int32_t t58 = 286;
static uint64_t x273 = 10299LLU;
int16_t x274 = INT16_MIN;
int16_t x277 = -1;
int32_t x279 = INT32_MAX;
static int8_t x280 = INT8_MIN;
uint16_t x284 = 1U;
uint8_t x288 = UINT8_MAX;
int32_t t63 = -36819;
int64_t x299 = -1LL;
static int32_t t65 = 71;
static int8_t x308 = 0;
uint32_t x309 = 1U;
uint64_t x313 = UINT64_MAX;
volatile int32_t t69 = -126217;
int8_t x338 = INT8_MIN;
static uint64_t x339 = 26137087LLU;
uint32_t x341 = 92314U;
volatile int32_t t72 = -3428865;
static volatile int64_t x348 = INT64_MIN;
volatile int8_t x351 = -4;
static uint8_t x355 = UINT8_MAX;
int32_t t76 = 95;
volatile uint64_t x364 = 1520681793LLU;
uint8_t x365 = 1U;
int8_t x367 = -1;
static int32_t x370 = INT32_MAX;
int8_t x377 = -1;
static int16_t x381 = -13;
volatile uint16_t x382 = UINT16_MAX;
int64_t x390 = INT64_MIN;
uint64_t x391 = 3120440562748LLU;
static int32_t t83 = -203;
int8_t x396 = INT8_MAX;
volatile int32_t t84 = -373;
int32_t t85 = -215;
volatile int32_t t86 = 399306;
int16_t x417 = INT16_MIN;
int8_t x418 = -11;
volatile int32_t t88 = 106;
int8_t x426 = -1;
int64_t x448 = -1LL;
static uint64_t x457 = 1354359389866366910LLU;
int64_t x466 = INT64_MIN;
volatile uint8_t x468 = 31U;
volatile int32_t t98 = 3219;
volatile int16_t x469 = INT16_MIN;


void f0(void) {
	static int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	uint64_t x7 = 486795109632299LLU;
	static volatile int64_t x8 = INT64_MAX;
	int32_t t0 = 124;

	t0 = ((x5*(x6&x7))<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = -1;
	int32_t x10 = 57492;
	int16_t x11 = INT16_MIN;

	t1 = ((x9*(x10&x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x17 = 1U;
	static int8_t x19 = INT8_MIN;
	int32_t x20 = -5;
	int32_t t2 = -107943;

	t2 = ((x17*(x18&x19))<x20);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = -1;
	int16_t x22 = 131;
	static int64_t x23 = -1LL;
	uint8_t x24 = 0U;
	int32_t t3 = -830;

	t3 = ((x21*(x22&x23))<x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 15857;
	volatile int8_t x26 = 10;
	static uint8_t x27 = 0U;
	int64_t x28 = INT64_MIN;
	int32_t t4 = -1962;

	t4 = ((x25*(x26&x27))<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = -57;
	uint64_t x30 = 42332774LLU;
	int8_t x31 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	int32_t t5 = 7994;

	t5 = ((x29*(x30&x31))<x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = UINT16_MAX;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MAX;
	volatile int32_t t6 = 2657855;

	t6 = ((x33*(x34&x35))<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = INT8_MAX;
	uint16_t x39 = 24U;
	static int32_t x40 = INT32_MIN;

	t7 = ((x37*(x38&x39))<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 1243099092236344LLU;
	static int64_t x42 = INT64_MAX;
	int8_t x43 = INT8_MIN;
	uint64_t x44 = 824615990189054362LLU;

	t8 = ((x41*(x42&x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 1325U;
	int32_t x46 = -2630849;
	uint8_t x47 = 8U;
	int32_t t9 = 27704882;

	t9 = ((x45*(x46&x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -1;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = 0U;
	static int32_t t10 = 474835;

	t10 = ((x49*(x50&x51))<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = 3;
	int8_t x55 = 1;
	static volatile int16_t x56 = 0;

	t11 = ((x53*(x54&x55))<x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = 1;
	uint16_t x58 = 2U;
	static int8_t x60 = INT8_MIN;

	t12 = ((x57*(x58&x59))<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 6LLU;
	int16_t x63 = 88;
	int16_t x64 = INT16_MAX;

	t13 = ((x61*(x62&x63))<x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x65 = 3U;
	static int64_t x67 = -272151LL;
	uint16_t x68 = UINT16_MAX;
	int32_t t14 = 247;

	t14 = ((x65*(x66&x67))<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x71 = 7633484LLU;
	uint8_t x72 = 7U;
	volatile int32_t t15 = 110606796;

	t15 = ((x69*(x70&x71))<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 32;
	volatile uint8_t x78 = UINT8_MAX;
	uint64_t x79 = 215413594961068LLU;
	int32_t t16 = 8096;

	t16 = ((x77*(x78&x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x85 = UINT16_MAX;
	static int32_t x86 = 23;
	volatile int16_t x87 = INT16_MIN;
	uint16_t x88 = 77U;
	volatile int32_t t17 = 3568;

	t17 = ((x85*(x86&x87))<x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MAX;
	static uint16_t x92 = 27870U;
	volatile int32_t t18 = 0;

	t18 = ((x89*(x90&x91))<x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -2;
	int32_t x94 = INT32_MIN;
	int32_t x95 = 417916;
	static int8_t x96 = -1;

	t19 = ((x93*(x94&x95))<x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 0;
	uint32_t x102 = 7679U;
	int32_t x103 = INT32_MIN;
	static int32_t x104 = INT32_MIN;
	int32_t t20 = -53;

	t20 = ((x101*(x102&x103))<x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	uint8_t x110 = 2U;
	volatile int8_t x111 = INT8_MIN;
	static int32_t t21 = 666851970;

	t21 = ((x109*(x110&x111))<x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x114 = UINT16_MAX;
	static volatile int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t22 = 23;

	t22 = ((x113*(x114&x115))<x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x119 = INT32_MIN;
	int32_t x120 = -1;

	t23 = ((x117*(x118&x119))<x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = 12;
	uint32_t x122 = UINT32_MAX;
	int16_t x123 = -1;
	int16_t x124 = INT16_MAX;
	int32_t t24 = -252224790;

	t24 = ((x121*(x122&x123))<x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x126 = 1117572U;
	int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MAX;
	volatile int32_t t25 = -1363;

	t25 = ((x125*(x126&x127))<x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = 44U;
	int16_t x131 = 2;
	volatile uint8_t x132 = UINT8_MAX;
	volatile int32_t t26 = 61;

	t26 = ((x129*(x130&x131))<x132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x133 = 4137888489016LL;
	uint16_t x134 = 186U;
	int8_t x136 = INT8_MAX;
	int32_t t27 = 159673;

	t27 = ((x133*(x134&x135))<x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x145 = INT16_MIN;
	int64_t x146 = -5665016LL;
	int16_t x147 = 3;
	volatile int32_t t28 = -252848;

	t28 = ((x145*(x146&x147))<x148);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = 7U;
	int16_t x151 = INT16_MAX;
	uint64_t x152 = 455083200LLU;

	t29 = ((x149*(x150&x151))<x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x153 = 70239713U;
	volatile int8_t x154 = -1;
	volatile uint64_t x155 = 6LLU;
	int64_t x156 = 5669665LL;

	t30 = ((x153*(x154&x155))<x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = 1682U;
	int32_t x158 = -1;
	static int16_t x159 = -618;
	int32_t x160 = INT32_MAX;
	int32_t t31 = -3289905;

	t31 = ((x157*(x158&x159))<x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = INT32_MAX;
	int64_t x162 = -1LL;
	volatile uint64_t x164 = UINT64_MAX;
	static volatile int32_t t32 = 10;

	t32 = ((x161*(x162&x163))<x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x167 = 4719;
	int64_t x168 = -1705383LL;
	int32_t t33 = -44;

	t33 = ((x165*(x166&x167))<x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = INT16_MAX;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = 192LL;

	t34 = ((x169*(x170&x171))<x172);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x175 = INT32_MAX;
	static int32_t t35 = -88311409;

	t35 = ((x173*(x174&x175))<x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = 0;
	int32_t x180 = INT32_MIN;
	volatile int32_t t36 = 1169;

	t36 = ((x177*(x178&x179))<x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x181 = INT8_MIN;
	static int64_t x182 = -1LL;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = 7U;
	int32_t t37 = -124232;

	t37 = ((x181*(x182&x183))<x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x185 = 360U;
	int16_t x186 = INT16_MIN;
	int64_t x187 = 14488909485144875LL;
	static int32_t t38 = 0;

	t38 = ((x185*(x186&x187))<x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x189 = -1;
	int32_t x190 = 0;
	uint8_t x191 = 5U;
	int64_t x192 = INT64_MAX;
	volatile int32_t t39 = -6651;

	t39 = ((x189*(x190&x191))<x192);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x195 = UINT32_MAX;
	static volatile int32_t t40 = -444;

	t40 = ((x193*(x194&x195))<x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x197 = INT16_MIN;
	int16_t x198 = -1;
	static uint32_t x200 = UINT32_MAX;
	static int32_t t41 = 1;

	t41 = ((x197*(x198&x199))<x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = 1;
	volatile int64_t x203 = -1LL;
	int64_t x204 = INT64_MAX;
	int32_t t42 = 434034;

	t42 = ((x201*(x202&x203))<x204);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = INT32_MIN;
	volatile int16_t x206 = INT16_MAX;
	uint8_t x207 = 0U;
	volatile int8_t x208 = 0;
	volatile int32_t t43 = 2044;

	t43 = ((x205*(x206&x207))<x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x210 = 3U;
	static int32_t x211 = INT32_MIN;
	volatile uint32_t x212 = UINT32_MAX;
	int32_t t44 = -16;

	t44 = ((x209*(x210&x211))<x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = INT32_MIN;
	static int64_t x215 = INT64_MAX;
	uint32_t x216 = 7262U;

	t45 = ((x213*(x214&x215))<x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = INT8_MIN;
	static uint16_t x220 = 2U;
	int32_t t46 = 1149;

	t46 = ((x217*(x218&x219))<x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = -1;
	int8_t x222 = -14;
	int64_t x224 = INT64_MIN;
	int32_t t47 = -149704425;

	t47 = ((x221*(x222&x223))<x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x226 = 65507;
	int8_t x227 = 0;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t48 = 45;

	t48 = ((x225*(x226&x227))<x228);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x230 = 663244U;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = INT16_MIN;
	static int32_t t49 = -2031514;

	t49 = ((x229*(x230&x231))<x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = UINT8_MAX;
	static uint64_t x234 = 3088953299676LLU;
	int8_t x235 = -1;
	static volatile uint32_t x236 = 4U;
	volatile int32_t t50 = 977;

	t50 = ((x233*(x234&x235))<x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x237 = 26U;
	static uint64_t x238 = 4317173LLU;
	int16_t x239 = -43;
	volatile uint16_t x240 = UINT16_MAX;
	volatile int32_t t51 = 3302279;

	t51 = ((x237*(x238&x239))<x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -18;
	int16_t x242 = INT16_MIN;
	static uint32_t x243 = UINT32_MAX;
	uint16_t x244 = 1U;

	t52 = ((x241*(x242&x243))<x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = -19;
	uint16_t x246 = 508U;
	int8_t x247 = 0;
	int64_t x248 = INT64_MAX;
	int32_t t53 = 231918305;

	t53 = ((x245*(x246&x247))<x248);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x249 = 357360392982523875LLU;
	static int8_t x251 = -1;
	int16_t x252 = -1;
	volatile int32_t t54 = 3890;

	t54 = ((x249*(x250&x251))<x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x253 = 20444969958402954LLU;
	int32_t x254 = -6160220;
	int8_t x255 = 23;
	static volatile uint32_t x256 = 88447U;
	static volatile int32_t t55 = 475802448;

	t55 = ((x253*(x254&x255))<x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x258 = 247;
	volatile uint64_t x259 = UINT64_MAX;
	int32_t t56 = 4;

	t56 = ((x257*(x258&x259))<x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = 6U;
	int32_t x266 = INT32_MIN;
	static int64_t x267 = -14944142466LL;
	uint32_t x268 = 27288097U;
	int32_t t57 = -239;

	t57 = ((x265*(x266&x267))<x268);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = -1;
	uint16_t x271 = 1U;

	t58 = ((x269*(x270&x271))<x272);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x275 = 0;
	static volatile int8_t x276 = -2;
	int32_t t59 = 67260;

	t59 = ((x273*(x274&x275))<x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x278 = INT32_MIN;
	int32_t t60 = 2238282;

	t60 = ((x277*(x278&x279))<x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = -1LL;
	int32_t x282 = -1;
	int64_t x283 = -1LL;
	int32_t t61 = 1;

	t61 = ((x281*(x282&x283))<x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = -36697LL;
	int8_t x286 = INT8_MAX;
	volatile uint32_t x287 = UINT32_MAX;
	static int32_t t62 = 1;

	t62 = ((x285*(x286&x287))<x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	uint64_t x291 = 4732888900940LLU;
	static volatile int64_t x292 = -1LL;

	t63 = ((x289*(x290&x291))<x292);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = -1LL;
	int16_t x294 = 171;
	int64_t x295 = INT64_MAX;
	uint32_t x296 = 16383U;
	int32_t t64 = 845;

	t64 = ((x293*(x294&x295))<x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = -1;
	int64_t x300 = INT64_MIN;

	t65 = ((x297*(x298&x299))<x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x301 = 25690;
	uint64_t x302 = 32212728309073LLU;
	int16_t x303 = 1;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t66 = -10566;

	t66 = ((x301*(x302&x303))<x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x305 = INT64_MIN;
	volatile int32_t x306 = INT32_MIN;
	uint64_t x307 = 5463195396633379LLU;
	int32_t t67 = 51048557;

	t67 = ((x305*(x306&x307))<x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x310 = INT16_MIN;
	int8_t x311 = -1;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t68 = 226;

	t68 = ((x309*(x310&x311))<x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x314 = INT8_MIN;
	int32_t x315 = INT32_MAX;
	static int32_t x316 = -1;

	t69 = ((x313*(x314&x315))<x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x329 = INT16_MAX;
	uint8_t x330 = 54U;
	int32_t x331 = 2;
	int64_t x332 = INT64_MIN;
	int32_t t70 = -27912698;

	t70 = ((x329*(x330&x331))<x332);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x337 = 3221180291LLU;
	volatile uint16_t x340 = 1U;
	volatile int32_t t71 = 71584979;

	t71 = ((x337*(x338&x339))<x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x342 = 4291657713034LLU;
	uint32_t x343 = 169U;
	int16_t x344 = INT16_MAX;

	t72 = ((x341*(x342&x343))<x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x345 = -1;
	int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MAX;
	volatile int32_t t73 = 1;

	t73 = ((x345*(x346&x347))<x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = UINT64_MAX;
	int16_t x350 = INT16_MIN;
	int16_t x352 = -1007;
	static volatile int32_t t74 = 93415;

	t74 = ((x349*(x350&x351))<x352);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x353 = 27674323556247449LLU;
	uint8_t x354 = 3U;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t75 = -7475;

	t75 = ((x353*(x354&x355))<x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = 91148351;
	uint8_t x359 = 0U;
	volatile uint8_t x360 = 41U;

	t76 = ((x357*(x358&x359))<x360);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = -1;
	uint32_t x362 = 1156805375U;
	volatile int32_t x363 = 158540;
	int32_t t77 = -679034;

	t77 = ((x361*(x362&x363))<x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x366 = UINT32_MAX;
	static uint16_t x368 = UINT16_MAX;
	volatile int32_t t78 = 42287897;

	t78 = ((x365*(x366&x367))<x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = UINT64_MAX;
	static int64_t x371 = 29304851680791LL;
	volatile uint32_t x372 = UINT32_MAX;
	int32_t t79 = 810432312;

	t79 = ((x369*(x370&x371))<x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = 2U;
	int32_t t80 = -6675;

	t80 = ((x377*(x378&x379))<x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x383 = -1;
	int16_t x384 = INT16_MIN;
	int32_t t81 = -7;

	t81 = ((x381*(x382&x383))<x384);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x385 = 1171U;
	volatile int32_t x386 = 41;
	int16_t x387 = INT16_MAX;
	uint64_t x388 = UINT64_MAX;
	int32_t t82 = -88625700;

	t82 = ((x385*(x386&x387))<x388);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x389 = INT16_MIN;
	volatile int64_t x392 = 15810LL;

	t83 = ((x389*(x390&x391))<x392);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = -1;
	static volatile int8_t x394 = 13;
	int64_t x395 = INT64_MIN;

	t84 = ((x393*(x394&x395))<x396);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x401 = 34000611846834LLU;
	static int64_t x402 = INT64_MIN;
	volatile uint64_t x403 = 30208332413986898LLU;
	int16_t x404 = INT16_MIN;

	t85 = ((x401*(x402&x403))<x404);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x409 = INT32_MIN;
	static uint8_t x410 = 12U;
	static volatile uint64_t x411 = 741553122791LLU;
	static int8_t x412 = INT8_MAX;

	t86 = ((x409*(x410&x411))<x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = -6447;
	int16_t x414 = -1;
	int16_t x415 = -1;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t87 = -5624623;

	t87 = ((x413*(x414&x415))<x416);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x419 = -1;
	static int32_t x420 = -27552544;

	t88 = ((x417*(x418&x419))<x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x421 = -1;
	uint32_t x422 = UINT32_MAX;
	uint32_t x423 = 27298U;
	int32_t x424 = INT32_MIN;
	int32_t t89 = 1133163;

	t89 = ((x421*(x422&x423))<x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x425 = -1;
	volatile int32_t x427 = -1;
	int16_t x428 = 0;
	volatile int32_t t90 = 2338747;

	t90 = ((x425*(x426&x427))<x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x433 = 6858291606591LLU;
	static int16_t x434 = 30;
	uint8_t x435 = UINT8_MAX;
	static uint8_t x436 = 2U;
	int32_t t91 = -3827;

	t91 = ((x433*(x434&x435))<x436);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = INT16_MAX;
	int8_t x438 = -1;
	int16_t x439 = -101;
	int16_t x440 = 141;
	volatile int32_t t92 = 378;

	t92 = ((x437*(x438&x439))<x440);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = INT16_MIN;
	uint8_t x442 = 0U;
	int64_t x443 = -1LL;
	static uint32_t x444 = 259661U;
	int32_t t93 = -11970811;

	t93 = ((x441*(x442&x443))<x444);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x445 = 606U;
	volatile uint32_t x446 = 0U;
	static int16_t x447 = INT16_MAX;
	static volatile int32_t t94 = -246;

	t94 = ((x445*(x446&x447))<x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x449 = 127724504143436LLU;
	uint32_t x450 = 27557580U;
	static int64_t x451 = 0LL;
	uint64_t x452 = 3786104151745305LLU;
	int32_t t95 = 617;

	t95 = ((x449*(x450&x451))<x452);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x453 = INT8_MIN;
	static uint64_t x454 = 7645LLU;
	int8_t x455 = INT8_MIN;
	volatile uint8_t x456 = UINT8_MAX;
	int32_t t96 = 18;

	t96 = ((x453*(x454&x455))<x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x458 = INT64_MIN;
	static volatile int16_t x459 = INT16_MIN;
	int8_t x460 = -48;
	static volatile int32_t t97 = -16019397;

	t97 = ((x457*(x458&x459))<x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = -6319277;
	uint8_t x467 = 6U;

	t98 = ((x465*(x466&x467))<x468);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x470 = INT64_MAX;
	int16_t x471 = 989;
	static volatile int16_t x472 = INT16_MIN;
	static volatile int32_t t99 = -1;

	t99 = ((x469*(x470&x471))<x472);

	if (t99 != 1) { NG(); } else { ; }
	
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

