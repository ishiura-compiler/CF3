#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
volatile int64_t x8 = INT64_MIN;
int32_t x9 = INT32_MIN;
uint64_t x11 = UINT64_MAX;
volatile uint8_t x14 = 92U;
int8_t x15 = -13;
int64_t x18 = -1LL;
volatile int32_t x20 = -1;
uint32_t x22 = 2934503U;
static int8_t x25 = INT8_MIN;
uint64_t x26 = 1224LLU;
uint32_t x36 = UINT32_MAX;
uint64_t x37 = 764LLU;
static volatile int64_t x43 = -1LL;
int16_t x58 = INT16_MIN;
int32_t x60 = 147723;
int32_t t13 = -4339;
int16_t x68 = INT16_MIN;
uint32_t t16 = 1380569U;
int64_t x78 = -1LL;
static int32_t t17 = -230112;
int16_t x82 = INT16_MAX;
int64_t x84 = -15726LL;
volatile int32_t t19 = -12;
int32_t x98 = 1;
static int32_t t22 = 21748;
volatile int8_t x105 = INT8_MIN;
int64_t x115 = -2685183484444LL;
int64_t x121 = INT64_MIN;
int16_t x124 = 117;
int32_t t28 = 0;
int64_t x129 = -1LL;
static volatile int16_t x130 = 21;
int32_t t29 = INT32_MAX;
volatile uint64_t x133 = 19LLU;
int16_t x134 = INT16_MAX;
int64_t x136 = -1417296922725159LL;
int8_t x143 = -1;
static int32_t x147 = -1;
static uint64_t x151 = 6438069799153119LLU;
int16_t x159 = 1;
volatile int32_t x160 = -1;
int32_t t37 = INT32_MIN;
volatile int64_t x173 = INT64_MAX;
static uint32_t x174 = 77955U;
uint64_t t38 = 9238257674468223LLU;
volatile int16_t x179 = INT16_MIN;
int64_t x182 = -383480249277560851LL;
static volatile uint64_t x210 = 593523068036LLU;
int8_t x218 = INT8_MAX;
int16_t x223 = INT16_MIN;
int16_t x234 = -1;
int8_t x237 = INT8_MAX;
uint16_t x244 = UINT16_MAX;
int32_t t55 = -1710;
int32_t x253 = INT32_MIN;
volatile int64_t x263 = INT64_MIN;
uint8_t x264 = UINT8_MAX;
volatile int32_t t59 = -44;
volatile int32_t t62 = 9;
static int64_t x277 = -1LL;
static volatile uint64_t x281 = 370376LLU;
uint8_t x289 = 93U;
static int32_t x292 = INT32_MIN;
int32_t x310 = -1;
static int32_t t72 = 22;
static uint16_t x322 = UINT16_MAX;
static uint32_t x326 = UINT32_MAX;
volatile uint16_t x329 = 111U;
int64_t x331 = INT64_MIN;
volatile int64_t t77 = 1697731LL;
int32_t t78 = -396975053;
static int64_t x346 = INT64_MAX;
int64_t x348 = INT64_MIN;
int32_t x351 = INT32_MAX;
volatile int32_t t80 = -1;
int64_t x356 = -13888519679491LL;
int64_t x364 = -1LL;
volatile int64_t x367 = INT64_MAX;
volatile uint32_t x372 = UINT32_MAX;
volatile uint32_t t85 = UINT32_MAX;
volatile uint16_t x373 = 61U;
int64_t x381 = 846729276844083307LL;
volatile int16_t x385 = -1;
uint16_t x389 = 11U;
static uint16_t x391 = 4U;
int32_t x393 = INT32_MIN;
int16_t x400 = INT16_MAX;
static uint32_t x418 = 19824U;


