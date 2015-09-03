#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
uint64_t x3 = UINT64_MAX;
volatile int16_t x10 = -1;
static int32_t t2 = -10409;
volatile int32_t x14 = -1;
int64_t x18 = 241779501684LL;
volatile int64_t t5 = -1681273076LL;
uint32_t x36 = 1U;
volatile int64_t t8 = -124470159176280LL;
static int16_t x38 = INT16_MIN;
int16_t x44 = -540;
uint64_t x45 = 54327287119LLU;
static int64_t x49 = -640604889612073774LL;
static volatile int64_t x51 = 1LL;
volatile uint64_t t13 = 673756272919LLU;
int32_t x57 = INT32_MIN;
static int64_t t14 = -4047653568LL;
static int32_t x62 = INT32_MAX;
static int64_t x72 = INT64_MAX;
int32_t x73 = -1;
int64_t x79 = INT64_MIN;
int32_t x86 = -1;
uint8_t x87 = 1U;
static int32_t t21 = 43;
static int64_t x89 = -1LL;
static uint32_t x90 = 57U;
int8_t x92 = INT8_MIN;
int64_t x95 = -1LL;
int64_t t23 = 502386619222LL;
int64_t x98 = -1LL;
uint16_t x99 = UINT16_MAX;
int8_t x101 = -19;
volatile uint64_t x103 = 52779454714521472LLU;
static uint32_t t27 = 24U;
uint32_t x118 = 9205397U;
uint64_t x122 = 6787427454LLU;
uint64_t t30 = 17453215387040LLU;
uint8_t x137 = 0U;
int32_t x140 = 116;
static int8_t x141 = INT8_MAX;
static int32_t x148 = INT32_MIN;
int64_t t36 = -10719029620799LL;
uint8_t x150 = UINT8_MAX;
int64_t x154 = -1LL;
static int16_t x157 = -1;
static int8_t x158 = -2;
int64_t x160 = 3730512521364765LL;
int16_t x163 = INT16_MIN;
int16_t x167 = INT16_MAX;
volatile int8_t x168 = INT8_MIN;
uint64_t x170 = 52278356979LLU;
uint64_t t42 = 4215012LLU;
int8_t x173 = 1;
volatile int32_t t43 = -22605346;
uint64_t t44 = 325383LLU;
int32_t x183 = INT32_MAX;
volatile uint8_t x184 = 57U;
volatile int32_t t46 = -15;
int16_t x192 = INT16_MIN;
static volatile uint64_t t48 = 12524919LLU;
int64_t x198 = INT64_MIN;
int64_t x207 = INT64_MIN;
volatile int64_t x208 = 113459931LL;
int16_t x216 = INT16_MIN;
int32_t x220 = INT32_MIN;
volatile uint64_t t54 = 2147817558543297LLU;
uint8_t x225 = UINT8_MAX;
int8_t x233 = INT8_MIN;
volatile int32_t x234 = 95;
uint8_t x235 = 12U;
volatile int8_t x239 = -1;
uint16_t x241 = 2270U;
int8_t x242 = -1;
int32_t x248 = 3379142;
int64_t x251 = -1LL;
volatile int64_t t66 = -85387331536067LL;
int64_t t68 = INT64_MIN;
volatile int32_t t70 = -77499;
uint8_t x286 = 93U;
static int8_t x288 = INT8_MAX;
uint64_t t71 = 15034LLU;
volatile int8_t x290 = -53;
volatile int16_t x295 = INT16_MIN;
int16_t x296 = -1;
int8_t x311 = 16;
volatile uint64_t t77 = 994675779LLU;
static int32_t x324 = INT32_MIN;
volatile int64_t x325 = INT64_MAX;
int32_t x332 = -1;
static uint16_t x339 = 29U;
uint8_t x340 = 1U;
static volatile uint32_t t85 = 8U;
int64_t x353 = INT64_MIN;
static int8_t x355 = 60;
volatile int32_t x356 = INT32_MAX;
uint64_t t89 = 3847577737065376235LLU;
volatile int8_t x376 = -1;
int32_t x378 = -1;
int64_t x379 = -1LL;
volatile int64_t x382 = -1LL;
int8_t x387 = -1;
uint64_t x391 = UINT64_MAX;
static int16_t x398 = INT16_MAX;


