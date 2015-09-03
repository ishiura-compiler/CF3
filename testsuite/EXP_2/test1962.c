#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = INT32_MIN;
static uint16_t x30 = UINT16_MAX;
volatile int16_t x35 = -1;
uint32_t x38 = 20379662U;
uint8_t x42 = UINT8_MAX;
uint64_t x43 = UINT64_MAX;
uint8_t x52 = UINT8_MAX;
uint8_t x54 = 2U;
static int8_t x57 = 11;
volatile int32_t x58 = INT32_MAX;
int16_t x60 = 1;
int16_t x65 = INT16_MIN;
int32_t t17 = 30;
static uint8_t x73 = 1U;
uint32_t x74 = UINT32_MAX;
int16_t x75 = -1;
volatile int64_t t19 = 622162975186810LL;
volatile uint32_t t22 = 25475175U;
uint32_t x102 = 23854482U;
volatile int64_t t25 = INT64_MAX;
static uint16_t x106 = UINT16_MAX;
int8_t x121 = -1;
static volatile uint16_t x124 = UINT16_MAX;
static int32_t t30 = 597605;
uint32_t x132 = 682U;
volatile uint64_t x134 = UINT64_MAX;
volatile int8_t x136 = INT8_MIN;
int8_t x137 = 5;
static int8_t x140 = INT8_MAX;
volatile int32_t t34 = 14295232;
int32_t x141 = 132110113;
static int64_t x148 = INT64_MIN;
volatile int32_t x160 = -1;
int8_t x163 = INT8_MIN;
volatile int8_t x164 = INT8_MAX;
int32_t x170 = -31264873;
int64_t x173 = INT64_MAX;
int16_t x180 = INT16_MIN;
static int8_t x181 = INT8_MIN;
uint8_t x192 = 85U;
int64_t x194 = INT64_MIN;
static int32_t x195 = INT32_MIN;
volatile int64_t x196 = INT64_MIN;
static int64_t t48 = INT64_MIN;
int64_t x197 = 3049112673213LL;
uint16_t x198 = 0U;
int64_t x199 = INT64_MIN;
volatile uint8_t x200 = 1U;
uint32_t x204 = UINT32_MAX;
int32_t x208 = INT32_MAX;
static volatile int32_t t51 = INT32_MAX;
static int8_t x213 = INT8_MIN;
volatile uint64_t t55 = UINT64_MAX;
static int8_t x229 = 1;
uint64_t x239 = 111LLU;
uint8_t x240 = UINT8_MAX;
int32_t x247 = -1;
int64_t x250 = -2171008LL;
int32_t x255 = 86564639;
static uint32_t x257 = 44U;
volatile uint32_t x258 = 6U;
uint64_t x266 = 3994454LLU;
uint64_t x267 = 249996012804701LLU;
volatile int64_t t66 = INT64_MAX;
int8_t x272 = -15;
int8_t x273 = -53;
volatile uint32_t x277 = 1U;
static volatile int8_t x279 = INT8_MIN;
int32_t t69 = 36941;
int8_t x283 = INT8_MIN;
int64_t x284 = INT64_MAX;
int16_t x306 = INT16_MAX;
static int8_t x308 = INT8_MIN;
volatile int8_t x314 = INT8_MAX;
volatile int8_t x325 = INT8_MAX;
uint64_t x329 = 1LLU;
uint64_t x330 = 13915404175324LLU;
uint16_t x332 = UINT16_MAX;
int16_t x335 = INT16_MIN;
int32_t t83 = 1412;
int8_t x337 = INT8_MIN;
volatile int16_t x345 = INT16_MIN;
uint16_t x347 = 8165U;
static volatile uint8_t x348 = 0U;
volatile int32_t t86 = -1781623;
uint32_t x352 = UINT32_MAX;
volatile uint16_t x355 = 171U;
static volatile int16_t x360 = INT16_MIN;
int32_t x361 = INT32_MAX;
int32_t x362 = -6;
int32_t x363 = -132;
volatile uint8_t x373 = 44U;
int8_t x376 = INT8_MIN;
uint8_t x379 = 7U;
uint8_t x380 = UINT8_MAX;
int16_t x383 = -1;
volatile int32_t x386 = 6092;
static volatile int64_t t96 = -13055108857LL;
int8_t x395 = 1;


