#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
int16_t x5 = -57;
uint16_t x16 = UINT16_MAX;
volatile int32_t t3 = 1808206;
volatile int32_t t5 = 76;
uint16_t x26 = 18U;
int32_t t10 = -3;
static int8_t x50 = -53;
uint16_t x51 = 3286U;
int16_t x56 = INT16_MIN;
volatile uint64_t x57 = 747030LLU;
volatile uint32_t t15 = 1U;
int8_t x69 = 1;
int8_t x70 = INT8_MIN;
volatile int32_t t17 = -3413;
int64_t x79 = INT64_MIN;
static int64_t x83 = 1825313LL;
static uint64_t x92 = UINT64_MAX;
uint64_t t22 = UINT64_MAX;
static volatile int64_t t23 = INT64_MAX;
int32_t x100 = INT32_MIN;
volatile int32_t x102 = 3631301;
volatile int16_t x105 = -19;
volatile int32_t x107 = INT32_MAX;
int32_t t26 = 1487063;
int16_t x112 = -3;
static uint32_t x113 = 24836394U;
static volatile int64_t x116 = 198595040613975LL;
volatile int32_t t29 = 0;
volatile int32_t x123 = 42;
static int16_t x125 = INT16_MAX;
int64_t x135 = -1LL;
int32_t t33 = 12;
int64_t t34 = 0LL;
int64_t x144 = 79851993LL;
int32_t x147 = -1;
volatile int32_t t36 = -14666767;
int64_t x161 = -1LL;
uint32_t x166 = 125446U;
uint64_t x170 = 1548853753545321580LLU;
int64_t x171 = 63LL;
int64_t x174 = INT64_MIN;
volatile int16_t x180 = INT16_MAX;
int64_t x187 = INT64_MAX;
int64_t x192 = -370217061LL;
volatile uint16_t x207 = 7935U;
int8_t x208 = 1;
int64_t x209 = 1116426315175460513LL;
uint16_t x213 = 112U;
int16_t x214 = -2653;
volatile int8_t x217 = -1;
static int8_t x218 = 5;
static int8_t x219 = INT8_MIN;
int32_t x220 = 1;
int32_t x221 = INT32_MIN;
int64_t x227 = INT64_MAX;
uint8_t x228 = UINT8_MAX;
int64_t x229 = INT64_MIN;
uint32_t x240 = UINT32_MAX;
volatile uint16_t x241 = 1U;
static int16_t x244 = INT16_MAX;
int32_t t61 = 72557427;
volatile int32_t t62 = 2;
static int32_t x255 = 19;
uint64_t t63 = 653945192115290428LLU;
static volatile int64_t x258 = INT64_MIN;
int32_t t64 = 5183475;
static int64_t x264 = -1LL;
uint8_t x265 = 9U;
volatile uint16_t x272 = 13139U;
int8_t x280 = INT8_MIN;
int8_t x288 = INT8_MIN;
static int32_t x293 = INT32_MAX;
int32_t t74 = 7592615;
uint32_t x304 = 611757752U;
volatile uint32_t t75 = 101632197U;
volatile int64_t x306 = INT64_MIN;
uint32_t x307 = UINT32_MAX;
static volatile int32_t t79 = 5971;
int32_t x327 = -1;
static int16_t x328 = -1;
volatile int32_t t81 = -17536980;
int8_t x330 = -1;
volatile uint64_t t82 = 79LLU;
uint64_t t83 = 93041251930LLU;
uint64_t x339 = 0LLU;
int64_t t84 = INT64_MAX;
static volatile uint8_t x341 = 11U;
int32_t t89 = INT32_MIN;
volatile uint32_t x363 = 23993U;
static uint32_t x366 = 0U;
volatile int32_t t91 = -11706998;
static volatile int32_t x369 = INT32_MIN;
volatile int32_t x373 = -1;
int64_t x374 = INT64_MIN;
volatile uint16_t x384 = 47U;
uint64_t x386 = 16670678243LLU;
uint64_t x388 = UINT64_MAX;
uint16_t x393 = 1440U;
static int8_t x395 = -1;
int32_t x397 = 976;
volatile uint64_t x399 = UINT64_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int16_t x2 = 11;
	static int16_t x4 = -2;
	int32_t t0 = 27;

	t0 = ((x1==(x2^x3))^x4);

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 1276;
	volatile int16_t x7 = INT16_MAX;
	static volatile int64_t x8 = INT64_MAX;
	volatile int64_t t1 = INT64_MAX;

	t1 = ((x5==(x6^x7))^x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -9332;
	int8_t x10 = 32;
	int16_t x11 = 0;
	int8_t x12 = 0;
	volatile int32_t t2 = 26;

	t2 = ((x9==(x10^x11))^x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 13U;
	int8_t x14 = INT8_MAX;
	static int8_t x15 = INT8_MIN;

	t3 = ((x13==(x14^x15))^x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x18 = 96U;
	static uint16_t x19 = 0U;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = -19618;

	t4 = ((x17==(x18^x19))^x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -40;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MAX;
	uint16_t x24 = UINT16_MAX;

	t5 = ((x21==(x22^x23))^x24);

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x27 = -16;
	volatile uint16_t x28 = 13574U;
	volatile int32_t t6 = -1;

	t6 = ((x25==(x26^x27))^x28);

	if (t6 != 13574) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static int8_t x30 = -1;
	int16_t x31 = INT16_MAX;
	int64_t x32 = INT64_MAX;
	volatile int64_t t7 = INT64_MAX;

	t7 = ((x29==(x30^x31))^x32);

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x33 = 115631U;
	int16_t x34 = -8832;
	uint8_t x35 = UINT8_MAX;
	static int16_t x36 = -7550;
	int32_t t8 = 11610;

	t8 = ((x33==(x34^x35))^x36);

	if (t8 != -7550) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	static int32_t x39 = -1;
	volatile int8_t x40 = -1;
	volatile int32_t t9 = -2310;

	t9 = ((x37==(x38^x39))^x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 350998570U;
	int32_t x42 = 1737;
	int8_t x43 = 56;
	int16_t x44 = INT16_MIN;

	t10 = ((x41==(x42^x43))^x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int16_t x46 = 2;
	static int8_t x47 = 3;
	uint8_t x48 = 0U;
	volatile int32_t t11 = -841;

	t11 = ((x45==(x46^x47))^x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int64_t x52 = -1LL;
	volatile int64_t t12 = -207520LL;

	t12 = ((x49==(x50^x51))^x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = 452;
	int8_t x54 = INT8_MIN;
	static int8_t x55 = INT8_MIN;
	volatile int32_t t13 = -174591107;

	t13 = ((x53==(x54^x55))^x56);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x58 = 367LLU;
	int16_t x59 = -3;
	static int64_t x60 = INT64_MIN;
	static volatile int64_t t14 = INT64_MIN;

	t14 = ((x57==(x58^x59))^x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = 7U;
	static int64_t x63 = -16211493790719549LL;
	uint32_t x64 = 933U;

	t15 = ((x61==(x62^x63))^x64);

	if (t15 != 933U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 979U;
	int16_t x66 = 1;
	uint64_t x67 = 24624LLU;
	static int32_t x68 = INT32_MAX;
	int32_t t16 = INT32_MAX;

	t16 = ((x65==(x66^x67))^x68);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x71 = INT16_MAX;
	volatile int16_t x72 = INT16_MIN;

	t17 = ((x69==(x70^x71))^x72);

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static int16_t x74 = -1;
	volatile int16_t x75 = -15138;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = INT32_MIN;

	t18 = ((x73==(x74^x75))^x76);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t19 = 14294330;

	t19 = ((x77==(x78^x79))^x80);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint32_t x82 = 35U;
	static int64_t x84 = 75625LL;
	static int64_t t20 = 228362145066120LL;

	t20 = ((x81==(x82^x83))^x84);

	if (t20 != 75625LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1546;
	uint32_t x86 = 96537U;
	static uint32_t x87 = 415U;
	static volatile int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 1;

	t21 = ((x85==(x86^x87))^x88);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	volatile uint16_t x90 = 1U;
	int16_t x91 = INT16_MIN;

	t22 = ((x89==(x90^x91))^x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 412U;
	static int8_t x94 = 54;
	volatile uint8_t x95 = 11U;
	int64_t x96 = INT64_MAX;

	t23 = ((x93==(x94^x95))^x96);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = INT16_MAX;
	uint16_t x98 = 31649U;
	volatile uint16_t x99 = UINT16_MAX;
	static volatile int32_t t24 = INT32_MIN;

	t24 = ((x97==(x98^x99))^x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 5U;
	int32_t x103 = 15521;
	int64_t x104 = INT64_MIN;
	int64_t t25 = INT64_MIN;

	t25 = ((x101==(x102^x103))^x104);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MIN;
	int32_t x108 = -575616765;

	t26 = ((x105==(x106^x107))^x108);

	if (t26 != -575616765) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -1LL;
	int16_t x110 = INT16_MIN;
	volatile uint8_t x111 = 10U;
	volatile int32_t t27 = 131589502;

	t27 = ((x109==(x110^x111))^x112);

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = 41;
	int32_t x115 = INT32_MIN;
	int64_t t28 = -4216883889147372786LL;

	t28 = ((x113==(x114^x115))^x116);

	if (t28 != 198595040613975LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint8_t x118 = 0U;
	volatile int32_t x119 = INT32_MIN;
	static uint8_t x120 = 10U;

	t29 = ((x117==(x118^x119))^x120);

	if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = 6LL;
	int64_t x122 = INT64_MAX;
	int64_t x124 = INT64_MAX;
	volatile int64_t t30 = INT64_MAX;

	t30 = ((x121==(x122^x123))^x124);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	static int64_t x127 = INT64_MAX;
	int8_t x128 = -1;
	volatile int32_t t31 = -1119093;

	t31 = ((x125==(x126^x127))^x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 81U;
	uint8_t x130 = UINT8_MAX;
	int32_t x131 = 1671678;
	int16_t x132 = INT16_MIN;
	static int32_t t32 = 130911;

	t32 = ((x129==(x130^x131))^x132);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 1;
	static int64_t x134 = INT64_MAX;
	int16_t x136 = INT16_MIN;

	t33 = ((x133==(x134^x135))^x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	volatile uint64_t x138 = 23316778675798LLU;
	static uint32_t x139 = UINT32_MAX;
	volatile int64_t x140 = -1LL;

	t34 = ((x137==(x138^x139))^x140);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static int32_t x142 = -1;
	int8_t x143 = -57;
	static int64_t t35 = 1LL;

	t35 = ((x141==(x142^x143))^x144);

	if (t35 != 79851993LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	volatile int64_t x146 = -1LL;
	int32_t x148 = -1;

	t36 = ((x145==(x146^x147))^x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = INT32_MAX;
	int8_t x150 = INT8_MIN;
	int32_t x151 = -55;
	int8_t x152 = 52;
	static volatile int32_t t37 = -487504850;

	t37 = ((x149==(x150^x151))^x152);

	if (t37 != 52) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 1248283925U;
	static volatile int8_t x154 = 0;
	static int16_t x155 = 0;
	int32_t x156 = INT32_MAX;
	int32_t t38 = INT32_MAX;

	t38 = ((x153==(x154^x155))^x156);

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 0;
	uint16_t x158 = UINT16_MAX;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = -1LL;
	static volatile int64_t t39 = -1199726883651LL;

	t39 = ((x157==(x158^x159))^x160);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -1LL;
	int64_t x163 = INT64_MAX;
	int8_t x164 = -3;
	int32_t t40 = 41;

	t40 = ((x161==(x162^x163))^x164);

	if (t40 != -3) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MAX;
	int64_t t41 = INT64_MAX;

	t41 = ((x165==(x166^x167))^x168);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 43519;

	t42 = ((x169==(x170^x171))^x172);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 18;
	uint32_t x175 = UINT32_MAX;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = -292949517;

	t43 = ((x173==(x174^x175))^x176);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 111979130853LL;
	int32_t x178 = INT32_MIN;
	volatile int8_t x179 = INT8_MAX;
	volatile int32_t t44 = 18;

	t44 = ((x177==(x178^x179))^x180);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 3U;
	static volatile int16_t x183 = 277;
	volatile int32_t x184 = INT32_MIN;
	int32_t t45 = INT32_MIN;

	t45 = ((x181==(x182^x183))^x184);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MAX;
	uint8_t x186 = UINT8_MAX;
	int64_t x188 = -1LL;
	int64_t t46 = -174701818097379LL;

	t46 = ((x185==(x186^x187))^x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -3728216064102LL;
	int16_t x190 = 33;
	static int8_t x191 = INT8_MIN;
	volatile int64_t t47 = 26569056870LL;

	t47 = ((x189==(x190^x191))^x192);

	if (t47 != -370217061LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 357239LLU;
	int64_t x194 = INT64_MIN;
	volatile int64_t x195 = INT64_MAX;
	uint32_t x196 = 361862512U;
	uint32_t t48 = 4088U;

	t48 = ((x193==(x194^x195))^x196);

	if (t48 != 361862512U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int32_t x198 = -150016320;
	uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 5U;
	static volatile uint32_t t49 = 96157739U;

	t49 = ((x197==(x198^x199))^x200);

	if (t49 != 5U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MAX;
	uint16_t x202 = 1971U;
	int16_t x203 = INT16_MIN;
	int64_t x204 = -1LL;
	int64_t t50 = 30399477950611LL;

	t50 = ((x201==(x202^x203))^x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x205 = 9;
	static int64_t x206 = INT64_MIN;
	int32_t t51 = 7;

	t51 = ((x205==(x206^x207))^x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = INT64_MIN;
	static volatile int64_t x211 = INT64_MIN;
	uint32_t x212 = 332U;
	uint32_t t52 = 103687U;

	t52 = ((x209==(x210^x211))^x212);

	if (t52 != 332U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x215 = UINT32_MAX;
	volatile int32_t x216 = INT32_MAX;
	volatile int32_t t53 = INT32_MAX;

	t53 = ((x213==(x214^x215))^x216);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t t54 = 0;

	t54 = ((x217==(x218^x219))^x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	int16_t x224 = 3;
	volatile int32_t t55 = -198362070;

	t55 = ((x221==(x222^x223))^x224);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -399474LL;
	volatile int8_t x226 = INT8_MIN;
	int32_t t56 = 14510;

	t56 = ((x225==(x226^x227))^x228);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = 191;
	int64_t x231 = INT64_MIN;
	static int32_t x232 = -1;
	volatile int32_t t57 = -32192030;

	t57 = ((x229==(x230^x231))^x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 4376223974899358020LLU;
	int16_t x234 = INT16_MIN;
	int64_t x235 = -1LL;
	static int16_t x236 = -14;
	static int32_t t58 = -122296;

	t58 = ((x233==(x234^x235))^x236);

	if (t58 != -14) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = 3025U;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = 1801U;
	uint32_t t59 = UINT32_MAX;

	t59 = ((x237==(x238^x239))^x240);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = 5778453;
	int16_t x243 = 4;
	int32_t t60 = -50902;

	t60 = ((x241==(x242^x243))^x244);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1526;
	uint8_t x246 = 1U;
	int8_t x247 = 1;
	int16_t x248 = INT16_MAX;

	t61 = ((x245==(x246^x247))^x248);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	volatile int64_t x250 = INT64_MIN;
	volatile int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;

	t62 = ((x249==(x250^x251))^x252);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = 3U;
	static int32_t x254 = INT32_MIN;
	uint64_t x256 = 97257802753673037LLU;

	t63 = ((x253==(x254^x255))^x256);

	if (t63 != 97257802753673037LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	volatile int64_t x259 = INT64_MAX;
	volatile int32_t x260 = -1;

	t64 = ((x257==(x258^x259))^x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -25942872;
	volatile uint32_t x262 = 2005164U;
	static uint16_t x263 = UINT16_MAX;
	int64_t t65 = 694301912920837LL;

	t65 = ((x261==(x262^x263))^x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = -1;
	static int32_t x267 = INT32_MAX;
	int16_t x268 = -1;
	volatile int32_t t66 = -7403449;

	t66 = ((x265==(x266^x267))^x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -1LL;
	uint32_t x270 = 221U;
	uint16_t x271 = 5616U;
	int32_t t67 = -26810;

	t67 = ((x269==(x270^x271))^x272);

	if (t67 != 13139) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint16_t x274 = 5U;
	uint16_t x275 = 0U;
	int16_t x276 = -1;
	volatile int32_t t68 = 6149;

	t68 = ((x273==(x274^x275))^x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MAX;
	uint16_t x279 = 3928U;
	volatile int32_t t69 = -16576925;

	t69 = ((x277==(x278^x279))^x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MAX;
	static uint64_t x282 = 0LLU;
	int64_t x283 = -708207480082831LL;
	uint8_t x284 = 3U;
	int32_t t70 = -1;

	t70 = ((x281==(x282^x283))^x284);

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MAX;
	volatile uint16_t x287 = 3U;
	volatile int32_t t71 = 487107930;

	t71 = ((x285==(x286^x287))^x288);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 1525U;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	uint64_t x292 = 77233157LLU;
	uint64_t t72 = 760441815057488254LLU;

	t72 = ((x289==(x290^x291))^x292);

	if (t72 != 77233157LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = 4697;
	int8_t x295 = INT8_MIN;
	int16_t x296 = -134;
	int32_t t73 = -189765;

	t73 = ((x293==(x294^x295))^x296);

	if (t73 != -134) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -299344LL;
	int16_t x298 = INT16_MIN;
	uint32_t x299 = 429U;
	static int16_t x300 = INT16_MIN;

	t74 = ((x297==(x298^x299))^x300);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile uint16_t x302 = 703U;
	int32_t x303 = INT32_MAX;

	t75 = ((x301==(x302^x303))^x304);

	if (t75 != 611757752U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -10625482;

	t76 = ((x305==(x306^x307))^x308);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 323;
	volatile uint64_t x310 = 14LLU;
	int64_t x311 = INT64_MIN;
	static uint64_t x312 = 219311287414355LLU;
	static volatile uint64_t t77 = 272068508012330655LLU;

	t77 = ((x309==(x310^x311))^x312);

	if (t77 != 219311287414355LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 465;
	volatile int16_t x314 = INT16_MAX;
	uint16_t x315 = 3U;
	uint16_t x316 = 15U;
	int32_t t78 = 7171;

	t78 = ((x313==(x314^x315))^x316);

	if (t78 != 15) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = 1;
	volatile uint16_t x318 = 503U;
	static uint32_t x319 = UINT32_MAX;
	int32_t x320 = -1221;

	t79 = ((x317==(x318^x319))^x320);

	if (t79 != -1221) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 6U;
	static int16_t x322 = INT16_MAX;
	int64_t x323 = -149896503LL;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = INT64_MIN;

	t80 = ((x321==(x322^x323))^x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;

	t81 = ((x325==(x326^x327))^x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = 247975856839021380LL;
	int16_t x331 = 3785;
	volatile uint64_t x332 = 3LLU;

	t82 = ((x329==(x330^x331))^x332);

	if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -1LL;
	int8_t x334 = INT8_MIN;
	int64_t x335 = 7919349964088824LL;
	uint64_t x336 = 2646060LLU;

	t83 = ((x333==(x334^x335))^x336);

	if (t83 != 2646060LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	uint8_t x338 = 29U;
	static int64_t x340 = INT64_MAX;

	t84 = ((x337==(x338^x339))^x340);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = -9994;
	uint32_t x343 = UINT32_MAX;
	static volatile int64_t x344 = -1LL;
	static int64_t t85 = -572419LL;

	t85 = ((x341==(x342^x343))^x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MAX;
	int64_t x346 = -1LL;
	uint8_t x347 = 1U;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -3059569;

	t86 = ((x345==(x346^x347))^x348);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 7821510U;
	static uint64_t x350 = 2247759405957923LLU;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t87 = -3816367;

	t87 = ((x349==(x350^x351))^x352);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MIN;
	uint64_t x355 = 3443055918246LLU;
	uint64_t x356 = UINT64_MAX;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = ((x353==(x354^x355))^x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MAX;
	int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MIN;

	t89 = ((x357==(x358^x359))^x360);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 984259359LLU;
	int32_t x362 = 7645;
	int16_t x364 = INT16_MIN;
	int32_t t90 = -12283597;

	t90 = ((x361==(x362^x363))^x364);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int32_t x367 = -1;
	int8_t x368 = INT8_MIN;

	t91 = ((x365==(x366^x367))^x368);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = 1872;
	volatile uint16_t x372 = 100U;
	int32_t t92 = 1766;

	t92 = ((x369==(x370^x371))^x372);

	if (t92 != 100) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x375 = INT64_MIN;
	uint64_t x376 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = ((x373==(x374^x375))^x376);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	int64_t x378 = -4236163504461LL;
	uint16_t x379 = 303U;
	int8_t x380 = INT8_MIN;
	static int32_t t94 = -4640;

	t94 = ((x377==(x378^x379))^x380);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MAX;
	int32_t t95 = -4524;

	t95 = ((x381==(x382^x383))^x384);

	if (t95 != 47) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -39784;
	int16_t x387 = 31;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x385==(x386^x387))^x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 12589593928266884LLU;
	volatile int64_t x390 = -196455800710LL;
	static int64_t x391 = 6979LL;
	int16_t x392 = -1;
	static volatile int32_t t97 = 214695;

	t97 = ((x389==(x390^x391))^x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	volatile int32_t x396 = -1;
	int32_t t98 = -157081607;

	t98 = ((x393==(x394^x395))^x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = 5635;
	static int64_t x400 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

	t99 = ((x397==(x398^x399))^x400);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

