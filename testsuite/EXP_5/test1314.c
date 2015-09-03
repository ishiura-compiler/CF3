#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -9745753LL;
int32_t x7 = -5176;
int32_t t1 = -3672601;
volatile uint64_t t2 = 251LLU;
int64_t x13 = -1LL;
int8_t x15 = INT8_MIN;
int8_t x16 = INT8_MIN;
static int8_t x17 = INT8_MIN;
uint64_t x26 = UINT64_MAX;
int16_t x28 = INT16_MAX;
static int32_t t6 = -8514;
int8_t x30 = INT8_MAX;
int64_t x32 = -50278857904LL;
int16_t x37 = 28;
volatile int64_t t10 = -431115431LL;
static int8_t x47 = -45;
int8_t x52 = 3;
uint32_t x55 = UINT32_MAX;
static uint16_t x56 = 25U;
volatile int64_t x57 = -88LL;
uint64_t x58 = 1424913343247988LLU;
static int16_t x59 = -1;
static volatile int64_t x60 = 2393LL;
uint32_t x62 = 839U;
uint16_t x65 = UINT16_MAX;
static int64_t x67 = INT64_MIN;
uint8_t x71 = 46U;
int64_t x80 = INT64_MIN;
int64_t t21 = 20912894757299LL;
volatile int16_t x89 = -1;
int8_t x91 = INT8_MIN;
volatile int64_t x112 = 33LL;
static volatile uint64_t x115 = 86594425852124LLU;
int32_t x118 = INT32_MAX;
uint32_t x121 = 7U;
uint16_t x123 = 15U;
static uint16_t x127 = 1698U;
int8_t x135 = INT8_MAX;
int32_t x136 = INT32_MIN;
int8_t x143 = INT8_MAX;
int32_t x146 = -1;
volatile int64_t t37 = INT64_MIN;
int64_t x161 = INT64_MIN;
static uint8_t x162 = UINT8_MAX;
volatile int64_t t40 = INT64_MIN;
static volatile int16_t x170 = 7;
volatile uint16_t x171 = UINT16_MAX;
int64_t x175 = 14LL;
static uint32_t x178 = 53167527U;
static volatile int32_t t44 = 301;
uint8_t x187 = UINT8_MAX;
volatile int32_t t46 = -777409893;
static uint8_t x189 = 7U;
uint64_t x193 = 19602050753447LLU;
int8_t x201 = -1;
int8_t x203 = 0;
int64_t t52 = 217953LL;
int8_t x214 = 1;
int8_t x217 = INT8_MIN;
static volatile uint64_t x218 = 101LLU;
uint16_t x219 = UINT16_MAX;
volatile int8_t x220 = INT8_MIN;
static int64_t x224 = INT64_MIN;
static uint16_t x232 = 30U;
int64_t x235 = INT64_MAX;
static uint8_t x237 = 15U;
volatile uint32_t t59 = 194U;
uint32_t x242 = 50610154U;
volatile int16_t x244 = -1;
uint16_t x250 = 0U;
uint16_t x252 = 14839U;
static volatile uint64_t t63 = 964024541723724207LLU;
uint64_t x270 = 23494992353185LLU;
int16_t x279 = INT16_MAX;
uint64_t x302 = 445617409711416900LLU;
static volatile uint64_t t75 = UINT64_MAX;
static volatile int32_t x309 = -1;
int32_t x313 = INT32_MIN;
volatile int32_t t78 = INT32_MIN;
volatile int32_t t79 = -483234;
int8_t x325 = INT8_MAX;
volatile uint64_t t81 = 181664310650LLU;
static int8_t x331 = -4;
volatile int32_t t82 = 711849;
volatile uint64_t x335 = 2585270103566424555LLU;
static int16_t x338 = 2;
static uint32_t x342 = 31894U;
volatile int8_t x345 = 60;
volatile uint32_t t87 = 8358492U;
int8_t x353 = INT8_MIN;
volatile int32_t t88 = -439;
uint8_t x360 = 31U;
volatile int32_t t89 = 56;
volatile uint8_t x374 = UINT8_MAX;
int8_t x375 = 0;
static volatile int8_t x382 = INT8_MIN;
int16_t x395 = INT16_MAX;
static uint32_t x396 = 2774748U;
volatile int8_t x399 = INT8_MAX;


