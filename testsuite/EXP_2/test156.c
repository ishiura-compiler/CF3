#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
volatile uint64_t x4 = UINT64_MAX;
volatile int64_t x8 = -2652669536LL;
uint8_t x12 = 5U;
uint64_t x24 = 1381451467409LLU;
uint64_t t5 = 16395404LLU;
static int16_t x26 = INT16_MAX;
static int64_t t8 = -104659396657474314LL;
uint64_t x39 = 105091662868856824LLU;
static int64_t x40 = INT64_MIN;
int32_t x43 = 0;
volatile int32_t t10 = 22;
int32_t x46 = INT32_MAX;
int8_t x48 = INT8_MIN;
int64_t x52 = INT64_MAX;
static uint16_t x58 = UINT16_MAX;
int64_t x60 = -1LL;
volatile uint32_t t15 = 2875U;
int32_t t16 = -13;
int32_t x73 = INT32_MIN;
static uint64_t x75 = 16478077226754833LLU;
static uint64_t t17 = 3406494883302LLU;
volatile int64_t x78 = INT64_MIN;
int16_t x79 = INT16_MAX;
uint32_t x80 = UINT32_MAX;
uint32_t x84 = UINT32_MAX;
volatile uint32_t t19 = 1657473288U;
int16_t x85 = -1;
volatile int32_t x98 = -1;
uint16_t x99 = 3U;
static uint8_t x104 = UINT8_MAX;
uint32_t t23 = 0U;
int8_t x110 = INT8_MIN;
uint8_t x123 = 1U;
int32_t x129 = -83505;
uint64_t t29 = 84999LLU;
uint64_t x133 = 4260061145511643203LLU;
uint64_t t30 = 5906749733LLU;
int8_t x137 = -23;
static int8_t x138 = INT8_MIN;
volatile int32_t x139 = 125;
int64_t t31 = -127443758LL;
static int32_t x151 = 722853;
int32_t t35 = 284475176;
static int64_t t36 = INT64_MAX;
volatile uint32_t x166 = 552390665U;
int16_t x167 = -1;
int64_t x171 = -1LL;
uint64_t t38 = 965185241LLU;
int8_t x173 = INT8_MIN;
volatile int32_t x174 = 1113882;
int64_t x184 = INT64_MIN;
volatile int64_t t40 = -43384474475463LL;
volatile int8_t x185 = INT8_MAX;
int16_t x189 = INT16_MIN;
int8_t x190 = 0;
volatile uint64_t x200 = 3558161269401007710LLU;
uint64_t t44 = 104221529209LLU;
int8_t x202 = INT8_MIN;
static int8_t x204 = INT8_MIN;
volatile int16_t x211 = 260;
int16_t x213 = INT16_MIN;
int64_t x215 = INT64_MAX;
int32_t x216 = INT32_MIN;
int16_t x217 = INT16_MAX;
uint16_t x221 = 5545U;
uint32_t x234 = 120692334U;
static uint32_t x245 = UINT32_MAX;
int64_t x252 = -1LL;
int32_t x261 = -1;
volatile uint32_t x274 = UINT32_MAX;
static volatile uint32_t x276 = UINT32_MAX;
volatile int16_t x277 = 58;
static uint64_t x288 = 1915580LLU;
int32_t x291 = -1;
volatile int64_t t67 = 5277LL;
static int16_t x293 = -14442;
int32_t t68 = 36158803;
static uint8_t x297 = UINT8_MAX;
static uint64_t t70 = 119080358239LLU;
int8_t x306 = INT8_MAX;
int32_t x311 = INT32_MAX;
int8_t x319 = INT8_MIN;
volatile uint16_t x325 = 54U;
int16_t x339 = INT16_MAX;
uint32_t x347 = 6854U;
int64_t x351 = -1LL;
volatile int16_t x361 = INT16_MIN;
int64_t t83 = -764317643767037LL;
int16_t x372 = 0;
volatile int8_t x374 = INT8_MIN;
volatile uint8_t x377 = 2U;
int32_t x390 = 1179;
volatile int32_t x395 = INT32_MAX;
int8_t x410 = 5;
uint8_t x412 = 2U;
int32_t t93 = 20101;
uint64_t x414 = 1427LLU;
int16_t x416 = 107;
volatile int32_t x417 = -4600068;
int32_t x420 = INT32_MIN;
volatile int16_t x435 = -1;
volatile int64_t x440 = INT64_MIN;


