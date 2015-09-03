#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
static uint8_t x8 = 1U;
int8_t x11 = -1;
uint16_t x13 = 445U;
int8_t x15 = INT8_MAX;
static int8_t x20 = INT8_MIN;
volatile int32_t t4 = -1759;
static int8_t x21 = -1;
int16_t x23 = -1710;
int64_t x30 = INT64_MAX;
static uint64_t t6 = 6013603858398423097LLU;
uint64_t t7 = 5752767998962242LLU;
volatile uint16_t x42 = 1842U;
int64_t x43 = INT64_MIN;
int8_t x47 = -1;
int8_t x49 = -1;
uint16_t x52 = UINT16_MAX;
volatile uint64_t x56 = 46468483LLU;
static int8_t x62 = INT8_MIN;
volatile uint64_t t13 = 721816774LLU;
static volatile uint64_t t17 = 302141413LLU;
volatile int32_t t18 = 45;
uint8_t x87 = UINT8_MAX;
volatile int8_t x88 = INT8_MIN;
static volatile int32_t t19 = 0;
int8_t x91 = INT8_MIN;
int32_t x92 = INT32_MAX;
static int32_t x93 = INT32_MAX;
int16_t x100 = INT16_MAX;
int64_t t23 = 171LL;
volatile uint16_t x105 = 12U;
uint64_t x106 = 88862502748978LLU;
uint8_t x109 = 1U;
int64_t x111 = -1LL;
static int8_t x112 = 0;
int16_t x114 = -140;
int16_t x123 = INT16_MIN;
volatile int64_t t29 = -545630990982929LL;
int16_t x138 = -958;
int16_t x144 = 13973;
static int32_t x145 = -1;
int8_t x149 = INT8_MIN;
uint64_t x152 = 12LLU;
int16_t x164 = INT16_MIN;
static int32_t x166 = INT32_MAX;
volatile int64_t x167 = -1LL;
int32_t x168 = -176;
uint32_t x170 = UINT32_MAX;
static uint32_t x171 = UINT32_MAX;
volatile uint16_t x172 = UINT16_MAX;
volatile int32_t x173 = INT32_MIN;
int8_t x174 = -1;
uint8_t x176 = 56U;
static int8_t x178 = INT8_MIN;
int16_t x179 = INT16_MIN;
uint64_t x180 = 25706045131LLU;
static volatile uint64_t t41 = 122586LLU;
static int16_t x182 = 11;
uint32_t x184 = 3484U;
uint8_t x192 = 126U;
int64_t t43 = 656223985LL;
uint64_t x195 = 13349889359812LLU;
int16_t x196 = INT16_MAX;
static int16_t x202 = -313;
volatile int64_t t47 = INT64_MIN;
int32_t x219 = INT32_MAX;
static uint64_t t49 = 5096593486108LLU;
int8_t x224 = 21;
uint16_t x230 = 147U;
volatile int64_t t51 = INT64_MAX;
volatile int64_t x233 = INT64_MIN;
uint16_t x234 = UINT16_MAX;
static uint32_t x253 = UINT32_MAX;
static uint32_t x258 = 162854129U;
volatile uint32_t t55 = 704167298U;
int8_t x268 = INT8_MAX;
int32_t t57 = 3850;
uint32_t x276 = 830U;
int32_t x280 = -20424;
int8_t x285 = -1;
uint16_t x286 = 0U;
volatile uint8_t x291 = 14U;
int16_t x302 = -954;
static uint64_t t65 = 7071672LLU;
uint8_t x307 = 10U;
volatile uint32_t x310 = 78273U;
uint64_t x321 = 109503033509929429LLU;
uint16_t x333 = UINT16_MAX;
int16_t x334 = INT16_MAX;
volatile int16_t x344 = INT16_MIN;
volatile uint64_t t74 = 342789969766LLU;
uint32_t x354 = 301489152U;
int32_t x355 = INT32_MIN;
static uint8_t x359 = UINT8_MAX;
int32_t x360 = INT32_MIN;
volatile int32_t t76 = INT32_MIN;
int64_t x361 = -357513773299595097LL;
int16_t x370 = 2800;
int64_t x371 = INT64_MIN;
static int16_t x375 = INT16_MIN;
int8_t x379 = -1;
static int64_t t81 = -1612871LL;
int16_t x381 = 0;
int16_t x386 = INT16_MAX;
int64_t x394 = INT64_MIN;
volatile int32_t x399 = 0;
int64_t t85 = INT64_MAX;
uint64_t x406 = 7543651747LLU;
int64_t x415 = INT64_MIN;
volatile uint32_t x427 = 206466U;
int16_t x429 = INT16_MIN;
volatile uint64_t t94 = UINT64_MAX;
int64_t t95 = -8890612789637LL;
static int16_t x445 = 0;
int16_t x447 = -2000;
static int64_t x449 = INT64_MIN;
int8_t x451 = INT8_MIN;
uint64_t t97 = 25653678827043LLU;
int64_t x456 = INT64_MAX;
int16_t x460 = -1;


