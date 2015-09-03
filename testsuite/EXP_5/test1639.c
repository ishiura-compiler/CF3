#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 1994397986720765LL;
static int64_t x4 = INT64_MAX;
uint64_t t1 = 76LLU;
static uint64_t x10 = 6291LLU;
volatile uint32_t x12 = 57139631U;
int16_t x14 = 0;
int16_t x21 = INT16_MIN;
volatile uint64_t x24 = 54106243130007069LLU;
static uint64_t x27 = UINT64_MAX;
static volatile uint64_t t6 = 2759059044466LLU;
static volatile uint8_t x34 = 89U;
static volatile uint32_t x48 = UINT32_MAX;
int32_t t13 = -7212;
int8_t x60 = -1;
volatile uint32_t t15 = UINT32_MAX;
volatile uint64_t x70 = 98705520634LLU;
volatile int32_t x74 = -826459115;
uint32_t x81 = 533866029U;
int16_t x87 = INT16_MIN;
volatile int32_t t21 = -6;
static int8_t x91 = INT8_MIN;
uint8_t x93 = UINT8_MAX;
int32_t t23 = 6033036;
static int8_t x100 = INT8_MIN;
int32_t t24 = INT32_MIN;
volatile uint8_t x102 = 4U;
int8_t x104 = INT8_MIN;
int16_t x107 = -1;
static int8_t x120 = INT8_MAX;
int16_t x130 = INT16_MIN;
volatile uint32_t x131 = UINT32_MAX;
int64_t x134 = INT64_MIN;
volatile int64_t x152 = INT64_MIN;
int64_t x159 = -502472366LL;
static uint16_t x160 = UINT16_MAX;
int8_t x161 = INT8_MIN;
volatile int32_t t40 = 23;
static uint8_t x169 = 5U;
static int8_t x171 = INT8_MIN;
volatile int64_t x174 = -1LL;
static int16_t x175 = INT16_MAX;
uint32_t t43 = 11U;
volatile int32_t t44 = -500935;
int64_t x181 = INT64_MIN;
static volatile int16_t x192 = -1;
int32_t t47 = -3;
static int64_t x193 = INT64_MIN;
int64_t t48 = 218394LL;
uint16_t x200 = 15427U;
int32_t t49 = -151881845;
int64_t x217 = -5585935861254465LL;
int8_t x219 = INT8_MIN;
static int32_t x222 = INT32_MAX;
static volatile int32_t t55 = 0;
volatile int8_t x225 = -1;
uint16_t x230 = 801U;
static int32_t t57 = 0;
volatile int32_t t58 = 26;
int8_t x241 = -1;
int32_t x243 = INT32_MIN;
volatile int32_t t60 = -453290228;
int8_t x247 = 0;
int8_t x255 = -1;
static volatile int64_t x261 = 335LL;
static int32_t x286 = 4623934;
int64_t x306 = -1LL;
uint64_t x311 = UINT64_MAX;
int64_t x318 = INT64_MIN;
volatile int16_t x322 = INT16_MAX;
uint8_t x324 = 27U;
int64_t x326 = INT64_MIN;
int64_t x329 = INT64_MIN;
volatile uint16_t x335 = UINT16_MAX;
uint64_t x336 = 6503493244107775845LLU;
static volatile uint8_t x347 = 50U;
static int64_t x350 = INT64_MIN;
int16_t x354 = 197;
static int16_t x355 = INT16_MIN;
static volatile int32_t t85 = -4672;
static uint32_t x373 = UINT32_MAX;
static int32_t x377 = -1;
uint64_t x383 = UINT64_MAX;
static int16_t x384 = 2970;
int64_t x386 = INT64_MIN;
static uint8_t x390 = 6U;
int64_t x393 = INT64_MIN;
uint16_t x395 = 0U;
uint32_t t95 = 60195U;
int64_t x403 = INT64_MIN;
int8_t x405 = 11;
int32_t t97 = -2522;
static volatile uint64_t x415 = 114593671605711LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x2 = INT64_MIN;
	static uint32_t t0 = 3U;

	t0 = (x1+((x2<=x3)<=x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 3433920830782426824LLU;
	int8_t x6 = -1;
	int32_t x7 = -683;
	uint32_t x8 = 56017U;

	t1 = (x5+((x6<=x7)<=x8));

	if (t1 != 3433920830782426825LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 30454486LL;
	int64_t x11 = -1LL;
	int64_t t2 = -61272LL;

	t2 = (x9+((x10<=x11)<=x12));

	if (t2 != 30454487LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -8138991;

	t3 = (x13+((x14<=x15)<=x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static uint64_t x18 = UINT64_MAX;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 204937498804LL;

	t4 = (x17+((x18<=x19)<=x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 16U;
	static uint8_t x23 = 32U;
	static int32_t t5 = 774;

	t5 = (x21+((x22<=x23)<=x24));

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 210625852767LLU;
	static int64_t x26 = INT64_MIN;
	static uint8_t x28 = 88U;

	t6 = (x25+((x26<=x27)<=x28));

	if (t6 != 210625852768LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int32_t x30 = INT32_MIN;
	uint64_t x31 = 44932275LLU;
	volatile int8_t x32 = INT8_MIN;
	int32_t t7 = 136809;

	t7 = (x29+((x30<=x31)<=x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 2;
	int8_t x35 = -1;
	static int8_t x36 = -1;
	static volatile int32_t t8 = 1;

	t8 = (x33+((x34<=x35)<=x36));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	uint64_t x38 = 78688997194LLU;
	uint8_t x39 = 1U;
	static int32_t x40 = -1;
	int64_t t9 = -143410281063497634LL;

	t9 = (x37+((x38<=x39)<=x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	volatile uint8_t x42 = UINT8_MAX;
	volatile int32_t x43 = -1;
	volatile uint64_t x44 = 113LLU;
	int32_t t10 = 0;

	t10 = (x41+((x42<=x43)<=x44));

	if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int64_t x46 = -1LL;
	static int8_t x47 = INT8_MIN;
	volatile int32_t t11 = 11;

	t11 = (x45+((x46<=x47)<=x48));

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 198LLU;
	uint16_t x50 = 22U;
	int32_t x51 = -1;
	int32_t x52 = 156663957;
	volatile uint64_t t12 = 30837519511640805LLU;

	t12 = (x49+((x50<=x51)<=x52));

	if (t12 != 199LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MAX;
	uint64_t x55 = 87203493298LLU;
	uint64_t x56 = 9706170285671746LLU;

	t13 = (x53+((x54<=x55)<=x56));

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -1;
	volatile int8_t x58 = -1;
	int16_t x59 = INT16_MAX;
	int32_t t14 = -5;

	t14 = (x57+((x58<=x59)<=x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	static int8_t x62 = -1;
	volatile uint32_t x63 = 6392U;
	int32_t x64 = -223;

	t15 = (x61+((x62<=x63)<=x64));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = UINT16_MAX;
	volatile int64_t x66 = -1LL;
	uint16_t x67 = 248U;
	volatile uint64_t x68 = 124102LLU;
	int32_t t16 = 49374136;

	t16 = (x65+((x66<=x67)<=x68));

	if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 26232676U;
	volatile uint64_t x71 = 39816LLU;
	static uint64_t x72 = UINT64_MAX;
	uint32_t t17 = 500069713U;

	t17 = (x69+((x70<=x71)<=x72));

	if (t17 != 26232677U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -10743;
	int8_t x75 = -5;
	static int64_t x76 = -1LL;
	int32_t t18 = -28;

	t18 = (x73+((x74<=x75)<=x76));

	if (t18 != -10743) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MIN;
	int32_t x80 = -1;
	volatile int32_t t19 = 192359837;

	t19 = (x77+((x78<=x79)<=x80));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 0U;
	static uint8_t x83 = UINT8_MAX;
	int32_t x84 = INT32_MIN;
	volatile uint32_t t20 = 75U;

	t20 = (x81+((x82<=x83)<=x84));

	if (t20 != 533866029U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MAX;
	int64_t x88 = INT64_MIN;

	t21 = (x85+((x86<=x87)<=x88));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -1;
	int8_t x90 = -1;
	static volatile int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -1;

	t22 = (x89+((x90<=x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = UINT64_MAX;
	uint64_t x95 = 531173LLU;
	static int8_t x96 = 2;

	t23 = (x93+((x94<=x95)<=x96));

	if (t23 != 256) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MIN;

	t24 = (x97+((x98<=x99)<=x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static volatile int16_t x103 = INT16_MAX;
	int32_t t25 = 2;

	t25 = (x101+((x102<=x103)<=x104));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 231U;
	int16_t x108 = -1;
	int32_t t26 = INT32_MIN;

	t26 = (x105+((x106<=x107)<=x108));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 1;
	int8_t x110 = -12;
	volatile int64_t x111 = -1LL;
	volatile int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 847755;

	t27 = (x109+((x110<=x111)<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = UINT64_MAX;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 1594475;

	t28 = (x113+((x114<=x115)<=x116));

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -1LL;
	int8_t x118 = INT8_MIN;
	static uint64_t x119 = 245178493967326120LLU;
	static int64_t t29 = -1024075LL;

	t29 = (x117+((x118<=x119)<=x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -21;
	static int8_t x122 = -1;
	int64_t x123 = -1LL;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = -118172156;

	t30 = (x121+((x122<=x123)<=x124));

	if (t30 != -20) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -2;
	static int64_t x126 = INT64_MIN;
	volatile int16_t x127 = -279;
	int8_t x128 = 43;
	int32_t t31 = -58;

	t31 = (x125+((x126<=x127)<=x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int32_t x132 = INT32_MIN;
	static int64_t t32 = INT64_MIN;

	t32 = (x129+((x130<=x131)<=x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	static uint64_t x135 = UINT64_MAX;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 2173376;

	t33 = (x133+((x134<=x135)<=x136));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	volatile int64_t x138 = INT64_MIN;
	static volatile uint32_t x139 = 6639571U;
	int16_t x140 = INT16_MAX;
	int32_t t34 = 1;

	t34 = (x137+((x138<=x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = 1;
	int32_t x142 = -1;
	uint64_t x143 = 112614226340LLU;
	int8_t x144 = 0;
	volatile int32_t t35 = 112393;

	t35 = (x141+((x142<=x143)<=x144));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 23;
	int8_t x146 = -12;
	static int32_t x147 = INT32_MAX;
	static uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = -56204132;

	t36 = (x145+((x146<=x147)<=x148));

	if (t36 != 24) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 36U;
	uint32_t x150 = 2053848868U;
	static volatile int64_t x151 = -1LL;
	int32_t t37 = -771153;

	t37 = (x149+((x150<=x151)<=x152));

	if (t37 != 36) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	uint64_t x154 = 178140084603LLU;
	uint16_t x155 = 15582U;
	static uint32_t x156 = 1002U;
	volatile int32_t t38 = 43;

	t38 = (x153+((x154<=x155)<=x156));

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	volatile int64_t x158 = -18LL;
	int64_t t39 = -45823543LL;

	t39 = (x157+((x158<=x159)<=x160));

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = 0;
	int16_t x163 = -1;
	uint8_t x164 = 43U;

	t40 = (x161+((x162<=x163)<=x164));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -1LL;
	int8_t x166 = -1;
	int32_t x167 = INT32_MAX;
	volatile int64_t x168 = INT64_MIN;
	int64_t t41 = 962629676505LL;

	t41 = (x165+((x166<=x167)<=x168));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = 204363375LLU;
	volatile uint64_t x172 = UINT64_MAX;
	int32_t t42 = 511;

	t42 = (x169+((x170<=x171)<=x172));

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 992U;
	uint16_t x176 = 179U;

	t43 = (x173+((x174<=x175)<=x176));

	if (t43 != 993U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	int32_t x178 = INT32_MAX;
	uint64_t x179 = 199213333113128LLU;
	int8_t x180 = -1;

	t44 = (x177+((x178<=x179)<=x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x182 = 38U;
	int64_t x183 = INT64_MIN;
	uint8_t x184 = 24U;
	static int64_t t45 = -338439437060651301LL;

	t45 = (x181+((x182<=x183)<=x184));

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x186 = UINT16_MAX;
	uint16_t x187 = 21U;
	int8_t x188 = INT8_MAX;
	static int64_t t46 = -353400994393167562LL;

	t46 = (x185+((x186<=x187)<=x188));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = 659U;
	uint32_t x190 = 196U;
	int64_t x191 = INT64_MIN;

	t47 = (x189+((x190<=x191)<=x192));

	if (t47 != 659) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = -204237LL;
	volatile uint64_t x195 = UINT64_MAX;
	volatile int16_t x196 = INT16_MAX;

	t48 = (x193+((x194<=x195)<=x196));

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	int16_t x198 = -41;
	volatile int16_t x199 = -1467;

	t49 = (x197+((x198<=x199)<=x200));

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 61U;
	int32_t x202 = INT32_MAX;
	static uint32_t x203 = UINT32_MAX;
	int64_t x204 = INT64_MAX;
	int32_t t50 = -993;

	t50 = (x201+((x202<=x203)<=x204));

	if (t50 != 62) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	volatile uint8_t x206 = 1U;
	uint32_t x207 = 497982914U;
	uint16_t x208 = UINT16_MAX;
	int32_t t51 = -2005;

	t51 = (x205+((x206<=x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int64_t x210 = INT64_MAX;
	uint64_t x211 = 170898021LLU;
	int8_t x212 = 1;
	int32_t t52 = -112392336;

	t52 = (x209+((x210<=x211)<=x212));

	if (t52 != 256) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 7848U;
	volatile int64_t x214 = 5733438030810063LL;
	static int16_t x215 = -2432;
	int16_t x216 = -24;
	static int32_t t53 = 177;

	t53 = (x213+((x214<=x215)<=x216));

	if (t53 != 7848) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x218 = 10620LLU;
	static int64_t x220 = -12919241113869474LL;
	int64_t t54 = 114508078812LL;

	t54 = (x217+((x218<=x219)<=x220));

	if (t54 != -5585935861254465LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	int32_t x223 = INT32_MAX;
	int32_t x224 = -1;

	t55 = (x221+((x222<=x223)<=x224));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	int8_t x227 = -35;
	volatile int16_t x228 = -1;
	int32_t t56 = 0;

	t56 = (x225+((x226<=x227)<=x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	int32_t x231 = -1;
	uint64_t x232 = 131820687890074LLU;

	t57 = (x229+((x230<=x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = -419947;
	uint16_t x234 = 1U;
	static uint8_t x235 = 5U;
	int16_t x236 = INT16_MIN;

	t58 = (x233+((x234<=x235)<=x236));

	if (t58 != -419947) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MAX;
	int16_t x239 = 0;
	uint8_t x240 = 4U;
	volatile int64_t t59 = -567LL;

	t59 = (x237+((x238<=x239)<=x240));

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int16_t x244 = INT16_MAX;

	t60 = (x241+((x242<=x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 541495;
	int32_t x246 = -568231;
	int16_t x248 = -571;
	volatile int32_t t61 = 250107052;

	t61 = (x245+((x246<=x247)<=x248));

	if (t61 != 541495) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static uint64_t x250 = UINT64_MAX;
	static uint32_t x251 = 28U;
	int8_t x252 = INT8_MAX;
	volatile int32_t t62 = 24;

	t62 = (x249+((x250<=x251)<=x252));

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	volatile uint16_t x254 = 0U;
	volatile int64_t x256 = -16128LL;
	static int64_t t63 = 4206020447928020LL;

	t63 = (x253+((x254<=x255)<=x256));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = 1;
	uint8_t x258 = 4U;
	int8_t x259 = -32;
	volatile int32_t x260 = INT32_MIN;
	int32_t t64 = -3151332;

	t64 = (x257+((x258<=x259)<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	static int32_t x263 = INT32_MAX;
	int8_t x264 = INT8_MIN;
	volatile int64_t t65 = -12630727691194160LL;

	t65 = (x261+((x262<=x263)<=x264));

	if (t65 != 335LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -1;
	uint32_t x266 = 199165U;
	int8_t x267 = INT8_MIN;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 97;

	t66 = (x265+((x266<=x267)<=x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x273 = -1;
	int8_t x274 = 41;
	static uint64_t x275 = UINT64_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t67 = -915589;

	t67 = (x273+((x274<=x275)<=x276));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = -1LL;
	static uint64_t x278 = 3938580327999597660LLU;
	static int16_t x279 = INT16_MIN;
	int8_t x280 = 1;
	int64_t t68 = -1LL;

	t68 = (x277+((x278<=x279)<=x280));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 443373127U;
	int64_t x282 = -15LL;
	uint32_t x283 = 1094550U;
	uint32_t x284 = UINT32_MAX;
	volatile uint32_t t69 = 19U;

	t69 = (x281+((x282<=x283)<=x284));

	if (t69 != 443373128U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MAX;
	static int16_t x287 = -1;
	volatile uint8_t x288 = 12U;
	volatile int32_t t70 = 163431;

	t70 = (x285+((x286<=x287)<=x288));

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -1;
	int16_t x290 = -1;
	static uint8_t x291 = 0U;
	uint8_t x292 = 12U;
	int32_t t71 = 38155074;

	t71 = (x289+((x290<=x291)<=x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x297 = 10085LLU;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MIN;
	static int32_t x300 = INT32_MIN;
	volatile uint64_t t72 = 252755933444LLU;

	t72 = (x297+((x298<=x299)<=x300));

	if (t72 != 10085LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x305 = 210U;
	int16_t x307 = -1;
	int16_t x308 = -1;
	static uint32_t t73 = 262U;

	t73 = (x305+((x306<=x307)<=x308));

	if (t73 != 210U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = 19U;
	volatile int32_t x310 = INT32_MIN;
	static uint8_t x312 = 36U;
	volatile int32_t t74 = 17;

	t74 = (x309+((x310<=x311)<=x312));

	if (t74 != 20) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -2024;
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MAX;
	volatile int32_t t75 = -8;

	t75 = (x313+((x314<=x315)<=x316));

	if (t75 != -2023) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = UINT16_MAX;
	uint8_t x319 = 1U;
	int64_t x320 = -1LL;
	int32_t t76 = -10740662;

	t76 = (x317+((x318<=x319)<=x320));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = 1U;
	static volatile uint64_t x323 = UINT64_MAX;
	volatile int32_t t77 = 12233;

	t77 = (x321+((x322<=x323)<=x324));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x325 = 2U;
	uint16_t x327 = 10184U;
	int8_t x328 = 1;
	static int32_t t78 = 163245;

	t78 = (x325+((x326<=x327)<=x328));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x330 = 116;
	int16_t x331 = INT16_MAX;
	int16_t x332 = -1;
	int64_t t79 = INT64_MIN;

	t79 = (x329+((x330<=x331)<=x332));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = 647LL;
	int8_t x334 = INT8_MAX;
	static int64_t t80 = -204039LL;

	t80 = (x333+((x334<=x335)<=x336));

	if (t80 != 648LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x337 = 27593LL;
	int16_t x338 = INT16_MIN;
	uint8_t x339 = 5U;
	static volatile uint8_t x340 = UINT8_MAX;
	volatile int64_t t81 = -110395LL;

	t81 = (x337+((x338<=x339)<=x340));

	if (t81 != 27594LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	uint8_t x343 = 11U;
	static int16_t x344 = -1;
	int64_t t82 = INT64_MIN;

	t82 = (x341+((x342<=x343)<=x344));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x345 = 73U;
	uint16_t x346 = 0U;
	int32_t x348 = INT32_MIN;
	int32_t t83 = 384285320;

	t83 = (x345+((x346<=x347)<=x348));

	if (t83 != 73) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = UINT16_MAX;
	static uint16_t x351 = 12U;
	int8_t x352 = INT8_MIN;
	volatile int32_t t84 = 24;

	t84 = (x349+((x350<=x351)<=x352));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MAX;
	int64_t x356 = INT64_MIN;

	t85 = (x353+((x354<=x355)<=x356));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	volatile int32_t x359 = -2029;
	static volatile int32_t x360 = -15861745;
	volatile int32_t t86 = -338902;

	t86 = (x357+((x358<=x359)<=x360));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = 657166875060339LLU;
	int64_t x364 = INT64_MIN;
	uint64_t t87 = UINT64_MAX;

	t87 = (x361+((x362<=x363)<=x364));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = -6;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MAX;
	int64_t x368 = 59174807306LL;
	int32_t t88 = 1;

	t88 = (x365+((x366<=x367)<=x368));

	if (t88 != -5) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x374 = -1;
	volatile int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MIN;
	uint32_t t89 = UINT32_MAX;

	t89 = (x373+((x374<=x375)<=x376));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x378 = -908;
	int64_t x379 = INT64_MAX;
	volatile uint32_t x380 = UINT32_MAX;
	volatile int32_t t90 = 8021;

	t90 = (x377+((x378<=x379)<=x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x381 = -15LL;
	uint8_t x382 = UINT8_MAX;
	volatile int64_t t91 = -2506692817LL;

	t91 = (x381+((x382<=x383)<=x384));

	if (t91 != -14LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MAX;
	volatile int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MIN;
	volatile int64_t t92 = INT64_MAX;

	t92 = (x385+((x386<=x387)<=x388));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x389 = -1;
	static uint8_t x391 = 2U;
	volatile int8_t x392 = INT8_MAX;
	int32_t t93 = -6;

	t93 = (x389+((x390<=x391)<=x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x394 = -1;
	int16_t x396 = INT16_MAX;
	int64_t t94 = 65542784824995915LL;

	t94 = (x393+((x394<=x395)<=x396));

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 723U;
	volatile int32_t x398 = 0;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 0LL;

	t95 = (x397+((x398<=x399)<=x400));

	if (t95 != 724U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x401 = 5U;
	int64_t x402 = INT64_MIN;
	static volatile uint8_t x404 = 3U;
	volatile int32_t t96 = -99676546;

	t96 = (x401+((x402<=x403)<=x404));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x406 = -1LL;
	int16_t x407 = 0;
	int32_t x408 = 14092;

	t97 = (x405+((x406<=x407)<=x408));

	if (t97 != 12) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = -3;
	volatile uint64_t x410 = 565570961376LLU;
	int64_t x411 = -1LL;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t98 = 8034;

	t98 = (x409+((x410<=x411)<=x412));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = -1;
	int16_t x414 = INT16_MIN;
	uint32_t x416 = UINT32_MAX;
	volatile int32_t t99 = -3976;

	t99 = (x413+((x414<=x415)<=x416));

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

