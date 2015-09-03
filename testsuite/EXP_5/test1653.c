#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -1LL;
int32_t x26 = -1;
uint32_t x27 = UINT32_MAX;
static volatile int32_t x32 = 25790;
uint8_t x42 = UINT8_MAX;
uint8_t x53 = 64U;
uint16_t x54 = 10779U;
int32_t t12 = -837;
int64_t x58 = -66561LL;
uint8_t x63 = 1U;
int8_t x74 = INT8_MAX;
uint8_t x79 = 0U;
int64_t x88 = INT64_MIN;
int64_t x91 = INT64_MAX;
uint16_t x93 = UINT16_MAX;
int16_t x94 = INT16_MAX;
volatile int32_t t21 = -322654;
int8_t x106 = INT8_MIN;
static int16_t x110 = 858;
volatile int64_t t25 = 12224692878986LL;
uint64_t x115 = 70237687381967LLU;
static uint16_t x117 = UINT16_MAX;
int8_t x118 = -1;
volatile uint32_t t27 = 5U;
static int64_t x121 = -1LL;
volatile int64_t x123 = INT64_MIN;
int64_t x125 = -1779777113LL;
int64_t x128 = INT64_MIN;
int64_t x135 = 43443LL;
static int64_t t31 = -7697LL;
int16_t x145 = INT16_MIN;
int8_t x151 = INT8_MAX;
int8_t x152 = 0;
uint8_t x153 = UINT8_MAX;
int64_t x154 = -5505062LL;
int32_t x156 = -2959307;
volatile int32_t x163 = INT32_MAX;
int32_t t37 = -1639;
int32_t x171 = -1;
int32_t t39 = 10226;
uint16_t x177 = 3U;
volatile int16_t x182 = -1;
volatile int32_t x183 = -40666;
volatile int32_t t42 = 172500;
volatile int64_t x185 = -1LL;
int64_t x189 = INT64_MIN;
uint64_t t45 = 6905647LLU;
static volatile uint32_t x209 = UINT32_MAX;
int32_t x210 = -884;
static uint64_t x217 = 1LLU;
uint64_t x219 = 23911851LLU;
uint64_t t50 = 68174829760LLU;
uint32_t x221 = 28025580U;
uint32_t x227 = 661718180U;
volatile int32_t t58 = -619;
uint16_t x255 = 1U;
uint32_t x260 = UINT32_MAX;
uint32_t x261 = 3038U;
static uint8_t x265 = 0U;
volatile int16_t x266 = 5;
volatile uint16_t x268 = UINT16_MAX;
volatile int16_t x273 = 1313;
int32_t x277 = -1;
static int64_t x281 = 1849542034448054009LL;
volatile uint8_t x302 = 7U;
int16_t x306 = INT16_MIN;
volatile int64_t x308 = INT64_MIN;
int16_t x312 = -1;
int8_t x318 = INT8_MIN;
volatile int64_t x319 = INT64_MIN;
int64_t x323 = INT64_MIN;
static int64_t x326 = 153563789956590LL;
int8_t x330 = INT8_MIN;
volatile int64_t x336 = INT64_MIN;
int64_t t78 = 420052556640836389LL;
int8_t x337 = INT8_MIN;
int64_t t79 = -281005965478414LL;
volatile uint64_t x342 = UINT64_MAX;
uint16_t x349 = 0U;
volatile uint64_t x351 = 3552194451951740468LLU;
volatile uint32_t t84 = UINT32_MAX;
int64_t x364 = 169LL;
int32_t x365 = -1;
uint8_t x370 = 17U;
static volatile int32_t t87 = 729;
int32_t x377 = INT32_MIN;
volatile int64_t x379 = -20483252280LL;
int32_t x380 = INT32_MIN;
static volatile int64_t x384 = -1LL;
volatile int64_t t90 = 15433967LL;
static int8_t x386 = INT8_MIN;
volatile uint32_t t92 = 30U;
uint64_t x394 = 2295152LLU;
int32_t x397 = INT32_MIN;
uint16_t x399 = UINT16_MAX;
uint8_t x401 = UINT8_MAX;
int64_t x418 = -1LL;
uint8_t x419 = 98U;
static uint8_t x420 = 3U;
int32_t t99 = -170;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint64_t x2 = 18741902843276008LLU;
	int64_t x3 = -1LL;
	int16_t x4 = -1298;
	int32_t t0 = -151392329;

	t0 = (x1-((x2<=x3)&x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 4U;
	int64_t x6 = INT64_MAX;
	uint16_t x7 = 11U;
	int64_t t1 = -8881487815LL;

	t1 = (x5-((x6<=x7)&x8));

	if (t1 != 4LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 32916991031951LLU;
	volatile int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MAX;
	int32_t x12 = 249;
	volatile uint64_t t2 = 6125555594LLU;

	t2 = (x9-((x10<=x11)&x12));

	if (t2 != 32916991031950LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = UINT8_MAX;
	static int64_t x14 = -454934LL;
	int16_t x15 = INT16_MIN;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 176930;

	t3 = (x13-((x14<=x15)&x16));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int32_t x22 = -1;
	int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MIN;
	int64_t t4 = INT64_MAX;

	t4 = (x21-((x22<=x23)&x24));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t5 = 3157252LL;

	t5 = (x25-((x26<=x27)&x28));

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x29 = -1LL;
	static uint32_t x30 = 20025319U;
	volatile int16_t x31 = INT16_MIN;
	volatile int64_t t6 = 27746736323959177LL;

	t6 = (x29-((x30<=x31)&x32));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MAX;
	int16_t x35 = INT16_MAX;
	static int64_t x36 = -8935202779281639LL;
	volatile int64_t t7 = -15835057490473LL;

	t7 = (x33-((x34<=x35)&x36));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MAX;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 7042757718237LLU;
	int32_t x40 = 95459590;
	volatile int32_t t8 = 1000008359;

	t8 = (x37-((x38<=x39)&x40));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 521829U;
	uint8_t x43 = 0U;
	volatile uint32_t x44 = 17U;
	static uint32_t t9 = 91294U;

	t9 = (x41-((x42<=x43)&x44));

	if (t9 != 521829U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	volatile int32_t x46 = INT32_MIN;
	volatile int8_t x47 = -1;
	static int8_t x48 = INT8_MIN;
	int32_t t10 = 183051539;

	t10 = (x45-((x46<=x47)&x48));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int32_t x50 = 2211;
	volatile uint8_t x51 = UINT8_MAX;
	volatile int64_t x52 = -507127779LL;
	int64_t t11 = 11LL;

	t11 = (x49-((x50<=x51)&x52));

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x55 = INT32_MAX;
	static int16_t x56 = INT16_MIN;

	t12 = (x53-((x54<=x55)&x56));

	if (t12 != 64) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = INT32_MIN;
	uint32_t x59 = 336U;
	uint32_t x60 = 204990189U;
	volatile uint32_t t13 = 5562U;

	t13 = (x57-((x58<=x59)&x60));

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	uint8_t x62 = UINT8_MAX;
	volatile int16_t x64 = -29;
	volatile int64_t t14 = 63432958078147LL;

	t14 = (x61-((x62<=x63)&x64));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x69 = 589875958860LLU;
	int64_t x70 = -108LL;
	int64_t x71 = INT64_MIN;
	int16_t x72 = -591;
	static volatile uint64_t t15 = 19330438101LLU;

	t15 = (x69-((x70<=x71)&x72));

	if (t15 != 589875958860LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	volatile int16_t x75 = INT16_MIN;
	uint64_t x76 = UINT64_MAX;
	static uint64_t t16 = UINT64_MAX;

	t16 = (x73-((x74<=x75)&x76));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x77 = 5739LLU;
	int8_t x78 = INT8_MIN;
	uint32_t x80 = 1868026U;
	volatile uint64_t t17 = 3517LLU;

	t17 = (x77-((x78<=x79)&x80));

	if (t17 != 5739LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 1U;
	int32_t x82 = INT32_MAX;
	static uint64_t x83 = 515126969740193173LLU;
	int8_t x84 = -38;
	volatile int32_t t18 = 0;

	t18 = (x81-((x82<=x83)&x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = 4U;
	int16_t x86 = INT16_MIN;
	volatile int8_t x87 = -5;
	static volatile int64_t t19 = -212415229337LL;

	t19 = (x85-((x86<=x87)&x88));

	if (t19 != 4LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int16_t x90 = INT16_MAX;
	uint64_t x92 = UINT64_MAX;
	uint64_t t20 = 0LLU;

	t20 = (x89-((x90<=x91)&x92));

	if (t20 != 65534LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x95 = -4542LL;
	int32_t x96 = INT32_MIN;

	t21 = (x93-((x94<=x95)&x96));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	uint32_t x98 = UINT32_MAX;
	uint16_t x99 = 9U;
	int16_t x100 = -355;
	volatile int32_t t22 = 125206;

	t22 = (x97-((x98<=x99)&x100));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = INT32_MIN;
	uint32_t x102 = UINT32_MAX;
	static volatile int32_t x103 = -1;
	uint64_t x104 = 4121191308337LLU;
	uint64_t t23 = 444068662820LLU;

	t23 = (x101-((x102<=x103)&x104));

	if (t23 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	int64_t x107 = -303756987LL;
	volatile uint64_t x108 = 31284439001582LLU;
	volatile uint64_t t24 = 164864563155LLU;

	t24 = (x105-((x106<=x107)&x108));

	if (t24 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = INT64_MIN;

	t25 = (x109-((x110<=x111)&x112));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 149;
	volatile uint8_t x114 = 31U;
	uint32_t x116 = 5U;
	static uint32_t t26 = 14468U;

	t26 = (x113-((x114<=x115)&x116));

	if (t26 != 148U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x119 = INT64_MIN;
	uint32_t x120 = 45823U;

	t27 = (x117-((x118<=x119)&x120));

	if (t27 != 65535U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x122 = INT32_MIN;
	volatile int8_t x124 = -1;
	volatile int64_t t28 = 22786667LL;

	t28 = (x121-((x122<=x123)&x124));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x126 = 8008920333240LLU;
	int64_t x127 = 62LL;
	static int64_t t29 = -135LL;

	t29 = (x125-((x126<=x127)&x128));

	if (t29 != -1779777113LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MAX;
	int8_t x134 = -1;
	int32_t x136 = -1;
	int32_t t30 = -346;

	t30 = (x133-((x134<=x135)&x136));

	if (t30 != 2147483646) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	volatile int64_t x138 = INT64_MAX;
	int32_t x139 = -1;
	static uint32_t x140 = 10U;

	t31 = (x137-((x138<=x139)&x140));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MAX;
	uint16_t x142 = UINT16_MAX;
	static int16_t x143 = -1;
	volatile int8_t x144 = 38;
	static volatile int32_t t32 = 1;

	t32 = (x141-((x142<=x143)&x144));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MAX;
	volatile int32_t t33 = 27472238;

	t33 = (x145-((x146<=x147)&x148));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x149 = -1131337;
	uint32_t x150 = UINT32_MAX;
	volatile int32_t t34 = 26;

	t34 = (x149-((x150<=x151)&x152));

	if (t34 != -1131337) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x155 = UINT16_MAX;
	volatile int32_t t35 = 125709428;

	t35 = (x153-((x154<=x155)&x156));

	if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x157 = -135310LL;
	int16_t x158 = INT16_MIN;
	static uint16_t x159 = 0U;
	static volatile uint16_t x160 = 7U;
	volatile int64_t t36 = -7785480119LL;

	t36 = (x157-((x158<=x159)&x160));

	if (t36 != -135311LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	volatile uint8_t x164 = UINT8_MAX;

	t37 = (x161-((x162<=x163)&x164));

	if (t37 != 32766) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MAX;
	static uint64_t x167 = 321803776125LLU;
	volatile uint64_t x168 = 135165333061593639LLU;
	volatile uint64_t t38 = 436148LLU;

	t38 = (x165-((x166<=x167)&x168));

	if (t38 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x169 = 11U;
	int16_t x170 = 76;
	uint16_t x172 = UINT16_MAX;

	t39 = (x169-((x170<=x171)&x172));

	if (t39 != 11) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x173 = 26U;
	int8_t x174 = INT8_MIN;
	static uint32_t x175 = 3361U;
	int64_t x176 = 766492313641002LL;
	volatile int64_t t40 = -51175454LL;

	t40 = (x173-((x174<=x175)&x176));

	if (t40 != 26LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x178 = -1;
	int64_t x179 = INT64_MIN;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t41 = -865;

	t41 = (x177-((x178<=x179)&x180));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	int16_t x184 = 2;

	t42 = (x181-((x182<=x183)&x184));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	uint16_t x188 = 3265U;
	volatile int64_t t43 = -114960LL;

	t43 = (x185-((x186<=x187)&x188));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = INT8_MAX;
	volatile int32_t x191 = INT32_MAX;
	static int64_t x192 = INT64_MIN;
	static volatile int64_t t44 = INT64_MIN;

	t44 = (x189-((x190<=x191)&x192));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x193 = 2650576234062013590LLU;
	uint16_t x194 = 17699U;
	int64_t x195 = -1LL;
	int16_t x196 = -453;

	t45 = (x193-((x194<=x195)&x196));

	if (t45 != 2650576234062013590LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = UINT8_MAX;
	static int8_t x198 = INT8_MIN;
	static int64_t x199 = INT64_MIN;
	uint32_t x200 = 81910957U;
	static uint32_t t46 = 43U;

	t46 = (x197-((x198<=x199)&x200));

	if (t46 != 255U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x205 = -1;
	int8_t x206 = -1;
	volatile uint64_t x207 = UINT64_MAX;
	int8_t x208 = INT8_MAX;
	int32_t t47 = -4;

	t47 = (x205-((x206<=x207)&x208));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x211 = 8095924410LL;
	int32_t x212 = INT32_MIN;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (x209-((x210<=x211)&x212));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = 6;
	int8_t x214 = -1;
	int16_t x215 = -1;
	int8_t x216 = -1;
	static int32_t t49 = -580019;

	t49 = (x213-((x214<=x215)&x216));

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x218 = 2069720LL;
	int32_t x220 = 138559;

	t50 = (x217-((x218<=x219)&x220));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x222 = INT64_MIN;
	int8_t x223 = 0;
	int32_t x224 = -5395;
	volatile uint32_t t51 = 673846459U;

	t51 = (x221-((x222<=x223)&x224));

	if (t51 != 28025579U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x225 = INT64_MIN;
	static uint32_t x226 = UINT32_MAX;
	int32_t x228 = INT32_MIN;
	int64_t t52 = INT64_MIN;

	t52 = (x225-((x226<=x227)&x228));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = -1LL;
	static int32_t x231 = INT32_MIN;
	volatile int8_t x232 = INT8_MIN;
	int64_t t53 = INT64_MIN;

	t53 = (x229-((x230<=x231)&x232));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = -1;
	static volatile uint8_t x234 = 42U;
	uint32_t x235 = UINT32_MAX;
	static volatile int64_t x236 = INT64_MIN;
	int64_t t54 = -65988LL;

	t54 = (x233-((x234<=x235)&x236));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x238 = 27;
	int8_t x239 = -4;
	int16_t x240 = 271;
	uint32_t t55 = UINT32_MAX;

	t55 = (x237-((x238<=x239)&x240));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MAX;
	volatile int8_t x242 = -1;
	uint8_t x243 = 3U;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t56 = 679449664086LLU;

	t56 = (x241-((x242<=x243)&x244));

	if (t56 != 126LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = INT32_MAX;
	volatile uint32_t x246 = UINT32_MAX;
	int16_t x247 = INT16_MIN;
	static uint8_t x248 = UINT8_MAX;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x245-((x246<=x247)&x248));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = 697075;
	static uint8_t x250 = 11U;
	static int64_t x251 = -1LL;
	volatile int16_t x252 = -1;

	t58 = (x249-((x250<=x251)&x252));

	if (t58 != 697075) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = -484700LL;
	int8_t x254 = 19;
	int8_t x256 = INT8_MAX;
	volatile int64_t t59 = 6441143279325LL;

	t59 = (x253-((x254<=x255)&x256));

	if (t59 != -484700LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = 41;
	uint32_t x258 = UINT32_MAX;
	uint32_t x259 = 720675U;
	volatile uint32_t t60 = 14557U;

	t60 = (x257-((x258<=x259)&x260));

	if (t60 != 41U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x262 = INT64_MAX;
	int16_t x263 = INT16_MIN;
	volatile uint32_t x264 = 2221U;
	uint32_t t61 = 0U;

	t61 = (x261-((x262<=x263)&x264));

	if (t61 != 3038U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x267 = 6724518231LLU;
	int32_t t62 = 26000;

	t62 = (x265-((x266<=x267)&x268));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MAX;
	int8_t x271 = INT8_MAX;
	int8_t x272 = INT8_MIN;
	static volatile int64_t t63 = INT64_MIN;

	t63 = (x269-((x270<=x271)&x272));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x274 = 9U;
	int16_t x275 = INT16_MIN;
	volatile uint8_t x276 = 9U;
	int32_t t64 = 58282075;

	t64 = (x273-((x274<=x275)&x276));

	if (t64 != 1313) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	int8_t x280 = -1;
	int32_t t65 = 733767;

	t65 = (x277-((x278<=x279)&x280));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x282 = 0U;
	int32_t x283 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;
	static int64_t t66 = -1806LL;

	t66 = (x281-((x282<=x283)&x284));

	if (t66 != 1849542034448054008LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = 3;
	static uint32_t x286 = UINT32_MAX;
	static int8_t x287 = INT8_MIN;
	static int64_t x288 = -1LL;
	volatile int64_t t67 = 0LL;

	t67 = (x285-((x286<=x287)&x288));

	if (t67 != 3LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x289 = 34U;
	volatile int8_t x290 = -1;
	static int16_t x291 = 245;
	static volatile uint32_t x292 = 81390U;
	volatile uint32_t t68 = 3120359U;

	t68 = (x289-((x290<=x291)&x292));

	if (t68 != 34U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = -1;
	int8_t x298 = -1;
	int16_t x299 = -1;
	int16_t x300 = -1;
	int32_t t69 = 390500;

	t69 = (x297-((x298<=x299)&x300));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x301 = INT8_MIN;
	volatile int16_t x303 = -1;
	volatile uint32_t x304 = 2U;
	static uint32_t t70 = 800U;

	t70 = (x301-((x302<=x303)&x304));

	if (t70 != 4294967168U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = -2003;
	uint32_t x307 = 4068U;
	int64_t t71 = -32617572432329975LL;

	t71 = (x305-((x306<=x307)&x308));

	if (t71 != -2003LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = -1;
	int32_t x310 = INT32_MIN;
	volatile int32_t x311 = -1;
	volatile int32_t t72 = 19;

	t72 = (x309-((x310<=x311)&x312));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MAX;
	int32_t x314 = -1;
	int64_t x315 = INT64_MAX;
	uint32_t x316 = 2U;
	volatile uint32_t t73 = 16512U;

	t73 = (x313-((x314<=x315)&x316));

	if (t73 != 127U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x317 = INT8_MAX;
	static int16_t x320 = INT16_MIN;
	int32_t t74 = 523;

	t74 = (x317-((x318<=x319)&x320));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x321 = INT32_MIN;
	volatile uint16_t x322 = 4109U;
	volatile int8_t x324 = -60;
	static volatile int32_t t75 = INT32_MIN;

	t75 = (x321-((x322<=x323)&x324));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x325 = 7;
	uint8_t x327 = UINT8_MAX;
	int16_t x328 = 117;
	int32_t t76 = 8591577;

	t76 = (x325-((x326<=x327)&x328));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x329 = 21252LLU;
	uint16_t x331 = UINT16_MAX;
	static int8_t x332 = INT8_MIN;
	static uint64_t t77 = 55746850LLU;

	t77 = (x329-((x330<=x331)&x332));

	if (t77 != 21252LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 3U;
	static int32_t x334 = INT32_MIN;
	uint8_t x335 = 0U;

	t78 = (x333-((x334<=x335)&x336));

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x338 = UINT16_MAX;
	uint32_t x339 = 296941U;
	volatile int64_t x340 = -1LL;

	t79 = (x337-((x338<=x339)&x340));

	if (t79 != -129LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = -5634;
	int8_t x343 = INT8_MAX;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t80 = 214949651;

	t80 = (x341-((x342<=x343)&x344));

	if (t80 != -5634) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = -11341;
	int64_t x346 = INT64_MIN;
	volatile uint16_t x347 = 3U;
	volatile int32_t x348 = INT32_MIN;
	static volatile int32_t t81 = -61555;

	t81 = (x345-((x346<=x347)&x348));

	if (t81 != -11341) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x350 = UINT32_MAX;
	int16_t x352 = INT16_MAX;
	int32_t t82 = 0;

	t82 = (x349-((x350<=x351)&x352));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x353 = 63U;
	static uint32_t x354 = UINT32_MAX;
	int8_t x355 = -1;
	int16_t x356 = INT16_MIN;
	volatile int32_t t83 = -60;

	t83 = (x353-((x354<=x355)&x356));

	if (t83 != 63) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x357 = UINT32_MAX;
	static int8_t x358 = -49;
	int64_t x359 = INT64_MIN;
	static uint16_t x360 = 21045U;

	t84 = (x357-((x358<=x359)&x360));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x361 = -1;
	static volatile int64_t x362 = 10046595LL;
	static uint8_t x363 = 17U;
	int64_t t85 = 467LL;

	t85 = (x361-((x362<=x363)&x364));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x366 = -59;
	int32_t x367 = INT32_MIN;
	int16_t x368 = 1;
	static volatile int32_t t86 = 905556831;

	t86 = (x365-((x366<=x367)&x368));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x369 = UINT16_MAX;
	uint8_t x371 = UINT8_MAX;
	static volatile int16_t x372 = INT16_MIN;

	t87 = (x369-((x370<=x371)&x372));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x373 = 15U;
	int16_t x374 = -1;
	int32_t x375 = -1;
	volatile int32_t x376 = INT32_MAX;
	volatile int32_t t88 = -3694557;

	t88 = (x373-((x374<=x375)&x376));

	if (t88 != 14) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x378 = INT64_MIN;
	volatile int32_t t89 = INT32_MIN;

	t89 = (x377-((x378<=x379)&x380));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = -1;
	int8_t x382 = INT8_MAX;
	static volatile int32_t x383 = -88;

	t90 = (x381-((x382<=x383)&x384));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 18U;
	int32_t x387 = -1967916;
	uint16_t x388 = UINT16_MAX;
	static int32_t t91 = 3;

	t91 = (x385-((x386<=x387)&x388));

	if (t91 != 18) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 1078572U;
	uint64_t x390 = UINT64_MAX;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = -9;

	t92 = (x389-((x390<=x391)&x392));

	if (t92 != 1078572U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = INT32_MAX;
	int64_t x395 = INT64_MIN;
	static int64_t x396 = 1446895LL;
	volatile int64_t t93 = 1286LL;

	t93 = (x393-((x394<=x395)&x396));

	if (t93 != 2147483646LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x398 = 12819;
	int64_t x400 = INT64_MIN;
	volatile int64_t t94 = -1788450LL;

	t94 = (x397-((x398<=x399)&x400));

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x402 = 27902905U;
	uint64_t x403 = 57079620LLU;
	int8_t x404 = INT8_MIN;
	volatile int32_t t95 = 1608975;

	t95 = (x401-((x402<=x403)&x404));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x405 = 69523726364LLU;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = -1;
	volatile uint64_t t96 = 33544598810LLU;

	t96 = (x405-((x406<=x407)&x408));

	if (t96 != 69523726363LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MIN;
	int16_t x411 = -1;
	int8_t x412 = INT8_MIN;
	volatile int32_t t97 = 2;

	t97 = (x409-((x410<=x411)&x412));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x413 = INT16_MIN;
	volatile int8_t x414 = -4;
	int64_t x415 = INT64_MIN;
	uint8_t x416 = 2U;
	int32_t t98 = 33903;

	t98 = (x413-((x414<=x415)&x416));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x417 = INT8_MIN;

	t99 = (x417-((x418<=x419)&x420));

	if (t99 != -129) { NG(); } else { ; }
	
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