void f0(void) {
	static int8_t x1 = -1;
	int16_t x3 = 3429;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = ((x1|(x2+x3))&x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	uint8_t x6 = UINT8_MAX;
	uint32_t x7 = 136U;
	uint32_t t1 = 321221447U;

	t1 = ((x5|(x6+x7))&x8);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int8_t x10 = 0;
	static int64_t x12 = 0LL;
	int64_t t2 = 2LL;

	t2 = ((x9|(x10+x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	volatile int64_t x16 = 956221525855022127LL;
	int64_t t3 = -8121257376843535LL;

	t3 = ((x13|(x14+x15))&x16);

	if (t3 != 956221525855022127LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile int8_t x18 = -1;
	int8_t x19 = INT8_MIN;

	t4 = ((x17|(x18+x19))&x20);

	if (t4 != -256) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = INT32_MAX;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = UINT64_MAX;

	t5 = ((x21|(x22+x23))&x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 19LLU;
	volatile uint64_t x31 = 232363993LLU;
	int8_t x32 = INT8_MIN;

	t6 = ((x29|(x30+x31))&x32);

	if (t6 != 9223372037087139712LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -726;
	volatile int8_t x38 = 39;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = UINT64_MAX;

	t7 = ((x37|(x38+x39))&x40);

	if (t7 != 18446744073709550895LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x41 = 36U;
	int32_t x44 = INT32_MIN;
	volatile int64_t t8 = INT64_MIN;

	t8 = ((x41|(x42+x43))&x44);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	uint32_t x46 = 4U;
	int32_t x48 = -1;
	uint32_t t9 = UINT32_MAX;

	t9 = ((x45|(x46+x47))&x48);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x50 = -1;
	static int64_t x51 = -60545154229146LL;
	volatile int64_t t10 = -31883765453089186LL;

	t10 = ((x49|(x50+x51))&x52);

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -312340769;
	uint8_t x54 = 10U;
	uint16_t x55 = 7988U;
	volatile uint64_t t11 = 3LLU;

	t11 = ((x53|(x54+x55))&x56);

	if (t11 != 4197763LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	int64_t x59 = -6518LL;
	static int16_t x60 = -1;
	int64_t t12 = 522LL;

	t12 = ((x57|(x58+x59))&x60);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 469311083573548LLU;
	uint16_t x63 = 551U;
	int64_t x64 = INT64_MIN;

	t13 = ((x61|(x62+x63))&x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x65 = 86U;
	volatile int16_t x66 = INT16_MAX;
	int32_t x67 = INT32_MIN;
	int64_t x68 = -28632229LL;
	int64_t t14 = 11LL;

	t14 = ((x65|(x66+x67))&x68);

	if (t14 != -2147476645LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x69 = 32471LLU;
	uint16_t x70 = 196U;
	int64_t x71 = -1LL;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t15 = 14892368LLU;

	t15 = ((x69|(x70+x71))&x72);

	if (t15 != 32384LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	int32_t x74 = INT32_MIN;
	uint16_t x75 = 1775U;
	static uint32_t x76 = 1U;
	int64_t t16 = -1589800479733LL;

	t16 = ((x73|(x74+x75))&x76);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = INT64_MAX;
	uint64_t x78 = 26975554999584LLU;
	static int64_t x79 = INT64_MAX;
	volatile uint32_t x80 = 2U;

	t17 = ((x77|(x78+x79))&x80);

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = INT32_MIN;
	int16_t x82 = -608;
	static int16_t x83 = -1;
	int16_t x84 = -58;

	t18 = ((x81|(x82+x83))&x84);

	if (t18 != -634) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 0U;
	int8_t x86 = -9;

	t19 = ((x85|(x86+x87))&x88);

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x90 = 15903564U;
	uint32_t t20 = 51878U;

	t20 = ((x89|(x90+x91))&x92);

	if (t20 != 2147461836U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x94 = 461735667035LLU;
	int64_t x95 = -43150091665871LL;
	static uint8_t x96 = 4U;
	uint64_t t21 = 29454LLU;

	t21 = ((x93|(x94+x95))&x96);

	if (t21 != 4LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 11414LLU;
	volatile int16_t x98 = INT16_MAX;
	volatile int32_t x99 = -1;
	static volatile uint64_t t22 = 1864372070197LLU;

	t22 = ((x97|(x98+x99))&x100);

	if (t22 != 32766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = -1;
	uint16_t x102 = 0U;
	volatile int64_t x103 = INT64_MIN;
	static int8_t x104 = INT8_MIN;

	t23 = ((x101|(x102+x103))&x104);

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x107 = INT8_MAX;
	int32_t x108 = INT32_MAX;
	volatile uint64_t t24 = 97360741LLU;

	t24 = ((x105|(x106+x107))&x108);

	if (t24 != 1776878525LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x110 = INT8_MIN;
	static volatile int64_t t25 = -779924172581LL;

	t25 = ((x109|(x110+x111))&x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	volatile uint32_t x116 = UINT32_MAX;
	volatile uint32_t t26 = 37726342U;

	t26 = ((x113|(x114+x115))&x116);

	if (t26 != 4294967283U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = INT8_MAX;
	int8_t x118 = INT8_MIN;
	int64_t x119 = -1LL;
	static uint8_t x120 = 16U;
	volatile int64_t t27 = -846448414649LL;

	t27 = ((x117|(x118+x119))&x120);

	if (t27 != 16LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 43886U;
	uint8_t x122 = UINT8_MAX;
	uint16_t x124 = 31U;
	volatile uint32_t t28 = 1380U;

	t28 = ((x121|(x122+x123))&x124);

	if (t28 != 31U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 119U;
	uint8_t x126 = 3U;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = INT64_MIN;

	t29 = ((x125|(x126+x127))&x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = -363041413799751070LL;
	int8_t x130 = INT8_MAX;
	int32_t x131 = -1;
	volatile int8_t x132 = INT8_MAX;
	volatile int64_t t30 = 219032503230186455LL;

	t30 = ((x129|(x130+x131))&x132);

	if (t30 != 126LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = 5780864915LL;
	static uint8_t x134 = 1U;
	int64_t x135 = INT64_MIN;
	int64_t x136 = INT64_MAX;
	int64_t t31 = 270689LL;

	t31 = ((x133|(x134+x135))&x136);

	if (t31 != 5780864915LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	volatile int16_t x139 = INT16_MIN;
	uint32_t x140 = UINT32_MAX;
	volatile int64_t t32 = 2447409862750952440LL;

	t32 = ((x137|(x138+x139))&x140);

	if (t32 != 4294933570LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x141 = 666U;
	uint8_t x142 = 1U;
	static uint32_t x143 = UINT32_MAX;
	volatile uint32_t t33 = 2U;

	t33 = ((x141|(x142+x143))&x144);

	if (t33 != 656U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x146 = -57083;
	uint32_t x147 = 1U;
	uint32_t x148 = 38U;
	volatile uint32_t t34 = 24U;

	t34 = ((x145|(x146+x147))&x148);

	if (t34 != 38U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x150 = INT64_MIN;
	uint8_t x151 = 22U;
	volatile uint64_t t35 = 1676795935586195991LLU;

	t35 = ((x149|(x150+x151))&x152);

	if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -1LL;
	static int64_t x158 = -1LL;
	uint16_t x159 = 8U;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x157|(x158+x159))&x160);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 7U;
	int32_t x162 = INT32_MAX;
	int32_t x163 = -1;
	static int32_t t37 = 123;

	t37 = ((x161|(x162+x163))&x164);

	if (t37 != 2147450880) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = INT32_MAX;
	volatile int64_t t38 = -13281LL;

	t38 = ((x165|(x166+x167))&x168);

	if (t38 != 2147483472LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	volatile uint32_t t39 = 132147U;

	t39 = ((x169|(x170+x171))&x172);

	if (t39 != 65534U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x175 = 2273U;
	static volatile int32_t t40 = 370463198;

	t40 = ((x173|(x174+x175))&x176);

	if (t40 != 32) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;

	t41 = ((x177|(x178+x179))&x180);

	if (t41 != 25706045056LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = 1U;
	int16_t x183 = -1;
	volatile uint32_t t42 = 54U;

	t42 = ((x181|(x182+x183))&x184);

	if (t42 != 8U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MIN;
	uint32_t x190 = 6567U;
	static uint8_t x191 = 3U;

	t43 = ((x189|(x190+x191))&x192);

	if (t43 != 42LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = INT64_MAX;
	static volatile int32_t x194 = 0;
	uint64_t t44 = 39698LLU;

	t44 = ((x193|(x194+x195))&x196);

	if (t44 != 32767LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -11680807509366LL;
	static int64_t x198 = 2065379207514LL;
	uint32_t x199 = 169125611U;
	int32_t x200 = 0;
	int64_t t45 = -90629335LL;

	t45 = ((x197|(x198+x199))&x200);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 10U;
	int64_t x203 = -15825957LL;
	volatile int64_t x204 = INT64_MAX;
	int64_t t46 = 1892689223282153LL;

	t46 = ((x201|(x202+x203))&x204);

	if (t46 != 9223372036838949546LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x209 = INT64_MIN;
	static uint8_t x210 = 3U;
	int8_t x211 = -1;
	int8_t x212 = INT8_MIN;

	t47 = ((x209|(x210+x211))&x212);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = -1;
	int8_t x215 = INT8_MAX;
	static volatile int64_t x216 = -1LL;
	volatile int64_t t48 = -17316689960271360LL;

	t48 = ((x213|(x214+x215))&x216);

	if (t48 != -2147483522LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -14;
	uint64_t x218 = 134LLU;
	static int8_t x220 = INT8_MIN;

	t49 = ((x217|(x218+x219))&x220);

	if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x221 = -1;
	volatile int32_t x222 = INT32_MIN;
	int16_t x223 = 9;
	volatile int32_t t50 = -2544;

	t50 = ((x221|(x222+x223))&x224);

	if (t50 != 21) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x229 = -1LL;
	int64_t x231 = 899LL;
	volatile int64_t x232 = INT64_MAX;

	t51 = ((x229|(x230+x231))&x232);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x235 = -1;
	static volatile int32_t x236 = INT32_MIN;
	int64_t t52 = INT64_MIN;

	t52 = ((x233|(x234+x235))&x236);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x249 = 181514U;
	volatile uint32_t x250 = 1419833441U;
	static uint8_t x251 = 2U;
	int64_t x252 = -1LL;
	int64_t t53 = -57LL;

	t53 = ((x249|(x250+x251))&x252);

	if (t53 != 1419965803LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x254 = 0;
	uint8_t x255 = 1U;
	int32_t x256 = -146429;
	uint32_t t54 = 1U;

	t54 = ((x253|(x254+x255))&x256);

	if (t54 != 4294820867U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MIN;
	static uint16_t x259 = 2U;
	uint16_t x260 = 1471U;

	t55 = ((x257|(x258+x259))&x260);

	if (t55 != 1459U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x261 = INT8_MAX;
	uint8_t x262 = 7U;
	static uint64_t x263 = 10348LLU;
	volatile int32_t x264 = -1;
	uint64_t t56 = 18296999021LLU;

	t56 = ((x261|(x262+x263))&x264);

	if (t56 != 10367LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = INT8_MIN;
	volatile int32_t x266 = INT32_MAX;
	int16_t x267 = INT16_MIN;

	t57 = ((x265|(x266+x267))&x268);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x273 = 17158865573336LLU;
	volatile int8_t x274 = -1;
	int8_t x275 = INT8_MIN;
	volatile uint64_t t58 = 98007446004LLU;

	t58 = ((x273|(x274+x275))&x276);

	if (t58 != 830LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = 23314;
	int8_t x278 = INT8_MAX;
	int32_t x279 = INT32_MIN;
	volatile int32_t t59 = -6253;

	t59 = ((x277|(x278+x279))&x280);

	if (t59 != -2147479496) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x281 = INT64_MAX;
	volatile uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	static volatile int16_t x284 = INT16_MAX;
	static volatile int64_t t60 = 1LL;

	t60 = ((x281|(x282+x283))&x284);

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x287 = 14U;
	int32_t x288 = -15795;
	volatile int32_t t61 = -2661;

	t61 = ((x285|(x286+x287))&x288);

	if (t61 != -15795) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x289 = -1;
	volatile int16_t x290 = 56;
	uint8_t x292 = 12U;
	int32_t t62 = -44865;

	t62 = ((x289|(x290+x291))&x292);

	if (t62 != 12) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x293 = 28280U;
	static volatile int64_t x294 = -1LL;
	static int8_t x295 = -13;
	int64_t x296 = INT64_MIN;
	int64_t t63 = INT64_MIN;

	t63 = ((x293|(x294+x295))&x296);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x297 = -1;
	volatile int64_t x298 = 19LL;
	static volatile int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MAX;
	volatile int64_t t64 = 509373591LL;

	t64 = ((x297|(x298+x299))&x300);

	if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x301 = 36U;
	uint64_t x303 = UINT64_MAX;
	uint32_t x304 = 1897909008U;

	t65 = ((x301|(x302+x303))&x304);

	if (t65 != 1897908224LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 928300LLU;
	uint32_t x306 = 505U;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t66 = 3491LLU;

	t66 = ((x305|(x306+x307))&x308);

	if (t66 != 928256LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -3LL;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = 32U;
	int64_t t67 = 1LL;

	t67 = ((x309|(x310+x311))&x312);

	if (t67 != 32LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MAX;
	static int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MIN;
	volatile uint64_t t68 = 267306LLU;

	t68 = ((x313|(x314+x315))&x316);

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x317 = INT64_MAX;
	static int32_t x318 = -178;
	int64_t x319 = 82407259LL;
	volatile int16_t x320 = INT16_MIN;
	volatile int64_t t69 = -4303643221888LL;

	t69 = ((x317|(x318+x319))&x320);

	if (t69 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x322 = 54992114U;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = 1U;
	uint64_t t70 = 2202197916639LLU;

	t70 = ((x321|(x322+x323))&x324);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x335 = INT8_MIN;
	int16_t x336 = 3;
	int32_t t71 = -29800426;

	t71 = ((x333|(x334+x335))&x336);

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x337 = 0LLU;
	volatile int8_t x338 = -1;
	volatile int8_t x339 = -56;
	volatile uint8_t x340 = 118U;
	volatile uint64_t t72 = 0LLU;

	t72 = ((x337|(x338+x339))&x340);

	if (t72 != 70LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x341 = 97U;
	int32_t x342 = -11899274;
	static int16_t x343 = 235;
	volatile int32_t t73 = 1901299;

	t73 = ((x341|(x342+x343))&x344);

	if (t73 != -11927552) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = 645026316LLU;
	uint64_t x346 = 1974LLU;
	int8_t x347 = -4;
	int16_t x348 = 13054;

	t74 = ((x345|(x346+x347))&x348);

	if (t74 != 4798LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x353 = -1;
	uint64_t x356 = 55419737LLU;
	uint64_t t75 = 16312600036240LLU;

	t75 = ((x353|(x354+x355))&x356);

	if (t75 != 55419737LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = -1;
	int32_t x358 = INT32_MIN;

	t76 = ((x357|(x358+x359))&x360);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x362 = INT16_MIN;
	static uint32_t x363 = 12766540U;
	int16_t x364 = INT16_MAX;
	int64_t t77 = 1553037618106LL;

	t77 = ((x361|(x362+x363))&x364);

	if (t77 != 19951LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x365 = 0U;
	int32_t x366 = 709805;
	volatile int32_t x367 = 103758;
	int8_t x368 = INT8_MIN;
	int32_t t78 = 0;

	t78 = ((x365|(x366+x367))&x368);

	if (t78 != 813440) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x369 = 27U;
	uint64_t x372 = 29500244848LLU;
	static uint64_t t79 = 8084295527289331LLU;

	t79 = ((x369|(x370+x371))&x372);

	if (t79 != 624LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x373 = UINT16_MAX;
	uint16_t x374 = 213U;
	volatile int8_t x376 = INT8_MIN;
	int32_t t80 = -27402;

	t80 = ((x373|(x374+x375))&x376);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = -1LL;
	volatile int16_t x378 = INT16_MIN;
	int8_t x380 = INT8_MAX;

	t81 = ((x377|(x378+x379))&x380);

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x382 = 755;
	static int8_t x383 = INT8_MAX;
	uint16_t x384 = 34U;
	int32_t t82 = -1;

	t82 = ((x381|(x382+x383))&x384);

	if (t82 != 34) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x385 = 655435U;
	int32_t x387 = -1;
	volatile uint16_t x388 = UINT16_MAX;
	uint32_t t83 = 446U;

	t83 = ((x385|(x386+x387))&x388);

	if (t83 != 32767U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x393 = 613507511688811941LL;
	uint16_t x395 = 66U;
	int8_t x396 = INT8_MIN;
	static int64_t t84 = -132752583LL;

	t84 = ((x393|(x394+x395))&x396);

	if (t84 != -8609864525165963904LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x397 = INT64_MAX;
	uint32_t x398 = 0U;
	int64_t x400 = INT64_MAX;

	t85 = ((x397|(x398+x399))&x400);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x401 = 802628LL;
	static int64_t x402 = INT64_MIN;
	uint16_t x403 = 25604U;
	static int64_t x404 = -1LL;
	static volatile int64_t t86 = -6799558525964LL;

	t86 = ((x401|(x402+x403))&x404);

	if (t86 != -9223372036853956796LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x405 = -1;
	uint16_t x407 = 2U;
	int8_t x408 = INT8_MIN;
	uint64_t t87 = 27LLU;

	t87 = ((x405|(x406+x407))&x408);

	if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x409 = INT8_MAX;
	static int8_t x410 = 16;
	int16_t x411 = -1;
	int16_t x412 = -1;
	volatile int32_t t88 = -5512;

	t88 = ((x409|(x410+x411))&x412);

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x413 = INT8_MIN;
	uint64_t x414 = 554LLU;
	int64_t x416 = INT64_MAX;
	uint64_t t89 = 4038166885950LLU;

	t89 = ((x413|(x414+x415))&x416);

	if (t89 != 9223372036854775722LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = -1;
	int64_t x418 = INT64_MAX;
	volatile int16_t x419 = INT16_MIN;
	static uint8_t x420 = UINT8_MAX;
	int64_t t90 = 464700231674128LL;

	t90 = ((x417|(x418+x419))&x420);

	if (t90 != 255LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = -1LL;
	int16_t x423 = INT16_MAX;
	volatile int16_t x424 = -1;
	volatile int64_t t91 = 1402171529825200634LL;

	t91 = ((x421|(x422+x423))&x424);

	if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = -1LL;
	int16_t x426 = INT16_MIN;
	int64_t x428 = -131096045062LL;
	volatile int64_t t92 = 11899LL;

	t92 = ((x425|(x426+x427))&x428);

	if (t92 != -131096045062LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x430 = -1;
	uint16_t x431 = 0U;
	int16_t x432 = INT16_MIN;
	volatile int32_t t93 = 5132;

	t93 = ((x429|(x430+x431))&x432);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = -1LL;
	volatile uint64_t x438 = 420398582672783LLU;
	static uint32_t x439 = UINT32_MAX;
	int16_t x440 = -1;

	t94 = ((x437|(x438+x439))&x440);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x441 = 489U;
	volatile int32_t x442 = 5638958;
	int64_t x443 = INT64_MIN;
	uint8_t x444 = 111U;

	t95 = ((x441|(x442+x443))&x444);

	if (t95 != 111LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x446 = -1;
	uint64_t x448 = 160317LLU;
	static uint64_t t96 = 32507521307835843LLU;

	t96 = ((x445|(x446+x447))&x448);

	if (t96 != 159789LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x450 = 8935560328097241053LLU;
	uint8_t x452 = UINT8_MAX;

	t97 = ((x449|(x450+x451))&x452);

	if (t97 != 93LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x453 = 805897U;
	static volatile int64_t x454 = -1LL;
	uint64_t x455 = 1342768LLU;
	uint64_t t98 = 4959908677853529622LLU;

	t98 = ((x453|(x454+x455))&x456);

	if (t98 != 1867055LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = -2112806LL;
	uint32_t x458 = UINT32_MAX;
	volatile int64_t x459 = -1935288230LL;
	volatile int64_t t99 = -1957484172LL;

	t99 = ((x457|(x458+x459))&x460);

	if (t99 != -9509LL) { NG(); } else { ; }
	
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

