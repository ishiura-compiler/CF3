#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint32_t t0 = 4667076U;
uint64_t x10 = 1600870951439249620LLU;
uint32_t x17 = 190150723U;
static int64_t x20 = INT64_MIN;
uint16_t x27 = 24U;
uint32_t x30 = 1243298956U;
uint32_t x35 = 42137889U;
volatile int64_t x39 = -123778209469270LL;
int32_t t9 = 1346;
static uint16_t x43 = UINT16_MAX;
static uint32_t t10 = UINT32_MAX;
uint64_t t11 = UINT64_MAX;
volatile int64_t x54 = INT64_MIN;
uint64_t t18 = UINT64_MAX;
static int64_t t20 = 103756383LL;
int64_t x85 = -17227027145LL;
int16_t x89 = INT16_MAX;
static int64_t x92 = -17334752LL;
uint64_t x96 = 32597061LLU;
static uint32_t x101 = 228227U;
int8_t x103 = INT8_MAX;
int64_t x106 = -1LL;
int64_t x127 = INT64_MIN;
volatile int32_t t33 = -566612;
static int8_t x144 = INT8_MIN;
int16_t x145 = -4281;
static int8_t x147 = INT8_MIN;
int32_t t36 = -41358577;
volatile int32_t t37 = -1751;
volatile int32_t t39 = -2756;
volatile uint8_t x161 = 16U;
int32_t t40 = -971694;
uint64_t x190 = 5944395739912282002LLU;
volatile int32_t t55 = 41783;
int32_t x232 = 466033;
volatile uint8_t x234 = 56U;
int8_t x239 = INT8_MIN;
int32_t x246 = -748844;
int32_t x248 = -342080946;
int16_t x250 = -8;
volatile int16_t x254 = INT16_MIN;
int32_t x261 = INT32_MAX;
static volatile int32_t t65 = -346;
int64_t t66 = -2009048912902772061LL;
int32_t x273 = INT32_MIN;
volatile int64_t t68 = -5LL;
uint64_t t69 = 216967845LLU;
static uint64_t x286 = UINT64_MAX;
volatile int32_t t73 = -156;
int16_t x306 = -1;
int64_t x307 = -666581944015609LL;
volatile int64_t x308 = INT64_MIN;
uint32_t x309 = 778853U;
int64_t x316 = INT64_MIN;
int64_t t78 = -4324572515953626LL;
volatile uint32_t t79 = 2U;
volatile int32_t x323 = INT32_MAX;
int8_t x324 = INT8_MIN;
volatile uint64_t t81 = UINT64_MAX;
uint32_t x331 = UINT32_MAX;
int32_t t82 = -20540005;
uint16_t x334 = 12U;
int32_t x336 = INT32_MIN;
volatile int32_t t83 = 353;
uint64_t x345 = UINT64_MAX;
volatile uint8_t x346 = 0U;
int8_t x355 = 2;
volatile int32_t t88 = 49051;
int64_t x364 = INT64_MAX;
int8_t x368 = INT8_MAX;
int32_t t91 = -26384593;
int16_t x369 = INT16_MIN;
static volatile int16_t x370 = -1;
static volatile int32_t t93 = -208197;
int64_t x377 = INT64_MAX;
int64_t t94 = -3791LL;
uint64_t x383 = 1016438230LLU;
volatile int8_t x389 = INT8_MIN;
static uint8_t x391 = 0U;
uint8_t x397 = 56U;


