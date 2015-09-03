#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = INT8_MAX;
static int8_t x9 = INT8_MIN;
volatile int32_t t2 = -1065;
static int32_t t3 = -1254;
int64_t x18 = -125795629LL;
volatile int32_t x23 = -3250;
volatile int32_t t5 = 23544;
static int32_t x28 = INT32_MIN;
volatile int32_t t8 = 4403;
int8_t x39 = 1;
volatile uint8_t x40 = 20U;
static int8_t x42 = INT8_MIN;
static int64_t x44 = 108828314097644783LL;
static int16_t x46 = -3855;
uint64_t x50 = UINT64_MAX;
int16_t x53 = -15;
int8_t x58 = -7;
int16_t x62 = INT16_MAX;
uint16_t x67 = 1896U;
uint64_t x68 = UINT64_MAX;
volatile int64_t x71 = INT64_MIN;
int32_t t17 = 7555425;
uint16_t x73 = UINT16_MAX;
int64_t x74 = INT64_MAX;
static uint32_t x75 = 4133U;
static volatile int32_t t20 = -19411304;
int16_t x85 = INT16_MIN;
int32_t x89 = INT32_MIN;
int32_t t22 = 1256185;
int64_t x99 = 417692756LL;
int32_t t24 = 82946;
int32_t x109 = INT32_MIN;
int8_t x122 = 5;
int16_t x124 = INT16_MIN;
uint32_t x126 = 0U;
int32_t t31 = -6;
static int16_t x130 = INT16_MIN;
int64_t x134 = -2638LL;
static int64_t x143 = INT64_MAX;
int16_t x144 = INT16_MAX;
volatile int8_t x146 = 2;
static volatile uint8_t x150 = 1U;
static uint8_t x162 = UINT8_MAX;
volatile int32_t x167 = 10138;
uint8_t x168 = 11U;
volatile int8_t x189 = 6;
volatile int32_t t47 = 4993237;
int64_t x196 = INT64_MIN;
int64_t x197 = INT64_MIN;
volatile int32_t x199 = INT32_MAX;
int16_t x200 = INT16_MIN;
int64_t x202 = -1LL;
int32_t x203 = INT32_MAX;
static volatile int32_t t50 = 1;
static volatile int8_t x206 = -1;
uint8_t x211 = 1U;
static volatile int32_t t52 = 4631;
volatile int64_t x213 = INT64_MIN;
volatile int32_t x216 = -1;
static volatile int32_t t53 = -978046937;
int32_t x221 = -737195;
static int64_t x222 = -1LL;
volatile int32_t t55 = -16399;
int16_t x231 = 432;
volatile int32_t t57 = 6087;
volatile int32_t x234 = INT32_MIN;
int64_t x252 = INT64_MAX;
volatile uint16_t x258 = 9579U;
static int8_t x267 = -1;
int32_t t66 = 265734860;
volatile int32_t x281 = INT32_MIN;
int16_t x282 = -1;
volatile int8_t x288 = -1;
int32_t x289 = INT32_MIN;
int16_t x293 = -1;
uint64_t x301 = UINT64_MAX;
int64_t x304 = INT64_MAX;
int32_t t77 = 20690;
int32_t t78 = 36177950;
int32_t t81 = 15;
uint8_t x331 = 37U;
int32_t t82 = -91796;
static uint32_t x333 = 3901325U;
volatile uint16_t x337 = 2U;
int8_t x338 = INT8_MIN;
int32_t t85 = 19978043;
int8_t x349 = INT8_MIN;
volatile int32_t x351 = -51608448;
static volatile int32_t t87 = -498731678;
static uint16_t x358 = 1U;
static int32_t t89 = 23;
int64_t x363 = INT64_MIN;
int8_t x368 = 1;
int16_t x374 = INT16_MAX;
uint8_t x375 = UINT8_MAX;
static int16_t x380 = -1;
int32_t t94 = 4395317;
static int8_t x390 = INT8_MIN;
static int32_t t97 = -1153271;
uint16_t x397 = UINT16_MAX;
static int64_t x399 = INT64_MAX;


