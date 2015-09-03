#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
int8_t x9 = -1;
volatile uint16_t x10 = 650U;
int8_t x19 = INT8_MAX;
int16_t x20 = INT16_MAX;
int32_t t4 = -362596232;
volatile int32_t x24 = INT32_MAX;
static int64_t x26 = INT64_MIN;
int32_t t6 = 352;
int64_t x30 = -1LL;
int32_t x40 = -768441122;
int32_t t10 = 130665;
int16_t x45 = -119;
int64_t x48 = INT64_MAX;
uint32_t x49 = 1698944694U;
volatile int32_t t13 = -3825699;
int8_t x59 = 24;
static int64_t x61 = 1583382LL;
volatile int32_t t15 = -311165;
int32_t x69 = INT32_MAX;
int32_t x71 = -1;
int32_t t17 = -46214;
int64_t x80 = -143937654LL;
int32_t x90 = INT32_MIN;
static uint8_t x101 = 27U;
int16_t x105 = -94;
int32_t t28 = 0;
int16_t x117 = 23;
static int8_t x119 = 0;
volatile int32_t x123 = -1949700;
int32_t x124 = 221;
int8_t x132 = 0;
volatile int32_t t33 = 2921;
volatile int32_t t34 = -1;
uint8_t x141 = 16U;
static int32_t x143 = -2770855;
int8_t x151 = INT8_MIN;
static int8_t x154 = -1;
int8_t x157 = INT8_MAX;
int64_t x158 = INT64_MIN;
int32_t t40 = 0;
static volatile int64_t x168 = INT64_MIN;
int32_t x176 = INT32_MIN;
volatile uint32_t x184 = 1U;
int8_t x186 = INT8_MIN;
static int64_t x187 = INT64_MIN;
volatile uint64_t x194 = UINT64_MAX;
volatile int32_t t49 = 8302620;
static volatile int8_t x204 = INT8_MAX;
int64_t x210 = INT64_MIN;
int64_t x211 = 321847677LL;
uint8_t x217 = 3U;
int64_t x218 = INT64_MIN;
uint16_t x222 = UINT16_MAX;
int32_t t55 = 104604;
int32_t x234 = -75627;
uint8_t x235 = 14U;
volatile uint32_t x237 = UINT32_MAX;
int8_t x242 = 4;
static int8_t x244 = INT8_MIN;
int32_t t60 = -886149;
static int32_t t61 = -75757618;
int16_t x252 = INT16_MIN;
int8_t x254 = INT8_MIN;
int64_t x263 = INT64_MIN;
static int32_t x267 = INT32_MIN;
int32_t x274 = 2175196;
volatile int16_t x279 = -14;
int64_t x280 = INT64_MIN;
static uint16_t x285 = 29U;
int64_t x286 = INT64_MIN;
int8_t x297 = INT8_MIN;
int16_t x301 = -1;
int64_t x306 = INT64_MIN;
static int64_t x310 = INT64_MIN;
int32_t t77 = 256098824;
int16_t x313 = INT16_MAX;
uint16_t x326 = 89U;
uint16_t x331 = 10U;
volatile int16_t x334 = INT16_MAX;
static uint32_t x339 = 2U;
volatile int32_t t84 = 509943785;
static int32_t x341 = -9;
int32_t x342 = INT32_MIN;
int64_t x344 = 302092910126LL;
uint8_t x349 = 3U;
int8_t x354 = INT8_MIN;
volatile int8_t x355 = INT8_MIN;
volatile int64_t x357 = -346LL;
uint64_t x358 = 4544002472557631969LLU;
static uint64_t x366 = 1000560LLU;
int16_t x368 = -769;
volatile int32_t t92 = 1320448;
static int32_t t94 = 20673;
uint64_t x386 = 115529LLU;
int32_t x387 = 0;
static int16_t x389 = -1;
volatile int8_t x395 = -58;
static volatile int32_t t98 = 662130;


