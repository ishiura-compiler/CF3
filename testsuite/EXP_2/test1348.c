#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
int16_t x4 = -85;
volatile uint32_t x5 = 1749U;
uint8_t x8 = UINT8_MAX;
uint64_t x10 = 242448056638LLU;
uint32_t x11 = 622828539U;
static int16_t x19 = INT16_MIN;
static int8_t x20 = INT8_MIN;
static volatile int8_t x21 = INT8_MAX;
volatile int64_t x28 = INT64_MAX;
volatile int32_t t9 = 239899;
int32_t t10 = 1;
int16_t x46 = 1;
uint64_t x48 = UINT64_MAX;
static int32_t t11 = 551692;
static int32_t x50 = INT32_MAX;
int64_t x66 = INT64_MIN;
int32_t x75 = INT32_MIN;
uint8_t x76 = 3U;
int64_t x78 = INT64_MAX;
static volatile int32_t x84 = INT32_MIN;
volatile int32_t x86 = -252015;
static uint16_t x87 = 3U;
static int32_t t23 = -59521;
int16_t x99 = INT16_MIN;
uint8_t x101 = 24U;
volatile int32_t t26 = 53;
volatile uint8_t x112 = UINT8_MAX;
static int16_t x115 = -1;
volatile uint64_t x116 = 1207352146483351LLU;
int8_t x117 = -1;
int16_t x121 = INT16_MIN;
uint32_t x123 = UINT32_MAX;
volatile uint64_t x128 = UINT64_MAX;
volatile int64_t x130 = INT64_MAX;
int32_t t32 = -1;
int64_t x136 = -903812687100LL;
int32_t x144 = -1;
volatile int32_t x147 = -1;
int32_t t36 = -2334;
static uint64_t x151 = 2LLU;
static int8_t x152 = INT8_MAX;
int8_t x153 = 0;
int32_t x155 = INT32_MIN;
uint8_t x160 = UINT8_MAX;
int8_t x161 = INT8_MIN;
volatile int32_t t41 = -123609;
uint64_t x171 = UINT64_MAX;
static volatile int32_t x176 = -1;
int8_t x181 = INT8_MAX;
static volatile int16_t x200 = -11217;
int32_t t49 = 1893;
volatile int16_t x202 = INT16_MIN;
static int16_t x205 = INT16_MIN;
static volatile uint32_t x206 = UINT32_MAX;
int16_t x209 = -1;
uint64_t x210 = UINT64_MAX;
volatile int32_t t52 = -31950;
uint16_t x214 = UINT16_MAX;
volatile int32_t x216 = 0;
int64_t x220 = INT64_MIN;
static int64_t x224 = 363231696LL;
volatile int32_t x225 = INT32_MAX;
static int16_t x230 = INT16_MIN;
volatile int32_t t58 = -88;
volatile uint16_t x237 = UINT16_MAX;
int64_t x242 = -1059505153498873971LL;
volatile int32_t t60 = 376574039;
static volatile int32_t t61 = 15340;
int32_t x251 = 193;
uint64_t x259 = 1484LLU;
volatile int32_t t65 = 1649;
volatile int64_t x270 = -193LL;
int32_t x272 = INT32_MIN;
volatile int32_t t67 = 10098762;
int32_t x275 = -1;
static volatile uint32_t x283 = UINT32_MAX;
int8_t x290 = INT8_MAX;
int64_t x296 = -1LL;
int16_t x297 = INT16_MAX;
static int32_t x302 = -1;
static int32_t x304 = INT32_MIN;
int8_t x310 = -1;
static uint8_t x311 = 1U;
int64_t x316 = -1LL;
static volatile int8_t x318 = -1;
int32_t x338 = 208;
static int64_t x347 = INT64_MAX;
uint8_t x349 = UINT8_MAX;
int8_t x356 = INT8_MAX;
int32_t t88 = 63;
uint8_t x357 = 1U;
uint16_t x367 = UINT16_MAX;
static int32_t x369 = INT32_MIN;
static int8_t x371 = INT8_MIN;
int8_t x375 = -42;
int8_t x376 = INT8_MIN;
uint16_t x378 = UINT16_MAX;
static int16_t x389 = INT16_MIN;
int32_t x394 = -1;
volatile int32_t t98 = 11;
int64_t x397 = -1LL;


