#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x10 = -10928;
volatile int8_t x27 = INT8_MIN;
int32_t t4 = 15275;
int64_t x32 = INT64_MIN;
volatile int64_t t5 = -122642364657066614LL;
volatile uint8_t x34 = 7U;
volatile uint32_t x35 = 507836U;
uint32_t x36 = 692252907U;
volatile int64_t t6 = -276128LL;
volatile int64_t x38 = INT64_MIN;
uint8_t x49 = 26U;
int16_t x54 = -13;
int32_t x56 = INT32_MIN;
int8_t x60 = INT8_MIN;
int32_t x70 = 59;
int64_t x76 = INT64_MIN;
int8_t x81 = INT8_MAX;
uint32_t x84 = 9624599U;
static int64_t t16 = -193109513LL;
uint16_t x85 = 143U;
static uint32_t x91 = UINT32_MAX;
int64_t x100 = INT64_MIN;
int16_t x104 = -1;
int64_t x105 = 7306655585087123LL;
volatile uint32_t x115 = UINT32_MAX;
int32_t x116 = INT32_MIN;
static uint8_t x118 = 5U;
int8_t x119 = INT8_MIN;
uint8_t x120 = UINT8_MAX;
uint64_t t26 = 882LLU;
int16_t x125 = -1;
uint8_t x127 = UINT8_MAX;
volatile int32_t x133 = 3347;
uint64_t x136 = UINT64_MAX;
int16_t x138 = 210;
int8_t x152 = INT8_MIN;
volatile uint64_t t33 = 46809460977756LLU;
int8_t x157 = -28;
int16_t x166 = INT16_MIN;
volatile uint64_t t36 = 208557791063LLU;
uint32_t t38 = 3U;
uint16_t x189 = 0U;
int8_t x190 = -1;
static int16_t x191 = INT16_MIN;
int32_t t40 = 0;
uint32_t t43 = 581U;
volatile int16_t x212 = 366;
int64_t x213 = -1LL;
uint32_t x220 = 9046U;
int32_t x229 = INT32_MIN;
volatile int32_t t50 = 105;
int64_t x240 = 117362LL;
static uint8_t x246 = 6U;
uint64_t t53 = 29LLU;
int8_t x258 = -3;
int32_t t56 = 7;
int16_t x265 = INT16_MIN;
int16_t x267 = INT16_MAX;
int32_t x277 = INT32_MIN;
volatile uint64_t t60 = 192668131823333LLU;
int32_t x285 = INT32_MIN;
uint32_t x290 = 25315361U;
static uint8_t x292 = 1U;
static uint8_t x293 = 0U;
uint64_t t63 = 57046587473824830LLU;
int64_t x301 = -26679228670677LL;
int64_t x306 = INT64_MIN;
uint32_t x314 = UINT32_MAX;
int16_t x321 = 1;
int64_t t74 = -1095607979182LL;
int64_t t75 = -64242130491499LL;
int32_t x350 = 207444848;
uint32_t x351 = 0U;
static int16_t x353 = INT16_MAX;
uint16_t x355 = 5U;
volatile int64_t t77 = 24196LL;
volatile uint16_t x359 = UINT16_MAX;
static int8_t x361 = 3;
static volatile int32_t t80 = -7;
int32_t x372 = INT32_MAX;
int16_t x379 = -1;
volatile int64_t x383 = INT64_MIN;
volatile uint8_t x389 = UINT8_MAX;
int16_t x390 = -853;
uint64_t x392 = UINT64_MAX;
uint64_t t85 = 397030069754LLU;
int16_t x402 = 15;
static uint16_t x403 = 2U;
static int64_t t87 = -158LL;
int16_t x406 = INT16_MIN;
volatile int64_t t89 = -2LL;
uint8_t x415 = UINT8_MAX;
int16_t x421 = INT16_MAX;
uint16_t x425 = UINT16_MAX;
static int64_t x430 = -1LL;
int16_t x438 = 1;
static int8_t x442 = -8;
int64_t t98 = 123759691137743LL;
int16_t x452 = INT16_MIN;
static int32_t t99 = -15841;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int16_t x2 = INT16_MIN;
	int32_t x3 = 46446;
	int8_t x4 = -1;
	static volatile int32_t t0 = -15;

	t0 = (((x1%x2)+x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -67890973759LL;
	int16_t x11 = INT16_MAX;
	int64_t x12 = INT64_MAX;
	int64_t t1 = 1919243LL;

	t1 = (((x9%x10)+x11)%x12);

	if (t1 != 23968LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	uint32_t x14 = 189932U;
	int8_t x15 = 5;
	int64_t x16 = INT64_MAX;
	static int64_t t2 = -238350655LL;

	t2 = (((x13%x14)+x15)%x16);

	if (t2 != 34984LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x17 = UINT64_MAX;
	uint16_t x18 = UINT16_MAX;
	volatile int32_t x19 = INT32_MIN;
	uint16_t x20 = 3652U;
	uint64_t t3 = 1289728893LLU;

	t3 = (((x17%x18)+x19)%x20);

	if (t3 != 2280LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x25 = UINT16_MAX;
	int8_t x26 = INT8_MAX;
	uint8_t x28 = UINT8_MAX;

	t4 = (((x25%x26)+x27)%x28);

	if (t4 != -125) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	static uint16_t x30 = 4240U;
	int16_t x31 = INT16_MIN;

	t5 = (((x29%x30)+x31)%x32);

	if (t5 != -30833LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -21689472239781819LL;

	t6 = (((x33%x34)+x35)%x36);

	if (t6 != 507832LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x39 = INT16_MIN;
	static int32_t x40 = -28205552;
	volatile int64_t t7 = -8872868851593490LL;

	t7 = (((x37%x38)+x39)%x40);

	if (t7 != 7690623LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x41 = INT16_MIN;
	volatile uint8_t x42 = UINT8_MAX;
	int64_t x43 = -773127441903683LL;
	uint32_t x44 = UINT32_MAX;
	int64_t t8 = 3987618554LL;

	t8 = (((x41%x42)+x43)%x44);

	if (t8 != -3264032746LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x50 = -1;
	int8_t x51 = INT8_MAX;
	int64_t x52 = -446675LL;
	int64_t t9 = 418291671873LL;

	t9 = (((x49%x50)+x51)%x52);

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = -1;
	int16_t x55 = -1705;
	int32_t t10 = -7799;

	t10 = (((x53%x54)+x55)%x56);

	if (t10 != -1706) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -14657409;
	static int64_t x58 = 10726981124LL;
	static int16_t x59 = INT16_MAX;
	volatile int64_t t11 = -1348488LL;

	t11 = (((x57%x58)+x59)%x60);

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x61 = UINT32_MAX;
	int64_t x62 = -940490926579942LL;
	int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MAX;
	int64_t t12 = -14608737LL;

	t12 = (((x61%x62)+x63)%x64);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = -1LL;
	uint8_t x71 = UINT8_MAX;
	static uint8_t x72 = 71U;
	volatile int64_t t13 = 0LL;

	t13 = (((x69%x70)+x71)%x72);

	if (t13 != 41LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MAX;
	int8_t x74 = -1;
	int32_t x75 = INT32_MAX;
	volatile int64_t t14 = 4612117LL;

	t14 = (((x73%x74)+x75)%x76);

	if (t14 != 2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x77 = INT64_MAX;
	uint32_t x78 = 277028U;
	uint16_t x79 = 3U;
	uint8_t x80 = 15U;
	int64_t t15 = 79530LL;

	t15 = (((x77%x78)+x79)%x80);

	if (t15 != 14LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x82 = -1LL;
	static int16_t x83 = INT16_MAX;

	t16 = (((x81%x82)+x83)%x84);

	if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x86 = -6972;
	int8_t x87 = -1;
	static volatile uint64_t x88 = 1680779LLU;
	uint64_t t17 = 43LLU;

	t17 = (((x85%x86)+x87)%x88);

	if (t17 != 142LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -35802;
	uint64_t x90 = 1329LLU;
	int64_t x92 = INT64_MIN;
	uint64_t t18 = 4444269616174610229LLU;

	t18 = (((x89%x90)+x91)%x92);

	if (t18 != 4294968034LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = 537966097LLU;
	volatile uint64_t t19 = 165257683244LLU;

	t19 = (((x93%x94)+x95)%x96);

	if (t19 != 73444380LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = UINT64_MAX;
	uint64_t x98 = UINT64_MAX;
	static int64_t x99 = INT64_MIN;
	uint64_t t20 = 629471451LLU;

	t20 = (((x97%x98)+x99)%x100);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = UINT16_MAX;
	static int32_t x102 = INT32_MIN;
	uint16_t x103 = 4268U;
	int32_t t21 = 138138532;

	t21 = (((x101%x102)+x103)%x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x106 = INT16_MIN;
	uint8_t x107 = 26U;
	volatile int16_t x108 = -3;
	int64_t t22 = -2425LL;

	t22 = (((x105%x106)+x107)%x108);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MAX;
	int32_t x110 = INT32_MIN;
	int8_t x111 = -1;
	int64_t x112 = 1887LL;
	static int64_t t23 = 9418615412435LL;

	t23 = (((x109%x110)+x111)%x112);

	if (t23 != 687LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -12341292004865518LL;
	uint8_t x114 = UINT8_MAX;
	int64_t t24 = 10371160340488929LL;

	t24 = (((x113%x114)+x115)%x116);

	if (t24 != 2147483589LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -1;
	volatile int32_t t25 = 1819;

	t25 = (((x117%x118)+x119)%x120);

	if (t25 != -129) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x121 = 1U;
	int32_t x122 = -411128142;
	uint64_t x123 = 172466LLU;
	uint32_t x124 = 101477U;

	t26 = (((x121%x122)+x123)%x124);

	if (t26 != 70990LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x126 = -1;
	int8_t x128 = 1;
	int32_t t27 = -2042;

	t27 = (((x125%x126)+x127)%x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x129 = -15;
	uint16_t x130 = 51U;
	static int8_t x131 = 28;
	uint64_t x132 = 91966857858563095LLU;
	uint64_t t28 = 495254363878263LLU;

	t28 = (((x129%x130)+x131)%x132);

	if (t28 != 13LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x134 = 2;
	uint64_t x135 = 7905878LLU;
	volatile uint64_t t29 = 5971763LLU;

	t29 = (((x133%x134)+x135)%x136);

	if (t29 != 7905879LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 13U;
	uint64_t x139 = 15687674LLU;
	int8_t x140 = -1;
	volatile uint64_t t30 = 5224479577186LLU;

	t30 = (((x137%x138)+x139)%x140);

	if (t30 != 15687687LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x145 = -1;
	int8_t x146 = 2;
	volatile uint16_t x147 = UINT16_MAX;
	volatile uint64_t x148 = 57595487LLU;
	uint64_t t31 = 1779595299132LLU;

	t31 = (((x145%x146)+x147)%x148);

	if (t31 != 65534LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MAX;
	uint16_t x151 = 4U;
	int64_t t32 = -347505LL;

	t32 = (((x149%x150)+x151)%x152);

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x153 = 445118373LLU;
	volatile int16_t x154 = INT16_MAX;
	int8_t x155 = INT8_MIN;
	int16_t x156 = 1;

	t33 = (((x153%x154)+x155)%x156);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x158 = INT16_MIN;
	volatile int16_t x159 = -1;
	int8_t x160 = INT8_MAX;
	static volatile int32_t t34 = 1;

	t34 = (((x157%x158)+x159)%x160);

	if (t34 != -29) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = 3;
	int32_t x162 = -1;
	int8_t x163 = 28;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t35 = 0;

	t35 = (((x161%x162)+x163)%x164);

	if (t35 != 28) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = 8693088LLU;
	static int16_t x167 = -65;
	volatile int16_t x168 = INT16_MAX;

	t36 = (((x165%x166)+x167)%x168);

	if (t36 != 9768LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MIN;
	static volatile uint8_t x174 = UINT8_MAX;
	static int8_t x175 = 0;
	int32_t x176 = INT32_MIN;
	volatile int32_t t37 = -322526024;

	t37 = (((x173%x174)+x175)%x176);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = 6952;
	uint32_t x182 = UINT32_MAX;
	int8_t x183 = -1;
	volatile int16_t x184 = INT16_MIN;

	t38 = (((x181%x182)+x183)%x184);

	if (t38 != 6951U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = 15;
	uint32_t x187 = UINT32_MAX;
	int64_t x188 = 294LL;
	volatile int64_t t39 = 7587LL;

	t39 = (((x185%x186)+x187)%x188);

	if (t39 != 79LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x192 = -6;

	t40 = (((x189%x190)+x191)%x192);

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x194 = 3U;
	static int16_t x195 = -1;
	uint32_t x196 = 91U;
	int64_t t41 = -189169904306974424LL;

	t41 = (((x193%x194)+x195)%x196);

	if (t41 != -3LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x197 = INT64_MAX;
	uint8_t x198 = 12U;
	volatile int8_t x199 = -1;
	volatile int16_t x200 = -224;
	int64_t t42 = -69LL;

	t42 = (((x197%x198)+x199)%x200);

	if (t42 != 6LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x201 = INT16_MAX;
	uint32_t x202 = 194358U;
	volatile int16_t x203 = INT16_MAX;
	volatile int16_t x204 = INT16_MIN;

	t43 = (((x201%x202)+x203)%x204);

	if (t43 != 65534U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -2399;
	static volatile uint8_t x206 = 1U;
	int8_t x207 = INT8_MAX;
	int32_t x208 = INT32_MIN;
	volatile int32_t t44 = -30;

	t44 = (((x205%x206)+x207)%x208);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MIN;
	static uint16_t x210 = UINT16_MAX;
	static int16_t x211 = INT16_MIN;
	int32_t t45 = 396245474;

	t45 = (((x209%x210)+x211)%x212);

	if (t45 != -22) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x214 = 3203U;
	volatile int16_t x215 = -1;
	int64_t x216 = -4307369944606612217LL;
	static int64_t t46 = -13807695250366769LL;

	t46 = (((x213%x214)+x215)%x216);

	if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = 61;
	static volatile int32_t x219 = 692;
	uint32_t t47 = 18499742U;

	t47 = (((x217%x218)+x219)%x220);

	if (t47 != 686U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = -10287;
	int32_t x223 = INT32_MAX;
	int16_t x224 = 411;
	volatile int32_t t48 = 1441;

	t48 = (((x221%x222)+x223)%x224);

	if (t48 != 299) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x230 = 1954U;
	static volatile uint16_t x231 = 2U;
	volatile int64_t x232 = -5819239154LL;
	int64_t t49 = 274258113LL;

	t49 = (((x229%x230)+x231)%x232);

	if (t49 != 524LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x233 = INT32_MAX;
	uint8_t x234 = UINT8_MAX;
	static volatile int8_t x235 = -1;
	volatile uint8_t x236 = UINT8_MAX;

	t50 = (((x233%x234)+x235)%x236);

	if (t50 != 126) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int32_t x238 = -1;
	static volatile uint64_t x239 = UINT64_MAX;
	uint64_t t51 = 5927804972697333730LLU;

	t51 = (((x237%x238)+x239)%x240);

	if (t51 != 116733LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x245 = INT32_MAX;
	uint8_t x247 = 77U;
	int64_t x248 = INT64_MAX;
	static volatile int64_t t52 = 33905LL;

	t52 = (((x245%x246)+x247)%x248);

	if (t52 != 78LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x249 = -1;
	uint64_t x250 = 35294726820899196LLU;
	int16_t x251 = -781;
	volatile uint64_t x252 = UINT64_MAX;

	t53 = (((x249%x250)+x251)%x252);

	if (t53 != 22896673200170522LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = 1;
	volatile int16_t x254 = INT16_MIN;
	int32_t x255 = -1133;
	static uint32_t x256 = UINT32_MAX;
	volatile uint32_t t54 = 83653U;

	t54 = (((x253%x254)+x255)%x256);

	if (t54 != 4294966164U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 12559449542829LLU;
	int32_t x259 = INT32_MAX;
	volatile uint64_t x260 = 6907019731841885638LLU;
	static volatile uint64_t t55 = 527582706078714521LLU;

	t55 = (((x257%x258)+x259)%x260);

	if (t55 != 12561597026476LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = 41U;
	static uint8_t x262 = 73U;
	int8_t x263 = -4;
	static int32_t x264 = -25978;

	t56 = (((x261%x262)+x263)%x264);

	if (t56 != 37) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x266 = 5101U;
	static int64_t x268 = -1LL;
	int64_t t57 = -372LL;

	t57 = (((x265%x266)+x267)%x268);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x269 = INT16_MIN;
	static int8_t x270 = INT8_MAX;
	int8_t x271 = 5;
	volatile int64_t x272 = 97789288LL;
	static volatile int64_t t58 = 63900458538263LL;

	t58 = (((x269%x270)+x271)%x272);

	if (t58 != 3LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x278 = 282289634628587391LL;
	volatile int16_t x279 = -1;
	int64_t x280 = INT64_MAX;
	volatile int64_t t59 = 1LL;

	t59 = (((x277%x278)+x279)%x280);

	if (t59 != -2147483649LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x281 = 4401813LLU;
	int32_t x282 = INT32_MIN;
	static int16_t x283 = -1;
	int16_t x284 = -120;

	t60 = (((x281%x282)+x283)%x284);

	if (t60 != 4401812LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x286 = 4678;
	int8_t x287 = INT8_MIN;
	int16_t x288 = -1;
	static int32_t t61 = 1327181;

	t61 = (((x285%x286)+x287)%x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 11U;
	volatile int8_t x291 = INT8_MAX;
	static volatile uint32_t t62 = 265U;

	t62 = (((x289%x290)+x291)%x292);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x294 = UINT64_MAX;
	uint8_t x295 = UINT8_MAX;
	volatile int64_t x296 = 253463770001864084LL;

	t63 = (((x293%x294)+x295)%x296);

	if (t63 != 255LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x297 = INT16_MAX;
	uint32_t x298 = 995U;
	int8_t x299 = INT8_MAX;
	volatile int32_t x300 = 14;
	volatile uint32_t t64 = 281292026U;

	t64 = (((x297%x298)+x299)%x300);

	if (t64 != 4U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x302 = 13491U;
	static int32_t x303 = -1;
	volatile int16_t x304 = INT16_MAX;
	int64_t t65 = 1132930102257LL;

	t65 = (((x301%x302)+x303)%x304);

	if (t65 != -6466LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MIN;
	static int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;
	int64_t t66 = -5927728235LL;

	t66 = (((x305%x306)+x307)%x308);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x309 = 1485U;
	volatile uint32_t x310 = 83U;
	int64_t x311 = 1758102197668LL;
	int8_t x312 = INT8_MIN;
	int64_t t67 = -1018LL;

	t67 = (((x309%x310)+x311)%x312);

	if (t67 != 110LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x315 = 67104026U;
	int64_t x316 = 380892801461978LL;
	volatile int64_t t68 = 218773110538LL;

	t68 = (((x313%x314)+x315)%x316);

	if (t68 != 67071258LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	static int16_t x319 = INT16_MIN;
	int32_t x320 = -339;
	uint64_t t69 = 90LLU;

	t69 = (((x317%x318)+x319)%x320);

	if (t69 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x322 = INT64_MAX;
	uint16_t x323 = 0U;
	int32_t x324 = -45543260;
	volatile int64_t t70 = 437580469745901432LL;

	t70 = (((x321%x322)+x323)%x324);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x325 = UINT8_MAX;
	static uint64_t x326 = 186LLU;
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = 363;
	volatile uint64_t t71 = 4944157900LLU;

	t71 = (((x325%x326)+x327)%x328);

	if (t71 != 264LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = 1859699063U;
	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	static volatile int16_t x332 = INT16_MIN;
	int64_t t72 = -751673LL;

	t72 = (((x329%x330)+x331)%x332);

	if (t72 != -16009LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x337 = 71U;
	uint32_t x338 = 31469426U;
	volatile int16_t x339 = -122;
	int32_t x340 = INT32_MIN;
	uint32_t t73 = 30568U;

	t73 = (((x337%x338)+x339)%x340);

	if (t73 != 2147483597U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x341 = -1;
	static int16_t x342 = -1;
	uint16_t x343 = 241U;
	int64_t x344 = INT64_MIN;

	t74 = (((x341%x342)+x343)%x344);

	if (t74 != 241LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x345 = INT16_MAX;
	static int64_t x346 = INT64_MIN;
	static uint32_t x347 = 3U;
	static int8_t x348 = INT8_MAX;

	t75 = (((x345%x346)+x347)%x348);

	if (t75 != 4LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x349 = 2290U;
	static int32_t x352 = -839;
	static volatile uint32_t t76 = 0U;

	t76 = (((x349%x350)+x351)%x352);

	if (t76 != 2290U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x354 = -33LL;
	static int16_t x356 = INT16_MIN;

	t77 = (((x353%x354)+x355)%x356);

	if (t77 != 36LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x357 = INT64_MIN;
	uint32_t x358 = 95603U;
	uint8_t x360 = 1U;
	volatile int64_t t78 = 11091168666LL;

	t78 = (((x357%x358)+x359)%x360);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MIN;
	static int64_t x364 = 45494LL;
	int64_t t79 = -15283LL;

	t79 = (((x361%x362)+x363)%x364);

	if (t79 != 27967LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = 48;
	static int16_t x366 = INT16_MIN;
	uint16_t x367 = 1714U;
	volatile int16_t x368 = -1;

	t80 = (((x365%x366)+x367)%x368);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = 8;
	int8_t x370 = INT8_MIN;
	static int16_t x371 = INT16_MIN;
	volatile int32_t t81 = 3;

	t81 = (((x369%x370)+x371)%x372);

	if (t81 != -32760) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x373 = INT32_MIN;
	uint8_t x374 = 2U;
	volatile int64_t x375 = 96096LL;
	static volatile int64_t x376 = INT64_MAX;
	volatile int64_t t82 = -7829677LL;

	t82 = (((x373%x374)+x375)%x376);

	if (t82 != 96096LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = UINT64_MAX;
	static int16_t x378 = -685;
	int64_t x380 = 110177103018269LL;
	volatile uint64_t t83 = 61LLU;

	t83 = (((x377%x378)+x379)%x380);

	if (t83 != 683LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x381 = 20235711U;
	static int8_t x382 = 1;
	uint8_t x384 = UINT8_MAX;
	static int64_t t84 = 50135731362431405LL;

	t84 = (((x381%x382)+x383)%x384);

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x391 = INT32_MIN;

	t85 = (((x389%x390)+x391)%x392);

	if (t85 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x397 = -216198819675713LL;
	int64_t x398 = -1LL;
	int32_t x399 = 303099338;
	uint16_t x400 = UINT16_MAX;
	static int64_t t86 = 41141LL;

	t86 = (((x397%x398)+x399)%x400);

	if (t86 != 65498LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = -1804125384LL;
	static volatile int64_t x404 = INT64_MIN;

	t87 = (((x401%x402)+x403)%x404);

	if (t87 != -7LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x405 = UINT32_MAX;
	static int16_t x407 = INT16_MIN;
	static uint8_t x408 = UINT8_MAX;
	volatile uint32_t t88 = 1U;

	t88 = (((x405%x406)+x407)%x408);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x409 = UINT16_MAX;
	int64_t x410 = INT64_MIN;
	static int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MAX;

	t89 = (((x409%x410)+x411)%x412);

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x413 = INT16_MIN;
	static int16_t x414 = -1;
	volatile int8_t x416 = -1;
	volatile int32_t t90 = -805;

	t90 = (((x413%x414)+x415)%x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x417 = 59U;
	static uint8_t x418 = 72U;
	int8_t x419 = -1;
	volatile int16_t x420 = 318;
	static int32_t t91 = -18062242;

	t91 = (((x417%x418)+x419)%x420);

	if (t91 != 58) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x422 = INT8_MAX;
	static uint32_t x423 = 1969U;
	int8_t x424 = 3;
	volatile uint32_t t92 = 6636U;

	t92 = (((x421%x422)+x423)%x424);

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x426 = INT8_MIN;
	volatile int16_t x427 = INT16_MIN;
	int64_t x428 = INT64_MIN;
	volatile int64_t t93 = -313749828LL;

	t93 = (((x425%x426)+x427)%x428);

	if (t93 != -32641LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x429 = INT64_MAX;
	static volatile uint32_t x431 = 29841506U;
	int8_t x432 = INT8_MAX;
	volatile int64_t t94 = -2077LL;

	t94 = (((x429%x430)+x431)%x432);

	if (t94 != 62LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = -1;
	int16_t x434 = INT16_MIN;
	int32_t x435 = 0;
	static int64_t x436 = 9842776776768LL;
	int64_t t95 = 183788LL;

	t95 = (((x433%x434)+x435)%x436);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x437 = 0U;
	int32_t x439 = INT32_MAX;
	int32_t x440 = INT32_MIN;
	int32_t t96 = INT32_MAX;

	t96 = (((x437%x438)+x439)%x440);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x441 = INT32_MIN;
	volatile uint8_t x443 = UINT8_MAX;
	int16_t x444 = -1;
	volatile int32_t t97 = 2982615;

	t97 = (((x441%x442)+x443)%x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = -1;
	int64_t x446 = -1718610543296762431LL;
	int8_t x447 = 22;
	uint32_t x448 = UINT32_MAX;

	t98 = (((x445%x446)+x447)%x448);

	if (t98 != 21LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x449 = 0U;
	volatile int8_t x450 = 16;
	int16_t x451 = -12697;

	t99 = (((x449%x450)+x451)%x452);

	if (t99 != -12697) { NG(); } else { ; }
	
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