void f0(void) {
	volatile int32_t x1 = 54563;
	int64_t x2 = -1959018881753LL;
	uint64_t x3 = UINT64_MAX;
	static volatile int32_t x4 = 10011;
	volatile int32_t t0 = 13091110;

	t0 = ((x1^(x2|x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x7 = INT8_MAX;
	static uint64_t x8 = 335LLU;
	static volatile int32_t t1 = -2;

	t1 = ((x5^(x6|x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x11 = UINT64_MAX;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = -24658;

	t2 = ((x9^(x10|x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = INT8_MAX;
	static uint16_t x16 = 1U;
	static volatile int32_t t3 = -412;

	t3 = ((x13^(x14|x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	int32_t x18 = -1;

	t4 = ((x17^(x18|x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 178U;
	int16_t x22 = -1;
	volatile int32_t x23 = -1;
	int32_t t5 = -4521;

	t5 = ((x21^(x22|x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	uint32_t x28 = 146996995U;

	t6 = ((x25^(x26|x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 50613914244087LLU;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 68U;
	int32_t t7 = -375582225;

	t7 = ((x29^(x30|x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -2LL;
	uint8_t x34 = UINT8_MAX;
	static int16_t x35 = -1;
	static int16_t x36 = INT16_MAX;
	int32_t t8 = 132417210;

	t8 = ((x33^(x34|x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 46LLU;
	static int32_t x38 = 125499348;
	static uint64_t x39 = UINT64_MAX;
	int32_t t9 = 531893241;

	t9 = ((x37^(x38|x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = 57;
	int16_t x43 = INT16_MIN;
	int16_t x44 = INT16_MIN;

	t10 = ((x41^(x42|x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = 1LL;
	uint64_t x47 = 1757320420754948LLU;
	static int32_t t11 = 1527;

	t11 = ((x45^(x46|x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -1;
	uint64_t x51 = 190830417342051LLU;
	volatile uint32_t x52 = 177122387U;
	volatile int32_t t12 = 7906198;

	t12 = ((x49^(x50|x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x53 = 3U;
	volatile int8_t x54 = 43;
	volatile uint16_t x55 = 26U;
	uint32_t x56 = 417U;

	t13 = ((x53^(x54|x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 3316517LLU;
	static int8_t x58 = 10;
	int16_t x60 = -1;
	volatile int32_t t14 = -17424;

	t14 = ((x57^(x58|x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -1193535134LL;
	static int64_t x63 = 10056LL;
	int32_t x64 = -1;

	t15 = ((x61^(x62|x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	volatile uint32_t x66 = UINT32_MAX;
	static int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MAX;
	int32_t t16 = -11873318;

	t16 = ((x65^(x66|x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;

	t17 = ((x69^(x70|x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 2U;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = 2;
	static uint64_t x76 = 12588913925LLU;
	static int32_t t18 = -10036;

	t18 = ((x73^(x74|x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 12U;
	int32_t x78 = INT32_MAX;
	static int8_t x79 = 0;
	volatile int32_t t19 = 4130;

	t19 = ((x77^(x78|x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = UINT64_MAX;
	static int64_t x82 = INT64_MIN;
	static int8_t x83 = -37;
	int16_t x84 = 1;
	volatile int32_t t20 = 12;

	t20 = ((x81^(x82|x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 10U;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t21 = -3973;

	t21 = ((x85^(x86|x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int32_t x91 = INT32_MAX;
	static volatile int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -28;

	t22 = ((x89^(x90|x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MAX;
	volatile int32_t x94 = INT32_MIN;
	volatile int64_t x95 = 829901088473LL;
	volatile uint32_t x96 = 0U;
	volatile int32_t t23 = -184;

	t23 = ((x93^(x94|x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -424037479;
	int32_t x98 = INT32_MIN;
	static uint32_t x99 = 4195464U;
	int8_t x100 = -1;
	int32_t t24 = -187571;

	t24 = ((x97^(x98|x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MAX;
	uint16_t x103 = 3617U;
	int64_t x104 = INT64_MAX;
	int32_t t25 = -5;

	t25 = ((x101^(x102|x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x106 = -1052775425;
	volatile int16_t x107 = -1;
	int64_t x108 = -1LL;
	int32_t t26 = 3118;

	t26 = ((x105^(x106|x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	volatile int32_t x110 = INT32_MAX;
	int64_t x111 = INT64_MIN;
	static int32_t x112 = -453;
	int32_t t27 = 110631;

	t27 = ((x109^(x110|x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 12799U;
	uint8_t x114 = 0U;
	uint16_t x115 = 2978U;
	int64_t x116 = -1LL;

	t28 = ((x113^(x114|x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = 3450291468769694615LL;
	static int64_t x120 = -1LL;
	volatile int32_t t29 = -1655640;

	t29 = ((x117^(x118|x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	uint8_t x122 = 11U;
	volatile int32_t t30 = 112746471;

	t30 = ((x121^(x122|x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x125 = 0U;
	int32_t x126 = INT32_MAX;
	uint8_t x127 = 14U;
	int16_t x128 = -10;
	volatile int32_t t31 = -991862;

	t31 = ((x125^(x126|x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	uint64_t x130 = 1LLU;
	uint8_t x131 = 0U;
	volatile int32_t t32 = 171403843;

	t32 = ((x129^(x130|x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static uint16_t x134 = 685U;
	uint16_t x135 = 273U;
	int16_t x136 = -1;

	t33 = ((x133^(x134|x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 2103216161096726433LL;
	int64_t x138 = INT64_MAX;
	int16_t x139 = 56;
	uint32_t x140 = 1U;

	t34 = ((x137^(x138|x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x142 = 315920116LLU;
	int64_t x144 = 10711050484036404LL;
	int32_t t35 = -934179;

	t35 = ((x141^(x142|x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 1305U;
	int64_t x147 = INT64_MIN;
	int32_t x148 = -1;
	int32_t t36 = -69149427;

	t36 = ((x145^(x146|x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 904U;
	volatile uint8_t x150 = 21U;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t37 = -63886;

	t37 = ((x149^(x150|x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	static uint64_t x155 = 103867916968231LLU;
	uint16_t x156 = 2070U;
	int32_t t38 = 37049181;

	t38 = ((x153^(x154|x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x159 = INT64_MIN;
	volatile int8_t x160 = INT8_MIN;
	int32_t t39 = -2041834;

	t39 = ((x157^(x158|x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 7U;
	int16_t x162 = 545;
	static int64_t x163 = INT64_MAX;
	int32_t x164 = INT32_MAX;

	t40 = ((x161^(x162|x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	uint8_t x166 = 0U;
	volatile int64_t x167 = INT64_MIN;
	int32_t t41 = -24614;

	t41 = ((x165^(x166|x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 700U;
	static int8_t x170 = INT8_MIN;
	int16_t x171 = -1;
	volatile int8_t x172 = -1;
	static int32_t t42 = 1;

	t42 = ((x169^(x170|x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -15820;
	uint64_t x174 = 14LLU;
	volatile uint16_t x175 = 49U;
	volatile int32_t t43 = 864046052;

	t43 = ((x173^(x174|x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	uint32_t x178 = 4932U;
	volatile int8_t x179 = -1;
	int64_t x180 = INT64_MAX;
	static int32_t t44 = 179320;

	t44 = ((x177^(x178|x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 1U;
	int32_t x182 = INT32_MAX;
	uint8_t x183 = 2U;
	static volatile int32_t t45 = -54546556;

	t45 = ((x181^(x182|x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = 4087;

	t46 = ((x185^(x186|x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = UINT64_MAX;
	static int8_t x190 = 0;
	volatile int16_t x191 = 1;
	volatile int8_t x192 = INT8_MIN;
	int32_t t47 = 14727;

	t47 = ((x189^(x190|x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MAX;
	int16_t x195 = INT16_MIN;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -194300;

	t48 = ((x193^(x194|x195))==x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = 12107456;
	volatile uint64_t x198 = 23633041783899573LLU;
	static volatile int64_t x199 = INT64_MAX;
	volatile int8_t x200 = 0;

	t49 = ((x197^(x198|x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	int32_t x202 = INT32_MAX;
	volatile uint32_t x203 = 17U;
	static volatile int32_t t50 = -27;

	t50 = ((x201^(x202|x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 42207036;
	static int16_t x206 = INT16_MIN;
	volatile int8_t x207 = -3;
	volatile int64_t x208 = INT64_MIN;
	int32_t t51 = -16837740;

	t51 = ((x205^(x206|x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	static int8_t x212 = INT8_MAX;
	int32_t t52 = 282417274;

	t52 = ((x209^(x210|x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = 0;
	int8_t x214 = -1;
	volatile int16_t x215 = 2077;
	volatile uint16_t x216 = 4U;
	volatile int32_t t53 = 3;

	t53 = ((x213^(x214|x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x219 = 178749773;
	int16_t x220 = -17;
	volatile int32_t t54 = -132397078;

	t54 = ((x217^(x218|x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int64_t x223 = INT64_MAX;
	static int8_t x224 = -1;

	t55 = ((x221^(x222|x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	uint16_t x226 = 1889U;
	int32_t x227 = INT32_MAX;
	int8_t x228 = -1;
	static volatile int32_t t56 = 480;

	t56 = ((x225^(x226|x227))==x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 762410;
	uint8_t x230 = UINT8_MAX;
	volatile int16_t x231 = INT16_MIN;
	uint8_t x232 = UINT8_MAX;
	static int32_t t57 = 1;

	t57 = ((x229^(x230|x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	int16_t x236 = -1;
	static volatile int32_t t58 = 80045;

	t58 = ((x233^(x234|x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MAX;
	static int64_t x239 = INT64_MIN;
	int16_t x240 = 1;
	volatile int32_t t59 = -58195;

	t59 = ((x237^(x238|x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	volatile int16_t x243 = -1;

	t60 = ((x241^(x242|x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 797U;
	int8_t x246 = -11;
	int64_t x247 = -1LL;
	int8_t x248 = INT8_MIN;

	t61 = ((x245^(x246|x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 7987815LLU;
	uint16_t x250 = UINT16_MAX;
	static volatile int16_t x251 = INT16_MIN;
	int32_t t62 = 2;

	t62 = ((x249^(x250|x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MAX;
	int32_t x255 = -1;
	static volatile int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -631340464;

	t63 = ((x253^(x254|x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	int8_t x258 = -2;
	static int32_t x259 = 93;
	volatile int32_t x260 = -132420005;
	int32_t t64 = -84904568;

	t64 = ((x257^(x258|x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 10;
	int32_t x262 = INT32_MIN;
	uint64_t x264 = UINT64_MAX;
	int32_t t65 = 1;

	t65 = ((x261^(x262|x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	uint16_t x266 = UINT16_MAX;
	volatile uint64_t x268 = 19181851340129LLU;
	static int32_t t66 = 6;

	t66 = ((x265^(x266|x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MAX;
	static int8_t x270 = INT8_MIN;
	static uint16_t x271 = UINT16_MAX;
	int32_t x272 = -1015228658;
	int32_t t67 = 447;

	t67 = ((x269^(x270|x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	static int8_t x276 = INT8_MIN;
	static int32_t t68 = -3;

	t68 = ((x273^(x274|x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	static int8_t x278 = INT8_MAX;
	int32_t t69 = -501819;

	t69 = ((x277^(x278|x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 3039U;
	uint64_t x282 = 4512836013LLU;
	int8_t x283 = INT8_MIN;
	volatile uint8_t x284 = 22U;
	int32_t t70 = 0;

	t70 = ((x281^(x282|x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x287 = UINT8_MAX;
	volatile int32_t x288 = INT32_MIN;
	int32_t t71 = 137;

	t71 = ((x285^(x286|x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x289 = INT64_MIN;
	static int8_t x290 = 2;
	volatile int64_t x291 = INT64_MAX;
	volatile int8_t x292 = INT8_MIN;
	int32_t t72 = 31;

	t72 = ((x289^(x290|x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	volatile int32_t x294 = -1;
	volatile int16_t x295 = -45;
	uint32_t x296 = 1480U;
	int32_t t73 = 81;

	t73 = ((x293^(x294|x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x298 = UINT8_MAX;
	int8_t x299 = 0;
	volatile int8_t x300 = -1;
	int32_t t74 = 354372661;

	t74 = ((x297^(x298|x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x302 = 54217375994462943LLU;
	static int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t75 = 3957;

	t75 = ((x301^(x302|x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -7066;
	static uint8_t x307 = 1U;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t76 = 3;

	t76 = ((x305^(x306|x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -178;
	static int32_t x311 = INT32_MIN;
	static uint32_t x312 = UINT32_MAX;

	t77 = ((x309^(x310|x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -1;
	int8_t x315 = -1;
	int64_t x316 = 937364584716LL;
	volatile int32_t t78 = -30907675;

	t78 = ((x313^(x314|x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 943459275279LL;
	uint8_t x318 = 1U;
	int32_t x319 = INT32_MAX;
	static int16_t x320 = INT16_MAX;
	static volatile int32_t t79 = -7798457;

	t79 = ((x317^(x318|x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = UINT32_MAX;
	int32_t x322 = -419;
	int8_t x323 = -1;
	static int32_t x324 = INT32_MIN;
	int32_t t80 = 21;

	t80 = ((x321^(x322|x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 2U;
	int16_t x327 = -1;
	volatile int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -1;

	t81 = ((x325^(x326|x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -13;
	int16_t x330 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	static int32_t t82 = 54204;

	t82 = ((x329^(x330|x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 0LLU;
	static int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -40182;

	t83 = ((x333^(x334|x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x337 = UINT64_MAX;
	uint64_t x338 = 5848904LLU;
	static int32_t x340 = -1;

	t84 = ((x337^(x338|x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x343 = 0;
	int32_t t85 = 63836452;

	t85 = ((x341^(x342|x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	uint16_t x346 = 1199U;
	int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MIN;
	int32_t t86 = 2;

	t86 = ((x345^(x346|x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = 16;
	int32_t x351 = INT32_MIN;
	uint16_t x352 = 135U;
	int32_t t87 = -1;

	t87 = ((x349^(x350|x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = 348259;

	t88 = ((x353^(x354|x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MIN;
	int32_t t89 = -205;

	t89 = ((x357^(x358|x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = 8;
	int8_t x362 = INT8_MAX;
	volatile int16_t x363 = INT16_MIN;
	int8_t x364 = 7;
	volatile int32_t t90 = 51275;

	t90 = ((x361^(x362|x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	static uint64_t x367 = 1841987LLU;
	volatile int32_t t91 = -9;

	t91 = ((x365^(x366|x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MIN;
	static int64_t x370 = INT64_MAX;
	volatile int16_t x371 = 2454;
	static volatile int8_t x372 = -1;

	t92 = ((x369^(x370|x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MAX;
	int64_t x376 = -14421053446895623LL;
	int32_t t93 = -80704798;

	t93 = ((x373^(x374|x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	static uint64_t x378 = UINT64_MAX;
	static volatile int64_t x379 = 1025097583LL;
	static int64_t x380 = 583688465334LL;

	t94 = ((x377^(x378|x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 21U;
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = 114782LL;
	int8_t x384 = 58;
	int32_t t95 = 215122146;

	t95 = ((x381^(x382|x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	volatile uint64_t x388 = UINT64_MAX;
	int32_t t96 = 9;

	t96 = ((x385^(x386|x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -25033;
	int16_t x391 = -1;
	static int16_t x392 = INT16_MIN;
	int32_t t97 = -4941927;

	t97 = ((x389^(x390|x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1236060LL;
	int32_t x394 = -2;
	uint64_t x396 = 5652935355LLU;

	t98 = ((x393^(x394|x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	static volatile uint16_t x398 = 196U;
	int16_t x399 = INT16_MIN;
	static uint32_t x400 = UINT32_MAX;
	static volatile int32_t t99 = 22521230;

	t99 = ((x397^(x398|x399))==x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

