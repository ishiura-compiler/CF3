#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1;
int8_t x6 = -1;
uint16_t x11 = 5U;
static int32_t x14 = -1;
int32_t x15 = -1;
uint32_t t3 = 6800U;
volatile int64_t t6 = -1433124279531LL;
uint64_t x29 = 113400LLU;
static int16_t x41 = INT16_MIN;
int16_t x44 = -1;
int64_t x47 = INT64_MIN;
static int16_t x51 = 44;
volatile int32_t x54 = INT32_MIN;
int8_t x57 = -1;
int16_t x62 = -1;
uint64_t x64 = 257788982LLU;
uint64_t t15 = 43650513LLU;
uint64_t x66 = UINT64_MAX;
static uint16_t x67 = 11675U;
int32_t t16 = 3876;
volatile int8_t x69 = 25;
static int64_t x70 = -19104817899LL;
int64_t x72 = -1LL;
static int64_t t18 = -90471032280907LL;
int8_t x84 = 0;
uint16_t x88 = UINT16_MAX;
uint64_t x93 = 999901366777741121LLU;
uint16_t x96 = 0U;
static int8_t x105 = INT8_MIN;
int8_t x109 = -1;
int8_t x115 = INT8_MAX;
static uint32_t x116 = UINT32_MAX;
int16_t x121 = -1;
int16_t x124 = INT16_MIN;
volatile int32_t t31 = -10;
int16_t x129 = -10;
volatile uint64_t x131 = 12399LLU;
volatile int64_t x132 = INT64_MIN;
int64_t x134 = INT64_MIN;
int32_t t36 = -9399077;
uint64_t x156 = UINT64_MAX;
static volatile int8_t x158 = -1;
uint8_t x159 = 50U;
uint64_t x169 = UINT64_MAX;
static uint32_t x170 = UINT32_MAX;
static int32_t x171 = -472466374;
volatile int32_t t44 = 990;
int16_t x183 = INT16_MIN;
static uint16_t x185 = 2864U;
uint32_t x188 = 0U;
int8_t x202 = -11;
int8_t x204 = INT8_MAX;
int16_t x205 = 0;
int16_t x208 = -1;
uint32_t x210 = 4205190U;
volatile int32_t t52 = 17302880;
volatile int16_t x216 = INT16_MAX;
volatile int8_t x219 = -1;
volatile uint8_t x220 = UINT8_MAX;
int32_t x221 = INT32_MIN;
volatile int32_t x225 = -1;
int32_t t56 = 848622656;
volatile int32_t x232 = INT32_MIN;
uint16_t x237 = UINT16_MAX;
int8_t x245 = INT8_MAX;
static int8_t x248 = INT8_MIN;
uint8_t x252 = 18U;
volatile int32_t t62 = 3;
volatile int16_t x254 = INT16_MAX;
int64_t x255 = INT64_MIN;
volatile int64_t x258 = INT64_MAX;
volatile uint32_t t64 = 49801U;
int32_t x264 = INT32_MIN;
static volatile int8_t x270 = -28;
static volatile uint32_t x271 = 3529017U;
int32_t x273 = INT32_MAX;
static uint16_t x278 = UINT16_MAX;
static volatile int32_t t69 = -5;
volatile uint16_t x283 = 5753U;
uint16_t x287 = 1U;
volatile uint32_t x288 = UINT32_MAX;
uint32_t t71 = 7185U;
uint32_t x289 = 594560U;
int16_t x294 = -1;
static int32_t x295 = INT32_MAX;
static int32_t x297 = INT32_MIN;
int64_t x303 = INT64_MAX;
int32_t x305 = -789;
uint32_t x308 = 3U;
uint64_t x313 = 2983LLU;
static int16_t x321 = INT16_MIN;
int32_t t80 = -249588634;
uint64_t x326 = 999881151244538675LLU;
uint16_t x328 = 2U;
volatile int32_t t81 = -3;
static volatile uint16_t x329 = 4046U;
int8_t x330 = 1;
uint32_t x332 = UINT32_MAX;
int32_t x339 = INT32_MIN;
int16_t x342 = INT16_MIN;
int8_t x344 = -6;
int32_t x346 = INT32_MIN;
static int8_t x352 = INT8_MIN;
volatile int16_t x356 = 0;
int64_t x361 = INT64_MIN;
volatile int64_t x363 = INT64_MIN;
int32_t x364 = INT32_MIN;
volatile int32_t t90 = INT32_MIN;
int32_t t91 = 53;
int64_t x370 = INT64_MAX;
int32_t x372 = INT32_MIN;
int32_t x377 = 9191;
uint8_t x380 = UINT8_MAX;
int32_t t94 = 7;
uint8_t x382 = 0U;
int16_t x383 = INT16_MAX;
uint64_t x388 = 39110086758526LLU;
uint32_t x392 = 1U;
static int32_t t98 = -3138;
volatile int32_t t99 = -6705;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MAX;
	static volatile uint16_t x3 = 8U;
	volatile int8_t x4 = INT8_MIN;

	t0 = (((x1==x2)<=x3)^x4);

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -956909229;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = -1;
	static int32_t t1 = 1073297887;

	t1 = (((x5==x6)<=x7)^x8);

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1264628U;
	uint32_t x10 = 1470222U;
	volatile int8_t x12 = 44;
	static volatile int32_t t2 = -13576606;

	t2 = (((x9==x10)<=x11)^x12);

	if (t2 != 45) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	volatile uint32_t x16 = 2098246531U;

	t3 = (((x13==x14)<=x15)^x16);

	if (t3 != 2098246531U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	volatile int16_t x20 = -445;
	volatile int32_t t4 = -146534;

	t4 = (((x17==x18)<=x19)^x20);

	if (t4 != -445) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -2;
	uint64_t x22 = 6LLU;
	uint8_t x23 = 0U;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = 8U;

	t5 = (((x21==x22)<=x23)^x24);

	if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	int16_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	int64_t x28 = INT64_MAX;

	t6 = (((x25==x26)<=x27)^x28);

	if (t6 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x30 = 0;
	int64_t x31 = INT64_MIN;
	int16_t x32 = -1;
	static volatile int32_t t7 = 1;

	t7 = (((x29==x30)<=x31)^x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int16_t x34 = 435;
	int8_t x35 = 29;
	static int64_t x36 = INT64_MAX;
	int64_t t8 = 1680765938LL;

	t8 = (((x33==x34)<=x35)^x36);

	if (t8 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile int8_t x38 = -1;
	static uint32_t x39 = 109U;
	int32_t x40 = INT32_MIN;
	static int32_t t9 = -8359;

	t9 = (((x37==x38)<=x39)^x40);

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = INT32_MIN;
	int32_t x43 = 789146999;
	int32_t t10 = -229610645;

	t10 = (((x41==x42)<=x43)^x44);

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 124U;
	int32_t x46 = INT32_MIN;
	int64_t x48 = -1LL;
	int64_t t11 = -13421152822LL;

	t11 = (((x45==x46)<=x47)^x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x50 = -1;
	int32_t x52 = -7845744;
	int32_t t12 = 149511157;

	t12 = (((x49==x50)<=x51)^x52);

	if (t12 != -7845743) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 18U;
	volatile int64_t x55 = INT64_MIN;
	uint32_t x56 = 132669U;
	uint32_t t13 = 3U;

	t13 = (((x53==x54)<=x55)^x56);

	if (t13 != 132669U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x58 = 4849430996121935LLU;
	volatile int32_t x59 = -1;
	int8_t x60 = 16;
	volatile int32_t t14 = 100;

	t14 = (((x57==x58)<=x59)^x60);

	if (t14 != 16) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 2;
	uint32_t x63 = UINT32_MAX;

	t15 = (((x61==x62)<=x63)^x64);

	if (t15 != 257788983LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = INT16_MAX;
	static uint8_t x68 = UINT8_MAX;

	t16 = (((x65==x66)<=x67)^x68);

	if (t16 != 254) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x71 = 2U;
	int64_t t17 = -139868225817LL;

	t17 = (((x69==x70)<=x71)^x72);

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 0;
	static int64_t x74 = INT64_MIN;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = -1LL;

	t18 = (((x73==x74)<=x75)^x76);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	static int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MAX;
	volatile int64_t t19 = INT64_MAX;

	t19 = (((x77==x78)<=x79)^x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint32_t x82 = 222513754U;
	int64_t x83 = INT64_MAX;
	static int32_t t20 = 629;

	t20 = (((x81==x82)<=x83)^x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 17U;
	int16_t x86 = -8732;
	int64_t x87 = -1LL;
	volatile int32_t t21 = -3991;

	t21 = (((x85==x86)<=x87)^x88);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x89 = UINT64_MAX;
	uint16_t x90 = UINT16_MAX;
	uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 6U;
	volatile int32_t t22 = 2131;

	t22 = (((x89==x90)<=x91)^x92);

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MAX;
	int16_t x95 = INT16_MIN;
	int32_t t23 = -56;

	t23 = (((x93==x94)<=x95)^x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -8490809248338779LL;
	int32_t x98 = INT32_MAX;
	volatile uint16_t x99 = UINT16_MAX;
	volatile int16_t x100 = INT16_MIN;
	int32_t t24 = 12237675;

	t24 = (((x97==x98)<=x99)^x100);

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = 7;
	int8_t x102 = INT8_MIN;
	static int32_t x103 = INT32_MIN;
	uint8_t x104 = 1U;
	volatile int32_t t25 = -58;

	t25 = (((x101==x102)<=x103)^x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = UINT32_MAX;
	uint64_t x107 = 26243850982527LLU;
	uint8_t x108 = 8U;
	volatile int32_t t26 = 477093440;

	t26 = (((x105==x106)<=x107)^x108);

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -1LL;
	volatile int32_t x111 = INT32_MIN;
	static int32_t x112 = -1;
	static volatile int32_t t27 = 3903938;

	t27 = (((x109==x110)<=x111)^x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 1004LLU;
	volatile int32_t x114 = -1;
	static volatile uint32_t t28 = 433444U;

	t28 = (((x113==x114)<=x115)^x116);

	if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 2U;
	uint16_t x118 = 18581U;
	static int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;
	static int32_t t29 = INT32_MAX;

	t29 = (((x117==x118)<=x119)^x120);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 83739387U;
	uint64_t x123 = 1703902833800600513LLU;
	int32_t t30 = 1;

	t30 = (((x121==x122)<=x123)^x124);

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x125 = 11U;
	int8_t x126 = INT8_MAX;
	volatile int32_t x127 = -1;
	int16_t x128 = INT16_MIN;

	t31 = (((x125==x126)<=x127)^x128);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x130 = INT64_MAX;
	volatile int64_t t32 = 1149533928412613503LL;

	t32 = (((x129==x130)<=x131)^x132);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	uint32_t x135 = UINT32_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = 1431082LL;

	t33 = (((x133==x134)<=x135)^x136);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = 16;
	volatile uint8_t x139 = 7U;
	int32_t x140 = 13755847;
	volatile int32_t t34 = 0;

	t34 = (((x137==x138)<=x139)^x140);

	if (t34 != 13755846) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	volatile int32_t x142 = 0;
	uint16_t x143 = 831U;
	int64_t x144 = INT64_MIN;
	int64_t t35 = -51LL;

	t35 = (((x141==x142)<=x143)^x144);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 7368035285LLU;
	int32_t x146 = -1;
	volatile int16_t x147 = INT16_MAX;
	volatile int32_t x148 = INT32_MIN;

	t36 = (((x145==x146)<=x147)^x148);

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 20485215091LLU;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = 70U;
	volatile int32_t t37 = 889591141;

	t37 = (((x149==x150)<=x151)^x152);

	if (t37 != 70) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -772076313;
	static uint16_t x154 = 1474U;
	int64_t x155 = -915883LL;
	uint64_t t38 = UINT64_MAX;

	t38 = (((x153==x154)<=x155)^x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	uint32_t x160 = UINT32_MAX;
	static volatile uint32_t t39 = 0U;

	t39 = (((x157==x158)<=x159)^x160);

	if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	volatile int32_t x162 = -615031038;
	static uint16_t x163 = 5988U;
	volatile int64_t x164 = INT64_MIN;
	static int64_t t40 = 115708LL;

	t40 = (((x161==x162)<=x163)^x164);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int32_t x166 = -1;
	volatile int32_t x167 = INT32_MIN;
	static uint32_t x168 = 5618U;
	static uint32_t t41 = 32715U;

	t41 = (((x165==x166)<=x167)^x168);

	if (t41 != 5618U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = (((x169==x170)<=x171)^x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MAX;
	static int64_t x175 = -19LL;
	int64_t x176 = 743LL;
	int64_t t43 = -103050LL;

	t43 = (((x173==x174)<=x175)^x176);

	if (t43 != 743LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	static int8_t x178 = INT8_MAX;
	volatile int64_t x179 = -2045283064449LL;
	uint16_t x180 = UINT16_MAX;

	t44 = (((x177==x178)<=x179)^x180);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = 35;
	static int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -202743;

	t45 = (((x181==x182)<=x183)^x184);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -941;
	volatile int32_t x187 = -27500;
	volatile uint32_t t46 = 211613885U;

	t46 = (((x185==x186)<=x187)^x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int64_t x190 = -1LL;
	static int16_t x191 = -1;
	volatile int32_t x192 = INT32_MAX;
	static int32_t t47 = INT32_MAX;

	t47 = (((x189==x190)<=x191)^x192);

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x194 = UINT32_MAX;
	int32_t x195 = INT32_MIN;
	static int32_t x196 = -13235;
	int32_t t48 = 3932295;

	t48 = (((x193==x194)<=x195)^x196);

	if (t48 != -13235) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -5LL;
	uint16_t x198 = UINT16_MAX;
	static int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MAX;
	int32_t t49 = INT32_MAX;

	t49 = (((x197==x198)<=x199)^x200);

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int64_t x203 = INT64_MIN;
	static volatile int32_t t50 = -2243045;

	t50 = (((x201==x202)<=x203)^x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MIN;
	static int64_t x207 = INT64_MIN;
	static int32_t t51 = -32711;

	t51 = (((x205==x206)<=x207)^x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	uint32_t x211 = 3U;
	volatile int32_t x212 = INT32_MIN;

	t52 = (((x209==x210)<=x211)^x212);

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MAX;
	static volatile uint8_t x214 = 1U;
	int64_t x215 = -1LL;
	int32_t t53 = 2933940;

	t53 = (((x213==x214)<=x215)^x216);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 28;
	volatile int64_t x218 = -738553348337160LL;
	volatile int32_t t54 = -20;

	t54 = (((x217==x218)<=x219)^x220);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MIN;
	uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MAX;
	static volatile int32_t t55 = 19650823;

	t55 = (((x221==x222)<=x223)^x224);

	if (t55 != 2147483646) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	volatile int8_t x227 = -4;
	int16_t x228 = INT16_MIN;

	t56 = (((x225==x226)<=x227)^x228);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	static int16_t x230 = INT16_MIN;
	volatile int64_t x231 = -84LL;
	int32_t t57 = INT32_MIN;

	t57 = (((x229==x230)<=x231)^x232);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 260777157024LLU;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = UINT8_MAX;
	int32_t x236 = INT32_MAX;
	static int32_t t58 = -7490;

	t58 = (((x233==x234)<=x235)^x236);

	if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x238 = 9434U;
	uint16_t x239 = 26U;
	int64_t x240 = INT64_MIN;
	int64_t t59 = -684LL;

	t59 = (((x237==x238)<=x239)^x240);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MAX;
	volatile int64_t t60 = INT64_MAX;

	t60 = (((x241==x242)<=x243)^x244);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x246 = 1LLU;
	volatile int8_t x247 = INT8_MIN;
	volatile int32_t t61 = 1;

	t61 = (((x245==x246)<=x247)^x248);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -4;
	int8_t x250 = INT8_MIN;
	volatile int16_t x251 = -1;

	t62 = (((x249==x250)<=x251)^x252);

	if (t62 != 18) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -8;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 3683;

	t63 = (((x253==x254)<=x255)^x256);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int64_t x259 = INT64_MAX;
	uint32_t x260 = 12102U;

	t64 = (((x257==x258)<=x259)^x260);

	if (t64 != 12103U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	int32_t x262 = INT32_MIN;
	uint32_t x263 = 724U;
	int32_t t65 = 1;

	t65 = (((x261==x262)<=x263)^x264);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x265 = -1;
	volatile uint64_t x266 = 246284371LLU;
	static int64_t x267 = INT64_MIN;
	uint64_t x268 = 3750557LLU;
	uint64_t t66 = 106652539692328579LLU;

	t66 = (((x265==x266)<=x267)^x268);

	if (t66 != 3750557LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	volatile int8_t x272 = 1;
	int32_t t67 = -194464;

	t67 = (((x269==x270)<=x271)^x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = INT64_MIN;
	uint8_t x275 = 12U;
	volatile int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 0;

	t68 = (((x273==x274)<=x275)^x276);

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int64_t x279 = -297668LL;
	int8_t x280 = 10;

	t69 = (((x277==x278)<=x279)^x280);

	if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x281 = 60LL;
	int64_t x282 = -73108569002LL;
	uint16_t x284 = 1316U;
	volatile int32_t t70 = 26347;

	t70 = (((x281==x282)<=x283)^x284);

	if (t70 != 1317) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 711696744LLU;
	int8_t x286 = 0;

	t71 = (((x285==x286)<=x287)^x288);

	if (t71 != 4294967294U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -2879;
	volatile int32_t t72 = 414;

	t72 = (((x289==x290)<=x291)^x292);

	if (t72 != -2879) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint16_t x296 = 601U;
	int32_t t73 = -42873475;

	t73 = (((x293==x294)<=x295)^x296);

	if (t73 != 600) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = UINT8_MAX;
	static uint32_t x299 = 51889U;
	static uint32_t x300 = 1411114U;
	volatile uint32_t t74 = 788U;

	t74 = (((x297==x298)<=x299)^x300);

	if (t74 != 1411115U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	int64_t x302 = INT64_MAX;
	static volatile int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -175119;

	t75 = (((x301==x302)<=x303)^x304);

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x306 = -28046;
	int16_t x307 = INT16_MIN;
	volatile uint32_t t76 = 29568723U;

	t76 = (((x305==x306)<=x307)^x308);

	if (t76 != 3U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 1U;
	int16_t x310 = 371;
	volatile int64_t x311 = INT64_MAX;
	uint32_t x312 = 56849708U;
	uint32_t t77 = 104U;

	t77 = (((x309==x310)<=x311)^x312);

	if (t77 != 56849709U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = INT32_MIN;
	int16_t x316 = -1;
	int32_t t78 = 6953;

	t78 = (((x313==x314)<=x315)^x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	uint16_t x318 = UINT16_MAX;
	volatile int8_t x319 = -4;
	static int32_t x320 = 2;
	int32_t t79 = -1;

	t79 = (((x317==x318)<=x319)^x320);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x322 = INT8_MAX;
	uint32_t x323 = 377849U;
	static uint8_t x324 = 13U;

	t80 = (((x321==x322)<=x323)^x324);

	if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	int8_t x327 = INT8_MIN;

	t81 = (((x325==x326)<=x327)^x328);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x331 = INT32_MIN;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (((x329==x330)<=x331)^x332);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MIN;
	int16_t x336 = -1;
	volatile int32_t t83 = 0;

	t83 = (((x333==x334)<=x335)^x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	static int16_t x338 = -1;
	static int64_t x340 = -1LL;
	volatile int64_t t84 = 176571801847927LL;

	t84 = (((x337==x338)<=x339)^x340);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	volatile uint64_t x343 = 2121380LLU;
	int32_t t85 = -23086028;

	t85 = (((x341==x342)<=x343)^x344);

	if (t85 != -5) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 17;
	int32_t x347 = INT32_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (((x345==x346)<=x347)^x348);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int64_t x350 = 17942156LL;
	int8_t x351 = INT8_MIN;
	volatile int32_t t87 = -499815;

	t87 = (((x349==x350)<=x351)^x352);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	uint16_t x354 = 31U;
	volatile int16_t x355 = -1;
	volatile int32_t t88 = -8284789;

	t88 = (((x353==x354)<=x355)^x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	static int16_t x358 = INT16_MIN;
	volatile uint64_t x359 = UINT64_MAX;
	int64_t x360 = INT64_MIN;
	int64_t t89 = -371LL;

	t89 = (((x357==x358)<=x359)^x360);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = 10436U;

	t90 = (((x361==x362)<=x363)^x364);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	uint32_t x366 = 6390U;
	static uint16_t x367 = UINT16_MAX;
	uint16_t x368 = UINT16_MAX;

	t91 = (((x365==x366)<=x367)^x368);

	if (t91 != 65534) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	static uint32_t x371 = 150U;
	volatile int32_t t92 = 99339;

	t92 = (((x369==x370)<=x371)^x372);

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 107929LLU;
	static volatile int16_t x374 = INT16_MIN;
	uint32_t x375 = 0U;
	uint16_t x376 = 7531U;
	volatile int32_t t93 = -15184694;

	t93 = (((x373==x374)<=x375)^x376);

	if (t93 != 7530) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x378 = -1;
	static volatile int8_t x379 = INT8_MIN;

	t94 = (((x377==x378)<=x379)^x380);

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int64_t x384 = 251588721159100LL;
	static volatile int64_t t95 = -39185444LL;

	t95 = (((x381==x382)<=x383)^x384);

	if (t95 != 251588721159101LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	uint64_t x386 = 18LLU;
	static int64_t x387 = 1550612315181037897LL;
	volatile uint64_t t96 = 1384885451LLU;

	t96 = (((x385==x386)<=x387)^x388);

	if (t96 != 39110086758527LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = -15;
	int64_t x390 = INT64_MAX;
	volatile uint16_t x391 = 660U;
	volatile uint32_t t97 = 149383084U;

	t97 = (((x389==x390)<=x391)^x392);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = 162U;
	static int64_t x394 = INT64_MIN;
	int16_t x395 = 36;
	static int16_t x396 = INT16_MAX;

	t98 = (((x393==x394)<=x395)^x396);

	if (t98 != 32766) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	int32_t x399 = 0;
	volatile uint8_t x400 = 30U;

	t99 = (((x397==x398)<=x399)^x400);

	if (t99 != 31) { NG(); } else { ; }
	
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