void f0(void) {
	int16_t x1 = -30;
	int32_t x2 = -1;
	static volatile int16_t x3 = INT16_MAX;
	int16_t x4 = 1;
	volatile int32_t t0 = -1;

	t0 = ((x1==(x2|x3))|x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int16_t x6 = INT16_MIN;
	uint16_t x7 = UINT16_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	static volatile int32_t t1 = -14654645;

	t1 = ((x5==(x6|x7))|x8);

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	volatile int16_t x10 = INT16_MIN;
	uint8_t x11 = 0U;
	volatile int32_t t2 = INT32_MIN;

	t2 = ((x9==(x10|x11))|x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -22620;
	int8_t x14 = -5;
	int64_t x15 = -2336957793LL;
	volatile int16_t x16 = -1;
	volatile int32_t t3 = 1603;

	t3 = ((x13==(x14|x15))|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 100U;
	int64_t x18 = -1LL;
	int16_t x19 = -1;
	volatile int16_t x20 = INT16_MIN;
	static int32_t t4 = 33098;

	t4 = ((x17==(x18|x19))|x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = -1LL;
	int8_t x23 = 1;
	static int32_t x24 = INT32_MIN;
	int32_t t5 = INT32_MIN;

	t5 = ((x21==(x22|x23))|x24);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static int16_t x26 = INT16_MIN;
	static volatile uint64_t x27 = 3236612LLU;
	volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x25==(x26|x27))|x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 0U;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = 0U;
	int32_t t7 = -7;

	t7 = ((x29==(x30|x31))|x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = UINT16_MAX;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t8 = INT32_MIN;

	t8 = ((x33==(x34|x35))|x36);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 27;
	int16_t x39 = INT16_MIN;
	int8_t x40 = -4;
	int32_t t9 = 0;

	t9 = ((x37==(x38|x39))|x40);

	if (t9 != -4) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 27U;
	int8_t x44 = 0;
	int32_t t10 = -521698538;

	t10 = ((x41==(x42|x43))|x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 0U;
	int64_t x46 = 30584062LL;
	int8_t x47 = INT8_MIN;
	static int16_t x48 = -1;
	int32_t t11 = -708912;

	t11 = ((x45==(x46|x47))|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 259;
	static uint32_t x50 = 1489265U;
	volatile int8_t x51 = 10;
	int32_t t12 = -79;

	t12 = ((x49==(x50|x51))|x52);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -22;
	int32_t x55 = -3;
	int32_t x56 = INT32_MIN;
	int32_t t13 = INT32_MIN;

	t13 = ((x53==(x54|x55))|x56);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = INT16_MIN;
	static int32_t t14 = -439225930;

	t14 = ((x57==(x58|x59))|x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	volatile int32_t x62 = 1511034;
	volatile int64_t x63 = -1LL;
	uint16_t x64 = 2312U;
	volatile int32_t t15 = 74921;

	t15 = ((x61==(x62|x63))|x64);

	if (t15 != 2312) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = -37;
	static uint32_t x68 = UINT32_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x65==(x66|x67))|x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	volatile int16_t x70 = INT16_MIN;
	volatile int64_t x71 = INT64_MIN;
	uint8_t x72 = 10U;

	t17 = ((x69==(x70|x71))|x72);

	if (t17 != 10) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x76 = UINT64_MAX;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x73==(x74|x75))|x76);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 2889;
	uint32_t x78 = 4873598U;
	int32_t x79 = INT32_MIN;
	int64_t x80 = -320448802LL;

	t19 = ((x77==(x78|x79))|x80);

	if (t19 != -320448802LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int32_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	uint64_t x84 = 15053513142459LLU;
	static uint64_t t20 = 16651LLU;

	t20 = ((x81==(x82|x83))|x84);

	if (t20 != 15053513142459LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	uint16_t x86 = 2U;
	volatile int8_t x87 = INT8_MAX;
	volatile int32_t x88 = 3;
	int32_t t21 = -118268418;

	t21 = ((x85==(x86|x87))|x88);

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = INT32_MIN;
	int64_t x91 = -39LL;
	uint32_t x92 = 984023039U;

	t22 = ((x89==(x90|x91))|x92);

	if (t22 != 984023039U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	static int8_t x94 = -5;
	int8_t x95 = INT8_MIN;
	volatile int32_t x96 = INT32_MAX;
	int32_t t23 = INT32_MAX;

	t23 = ((x93==(x94|x95))|x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	uint16_t x98 = 5U;
	uint32_t x99 = 71U;
	int64_t x100 = INT64_MIN;
	volatile int64_t t24 = INT64_MIN;

	t24 = ((x97==(x98|x99))|x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 2768U;
	volatile uint16_t x103 = 1U;
	static volatile int64_t x104 = INT64_MAX;

	t25 = ((x101==(x102|x103))|x104);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 190U;
	static uint8_t x107 = UINT8_MAX;
	static int64_t x108 = -81043835LL;
	int64_t t26 = 37LL;

	t26 = ((x105==(x106|x107))|x108);

	if (t26 != -81043835LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int32_t x110 = INT32_MAX;
	static int64_t x111 = INT64_MAX;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t27 = UINT64_MAX;

	t27 = ((x109==(x110|x111))|x112);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = -191;
	static volatile uint32_t x115 = 8365148U;
	volatile uint32_t x116 = UINT32_MAX;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = ((x113==(x114|x115))|x116);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -1LL;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	uint16_t x120 = 77U;
	int32_t t29 = 1030000746;

	t29 = ((x117==(x118|x119))|x120);

	if (t29 != 77) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = 224U;
	uint32_t x123 = UINT32_MAX;

	t30 = ((x121==(x122|x123))|x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	int8_t x126 = -2;
	static volatile int32_t x127 = INT32_MAX;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -7498;

	t31 = ((x125==(x126|x127))|x128);

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 857U;
	int8_t x130 = -1;
	static int32_t x131 = 3474786;
	static uint32_t t32 = 15U;

	t32 = ((x129==(x130|x131))|x132);

	if (t32 != 682U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -1;
	int8_t x135 = -23;
	static int32_t t33 = 2;

	t33 = ((x133==(x134|x135))|x136);

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -912626125;
	int8_t x139 = INT8_MAX;

	t34 = ((x137==(x138|x139))|x140);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = 28240544U;
	volatile int16_t x143 = 0;
	int8_t x144 = 23;
	volatile int32_t t35 = 5394617;

	t35 = ((x141==(x142|x143))|x144);

	if (t35 != 23) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	int64_t x146 = -1LL;
	static volatile int64_t x147 = INT64_MAX;
	int64_t t36 = INT64_MIN;

	t36 = ((x145==(x146|x147))|x148);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 822715683LL;
	int8_t x150 = INT8_MIN;
	static int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	int32_t t37 = 2;

	t37 = ((x149==(x150|x151))|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 2381160U;
	static int8_t x154 = -1;
	static volatile uint8_t x155 = 1U;
	uint32_t x156 = UINT32_MAX;
	static uint32_t t38 = UINT32_MAX;

	t38 = ((x153==(x154|x155))|x156);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -12;
	uint64_t x158 = 3413561LLU;
	volatile int16_t x159 = -148;
	volatile int32_t t39 = -248;

	t39 = ((x157==(x158|x159))|x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	int64_t x162 = -1LL;
	volatile int32_t t40 = 5;

	t40 = ((x161==(x162|x163))|x164);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = -1;
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MAX;
	int64_t x168 = INT64_MIN;
	int64_t t41 = 1763844706867762430LL;

	t41 = ((x165==(x166|x167))|x168);

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 31733900LLU;
	int8_t x171 = 29;
	volatile int8_t x172 = INT8_MIN;
	static volatile int32_t t42 = 278;

	t42 = ((x169==(x170|x171))|x172);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = 51;
	volatile int8_t x175 = -1;
	static uint16_t x176 = 194U;
	static int32_t t43 = -1;

	t43 = ((x173==(x174|x175))|x176);

	if (t43 != 194) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x177 = -1060643;
	int8_t x178 = -1;
	volatile uint32_t x179 = 5590U;
	static int32_t t44 = -278;

	t44 = ((x177==(x178|x179))|x180);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = 24451562599LLU;
	int32_t x183 = -1;
	int16_t x184 = -2;
	volatile int32_t t45 = -11072;

	t45 = ((x181==(x182|x183))|x184);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 3U;
	int64_t x186 = 2761778LL;
	int64_t x187 = INT64_MAX;
	int64_t x188 = INT64_MIN;
	int64_t t46 = INT64_MIN;

	t46 = ((x185==(x186|x187))|x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static volatile uint8_t x190 = 3U;
	int32_t x191 = -1;
	volatile int32_t t47 = 5500;

	t47 = ((x189==(x190|x191))|x192);

	if (t47 != 85) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;

	t48 = ((x193==(x194|x195))|x196);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t t49 = -3687377;

	t49 = ((x197==(x198|x199))|x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = 179368926;
	static volatile int32_t x203 = INT32_MIN;
	uint32_t t50 = UINT32_MAX;

	t50 = ((x201==(x202|x203))|x204);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 3885859U;
	int32_t x206 = 39198338;
	int16_t x207 = INT16_MIN;

	t51 = ((x205==(x206|x207))|x208);

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = 0;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = INT32_MAX;
	int64_t x212 = -1LL;
	static int64_t t52 = -3925730450655LL;

	t52 = ((x209==(x210|x211))|x212);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = 192;
	uint16_t x215 = 202U;
	int8_t x216 = INT8_MIN;
	static int32_t t53 = 388653;

	t53 = ((x213==(x214|x215))|x216);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = 33239989;
	volatile uint8_t x218 = 7U;
	int32_t x219 = 2;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 3471;

	t54 = ((x217==(x218|x219))|x220);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -2839;
	int8_t x222 = INT8_MAX;
	static volatile uint32_t x223 = UINT32_MAX;
	static volatile uint64_t x224 = UINT64_MAX;

	t55 = ((x221==(x222|x223))|x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = -3243838LL;
	volatile uint16_t x226 = 3U;
	int16_t x227 = 10;
	int64_t x228 = -1LL;
	volatile int64_t t56 = 575345629474865LL;

	t56 = ((x225==(x226|x227))|x228);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x230 = 0;
	volatile uint16_t x231 = 272U;
	volatile int16_t x232 = -1;
	int32_t t57 = -26002481;

	t57 = ((x229==(x230|x231))|x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = INT16_MIN;
	static volatile int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -454040;

	t58 = ((x233==(x234|x235))|x236);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	uint32_t x238 = 1787467U;
	static int32_t t59 = -9799;

	t59 = ((x237==(x238|x239))|x240);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = 2U;
	int32_t t60 = 682;

	t60 = ((x241==(x242|x243))|x244);

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	int8_t x246 = 1;
	volatile uint32_t x248 = 45702U;
	volatile uint32_t t61 = 1073141U;

	t61 = ((x245==(x246|x247))|x248);

	if (t61 != 45702U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	static volatile int32_t x251 = INT32_MAX;
	uint8_t x252 = 104U;
	int32_t t62 = 3191;

	t62 = ((x249==(x250|x251))|x252);

	if (t62 != 105) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x254 = 7LLU;
	int32_t x256 = 3539276;
	volatile int32_t t63 = -1;

	t63 = ((x253==(x254|x255))|x256);

	if (t63 != 3539276) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x259 = 1;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = INT32_MIN;

	t64 = ((x257==(x258|x259))|x260);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int64_t x262 = INT64_MAX;
	volatile int64_t x263 = -1LL;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = ((x261==(x262|x263))|x264);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = 8678LL;
	int64_t x268 = INT64_MAX;

	t66 = ((x265==(x266|x267))|x268);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -91191087799LL;
	uint8_t x270 = UINT8_MAX;
	static volatile int32_t x271 = INT32_MIN;
	volatile int32_t t67 = 55151;

	t67 = ((x269==(x270|x271))|x272);

	if (t67 != -15) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 285624775006827LLU;
	int16_t x275 = -1;
	int64_t x276 = -14003267339935069LL;
	volatile int64_t t68 = -1LL;

	t68 = ((x273==(x274|x275))|x276);

	if (t68 != -14003267339935069LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x278 = 3;
	int8_t x280 = INT8_MIN;

	t69 = ((x277==(x278|x279))|x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 92846U;
	static int16_t x282 = -3;
	static int64_t t70 = INT64_MAX;

	t70 = ((x281==(x282|x283))|x284);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 1685;
	volatile int32_t x286 = -1;
	uint16_t x287 = UINT16_MAX;
	volatile uint32_t x288 = 843U;
	static volatile uint32_t t71 = 559258022U;

	t71 = ((x285==(x286|x287))|x288);

	if (t71 != 843U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = -1;
	int8_t x290 = INT8_MAX;
	volatile int8_t x291 = INT8_MIN;
	volatile uint32_t x292 = 1706027184U;
	volatile uint32_t t72 = 6354U;

	t72 = ((x289==(x290|x291))|x292);

	if (t72 != 1706027185U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -43;
	volatile uint32_t x294 = 154873U;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t73 = INT32_MIN;

	t73 = ((x293==(x294|x295))|x296);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 457520U;
	int32_t x298 = -1;
	uint32_t x299 = 24972U;
	int32_t x300 = INT32_MIN;
	int32_t t74 = INT32_MIN;

	t74 = ((x297==(x298|x299))|x300);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = INT64_MIN;
	int16_t x304 = -1;
	static int32_t t75 = 84;

	t75 = ((x301==(x302|x303))|x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	volatile int8_t x307 = INT8_MIN;
	volatile int32_t t76 = 0;

	t76 = ((x305==(x306|x307))|x308);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MIN;
	volatile uint64_t x310 = 5894602404244221LLU;
	int8_t x311 = 59;
	static uint8_t x312 = 1U;
	int32_t t77 = 98;

	t77 = ((x309==(x310|x311))|x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MIN;
	int32_t x315 = INT32_MAX;
	int16_t x316 = 1;
	volatile int32_t t78 = -25691993;

	t78 = ((x313==(x314|x315))|x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = -1973;
	volatile int32_t x318 = -1;
	volatile uint64_t x319 = 116472037706LLU;
	int32_t x320 = -1;
	volatile int32_t t79 = -186842;

	t79 = ((x317==(x318|x319))|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = 109U;
	uint16_t x322 = 1426U;
	static int8_t x323 = 0;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = ((x321==(x322|x323))|x324);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x326 = 16LLU;
	int32_t x327 = 59189;
	volatile int16_t x328 = -1;
	volatile int32_t t81 = -657176;

	t81 = ((x325==(x326|x327))|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x331 = INT16_MAX;
	volatile int32_t t82 = 321;

	t82 = ((x329==(x330|x331))|x332);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	static int32_t x334 = INT32_MAX;
	int8_t x336 = 0;

	t83 = ((x333==(x334|x335))|x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MAX;
	int64_t x340 = -1LL;
	int64_t t84 = -1LL;

	t84 = ((x337==(x338|x339))|x340);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	int32_t x342 = -623;
	volatile int8_t x343 = INT8_MAX;
	static int32_t x344 = INT32_MAX;
	int32_t t85 = INT32_MAX;

	t85 = ((x341==(x342|x343))|x344);

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = UINT32_MAX;

	t86 = ((x345==(x346|x347))|x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 60;
	int16_t x350 = INT16_MIN;
	static int16_t x351 = INT16_MIN;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = ((x349==(x350|x351))|x352);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x354 = INT8_MIN;
	int16_t x356 = INT16_MAX;
	int32_t t88 = -5;

	t88 = ((x353==(x354|x355))|x356);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 321U;
	static uint16_t x358 = 374U;
	int8_t x359 = INT8_MIN;
	static volatile int32_t t89 = -19;

	t89 = ((x357==(x358|x359))|x360);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x364 = 55U;
	int32_t t90 = -508743;

	t90 = ((x361==(x362|x363))|x364);

	if (t90 != 55) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x365 = -1;
	int64_t x366 = -1LL;
	int8_t x367 = 1;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = 1741;

	t91 = ((x365==(x366|x367))|x368);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 16901LLU;
	int16_t x370 = INT16_MAX;
	int16_t x371 = INT16_MAX;
	static int32_t x372 = -578725;
	static volatile int32_t t92 = 67;

	t92 = ((x369==(x370|x371))|x372);

	if (t92 != -578725) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = -1LL;
	static int32_t t93 = 267039028;

	t93 = ((x373==(x374|x375))|x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	static int32_t x378 = 43;
	volatile int32_t t94 = 38;

	t94 = ((x377==(x378|x379))|x380);

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

	t95 = ((x381==(x382|x383))|x384);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	static int32_t x387 = INT32_MIN;
	volatile int64_t x388 = -1LL;

	t96 = ((x385==(x386|x387))|x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	int32_t x390 = INT32_MIN;
	int32_t x391 = -1;
	static int64_t x392 = -1LL;
	volatile int64_t t97 = 6344LL;

	t97 = ((x389==(x390|x391))|x392);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	static int8_t x394 = INT8_MAX;
	volatile uint16_t x396 = 120U;
	int32_t t98 = 1;

	t98 = ((x393==(x394|x395))|x396);

	if (t98 != 120) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 9U;
	volatile int64_t x398 = 325294744LL;
	int8_t x399 = -1;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = 27933;

	t99 = ((x397==(x398|x399))|x400);

	if (t99 != 255) { NG(); } else { ; }
	
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

