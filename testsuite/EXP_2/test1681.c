#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 717958130;
int16_t x13 = INT16_MIN;
uint32_t x17 = UINT32_MAX;
int8_t x21 = INT8_MIN;
static int8_t x36 = -1;
int32_t t7 = -56;
volatile int16_t x44 = -1;
int32_t t10 = 1;
int64_t x50 = INT64_MIN;
static int16_t x51 = -1;
uint8_t x60 = 28U;
int32_t x63 = INT32_MIN;
volatile int64_t t14 = 8LL;
uint64_t x75 = UINT64_MAX;
uint64_t t17 = 3639908457969LLU;
uint32_t x83 = 15947U;
uint8_t x84 = 14U;
int8_t x86 = -1;
static volatile int32_t x92 = 16334224;
int16_t x93 = -1;
uint8_t x98 = UINT8_MAX;
int64_t x101 = -1LL;
static int16_t x102 = -51;
uint32_t x109 = 200U;
int16_t x112 = INT16_MIN;
static volatile uint64_t x120 = 236809LLU;
volatile uint64_t t27 = 359936114009LLU;
static uint8_t x122 = 63U;
volatile uint64_t x129 = UINT64_MAX;
int32_t x131 = INT32_MAX;
volatile int32_t t30 = -172476;
int32_t x139 = INT32_MIN;
int32_t x142 = INT32_MIN;
static uint8_t x145 = 10U;
volatile int64_t x147 = INT64_MIN;
int64_t x148 = INT64_MIN;
static volatile int64_t t33 = -498884217LL;
uint8_t x150 = UINT8_MAX;
uint8_t x154 = 7U;
int32_t x156 = -1;
int64_t x159 = -16387691915270LL;
int64_t t36 = 1070509761692LL;
int8_t x165 = INT8_MIN;
uint16_t x171 = 6423U;
uint8_t x174 = 3U;
int64_t x175 = INT64_MIN;
volatile int32_t t43 = 6258587;
int64_t x190 = 2235408122367370LL;
int32_t x191 = 421;
static int64_t t44 = 34754731242298LL;
static int64_t x204 = INT64_MIN;
int8_t x209 = -1;
int32_t x210 = -1;
uint16_t x212 = 38U;
uint32_t x213 = UINT32_MAX;
volatile int16_t x217 = -5;
static int8_t x226 = INT8_MIN;
int32_t t53 = -1129;
int8_t x229 = INT8_MAX;
volatile int16_t x231 = INT16_MAX;
static uint8_t x233 = 5U;
int32_t x252 = 31;
int32_t t58 = 202207;
int16_t x257 = -713;
int16_t x258 = -3751;
int64_t x266 = 514195210331337747LL;
int64_t x271 = INT64_MIN;
int32_t t63 = 192353742;
int16_t x274 = INT16_MIN;
int64_t t64 = -815594784468584LL;
volatile uint32_t t65 = 474970U;
int32_t t67 = -2365266;
int32_t x290 = INT32_MAX;
volatile int32_t x291 = INT32_MIN;
int8_t x300 = -58;
int32_t t70 = 11600828;
uint64_t x303 = UINT64_MAX;
static int16_t x316 = INT16_MIN;
int8_t x318 = INT8_MIN;
int32_t x325 = INT32_MAX;
uint32_t x328 = 7U;
uint32_t t77 = 470343328U;
int64_t x333 = INT64_MIN;
volatile int64_t t80 = -3489LL;
volatile uint64_t t81 = 37202LLU;
int64_t x346 = 3LL;
int32_t t85 = 726375;
uint16_t x365 = UINT16_MAX;
volatile int32_t x368 = -1;
int32_t t87 = -2109;
uint64_t t88 = 521517809LLU;
uint64_t t91 = 2526951992951LLU;
uint32_t x387 = UINT32_MAX;
uint32_t t92 = 691U;
int32_t x408 = -659850;
static uint8_t x411 = UINT8_MAX;
static int32_t x412 = INT32_MIN;
uint16_t x416 = 7U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint16_t x2 = 3260U;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = INT8_MAX;

	t0 = ((x1^(x2<=x3))/x4);

	if (t0 != -258) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 6U;
	int64_t x6 = -978LL;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = INT64_MAX;
	volatile int64_t t1 = 659897697280LL;

	t1 = ((x5^(x6<=x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	volatile int16_t x10 = INT16_MIN;
	int16_t x11 = -1;
	volatile int64_t x12 = INT64_MAX;
	volatile int64_t t2 = 1068859330673LL;

	t2 = ((x9^(x10<=x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = UINT32_MAX;
	uint16_t x16 = 21517U;
	volatile int32_t t3 = 36;

	t3 = ((x13^(x14<=x15))/x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -753016408699079987LL;
	int16_t x19 = 4835;
	int8_t x20 = 17;
	volatile uint32_t t4 = 1128U;

	t4 = ((x17^(x18<=x19))/x20);

	if (t4 != 252645134U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x22 = -28;
	int8_t x23 = 0;
	int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -10848165;

	t5 = ((x21^(x22<=x23))/x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	volatile uint64_t x32 = 66527084638560LLU;
	uint64_t t6 = 152054LLU;

	t6 = ((x29^(x30<=x31))/x32);

	if (t6 != 138640LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 105U;
	int8_t x34 = INT8_MAX;
	volatile int16_t x35 = 1;

	t7 = ((x33^(x34<=x35))/x36);

	if (t7 != -105) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	volatile int8_t x38 = -18;
	int16_t x39 = INT16_MIN;
	static uint8_t x40 = 1U;
	int32_t t8 = INT32_MIN;

	t8 = ((x37^(x38<=x39))/x40);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 0U;
	int64_t x42 = INT64_MIN;
	volatile int8_t x43 = 56;
	int32_t t9 = -79864;

	t9 = ((x41^(x42<=x43))/x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int32_t x46 = INT32_MAX;
	uint16_t x47 = UINT16_MAX;
	static int16_t x48 = 170;

	t10 = ((x45^(x46<=x47))/x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MIN;
	uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 49278666001173LLU;

	t11 = ((x49^(x50<=x51))/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	static uint8_t x54 = 30U;
	volatile uint16_t x55 = 182U;
	int64_t x56 = INT64_MAX;
	int64_t t12 = 55LL;

	t12 = ((x53^(x54<=x55))/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	int8_t x58 = -1;
	static uint32_t x59 = 93374U;
	volatile int32_t t13 = 291122;

	t13 = ((x57^(x58<=x59))/x60);

	if (t13 != -1170) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	volatile int16_t x62 = INT16_MIN;
	int64_t x64 = INT64_MIN;

	t14 = ((x61^(x62<=x63))/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 3621007LL;
	static volatile int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	volatile int64_t x68 = INT64_MIN;
	volatile int64_t t15 = 413853177124372LL;

	t15 = ((x65^(x66<=x67))/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t16 = -127762163;

	t16 = ((x73^(x74<=x75))/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = 1;
	int64_t x78 = -2236116396647LL;
	uint16_t x79 = 2U;
	volatile uint64_t x80 = 147691LLU;

	t17 = ((x77^(x78<=x79))/x80);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	int64_t x82 = 77910402088LL;
	static volatile int32_t t18 = 22044205;

	t18 = ((x81^(x82<=x83))/x84);

	if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MIN;
	int32_t t19 = -1684846;

	t19 = ((x85^(x86<=x87))/x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MAX;
	static uint64_t x91 = 510586800491321848LLU;
	volatile int32_t t20 = 0;

	t20 = ((x89^(x90<=x91))/x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = 1006779994;
	volatile uint16_t x95 = 5U;
	volatile int32_t x96 = 72;
	static volatile int32_t t21 = 2058946;

	t21 = ((x93^(x94<=x95))/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -14LL;
	uint64_t x99 = 47234272803846733LLU;
	volatile int16_t x100 = 4;
	int64_t t22 = -4161705093204LL;

	t22 = ((x97^(x98<=x99))/x100);

	if (t22 != -3LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x103 = 0U;
	uint16_t x104 = UINT16_MAX;
	int64_t t23 = -735523576992380531LL;

	t23 = ((x101^(x102<=x103))/x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x105 = INT32_MIN;
	int8_t x106 = 11;
	uint64_t x107 = 251703457LLU;
	int16_t x108 = INT16_MAX;
	int32_t t24 = 14872;

	t24 = ((x105^(x106<=x107))/x108);

	if (t24 != -65538) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x110 = INT8_MIN;
	volatile int32_t x111 = INT32_MIN;
	volatile uint32_t t25 = 567U;

	t25 = ((x109^(x110<=x111))/x112);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -1;
	int16_t x114 = INT16_MIN;
	volatile int16_t x115 = 3;
	int16_t x116 = INT16_MAX;
	int32_t t26 = 3967;

	t26 = ((x113^(x114<=x115))/x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = INT16_MIN;
	static int8_t x118 = INT8_MIN;
	static int64_t x119 = INT64_MIN;

	t27 = ((x117^(x118<=x119))/x120);

	if (t27 != 77897141044932LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = -1;
	int16_t x123 = -1;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t28 = 184;

	t28 = ((x121^(x122<=x123))/x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x130 = 78178449535009879LLU;
	uint32_t x132 = 520306177U;
	uint64_t t29 = 43411555LLU;

	t29 = ((x129^(x130<=x131))/x132);

	if (t29 != 35453632666LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x133 = -1;
	volatile int16_t x134 = 843;
	static int8_t x135 = -1;
	int8_t x136 = INT8_MIN;

	t30 = ((x133^(x134<=x135))/x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	int64_t x140 = 17107999293LL;
	static int64_t t31 = -48568319230005871LL;

	t31 = ((x137^(x138<=x139))/x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x141 = 3U;
	int32_t x143 = -1;
	uint8_t x144 = 93U;
	static int32_t t32 = -33852;

	t32 = ((x141^(x142<=x143))/x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x146 = INT64_MAX;

	t33 = ((x145^(x146<=x147))/x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x149 = UINT16_MAX;
	uint16_t x151 = 1417U;
	int64_t x152 = INT64_MAX;
	volatile int64_t t34 = 10217076000LL;

	t34 = ((x149^(x150<=x151))/x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 3U;
	int16_t x155 = INT16_MAX;
	volatile int32_t t35 = 22;

	t35 = ((x153^(x154<=x155))/x156);

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x157 = INT32_MIN;
	static int8_t x158 = -1;
	static int64_t x160 = INT64_MAX;

	t36 = ((x157^(x158<=x159))/x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x161 = -142;
	uint32_t x162 = 56U;
	volatile int32_t x163 = INT32_MIN;
	static uint16_t x164 = 118U;
	volatile int32_t t37 = 284;

	t37 = ((x161^(x162<=x163))/x164);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x166 = INT8_MIN;
	static volatile int16_t x167 = INT16_MIN;
	uint64_t x168 = 208286996763LLU;
	volatile uint64_t t38 = 105631026LLU;

	t38 = ((x165^(x166<=x167))/x168);

	if (t38 != 88564069LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x169 = UINT32_MAX;
	int32_t x170 = INT32_MIN;
	uint32_t x172 = 29U;
	volatile uint32_t t39 = 60U;

	t39 = ((x169^(x170<=x171))/x172);

	if (t39 != 148102320U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 375082U;
	int64_t x176 = INT64_MAX;
	volatile int64_t t40 = 1545105443LL;

	t40 = ((x173^(x174<=x175))/x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MAX;
	static int16_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	uint8_t x180 = UINT8_MAX;
	int32_t t41 = -10950;

	t41 = ((x177^(x178<=x179))/x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = 3090U;
	volatile int64_t x182 = -1LL;
	int16_t x183 = -1;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t42 = -1421;

	t42 = ((x181^(x182<=x183))/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -1;
	int16_t x186 = -1;
	int64_t x187 = 16271331660LL;
	volatile int16_t x188 = INT16_MAX;

	t43 = ((x185^(x186<=x187))/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = 15U;
	static int64_t x192 = -1519020LL;

	t44 = ((x189^(x190<=x191))/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1LL;
	volatile uint8_t x194 = 1U;
	volatile int64_t x195 = INT64_MIN;
	static int16_t x196 = INT16_MIN;
	int64_t t45 = 710128888646009229LL;

	t45 = ((x193^(x194<=x195))/x196);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x197 = INT16_MIN;
	uint32_t x198 = UINT32_MAX;
	static int32_t x199 = 0;
	uint16_t x200 = UINT16_MAX;
	int32_t t46 = 8431;

	t46 = ((x197^(x198<=x199))/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = INT32_MAX;
	uint64_t x202 = 8233449791479LLU;
	int64_t x203 = -74LL;
	int64_t t47 = 242LL;

	t47 = ((x201^(x202<=x203))/x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = -1LL;
	int8_t x206 = -17;
	int64_t x207 = INT64_MIN;
	int32_t x208 = 12178507;
	int64_t t48 = -8077228973436LL;

	t48 = ((x205^(x206<=x207))/x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x211 = -1;
	int32_t t49 = -15;

	t49 = ((x209^(x210<=x211))/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x214 = INT32_MIN;
	int16_t x215 = 964;
	int64_t x216 = -1LL;
	volatile int64_t t50 = 204807840637141LL;

	t50 = ((x213^(x214<=x215))/x216);

	if (t50 != -4294967294LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x218 = INT8_MAX;
	uint8_t x219 = 0U;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t51 = 3;

	t51 = ((x217^(x218<=x219))/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = 3;
	volatile uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	int64_t t52 = -16071LL;

	t52 = ((x221^(x222<=x223))/x224);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x225 = 278;
	volatile uint64_t x227 = 3008102016LLU;
	int8_t x228 = INT8_MIN;

	t53 = ((x225^(x226<=x227))/x228);

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x230 = 13U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t54 = -37;

	t54 = ((x229^(x230<=x231))/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x234 = 0LL;
	volatile int64_t x235 = INT64_MIN;
	uint64_t x236 = UINT64_MAX;
	uint64_t t55 = 109561LLU;

	t55 = ((x233^(x234<=x235))/x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MIN;
	uint8_t x239 = 4U;
	uint8_t x240 = 20U;
	static int64_t t56 = -30359484LL;

	t56 = ((x237^(x238<=x239))/x240);

	if (t56 != -461168601842738790LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = 934355721U;
	uint64_t x242 = 5083644LLU;
	static uint16_t x243 = UINT16_MAX;
	int32_t x244 = INT32_MIN;
	volatile uint32_t t57 = 1056U;

	t57 = ((x241^(x242<=x243))/x244);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -1;
	int32_t x250 = -1;
	int16_t x251 = -1;

	t58 = ((x249^(x250<=x251))/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 25U;
	int8_t x254 = -22;
	int8_t x255 = INT8_MIN;
	volatile uint32_t x256 = UINT32_MAX;
	static volatile uint32_t t59 = 2U;

	t59 = ((x253^(x254<=x255))/x256);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x259 = 876U;
	uint64_t x260 = 5759691627419LLU;
	uint64_t t60 = 163112207616440LLU;

	t60 = ((x257^(x258<=x259))/x260);

	if (t60 != 3202731LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x261 = 6U;
	int16_t x262 = 1;
	uint32_t x263 = UINT32_MAX;
	int64_t x264 = -1LL;
	volatile int64_t t61 = 3351928788137329LL;

	t61 = ((x261^(x262<=x263))/x264);

	if (t61 != -7LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x265 = 0;
	int64_t x267 = INT64_MAX;
	static uint64_t x268 = 22322152197LLU;
	uint64_t t62 = 9865177679078813LLU;

	t62 = ((x265^(x266<=x267))/x268);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = 2399;
	uint64_t x270 = 5615162829535LLU;
	uint8_t x272 = 62U;

	t63 = ((x269^(x270<=x271))/x272);

	if (t63 != 38) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	int32_t x275 = -1;
	static volatile uint32_t x276 = UINT32_MAX;

	t64 = ((x273^(x274<=x275))/x276);

	if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x277 = 1626U;
	volatile int64_t x278 = INT64_MIN;
	static int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;

	t65 = ((x277^(x278<=x279))/x280);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x281 = UINT8_MAX;
	volatile int16_t x282 = INT16_MIN;
	volatile int16_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	volatile int32_t t66 = 622;

	t66 = ((x281^(x282<=x283))/x284);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x285 = 51;
	int64_t x286 = INT64_MIN;
	int16_t x287 = 3;
	uint8_t x288 = UINT8_MAX;

	t67 = ((x285^(x286<=x287))/x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x289 = 4;
	static int32_t x292 = -1;
	volatile int32_t t68 = -117;

	t68 = ((x289^(x290<=x291))/x292);

	if (t68 != -4) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = 1;
	uint64_t x294 = 80630357338456LLU;
	static int8_t x295 = 8;
	uint8_t x296 = 4U;
	static volatile int32_t t69 = 2;

	t69 = ((x293^(x294<=x295))/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x297 = INT32_MAX;
	uint8_t x298 = 9U;
	uint16_t x299 = UINT16_MAX;

	t70 = ((x297^(x298<=x299))/x300);

	if (t70 != -37025580) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = 853;
	uint64_t x302 = 222566391744930162LLU;
	uint16_t x304 = UINT16_MAX;
	int32_t t71 = -702853;

	t71 = ((x301^(x302<=x303))/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x306 = INT32_MIN;
	uint16_t x307 = 5449U;
	static int8_t x308 = 1;
	static volatile int32_t t72 = -4;

	t72 = ((x305^(x306<=x307))/x308);

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x309 = -6898;
	int16_t x310 = INT16_MAX;
	int32_t x311 = 27729844;
	uint64_t x312 = UINT64_MAX;
	uint64_t t73 = 81447953292902182LLU;

	t73 = ((x309^(x310<=x311))/x312);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x313 = INT64_MAX;
	static int8_t x314 = INT8_MIN;
	int16_t x315 = -202;
	volatile int64_t t74 = -6LL;

	t74 = ((x313^(x314<=x315))/x316);

	if (t74 != -281474976710655LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x317 = -1LL;
	int16_t x319 = -11953;
	uint16_t x320 = 511U;
	volatile int64_t t75 = -1811860330LL;

	t75 = ((x317^(x318<=x319))/x320);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MIN;
	volatile int16_t x323 = INT16_MAX;
	static uint64_t x324 = 849256584309475LLU;
	static uint64_t t76 = 2499965308537LLU;

	t76 = ((x321^(x322<=x323))/x324);

	if (t76 != 21721LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x326 = INT16_MAX;
	volatile int16_t x327 = -3351;

	t77 = ((x325^(x326<=x327))/x328);

	if (t77 != 306783378U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = INT64_MIN;
	uint32_t x330 = 121U;
	volatile int64_t x331 = -32293163LL;
	int32_t x332 = INT32_MIN;
	volatile int64_t t78 = 10137LL;

	t78 = ((x329^(x330<=x331))/x332);

	if (t78 != 4294967296LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x334 = -1;
	volatile int8_t x335 = -1;
	volatile int8_t x336 = INT8_MAX;
	int64_t t79 = -2903175260262LL;

	t79 = ((x333^(x334<=x335))/x336);

	if (t79 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = UINT8_MAX;
	uint16_t x338 = UINT16_MAX;
	static uint8_t x339 = 5U;
	int64_t x340 = -51046215152054815LL;

	t80 = ((x337^(x338<=x339))/x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = -1;
	uint16_t x342 = 71U;
	int32_t x343 = -1;
	static uint64_t x344 = UINT64_MAX;

	t81 = ((x341^(x342<=x343))/x344);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = INT16_MIN;
	volatile uint32_t x347 = UINT32_MAX;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t82 = 5013LLU;

	t82 = ((x345^(x346<=x347))/x348);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x349 = -30LL;
	int16_t x350 = INT16_MIN;
	int16_t x351 = 0;
	uint16_t x352 = 4U;
	static volatile int64_t t83 = -5LL;

	t83 = ((x349^(x350<=x351))/x352);

	if (t83 != -7LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x353 = -481169LL;
	static int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MAX;
	static int64_t x356 = INT64_MIN;
	int64_t t84 = -108645151831859942LL;

	t84 = ((x353^(x354<=x355))/x356);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 9U;
	int64_t x358 = -1LL;
	static int64_t x359 = INT64_MAX;
	int32_t x360 = -231698;

	t85 = ((x357^(x358<=x359))/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x361 = 4716;
	uint32_t x362 = UINT32_MAX;
	volatile int8_t x363 = INT8_MIN;
	int16_t x364 = 2395;
	static volatile int32_t t86 = 71180946;

	t86 = ((x361^(x362<=x363))/x364);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x366 = 298274794LLU;
	int64_t x367 = -1619340536LL;

	t87 = ((x365^(x366<=x367))/x368);

	if (t87 != -65534) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x370 = UINT32_MAX;
	static uint8_t x371 = UINT8_MAX;
	static volatile uint64_t x372 = 501239LLU;

	t88 = ((x369^(x370<=x371))/x372);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = 252313098100LLU;
	volatile int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	int64_t x376 = INT64_MIN;
	volatile uint64_t t89 = 973123LLU;

	t89 = ((x373^(x374<=x375))/x376);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x377 = INT8_MAX;
	uint32_t x378 = 1311U;
	int8_t x379 = INT8_MIN;
	uint16_t x380 = 213U;
	volatile int32_t t90 = 14678;

	t90 = ((x377^(x378<=x379))/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x381 = UINT16_MAX;
	uint64_t x382 = 38421833802LLU;
	static int32_t x383 = INT32_MIN;
	uint64_t x384 = 1310030471167381LLU;

	t91 = ((x381^(x382<=x383))/x384);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x386 = INT32_MIN;
	int32_t x388 = 1;

	t92 = ((x385^(x386<=x387))/x388);

	if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x389 = INT16_MIN;
	int64_t x390 = -1LL;
	int32_t x391 = 53405352;
	uint16_t x392 = 70U;
	int32_t t93 = 302;

	t93 = ((x389^(x390<=x391))/x392);

	if (t93 != -468) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -3525642LL;
	uint32_t x394 = 13U;
	int8_t x395 = 1;
	int32_t x396 = INT32_MIN;
	int64_t t94 = -1997402451LL;

	t94 = ((x393^(x394<=x395))/x396);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	volatile uint16_t x398 = 1U;
	static uint8_t x399 = 12U;
	int16_t x400 = INT16_MIN;
	volatile int64_t t95 = 13LL;

	t95 = ((x397^(x398<=x399))/x400);

	if (t95 != 281474976710655LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	uint8_t x402 = 0U;
	volatile int64_t x403 = INT64_MIN;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t96 = -81207;

	t96 = ((x401^(x402<=x403))/x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x405 = INT64_MAX;
	int8_t x406 = INT8_MIN;
	int64_t x407 = -42828724185LL;
	int64_t t97 = -420457979471LL;

	t97 = ((x405^(x406<=x407))/x408);

	if (t97 != -13977982930749LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x409 = 18415063763186570LLU;
	volatile int16_t x410 = -1;
	uint64_t t98 = 4420728477335970LLU;

	t98 = ((x409^(x410<=x411))/x412);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x413 = 19U;
	volatile int16_t x414 = INT16_MAX;
	int16_t x415 = 9888;
	int32_t t99 = -1;

	t99 = ((x413^(x414<=x415))/x416);

	if (t99 != 2) { NG(); } else { ; }
	
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