void f0(void) {
	uint32_t x1 = 4346019U;
	int8_t x2 = INT8_MAX;
	uint32_t x3 = 1502303953U;
	static int8_t x4 = -1;
	int32_t t0 = -299;

	t0 = (((x1/x2)<=x3)^x4);

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x7 = -58837513LL;
	volatile int64_t t1 = INT64_MIN;

	t1 = (((x5/x6)<=x7)^x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 87360632LLU;
	static uint32_t x12 = 409777U;
	uint32_t t2 = 6327U;

	t2 = (((x9/x10)<=x11)^x12);

	if (t2 != 409776U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int16_t x16 = 9;
	static int32_t t3 = -385162453;

	t3 = (((x13/x14)<=x15)^x16);

	if (t3 != 9) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 9280145U;
	volatile uint16_t x19 = 24U;
	static volatile int32_t t4 = 271;

	t4 = (((x17/x18)<=x19)^x20);

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 58;
	uint16_t x23 = 4U;
	uint32_t x24 = 35729U;
	static uint32_t t5 = 122160061U;

	t5 = (((x21/x22)<=x23)^x24);

	if (t5 != 35728U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x27 = INT64_MIN;
	int16_t x28 = -1;
	int32_t t6 = -7240;

	t6 = (((x25/x26)<=x27)^x28);

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	volatile uint64_t x34 = 15693LLU;
	int32_t x35 = INT32_MAX;
	volatile uint32_t t7 = 30327U;

	t7 = (((x33/x34)<=x35)^x36);

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x38 = 2;
	volatile int64_t x39 = -1LL;
	int8_t x40 = INT8_MIN;
	int32_t t8 = -38758;

	t8 = (((x37/x38)<=x39)^x40);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	static volatile int32_t x42 = -1;
	static uint16_t x44 = 5U;
	volatile int32_t t9 = -724;

	t9 = (((x41/x42)<=x43)^x44);

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MIN;
	static uint16_t x46 = 6U;
	int64_t x47 = INT64_MAX;
	volatile int64_t x48 = INT64_MIN;
	static volatile int64_t t10 = 1LL;

	t10 = (((x45/x46)<=x47)^x48);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 1862;
	static int8_t x50 = -15;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t11 = -1;

	t11 = (((x49/x50)<=x51)^x52);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 933U;
	uint64_t x55 = 112LLU;
	static uint32_t x56 = UINT32_MAX;
	uint32_t t12 = UINT32_MAX;

	t12 = (((x53/x54)<=x55)^x56);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 20U;
	volatile int64_t x59 = INT64_MIN;

	t13 = (((x57/x58)<=x59)^x60);

	if (t13 != 147723) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x65 = 9U;
	int64_t x66 = -1LL;
	int16_t x67 = -1;
	int32_t t14 = 1071359855;

	t14 = (((x65/x66)<=x67)^x68);

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x70 = 8184U;
	uint16_t x71 = 16833U;
	int32_t x72 = INT32_MIN;
	int32_t t15 = -122364978;

	t15 = (((x69/x70)<=x71)^x72);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 5U;

	t16 = (((x73/x74)<=x75)^x76);

	if (t16 != 4U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	int32_t x79 = 15;
	uint16_t x80 = 26605U;

	t17 = (((x77/x78)<=x79)^x80);

	if (t17 != 26605) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	int64_t x83 = INT64_MIN;
	volatile int64_t t18 = 601685210451047LL;

	t18 = (((x81/x82)<=x83)^x84);

	if (t18 != -15726LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = 966;
	static uint8_t x87 = 113U;
	uint16_t x88 = 29U;

	t19 = (((x85/x86)<=x87)^x88);

	if (t19 != 28) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = -33765794;
	uint64_t x90 = 37350617LLU;
	uint32_t x91 = 61025U;
	static volatile int8_t x92 = -8;
	static volatile int32_t t20 = -3922;

	t20 = (((x89/x90)<=x91)^x92);

	if (t20 != -8) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = 60867;
	int32_t x94 = INT32_MIN;
	uint16_t x95 = UINT16_MAX;
	static int8_t x96 = INT8_MIN;
	int32_t t21 = -44897;

	t21 = (((x93/x94)<=x95)^x96);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 1625U;
	uint16_t x99 = 0U;
	uint8_t x100 = UINT8_MAX;

	t22 = (((x97/x98)<=x99)^x100);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x106 = INT16_MIN;
	uint16_t x107 = 4032U;
	volatile uint8_t x108 = 48U;
	volatile int32_t t23 = -1008263;

	t23 = (((x105/x106)<=x107)^x108);

	if (t23 != 49) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 3U;
	int64_t x110 = INT64_MAX;
	static volatile int16_t x111 = 3;
	static int32_t x112 = 14090971;
	static volatile int32_t t24 = -1190947;

	t24 = (((x109/x110)<=x111)^x112);

	if (t24 != 14090970) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x113 = 1;
	uint32_t x114 = UINT32_MAX;
	static int64_t x116 = 3185141LL;
	int64_t t25 = -387443LL;

	t25 = (((x113/x114)<=x115)^x116);

	if (t25 != 3185141LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t26 = 292759011;

	t26 = (((x117/x118)<=x119)^x120);

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x122 = 7U;
	volatile int16_t x123 = -5;
	static int32_t t27 = -40;

	t27 = (((x121/x122)<=x123)^x124);

	if (t27 != 116) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x125 = -1;
	static volatile int16_t x126 = INT16_MAX;
	uint64_t x127 = 7LLU;
	volatile uint16_t x128 = UINT16_MAX;

	t28 = (((x125/x126)<=x127)^x128);

	if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x131 = -44;
	int32_t x132 = INT32_MAX;

	t29 = (((x129/x130)<=x131)^x132);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x135 = 1;
	int64_t t30 = -2272360LL;

	t30 = (((x133/x134)<=x135)^x136);

	if (t30 != -1417296922725160LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x141 = 7938530811465LLU;
	int64_t x142 = -1LL;
	int16_t x144 = -1;
	int32_t t31 = -2;

	t31 = (((x141/x142)<=x143)^x144);

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = -1;
	volatile int32_t x146 = INT32_MIN;
	volatile uint8_t x148 = UINT8_MAX;
	volatile int32_t t32 = -343841;

	t32 = (((x145/x146)<=x147)^x148);

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = 118U;
	uint32_t x150 = 79269155U;
	int16_t x152 = INT16_MAX;
	static int32_t t33 = 4322635;

	t33 = (((x149/x150)<=x151)^x152);

	if (t33 != 32766) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	static int64_t x156 = INT64_MIN;
	int64_t t34 = 294LL;

	t34 = (((x153/x154)<=x155)^x156);

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = INT32_MAX;
	int32_t x158 = INT32_MIN;
	volatile int32_t t35 = 70618;

	t35 = (((x157/x158)<=x159)^x160);

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MIN;
	static int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;
	static int32_t t36 = 4;

	t36 = (((x161/x162)<=x163)^x164);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -674;
	volatile int32_t x166 = -86629;
	int32_t x167 = -921689;
	int32_t x168 = INT32_MIN;

	t37 = (((x165/x166)<=x167)^x168);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x175 = 4877;
	volatile uint64_t x176 = 3990214017761350LLU;

	t38 = (((x173/x174)<=x175)^x176);

	if (t38 != 3990214017761350LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = 1;
	uint8_t x178 = UINT8_MAX;
	int16_t x180 = -1;
	static int32_t t39 = -1518;

	t39 = (((x177/x178)<=x179)^x180);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x181 = INT8_MIN;
	volatile int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MIN;
	static int32_t t40 = INT32_MIN;

	t40 = (((x181/x182)<=x183)^x184);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = 6288;
	uint8_t x186 = UINT8_MAX;
	int16_t x187 = -1;
	volatile int8_t x188 = -1;
	int32_t t41 = 1;

	t41 = (((x185/x186)<=x187)^x188);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 23LLU;
	int64_t x190 = -15LL;
	int8_t x191 = INT8_MIN;
	static uint8_t x192 = UINT8_MAX;
	int32_t t42 = -462140843;

	t42 = (((x189/x190)<=x191)^x192);

	if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -1;
	uint16_t x195 = 227U;
	static int16_t x196 = -218;
	static int32_t t43 = -10;

	t43 = (((x193/x194)<=x195)^x196);

	if (t43 != -218) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MAX;
	volatile int32_t x198 = INT32_MIN;
	volatile int32_t x199 = INT32_MIN;
	uint8_t x200 = 73U;
	int32_t t44 = -1;

	t44 = (((x197/x198)<=x199)^x200);

	if (t44 != 72) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x201 = INT8_MIN;
	volatile uint8_t x202 = 2U;
	static volatile int8_t x203 = 5;
	int8_t x204 = INT8_MIN;
	int32_t t45 = 5;

	t45 = (((x201/x202)<=x203)^x204);

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MAX;
	int32_t x206 = INT32_MAX;
	static volatile int64_t x207 = INT64_MIN;
	static volatile int8_t x208 = -2;
	static volatile int32_t t46 = 11;

	t46 = (((x205/x206)<=x207)^x208);

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = -19291958815618LL;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t47 = 1124928151276444237LL;

	t47 = (((x209/x210)<=x211)^x212);

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = -1;
	int8_t x214 = -50;
	int64_t x215 = 129270387529229LL;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t48 = 126220015;

	t48 = (((x213/x214)<=x215)^x216);

	if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = UINT16_MAX;
	static int8_t x219 = INT8_MIN;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t49 = 633596626;

	t49 = (((x217/x218)<=x219)^x220);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 238420U;
	static int8_t x222 = INT8_MIN;
	static volatile uint64_t x224 = UINT64_MAX;
	uint64_t t50 = 4575639355334094LLU;

	t50 = (((x221/x222)<=x223)^x224);

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 16U;
	int16_t x226 = INT16_MAX;
	uint8_t x227 = 2U;
	uint32_t x228 = 714250674U;
	static volatile uint32_t t51 = 8U;

	t51 = (((x225/x226)<=x227)^x228);

	if (t51 != 714250675U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = 624U;
	static int16_t x235 = INT16_MAX;
	uint16_t x236 = 15238U;
	volatile int32_t t52 = -4;

	t52 = (((x233/x234)<=x235)^x236);

	if (t52 != 15239) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x238 = 61;
	volatile int16_t x239 = -4483;
	int8_t x240 = INT8_MAX;
	volatile int32_t t53 = 140254648;

	t53 = (((x237/x238)<=x239)^x240);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = -14;
	int8_t x242 = INT8_MAX;
	static int8_t x243 = INT8_MIN;
	volatile int32_t t54 = -165634461;

	t54 = (((x241/x242)<=x243)^x244);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = -1;
	static int8_t x246 = -1;
	volatile int16_t x247 = INT16_MAX;
	volatile int16_t x248 = INT16_MAX;

	t55 = (((x245/x246)<=x247)^x248);

	if (t55 != 32766) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x249 = INT8_MAX;
	uint32_t x250 = UINT32_MAX;
	static int16_t x251 = INT16_MIN;
	static uint16_t x252 = UINT16_MAX;
	int32_t t56 = -1;

	t56 = (((x249/x250)<=x251)^x252);

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x254 = 1;
	int32_t x255 = 387002;
	int8_t x256 = 1;
	volatile int32_t t57 = -40;

	t57 = (((x253/x254)<=x255)^x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = 15275;
	static uint64_t x258 = UINT64_MAX;
	int64_t x259 = INT64_MAX;
	uint64_t x260 = 704883473058636113LLU;
	uint64_t t58 = 63LLU;

	t58 = (((x257/x258)<=x259)^x260);

	if (t58 != 704883473058636112LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = -1LL;

	t59 = (((x261/x262)<=x263)^x264);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = 0;
	int8_t x266 = INT8_MAX;
	volatile uint8_t x267 = UINT8_MAX;
	int32_t x268 = 14;
	int32_t t60 = 4840;

	t60 = (((x265/x266)<=x267)^x268);

	if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x269 = INT8_MAX;
	int32_t x270 = INT32_MIN;
	int32_t x271 = 910510;
	int32_t x272 = -473880646;
	static volatile int32_t t61 = 0;

	t61 = (((x269/x270)<=x271)^x272);

	if (t61 != -473880645) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	static int8_t x275 = INT8_MIN;
	static volatile int32_t x276 = -40428;

	t62 = (((x273/x274)<=x275)^x276);

	if (t62 != -40428) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x278 = 173U;
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = UINT16_MAX;
	static volatile int32_t t63 = -4060;

	t63 = (((x277/x278)<=x279)^x280);

	if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x282 = 54U;
	uint32_t x283 = UINT32_MAX;
	static int8_t x284 = INT8_MAX;
	volatile int32_t t64 = -125;

	t64 = (((x281/x282)<=x283)^x284);

	if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MAX;
	int16_t x287 = -1;
	static int64_t x288 = -8725727751280LL;
	volatile int64_t t65 = 13298995LL;

	t65 = (((x285/x286)<=x287)^x288);

	if (t65 != -8725727751279LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x290 = -1LL;
	int8_t x291 = INT8_MIN;
	volatile int32_t t66 = INT32_MIN;

	t66 = (((x289/x290)<=x291)^x292);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = -387;
	static int32_t x294 = 494;
	int16_t x295 = -1;
	static int16_t x296 = INT16_MIN;
	int32_t t67 = -154023683;

	t67 = (((x293/x294)<=x295)^x296);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x297 = -1875;
	static uint32_t x298 = UINT32_MAX;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = 5;
	volatile int32_t t68 = 112413535;

	t68 = (((x297/x298)<=x299)^x300);

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	static volatile uint64_t x302 = UINT64_MAX;
	int32_t x303 = INT32_MAX;
	static int16_t x304 = INT16_MIN;
	int32_t t69 = -41816497;

	t69 = (((x301/x302)<=x303)^x304);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = 63;
	int8_t x306 = -1;
	int16_t x307 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x305/x306)<=x307)^x308);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x309 = 36101U;
	int16_t x311 = 6;
	int64_t x312 = -51412240861LL;
	volatile int64_t t71 = -13445LL;

	t71 = (((x309/x310)<=x311)^x312);

	if (t71 != -51412240862LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x317 = 378977535849LLU;
	int16_t x318 = -1;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = 0;

	t72 = (((x317/x318)<=x319)^x320);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = INT64_MIN;
	static uint64_t x323 = 259061866622496564LLU;
	static int32_t x324 = INT32_MAX;
	static volatile int32_t t73 = INT32_MAX;

	t73 = (((x321/x322)<=x323)^x324);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x325 = UINT8_MAX;
	uint32_t x327 = UINT32_MAX;
	uint32_t x328 = 1U;
	static volatile uint32_t t74 = 3085678U;

	t74 = (((x325/x326)<=x327)^x328);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x330 = UINT64_MAX;
	int16_t x332 = 1;
	static volatile int32_t t75 = 65407;

	t75 = (((x329/x330)<=x331)^x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = INT32_MIN;
	static volatile int16_t x334 = -567;
	static uint8_t x335 = UINT8_MAX;
	int16_t x336 = INT16_MIN;
	int32_t t76 = -12934660;

	t76 = (((x333/x334)<=x335)^x336);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x337 = 98U;
	int64_t x338 = 27LL;
	uint64_t x339 = UINT64_MAX;
	static int64_t x340 = 686934930259239LL;

	t77 = (((x337/x338)<=x339)^x340);

	if (t77 != 686934930259238LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = INT32_MAX;
	int8_t x342 = -1;
	int16_t x343 = INT16_MAX;
	int32_t x344 = 522349;

	t78 = (((x341/x342)<=x343)^x344);

	if (t78 != 522348) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = 859;
	uint32_t x347 = 2060332U;
	volatile int64_t t79 = 2146614880LL;

	t79 = (((x345/x346)<=x347)^x348);

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = UINT8_MAX;
	int8_t x352 = INT8_MIN;

	t80 = (((x349/x350)<=x351)^x352);

	if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = -4;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = INT8_MIN;
	static volatile int64_t t81 = 791482411698291619LL;

	t81 = (((x353/x354)<=x355)^x356);

	if (t81 != -13888519679491LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = -15717;
	volatile int8_t x358 = INT8_MAX;
	static int16_t x359 = -1;
	volatile uint16_t x360 = 1U;
	static volatile int32_t t82 = -62216;

	t82 = (((x357/x358)<=x359)^x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = -9;
	int16_t x362 = 2038;
	int8_t x363 = 19;
	static volatile int64_t t83 = 546291399400LL;

	t83 = (((x361/x362)<=x363)^x364);

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x365 = 1U;
	int32_t x366 = INT32_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t84 = -456505;

	t84 = (((x365/x366)<=x367)^x368);

	if (t84 != 254) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x369 = INT16_MAX;
	static uint32_t x370 = 5938976U;
	int64_t x371 = INT64_MIN;

	t85 = (((x369/x370)<=x371)^x372);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x374 = UINT64_MAX;
	uint64_t x375 = 909LLU;
	int32_t x376 = INT32_MIN;
	volatile int32_t t86 = 466664640;

	t86 = (((x373/x374)<=x375)^x376);

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MIN;
	static int16_t x379 = INT16_MIN;
	volatile int64_t x380 = 9816131417LL;
	int64_t t87 = -238148847049LL;

	t87 = (((x377/x378)<=x379)^x380);

	if (t87 != 9816131417LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x382 = -1LL;
	volatile int64_t x383 = INT64_MIN;
	uint16_t x384 = 16233U;
	int32_t t88 = 34806806;

	t88 = (((x381/x382)<=x383)^x384);

	if (t88 != 16233) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x386 = INT8_MIN;
	static int8_t x387 = -1;
	uint16_t x388 = UINT16_MAX;
	int32_t t89 = 1137416;

	t89 = (((x385/x386)<=x387)^x388);

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x390 = -21;
	uint16_t x392 = 2889U;
	int32_t t90 = -4073770;

	t90 = (((x389/x390)<=x391)^x392);

	if (t90 != 2888) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x394 = INT32_MIN;
	static int16_t x395 = -2;
	int8_t x396 = INT8_MIN;
	int32_t t91 = -20474;

	t91 = (((x393/x394)<=x395)^x396);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x397 = 0U;
	static uint8_t x398 = UINT8_MAX;
	int32_t x399 = INT32_MIN;
	int32_t t92 = 220817;

	t92 = (((x397/x398)<=x399)^x400);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = -1;
	uint32_t x402 = 1527669433U;
	uint8_t x403 = 91U;
	int64_t x404 = 14545705LL;
	static int64_t t93 = 156LL;

	t93 = (((x401/x402)<=x403)^x404);

	if (t93 != 14545704LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MAX;
	int32_t x407 = INT32_MAX;
	volatile int16_t x408 = -2;
	int32_t t94 = -1389;

	t94 = (((x405/x406)<=x407)^x408);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = -1;
	int16_t x410 = INT16_MAX;
	static volatile int16_t x411 = INT16_MAX;
	volatile uint16_t x412 = 336U;
	volatile int32_t t95 = 53641970;

	t95 = (((x409/x410)<=x411)^x412);

	if (t95 != 337) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x413 = 536U;
	static int16_t x414 = -1;
	uint8_t x415 = 0U;
	int64_t x416 = -363195462218LL;
	volatile int64_t t96 = -2373113247LL;

	t96 = (((x413/x414)<=x415)^x416);

	if (t96 != -363195462217LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x417 = UINT64_MAX;
	int32_t x419 = INT32_MAX;
	volatile uint64_t x420 = UINT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (((x417/x418)<=x419)^x420);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MIN;
	uint16_t x422 = 591U;
	int16_t x423 = INT16_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t98 = 72;

	t98 = (((x421/x422)<=x423)^x424);

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = -1;
	int8_t x426 = -1;
	int16_t x427 = -1;
	volatile uint8_t x428 = 12U;
	volatile int32_t t99 = -1;

	t99 = (((x425/x426)<=x427)^x428);

	if (t99 != 12) { NG(); } else { ; }
	
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

