#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
int16_t x7 = INT16_MIN;
static int32_t x9 = INT32_MAX;
static int32_t t2 = -2905059;
volatile uint64_t t3 = 4480485957884460310LLU;
int32_t x32 = 13891;
int16_t x37 = 28;
volatile int64_t x40 = INT64_MIN;
volatile int64_t t7 = 98914619LL;
static int8_t x41 = 0;
int32_t x44 = INT32_MAX;
volatile int32_t t8 = -10;
static volatile uint64_t t9 = 51443498408LLU;
volatile uint32_t x50 = 6483U;
static volatile int8_t x52 = INT8_MIN;
int16_t x58 = 6815;
uint64_t x60 = UINT64_MAX;
static int16_t x62 = INT16_MIN;
uint64_t x71 = 9210568806LLU;
uint64_t t15 = 3777LLU;
volatile int64_t x76 = INT64_MIN;
static volatile int32_t x78 = INT32_MIN;
int8_t x80 = INT8_MAX;
int32_t t17 = 116;
uint64_t t18 = 187LLU;
volatile uint64_t x87 = 1LLU;
volatile int16_t x88 = INT16_MAX;
int64_t x96 = -1LL;
int64_t t21 = -1069041169818220LL;
int8_t x110 = -1;
uint32_t t26 = 491790576U;
int8_t x125 = 0;
int16_t x133 = -2;
uint64_t x141 = UINT64_MAX;
uint64_t t32 = 471972103LLU;
volatile int32_t x147 = INT32_MAX;
int16_t x148 = -16;
int32_t x150 = INT32_MIN;
static int32_t x152 = INT32_MIN;
uint64_t x154 = UINT64_MAX;
int8_t x156 = INT8_MIN;
volatile int32_t x166 = -153;
int32_t x167 = INT32_MIN;
volatile uint8_t x169 = UINT8_MAX;
volatile uint32_t x172 = 355U;
static volatile uint32_t t39 = 111173697U;
uint16_t x175 = UINT16_MAX;
uint16_t x179 = UINT16_MAX;
static int32_t x186 = -1;
uint32_t x192 = UINT32_MAX;
uint64_t t44 = 180648LLU;
int64_t x200 = -1LL;
uint64_t t47 = 3764165722946510LLU;
int64_t t48 = -500437949893422451LL;
static int8_t x209 = INT8_MAX;
volatile uint64_t x212 = 499LLU;
volatile uint64_t t49 = 15702063249646LLU;
volatile int8_t x220 = 2;
uint8_t x221 = 3U;
int64_t x223 = 873314LL;
uint64_t x224 = 1993127393LLU;
volatile int64_t t54 = -2147LL;
volatile uint8_t x236 = 36U;
int64_t x240 = 6778LL;
volatile uint32_t t57 = 5421U;
uint8_t x271 = UINT8_MAX;
volatile int32_t x274 = INT32_MIN;
volatile int8_t x275 = -1;
volatile int64_t x276 = 270397292913LL;
volatile int32_t x279 = INT32_MIN;
uint8_t x283 = 2U;
int8_t x287 = -1;
uint8_t x292 = 15U;
volatile int64_t t67 = -5501186LL;
int64_t x312 = INT64_MAX;
volatile uint64_t t72 = 1LLU;
int8_t x313 = -1;
int8_t x315 = INT8_MAX;
uint8_t x318 = UINT8_MAX;
uint16_t x322 = 14U;
uint16_t x325 = 3U;
uint32_t x337 = 7641U;
static int16_t x346 = 1;
static volatile uint64_t t83 = 1872LLU;
int16_t x360 = INT16_MIN;
int32_t x364 = INT32_MIN;
uint32_t x370 = UINT32_MAX;
uint8_t x373 = 1U;
volatile int32_t x378 = INT32_MIN;
int64_t x381 = INT64_MIN;
int16_t x392 = -2;
static int8_t x393 = INT8_MIN;
uint64_t x396 = 1LLU;
volatile int16_t x398 = INT16_MIN;
uint16_t x400 = 9U;
volatile int32_t t94 = -2346780;
int64_t t96 = 957005138427LL;
static int16_t x410 = INT16_MIN;


