#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
uint64_t x2 = 2LLU;
static int32_t x4 = -5;
static int64_t t1 = -2LL;
uint16_t x10 = UINT16_MAX;
static int16_t x20 = -1;
int16_t x22 = INT16_MIN;
int16_t x28 = INT16_MIN;
static volatile int32_t t6 = -17;
int8_t x32 = INT8_MIN;
int64_t x33 = -1LL;
int64_t t8 = -75172679LL;
int8_t x37 = -2;
static volatile int32_t t9 = 9;
int32_t x50 = -1;
int32_t x51 = INT32_MIN;
uint32_t x54 = 93U;
int64_t x55 = -186LL;
int8_t x60 = INT8_MIN;
uint64_t x61 = 505024290959LLU;
int32_t t15 = 69979;
int16_t x68 = 235;
static uint8_t x69 = 6U;
int32_t x71 = 72;
static int64_t x72 = -462LL;
int64_t x73 = INT64_MIN;
volatile uint32_t x75 = 15U;
int8_t x79 = INT8_MAX;
uint32_t t19 = UINT32_MAX;
int64_t x81 = INT64_MIN;
volatile int8_t x83 = -1;
static volatile int32_t t20 = -2889935;
int64_t x85 = INT64_MAX;
int32_t t22 = 3935;
int32_t x98 = 113771;
static int64_t x99 = 7728838860837LL;
int64_t t24 = -5LL;
static int8_t x101 = -1;
volatile int16_t x102 = INT16_MIN;
volatile int16_t x103 = INT16_MAX;
int16_t x110 = INT16_MIN;
volatile uint32_t t27 = UINT32_MAX;
static volatile int32_t x116 = INT32_MIN;
int16_t x118 = INT16_MAX;
int64_t x120 = -3216983844598660345LL;
volatile int32_t x122 = INT32_MAX;
volatile int8_t x125 = INT8_MIN;
uint32_t x130 = 362U;
static volatile int64_t t32 = 3101LL;
int64_t x135 = 244484568721470603LL;
uint16_t x137 = 11U;
uint64_t x138 = 0LLU;
int64_t t35 = 3453908290690LL;
uint64_t x148 = 12239504648126575LLU;
uint64_t t36 = UINT64_MAX;
uint16_t x156 = UINT16_MAX;
static volatile int32_t t38 = -10814591;
volatile int16_t x163 = INT16_MIN;
int32_t t40 = 26;
static volatile int8_t x166 = INT8_MIN;
int32_t x173 = -14573;
uint8_t x175 = 4U;
int32_t x177 = 249;
int32_t x179 = 3;
int16_t x186 = -1;
int64_t t46 = -772752982LL;
static int64_t x191 = INT64_MIN;
uint8_t x192 = UINT8_MAX;
static volatile int64_t t47 = -3391254514LL;
int8_t x195 = 29;
volatile int32_t t48 = -218428;
static volatile int64_t x198 = INT64_MIN;
int64_t x201 = INT64_MIN;
static int16_t x205 = INT16_MIN;
int32_t x206 = 45780;
uint16_t x212 = 8U;
int32_t x213 = INT32_MAX;
static int64_t x216 = INT64_MIN;
int16_t x218 = INT16_MIN;
static volatile int32_t t54 = -1945;
static int8_t x221 = INT8_MIN;
uint64_t x235 = 528237729588865LLU;
uint32_t x241 = 4U;
uint16_t x243 = UINT16_MAX;
static volatile int32_t t60 = 8;
volatile int32_t t61 = INT32_MAX;
int32_t x252 = INT32_MIN;
volatile uint16_t x254 = UINT16_MAX;
int64_t x256 = INT64_MIN;
static volatile int8_t x257 = 1;
int8_t x273 = INT8_MAX;
int16_t x275 = INT16_MAX;
int64_t x276 = INT64_MIN;
volatile uint64_t x278 = 1898107094724LLU;
uint64_t x279 = 8596251333354578LLU;
static volatile int32_t x286 = 127141;
int8_t x291 = INT8_MIN;
int64_t x292 = INT64_MIN;
int16_t x298 = INT16_MIN;
static int8_t x313 = INT8_MIN;
static volatile int64_t x318 = -3112999929LL;
int32_t x321 = INT32_MAX;
uint8_t x324 = 5U;
volatile int32_t t81 = -3712184;
static int16_t x331 = INT16_MIN;
static volatile uint64_t x340 = 18LLU;
static int32_t x351 = INT32_MAX;
volatile int32_t t87 = 103;
volatile int64_t t88 = 1308260727246769LL;
int64_t x358 = INT64_MAX;
uint32_t x362 = 15144956U;
int64_t x364 = -1LL;
int64_t t90 = -100529609857LL;
static int16_t x368 = INT16_MIN;
int64_t x372 = 373846358LL;
volatile int8_t x378 = 5;
int8_t x380 = 2;
volatile int64_t x382 = -1LL;
int64_t x387 = INT64_MAX;
int16_t x388 = -75;
int64_t t96 = -33LL;
uint16_t x400 = UINT16_MAX;
volatile uint32_t t99 = 4401U;