void f0(void) {
	uint16_t x1 = 22U;
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;

	t0 = (x1+((x2==x3)&x4));

	if (t0 != 22LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 5U;
	static int16_t x6 = -13678;
	int16_t x8 = 351;

	t1 = (x5+((x6==x7)&x8));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 8671842LLU;
	static int32_t x10 = INT32_MAX;
	int16_t x11 = INT16_MAX;
	int64_t x12 = -1LL;

	t2 = (x9+((x10==x11)&x12));

	if (t2 != 8671842LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	int64_t t3 = 107326753964LL;

	t3 = (x13+((x14==x15)&x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 276481168U;
	int64_t x19 = INT64_MIN;
	volatile int8_t x20 = -1;
	volatile int32_t t4 = 411075783;

	t4 = (x17+((x18==x19)&x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 1;
	int8_t x22 = -1;
	int16_t x23 = INT16_MIN;
	volatile int64_t x24 = 21LL;
	volatile int64_t t5 = 4180775LL;

	t5 = (x21+((x22==x23)&x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	volatile int32_t x27 = INT32_MIN;

	t6 = (x25+((x26==x27)&x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	int32_t x31 = INT32_MIN;
	volatile int64_t t7 = -57981809603554323LL;

	t7 = (x29+((x30==x31)&x32));

	if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile int16_t x34 = INT16_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MAX;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33+((x34==x35)&x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MAX;
	static int64_t x39 = -1LL;
	static int64_t x40 = INT64_MIN;
	int64_t t9 = -563LL;

	t9 = (x37+((x38==x39)&x40));

	if (t9 != 28LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -3;
	uint16_t x42 = UINT16_MAX;
	int32_t x43 = INT32_MAX;
	int64_t x44 = INT64_MIN;

	t10 = (x41+((x42==x43)&x44));

	if (t10 != -3LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 4382U;
	static int32_t x46 = -1378;
	int64_t x48 = INT64_MIN;
	int64_t t11 = -7167232018337LL;

	t11 = (x45+((x46==x47)&x48));

	if (t11 != 4382LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 220424U;
	uint64_t x51 = UINT64_MAX;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x49+((x50==x51)&x52));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int64_t x54 = -992LL;
	int32_t t13 = -1290;

	t13 = (x53+((x54==x55)&x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t t14 = -547825606873191827LL;

	t14 = (x57+((x58==x59)&x60));

	if (t14 != -88LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 1U;
	int64_t x63 = INT64_MIN;
	int64_t x64 = 15137452692LL;
	volatile int64_t t15 = -75574442LL;

	t15 = (x61+((x62==x63)&x64));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x66 = UINT32_MAX;
	uint32_t x68 = 39145U;
	uint32_t t16 = 9277U;

	t16 = (x65+((x66==x67)&x68));

	if (t16 != 65535U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MIN;
	uint16_t x72 = 2957U;
	volatile int32_t t17 = -294931;

	t17 = (x69+((x70==x71)&x72));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 3822U;
	static uint32_t x75 = 457320U;
	static uint16_t x76 = 678U;
	static volatile int32_t t18 = 6;

	t18 = (x73+((x74==x75)&x76));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MAX;
	volatile int64_t t19 = 964LL;

	t19 = (x77+((x78==x79)&x80));

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = 20;
	static int8_t x82 = INT8_MIN;
	volatile int16_t x83 = 3;
	static volatile int32_t x84 = INT32_MAX;
	int32_t t20 = -181;

	t20 = (x81+((x82==x83)&x84));

	if (t20 != 20) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x85 = UINT8_MAX;
	uint32_t x86 = 305U;
	static uint32_t x87 = 4494U;
	int64_t x88 = -21194733354456214LL;

	t21 = (x85+((x86==x87)&x88));

	if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = -1;
	int32_t x92 = -1;
	int32_t t22 = 292247;

	t22 = (x89+((x90==x91)&x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 525707628516577LLU;
	uint64_t x94 = UINT64_MAX;
	volatile int32_t x95 = INT32_MAX;
	volatile uint64_t x96 = 2244447LLU;
	volatile uint64_t t23 = 2659525220560192LLU;

	t23 = (x93+((x94==x95)&x96));

	if (t23 != 525707628516577LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MAX;
	uint32_t x98 = 2949604U;
	int8_t x99 = INT8_MAX;
	volatile int32_t x100 = -1;
	static int32_t t24 = 16;

	t24 = (x97+((x98==x99)&x100));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = UINT64_MAX;
	int64_t x104 = INT64_MAX;
	int64_t t25 = 17158754LL;

	t25 = (x101+((x102==x103)&x104));

	if (t25 != 4294967295LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 9;
	int64_t x106 = 2521900765884LL;
	int32_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -276;

	t26 = (x105+((x106==x107)&x108));

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 36;
	static volatile uint8_t x110 = UINT8_MAX;
	int16_t x111 = -1;
	volatile int64_t t27 = -6LL;

	t27 = (x109+((x110==x111)&x112));

	if (t27 != 36LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	int8_t x114 = -5;
	int16_t x116 = 1;
	int64_t t28 = INT64_MAX;

	t28 = (x113+((x114==x115)&x116));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 4137212331LLU;
	int8_t x119 = -8;
	int16_t x120 = INT16_MIN;
	uint64_t t29 = 70575795474794026LLU;

	t29 = (x117+((x118==x119)&x120));

	if (t29 != 4137212331LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -51;
	int32_t x124 = INT32_MAX;
	uint32_t t30 = 113067U;

	t30 = (x121+((x122==x123)&x124));

	if (t30 != 7U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 1;
	uint64_t x126 = 49833090LLU;
	volatile int8_t x128 = -1;
	int32_t t31 = -39728;

	t31 = (x125+((x126==x127)&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 51579255752112LLU;
	uint32_t x130 = 37149251U;
	int16_t x131 = 3301;
	int32_t x132 = INT32_MAX;
	uint64_t t32 = 12563318LLU;

	t32 = (x129+((x130==x131)&x132));

	if (t32 != 51579255752112LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	uint32_t x134 = UINT32_MAX;
	int64_t t33 = INT64_MIN;

	t33 = (x133+((x134==x135)&x136));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 7590725U;
	volatile int64_t x138 = INT64_MAX;
	int8_t x139 = 0;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -29983LL;

	t34 = (x137+((x138==x139)&x140));

	if (t34 != 7590725LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	int64_t x142 = -1LL;
	static int16_t x144 = 15740;
	uint32_t t35 = UINT32_MAX;

	t35 = (x141+((x142==x143)&x144));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 0U;
	volatile int16_t x147 = 1975;
	uint32_t x148 = 8143727U;
	volatile uint32_t t36 = 3U;

	t36 = (x145+((x146==x147)&x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	uint32_t x152 = 38200U;

	t37 = (x149+((x150==x151)&x152));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 6100U;
	volatile int8_t x154 = INT8_MAX;
	uint16_t x155 = 0U;
	int8_t x156 = -1;
	volatile uint32_t t38 = 490368892U;

	t38 = (x153+((x154==x155)&x156));

	if (t38 != 6100U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int8_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	volatile uint32_t x160 = 417390U;
	uint32_t t39 = UINT32_MAX;

	t39 = (x157+((x158==x159)&x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x163 = INT32_MIN;
	int32_t x164 = -1;

	t40 = (x161+((x162==x163)&x164));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int16_t x166 = INT16_MIN;
	static int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 34946;

	t41 = (x165+((x166==x167)&x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	static int8_t x172 = -1;
	int64_t t42 = INT64_MAX;

	t42 = (x169+((x170==x171)&x172));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -4333;
	volatile int16_t x174 = INT16_MIN;
	uint8_t x176 = 39U;
	int32_t t43 = 55069;

	t43 = (x173+((x174==x175)&x176));

	if (t43 != -4333) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 70U;
	uint8_t x179 = 68U;
	uint16_t x180 = 0U;

	t44 = (x177+((x178==x179)&x180));

	if (t44 != 70) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	uint64_t x182 = UINT64_MAX;
	uint16_t x183 = 2U;
	volatile int64_t x184 = 1LL;
	volatile int64_t t45 = 1343211425435LL;

	t45 = (x181+((x182==x183)&x184));

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 34;
	volatile int32_t x186 = INT32_MIN;
	int32_t x188 = INT32_MIN;

	t46 = (x185+((x186==x187)&x188));

	if (t46 != 34) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x190 = UINT64_MAX;
	volatile uint32_t x191 = 1444104364U;
	int8_t x192 = -1;
	int32_t t47 = -1034108834;

	t47 = (x189+((x190==x191)&x192));

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 0;
	static int8_t x195 = INT8_MAX;
	uint64_t x196 = 1254152664720679852LLU;
	uint64_t t48 = 29369LLU;

	t48 = (x193+((x194==x195)&x196));

	if (t48 != 19602050753447LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	volatile uint16_t x198 = UINT16_MAX;
	static int32_t x199 = INT32_MIN;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x197+((x198==x199)&x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x202 = 375;
	volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 32610223;

	t50 = (x201+((x202==x203)&x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int16_t x206 = 55;
	static int32_t x207 = INT32_MIN;
	uint16_t x208 = 15568U;
	volatile int64_t t51 = -189307627463130LL;

	t51 = (x205+((x206==x207)&x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	int64_t x210 = -79373034LL;
	int8_t x211 = INT8_MIN;
	volatile int64_t x212 = -520090980836255LL;

	t52 = (x209+((x210==x211)&x212));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 38U;
	int64_t x215 = -1LL;
	static int64_t x216 = 13989LL;
	static int64_t t53 = -30375LL;

	t53 = (x213+((x214==x215)&x216));

	if (t53 != 38LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t t54 = 1;

	t54 = (x217+((x218==x219)&x220));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	static uint32_t x222 = 689623U;
	int16_t x223 = -1;
	static int64_t t55 = 2LL;

	t55 = (x221+((x222==x223)&x224));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 5U;
	int8_t x226 = 1;
	volatile int32_t x227 = INT32_MIN;
	uint64_t x228 = 71LLU;
	uint64_t t56 = 12291256296264659LLU;

	t56 = (x225+((x226==x227)&x228));

	if (t56 != 5LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MAX;
	int8_t x230 = 31;
	uint64_t x231 = 26011254270628LLU;
	static volatile int32_t t57 = 481897;

	t57 = (x229+((x230==x231)&x232));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = 901;
	int8_t x234 = -1;
	int16_t x236 = -135;
	volatile int32_t t58 = 7436329;

	t58 = (x233+((x234==x235)&x236));

	if (t58 != 901) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	uint32_t x239 = 2334298U;
	static uint32_t x240 = 25U;

	t59 = (x237+((x238==x239)&x240));

	if (t59 != 15U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	volatile uint32_t x243 = UINT32_MAX;
	int32_t t60 = 811518393;

	t60 = (x241+((x242==x243)&x244));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	static int8_t x246 = INT8_MIN;
	volatile int32_t x247 = -1;
	volatile int64_t x248 = INT64_MIN;
	int64_t t61 = 970LL;

	t61 = (x245+((x246==x247)&x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x251 = -1;
	static int32_t t62 = 920413313;

	t62 = (x249+((x250==x251)&x252));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MAX;
	static int32_t x254 = -1;
	int16_t x255 = -1;
	static uint64_t x256 = 5294113494150LLU;

	t63 = (x253+((x254==x255)&x256));

	if (t63 != 32767LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 45;
	int64_t x258 = -1LL;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 377683520U;
	uint32_t t64 = 108434503U;

	t64 = (x257+((x258==x259)&x260));

	if (t64 != 45U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -13;
	int8_t x262 = INT8_MIN;
	int8_t x263 = -1;
	int8_t x264 = INT8_MAX;
	volatile int32_t t65 = -1721;

	t65 = (x261+((x262==x263)&x264));

	if (t65 != -13) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MAX;
	int64_t x267 = INT64_MIN;
	int16_t x268 = 10;
	volatile int32_t t66 = -14805722;

	t66 = (x265+((x266==x267)&x268));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	static int16_t x271 = -1;
	int16_t x272 = 5034;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x269+((x270==x271)&x272));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	int64_t x274 = 228430153LL;
	uint16_t x275 = 4U;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = INT32_MIN;

	t68 = (x273+((x274==x275)&x276));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MIN;
	uint64_t x278 = 276541206580444414LLU;
	uint16_t x280 = 9156U;
	int64_t t69 = INT64_MIN;

	t69 = (x277+((x278==x279)&x280));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 191U;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 99787U;
	volatile uint32_t t70 = 322230962U;

	t70 = (x281+((x282==x283)&x284));

	if (t70 != 191U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MAX;
	int64_t x286 = -1LL;
	uint32_t x287 = 13661585U;
	static volatile int64_t x288 = INT64_MIN;
	volatile int64_t t71 = 4682531033LL;

	t71 = (x285+((x286==x287)&x288));

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 13135LL;
	uint8_t x290 = 0U;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MAX;
	volatile int64_t t72 = -399631LL;

	t72 = (x289+((x290==x291)&x292));

	if (t72 != 13135LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 2078507230LL;
	uint8_t x294 = 23U;
	int64_t x295 = INT64_MIN;
	int16_t x296 = 9;
	int64_t t73 = 26LL;

	t73 = (x293+((x294==x295)&x296));

	if (t73 != 2078507230LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 41854054047908120LL;
	static int8_t x298 = INT8_MIN;
	int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;
	int64_t t74 = -648LL;

	t74 = (x297+((x298==x299)&x300));

	if (t74 != 41854054047908120LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	static uint8_t x303 = 22U;
	static volatile int32_t x304 = INT32_MAX;

	t75 = (x301+((x302==x303)&x304));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int64_t x306 = INT64_MIN;
	int8_t x307 = -19;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = 1;

	t76 = (x305+((x306==x307)&x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = 29534;
	static volatile int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	int32_t t77 = -471;

	t77 = (x309+((x310==x311)&x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;

	t78 = (x313+((x314==x315)&x316));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x318 = INT32_MIN;
	int64_t x319 = 7094947915LL;
	volatile int8_t x320 = -1;

	t79 = (x317+((x318==x319)&x320));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	volatile int64_t x322 = -1560973498029855539LL;
	static uint8_t x323 = UINT8_MAX;
	volatile uint16_t x324 = 15599U;
	static volatile int64_t t80 = -190191161713474LL;

	t80 = (x321+((x322==x323)&x324));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = 14U;
	int16_t x327 = -1;
	uint64_t x328 = UINT64_MAX;

	t81 = (x325+((x326==x327)&x328));

	if (t81 != 127LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = -9;
	int32_t x330 = INT32_MIN;
	int32_t x332 = -50749;

	t82 = (x329+((x330==x331)&x332));

	if (t82 != -9) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	int32_t x334 = -23952;
	uint16_t x336 = UINT16_MAX;
	volatile int64_t t83 = INT64_MAX;

	t83 = (x333+((x334==x335)&x336));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	volatile int32_t x339 = INT32_MIN;
	static int16_t x340 = -1;
	int32_t t84 = INT32_MAX;

	t84 = (x337+((x338==x339)&x340));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = 16U;
	static volatile uint32_t t85 = UINT32_MAX;

	t85 = (x341+((x342==x343)&x344));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x346 = 233452917;
	int8_t x347 = 16;
	static int16_t x348 = 11995;
	volatile int32_t t86 = 2768414;

	t86 = (x345+((x346==x347)&x348));

	if (t86 != 60) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	volatile int16_t x350 = INT16_MIN;
	uint32_t x351 = UINT32_MAX;
	uint32_t x352 = 983U;

	t87 = (x349+((x350==x351)&x352));

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x354 = -1;
	static uint8_t x355 = UINT8_MAX;
	uint16_t x356 = UINT16_MAX;

	t88 = (x353+((x354==x355)&x356));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int32_t x358 = -1;
	uint8_t x359 = 77U;

	t89 = (x357+((x358==x359)&x360));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 283915029LLU;
	uint32_t x362 = 2U;
	int16_t x363 = INT16_MAX;
	int16_t x364 = -6;
	volatile uint64_t t90 = 230LLU;

	t90 = (x361+((x362==x363)&x364));

	if (t90 != 283915029LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = -4;
	int32_t x367 = -3119197;
	volatile uint16_t x368 = 1U;
	static int32_t t91 = INT32_MAX;

	t91 = (x365+((x366==x367)&x368));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	volatile int64_t x370 = -1LL;
	int8_t x371 = INT8_MIN;
	int64_t x372 = 68311788508141LL;
	int64_t t92 = 95169LL;

	t92 = (x369+((x370==x371)&x372));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = UINT8_MAX;
	static int8_t x376 = INT8_MAX;
	static int32_t t93 = 203722;

	t93 = (x373+((x374==x375)&x376));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	uint16_t x378 = 10638U;
	int16_t x379 = -1;
	int64_t x380 = -1LL;
	int64_t t94 = -13LL;

	t94 = (x377+((x378==x379)&x380));

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MAX;
	static int32_t x383 = -1;
	int32_t x384 = -233075129;
	volatile int32_t t95 = -485;

	t95 = (x381+((x382==x383)&x384));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MAX;
	static volatile uint8_t x387 = 8U;
	volatile uint16_t x388 = 21831U;
	int32_t t96 = 8;

	t96 = (x385+((x386==x387)&x388));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 1;
	int8_t x390 = INT8_MAX;
	uint16_t x391 = 2845U;
	static uint64_t x392 = 2LLU;
	uint64_t t97 = 3661488320LLU;

	t97 = (x389+((x390==x391)&x392));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	volatile uint32_t t98 = 546729U;

	t98 = (x393+((x394==x395)&x396));

	if (t98 != 4294934528U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	static uint32_t x398 = UINT32_MAX;
	int8_t x400 = INT8_MAX;
	int32_t t99 = -101;

	t99 = (x397+((x398==x399)&x400));

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