void f0(void) {
	uint32_t x1 = 6825U;
	static volatile int64_t x2 = -1LL;
	int16_t x4 = INT16_MIN;

	t0 = ((x1|(x2<=x3))|x4);

	if (t0 != 4294941353U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint32_t x6 = 250955U;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = 169LLU;
	volatile uint64_t t1 = 72959LLU;

	t1 = ((x5|(x6<=x7))|x8);

	if (t1 != 18446744073709551529LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int32_t x11 = INT32_MIN;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x9|(x10<=x11))|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1255334LLU;
	static uint32_t x14 = 14U;
	static int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;
	static uint64_t t3 = 113321940479LLU;

	t3 = ((x13|(x14<=x15))|x16);

	if (t3 != 2147483647LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = UINT32_MAX;
	uint8_t x19 = 102U;
	volatile int64_t t4 = 13699761552LL;

	t4 = ((x17|(x18<=x19))|x20);

	if (t4 != -9223372036664625085LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	volatile uint16_t x22 = 346U;
	int32_t x23 = 745649399;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 3;

	t5 = ((x21|(x22<=x23))|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 4495U;
	int8_t x26 = 1;
	static int64_t x28 = -433565LL;
	volatile int64_t t6 = -10103236LL;

	t6 = ((x25|(x26<=x27))|x28);

	if (t6 != -429073LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 59U;
	uint8_t x31 = 1U;
	int32_t x32 = INT32_MIN;
	static int32_t t7 = -894445;

	t7 = ((x29|(x30<=x31))|x32);

	if (t7 != -2147483589) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -58209278LL;
	volatile uint16_t x34 = 219U;
	int64_t x36 = -6LL;
	int64_t t8 = -148LL;

	t8 = ((x33|(x34<=x35))|x36);

	if (t8 != -5LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static int64_t x38 = INT64_MIN;
	int8_t x40 = INT8_MAX;

	t9 = ((x37|(x38<=x39))|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	int64_t x42 = INT64_MIN;
	uint32_t x44 = UINT32_MAX;

	t10 = ((x41|(x42<=x43))|x44);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = UINT64_MAX;
	volatile uint8_t x46 = 11U;
	int8_t x47 = -1;
	int16_t x48 = INT16_MIN;

	t11 = ((x45|(x46<=x47))|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static uint64_t x50 = UINT64_MAX;
	static int16_t x51 = INT16_MAX;
	static int64_t x52 = 46378LL;
	int64_t t12 = 2951769492675920763LL;

	t12 = ((x49|(x50<=x51))|x52);

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = UINT64_MAX;
	static int64_t x55 = INT64_MIN;
	volatile uint8_t x56 = 0U;
	uint64_t t13 = UINT64_MAX;

	t13 = ((x53|(x54<=x55))|x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = -1LL;
	uint16_t x60 = 2863U;
	volatile int32_t t14 = 42429;

	t14 = ((x57|(x58<=x59))|x60);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 29U;
	int16_t x62 = -1;
	volatile int8_t x63 = INT8_MIN;
	static uint16_t x64 = 1U;
	volatile int32_t t15 = 535995406;

	t15 = ((x61|(x62<=x63))|x64);

	if (t15 != 29) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	volatile uint8_t x66 = 1U;
	static int8_t x67 = -1;
	int32_t x68 = -1;
	int32_t t16 = 89872732;

	t16 = ((x65|(x66<=x67))|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	static uint8_t x70 = UINT8_MAX;
	volatile int32_t x71 = INT32_MIN;
	static int8_t x72 = INT8_MAX;
	int64_t t17 = INT64_MAX;

	t17 = ((x69|(x70<=x71))|x72);

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 103U;
	static uint32_t x74 = 41U;
	uint8_t x75 = 115U;
	volatile uint64_t x76 = UINT64_MAX;

	t18 = ((x73|(x74<=x75))|x76);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = -3;
	int16_t x79 = -1;
	volatile uint16_t x80 = UINT16_MAX;
	int32_t t19 = 21172027;

	t19 = ((x77|(x78<=x79))|x80);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int64_t x82 = -35501651147625724LL;
	static volatile uint8_t x83 = 34U;
	static int64_t x84 = INT64_MIN;

	t20 = ((x81|(x82<=x83))|x84);

	if (t20 != -2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = 9885;
	int32_t x87 = INT32_MIN;
	static int32_t x88 = INT32_MAX;
	volatile int64_t t21 = 1072076014945454556LL;

	t21 = ((x85|(x86<=x87))|x88);

	if (t21 != -17179869185LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x90 = UINT16_MAX;
	int64_t x91 = -141276008890LL;
	int64_t t22 = -8627LL;

	t22 = ((x89|(x90<=x91))|x92);

	if (t22 != -17334273LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int64_t x94 = 7237LL;
	volatile int16_t x95 = INT16_MIN;
	static uint64_t t23 = 15090LLU;

	t23 = ((x93|(x94<=x95))|x96);

	if (t23 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MAX;
	int16_t x99 = INT16_MIN;
	static int16_t x100 = INT16_MIN;
	int32_t t24 = 37130;

	t24 = ((x97|(x98<=x99))|x100);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x102 = INT16_MAX;
	int8_t x104 = INT8_MIN;
	static uint32_t t25 = 61U;

	t25 = ((x101|(x102<=x103))|x104);

	if (t25 != 4294967171U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	uint16_t x108 = 254U;
	volatile int32_t t26 = 494;

	t26 = ((x105|(x106<=x107))|x108);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x109 = INT16_MIN;
	uint8_t x110 = UINT8_MAX;
	volatile int64_t x111 = INT64_MAX;
	int32_t x112 = INT32_MIN;
	static int32_t t27 = -5151484;

	t27 = ((x109|(x110<=x111))|x112);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	volatile int64_t x114 = -394698678755558LL;
	static int32_t x115 = INT32_MAX;
	int32_t x116 = -1;
	int32_t t28 = 1137507;

	t28 = ((x113|(x114<=x115))|x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	uint8_t x118 = UINT8_MAX;
	int8_t x119 = 19;
	int16_t x120 = INT16_MAX;
	int32_t t29 = 27;

	t29 = ((x117|(x118<=x119))|x120);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	volatile uint8_t x122 = 0U;
	int8_t x123 = -1;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -44;

	t30 = ((x121|(x122<=x123))|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	uint8_t x126 = UINT8_MAX;
	static uint32_t x128 = 2130387134U;
	volatile int64_t t31 = 1753317199479540LL;

	t31 = ((x125|(x126<=x127))|x128);

	if (t31 != -9223372034724388674LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -14348;
	int64_t x130 = -1LL;
	static uint32_t x131 = UINT32_MAX;
	uint32_t x132 = UINT32_MAX;
	uint32_t t32 = UINT32_MAX;

	t32 = ((x129|(x130<=x131))|x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -13;
	int16_t x134 = -1;
	uint16_t x135 = 19770U;
	uint16_t x136 = UINT16_MAX;

	t33 = ((x133|(x134<=x135))|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -6842;
	int32_t x138 = INT32_MIN;
	static volatile int64_t x139 = -1550078698423763LL;
	int16_t x140 = -43;
	int32_t t34 = -6;

	t34 = ((x137|(x138<=x139))|x140);

	if (t34 != -41) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	volatile int32_t x142 = -56849645;
	volatile uint16_t x143 = UINT16_MAX;
	uint32_t t35 = UINT32_MAX;

	t35 = ((x141|(x142<=x143))|x144);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x146 = INT16_MIN;
	volatile int32_t x148 = INT32_MAX;

	t36 = ((x145|(x146<=x147))|x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int8_t x150 = 1;
	int16_t x151 = INT16_MIN;
	uint16_t x152 = UINT16_MAX;

	t37 = ((x149|(x150<=x151))|x152);

	if (t37 != -2147418113) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 0;
	int32_t x154 = INT32_MIN;
	volatile int32_t x155 = -1;
	uint16_t x156 = 15U;
	static int32_t t38 = -83;

	t38 = ((x153|(x154<=x155))|x156);

	if (t38 != 15) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MAX;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MAX;

	t39 = ((x157|(x158<=x159))|x160);

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 169U;
	static int64_t x163 = -109376633LL;
	int8_t x164 = -1;

	t40 = ((x161|(x162<=x163))|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	uint8_t x166 = UINT8_MAX;
	int8_t x167 = INT8_MIN;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 140467;

	t41 = ((x165|(x166<=x167))|x168);

	if (t41 != -2147483393) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 48U;
	volatile int8_t x170 = INT8_MIN;
	volatile uint8_t x171 = 12U;
	int8_t x172 = INT8_MAX;
	static volatile int32_t t42 = 0;

	t42 = ((x169|(x170<=x171))|x172);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MIN;
	volatile uint64_t x176 = 8038828645328LLU;
	uint64_t t43 = 5315326LLU;

	t43 = ((x173|(x174<=x175))|x176);

	if (t43 != 8038828645375LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 1420856116U;
	uint32_t x178 = 30046U;
	static int8_t x179 = 0;
	static uint8_t x180 = 119U;
	volatile uint32_t t44 = 176639857U;

	t44 = ((x177|(x178<=x179))|x180);

	if (t44 != 1420856183U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	static int64_t x182 = 1010162929063093562LL;
	int64_t x183 = INT64_MIN;
	uint64_t x184 = 1975LLU;
	static uint64_t t45 = 168222LLU;

	t45 = ((x181|(x182<=x183))|x184);

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -155;
	volatile uint32_t x186 = 1669905U;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = 157;
	volatile int32_t t46 = 12432;

	t46 = ((x185|(x186<=x187))|x188);

	if (t46 != -3) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 3672U;
	int16_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = ((x189|(x190<=x191))|x192);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 134040489U;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = INT64_MAX;
	int8_t x196 = -1;
	uint32_t t48 = UINT32_MAX;

	t48 = ((x193|(x194<=x195))|x196);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	int8_t x198 = -29;
	int16_t x199 = 30;
	int32_t x200 = 14996;
	int32_t t49 = -6;

	t49 = ((x197|(x198<=x199))|x200);

	if (t49 != -2147468651) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	static volatile uint64_t x202 = 735536214473315LLU;
	int32_t x203 = INT32_MAX;
	int8_t x204 = 5;
	int32_t t50 = -781229871;

	t50 = ((x201|(x202<=x203))|x204);

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MIN;
	int8_t x207 = 1;
	int16_t x208 = -1;
	volatile int32_t t51 = 3;

	t51 = ((x205|(x206<=x207))|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -9;
	static int32_t x211 = INT32_MAX;
	uint32_t x212 = 50U;
	uint32_t t52 = 125731004U;

	t52 = ((x209|(x210<=x211))|x212);

	if (t52 != 4294934579U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 274352766U;
	int64_t x214 = -1LL;
	int64_t x215 = INT64_MAX;
	int32_t x216 = 79251;
	uint32_t t53 = 437222U;

	t53 = ((x213|(x214<=x215))|x216);

	if (t53 != 274431999U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = 468;
	static int8_t x219 = -1;
	static volatile int8_t x220 = INT8_MAX;
	volatile int32_t t54 = INT32_MAX;

	t54 = ((x217|(x218<=x219))|x220);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	volatile int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MIN;
	volatile int16_t x224 = -1;

	t55 = ((x221|(x222<=x223))|x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 0;
	int32_t x226 = INT32_MIN;
	int8_t x227 = 0;
	volatile int8_t x228 = 12;
	int32_t t56 = 213341467;

	t56 = ((x225|(x226<=x227))|x228);

	if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int16_t x230 = -1;
	volatile int8_t x231 = INT8_MIN;
	volatile int32_t t57 = -31;

	t57 = ((x229|(x230<=x231))|x232);

	if (t57 != 466175) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -638;
	uint32_t x235 = 1858679504U;
	int64_t x236 = INT64_MAX;
	int64_t t58 = -183065782063154LL;

	t58 = ((x233|(x234<=x235))|x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = -1;
	int64_t x238 = -1LL;
	int64_t x240 = -1LL;
	int64_t t59 = 997824736786561LL;

	t59 = ((x237|(x238<=x239))|x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 189378548U;
	int32_t x242 = -1;
	volatile uint8_t x243 = UINT8_MAX;
	static int64_t x244 = -1LL;
	static int64_t t60 = -18678783LL;

	t60 = ((x241|(x242<=x243))|x244);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	volatile uint64_t x247 = 28LLU;
	volatile int32_t t61 = 5271;

	t61 = ((x245|(x246<=x247))|x248);

	if (t61 != -15794) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 350U;
	uint8_t x251 = 29U;
	volatile uint64_t x252 = UINT64_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = ((x249|(x250<=x251))|x252);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	uint64_t x255 = 746830925411LLU;
	int64_t x256 = INT64_MAX;
	volatile int64_t t63 = 261239399518289515LL;

	t63 = ((x253|(x254<=x255))|x256);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x258 = 328780615614431414LLU;
	uint64_t x259 = 10061724272LLU;
	int16_t x260 = INT16_MIN;
	int32_t t64 = -447287122;

	t64 = ((x257|(x258<=x259))|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -1;
	static int64_t x263 = INT64_MIN;
	int8_t x264 = -3;

	t65 = ((x261|(x262<=x263))|x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = 4014386LL;
	int8_t x266 = -1;
	uint64_t x267 = 803879802LLU;
	int32_t x268 = INT32_MAX;

	t66 = ((x265|(x266<=x267))|x268);

	if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	uint64_t x270 = 15778610244131798LLU;
	volatile int32_t x271 = INT32_MIN;
	int64_t x272 = 181637778930LL;
	int64_t t67 = -452434604LL;

	t67 = ((x269|(x270<=x271))|x272);

	if (t67 != 182536110079LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = -35;
	int64_t x275 = 229LL;
	volatile int64_t x276 = 282979150461285LL;

	t68 = ((x273|(x274<=x275))|x276);

	if (t68 != -1212286619LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MAX;
	uint8_t x278 = 121U;
	int64_t x279 = -2330853844LL;
	uint64_t x280 = 7892064370877385LLU;

	t69 = ((x277|(x278<=x279))|x280);

	if (t69 != 7892064370877439LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	int32_t x282 = INT32_MIN;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = 3;
	int64_t t70 = 125822LL;

	t70 = ((x281|(x282<=x283))|x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -1LL;
	int32_t x287 = -1;
	volatile int32_t x288 = 129;
	static int64_t t71 = 1985226699862792LL;

	t71 = ((x285|(x286<=x287))|x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = -15573100LL;
	int32_t x290 = -24;
	int64_t x291 = INT64_MIN;
	volatile int8_t x292 = -1;
	volatile int64_t t72 = -1978LL;

	t72 = ((x289|(x290<=x291))|x292);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 2;
	static int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	static volatile int32_t x296 = INT32_MIN;

	t73 = ((x293|(x294<=x295))|x296);

	if (t73 != -2147483646) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 341U;
	static int8_t x298 = -1;
	volatile uint32_t x299 = 12511233U;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 2874150;

	t74 = ((x297|(x298<=x299))|x300);

	if (t74 != -43) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 12008382LL;
	int64_t x302 = INT64_MAX;
	int64_t x303 = -1LL;
	volatile int8_t x304 = 21;
	int64_t t75 = -37606510510789LL;

	t75 = ((x301|(x302<=x303))|x304);

	if (t75 != 12008383LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x305 = 53U;
	volatile int64_t t76 = -5638959683938LL;

	t76 = ((x305|(x306<=x307))|x308);

	if (t76 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = -468302;
	static int32_t x311 = INT32_MIN;
	static volatile int16_t x312 = -1;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = ((x309|(x310<=x311))|x312);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 13;
	uint16_t x314 = 9503U;
	uint32_t x315 = 37688988U;

	t78 = ((x313|(x314<=x315))|x316);

	if (t78 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 215130838U;
	int8_t x318 = INT8_MAX;
	static uint8_t x319 = 11U;
	int32_t x320 = INT32_MAX;

	t79 = ((x317|(x318<=x319))|x320);

	if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 50U;
	static uint64_t x322 = 1693763455103LLU;
	int32_t t80 = 0;

	t80 = ((x321|(x322<=x323))|x324);

	if (t80 != -78) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MAX;
	int64_t x328 = INT64_MIN;

	t81 = ((x325|(x326<=x327))|x328);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 20788U;
	static int32_t x330 = -135;
	uint16_t x332 = UINT16_MAX;

	t82 = ((x329|(x330<=x331))|x332);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MAX;
	int64_t x335 = INT64_MIN;

	t83 = ((x333|(x334<=x335))|x336);

	if (t83 != -2147483521) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = -1;
	volatile int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	int8_t x340 = -1;
	volatile int32_t t84 = -1833133;

	t84 = ((x337|(x338<=x339))|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -18298;
	int16_t x342 = INT16_MAX;
	volatile uint64_t x343 = 1946727LLU;
	uint16_t x344 = UINT16_MAX;
	int32_t t85 = -10606;

	t85 = ((x341|(x342<=x343))|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x347 = INT8_MIN;
	static uint8_t x348 = UINT8_MAX;
	uint64_t t86 = UINT64_MAX;

	t86 = ((x345|(x346<=x347))|x348);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x349 = 688810783589024772LLU;
	int8_t x350 = INT8_MAX;
	uint8_t x351 = 50U;
	static int8_t x352 = 0;
	uint64_t t87 = 5LLU;

	t87 = ((x349|(x350<=x351))|x352);

	if (t87 != 688810783589024772LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int8_t x354 = -1;
	volatile int32_t x356 = -1;

	t88 = ((x353|(x354<=x355))|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	static int8_t x358 = INT8_MAX;
	volatile int8_t x359 = 1;
	int64_t x360 = 124LL;
	int64_t t89 = 4272977615957843494LL;

	t89 = ((x357|(x358<=x359))|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MIN;
	volatile uint16_t x363 = 7697U;
	volatile int64_t t90 = 30951479LL;

	t90 = ((x361|(x362<=x363))|x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MIN;
	int16_t x366 = -200;
	uint8_t x367 = UINT8_MAX;

	t91 = ((x365|(x366<=x367))|x368);

	if (t91 != -32641) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x371 = -1;
	volatile uint8_t x372 = 35U;
	volatile int32_t t92 = 39393;

	t92 = ((x369|(x370<=x371))|x372);

	if (t92 != -32733) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 1;
	int32_t x374 = 59;
	int8_t x375 = INT8_MIN;
	int8_t x376 = -1;

	t93 = ((x373|(x374<=x375))|x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	uint16_t x379 = 43U;
	volatile int32_t x380 = -1;

	t94 = ((x377|(x378<=x379))|x380);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	static int16_t x382 = 7;
	static int32_t x384 = INT32_MIN;
	int64_t t95 = -1725599586981264710LL;

	t95 = ((x381|(x382<=x383))|x384);

	if (t95 != -2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = 1262918046718LL;
	uint8_t x386 = 0U;
	int32_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int64_t t96 = 19514212810411186LL;

	t96 = ((x385|(x386<=x387))|x388);

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	static uint16_t x392 = 4322U;
	int32_t t97 = -6188569;

	t97 = ((x389|(x390<=x391))|x392);

	if (t97 != -29) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	int32_t x394 = INT32_MIN;
	int32_t x395 = 783;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t98 = 138;

	t98 = ((x393|(x394<=x395))|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 569U;
	uint8_t x399 = 100U;
	volatile int64_t x400 = INT64_MIN;
	volatile int64_t t99 = 2972860800709723020LL;

	t99 = ((x397|(x398<=x399))|x400);

	if (t99 != -9223372036854775752LL) { NG(); } else { ; }
	
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