void f0(void) {
	int16_t x3 = INT16_MIN;
	static int32_t t0 = -205;

	t0 = (((x1==x2)|x3)|x4);

	if (t0 != -5) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int8_t x6 = 42;
	static int64_t x7 = -191LL;
	uint32_t x8 = 3178765U;

	t1 = (((x5==x6)|x7)|x8);

	if (t1 != -179LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	static uint16_t x12 = UINT16_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = (((x9==x10)|x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	uint8_t x15 = 8U;
	uint32_t x16 = 2728U;
	static uint32_t t3 = 200014233U;

	t3 = (((x13==x14)|x15)|x16);

	if (t3 != 2728U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	static int64_t x18 = INT64_MIN;
	int16_t x19 = -7271;
	static int32_t t4 = 10781;

	t4 = (((x17==x18)|x19)|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 6;
	int64_t x23 = -1LL;
	uint16_t x24 = 1570U;
	int64_t t5 = 720904186375LL;

	t5 = (((x21==x22)|x23)|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 803567465337270685LLU;
	int8_t x26 = -1;
	static volatile int16_t x27 = INT16_MIN;

	t6 = (((x25==x26)|x27)|x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static int64_t x30 = INT64_MIN;
	volatile int32_t x31 = INT32_MIN;
	int32_t t7 = 81;

	t7 = (((x29==x30)|x31)|x32);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 27;
	volatile int64_t x35 = INT64_MIN;
	int64_t x36 = -1LL;

	t8 = (((x33==x34)|x35)|x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 76297467U;
	int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MIN;

	t9 = (((x37==x38)|x39)|x40);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	volatile int32_t x42 = INT32_MIN;
	volatile uint8_t x43 = 37U;
	static volatile uint16_t x44 = 5U;
	volatile int32_t t10 = 896;

	t10 = (((x41==x42)|x43)|x44);

	if (t10 != 37) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 165754165U;
	int8_t x46 = 31;
	static uint16_t x47 = 647U;
	int32_t x48 = -1;
	static volatile int32_t t11 = -28;

	t11 = (((x45==x46)|x47)|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = -751576908;

	t12 = (((x49==x50)|x51)|x52);

	if (t12 != -2147483393) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 7932742079LL;

	t13 = (((x53==x54)|x55)|x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -42;
	int8_t x58 = INT8_MAX;
	static volatile int16_t x59 = INT16_MIN;
	int32_t t14 = -285927981;

	t14 = (((x57==x58)|x59)|x60);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1;
	volatile int8_t x63 = -1;
	int32_t x64 = -1;

	t15 = (((x61==x62)|x63)|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 57U;
	int16_t x66 = INT16_MIN;
	volatile int16_t x67 = -1;
	static int32_t t16 = 26987;

	t16 = (((x65==x66)|x67)|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	int64_t t17 = -281825630464548433LL;

	t17 = (((x69==x70)|x71)|x72);

	if (t17 != -390LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -2190887490675774067LL;

	t18 = (((x73==x74)|x75)|x76);

	if (t18 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	int8_t x78 = INT8_MIN;
	uint32_t x80 = UINT32_MAX;

	t19 = (((x77==x78)|x79)|x80);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = -3160114;
	volatile int16_t x84 = -212;

	t20 = (((x81==x82)|x83)|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -1;
	static volatile int8_t x87 = -1;
	uint32_t x88 = 31115U;
	static volatile uint32_t t21 = UINT32_MAX;

	t21 = (((x85==x86)|x87)|x88);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -13;
	int32_t x90 = INT32_MAX;
	int32_t x91 = -1;
	uint16_t x92 = 2608U;

	t22 = (((x89==x90)|x91)|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MAX;
	static int32_t t23 = -215;

	t23 = (((x93==x94)|x95)|x96);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -1;
	int16_t x100 = INT16_MIN;

	t24 = (((x97==x98)|x99)|x100);

	if (t24 != -8155LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x104 = -1;
	int32_t t25 = 132;

	t25 = (((x101==x102)|x103)|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	volatile int32_t x106 = INT32_MIN;
	int32_t x107 = 24;
	int8_t x108 = -1;
	int32_t t26 = 4923447;

	t26 = (((x105==x106)|x107)|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 15809;
	int16_t x111 = -35;
	uint32_t x112 = UINT32_MAX;

	t27 = (((x109==x110)|x111)|x112);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	uint8_t x114 = 2U;
	int64_t x115 = INT64_MAX;
	int64_t t28 = 1373555LL;

	t28 = (((x113==x114)|x115)|x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	int16_t x119 = INT16_MIN;
	volatile int64_t t29 = 7LL;

	t29 = (((x117==x118)|x119)|x120);

	if (t29 != -15609LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = UINT64_MAX;
	volatile int8_t x123 = INT8_MIN;
	uint64_t x124 = 29011961450560326LLU;
	volatile uint64_t t30 = 1719LLU;

	t30 = (((x121==x122)|x123)|x124);

	if (t30 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = -1;
	int16_t x127 = -1;
	volatile int16_t x128 = 864;
	volatile int32_t t31 = 54196;

	t31 = (((x125==x126)|x127)|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = UINT64_MAX;
	int16_t x131 = 0;
	static int64_t x132 = 14461294556LL;

	t32 = (((x129==x130)|x131)|x132);

	if (t32 != 14461294556LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 9658;
	int64_t x134 = -1LL;
	int32_t x136 = INT32_MIN;
	volatile int64_t t33 = -764798610748752LL;

	t33 = (((x133==x134)|x135)|x136);

	if (t33 != -4901749LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x139 = 61U;
	static int8_t x140 = INT8_MAX;
	static volatile int32_t t34 = -125998;

	t34 = (((x137==x138)|x139)|x140);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 275560943421LLU;
	static uint8_t x142 = 0U;
	int64_t x143 = 802641LL;
	volatile uint16_t x144 = UINT16_MAX;

	t35 = (((x141==x142)|x143)|x144);

	if (t35 != 851967LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 2295;
	static int64_t x146 = INT64_MIN;
	int32_t x147 = -1;

	t36 = (((x145==x146)|x147)|x148);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 27795304LLU;
	uint8_t x150 = UINT8_MAX;
	int8_t x151 = -2;
	volatile int16_t x152 = INT16_MIN;
	static volatile int32_t t37 = -219268828;

	t37 = (((x149==x150)|x151)|x152);

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 13285744863LLU;
	static int32_t x154 = INT32_MAX;
	int16_t x155 = INT16_MIN;

	t38 = (((x153==x154)|x155)|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	volatile int64_t x158 = INT64_MAX;
	uint16_t x159 = 2U;
	volatile int8_t x160 = INT8_MIN;
	int32_t t39 = -95055074;

	t39 = (((x157==x158)|x159)|x160);

	if (t39 != -126) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int16_t x162 = INT16_MIN;
	volatile uint16_t x164 = 15U;

	t40 = (((x161==x162)|x163)|x164);

	if (t40 != -32753) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 56;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 30U;
	uint32_t t41 = 30472279U;

	t41 = (((x165==x166)|x167)|x168);

	if (t41 != 4294967198U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = 0U;
	uint64_t x170 = 299LLU;
	int32_t x171 = -1015583009;
	uint64_t x172 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (((x169==x170)|x171)|x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MAX;
	volatile uint32_t x176 = UINT32_MAX;
	uint32_t t43 = UINT32_MAX;

	t43 = (((x173==x174)|x175)|x176);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = 18;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = 1032619168;

	t44 = (((x177==x178)|x179)|x180);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1583;
	int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MIN;
	int64_t t45 = -16816844LL;

	t45 = (((x181==x182)|x183)|x184);

	if (t45 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	int64_t x187 = -1LL;
	int64_t x188 = -7090578LL;

	t46 = (((x185==x186)|x187)|x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;

	t47 = (((x189==x190)|x191)|x192);

	if (t47 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint32_t x194 = 83382604U;
	int8_t x196 = INT8_MIN;

	t48 = (((x193==x194)|x195)|x196);

	if (t48 != -99) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 2833U;
	int32_t x199 = 1865917;
	int32_t x200 = 14343242;
	int32_t t49 = 115144735;

	t49 = (((x197==x198)|x199)|x200);

	if (t49 != 14613759) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x202 = INT16_MAX;
	static int32_t x203 = INT32_MIN;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -2251511;

	t50 = (((x201==x202)|x203)|x204);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x207 = -406821157LL;
	int64_t x208 = INT64_MIN;
	int64_t t51 = -284941257LL;

	t51 = (((x205==x206)|x207)|x208);

	if (t51 != -406821157LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = 1676628275232986LLU;
	int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MIN;
	int32_t t52 = -43336;

	t52 = (((x209==x210)|x211)|x212);

	if (t52 != -120) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	uint32_t x215 = 1935U;
	int64_t t53 = 996659579644682337LL;

	t53 = (((x213==x214)|x215)|x216);

	if (t53 != -9223372036854773873LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	volatile int8_t x219 = -1;
	uint16_t x220 = 13137U;

	t54 = (((x217==x218)|x219)|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 348457337LLU;
	uint16_t x223 = 96U;
	int64_t x224 = INT64_MIN;
	int64_t t55 = -78184155220LL;

	t55 = (((x221==x222)|x223)|x224);

	if (t55 != -9223372036854775712LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	volatile int16_t x227 = INT16_MAX;
	uint8_t x228 = 0U;
	static int32_t t56 = 490;

	t56 = (((x225==x226)|x227)|x228);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	volatile int32_t x230 = 7462;
	static volatile int8_t x231 = -2;
	uint32_t x232 = 732314000U;
	uint32_t t57 = 13U;

	t57 = (((x229==x230)|x231)|x232);

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = 0U;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x233==x234)|x235)|x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -1LL;
	volatile uint64_t x238 = 2213214LLU;
	int64_t x239 = -1LL;
	static int32_t x240 = -92;
	static int64_t t59 = 26774346927LL;

	t59 = (((x237==x238)|x239)|x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x242 = INT16_MIN;
	volatile int16_t x244 = INT16_MAX;

	t60 = (((x241==x242)|x243)|x244);

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	int16_t x246 = -1;
	int32_t x247 = INT32_MAX;
	int32_t x248 = 49673375;

	t61 = (((x245==x246)|x247)|x248);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MAX;
	static volatile int16_t x250 = INT16_MIN;
	volatile uint8_t x251 = 0U;
	volatile int32_t t62 = INT32_MIN;

	t62 = (((x249==x250)|x251)|x252);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	static int32_t x255 = INT32_MIN;
	volatile int64_t t63 = -32932LL;

	t63 = (((x253==x254)|x255)|x256);

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MIN;
	static volatile int16_t x259 = INT16_MIN;
	static volatile int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -5140;

	t64 = (((x257==x258)|x259)|x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	static volatile uint16_t x262 = 5U;
	static int32_t x263 = INT32_MAX;
	int16_t x264 = -1;
	volatile int32_t t65 = 530876764;

	t65 = (((x261==x262)|x263)|x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 809219979529943LLU;
	volatile int8_t x267 = -8;
	volatile int32_t x268 = -1;
	volatile int32_t t66 = -2464;

	t66 = (((x265==x266)|x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	volatile int8_t x270 = INT8_MAX;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -12913518;

	t67 = (((x269==x270)|x271)|x272);

	if (t67 != -2147483393) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	volatile int64_t t68 = -1596613258LL;

	t68 = (((x273==x274)|x275)|x276);

	if (t68 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	uint16_t x280 = UINT16_MAX;
	uint64_t t69 = 22LLU;

	t69 = (((x277==x278)|x279)|x280);

	if (t69 != 8596251333361663LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	int32_t x282 = INT32_MAX;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MIN;
	static volatile int64_t t70 = 149499046975LL;

	t70 = (((x281==x282)|x283)|x284);

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 5U;
	uint64_t x287 = 167573133092LLU;
	int16_t x288 = INT16_MIN;
	uint64_t t71 = 263108094130057708LLU;

	t71 = (((x285==x286)|x287)|x288);

	if (t71 != 18446744073709524772LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	uint16_t x290 = 58U;
	static volatile int64_t t72 = 24910835LL;

	t72 = (((x289==x290)|x291)|x292);

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (((x293==x294)|x295)|x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 50U;
	uint8_t x299 = 40U;
	volatile int16_t x300 = -1;
	volatile int32_t t74 = -188402;

	t74 = (((x297==x298)|x299)|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 12487;
	volatile int8_t x302 = -1;
	volatile uint64_t x303 = 4LLU;
	int32_t x304 = -1;
	uint64_t t75 = UINT64_MAX;

	t75 = (((x301==x302)|x303)|x304);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = -8428593589486601LL;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = 61;
	static uint64_t x308 = UINT64_MAX;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (((x305==x306)|x307)|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MAX;
	int64_t x311 = -1484756LL;
	int8_t x312 = INT8_MIN;
	static int64_t t77 = 2LL;

	t77 = (((x309==x310)|x311)|x312);

	if (t77 != -84LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x314 = INT32_MAX;
	volatile int64_t x315 = -1LL;
	uint64_t x316 = 43185779246840056LLU;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (((x313==x314)|x315)|x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 583;
	uint64_t x319 = UINT64_MAX;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (((x317==x318)|x319)|x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = UINT32_MAX;
	int8_t x323 = INT8_MAX;
	int32_t t80 = 1;

	t80 = (((x321==x322)|x323)|x324);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 99796764616313LLU;
	uint8_t x326 = UINT8_MAX;
	static volatile int8_t x327 = -63;
	volatile int32_t x328 = -1;

	t81 = (((x325==x326)|x327)|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -472636;
	uint8_t x330 = 16U;
	static int32_t x332 = 60;
	int32_t t82 = -63030371;

	t82 = (((x329==x330)|x331)|x332);

	if (t82 != -32708) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = UINT64_MAX;
	uint32_t x334 = 236U;
	static int32_t x335 = 11171756;
	volatile int32_t x336 = INT32_MIN;
	int32_t t83 = -34890094;

	t83 = (((x333==x334)|x335)|x336);

	if (t83 != -2136311892) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 20733196LL;
	int8_t x338 = INT8_MIN;
	volatile int16_t x339 = -1;
	uint64_t t84 = UINT64_MAX;

	t84 = (((x337==x338)|x339)|x340);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	static uint8_t x342 = UINT8_MAX;
	static int32_t x343 = INT32_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (((x341==x342)|x343)|x344);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 576667;
	int64_t x346 = INT64_MIN;
	volatile int64_t x347 = 222LL;
	uint64_t x348 = 712748LLU;
	volatile uint64_t t86 = 9088293589494688LLU;

	t86 = (((x345==x346)|x347)|x348);

	if (t86 != 712958LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -19522513;
	uint16_t x350 = 269U;
	int16_t x352 = -1;

	t87 = (((x349==x350)|x351)|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MIN;
	volatile int8_t x356 = -29;

	t88 = (((x353==x354)|x355)|x356);

	if (t88 != -29LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	uint16_t x359 = UINT16_MAX;
	int32_t x360 = -1;
	static volatile int32_t t89 = -180298;

	t89 = (((x357==x358)|x359)|x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	int16_t x363 = INT16_MIN;

	t90 = (((x361==x362)|x363)|x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 312;
	int16_t x366 = -539;
	static uint8_t x367 = 59U;
	static volatile int32_t t91 = 18233733;

	t91 = (((x365==x366)|x367)|x368);

	if (t91 != -32709) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 27;
	static int32_t x370 = 0;
	int32_t x371 = -154105;
	int64_t t92 = 1048065767042437LL;

	t92 = (((x369==x370)|x371)|x372);

	if (t92 != -133289LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 2561795LLU;
	uint32_t x374 = 1513U;
	int8_t x375 = INT8_MIN;
	uint32_t x376 = 722625811U;
	volatile uint32_t t93 = 21002U;

	t93 = (((x373==x374)|x375)|x376);

	if (t93 != 4294967187U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = UINT64_MAX;
	volatile uint16_t x379 = 1699U;
	static int32_t t94 = 98270147;

	t94 = (((x377==x378)|x379)|x380);

	if (t94 != 1699) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	int8_t x383 = INT8_MAX;
	static volatile uint32_t x384 = 19217660U;
	volatile uint32_t t95 = 500476338U;

	t95 = (((x381==x382)|x383)|x384);

	if (t95 != 19217663U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile int8_t x386 = -1;

	t96 = (((x385==x386)|x387)|x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MAX;
	uint32_t x391 = 15713434U;
	int8_t x392 = -2;
	volatile uint32_t t97 = 229U;

	t97 = (((x389==x390)|x391)|x392);

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MIN;
	uint64_t x395 = 143414161544548LLU;
	int8_t x396 = 3;
	uint64_t t98 = 4954581LLU;

	t98 = (((x393==x394)|x395)|x396);

	if (t98 != 143414161544551LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = 113385U;

	t99 = (((x397==x398)|x399)|x400);

	if (t99 != 131071U) { NG(); } else { ; }
	
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