void f0(void) {
	volatile int8_t x2 = INT8_MAX;
	static int16_t x3 = -1;
	static uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 906758708325LLU;

	t0 = (((x1/x2)^x3)%x4);

	if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -13;
	int32_t x6 = INT32_MIN;
	static int16_t x8 = -1;
	volatile int32_t t1 = 0;

	t1 = (((x5/x6)^x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 75U;
	uint16_t x11 = 895U;
	volatile int16_t x12 = INT16_MAX;

	t2 = (((x9/x10)^x11)%x12);

	if (t2 != 28365) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 12;
	uint64_t x14 = 89436LLU;
	volatile int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;

	t3 = (((x13/x14)^x15)%x16);

	if (t3 != 65408LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 2480U;
	int32_t x24 = 147;
	volatile int32_t t4 = -1;

	t4 = (((x21/x22)^x23)%x24);

	if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = 0;
	static int32_t x26 = -5788008;
	uint32_t x27 = 860010U;
	uint16_t x28 = 19U;
	uint32_t t5 = 35U;

	t5 = (((x25/x26)^x27)%x28);

	if (t5 != 13U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MIN;
	volatile uint32_t x30 = 1035940U;
	static volatile int64_t x31 = -1LL;
	volatile int64_t t6 = -883856096601577LL;

	t6 = (((x29/x30)^x31)%x32);

	if (t6 != -2073LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MIN;

	t7 = (((x37/x38)^x39)%x40);

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MIN;
	volatile uint16_t x43 = 1974U;

	t8 = (((x41/x42)^x43)%x44);

	if (t8 != 1974) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = 4;
	uint32_t x48 = UINT32_MAX;

	t9 = (((x45/x46)^x47)%x48);

	if (t9 != 6LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	int64_t x51 = INT64_MIN;
	int64_t t10 = -1456451386496352LL;

	t10 = (((x49/x50)^x51)%x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	volatile int32_t x54 = INT32_MAX;
	static uint32_t x55 = UINT32_MAX;
	static uint8_t x56 = 2U;
	uint32_t t11 = 1698U;

	t11 = (((x53/x54)^x55)%x56);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	int16_t x59 = INT16_MIN;
	volatile uint64_t t12 = 443164189338LLU;

	t12 = (((x57/x58)^x59)%x60);

	if (t12 != 4294319566LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = 51U;
	uint8_t x63 = UINT8_MAX;
	volatile int64_t x64 = INT64_MIN;
	static int64_t t13 = -115LL;

	t13 = (((x61/x62)^x63)%x64);

	if (t13 != 255LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x65 = 72589639370829686LLU;
	volatile int64_t x66 = INT64_MAX;
	int8_t x67 = INT8_MAX;
	volatile uint32_t x68 = 132991927U;
	volatile uint64_t t14 = 1952371597373943LLU;

	t14 = (((x65/x66)^x67)%x68);

	if (t14 != 127LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = -5;
	uint32_t x70 = 1029350638U;
	int64_t x72 = INT64_MAX;

	t15 = (((x69/x70)^x71)%x72);

	if (t15 != 9210568802LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	volatile int8_t x74 = -6;
	int8_t x75 = 1;
	volatile int64_t t16 = -759716821LL;

	t16 = (((x73/x74)^x75)%x76);

	if (t16 != -22LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = INT32_MAX;
	int32_t x79 = -1;

	t17 = (((x77/x78)^x79)%x80);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	uint16_t x82 = 6673U;
	static int8_t x83 = INT8_MIN;
	uint64_t x84 = 784030LLU;

	t18 = (((x81/x82)^x83)%x84);

	if (t18 != 590478LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MAX;
	volatile uint64_t t19 = 6576224740642LLU;

	t19 = (((x85/x86)^x87)%x88);

	if (t19 != 259LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	uint32_t x90 = UINT32_MAX;
	static volatile int16_t x91 = 2503;
	static int8_t x92 = INT8_MIN;
	volatile uint32_t t20 = 782327U;

	t20 = (((x89/x90)^x91)%x92);

	if (t20 != 2503U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 1;
	uint32_t x94 = UINT32_MAX;
	int8_t x95 = INT8_MIN;

	t21 = (((x93/x94)^x95)%x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 7649;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 12U;
	volatile uint64_t x100 = 142766799LLU;
	uint64_t t22 = 14677464LLU;

	t22 = (((x97/x98)^x99)%x100);

	if (t22 != 12LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	static int32_t x102 = INT32_MIN;
	int64_t x103 = 52460926103LL;
	int16_t x104 = INT16_MIN;
	volatile int64_t t23 = -37076490933767LL;

	t23 = (((x101/x102)^x103)%x104);

	if (t23 != 13463LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	static uint8_t x106 = 7U;
	int32_t x107 = 3;
	int8_t x108 = INT8_MIN;
	int32_t t24 = -60;

	t24 = (((x105/x106)^x107)%x108);

	if (t24 != -76) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1LL;
	int32_t x111 = INT32_MAX;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t25 = 131227819LLU;

	t25 = (((x109/x110)^x111)%x112);

	if (t25 != 2147483646LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x117 = INT32_MIN;
	int32_t x118 = INT32_MIN;
	static volatile int8_t x119 = -24;
	uint32_t x120 = 142590U;

	t26 = (((x117/x118)^x119)%x120);

	if (t26 != 13883U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = 920;
	int32_t x122 = -1;
	uint8_t x123 = 120U;
	uint32_t x124 = 4U;
	volatile uint32_t t27 = 397040U;

	t27 = (((x121/x122)^x123)%x124);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x126 = 4U;
	static volatile uint32_t x127 = 14U;
	volatile int16_t x128 = INT16_MIN;
	static uint32_t t28 = 285906U;

	t28 = (((x125/x126)^x127)%x128);

	if (t28 != 14U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x129 = -11358767;
	int8_t x130 = -1;
	static int64_t x131 = INT64_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t29 = 0LL;

	t29 = (((x129/x130)^x131)%x132);

	if (t29 != -9223372036843417041LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x134 = -12716;
	static int64_t x135 = -1308023144LL;
	int32_t x136 = INT32_MIN;
	int64_t t30 = -232303995362785LL;

	t30 = (((x133/x134)^x135)%x136);

	if (t30 != -1308023144LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 2605LLU;
	int32_t x138 = -28959913;
	static int16_t x139 = -217;
	int32_t x140 = -1;
	uint64_t t31 = 488403978246054LLU;

	t31 = (((x137/x138)^x139)%x140);

	if (t31 != 18446744073709551399LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x142 = 4;
	int8_t x143 = INT8_MAX;
	uint16_t x144 = UINT16_MAX;

	t32 = (((x141/x142)^x143)%x144);

	if (t32 != 16256LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 1677499U;
	uint32_t t33 = 289462U;

	t33 = (((x145/x146)^x147)%x148);

	if (t33 != 2147481087U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MAX;
	int16_t x151 = -3;
	int32_t t34 = 4345697;

	t34 = (((x149/x150)^x151)%x152);

	if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	volatile int16_t x155 = INT16_MIN;
	volatile uint64_t t35 = 29186697757LLU;

	t35 = (((x153/x154)^x155)%x156);

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = -1;
	int32_t x158 = -28414261;
	volatile uint16_t x159 = 2U;
	static uint32_t x160 = 1U;
	volatile uint32_t t36 = 6273822U;

	t36 = (((x157/x158)^x159)%x160);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 0U;
	volatile uint64_t x162 = 59943061735235112LLU;
	uint16_t x163 = 7U;
	int8_t x164 = INT8_MIN;
	uint64_t t37 = 8798195286044189LLU;

	t37 = (((x161/x162)^x163)%x164);

	if (t37 != 7LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x165 = -1;
	int8_t x168 = INT8_MIN;
	int32_t t38 = -185221;

	t38 = (((x165/x166)^x167)%x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x170 = 49U;
	uint32_t x171 = 3497U;

	t39 = (((x169/x170)^x171)%x172);

	if (t39 != 305U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	int8_t x176 = 1;
	volatile int64_t t40 = 8340080179468551LL;

	t40 = (((x173/x174)^x175)%x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x177 = 2045U;
	int8_t x178 = -37;
	volatile int32_t x180 = INT32_MIN;
	static volatile int32_t t41 = 25121;

	t41 = (((x177/x178)^x179)%x180);

	if (t41 != -65482) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = UINT32_MAX;
	static volatile int64_t x182 = INT64_MAX;
	static uint64_t x183 = 274LLU;
	int8_t x184 = INT8_MAX;
	volatile uint64_t t42 = 2088LLU;

	t42 = (((x181/x182)^x183)%x184);

	if (t42 != 20LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	int32_t x187 = INT32_MAX;
	static int8_t x188 = -12;
	static volatile int32_t t43 = 84;

	t43 = (((x185/x186)^x187)%x188);

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x189 = -10;
	int64_t x190 = 221967560899093297LL;
	static uint64_t x191 = 2LLU;

	t44 = (((x189/x190)^x191)%x192);

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = UINT64_MAX;
	static uint16_t x194 = 12U;
	static uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 8924689556562958427LLU;
	volatile uint64_t t45 = 370654LLU;

	t45 = (((x193/x194)^x195)%x196);

	if (t45 != 1537228674240785066LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x197 = INT16_MAX;
	uint32_t x198 = 221U;
	static volatile int64_t x199 = -1LL;
	int64_t t46 = -13823481850791793LL;

	t46 = (((x197/x198)^x199)%x200);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 65390;
	int16_t x202 = INT16_MIN;
	int32_t x203 = -1;
	static volatile uint64_t x204 = 1270220LLU;

	t47 = (((x201/x202)^x203)%x204);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MAX;
	static int8_t x206 = -15;
	uint16_t x207 = 7U;
	int64_t x208 = INT64_MIN;

	t48 = (((x205/x206)^x207)%x208);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x210 = -1;
	uint8_t x211 = 59U;

	t49 = (((x209/x210)^x211)%x212);

	if (t49 != 460LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x213 = 18U;
	static uint8_t x214 = 125U;
	int16_t x215 = 1;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t50 = -3;

	t50 = (((x213/x214)^x215)%x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x217 = INT64_MIN;
	uint8_t x218 = 3U;
	volatile int8_t x219 = -6;
	static volatile int64_t t51 = 7LL;

	t51 = (((x217/x218)^x219)%x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x222 = INT8_MAX;
	volatile uint64_t t52 = 2692837056734465LLU;

	t52 = (((x221/x222)^x223)%x224);

	if (t52 != 873314LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -1LL;
	int64_t x226 = -1LL;
	uint32_t x227 = UINT32_MAX;
	volatile int8_t x228 = INT8_MIN;
	static volatile int64_t t53 = 226054329433347LL;

	t53 = (((x225/x226)^x227)%x228);

	if (t53 != 126LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = -36567864662844308LL;
	volatile int16_t x232 = -1;

	t54 = (((x229/x230)^x231)%x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -1LL;
	int64_t x234 = INT64_MIN;
	static int16_t x235 = INT16_MIN;
	static volatile int64_t t55 = -33493163474810LL;

	t55 = (((x233/x234)^x235)%x236);

	if (t55 != -8LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = -58699756404017691LL;
	int16_t x238 = -80;
	int16_t x239 = 1;
	int64_t t56 = 68092268469206LL;

	t56 = (((x237/x238)^x239)%x240);

	if (t56 != 3076LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -4;
	static volatile uint32_t x242 = UINT32_MAX;
	static int8_t x243 = INT8_MIN;
	uint8_t x244 = 36U;

	t57 = (((x241/x242)^x243)%x244);

	if (t57 != 20U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x249 = INT8_MIN;
	int64_t x250 = -1LL;
	int16_t x251 = -3;
	int64_t x252 = -4816695594LL;
	static int64_t t58 = -1386322976079LL;

	t58 = (((x249/x250)^x251)%x252);

	if (t58 != -131LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x257 = -2;
	uint8_t x258 = UINT8_MAX;
	int16_t x259 = -1;
	static volatile int32_t x260 = INT32_MIN;
	int32_t t59 = 47652;

	t59 = (((x257/x258)^x259)%x260);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = -11;
	static int16_t x262 = -3;
	static int8_t x263 = -1;
	int16_t x264 = -50;
	volatile int32_t t60 = -170976409;

	t60 = (((x261/x262)^x263)%x264);

	if (t60 != -4) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MAX;
	static uint8_t x266 = UINT8_MAX;
	uint64_t x267 = UINT64_MAX;
	uint32_t x268 = 47636574U;
	volatile uint64_t t61 = 7148704115710080LLU;

	t61 = (((x265/x266)^x267)%x268);

	if (t61 != 45288237LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = -3;
	volatile uint8_t x270 = UINT8_MAX;
	static volatile uint32_t x272 = 30944U;
	uint32_t t62 = 186U;

	t62 = (((x269/x270)^x271)%x272);

	if (t62 != 255U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = -34;
	volatile int64_t t63 = -254610683560LL;

	t63 = (((x273/x274)^x275)%x276);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = -1;
	int16_t x278 = INT16_MIN;
	int16_t x280 = INT16_MAX;
	int32_t t64 = -126871119;

	t64 = (((x277/x278)^x279)%x280);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	uint8_t x282 = 28U;
	volatile int64_t x284 = -22299304683LL;
	int64_t t65 = -2237272023LL;

	t65 = (((x281/x282)^x283)%x284);

	if (t65 != -1172LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x285 = 4U;
	int8_t x286 = 1;
	uint16_t x288 = 27U;
	volatile int32_t t66 = -800;

	t66 = (((x285/x286)^x287)%x288);

	if (t66 != -5) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;

	t67 = (((x289/x290)^x291)%x292);

	if (t67 != -8LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	volatile uint8_t x296 = UINT8_MAX;
	uint64_t t68 = 94922478370194301LLU;

	t68 = (((x293/x294)^x295)%x296);

	if (t68 != 129LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x297 = UINT16_MAX;
	uint32_t x298 = 144U;
	static int16_t x299 = 213;
	volatile uint8_t x300 = 21U;
	uint32_t t69 = 2159U;

	t69 = (((x297/x298)^x299)%x300);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x301 = 0LL;
	uint32_t x302 = UINT32_MAX;
	static volatile uint16_t x303 = 0U;
	int16_t x304 = INT16_MIN;
	int64_t t70 = -47810LL;

	t70 = (((x301/x302)^x303)%x304);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int32_t x306 = -376076;
	int64_t x307 = INT64_MAX;
	static int8_t x308 = 54;
	int64_t t71 = -5587551742515LL;

	t71 = (((x305/x306)^x307)%x308);

	if (t71 != 25LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = -1;
	uint64_t x310 = 4614652926157LLU;
	volatile int64_t x311 = INT64_MIN;

	t72 = (((x309/x310)^x311)%x312);

	if (t72 != 3997429LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x314 = UINT32_MAX;
	static int32_t x316 = INT32_MIN;
	volatile uint32_t t73 = 633624154U;

	t73 = (((x313/x314)^x315)%x316);

	if (t73 != 126U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x317 = 19472217U;
	int16_t x319 = INT16_MAX;
	int64_t x320 = INT64_MIN;
	int64_t t74 = 0LL;

	t74 = (((x317/x318)^x319)%x320);

	if (t74 != 87478LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MIN;
	static uint32_t x323 = 0U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t75 = 20LL;

	t75 = (((x321/x322)^x323)%x324);

	if (t75 != 4294964956LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x326 = 35U;
	int16_t x327 = INT16_MAX;
	int8_t x328 = -2;
	int32_t t76 = 0;

	t76 = (((x325/x326)^x327)%x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	uint16_t x331 = 391U;
	int64_t x332 = INT64_MIN;
	uint64_t t77 = 1767556710987696LLU;

	t77 = (((x329/x330)^x331)%x332);

	if (t77 != 390LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x333 = INT32_MAX;
	int8_t x334 = INT8_MAX;
	static uint16_t x335 = 291U;
	volatile int16_t x336 = INT16_MAX;
	volatile int32_t t78 = 29787297;

	t78 = (((x333/x334)^x335)%x336);

	if (t78 != 1839) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x338 = UINT8_MAX;
	static int8_t x339 = 42;
	volatile int32_t x340 = INT32_MIN;
	uint32_t t79 = 588048314U;

	t79 = (((x337/x338)^x339)%x340);

	if (t79 != 55U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	volatile int64_t x342 = 9628868902LL;
	int8_t x343 = -1;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t80 = 126406341920917508LL;

	t80 = (((x341/x342)^x343)%x344);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	uint32_t x347 = 296209U;
	uint64_t x348 = 1671509549704185LLU;
	static uint64_t t81 = 21362596634LLU;

	t81 = (((x345/x346)^x347)%x348);

	if (t81 != 4294670993LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = 124U;
	volatile int32_t x350 = 3594580;
	uint8_t x351 = 11U;
	uint32_t x352 = UINT32_MAX;
	uint32_t t82 = 459U;

	t82 = (((x349/x350)^x351)%x352);

	if (t82 != 11U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x353 = 9463587LLU;
	int16_t x354 = INT16_MAX;
	static volatile uint64_t x355 = UINT64_MAX;
	int64_t x356 = 16801825LL;

	t83 = (((x353/x354)^x355)%x356);

	if (t83 != 6646852LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x357 = 208541076503312LLU;
	uint64_t x358 = 123038538779LLU;
	uint32_t x359 = 1U;
	volatile uint64_t t84 = 1LLU;

	t84 = (((x357/x358)^x359)%x360);

	if (t84 != 1695LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MAX;
	uint16_t x362 = 2U;
	static int32_t x363 = 1197471;
	volatile int32_t t85 = -628;

	t85 = (((x361/x362)^x363)%x364);

	if (t85 != 1210976) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x365 = 13U;
	int16_t x366 = INT16_MAX;
	int32_t x367 = INT32_MIN;
	uint16_t x368 = UINT16_MAX;
	int32_t t86 = -433395;

	t86 = (((x365/x366)^x367)%x368);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x369 = UINT64_MAX;
	int64_t x371 = -23LL;
	uint8_t x372 = 15U;
	static volatile uint64_t t87 = 0LLU;

	t87 = (((x369/x370)^x371)%x372);

	if (t87 != 6LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x374 = UINT32_MAX;
	static int16_t x375 = -1;
	uint32_t x376 = 83058848U;
	uint32_t t88 = 29383474U;

	t88 = (((x373/x374)^x375)%x376);

	if (t88 != 58966047U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = INT16_MIN;
	int8_t x379 = -11;
	static int8_t x380 = INT8_MAX;
	volatile int32_t t89 = -103124;

	t89 = (((x377/x378)^x379)%x380);

	if (t89 != -11) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x382 = 1609908LLU;
	static int32_t x383 = INT32_MAX;
	volatile uint8_t x384 = 5U;
	uint64_t t90 = 47476030160072866LLU;

	t90 = (((x381/x382)^x383)%x384);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = 6587;
	uint16_t x386 = 117U;
	uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MIN;
	static int32_t t91 = 176669132;

	t91 = (((x385/x386)^x387)%x388);

	if (t91 != 32711) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x389 = INT64_MIN;
	int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MAX;
	volatile int64_t t92 = -448353363204345LL;

	t92 = (((x389/x390)^x391)%x392);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 0LLU;
	volatile uint64_t t93 = 21187865138378899LLU;

	t93 = (((x393/x394)^x395)%x396);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = -1;
	int16_t x399 = -1;

	t94 = (((x397/x398)^x399)%x400);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x401 = -53318LL;
	volatile uint32_t x402 = UINT32_MAX;
	int8_t x403 = INT8_MIN;
	int16_t x404 = -1;
	int64_t t95 = -154392652174605220LL;

	t95 = (((x401/x402)^x403)%x404);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = -1;
	uint16_t x406 = 29U;
	int16_t x407 = -1;
	int64_t x408 = 22460LL;

	t96 = (((x405/x406)^x407)%x408);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x409 = UINT8_MAX;
	uint8_t x411 = 114U;
	int16_t x412 = -1;
	volatile int32_t t97 = 111;

	t97 = (((x409/x410)^x411)%x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MIN;
	static uint8_t x414 = UINT8_MAX;
	uint64_t x415 = 582031LLU;
	int16_t x416 = INT16_MIN;
	uint64_t t98 = 0LLU;

	t98 = (((x413/x414)^x415)%x416);

	if (t98 != 582031LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x417 = -1;
	int16_t x418 = INT16_MIN;
	int32_t x419 = -1;
	static uint8_t x420 = 63U;
	volatile int32_t t99 = 11;

	t99 = (((x417/x418)^x419)%x420);

	if (t99 != -1) { NG(); } else { ; }
	
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

