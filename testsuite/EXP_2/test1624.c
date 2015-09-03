#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = UINT64_MAX;
uint16_t x16 = UINT16_MAX;
static int8_t x18 = 5;
uint8_t x19 = 0U;
volatile int32_t t4 = INT32_MAX;
static int64_t x36 = -1LL;
volatile int8_t x40 = INT8_MIN;
static uint64_t x49 = UINT64_MAX;
uint16_t x52 = 6U;
int16_t x53 = INT16_MAX;
int16_t x54 = INT16_MAX;
static volatile uint64_t x56 = 32245456LLU;
volatile int64_t x62 = -1LL;
uint64_t x64 = UINT64_MAX;
volatile uint64_t t15 = UINT64_MAX;
int16_t x71 = INT16_MIN;
int16_t x74 = -1;
int64_t x75 = -1LL;
uint32_t x77 = UINT32_MAX;
int16_t x80 = -1;
int32_t x82 = INT32_MIN;
volatile uint8_t x83 = 44U;
static int64_t x91 = INT64_MIN;
volatile int32_t t23 = -1416263;
static volatile uint64_t x106 = UINT64_MAX;
static volatile uint64_t t26 = UINT64_MAX;
uint8_t x113 = 26U;
uint8_t x118 = UINT8_MAX;
volatile int8_t x119 = 12;
int8_t x120 = INT8_MIN;
volatile int32_t t30 = -2730827;
int16_t x130 = -3;
int32_t t32 = -1407895;
static uint8_t x136 = 88U;
volatile uint64_t x137 = 3276836266535LLU;
int32_t t34 = INT32_MIN;
volatile uint16_t x143 = 22U;
int32_t t35 = 574727652;
int32_t t36 = -49;
volatile int64_t x154 = -1LL;
int8_t x168 = INT8_MIN;
volatile uint64_t t43 = 3LLU;
int32_t x180 = INT32_MIN;
volatile int64_t x181 = -1LL;
int16_t x182 = INT16_MIN;
int16_t x183 = INT16_MAX;
int16_t x189 = -1;
static int8_t x193 = -1;
uint16_t x196 = 201U;
static int32_t x197 = INT32_MIN;
uint32_t x201 = UINT32_MAX;
int16_t x202 = 13;
volatile int32_t t50 = 206324;
int16_t x218 = INT16_MIN;
uint16_t x224 = UINT16_MAX;
uint8_t x232 = UINT8_MAX;
volatile int64_t x238 = INT64_MAX;
static int16_t x241 = -1;
volatile int64_t x244 = -573933LL;
int8_t x248 = -6;
volatile int32_t t61 = -407906530;
uint32_t x253 = UINT32_MAX;
uint32_t t65 = UINT32_MAX;
int32_t x266 = INT32_MIN;
uint8_t x276 = 92U;
static volatile int16_t x278 = -1;
int8_t x279 = INT8_MAX;
uint32_t x281 = 7U;
int64_t x285 = INT64_MAX;
uint8_t x288 = 64U;
static volatile int8_t x291 = -1;
int16_t x295 = -1;
volatile int8_t x297 = 6;
int8_t x299 = -1;
uint8_t x303 = 0U;
int8_t x307 = INT8_MAX;
volatile int32_t t79 = 2;
uint8_t x324 = 5U;
static int8_t x328 = INT8_MIN;
volatile int32_t x332 = INT32_MAX;
static int8_t x334 = -13;
int64_t x342 = INT64_MAX;
int8_t x343 = 43;
int32_t x345 = INT32_MIN;
int8_t x351 = -1;
uint16_t x352 = 1U;
int8_t x355 = INT8_MIN;
uint16_t x358 = 370U;
uint64_t x366 = UINT64_MAX;
uint8_t x369 = 8U;
int64_t x371 = 36588554221LL;
int32_t x386 = -155818126;
static int8_t x388 = INT8_MIN;
volatile int32_t t97 = 355098237;
static uint32_t x394 = 342U;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int16_t x2 = -1;
	int64_t x3 = INT64_MIN;
	uint8_t x4 = 25U;
	volatile int32_t t0 = -4428843;

	t0 = ((x1==(x2<=x3))|x4);

	if (t0 != 25) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -2017;
	static volatile int16_t x6 = INT16_MIN;
	uint16_t x7 = 100U;
	static uint64_t x8 = UINT64_MAX;

	t1 = ((x5==(x6<=x7))|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int16_t x10 = INT16_MAX;
	volatile int64_t x11 = -1LL;
	int64_t x12 = 168545775801552465LL;
	static volatile int64_t t2 = 238197431482977063LL;

	t2 = ((x9==(x10<=x11))|x12);

	if (t2 != 168545775801552465LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 14;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	volatile int32_t t3 = -4603008;

	t3 = ((x13==(x14<=x15))|x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 19705310U;
	int32_t x20 = INT32_MAX;

	t4 = ((x17==(x18<=x19))|x20);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static volatile int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MIN;
	int32_t x24 = 2513365;
	volatile int32_t t5 = 124970;

	t5 = ((x21==(x22<=x23))|x24);

	if (t5 != 2513365) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 25;
	int32_t x26 = 4511484;
	volatile int16_t x27 = -9;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 875;

	t6 = ((x25==(x26<=x27))|x28);

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 13894U;
	uint16_t x30 = 2U;
	volatile int64_t x31 = -1LL;
	int64_t x32 = -1LL;
	static volatile int64_t t7 = -547011876293LL;

	t7 = ((x29==(x30<=x31))|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 38;
	static uint32_t x34 = 35U;
	int8_t x35 = INT8_MIN;
	static volatile int64_t t8 = -646LL;

	t8 = ((x33==(x34<=x35))|x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int8_t x38 = INT8_MIN;
	int32_t x39 = -47768332;
	int32_t t9 = 50282654;

	t9 = ((x37==(x38<=x39))|x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint32_t x42 = 1220U;
	int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MAX;
	int32_t t10 = -38267695;

	t10 = ((x41==(x42<=x43))|x44);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = INT64_MIN;
	uint16_t x48 = 119U;
	static volatile int32_t t11 = -54355068;

	t11 = ((x45==(x46<=x47))|x48);

	if (t11 != 119) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -1;
	int64_t x51 = 8165849614365LL;
	volatile int32_t t12 = -437468255;

	t12 = ((x49==(x50<=x51))|x52);

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x55 = -1;
	uint64_t t13 = 16578995953357563LLU;

	t13 = ((x53==(x54<=x55))|x56);

	if (t13 != 32245456LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 1174U;
	uint16_t x58 = 326U;
	uint16_t x59 = UINT16_MAX;
	static uint8_t x60 = UINT8_MAX;
	static int32_t t14 = -127;

	t14 = ((x57==(x58<=x59))|x60);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = -1LL;
	uint16_t x63 = UINT16_MAX;

	t15 = ((x61==(x62<=x63))|x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int8_t x66 = -1;
	int8_t x67 = -3;
	int16_t x68 = 1;
	static volatile int32_t t16 = -2;

	t16 = ((x65==(x66<=x67))|x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	int16_t x70 = INT16_MAX;
	static uint8_t x72 = UINT8_MAX;
	static volatile int32_t t17 = -1;

	t17 = ((x69==(x70<=x71))|x72);

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	volatile int16_t x76 = INT16_MIN;
	int32_t t18 = 39569007;

	t18 = ((x73==(x74<=x75))|x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 1165U;
	int16_t x79 = -1;
	volatile int32_t t19 = -5923;

	t19 = ((x77==(x78<=x79))|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = -1;
	int16_t x84 = -1;
	int32_t t20 = -113;

	t20 = ((x81==(x82<=x83))|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static int8_t x86 = 57;
	int16_t x87 = -886;
	volatile int32_t x88 = INT32_MAX;
	volatile int32_t t21 = INT32_MAX;

	t21 = ((x85==(x86<=x87))|x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	static volatile uint8_t x92 = 29U;
	static volatile int32_t t22 = -5876414;

	t22 = ((x89==(x90<=x91))|x92);

	if (t22 != 29) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MAX;
	int64_t x95 = 48310705085426LL;
	int32_t x96 = -1;

	t23 = ((x93==(x94<=x95))|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	volatile int16_t x98 = INT16_MIN;
	static volatile int8_t x99 = INT8_MAX;
	static volatile int32_t x100 = 130030;
	volatile int32_t t24 = 45;

	t24 = ((x97==(x98<=x99))|x100);

	if (t24 != 130030) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	volatile int64_t x102 = -544618657LL;
	static uint32_t x103 = 56645269U;
	volatile uint64_t x104 = 3879LLU;
	static volatile uint64_t t25 = 2832LLU;

	t25 = ((x101==(x102<=x103))|x104);

	if (t25 != 3879LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 252;
	static uint32_t x107 = UINT32_MAX;
	volatile uint64_t x108 = UINT64_MAX;

	t26 = ((x105==(x106<=x107))|x108);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 24U;
	int8_t x110 = 12;
	uint16_t x111 = 25393U;
	volatile int64_t x112 = -1LL;
	int64_t t27 = 60215066LL;

	t27 = ((x109==(x110<=x111))|x112);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 3331LL;
	volatile int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MAX;
	static int32_t t28 = INT32_MAX;

	t28 = ((x113==(x114<=x115))|x116);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	static int32_t t29 = 247418325;

	t29 = ((x117==(x118<=x119))|x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 24U;
	uint32_t x122 = UINT32_MAX;
	volatile int16_t x123 = INT16_MAX;
	int16_t x124 = INT16_MAX;

	t30 = ((x121==(x122<=x123))|x124);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint32_t x126 = 117U;
	uint8_t x127 = 16U;
	static uint16_t x128 = 890U;
	volatile int32_t t31 = 67;

	t31 = ((x125==(x126<=x127))|x128);

	if (t31 != 890) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -1;
	volatile uint16_t x131 = 27903U;
	uint8_t x132 = 109U;

	t32 = ((x129==(x130<=x131))|x132);

	if (t32 != 109) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = 3758;
	int16_t x134 = 0;
	static int16_t x135 = INT16_MAX;
	static int32_t t33 = 877847;

	t33 = ((x133==(x134<=x135))|x136);

	if (t33 != 88) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	int64_t x139 = 542993259LL;
	volatile int32_t x140 = INT32_MIN;

	t34 = ((x137==(x138<=x139))|x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	volatile uint64_t x142 = 725239LLU;
	int32_t x144 = -35927031;

	t35 = ((x141==(x142<=x143))|x144);

	if (t35 != -35927031) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	static int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MIN;
	int16_t x148 = 1;

	t36 = ((x145==(x146<=x147))|x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	uint64_t x150 = 0LLU;
	int64_t x151 = -1LL;
	static int32_t x152 = -1;
	static volatile int32_t t37 = -54;

	t37 = ((x149==(x150<=x151))|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	int64_t x155 = INT64_MIN;
	int8_t x156 = -12;
	volatile int32_t t38 = 183343332;

	t38 = ((x153==(x154<=x155))|x156);

	if (t38 != -12) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 974402860U;
	static uint16_t x160 = UINT16_MAX;
	int32_t t39 = 780033;

	t39 = ((x157==(x158<=x159))|x160);

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int32_t x162 = 34914169;
	volatile uint32_t x163 = UINT32_MAX;
	volatile int8_t x164 = -1;
	volatile int32_t t40 = 28503258;

	t40 = ((x161==(x162<=x163))|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	static int8_t x166 = 5;
	volatile uint8_t x167 = 3U;
	int32_t t41 = 122889;

	t41 = ((x165==(x166<=x167))|x168);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	static volatile int64_t x170 = -1LL;
	static volatile int8_t x171 = INT8_MIN;
	static int16_t x172 = -9533;
	int32_t t42 = -32660188;

	t42 = ((x169==(x170<=x171))|x172);

	if (t42 != -9533) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int32_t x174 = -49;
	int64_t x175 = 161566168745527120LL;
	uint64_t x176 = 2014114461261793LLU;

	t43 = ((x173==(x174<=x175))|x176);

	if (t43 != 2014114461261793LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	volatile int32_t x178 = -2147574;
	int32_t x179 = INT32_MAX;
	int32_t t44 = INT32_MIN;

	t44 = ((x177==(x178<=x179))|x180);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x184 = 4140;
	volatile int32_t t45 = -11043;

	t45 = ((x181==(x182<=x183))|x184);

	if (t45 != 4140) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = -1;
	int64_t x187 = INT64_MIN;
	uint8_t x188 = 17U;
	volatile int32_t t46 = -2137421;

	t46 = ((x185==(x186<=x187))|x188);

	if (t46 != 17) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	volatile int16_t x191 = INT16_MAX;
	static uint64_t x192 = UINT64_MAX;
	static volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x189==(x190<=x191))|x192);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = 99394U;
	uint8_t x195 = UINT8_MAX;
	volatile int32_t t48 = 4;

	t48 = ((x193==(x194<=x195))|x196);

	if (t48 != 201) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x198 = UINT64_MAX;
	uint8_t x199 = 40U;
	int8_t x200 = -1;
	volatile int32_t t49 = 310;

	t49 = ((x197==(x198<=x199))|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x203 = 6259U;
	volatile int8_t x204 = -1;

	t50 = ((x201==(x202<=x203))|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 12LLU;
	int32_t x206 = INT32_MIN;
	uint8_t x207 = 9U;
	uint64_t x208 = 29194022LLU;
	volatile uint64_t t51 = 205058482847LLU;

	t51 = ((x205==(x206<=x207))|x208);

	if (t51 != 29194022LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	int8_t x210 = -13;
	volatile int64_t x211 = 43245057952LL;
	volatile int64_t x212 = -8633LL;
	volatile int64_t t52 = -107901691690LL;

	t52 = ((x209==(x210<=x211))|x212);

	if (t52 != -8633LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	static uint16_t x214 = 5U;
	uint32_t x215 = 5493081U;
	volatile uint64_t x216 = 43850232508LLU;
	uint64_t t53 = 3816562474LLU;

	t53 = ((x213==(x214<=x215))|x216);

	if (t53 != 43850232508LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 242U;
	static int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -62;

	t54 = ((x217==(x218<=x219))|x220);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = -1;
	int16_t x222 = -1;
	static int32_t x223 = INT32_MIN;
	volatile int32_t t55 = 62662;

	t55 = ((x221==(x222<=x223))|x224);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -13;
	static uint8_t x226 = 17U;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = -1;
	volatile int32_t t56 = -76330;

	t56 = ((x225==(x226<=x227))|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 4858059306521011LLU;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	static int32_t t57 = 773712;

	t57 = ((x229==(x230<=x231))|x232);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	int32_t x234 = -3;
	static uint8_t x235 = 0U;
	uint8_t x236 = UINT8_MAX;
	static volatile int32_t t58 = -526093;

	t58 = ((x233==(x234<=x235))|x236);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x237 = UINT16_MAX;
	uint8_t x239 = 13U;
	uint8_t x240 = 55U;
	volatile int32_t t59 = 0;

	t59 = ((x237==(x238<=x239))|x240);

	if (t59 != 55) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x242 = 184U;
	int64_t x243 = -1LL;
	int64_t t60 = 8452218454623992LL;

	t60 = ((x241==(x242<=x243))|x244);

	if (t60 != -573933LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 2;
	static int32_t x246 = -2909304;
	static volatile int8_t x247 = -1;

	t61 = ((x245==(x246<=x247))|x248);

	if (t61 != -6) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MAX;
	int16_t x252 = 1;
	int32_t t62 = -14;

	t62 = ((x249==(x250<=x251))|x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = 782310039251271727LL;
	int8_t x255 = -1;
	int32_t x256 = INT32_MIN;
	int32_t t63 = INT32_MIN;

	t63 = ((x253==(x254<=x255))|x256);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	static int8_t x258 = INT8_MAX;
	volatile uint8_t x259 = 1U;
	int8_t x260 = -1;
	volatile int32_t t64 = 1;

	t64 = ((x257==(x258<=x259))|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 2;
	int64_t x262 = 130056070632984743LL;
	int16_t x263 = INT16_MIN;
	volatile uint32_t x264 = UINT32_MAX;

	t65 = ((x261==(x262<=x263))|x264);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 27659U;
	int8_t x267 = 0;
	volatile uint32_t x268 = 1138672U;
	uint32_t t66 = 5552U;

	t66 = ((x265==(x266<=x267))|x268);

	if (t66 != 1138672U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -3;
	int8_t x270 = 8;
	int32_t x271 = INT32_MIN;
	uint16_t x272 = 73U;
	static volatile int32_t t67 = -1138461;

	t67 = ((x269==(x270<=x271))|x272);

	if (t67 != 73) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	static uint64_t x274 = UINT64_MAX;
	int8_t x275 = -1;
	static int32_t t68 = -43034971;

	t68 = ((x273==(x274<=x275))|x276);

	if (t68 != 92) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	static int32_t x280 = 2603;
	volatile int32_t t69 = 6725907;

	t69 = ((x277==(x278<=x279))|x280);

	if (t69 != 2603) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = 3105152403345797874LLU;
	volatile int64_t x283 = INT64_MIN;
	static volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = 3;

	t70 = ((x281==(x282<=x283))|x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x286 = -18;
	int64_t x287 = -1075795LL;
	static int32_t t71 = 259207183;

	t71 = ((x285==(x286<=x287))|x288);

	if (t71 != 64) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 2;
	int32_t x290 = 0;
	int8_t x292 = INT8_MIN;
	int32_t t72 = 71;

	t72 = ((x289==(x290<=x291))|x292);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 60U;
	uint64_t x294 = 121286613646LLU;
	int16_t x296 = -1;
	volatile int32_t t73 = -126;

	t73 = ((x293==(x294<=x295))|x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	volatile int64_t x300 = INT64_MIN;
	static int64_t t74 = INT64_MIN;

	t74 = ((x297==(x298<=x299))|x300);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = 3703;
	int8_t x302 = INT8_MIN;
	int8_t x304 = -1;
	volatile int32_t t75 = 15870819;

	t75 = ((x301==(x302<=x303))|x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -6;
	int64_t x306 = 102824734LL;
	uint8_t x308 = 7U;
	int32_t t76 = 188910;

	t76 = ((x305==(x306<=x307))|x308);

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = 10;
	int8_t x310 = INT8_MIN;
	static int8_t x311 = -1;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 800619966;

	t77 = ((x309==(x310<=x311))|x312);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 7LL;
	int64_t x314 = 24LL;
	uint64_t x315 = 3159518LLU;
	uint16_t x316 = UINT16_MAX;
	static int32_t t78 = -32;

	t78 = ((x313==(x314<=x315))|x316);

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = -1LL;
	uint16_t x318 = 24U;
	volatile int64_t x319 = 2644619619417LL;
	static int32_t x320 = 1;

	t79 = ((x317==(x318<=x319))|x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -11139;
	int8_t x322 = 8;
	volatile uint16_t x323 = 46U;
	int32_t t80 = -19506;

	t80 = ((x321==(x322<=x323))|x324);

	if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 766219411U;
	int8_t x326 = -1;
	uint64_t x327 = 5LLU;
	int32_t t81 = 13;

	t81 = ((x325==(x326<=x327))|x328);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int8_t x330 = -1;
	int8_t x331 = INT8_MIN;
	static int32_t t82 = INT32_MAX;

	t82 = ((x329==(x330<=x331))|x332);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	int64_t x335 = 17372338174560456LL;
	int16_t x336 = 7;
	int32_t t83 = 1556;

	t83 = ((x333==(x334<=x335))|x336);

	if (t83 != 7) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 155702;
	int16_t x338 = INT16_MIN;
	volatile uint32_t x339 = 1107U;
	static uint16_t x340 = UINT16_MAX;
	int32_t t84 = 2174;

	t84 = ((x337==(x338<=x339))|x340);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	static int8_t x344 = 3;
	volatile int32_t t85 = -9777;

	t85 = ((x341==(x342<=x343))|x344);

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x346 = -1LL;
	int8_t x347 = -16;
	volatile int32_t x348 = INT32_MAX;
	int32_t t86 = INT32_MAX;

	t86 = ((x345==(x346<=x347))|x348);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	volatile int16_t x350 = 8514;
	volatile int32_t t87 = 1;

	t87 = ((x349==(x350<=x351))|x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 16062U;
	uint16_t x354 = UINT16_MAX;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = 42793546;

	t88 = ((x353==(x354<=x355))|x356);

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 41U;
	uint64_t x359 = 114785363LLU;
	uint8_t x360 = 1U;
	int32_t t89 = 0;

	t89 = ((x357==(x358<=x359))|x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = -2;
	uint16_t x363 = UINT16_MAX;
	static int64_t x364 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = ((x361==(x362<=x363))|x364);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 1U;
	int32_t x367 = 286586;
	int32_t x368 = -1;
	volatile int32_t t91 = -1747457;

	t91 = ((x365==(x366<=x367))|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MIN;
	int32_t x372 = INT32_MIN;
	int32_t t92 = INT32_MIN;

	t92 = ((x369==(x370<=x371))|x372);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -7;
	int8_t x374 = -1;
	uint32_t x375 = 48471U;
	int64_t x376 = INT64_MIN;
	static int64_t t93 = INT64_MIN;

	t93 = ((x373==(x374<=x375))|x376);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 23;
	static volatile int32_t x378 = -1;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	int32_t t94 = -1;

	t94 = ((x377==(x378<=x379))|x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	volatile uint16_t x382 = 12113U;
	uint64_t x383 = 554246155940540LLU;
	volatile int8_t x384 = -3;
	static int32_t t95 = 67995;

	t95 = ((x381==(x382<=x383))|x384);

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 987U;
	static int32_t x387 = INT32_MIN;
	int32_t t96 = 847406655;

	t96 = ((x385==(x386<=x387))|x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MAX;
	uint16_t x390 = 20U;
	volatile int32_t x391 = INT32_MIN;
	uint8_t x392 = UINT8_MAX;

	t97 = ((x389==(x390<=x391))|x392);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = UINT8_MAX;
	int32_t x395 = INT32_MAX;
	volatile int16_t x396 = INT16_MAX;
	int32_t t98 = -6170;

	t98 = ((x393==(x394<=x395))|x396);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 130945430U;
	static int8_t x398 = INT8_MIN;
	volatile int8_t x399 = -1;
	int64_t x400 = INT64_MIN;
	static int64_t t99 = INT64_MIN;

	t99 = ((x397==(x398<=x399))|x400);

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