void f0(void) {
	uint64_t x1 = 1LLU;
	int64_t x2 = -1LL;
	static uint32_t x3 = 176519968U;
	volatile uint64_t x4 = UINT64_MAX;
	int32_t t0 = -529;

	t0 = ((x1==(x2<=x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = -1LL;
	volatile int8_t x7 = INT8_MIN;
	int32_t x8 = 53806513;
	volatile int32_t t1 = 8;

	t1 = ((x5==(x6<=x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -8655134;
	volatile uint16_t x11 = UINT16_MAX;
	int8_t x12 = -3;

	t2 = ((x9==(x10<=x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int16_t x14 = 0;
	int64_t x15 = -1LL;
	int64_t x16 = -1LL;

	t3 = ((x13==(x14<=x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	static volatile int16_t x19 = INT16_MIN;
	volatile uint16_t x20 = 208U;
	int32_t t4 = -8156;

	t4 = ((x17==(x18<=x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	volatile uint32_t x22 = 1456187U;
	volatile int8_t x24 = -1;

	t5 = ((x21==(x22<=x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	int64_t x26 = -1LL;
	int16_t x27 = INT16_MAX;
	int32_t t6 = -753026281;

	t6 = ((x25==(x26<=x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	volatile int32_t x30 = INT32_MAX;
	uint32_t x31 = 5248780U;
	static int16_t x32 = -1;
	int32_t t7 = -8725;

	t7 = ((x29==(x30<=x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -67;
	uint16_t x34 = UINT16_MAX;
	volatile int64_t x35 = INT64_MAX;
	int64_t x36 = -1LL;

	t8 = ((x33==(x34<=x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -4730;
	int32_t x38 = -1;
	static int32_t t9 = -20532;

	t9 = ((x37==(x38<=x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1471LL;
	volatile int64_t x43 = INT64_MIN;
	static volatile int32_t t10 = -17051;

	t10 = ((x41==(x42<=x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	int64_t x47 = 15530614731LL;
	static uint32_t x48 = 981414U;
	volatile int32_t t11 = 787780;

	t11 = ((x45==(x46<=x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 520724088LLU;
	uint16_t x51 = 4U;
	uint16_t x52 = 84U;
	int32_t t12 = -5763;

	t12 = ((x49==(x50<=x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MAX;
	uint16_t x55 = 29U;
	static int64_t x56 = 17728611406749471LL;
	static int32_t t13 = -47;

	t13 = ((x53==(x54<=x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 266400829U;
	int32_t x59 = -1;
	static int8_t x60 = -18;
	int32_t t14 = 1150;

	t14 = ((x57==(x58<=x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 123U;
	int32_t x63 = 11437;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -10;

	t15 = ((x61==(x62<=x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint32_t x66 = 356U;
	int32_t t16 = 39953;

	t16 = ((x65==(x66<=x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile int16_t x70 = -1;
	int64_t x72 = INT64_MAX;

	t17 = ((x69==(x70<=x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -7911;

	t18 = ((x73==(x74<=x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = 126U;
	uint64_t x78 = 3485315216148914LLU;
	int32_t x79 = -1;
	int8_t x80 = -25;
	int32_t t19 = 57911046;

	t19 = ((x77==(x78<=x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MAX;
	static int64_t x83 = 0LL;
	int16_t x84 = INT16_MAX;

	t20 = ((x81==(x82<=x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x86 = 3588382;
	static int8_t x87 = INT8_MIN;
	uint32_t x88 = 5388244U;
	int32_t t21 = 269;

	t21 = ((x85==(x86<=x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = -40;
	int64_t x92 = 46820624652270986LL;

	t22 = ((x89==(x90<=x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint16_t x94 = 114U;
	volatile uint8_t x95 = UINT8_MAX;
	volatile int16_t x96 = INT16_MIN;
	static volatile int32_t t23 = -967473287;

	t23 = ((x93==(x94<=x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	static uint32_t x98 = UINT32_MAX;
	static int16_t x100 = 225;

	t24 = ((x97==(x98<=x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	volatile int16_t x102 = INT16_MAX;
	static int64_t x103 = 0LL;
	uint64_t x104 = UINT64_MAX;
	int32_t t25 = 650926346;

	t25 = ((x101==(x102<=x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 292U;
	int16_t x106 = 5345;
	int32_t x107 = -8817944;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = -198934;

	t26 = ((x105==(x106<=x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = UINT64_MAX;
	int8_t x111 = -1;
	static volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = -439777;

	t27 = ((x109==(x110<=x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	static uint8_t x114 = UINT8_MAX;
	static uint64_t x115 = UINT64_MAX;
	static volatile uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = -250199;

	t28 = ((x113==(x114<=x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 109849129603972799LLU;
	uint32_t x118 = 7U;
	static uint32_t x119 = 26431770U;
	int64_t x120 = 112450084923LL;
	static int32_t t29 = 24;

	t29 = ((x117==(x118<=x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 4U;
	int64_t x123 = -2LL;
	static volatile int32_t t30 = -180782929;

	t30 = ((x121==(x122<=x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -243674;
	int64_t x127 = -3391052LL;
	int64_t x128 = INT64_MAX;

	t31 = ((x125==(x126<=x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 7U;
	int32_t x131 = INT32_MIN;
	volatile uint64_t x132 = 5774LLU;
	volatile int32_t t32 = 55962473;

	t32 = ((x129==(x130<=x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int16_t x135 = INT16_MAX;
	int8_t x136 = 0;
	static volatile int32_t t33 = -16661;

	t33 = ((x133==(x134<=x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	static uint8_t x138 = 0U;
	int64_t x139 = INT64_MIN;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = 393;

	t34 = ((x137==(x138<=x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 52U;
	int8_t x142 = INT8_MIN;
	int32_t t35 = 26064626;

	t35 = ((x141==(x142<=x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x147 = 3519998594LLU;
	uint16_t x148 = 1U;
	int32_t t36 = 3556993;

	t36 = ((x145==(x146<=x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = UINT8_MAX;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = 56451U;
	static int32_t t37 = -526211;

	t37 = ((x149==(x150<=x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -42884;
	int16_t x154 = 0;
	uint32_t x155 = 339100702U;
	volatile int16_t x156 = -1;
	static int32_t t38 = 47816664;

	t38 = ((x153==(x154<=x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	static int64_t x158 = -1LL;
	volatile uint16_t x159 = UINT16_MAX;
	static uint8_t x160 = 121U;
	int32_t t39 = -26048;

	t39 = ((x157==(x158<=x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	int32_t x163 = 1;
	static int8_t x164 = INT8_MIN;
	int32_t t40 = 1636;

	t40 = ((x161==(x162<=x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	volatile int32_t x166 = -1;
	int32_t t41 = -22522;

	t41 = ((x165==(x166<=x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = 3327;
	static uint8_t x170 = 1U;
	volatile int32_t x171 = -241902;
	uint64_t x172 = 36604870959342LLU;
	volatile int32_t t42 = -15;

	t42 = ((x169==(x170<=x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MAX;
	uint64_t x174 = 43906LLU;
	int32_t x175 = -1;
	int16_t x176 = INT16_MAX;
	int32_t t43 = 1;

	t43 = ((x173==(x174<=x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MAX;
	int64_t x178 = -5LL;
	volatile int64_t x179 = 259235064285LL;
	int8_t x180 = -1;
	volatile int32_t t44 = -1214402;

	t44 = ((x177==(x178<=x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	volatile int32_t x182 = -462804;
	static int32_t x183 = -6;
	static int8_t x184 = -2;
	static volatile int32_t t45 = -144568952;

	t45 = ((x181==(x182<=x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = 1898;
	uint8_t x187 = 3U;
	volatile int64_t x188 = -1LL;
	static int32_t t46 = 7462158;

	t46 = ((x185==(x186<=x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	static int32_t x192 = INT32_MIN;

	t47 = ((x189==(x190<=x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = 0;
	int16_t x194 = INT16_MIN;
	uint8_t x195 = 3U;
	int32_t t48 = -919;

	t48 = ((x193==(x194<=x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = -203;
	int32_t t49 = 23;

	t49 = ((x197==(x198<=x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -15555622;
	static uint8_t x204 = 6U;

	t50 = ((x201==(x202<=x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 34U;
	int16_t x207 = INT16_MAX;
	int16_t x208 = 2462;
	volatile int32_t t51 = 4;

	t51 = ((x205==(x206<=x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = UINT64_MAX;
	volatile int16_t x210 = -1;
	static int32_t x212 = INT32_MIN;

	t52 = ((x209==(x210<=x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = 0;
	int64_t x215 = -1LL;

	t53 = ((x213==(x214<=x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = 24;
	int64_t x218 = -1028343682328206353LL;
	int64_t x219 = -1LL;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -3830699;

	t54 = ((x217==(x218<=x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x223 = 1213;
	int32_t x224 = 75921;

	t55 = ((x221==(x222<=x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	int8_t x226 = INT8_MIN;
	volatile int8_t x227 = INT8_MAX;
	volatile uint16_t x228 = 3U;
	volatile int32_t t56 = 0;

	t56 = ((x225==(x226<=x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 2707U;
	static uint8_t x230 = 5U;
	volatile int8_t x232 = INT8_MAX;

	t57 = ((x229==(x230<=x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	volatile int8_t x235 = -6;
	volatile int8_t x236 = -1;
	int32_t t58 = -3;

	t58 = ((x233==(x234<=x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 2307U;
	static volatile int8_t x238 = -19;
	volatile uint64_t x239 = UINT64_MAX;
	static uint64_t x240 = 5LLU;
	volatile int32_t t59 = -1;

	t59 = ((x237==(x238<=x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 14918U;
	static volatile uint64_t x242 = 12LLU;
	uint8_t x243 = 71U;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 6793280;

	t60 = ((x241==(x242<=x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -239;
	volatile int16_t x246 = -1;
	static volatile int8_t x247 = INT8_MIN;
	static int8_t x248 = -1;
	int32_t t61 = 1137;

	t61 = ((x245==(x246<=x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	uint16_t x250 = 135U;
	static int8_t x251 = INT8_MIN;
	static int32_t t62 = -45400;

	t62 = ((x249==(x250<=x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 369U;
	int32_t x254 = -120169;
	int64_t x255 = -1LL;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -17;

	t63 = ((x253==(x254<=x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	int32_t x259 = -1;
	uint32_t x260 = 175569108U;
	volatile int32_t t64 = -7;

	t64 = ((x257==(x258<=x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	volatile int32_t x263 = INT32_MAX;
	volatile uint8_t x264 = 5U;
	static volatile int32_t t65 = 1;

	t65 = ((x261==(x262<=x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 3740;
	uint8_t x266 = UINT8_MAX;
	static int64_t x268 = -1LL;

	t66 = ((x265==(x266<=x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	uint32_t x270 = 2140624U;
	int16_t x271 = -1;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = 32704611;

	t67 = ((x269==(x270<=x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = -2;
	uint64_t x276 = 67793845632LLU;
	int32_t t68 = -1350966;

	t68 = ((x273==(x274<=x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 5U;
	static int32_t x278 = INT32_MIN;
	volatile int64_t x279 = INT64_MIN;
	volatile int16_t x280 = INT16_MIN;
	static int32_t t69 = -3;

	t69 = ((x277==(x278<=x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x283 = INT8_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = -221103;

	t70 = ((x281==(x282<=x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int16_t x286 = 176;
	static uint64_t x287 = 3480611LLU;
	int32_t t71 = -9530;

	t71 = ((x285==(x286<=x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = 82488627U;
	int32_t x291 = -10848901;
	uint64_t x292 = UINT64_MAX;
	volatile int32_t t72 = 193;

	t72 = ((x289==(x290<=x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = -490550LL;
	int32_t x295 = 177;
	volatile int8_t x296 = -15;
	static volatile int32_t t73 = 46;

	t73 = ((x293==(x294<=x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = 0U;
	volatile int16_t x298 = INT16_MIN;
	volatile uint8_t x299 = 54U;
	static int32_t x300 = -1892299;
	int32_t t74 = -114;

	t74 = ((x297==(x298<=x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x302 = INT8_MIN;
	uint32_t x303 = 1691U;
	volatile int32_t t75 = 7165;

	t75 = ((x301==(x302<=x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MIN;
	int32_t x306 = 2235;
	int32_t x307 = INT32_MIN;
	volatile int64_t x308 = -1LL;
	static volatile int32_t t76 = -159;

	t76 = ((x305==(x306<=x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MIN;
	uint16_t x310 = UINT16_MAX;
	int16_t x311 = INT16_MAX;
	int64_t x312 = -1LL;

	t77 = ((x309==(x310<=x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = -1;
	int16_t x314 = INT16_MIN;
	int64_t x315 = 2644965LL;
	int64_t x316 = INT64_MAX;

	t78 = ((x313==(x314<=x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int32_t x318 = -1;
	volatile int8_t x319 = INT8_MAX;
	uint64_t x320 = 191300235LLU;
	volatile int32_t t79 = -7429783;

	t79 = ((x317==(x318<=x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -112;
	int64_t x322 = INT64_MAX;
	int32_t x323 = -691;
	uint64_t x324 = 295851171736250LLU;
	int32_t t80 = 32887;

	t80 = ((x321==(x322<=x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 91U;
	int32_t x326 = 1;
	static uint32_t x327 = 424U;
	uint32_t x328 = 703132U;

	t81 = ((x325==(x326<=x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int64_t x330 = INT64_MAX;
	uint32_t x332 = UINT32_MAX;

	t82 = ((x329==(x330<=x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = -410;
	uint16_t x335 = 17U;
	volatile int8_t x336 = -41;
	volatile int32_t t83 = -9083;

	t83 = ((x333==(x334<=x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x339 = 49106U;
	int32_t x340 = 0;
	int32_t t84 = -44419325;

	t84 = ((x337==(x338<=x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MAX;
	int16_t x342 = 1577;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = 23163952561LL;

	t85 = ((x341==(x342<=x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	static int16_t x346 = INT16_MIN;
	volatile uint64_t x347 = UINT64_MAX;
	int16_t x348 = -1;
	int32_t t86 = 59;

	t86 = ((x345==(x346<=x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = UINT32_MAX;
	uint32_t x352 = UINT32_MAX;

	t87 = ((x349==(x350<=x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int8_t x354 = INT8_MAX;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = 1636U;
	int32_t t88 = 210;

	t88 = ((x353==(x354<=x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 2LLU;
	static int32_t x359 = -1;
	static int8_t x360 = INT8_MIN;

	t89 = ((x357==(x358<=x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	static uint8_t x362 = 4U;
	volatile int8_t x364 = -1;
	volatile int32_t t90 = -7604;

	t90 = ((x361==(x362<=x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	uint32_t x366 = 8125969U;
	static uint64_t x367 = 7573552LLU;
	volatile int32_t t91 = 150;

	t91 = ((x365==(x366<=x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	int32_t x371 = 317;
	int32_t x372 = -829368178;
	static int32_t t92 = -903;

	t92 = ((x369==(x370<=x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	static uint64_t x376 = 7679313276756813501LLU;
	int32_t t93 = 635175917;

	t93 = ((x373==(x374<=x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -397LL;
	int8_t x378 = -49;
	static uint8_t x379 = 2U;

	t94 = ((x377==(x378<=x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 90085U;
	int64_t x382 = INT64_MIN;
	int32_t x383 = 718032;
	uint16_t x384 = 1U;
	int32_t t95 = -118055085;

	t95 = ((x381==(x382<=x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 458U;
	int64_t x386 = INT64_MAX;
	int16_t x387 = 6;
	int64_t x388 = -1101472348402874524LL;
	static volatile int32_t t96 = -27364745;

	t96 = ((x385==(x386<=x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 2476U;
	int8_t x391 = -1;
	volatile uint16_t x392 = UINT16_MAX;

	t97 = ((x389==(x390<=x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 312219485206737LLU;
	int32_t x394 = INT32_MIN;
	int16_t x395 = -1;
	int16_t x396 = INT16_MAX;
	int32_t t98 = 1044022;

	t98 = ((x393==(x394<=x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -1474;

	t99 = ((x397==(x398<=x399))<x400);

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