void f0(void) {
	volatile int32_t x1 = -1;
	volatile int64_t x4 = 3868579319LL;
	uint64_t t0 = 14176531150LLU;

	t0 = ((x1|(x2^x3))&x4);

	if (t0 != 3868579319LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -493792549;
	int32_t x6 = INT32_MAX;
	int32_t x7 = INT32_MAX;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 1;

	t1 = ((x5|(x6^x7))&x8);

	if (t1 != 219) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -2;
	volatile int8_t x11 = -1;
	volatile uint8_t x12 = UINT8_MAX;

	t2 = ((x9|(x10^x11))&x12);

	if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 58;
	int32_t x15 = INT32_MIN;
	static int16_t x16 = 1;
	int32_t t3 = 1795446;

	t3 = ((x13|(x14^x15))&x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	int64_t t4 = 550927144LL;

	t4 = ((x17|(x18^x19))&x20);

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 22U;
	int64_t x22 = -253998874458588LL;
	volatile int64_t x23 = -1LL;
	uint8_t x24 = 5U;

	t5 = ((x21|(x22^x23))&x24);

	if (t5 != 5LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint64_t x26 = 593397900LLU;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = -3;
	uint64_t t6 = 3612762751447952858LLU;

	t6 = ((x25|(x26^x27))&x28);

	if (t6 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int16_t x30 = INT16_MIN;
	int64_t x31 = INT64_MIN;
	volatile int8_t x32 = INT8_MIN;
	int64_t t7 = 61004LL;

	t7 = ((x29|(x30^x31))&x32);

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	volatile int64_t x34 = -18795227088727553LL;
	volatile int64_t x35 = INT64_MIN;

	t8 = ((x33|(x34^x35))&x36);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int64_t x39 = -1810LL;
	int64_t x40 = 8131080LL;
	int64_t t9 = -39653013LL;

	t9 = ((x37|(x38^x39))&x40);

	if (t9 != 8131080LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 0;
	uint8_t x42 = 1U;
	uint16_t x43 = 6U;
	int32_t t10 = -2614;

	t10 = ((x41|(x42^x43))&x44);

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	static uint64_t x47 = 456075849404691154LLU;
	volatile uint16_t x48 = 1173U;
	volatile uint64_t t11 = 30177321196751LLU;

	t11 = ((x45|(x46^x47))&x48);

	if (t11 != 1173LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = 425;
	volatile int8_t x52 = INT8_MAX;
	volatile int64_t t12 = -70200LL;

	t12 = ((x49|(x50^x51))&x52);

	if (t12 != 122LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 3416LLU;
	static volatile uint8_t x54 = UINT8_MAX;
	int64_t x55 = -42159721443LL;
	int8_t x56 = INT8_MAX;

	t13 = ((x53|(x54^x55))&x56);

	if (t13 != 122LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 1U;
	volatile int64_t x59 = INT64_MIN;
	uint8_t x60 = UINT8_MAX;

	t14 = ((x57|(x58^x59))&x60);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x63 = INT8_MAX;
	int16_t x64 = -1;
	volatile int64_t t15 = 17376304701LL;

	t15 = ((x61|(x62^x63))&x64);

	if (t15 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	volatile int16_t x66 = -1;
	int16_t x67 = 7;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = ((x65|(x66^x67))&x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 4U;
	volatile uint64_t x70 = 1499961210488LLU;
	uint64_t x71 = UINT64_MAX;
	uint64_t t17 = 787995LLU;

	t17 = ((x69|(x70^x71))&x72);

	if (t17 != 9223370536893565319LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 1U;
	int16_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile uint32_t t18 = 252220U;

	t18 = ((x73|(x74^x75))&x76);

	if (t18 != 65535U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = 794402;
	uint16_t x80 = 633U;
	int64_t t19 = 269166376389LL;

	t19 = ((x77|(x78^x79))&x80);

	if (t19 != 544LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1356837825LL;
	static uint32_t x82 = 0U;
	uint8_t x83 = UINT8_MAX;
	volatile int32_t x84 = -64;
	volatile int64_t t20 = -100466567225LL;

	t20 = ((x81|(x82^x83))&x84);

	if (t20 != -1356837696LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -1;
	int16_t x88 = -1;

	t21 = ((x85|(x86^x87))&x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x91 = 0;
	volatile int64_t t22 = -922LL;

	t22 = ((x89|(x90^x91))&x92);

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	int32_t x94 = INT32_MIN;
	int8_t x96 = INT8_MAX;

	t23 = ((x93|(x94^x95))&x96);

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static int32_t x100 = INT32_MIN;
	volatile int64_t t24 = 48021369LL;

	t24 = ((x97|(x98^x99))&x100);

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x102 = INT32_MIN;
	static volatile uint8_t x104 = 0U;
	uint64_t t25 = 35459967865LLU;

	t25 = ((x101|(x102^x103))&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 63088;
	uint16_t x106 = 1140U;
	int16_t x107 = INT16_MIN;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t26 = 1436U;

	t26 = ((x105|(x106^x107))&x108);

	if (t26 != 4294964852U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -3;
	uint32_t x110 = 631647414U;
	uint32_t x111 = 53283705U;
	uint16_t x112 = 6040U;

	t27 = ((x109|(x110^x111))&x112);

	if (t27 != 6040U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 9306730;
	static int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	int16_t x116 = INT16_MIN;
	static int32_t t28 = 59;

	t28 = ((x113|(x114^x115))&x116);

	if (t28 != 9306112) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	int64_t x120 = 4351823302LL;
	int64_t t29 = 65752244859647282LL;

	t29 = ((x117|(x118^x119))&x120);

	if (t29 != 4351823302LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	static int8_t x123 = 4;
	int16_t x124 = INT16_MIN;

	t30 = ((x121|(x122^x123))&x124);

	if (t30 != 6787399680LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 55LLU;
	volatile uint64_t x126 = 0LLU;
	int64_t x127 = INT64_MAX;
	static uint64_t x128 = 15652946646645LLU;
	uint64_t t31 = 124370588LLU;

	t31 = ((x125|(x126^x127))&x128);

	if (t31 != 15652946646645LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -463772;
	static int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	volatile int64_t t32 = -11164242443LL;

	t32 = ((x129|(x130^x131))&x132);

	if (t32 != 27748LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	uint8_t x134 = 1U;
	static uint64_t x135 = 3622774LLU;
	int64_t x136 = INT64_MIN;
	uint64_t t33 = 217LLU;

	t33 = ((x133|(x134^x135))&x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MIN;
	volatile int64_t t34 = 52LL;

	t34 = ((x137|(x138^x139))&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = -1;
	static int8_t x143 = -35;
	int16_t x144 = -520;
	volatile int32_t t35 = 6;

	t35 = ((x141|(x142^x143))&x144);

	if (t35 != 120) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MAX;
	int32_t x146 = INT32_MAX;
	static int64_t x147 = 0LL;

	t36 = ((x145|(x146^x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	volatile int8_t x151 = INT8_MAX;
	static uint8_t x152 = UINT8_MAX;
	static volatile int32_t t37 = 94325;

	t37 = ((x149|(x150^x151))&x152);

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 122U;
	uint32_t x155 = UINT32_MAX;
	static volatile int16_t x156 = 3;
	volatile int64_t t38 = 861LL;

	t38 = ((x153|(x154^x155))&x156);

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = -441291;
	volatile int64_t t39 = 957096586387LL;

	t39 = ((x157|(x158^x159))&x160);

	if (t39 != 3730512521364765LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 36U;
	int16_t x162 = 9720;
	uint8_t x164 = 90U;
	int32_t t40 = 0;

	t40 = ((x161|(x162^x163))&x164);

	if (t40 != 88) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	uint64_t x166 = UINT64_MAX;
	uint64_t t41 = 3111LLU;

	t41 = ((x165|(x166^x167))&x168);

	if (t41 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	static volatile uint32_t x171 = 2644U;
	uint16_t x172 = 1U;

	t42 = ((x169|(x170^x171))&x172);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	uint16_t x175 = 15U;
	uint8_t x176 = 0U;

	t43 = ((x173|(x174^x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 5624601129LLU;
	int8_t x178 = INT8_MAX;
	int16_t x179 = -320;
	uint8_t x180 = 85U;

	t44 = ((x177|(x178^x179))&x180);

	if (t44 != 21LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	uint8_t x182 = 25U;
	int32_t t45 = -52239951;

	t45 = ((x181|(x182^x183))&x184);

	if (t45 != 57) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	static uint16_t x186 = UINT16_MAX;
	int32_t x187 = -7647;
	int8_t x188 = -7;

	t46 = ((x185|(x186^x187))&x188);

	if (t46 != -7) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x189 = 1044U;
	int8_t x190 = INT8_MAX;
	int16_t x191 = 0;
	volatile uint32_t t47 = 431938U;

	t47 = ((x189|(x190^x191))&x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 0;
	int32_t x194 = -1;
	uint64_t x195 = 336165LLU;
	int8_t x196 = INT8_MAX;

	t48 = ((x193|(x194^x195))&x196);

	if (t48 != 90LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -1;
	volatile int16_t x199 = INT16_MAX;
	volatile int8_t x200 = -4;
	static int64_t t49 = 575652192LL;

	t49 = ((x197|(x198^x199))&x200);

	if (t49 != -4LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 31U;
	int64_t x202 = -1LL;
	uint16_t x203 = 20U;
	static volatile int16_t x204 = -1;
	int64_t t50 = 25122LL;

	t50 = ((x201|(x202^x203))&x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 8697U;
	static int64_t x206 = INT64_MAX;
	volatile int64_t t51 = -2202LL;

	t51 = ((x205|(x206^x207))&x208);

	if (t51 != 113459931LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 955;
	uint16_t x210 = 247U;
	int8_t x211 = 1;
	uint16_t x212 = 1519U;
	int32_t t52 = -25;

	t52 = ((x209|(x210^x211))&x212);

	if (t52 != 495) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int8_t x214 = INT8_MIN;
	int32_t x215 = -1;
	int32_t t53 = 3;

	t53 = ((x213|(x214^x215))&x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = 1367410719045LLU;
	int32_t x218 = -1;
	static int16_t x219 = INT16_MIN;

	t54 = ((x217|(x218^x219))&x220);

	if (t54 != 1365799600128LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -581;
	int64_t x222 = -138922794305956852LL;
	uint8_t x223 = UINT8_MAX;
	uint32_t x224 = UINT32_MAX;
	int64_t t55 = 31365254367480LL;

	t55 = ((x221|(x222^x223))&x224);

	if (t55 != 4294966779LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	static int64_t x228 = INT64_MIN;
	int64_t t56 = -3470027681834754LL;

	t56 = ((x225|(x226^x227))&x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile uint64_t x230 = 957LLU;
	static volatile int32_t x231 = INT32_MAX;
	uint64_t x232 = UINT64_MAX;
	static volatile uint64_t t57 = 694345LLU;

	t57 = ((x229|(x230^x231))&x232);

	if (t57 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x236 = 26U;
	int32_t t58 = 1;

	t58 = ((x233|(x234^x235))&x236);

	if (t58 != 18) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 3U;
	uint16_t x238 = 3449U;
	int64_t x240 = -10075447155640LL;
	static volatile int64_t t59 = -22033770LL;

	t59 = ((x237|(x238^x239))&x240);

	if (t59 != -10075447156736LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x243 = -25975626294716144LL;
	int8_t x244 = INT8_MIN;
	volatile int64_t t60 = 304205317596794501LL;

	t60 = ((x241|(x242^x243))&x244);

	if (t60 != 25975626294718080LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	static uint16_t x246 = 11255U;
	int8_t x247 = INT8_MIN;
	volatile int32_t t61 = -13052144;

	t61 = ((x245|(x246^x247))&x248);

	if (t61 != 3376198) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	volatile int32_t x250 = INT32_MIN;
	int8_t x252 = -1;
	int64_t t62 = 533953032157499444LL;

	t62 = ((x249|(x250^x251))&x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	int64_t x256 = 71LL;
	int64_t t63 = -99361957573260LL;

	t63 = ((x253|(x254^x255))&x256);

	if (t63 != 71LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	int32_t x258 = INT32_MAX;
	int16_t x259 = INT16_MIN;
	volatile int8_t x260 = -1;
	int64_t t64 = -4327223154198734081LL;

	t64 = ((x257|(x258^x259))&x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	int32_t x262 = -689227011;
	volatile int32_t x263 = -1;
	volatile int64_t x264 = 676084213514819LL;
	int64_t t65 = -4173300638978129995LL;

	t65 = ((x261|(x262^x263))&x264);

	if (t65 != 676083837992962LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1LL;
	volatile int64_t x266 = INT64_MAX;
	static int32_t x267 = -1;
	uint8_t x268 = 2U;

	t66 = ((x265|(x266^x267))&x268);

	if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	static uint64_t x270 = UINT64_MAX;
	static uint8_t x271 = 7U;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x269|(x270^x271))&x272);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	uint8_t x275 = 11U;
	static int64_t x276 = INT64_MIN;

	t68 = ((x273|(x274^x275))&x276);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MIN;
	int32_t x278 = -1;
	uint16_t x279 = 55U;
	uint32_t x280 = 200183784U;
	volatile uint32_t t69 = 1U;

	t69 = ((x277|(x278^x279))&x280);

	if (t69 != 200183752U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 2930U;
	uint8_t x282 = 0U;
	volatile int32_t x283 = -144;
	int8_t x284 = -1;

	t70 = ((x281|(x282^x283))&x284);

	if (t70 != -142) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	static int64_t x287 = INT64_MIN;

	t71 = ((x285|(x286^x287))&x288);

	if (t71 != 127LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	static volatile int32_t x291 = -1;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t72 = -1743;

	t72 = ((x289|(x290^x291))&x292);

	if (t72 != 2147450932) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int32_t t73 = 1018;

	t73 = ((x293|(x294^x295))&x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = 1935783LLU;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = -7714;
	uint64_t t74 = 16461822921140619LLU;

	t74 = ((x297|(x298^x299))&x300);

	if (t74 != 18446744073709543902LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 149U;
	volatile uint8_t x302 = 16U;
	int32_t x303 = 114470800;
	int32_t x304 = -1;
	int32_t t75 = -85113;

	t75 = ((x301|(x302^x303))&x304);

	if (t75 != 114470805) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -1;
	volatile int64_t x306 = INT64_MAX;
	int8_t x307 = INT8_MIN;
	volatile int16_t x308 = -1;
	int64_t t76 = 869603LL;

	t76 = ((x305|(x306^x307))&x308);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	static uint64_t x310 = 2685385LLU;
	uint8_t x312 = UINT8_MAX;

	t77 = ((x309|(x310^x311))&x312);

	if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -7;
	static uint64_t x314 = 24209LLU;
	uint32_t x315 = 15U;
	volatile int64_t x316 = INT64_MIN;
	volatile uint64_t t78 = 75776LLU;

	t78 = ((x313|(x314^x315))&x316);

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 1;
	volatile int32_t x318 = -149;
	uint64_t x319 = 140648586200049LLU;
	static volatile int16_t x320 = INT16_MAX;
	uint64_t t79 = 1688593257563943727LLU;

	t79 = ((x317|(x318^x319))&x320);

	if (t79 != 15515LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 457067468343874LLU;
	int8_t x322 = -1;
	volatile int8_t x323 = 0;
	volatile uint64_t t80 = 2049LLU;

	t80 = ((x321|(x322^x323))&x324);

	if (t80 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x326 = INT16_MAX;
	uint32_t x327 = 997U;
	int64_t x328 = 28376298940LL;
	volatile int64_t t81 = 132758839034LL;

	t81 = ((x325|(x326^x327))&x328);

	if (t81 != 28376298940LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MAX;
	uint16_t x331 = UINT16_MAX;
	static volatile int64_t t82 = 7338050237083LL;

	t82 = ((x329|(x330^x331))&x332);

	if (t82 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	volatile int16_t x335 = INT16_MIN;
	volatile int8_t x336 = INT8_MAX;
	int32_t t83 = -29088;

	t83 = ((x333|(x334^x335))&x336);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;
	int32_t t84 = -1;

	t84 = ((x337|(x338^x339))&x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -85667;
	volatile uint32_t x342 = 1U;
	int16_t x343 = 236;
	int8_t x344 = INT8_MIN;

	t85 = ((x341|(x342^x343))&x344);

	if (t85 != 4294881664U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	int32_t x346 = 11961;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 1009243570LLU;
	volatile uint64_t t86 = 160973253LLU;

	t86 = ((x345|(x346^x347))&x348);

	if (t86 != 1009243568LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 216304142U;
	int16_t x350 = 1;
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;
	uint32_t t87 = 1019543U;

	t87 = ((x349|(x350^x351))&x352);

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x354 = -1LL;
	static int64_t t88 = -446936418LL;

	t88 = ((x353|(x354^x355))&x356);

	if (t88 != 2147483587LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	int64_t x358 = INT64_MIN;
	volatile int8_t x359 = INT8_MIN;
	uint64_t x360 = 85863185691433LLU;

	t89 = ((x357|(x358^x359))&x360);

	if (t89 != 85863185691392LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	static int64_t x362 = -174224959LL;
	int32_t x363 = 160512816;
	volatile uint16_t x364 = 1U;
	uint64_t t90 = 1055737LLU;

	t90 = ((x361|(x362^x363))&x364);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = -1;
	volatile int8_t x368 = -1;
	volatile int32_t t91 = 2833;

	t91 = ((x365|(x366^x367))&x368);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 91171489027396LL;
	int16_t x370 = 1;
	static volatile int16_t x371 = -1;
	uint32_t x372 = 1192U;
	volatile int64_t t92 = 1357202LL;

	t92 = ((x369|(x370^x371))&x372);

	if (t92 != 1192LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 16;
	int32_t x374 = INT32_MIN;
	volatile uint32_t x375 = 96U;
	uint32_t t93 = 2U;

	t93 = ((x373|(x374^x375))&x376);

	if (t93 != 2147483760U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	uint8_t x380 = 9U;
	volatile int64_t t94 = -160813LL;

	t94 = ((x377|(x378^x379))&x380);

	if (t94 != 9LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -3;
	static volatile int8_t x383 = -1;
	int16_t x384 = INT16_MAX;
	int64_t t95 = -5LL;

	t95 = ((x381|(x382^x383))&x384);

	if (t95 != 32765LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 184158810U;
	int64_t x386 = INT64_MAX;
	int16_t x388 = -60;
	static int64_t t96 = -115121013LL;

	t96 = ((x385|(x386^x387))&x388);

	if (t96 != -9223372036670617024LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	volatile int32_t x390 = INT32_MIN;
	volatile int16_t x392 = 0;
	uint64_t t97 = 2LLU;

	t97 = ((x389|(x390^x391))&x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MAX;
	uint16_t x395 = 19U;
	volatile uint64_t x396 = 33459817027LLU;
	volatile uint64_t t98 = 3894636725LLU;

	t98 = ((x393|(x394^x395))&x396);

	if (t98 != 33459817024LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 8318916U;
	volatile int8_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	volatile uint32_t t99 = 11054U;

	t99 = ((x397|(x398^x399))&x400);

	if (t99 != 61380U) { NG(); } else { ; }
	
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

