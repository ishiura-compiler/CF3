#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 512;
volatile uint64_t t2 = 947902082LLU;
int32_t x14 = INT32_MAX;
uint8_t x19 = 30U;
static volatile int64_t x23 = 176636949LL;
static uint8_t x31 = UINT8_MAX;
uint32_t x35 = 4483U;
static uint32_t x37 = 117754876U;
volatile int32_t x39 = INT32_MIN;
static int8_t x40 = -1;
static int8_t x41 = INT8_MIN;
static int32_t x43 = -1;
int64_t x50 = INT64_MIN;
int32_t x51 = INT32_MIN;
int64_t x64 = -1LL;
uint16_t x65 = 234U;
volatile int32_t x66 = INT32_MIN;
static volatile int32_t t16 = INT32_MIN;
static int8_t x72 = INT8_MIN;
static uint16_t x75 = 328U;
int8_t x79 = INT8_MIN;
static int8_t x80 = INT8_MIN;
static volatile uint64_t x83 = 385002913489LLU;
static int32_t x85 = INT32_MIN;
int64_t t21 = 94LL;
int8_t x92 = -1;
static int32_t x94 = INT32_MAX;
static int64_t x95 = INT64_MIN;
uint32_t x98 = UINT32_MAX;
int32_t x99 = INT32_MAX;
volatile int16_t x102 = 7;
int32_t x106 = INT32_MIN;
volatile uint64_t t26 = 21430956985737187LLU;
static int32_t x109 = INT32_MIN;
uint8_t x112 = 1U;
int32_t x116 = INT32_MIN;
int32_t x120 = INT32_MIN;
volatile int64_t t29 = -919LL;
int8_t x123 = INT8_MIN;
volatile uint64_t t31 = 31618658082874LLU;
static volatile int16_t x131 = -13881;
uint32_t t33 = 1466U;
int32_t x143 = -8;
int16_t x145 = -1;
int32_t x147 = INT32_MIN;
int32_t x148 = -118;
int32_t t36 = 13189080;
uint32_t x158 = UINT32_MAX;
uint64_t t39 = 2046820652991686018LLU;
uint8_t x166 = UINT8_MAX;
static volatile uint32_t t41 = 7U;
volatile int16_t x169 = -2;
uint64_t x173 = UINT64_MAX;
volatile uint64_t t43 = 65370091490525165LLU;
int64_t x179 = INT64_MAX;
uint8_t x190 = 17U;
volatile uint16_t x191 = UINT16_MAX;
volatile uint64_t t47 = 1895055LLU;
int16_t x198 = -286;
volatile int16_t x207 = INT16_MAX;
int8_t x215 = 0;
int32_t x224 = INT32_MIN;
static uint64_t x233 = 315288LLU;
static uint32_t x234 = 14U;
int32_t t60 = -111803;
uint8_t x246 = 0U;
int64_t t61 = -28753900329682LL;
int16_t x250 = -40;
static uint32_t x253 = UINT32_MAX;
static volatile int64_t t64 = 2808469933660LL;
int8_t x262 = INT8_MAX;
static int32_t x269 = INT32_MIN;
volatile uint8_t x271 = 37U;
volatile int64_t t67 = 1120180798241482LL;
uint64_t x273 = 350357LLU;
volatile int32_t x288 = INT32_MIN;
int16_t x297 = 1967;
volatile uint64_t x298 = UINT64_MAX;
int16_t x301 = -15723;
volatile int32_t t75 = 21;
int64_t x310 = INT64_MIN;
uint64_t x318 = UINT64_MAX;
uint8_t x319 = 0U;
static uint32_t x321 = 1U;
int8_t x331 = 6;
int16_t x332 = INT16_MIN;
uint32_t t83 = 20551659U;
static int64_t x342 = 134934716121065LL;
int32_t x348 = INT32_MIN;
int64_t t86 = -51129316LL;
static int32_t t87 = -42676;
int16_t x353 = INT16_MAX;
int16_t x363 = INT16_MAX;
uint32_t x364 = 1869029U;
volatile uint32_t t90 = 3743U;
int8_t x368 = -55;
int16_t x372 = -1;
int8_t x377 = INT8_MIN;
int8_t x381 = INT8_MIN;
uint32_t x383 = 1906634170U;
uint32_t x388 = 89659U;
uint64_t t96 = 3LLU;
int64_t x390 = INT64_MIN;
volatile uint64_t t97 = 494LLU;
static int32_t x399 = -210;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	volatile int8_t x3 = INT8_MIN;
	static int32_t x4 = -15155;
	static int32_t t0 = -47;

	t0 = ((x1|(x2^x3))^x4);

	if (t0 != 15181) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	uint32_t x6 = 6628172U;
	int64_t x7 = -9925LL;
	int64_t x8 = -908501007937584LL;
	volatile int64_t t1 = 0LL;

	t1 = ((x5|(x6^x7))^x8);

	if (t1 != 908501007937583LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint64_t x10 = 256517LLU;
	int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;

	t2 = ((x9|(x10^x11))^x12);

	if (t2 != 2147227013LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	int8_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -2036;

	t3 = ((x13|(x14^x15))^x16);

	if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 7584U;
	static uint8_t x18 = 86U;
	volatile int16_t x20 = 69;
	volatile int32_t t4 = -180237;

	t4 = ((x17|(x18^x19))^x20);

	if (t4 != 7597) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint16_t x22 = 15788U;
	volatile uint64_t x24 = 7014862049247548372LLU;
	uint64_t t5 = 14154451773774LLU;

	t5 = ((x21|(x22^x23))^x24);

	if (t5 != 11431882023070050925LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 7;
	uint32_t x26 = 21603U;
	int64_t x27 = INT64_MIN;
	int8_t x28 = -1;
	volatile int64_t t6 = -17034022360LL;

	t6 = ((x25|(x26^x27))^x28);

	if (t6 != 9223372036854754200LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	uint16_t x30 = UINT16_MAX;
	uint16_t x32 = UINT16_MAX;
	static int32_t t7 = -2944950;

	t7 = ((x29|(x30^x31))^x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MIN;
	volatile int8_t x36 = INT8_MIN;
	int64_t t8 = 4333767197785090LL;

	t8 = ((x33|(x34^x35))^x36);

	if (t8 != 9223372034707287555LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = -1LL;
	volatile int64_t t9 = 197LL;

	t9 = ((x37|(x38^x39))^x40);

	if (t9 != -2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	uint32_t x44 = 294040082U;
	volatile uint64_t t10 = 21LLU;

	t10 = ((x41|(x42^x43))^x44);

	if (t10 != 18446744073415511442LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int8_t x46 = 0;
	int64_t x47 = INT64_MIN;
	volatile int64_t x48 = -2687666784LL;
	volatile uint64_t t11 = 126LLU;

	t11 = ((x45|(x46^x47))^x48);

	if (t11 != 2687666783LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 253125821181LLU;
	uint8_t x52 = 1U;
	volatile uint64_t t12 = 1534433138353215471LLU;

	t12 = ((x49|(x50^x51))^x52);

	if (t12 != 9223372036577526524LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	uint32_t x54 = UINT32_MAX;
	uint16_t x55 = 1509U;
	int64_t x56 = 39604163223147338LL;
	static volatile int64_t t13 = 1LL;

	t13 = ((x53|(x54^x55))^x56);

	if (t13 != 39604160520595792LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -5;
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MIN;
	static int8_t x60 = INT8_MIN;
	int32_t t14 = -592159426;

	t14 = ((x57|(x58^x59))^x60);

	if (t14 != 123) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 669265714U;
	int8_t x62 = -1;
	static int32_t x63 = -633907;
	int64_t t15 = -174024937446LL;

	t15 = ((x61|(x62^x63))^x64);

	if (t15 != -669888307LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MAX;

	t16 = ((x65|(x66^x67))^x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int64_t x70 = -8931836116060082LL;
	int16_t x71 = -173;
	int64_t t17 = 2774772LL;

	t17 = ((x69|(x70^x71))^x72);

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	int64_t x74 = 155918450246LL;
	int16_t x76 = -1;
	volatile int64_t t18 = -3111989858LL;

	t18 = ((x73|(x74^x75))^x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 16222;
	uint32_t x78 = 92U;
	uint32_t t19 = 120U;

	t19 = ((x77|(x78^x79))^x80);

	if (t19 != 94U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static uint64_t x82 = 13LLU;
	int64_t x84 = INT64_MAX;
	uint64_t t20 = 27LLU;

	t20 = ((x81|(x82^x83))^x84);

	if (t20 != 9223372038398918947LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x86 = 34622U;
	static int64_t x87 = -21LL;
	volatile int8_t x88 = -1;

	t21 = ((x85|(x86^x87))^x88);

	if (t21 != 34602LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	volatile int64_t x90 = -1LL;
	int8_t x91 = 7;
	static int64_t t22 = -4081932LL;

	t22 = ((x89|(x90^x91))^x92);

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = 440137LL;
	int8_t x96 = -1;
	int64_t t23 = 153254727632LL;

	t23 = ((x93|(x94^x95))^x96);

	if (t23 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	volatile uint8_t x100 = 32U;
	volatile int64_t t24 = -1740417236275276LL;

	t24 = ((x97|(x98^x99))^x100);

	if (t24 != -9223372034707292128LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = 31;
	uint16_t x103 = 157U;
	int8_t x104 = 48;
	static volatile int32_t t25 = -1531723;

	t25 = ((x101|(x102^x103))^x104);

	if (t25 != 175) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 381797LLU;
	int64_t x107 = INT64_MAX;
	int64_t x108 = 67569696180LL;

	t26 = ((x105|(x106^x107))^x108);

	if (t26 != 9223372104576549451LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	volatile int32_t x111 = INT32_MAX;
	static volatile int64_t t27 = 7835009832LL;

	t27 = ((x109|(x110^x111))^x112);

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 1U;
	volatile uint32_t x114 = UINT32_MAX;
	int64_t x115 = INT64_MIN;
	volatile int64_t t28 = 56252674930624743LL;

	t28 = ((x113|(x114^x115))^x116);

	if (t28 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x117 = 1U;
	int8_t x118 = -2;
	volatile int64_t x119 = INT64_MAX;

	t29 = ((x117|(x118^x119))^x120);

	if (t29 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static volatile int32_t x122 = INT32_MIN;
	volatile uint16_t x124 = 182U;
	static uint32_t t30 = 610U;

	t30 = ((x121|(x122^x123))^x124);

	if (t30 != 4294967113U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	int32_t x126 = -1;
	int64_t x127 = 11834LL;
	uint64_t x128 = UINT64_MAX;

	t31 = ((x125|(x126^x127))^x128);

	if (t31 != 11776LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 166;
	volatile uint16_t x130 = 25658U;
	uint16_t x132 = 641U;
	int32_t t32 = 560456;

	t32 = ((x129|(x130^x131))^x132);

	if (t32 != -20610) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 0U;
	int32_t x134 = -124044980;
	int8_t x135 = 1;
	uint32_t x136 = 3253973U;

	t33 = ((x133|(x134^x135))^x136);

	if (t33 != 4171931544U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = -1;
	static int32_t x139 = -113;
	int64_t x140 = -2329339LL;
	int64_t t34 = -1429865470551441706LL;

	t34 = ((x137|(x138^x139))^x140);

	if (t34 != 2145154421LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	int64_t x142 = -1LL;
	volatile int64_t x144 = INT64_MIN;
	int64_t t35 = -8164066953968LL;

	t35 = ((x141|(x142^x143))^x144);

	if (t35 != 9223372036854743047LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 0U;

	t36 = ((x145|(x146^x147))^x148);

	if (t36 != 117) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = 15;
	static int32_t x150 = -45576;
	int8_t x151 = -1;
	int64_t x152 = INT64_MAX;
	int64_t t37 = 516039290564603199LL;

	t37 = ((x149|(x150^x151))^x152);

	if (t37 != 9223372036854730224LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static int32_t x154 = 4;
	int64_t x155 = INT64_MIN;
	uint16_t x156 = 86U;
	int64_t t38 = -403025967570359576LL;

	t38 = ((x153|(x154^x155))^x156);

	if (t38 != -46LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -57991;
	uint8_t x159 = 1U;
	volatile uint64_t x160 = 177336477661592858LLU;

	t39 = ((x157|(x158^x159))^x160);

	if (t39 != 177336479918523109LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	int32_t x163 = 168;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t40 = -18;

	t40 = ((x161|(x162^x163))^x164);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 648810U;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -1;

	t41 = ((x165|(x166^x167))^x168);

	if (t41 != 4294318485U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x170 = UINT16_MAX;
	volatile uint8_t x171 = 82U;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 69218;

	t42 = ((x169|(x170^x171))^x172);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	volatile uint16_t x175 = 1037U;
	volatile int64_t x176 = -1LL;

	t43 = ((x173|(x174^x175))^x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 6664U;
	volatile uint32_t x178 = UINT32_MAX;
	volatile int16_t x180 = 2964;
	static volatile int64_t t44 = -201146015381239431LL;

	t44 = ((x177|(x178^x179))^x180);

	if (t44 != 9223372032559813020LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 2U;
	static uint64_t x182 = 63428LLU;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = UINT8_MAX;
	uint64_t t45 = 118LLU;

	t45 = ((x181|(x182^x183))^x184);

	if (t45 != 18446744073709516601LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int8_t x186 = -1;
	volatile int64_t x187 = -10213LL;
	volatile int64_t x188 = INT64_MIN;
	static int64_t t46 = -3LL;

	t46 = ((x185|(x186^x187))^x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	uint64_t x192 = 12351882LLU;

	t47 = ((x189|(x190^x191))^x192);

	if (t47 != 12355189LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MIN;
	static int32_t x195 = INT32_MIN;
	static int32_t x196 = INT32_MAX;
	volatile int32_t t48 = 1031903506;

	t48 = ((x193|(x194^x195))^x196);

	if (t48 != -2147450881) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 139061LLU;
	uint32_t x199 = UINT32_MAX;
	int16_t x200 = INT16_MIN;
	uint64_t t49 = 5LLU;

	t49 = ((x197|(x198^x199))^x200);

	if (t49 != 18446744073709395773LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	static uint64_t x202 = UINT64_MAX;
	uint32_t x203 = 257125802U;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t50 = 5962846LLU;

	t50 = ((x201|(x202^x203))^x204);

	if (t50 != 1890357845LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MIN;
	static uint16_t x208 = UINT16_MAX;
	uint32_t t51 = 12U;

	t51 = ((x205|(x206^x207))^x208);

	if (t51 != 4294901760U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -61;
	int16_t x210 = 2793;
	volatile int16_t x211 = 4;
	int16_t x212 = INT16_MAX;
	int32_t t52 = -4361;

	t52 = ((x209|(x210^x211))^x212);

	if (t52 != -32752) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	volatile int64_t x214 = -118613981094LL;
	int64_t x216 = INT64_MAX;
	volatile int64_t t53 = INT64_MIN;

	t53 = ((x213|(x214^x215))^x216);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = 12U;
	static int16_t x218 = -119;
	int32_t x219 = INT32_MIN;
	int32_t x220 = -1;
	int32_t t54 = -39580448;

	t54 = ((x217|(x218^x219))^x220);

	if (t54 != -2147483534) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 14U;
	static int8_t x222 = INT8_MIN;
	int16_t x223 = 32;
	int32_t t55 = 1;

	t55 = ((x221|(x222^x223))^x224);

	if (t55 != 2147483566) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = 8;
	uint16_t x226 = UINT16_MAX;
	static int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = 1;

	t56 = ((x225|(x226^x227))^x228);

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 205594712U;
	uint8_t x230 = 0U;
	int16_t x231 = INT16_MAX;
	volatile int8_t x232 = 1;
	uint32_t t57 = 354350U;

	t57 = ((x229|(x230^x231))^x232);

	if (t57 != 205619198U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x235 = 881998295458282LLU;
	int32_t x236 = INT32_MIN;
	uint64_t t58 = 955199835LLU;

	t58 = ((x233|(x234^x235))^x236);

	if (t58 != 18445862075249455100LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 8493967LLU;
	int16_t x238 = INT16_MIN;
	int64_t x239 = INT64_MAX;
	uint32_t x240 = 72974302U;
	volatile uint64_t t59 = 4544947933445531316LLU;

	t59 = ((x237|(x238^x239))^x240);

	if (t59 != 9223372036936073249LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 9;
	volatile int8_t x242 = INT8_MAX;
	volatile uint16_t x243 = 11U;
	int16_t x244 = INT16_MAX;

	t60 = ((x241|(x242^x243))^x244);

	if (t60 != 32642) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 1;
	volatile int64_t x247 = INT64_MAX;
	static int8_t x248 = INT8_MAX;

	t61 = ((x245|(x246^x247))^x248);

	if (t61 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 3519LLU;
	uint8_t x251 = UINT8_MAX;
	uint8_t x252 = 1U;
	volatile uint64_t t62 = 606883980180LLU;

	t62 = ((x249|(x250^x251))^x252);

	if (t62 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	uint32_t t63 = 82U;

	t63 = ((x253|(x254^x255))^x256);

	if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 0LL;
	int8_t x258 = -11;
	uint16_t x259 = 322U;
	int32_t x260 = -1;

	t64 = ((x257|(x258^x259))^x260);

	if (t64 != 328LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = 2U;
	volatile uint8_t x263 = 53U;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = -25;

	t65 = ((x261|(x262^x263))^x264);

	if (t65 != 181) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	int32_t x266 = INT32_MIN;
	static volatile int32_t x267 = INT32_MIN;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -11;

	t66 = ((x265|(x266^x267))^x268);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	int64_t x272 = INT64_MIN;

	t67 = ((x269|(x270^x271))^x272);

	if (t67 != 9223372036854743077LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MAX;
	static int64_t x275 = INT64_MAX;
	int64_t x276 = 18315843LL;
	uint64_t t68 = 11333LLU;

	t68 = ((x273|(x274^x275))^x276);

	if (t68 != 9223372034725257942LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = -35188LL;
	uint16_t x278 = 5U;
	int64_t x279 = INT64_MIN;
	int32_t x280 = -569;
	volatile int64_t t69 = -6662385369658211LL;

	t69 = ((x277|(x278^x279))^x280);

	if (t69 != 35658LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 584287409026LL;
	uint32_t x282 = 112U;
	static volatile int16_t x283 = -1;
	int8_t x284 = -1;
	int64_t t70 = -424LL;

	t70 = ((x281|(x282^x283))^x284);

	if (t70 != -588410519440LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	int32_t x286 = INT32_MAX;
	volatile int64_t x287 = INT64_MAX;
	volatile int64_t t71 = 1710176LL;

	t71 = ((x285|(x286^x287))^x288);

	if (t71 != 2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 6LL;
	int16_t x290 = 513;
	static int8_t x291 = INT8_MAX;
	volatile int32_t x292 = 1;
	static volatile int64_t t72 = 556LL;

	t72 = ((x289|(x290^x291))^x292);

	if (t72 != 639LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	volatile int64_t x294 = INT64_MIN;
	volatile int64_t x295 = INT64_MIN;
	static int64_t x296 = -1LL;
	static int64_t t73 = -1328158LL;

	t73 = ((x293|(x294^x295))^x296);

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	uint64_t t74 = 1473842985LLU;

	t74 = ((x297|(x298^x299))^x300);

	if (t74 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = 27;
	int16_t x303 = -1;
	uint8_t x304 = 11U;

	t75 = ((x301|(x302^x303))^x304);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	uint8_t x306 = 97U;
	volatile int8_t x307 = 0;
	uint32_t x308 = 255U;
	uint32_t t76 = 311561U;

	t76 = ((x305|(x306^x307))^x308);

	if (t76 != 32512U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	volatile int8_t x311 = INT8_MIN;
	int8_t x312 = -1;
	volatile int64_t t77 = INT64_MIN;

	t77 = ((x309|(x310^x311))^x312);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = INT16_MIN;
	int16_t x315 = -1;
	int32_t x316 = -25;
	volatile int64_t t78 = 1LL;

	t78 = ((x313|(x314^x315))^x316);

	if (t78 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 7946426924013194LL;
	uint8_t x320 = 13U;
	static volatile uint64_t t79 = 9354983322930441LLU;

	t79 = ((x317|(x318^x319))^x320);

	if (t79 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = -4;
	int32_t x323 = -221;
	int64_t x324 = -1LL;
	int64_t t80 = 16199828068464LL;

	t80 = ((x321|(x322^x323))^x324);

	if (t80 != -224LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -9;
	volatile int8_t x326 = INT8_MAX;
	static int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = INT64_MAX;

	t81 = ((x325|(x326^x327))^x328);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -32152308776427105LL;
	int32_t x330 = INT32_MIN;
	static int64_t t82 = 89608LL;

	t82 = ((x329|(x330^x331))^x332);

	if (t82 != 1062445471LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	int8_t x334 = INT8_MAX;
	int16_t x335 = -1;
	volatile uint32_t x336 = 223971776U;

	t83 = ((x333|(x334^x335))^x336);

	if (t83 != 4070995519U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = 1;
	int32_t x338 = 6;
	static uint16_t x339 = 7U;
	int32_t x340 = 8107686;
	volatile int32_t t84 = -1599;

	t84 = ((x337|(x338^x339))^x340);

	if (t84 != 8107687) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 0;
	static uint8_t x343 = 8U;
	int16_t x344 = INT16_MIN;
	int64_t t85 = 3011743321786LL;

	t85 = ((x341|(x342^x343))^x344);

	if (t85 != -134934716088351LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 5058U;
	volatile int64_t x346 = INT64_MAX;
	int32_t x347 = -250999;

	t86 = ((x345|(x346^x347))^x348);

	if (t86 != 9223372034707544054LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	volatile int8_t x352 = 15;

	t87 = ((x349|(x350^x351))^x352);

	if (t87 != -16) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	static int16_t x356 = INT16_MIN;
	static volatile int64_t t88 = -1410438194466980LL;

	t88 = ((x353|(x354^x355))^x356);

	if (t88 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 26U;
	uint16_t x358 = 13493U;
	volatile uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -3905;

	t89 = ((x357|(x358^x359))^x360);

	if (t89 != -13350) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	static uint32_t x362 = 77U;

	t90 = ((x361|(x362^x363))^x364);

	if (t90 != 2149382999U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 1890269859U;
	volatile int32_t x366 = 62927223;
	int8_t x367 = INT8_MIN;
	uint32_t t91 = 41U;

	t91 = ((x365|(x366^x367))^x368);

	if (t91 != 54526270U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	int32_t x370 = -1;
	uint16_t x371 = 1658U;
	int32_t t92 = 101528921;

	t92 = ((x369|(x370^x371))^x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 2934U;
	volatile int32_t x374 = 18;
	int16_t x375 = 885;
	static uint16_t x376 = 0U;
	volatile int32_t t93 = -326166749;

	t93 = ((x373|(x374^x375))^x376);

	if (t93 != 2935) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x378 = -2196454944475LL;
	static uint16_t x379 = 10540U;
	static volatile uint8_t x380 = 10U;
	volatile int64_t t94 = -1LL;

	t94 = ((x377|(x378^x379))^x380);

	if (t94 != -125LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x382 = UINT8_MAX;
	uint8_t x384 = 4U;
	volatile uint32_t t95 = 217040984U;

	t95 = ((x381|(x382^x383))^x384);

	if (t95 != 4294967233U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 69U;
	volatile int16_t x386 = INT16_MAX;
	uint64_t x387 = 2834LLU;

	t96 = ((x385|(x386^x387))^x388);

	if (t96 != 76502LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 903442563664985LLU;
	uint32_t x391 = 458U;
	int64_t x392 = INT64_MAX;

	t97 = ((x389|(x390^x391))^x392);

	if (t97 != 18445840631145886244LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	uint8_t x394 = 5U;
	int32_t x395 = INT32_MAX;
	static int64_t x396 = -1LL;
	uint64_t t98 = 1697322063373991885LLU;

	t98 = ((x393|(x394^x395))^x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = -1;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = -21890770;

	t99 = ((x397|(x398^x399))^x400);

	if (t99 != -65409) { NG(); } else { ; }
	
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