void f0(void) {
	static int64_t x1 = -1LL;
	int64_t x3 = INT64_MAX;
	volatile int32_t t0 = -72656982;

	t0 = ((x1^(x2==x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 3U;
	uint64_t x7 = 11672675788122919LLU;
	volatile int32_t t1 = -895;

	t1 = ((x5^(x6==x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	static int16_t x12 = INT16_MAX;
	int32_t t2 = -982943352;

	t2 = ((x9^(x10==x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int64_t x14 = -1LL;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = 13311U;
	static volatile int32_t t3 = -277198;

	t3 = ((x13^(x14==x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = -3216582;
	volatile int32_t t4 = -121065937;

	t4 = ((x17^(x18==x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 517;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = 350842;

	t5 = ((x21^(x22==x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int64_t x26 = -299046LL;
	int32_t x27 = INT32_MIN;
	static int32_t t6 = -43;

	t6 = ((x25^(x26==x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int64_t x30 = INT64_MAX;
	int16_t x31 = -235;
	int16_t x32 = -35;
	int32_t t7 = 0;

	t7 = ((x29^(x30==x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MIN;
	volatile uint32_t x35 = 1038256U;
	int16_t x36 = -1;
	static int32_t t8 = -533193690;

	t8 = ((x33^(x34==x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = -11;
	uint32_t x40 = 1115U;

	t9 = ((x37^(x38==x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 722948766LLU;
	static int16_t x42 = -1;
	volatile int8_t x43 = -1;
	int8_t x44 = 0;

	t10 = ((x41^(x42==x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint16_t x47 = 2591U;

	t11 = ((x45^(x46==x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int8_t x51 = 0;
	int32_t x52 = INT32_MIN;
	static volatile int32_t t12 = 1034033402;

	t12 = ((x49^(x50==x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -50476345444234LL;
	uint16_t x56 = 8U;
	static volatile int32_t t13 = -13;

	t13 = ((x53^(x54==x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = UINT8_MAX;
	static uint8_t x58 = UINT8_MAX;
	int8_t x59 = INT8_MIN;
	int8_t x60 = 1;
	int32_t t14 = -120719;

	t14 = ((x57^(x58==x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = 1U;
	static volatile int64_t x62 = 127576162LL;
	static int16_t x63 = -17;
	int32_t x64 = 265670660;
	int32_t t15 = 546043;

	t15 = ((x61^(x62==x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	static int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = 2974;

	t16 = ((x65^(x66==x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	volatile int16_t x70 = 0;
	int16_t x71 = 2203;
	static uint8_t x72 = 56U;
	volatile int32_t t17 = 2342;

	t17 = ((x69^(x70==x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 51U;
	volatile int64_t x74 = 1LL;
	static volatile int32_t t18 = 67675454;

	t18 = ((x73^(x74==x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	uint16_t x79 = 170U;
	volatile int64_t x80 = -3752332999981180071LL;
	int32_t t19 = 2901130;

	t19 = ((x77^(x78==x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static uint8_t x82 = 78U;
	int16_t x83 = INT16_MIN;
	int32_t t20 = -691297;

	t20 = ((x81^(x82==x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 37604U;
	static int8_t x88 = INT8_MAX;
	int32_t t21 = -132;

	t21 = ((x85^(x86==x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint64_t x90 = 28083623848LLU;
	volatile int8_t x91 = INT8_MIN;
	volatile int32_t x92 = INT32_MIN;
	static int32_t t22 = -1662;

	t22 = ((x89^(x90==x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 6164968786133LLU;
	int32_t x94 = INT32_MAX;
	int64_t x95 = 54687656206025LL;
	volatile int16_t x96 = INT16_MIN;

	t23 = ((x93^(x94==x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -1;
	static uint16_t x98 = 5U;
	int8_t x100 = INT8_MAX;
	int32_t t24 = 228614485;

	t24 = ((x97^(x98==x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = UINT8_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	int16_t x104 = -1;
	volatile int32_t t25 = 10036889;

	t25 = ((x101^(x102==x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MAX;
	int64_t x106 = -72178330018LL;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;

	t26 = ((x105^(x106==x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	int32_t t27 = 3212;

	t27 = ((x109^(x110==x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = 1;
	int32_t x114 = INT32_MAX;
	int32_t t28 = -9191;

	t28 = ((x113^(x114==x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x118 = INT32_MIN;
	int64_t x119 = 120342218LL;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -72;

	t29 = ((x117^(x118==x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -1025540;
	static int8_t x124 = -1;
	int32_t t30 = 70;

	t30 = ((x121^(x122==x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static int8_t x126 = -1;
	static int16_t x127 = 0;
	int32_t t31 = -1;

	t31 = ((x125^(x126==x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static int64_t x131 = 95LL;
	int32_t x132 = INT32_MAX;

	t32 = ((x129^(x130==x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 0;
	int32_t x134 = INT32_MIN;
	int16_t x135 = INT16_MIN;
	int32_t t33 = 418552;

	t33 = ((x133^(x134==x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	int64_t x138 = INT64_MIN;
	volatile uint16_t x139 = UINT16_MAX;
	static int16_t x140 = -204;
	volatile int32_t t34 = 984;

	t34 = ((x137^(x138==x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 102U;
	uint32_t x142 = 3470U;
	int32_t x143 = INT32_MAX;
	volatile int32_t t35 = -727667;

	t35 = ((x141^(x142==x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = -371;
	volatile int8_t x146 = INT8_MAX;
	volatile int8_t x148 = -41;

	t36 = ((x145^(x146==x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 4LLU;
	static int32_t x150 = -1;
	static int32_t t37 = -1;

	t37 = ((x149^(x150==x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MAX;
	volatile int16_t x156 = 13;
	int32_t t38 = -3371;

	t38 = ((x153^(x154==x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -1LL;
	uint32_t x158 = UINT32_MAX;
	int16_t x159 = -2367;
	int32_t t39 = -208553523;

	t39 = ((x157^(x158==x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -3LL;
	int32_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	int32_t t40 = 10791987;

	t40 = ((x161^(x162==x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x165 = 1613068330051452LL;
	uint16_t x166 = 1U;
	int16_t x167 = -4;
	int32_t x168 = -63350394;

	t41 = ((x165^(x166==x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = -421359483318LL;
	int32_t x170 = INT32_MIN;
	static int16_t x172 = 1;
	static int32_t t42 = 0;

	t42 = ((x169^(x170==x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 1;
	uint8_t x174 = 1U;
	int16_t x175 = INT16_MIN;
	int32_t t43 = -35581792;

	t43 = ((x173^(x174==x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 3U;
	int8_t x178 = INT8_MIN;
	volatile int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -114;

	t44 = ((x177^(x178==x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x182 = INT8_MIN;
	int64_t x183 = -221085797LL;
	int64_t x184 = -12LL;
	volatile int32_t t45 = 1;

	t45 = ((x181^(x182==x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 0U;
	volatile int8_t x186 = INT8_MAX;
	static uint32_t x187 = UINT32_MAX;
	static uint32_t x188 = 14U;
	int32_t t46 = -70;

	t46 = ((x185^(x186==x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 488;
	int32_t x190 = INT32_MIN;
	int32_t x191 = -1;
	static int16_t x192 = INT16_MAX;
	volatile int32_t t47 = 1;

	t47 = ((x189^(x190==x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = -5;
	int32_t x194 = INT32_MAX;
	int32_t x195 = INT32_MIN;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = 38147991;

	t48 = ((x193^(x194==x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static int32_t x198 = INT32_MIN;
	volatile uint64_t x199 = UINT64_MAX;

	t49 = ((x197^(x198==x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 26U;
	uint32_t x203 = 7612U;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 20518548;

	t50 = ((x201^(x202==x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x207 = 1534783465U;
	int64_t x208 = INT64_MAX;
	static int32_t t51 = -99;

	t51 = ((x205^(x206==x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x211 = 1U;
	uint32_t x212 = 843742523U;

	t52 = ((x209^(x210==x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 10659U;
	uint32_t x215 = 237417431U;
	int32_t t53 = -37950349;

	t53 = ((x213^(x214==x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 979606U;
	int16_t x218 = INT16_MIN;
	uint32_t x219 = 1147401U;
	int32_t t54 = 406013266;

	t54 = ((x217^(x218==x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -227406;
	int16_t x222 = INT16_MAX;
	int16_t x223 = -3211;
	static volatile int32_t t55 = 23888;

	t55 = ((x221^(x222==x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -131;
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MAX;
	volatile int32_t t56 = 11;

	t56 = ((x225^(x226==x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	int8_t x231 = INT8_MIN;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t57 = 127854;

	t57 = ((x229^(x230==x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MIN;
	static uint8_t x235 = UINT8_MAX;
	volatile uint32_t x236 = 5942134U;

	t58 = ((x233^(x234==x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x238 = INT32_MIN;
	static int8_t x239 = -1;
	static uint32_t x240 = 12126U;
	int32_t t59 = 143892;

	t59 = ((x237^(x238==x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = 3;
	int64_t x243 = -33380780LL;
	int64_t x244 = 129789LL;

	t60 = ((x241^(x242==x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = -1;
	volatile int8_t x246 = INT8_MIN;
	static volatile int8_t x247 = INT8_MAX;
	int64_t x248 = INT64_MAX;

	t61 = ((x245^(x246==x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	uint16_t x250 = 636U;
	static volatile int64_t x252 = INT64_MIN;
	volatile int32_t t62 = -924;

	t62 = ((x249^(x250==x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MIN;
	static volatile int32_t x255 = INT32_MIN;
	static volatile uint64_t x256 = 274413757405LLU;
	volatile int32_t t63 = -938721;

	t63 = ((x253^(x254==x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x257 = -1;
	int16_t x258 = INT16_MAX;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -224;

	t64 = ((x257^(x258==x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -934359LL;
	volatile int64_t x262 = -1LL;
	int64_t x263 = 249LL;
	int8_t x264 = INT8_MIN;

	t65 = ((x261^(x262==x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = 0;
	volatile uint16_t x266 = 180U;
	int16_t x267 = INT16_MAX;
	static int64_t x268 = INT64_MAX;
	volatile int32_t t66 = 168290600;

	t66 = ((x265^(x266==x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int8_t x271 = INT8_MIN;

	t67 = ((x269^(x270==x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int32_t x274 = 8647;
	uint64_t x276 = 0LLU;
	int32_t t68 = -23709734;

	t68 = ((x273^(x274==x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = 1566832LLU;
	volatile uint32_t x280 = UINT32_MAX;
	int32_t t69 = 813803026;

	t69 = ((x277^(x278==x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	volatile uint64_t x282 = 9740643017986361LLU;
	uint8_t x284 = 4U;
	int32_t t70 = 15899;

	t70 = ((x281^(x282==x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = -1023099;
	static uint64_t x286 = 85065LLU;
	int32_t x287 = INT32_MIN;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 6636377;

	t71 = ((x285^(x286==x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	volatile int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	static int32_t t72 = 0;

	t72 = ((x289^(x290==x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 45494052660715359LLU;
	int8_t x294 = INT8_MAX;
	static uint16_t x295 = 33U;
	int32_t t73 = -378;

	t73 = ((x293^(x294==x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x298 = UINT32_MAX;
	int8_t x299 = -14;
	uint32_t x300 = 12U;
	static volatile int32_t t74 = -965556142;

	t74 = ((x297^(x298==x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	int16_t x303 = 363;
	volatile int32_t t75 = 3;

	t75 = ((x301^(x302==x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = 15;
	int8_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	uint64_t x308 = 1674324522424339597LLU;
	int32_t t76 = -11237;

	t76 = ((x305^(x306==x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 45;
	static uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = 0;

	t77 = ((x309^(x310==x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 1523U;
	uint8_t x315 = 86U;
	volatile int32_t t78 = -151;

	t78 = ((x313^(x314==x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = -9569;
	int8_t x319 = INT8_MAX;
	volatile int32_t x320 = INT32_MIN;
	int32_t t79 = -5214;

	t79 = ((x317^(x318==x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = INT8_MAX;
	static int16_t x322 = -12;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = 3;
	int32_t t80 = -263609532;

	t80 = ((x321^(x322==x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 25172U;
	uint16_t x326 = 1U;
	static int32_t x327 = INT32_MIN;
	int16_t x328 = 1123;
	int32_t t81 = -477;

	t81 = ((x325^(x326==x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -212408293;
	uint32_t x330 = 2445U;
	int16_t x331 = -457;
	static int8_t x332 = INT8_MIN;
	int32_t t82 = -1092;

	t82 = ((x329^(x330==x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 4U;
	volatile int16_t x334 = 217;
	volatile int32_t x335 = INT32_MIN;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = 169994;

	t83 = ((x333^(x334==x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	volatile int64_t x339 = INT64_MAX;
	int32_t x340 = 7893610;
	int32_t t84 = 6671912;

	t84 = ((x337^(x338==x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x342 = 5797U;
	uint32_t x343 = 90U;
	static int16_t x344 = INT16_MAX;
	int32_t t85 = -45;

	t85 = ((x341^(x342==x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = 1;
	int64_t x346 = INT64_MAX;
	uint16_t x348 = 81U;
	int32_t t86 = -1;

	t86 = ((x345^(x346==x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	int8_t x352 = -1;
	static volatile int32_t t87 = 968438085;

	t87 = ((x349^(x350==x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int64_t x354 = INT64_MIN;
	volatile int8_t x355 = INT8_MIN;

	t88 = ((x353^(x354==x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MAX;
	uint8_t x359 = 5U;
	static int32_t x360 = INT32_MIN;
	int32_t t89 = -901;

	t89 = ((x357^(x358==x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = -3786;

	t90 = ((x361^(x362==x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	uint64_t x366 = 8477628156967LLU;
	uint32_t x368 = 3351U;
	int32_t t91 = -25705;

	t91 = ((x365^(x366==x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -1;

	t92 = ((x369^(x370==x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 317;
	int64_t x374 = 20664LL;
	int32_t t93 = -1424161;

	t93 = ((x373^(x374==x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MAX;
	int32_t t94 = 1928260;

	t94 = ((x377^(x378==x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = 1;
	uint8_t x384 = UINT8_MAX;
	static int32_t t95 = 3763;

	t95 = ((x381^(x382==x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MIN;
	static uint32_t x388 = UINT32_MAX;
	volatile int32_t t96 = -4645852;

	t96 = ((x385^(x386==x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = INT32_MAX;
	int64_t x391 = -1LL;
	uint8_t x392 = UINT8_MAX;
	int32_t t97 = -1473787;

	t97 = ((x389^(x390==x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x395 = UINT64_MAX;
	volatile int8_t x396 = INT8_MAX;

	t98 = ((x393^(x394==x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x398 = 329707LLU;
	int64_t x399 = -160759LL;
	int16_t x400 = -43;
	int32_t t99 = -3;

	t99 = ((x397^(x398==x399))<x400);

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