void f0(void) {
	int8_t x2 = -38;
	static volatile int64_t x3 = -250240194487907604LL;
	uint64_t t0 = 1712595740674362884LLU;

	t0 = ((x1|(x2+x3))^x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 3126027;
	uint16_t x6 = 15725U;
	volatile uint64_t x7 = UINT64_MAX;
	volatile uint64_t t1 = 0LLU;

	t1 = ((x5|(x6+x7))^x8);

	if (t1 != 18446744071055394511LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MAX;
	int32_t x11 = INT32_MIN;
	volatile int64_t t2 = -4002013240595302898LL;

	t2 = ((x9|(x10+x11))^x12);

	if (t2 != -2147483526LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int32_t x14 = 1775;
	uint16_t x15 = 483U;
	volatile uint16_t x16 = 145U;
	volatile uint64_t t3 = 14146390303096LLU;

	t3 = ((x13|(x14+x15))^x16);

	if (t3 != 18446744073709551470LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	volatile int32_t x18 = -1;
	uint16_t x19 = 3U;
	int32_t x20 = -24326352;
	uint64_t t4 = 22264601610532200LLU;

	t4 = ((x17|(x18+x19))^x20);

	if (t4 != 24326351LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 0;
	int16_t x22 = 702;
	volatile int16_t x23 = 1;

	t5 = ((x21|(x22+x23))^x24);

	if (t5 != 1381451466798LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 119757124256578271LL;
	static int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;
	int64_t t6 = 0LL;

	t6 = ((x25|(x26+x27))^x28);

	if (t6 != 761069695LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MIN;
	uint32_t x31 = 680U;
	volatile int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 0LL;

	t7 = ((x29|(x30+x31))^x32);

	if (t7 != 9223372034707292840LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MIN;
	uint32_t x35 = 324U;
	static int16_t x36 = INT16_MIN;

	t8 = ((x33|(x34+x35))^x36);

	if (t8 != 9223372036854743236LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	uint16_t x38 = 1926U;
	volatile uint64_t t9 = 8486661LLU;

	t9 = ((x37|(x38+x39))^x40);

	if (t9 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 48622;
	uint8_t x42 = 120U;
	uint16_t x44 = UINT16_MAX;

	t10 = ((x41|(x42+x43))^x44);

	if (t10 != 16897) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	static int64_t t11 = -259229LL;

	t11 = ((x45|(x46+x47))^x48);

	if (t11 != 9223372034707292415LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 3U;
	int8_t x50 = -25;
	int64_t x51 = INT64_MAX;
	int64_t t12 = -5778831LL;

	t12 = ((x49|(x50+x51))^x52);

	if (t12 != 24LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = 769201150;
	static uint8_t x59 = 1U;
	volatile int64_t t13 = 100996905163449LL;

	t13 = ((x57|(x58+x59))^x60);

	if (t13 != -769201151LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 33702783LLU;
	volatile int8_t x62 = -61;
	int8_t x63 = -1;
	int8_t x64 = -1;
	uint64_t t14 = 510719067LLU;

	t14 = ((x61|(x62+x63))^x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x65 = UINT32_MAX;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	static int8_t x68 = INT8_MIN;

	t15 = ((x65|(x66+x67))^x68);

	if (t15 != 127U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	int16_t x71 = 0;
	uint16_t x72 = 124U;

	t16 = ((x69|(x70+x71))^x72);

	if (t16 != -125) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x74 = INT16_MIN;
	uint8_t x76 = UINT8_MAX;

	t17 = ((x73|(x74+x75))^x76);

	if (t17 != 18446744072965989358LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 3800U;
	int64_t t18 = 28873421192381LL;

	t18 = ((x77|(x78+x79))^x80);

	if (t18 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	int16_t x82 = -1287;
	static volatile uint8_t x83 = 5U;

	t19 = ((x81|(x82+x83))^x84);

	if (t19 != 1280U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = -2778712LL;
	volatile int16_t x87 = INT16_MAX;
	volatile int32_t x88 = -1;
	static int64_t t20 = 0LL;

	t20 = ((x85|(x86+x87))^x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = INT8_MAX;
	volatile int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t21 = 12628564;

	t21 = ((x93|(x94+x95))^x96);

	if (t21 != -65536) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x97 = 0;
	uint16_t x100 = UINT16_MAX;
	static int32_t t22 = -9;

	t22 = ((x97|(x98+x99))^x100);

	if (t22 != 65533) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = UINT32_MAX;
	uint16_t x102 = 480U;
	static volatile int32_t x103 = 239204101;

	t23 = ((x101|(x102+x103))^x104);

	if (t23 != 4294967040U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	uint64_t x106 = 1LLU;
	volatile int32_t x107 = 68853163;
	int32_t x108 = -1582;
	static uint64_t t24 = 32003007708001519LLU;

	t24 = ((x105|(x106+x107))^x108);

	if (t24 != 1662LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = INT16_MIN;
	uint32_t x111 = UINT32_MAX;
	static int16_t x112 = INT16_MIN;
	volatile uint32_t t25 = 6323366U;

	t25 = ((x109|(x110+x111))^x112);

	if (t25 != 32639U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 56U;
	int16_t x114 = INT16_MAX;
	volatile int64_t x115 = INT64_MIN;
	uint8_t x116 = 40U;
	volatile int64_t t26 = 19190306LL;

	t26 = ((x113|(x114+x115))^x116);

	if (t26 != -9223372036854743081LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = INT32_MIN;
	int32_t x122 = -1;
	int32_t x124 = 0;
	static volatile int32_t t27 = INT32_MIN;

	t27 = ((x121|(x122+x123))^x124);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x125 = 4U;
	volatile uint64_t x126 = 461931507LLU;
	volatile uint32_t x127 = 30898U;
	static uint16_t x128 = UINT16_MAX;
	uint64_t t28 = 29273281824660LLU;

	t28 = ((x125|(x126+x127))^x128);

	if (t28 != 461898586LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x130 = INT8_MIN;
	volatile uint64_t x131 = 7LLU;
	static int16_t x132 = INT16_MAX;

	t29 = ((x129|(x130+x131))^x132);

	if (t29 != 18446744073709518896LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x134 = INT8_MAX;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MAX;

	t30 = ((x133|(x134+x135))^x136);

	if (t30 != 4260061145511708672LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x140 = INT64_MAX;

	t31 = ((x137|(x138+x139))^x140);

	if (t31 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MIN;
	static int32_t x142 = -1;
	volatile uint32_t x143 = 8U;
	uint32_t x144 = 384U;
	volatile uint32_t t32 = 17941907U;

	t32 = ((x141|(x142+x143))^x144);

	if (t32 != 4294966791U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = -2;
	int8_t x146 = INT8_MIN;
	uint64_t x147 = UINT64_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile uint64_t t33 = 3359970792916107LLU;

	t33 = ((x145|(x146+x147))^x148);

	if (t33 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MIN;
	uint16_t x150 = 297U;
	uint32_t x152 = 824723U;
	volatile uint32_t t34 = 25529019U;

	t34 = ((x149|(x150+x151))^x152);

	if (t34 != 4294142557U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = 359905;
	uint16_t x158 = 4177U;
	static uint16_t x159 = 1U;
	int8_t x160 = -1;

	t35 = ((x157|(x158+x159))^x160);

	if (t35 != -359924) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	static int8_t x162 = 2;
	volatile int32_t x163 = -46;
	int64_t x164 = INT64_MIN;

	t36 = ((x161|(x162+x163))^x164);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = 94U;
	uint16_t x168 = 5U;
	volatile uint32_t t37 = 1U;

	t37 = ((x165|(x166+x167))^x168);

	if (t37 != 552390747U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = 8241969;
	uint64_t x170 = 0LLU;
	static int8_t x172 = -1;

	t38 = ((x169|(x170+x171))^x172);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x175 = -756156107010950LL;
	uint64_t x176 = UINT64_MAX;
	uint64_t t39 = 1273073604198LLU;

	t39 = ((x173|(x174+x175))^x176);

	if (t39 != 107LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MIN;
	static int64_t x182 = 160440LL;
	int32_t x183 = INT32_MIN;

	t40 = ((x181|(x182+x183))^x184);

	if (t40 != 9223372034707452600LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x186 = -1;
	volatile int16_t x187 = INT16_MIN;
	uint64_t x188 = 9915757996347LLU;
	volatile uint64_t t41 = 497859404162685LLU;

	t41 = ((x185|(x186+x187))^x188);

	if (t41 != 18446734157951588036LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x191 = 3478633U;
	uint32_t x192 = 111167U;
	uint32_t t42 = 2U;

	t42 = ((x189|(x190+x191))^x192);

	if (t42 != 4294846038U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MIN;
	uint32_t x194 = 430U;
	uint16_t x195 = 6603U;
	int32_t x196 = -1;
	uint32_t t43 = 0U;

	t43 = ((x193|(x194+x195))^x196);

	if (t43 != 2147476614U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x197 = UINT64_MAX;
	static int8_t x198 = INT8_MIN;
	volatile int8_t x199 = -1;

	t44 = ((x197|(x198+x199))^x200);

	if (t44 != 14888582804308543905LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = -115888161;
	uint8_t x203 = UINT8_MAX;
	int32_t t45 = 27073859;

	t45 = ((x201|(x202+x203))^x204);

	if (t45 != 115888255) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x205 = 498U;
	static int8_t x206 = -1;
	volatile int16_t x207 = -1;
	volatile uint16_t x208 = 1U;
	volatile int32_t t46 = -4578156;

	t46 = ((x205|(x206+x207))^x208);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MIN;
	uint64_t x212 = 157326633416434LLU;
	static volatile uint64_t t47 = 103LLU;

	t47 = ((x209|(x210+x211))^x212);

	if (t47 != 18446586748891379597LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x214 = -1;
	volatile int64_t t48 = -178144633LL;

	t48 = ((x213|(x214+x215))^x216);

	if (t48 != 2147483646LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x218 = INT16_MIN;
	static uint64_t x219 = 2438687908612493LLU;
	uint32_t x220 = 1018U;
	uint64_t t49 = 1292970LLU;

	t49 = ((x217|(x218+x219))^x220);

	if (t49 != 2438687908592645LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x222 = 417099519U;
	uint32_t x223 = 143U;
	int64_t x224 = -2142094893875005529LL;
	int64_t t50 = 3LL;

	t50 = ((x221|(x222+x223))^x224);

	if (t50 != -2142094894003746808LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MAX;
	uint32_t x226 = 27087U;
	uint16_t x227 = 6U;
	static volatile uint64_t x228 = 65969091921590LLU;
	static volatile uint64_t t51 = 11504002733629745LLU;

	t51 = ((x225|(x226+x227))^x228);

	if (t51 != 65969091918153LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	static int64_t x230 = 78339LL;
	int8_t x231 = INT8_MAX;
	volatile uint64_t x232 = 330555221LLU;
	volatile uint64_t t52 = 99295829871549LLU;

	t52 = ((x229|(x230+x231))^x232);

	if (t52 != 18446744073378996394LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x233 = -2456;
	uint8_t x235 = 9U;
	int32_t x236 = -24;
	uint32_t t53 = 71474U;

	t53 = ((x233|(x234+x235))^x236);

	if (t53 != 407U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -185761LL;
	volatile uint16_t x238 = 30U;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = 1530893;
	static int64_t t54 = 33137LL;

	t54 = ((x237|(x238+x239))^x240);

	if (t54 != -1411246LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = 453527216;
	int32_t x242 = INT32_MAX;
	int64_t x243 = INT64_MIN;
	uint8_t x244 = 3U;
	volatile int64_t t55 = 1LL;

	t55 = ((x241|(x242+x243))^x244);

	if (t55 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x246 = 0U;
	int32_t x247 = INT32_MAX;
	uint64_t x248 = 3615674LLU;
	volatile uint64_t t56 = 222LLU;

	t56 = ((x245|(x246+x247))^x248);

	if (t56 != 4291351621LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 1965930440149337LLU;
	volatile int8_t x250 = -2;
	int8_t x251 = INT8_MIN;
	volatile uint64_t t57 = 1637112209049LLU;

	t57 = ((x249|(x250+x251))^x252);

	if (t57 != 128LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x253 = INT32_MAX;
	int64_t x254 = INT64_MAX;
	int16_t x255 = INT16_MIN;
	int8_t x256 = -1;
	static volatile int64_t t58 = INT64_MIN;

	t58 = ((x253|(x254+x255))^x256);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 91U;
	uint8_t x258 = 4U;
	int8_t x259 = -1;
	uint32_t x260 = 18082U;
	static volatile uint32_t t59 = 36580U;

	t59 = ((x257|(x258+x259))^x260);

	if (t59 != 18169U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x262 = 858U;
	uint8_t x263 = 1U;
	int32_t x264 = INT32_MAX;
	volatile int32_t t60 = INT32_MIN;

	t60 = ((x261|(x262+x263))^x264);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MIN;
	static int8_t x266 = 18;
	volatile int64_t x267 = 20953899466929209LL;
	volatile int32_t x268 = INT32_MAX;
	static int64_t t61 = 6649495076215LL;

	t61 = ((x265|(x266+x267))^x268);

	if (t61 != -2147483596LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MIN;
	int64_t x270 = INT64_MIN;
	static int16_t x271 = INT16_MAX;
	int16_t x272 = -1;
	volatile int64_t t62 = -39466LL;

	t62 = ((x269|(x270+x271))^x272);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x273 = INT32_MAX;
	uint8_t x275 = UINT8_MAX;
	static uint32_t t63 = 208490U;

	t63 = ((x273|(x274+x275))^x276);

	if (t63 != 2147483648U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x278 = 181019453U;
	volatile int16_t x279 = 839;
	int16_t x280 = -650;
	static uint32_t t64 = 45U;

	t64 = ((x277|(x278+x279))^x280);

	if (t64 != 4113947592U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = -59555732410LL;
	static volatile uint64_t x282 = UINT64_MAX;
	volatile uint32_t x283 = 1023961U;
	int32_t x284 = -907063404;
	static volatile uint64_t t65 = 536611779514284772LLU;

	t65 = ((x281|(x282+x283))^x284);

	if (t65 != 59790913610LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MAX;
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = 0;
	volatile uint64_t t66 = 153LLU;

	t66 = ((x285|(x286+x287))^x288);

	if (t66 != 18446744073707636035LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = -357;
	int64_t x290 = INT64_MAX;
	volatile uint8_t x292 = 6U;

	t67 = ((x289|(x290+x291))^x292);

	if (t67 != -7LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x294 = INT16_MIN;
	static uint16_t x295 = UINT16_MAX;
	volatile int8_t x296 = 0;

	t68 = ((x293|(x294+x295))^x296);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x298 = -23;
	int8_t x299 = 1;
	uint8_t x300 = 55U;
	volatile int32_t t69 = -131297163;

	t69 = ((x297|(x298+x299))^x300);

	if (t69 != -56) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x301 = UINT16_MAX;
	int16_t x302 = INT16_MIN;
	uint64_t x303 = 90LLU;
	int16_t x304 = -1;

	t70 = ((x301|(x302+x303))^x304);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = -8071;
	int8_t x307 = -1;
	static int64_t x308 = -1LL;
	volatile int64_t t71 = -11619473377578LL;

	t71 = ((x305|(x306+x307))^x308);

	if (t71 != 8064LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MIN;
	static int32_t x310 = -1;
	uint16_t x312 = UINT16_MAX;
	volatile int64_t t72 = -451614LL;

	t72 = ((x309|(x310+x311))^x312);

	if (t72 != -9223372034707357695LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x317 = -1;
	volatile int32_t x318 = INT32_MAX;
	static uint16_t x320 = UINT16_MAX;
	volatile int32_t t73 = -564935;

	t73 = ((x317|(x318+x319))^x320);

	if (t73 != -65536) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x321 = INT64_MIN;
	volatile int16_t x322 = INT16_MIN;
	static int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	volatile int64_t t74 = -344LL;

	t74 = ((x321|(x322+x323))^x324);

	if (t74 != 65408LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x326 = 558U;
	int8_t x327 = -1;
	uint64_t x328 = 212LLU;
	volatile uint64_t t75 = 140075539LLU;

	t75 = ((x325|(x326+x327))^x328);

	if (t75 != 747LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = 0U;
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = -1999;
	volatile uint32_t x332 = 11274077U;
	static uint64_t t76 = 472417894146LLU;

	t76 = ((x329|(x330+x331))^x332);

	if (t76 != 18446744073698279277LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = INT64_MIN;
	int32_t x334 = -1560910;
	uint16_t x335 = 1U;
	uint32_t x336 = UINT32_MAX;
	volatile int64_t t77 = -465055205297LL;

	t77 = ((x333|(x334+x335))^x336);

	if (t77 != -4293406388LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x337 = 0U;
	int8_t x338 = 16;
	int64_t x340 = -1LL;
	static int64_t t78 = 2637517908567LL;

	t78 = ((x337|(x338+x339))^x340);

	if (t78 != -32784LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x345 = 2;
	int8_t x346 = -6;
	uint16_t x348 = 2640U;
	uint32_t t79 = 760090U;

	t79 = ((x345|(x346+x347))^x348);

	if (t79 != 4242U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 1U;
	uint64_t x350 = 1623LLU;
	uint64_t x352 = 13327011903142LLU;
	volatile uint64_t t80 = 321310LLU;

	t80 = ((x349|(x350+x351))^x352);

	if (t80 != 13327011901681LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x353 = 6;
	volatile int64_t x354 = -1LL;
	static int64_t x355 = -1LL;
	volatile uint16_t x356 = UINT16_MAX;
	static int64_t t81 = 1LL;

	t81 = ((x353|(x354+x355))^x356);

	if (t81 != -65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = 241U;
	int8_t x358 = 19;
	volatile int32_t x359 = -948657243;
	int32_t x360 = -827;
	volatile int32_t t82 = 881;

	t82 = ((x357|(x358+x359))^x360);

	if (t82 != 948657980) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x362 = INT64_MIN;
	volatile uint32_t x363 = 186151U;
	volatile int8_t x364 = INT8_MIN;

	t83 = ((x361|(x362+x363))^x364);

	if (t83 != 10407LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MIN;
	int8_t x367 = 2;
	uint32_t x368 = 32592264U;
	uint32_t t84 = 2925U;

	t84 = ((x365|(x366+x367))^x368);

	if (t84 != 2180075914U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = -1;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = ((x369|(x370+x371))^x372);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile uint32_t t86 = 25602347U;

	t86 = ((x373|(x374+x375))^x376);

	if (t86 != 127U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x378 = INT16_MAX;
	uint8_t x379 = UINT8_MAX;
	int64_t x380 = INT64_MAX;
	volatile int64_t t87 = 13975LL;

	t87 = ((x377|(x378+x379))^x380);

	if (t87 != 9223372036854742785LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = -42;
	volatile uint32_t x386 = 89814805U;
	uint32_t x387 = UINT32_MAX;
	static int16_t x388 = -1;
	uint32_t t88 = 8373630U;

	t88 = ((x385|(x386+x387))^x388);

	if (t88 != 41U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = 61;
	static uint64_t x391 = UINT64_MAX;
	volatile uint32_t x392 = UINT32_MAX;
	volatile uint64_t t89 = 902750324LLU;

	t89 = ((x389|(x390+x391))^x392);

	if (t89 != 4294966080LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = INT64_MAX;
	int8_t x394 = -16;
	int8_t x396 = INT8_MIN;
	int64_t t90 = 1285462981490LL;

	t90 = ((x393|(x394+x395))^x396);

	if (t90 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x397 = INT32_MIN;
	static int16_t x398 = INT16_MIN;
	int64_t x399 = 3350LL;
	volatile uint64_t x400 = 381211155333410827LLU;
	volatile uint64_t t91 = 1434341824764LLU;

	t91 = ((x397|(x398+x399))^x400);

	if (t91 != 18065532918376168733LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x405 = INT64_MAX;
	uint16_t x406 = 2409U;
	int32_t x407 = 100;
	volatile int32_t x408 = -14959;
	int64_t t92 = -218997LL;

	t92 = ((x405|(x406+x407))^x408);

	if (t92 != -9223372036854760850LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x409 = 75U;
	static int32_t x411 = -474192570;

	t93 = ((x409|(x410+x411))^x412);

	if (t93 != -474192567) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x415 = 365LLU;
	uint64_t t94 = 25812LLU;

	t94 = ((x413|(x414+x415))^x416);

	if (t94 != 18446744073709520747LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x418 = INT8_MAX;
	uint8_t x419 = UINT8_MAX;
	int32_t t95 = -914718;

	t95 = ((x417|(x418+x419))^x420);

	if (t95 != 2142883838) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = -5;
	int16_t x426 = INT16_MAX;
	int8_t x427 = -2;
	int16_t x428 = -1;
	int32_t t96 = -79736;

	t96 = ((x425|(x426+x427))^x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x429 = INT32_MAX;
	int8_t x430 = 19;
	uint64_t x431 = UINT64_MAX;
	int16_t x432 = INT16_MAX;
	volatile uint64_t t97 = 13288366708LLU;

	t97 = ((x429|(x430+x431))^x432);

	if (t97 != 2147450880LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = INT32_MIN;
	static uint32_t x434 = 522U;
	uint64_t x436 = 152LLU;
	uint64_t t98 = 2455321005948135LLU;

	t98 = ((x433|(x434+x435))^x436);

	if (t98 != 2147484305LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x437 = UINT32_MAX;
	static int32_t x438 = 1968869;
	int8_t x439 = -1;
	static int64_t t99 = 76673LL;

	t99 = ((x437|(x438+x439))^x440);

	if (t99 != -9223372032559808513LL) { NG(); } else { ; }
	
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

