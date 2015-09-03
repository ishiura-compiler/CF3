#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = -106;
int64_t x21 = -1LL;
volatile int32_t t6 = 408;
static int64_t x34 = INT64_MIN;
static int8_t x35 = INT8_MAX;
int64_t x40 = INT64_MIN;
uint16_t x41 = 16U;
volatile int32_t t10 = 8542358;
int64_t x47 = INT64_MIN;
int8_t x51 = INT8_MIN;
static int64_t t12 = 0LL;
uint32_t x55 = 3767721U;
int16_t x73 = 57;
static int16_t x75 = INT16_MIN;
volatile uint8_t x76 = UINT8_MAX;
int32_t x79 = 253598926;
uint16_t x80 = 840U;
int16_t x83 = INT16_MIN;
int16_t x84 = INT16_MIN;
volatile int32_t x85 = -139;
volatile int64_t t22 = 1297935592997LL;
uint64_t x93 = 64906329701106LLU;
int8_t x94 = INT8_MIN;
uint64_t x96 = 1233106765LLU;
volatile int16_t x101 = 15356;
uint8_t x108 = 1U;
volatile int32_t t26 = -852;
static uint8_t x112 = 5U;
volatile int32_t t27 = -79044;
static int8_t x116 = 1;
static int32_t t28 = -12921939;
int8_t x119 = INT8_MIN;
static volatile int32_t t30 = -102147834;
volatile int64_t t31 = INT64_MIN;
static int16_t x130 = -6868;
volatile int64_t x136 = -1LL;
static int32_t x137 = -1;
volatile int8_t x138 = INT8_MAX;
int8_t x152 = 59;
uint64_t t38 = 380119362167LLU;
int32_t x160 = -1;
int64_t x164 = 21322LL;
uint16_t x166 = 952U;
static volatile uint8_t x171 = 15U;
uint16_t x172 = UINT16_MAX;
int32_t t42 = 15654;
uint32_t x182 = 352U;
int64_t x183 = -1LL;
int8_t x195 = -1;
static uint8_t x196 = 53U;
uint64_t x210 = UINT64_MAX;
volatile int8_t x215 = INT8_MAX;
int16_t x224 = 1;
int64_t x226 = 14464220LL;
volatile int32_t x231 = 110359;
static int64_t x237 = INT64_MIN;
volatile int64_t t59 = -1LL;
int32_t x244 = -1;
static volatile uint16_t x245 = 1697U;
volatile int16_t x249 = INT16_MAX;
int32_t x257 = INT32_MIN;
uint32_t x266 = UINT32_MAX;
int64_t x274 = 0LL;
uint16_t x276 = 3829U;
volatile int32_t t69 = 38818;
uint32_t x289 = UINT32_MAX;
volatile uint32_t x292 = UINT32_MAX;
int16_t x299 = INT16_MIN;
static int16_t x305 = 177;
static volatile int32_t t76 = -32016923;
int8_t x309 = INT8_MIN;
static int16_t x310 = INT16_MIN;
int64_t t77 = INT64_MIN;
int32_t x316 = -1840;
static int32_t t78 = -2;
uint16_t x320 = 55U;
volatile int8_t x321 = 29;
static volatile uint64_t x325 = 39993153LLU;
static int64_t x328 = -1892191LL;
int64_t t81 = -3571LL;
int32_t x331 = -1299;
uint8_t x338 = UINT8_MAX;
static int32_t t84 = INT32_MAX;
uint16_t x341 = UINT16_MAX;
volatile int8_t x352 = -1;
int32_t t90 = 35;
volatile uint16_t x374 = UINT16_MAX;
uint32_t x375 = 201U;
int32_t x381 = INT32_MIN;
volatile int16_t x384 = INT16_MIN;
volatile int32_t x391 = INT32_MIN;
uint8_t x394 = UINT8_MAX;
int16_t x397 = -6731;
int8_t x398 = -1;


void f0(void) {
	int16_t x1 = -618;
	int32_t x2 = INT32_MAX;
	int64_t x3 = INT64_MIN;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

	t0 = (((x1&x2)==x3)|x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	int8_t x8 = -1;
	static volatile int32_t t1 = -37;

	t1 = (((x5&x6)==x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -3648532733LL;
	uint8_t x10 = UINT8_MAX;
	uint8_t x11 = 11U;
	static int64_t x12 = INT64_MIN;
	static volatile int64_t t2 = INT64_MIN;

	t2 = (((x9&x10)==x11)|x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 14U;
	static int16_t x14 = INT16_MAX;
	int8_t x15 = INT8_MAX;
	int8_t x16 = INT8_MIN;

	t3 = (((x13&x14)==x15)|x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	uint64_t x18 = 4149022LLU;
	int16_t x19 = INT16_MIN;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t4 = UINT64_MAX;

	t4 = (((x17&x18)==x19)|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = 0;
	volatile int64_t x23 = -1972LL;
	volatile int32_t x24 = INT32_MAX;
	int32_t t5 = INT32_MAX;

	t5 = (((x21&x22)==x23)|x24);

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	volatile int32_t x27 = 5465;
	int16_t x28 = INT16_MAX;

	t6 = (((x25&x26)==x27)|x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MAX;
	int8_t x30 = 0;
	static int32_t x31 = -482214592;
	uint64_t x32 = 2309951539811LLU;
	uint64_t t7 = 27650730824LLU;

	t7 = (((x29&x30)==x31)|x32);

	if (t7 != 2309951539811LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	static int32_t x36 = 1;
	volatile int32_t t8 = -1897;

	t8 = (((x33&x34)==x35)|x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	uint64_t x38 = 10959120515944LLU;
	volatile int16_t x39 = INT16_MIN;
	volatile int64_t t9 = INT64_MIN;

	t9 = (((x37&x38)==x39)|x40);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 248869908U;
	volatile int32_t x43 = INT32_MIN;
	int16_t x44 = 3;

	t10 = (((x41&x42)==x43)|x44);

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = -1;
	static int32_t x46 = INT32_MAX;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = INT32_MIN;

	t11 = (((x45&x46)==x47)|x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	volatile uint64_t x50 = 38LLU;
	volatile int64_t x52 = -2161679LL;

	t12 = (((x49&x50)==x51)|x52);

	if (t12 != -2161679LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 526315;
	volatile int32_t x54 = INT32_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t13 = INT32_MAX;

	t13 = (((x53&x54)==x55)|x56);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	volatile uint16_t x58 = 45U;
	int8_t x59 = INT8_MAX;
	static int16_t x60 = -1;
	int32_t t14 = 537;

	t14 = (((x57&x58)==x59)|x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 689U;
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = -1;
	uint16_t x64 = 16053U;
	volatile int32_t t15 = -228457116;

	t15 = (((x61&x62)==x63)|x64);

	if (t15 != 16053) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint32_t x66 = 229U;
	uint16_t x67 = 2315U;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 7427968;

	t16 = (((x65&x66)==x67)|x68);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	uint16_t x70 = 3U;
	uint32_t x71 = UINT32_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 198;

	t17 = (((x69&x70)==x71)|x72);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	int32_t t18 = 839;

	t18 = (((x73&x74)==x75)|x76);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -8077;
	int16_t x78 = INT16_MAX;
	int32_t t19 = -130;

	t19 = (((x77&x78)==x79)|x80);

	if (t19 != 840) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -320;
	int64_t x82 = INT64_MAX;
	int32_t t20 = 2;

	t20 = (((x81&x82)==x83)|x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 100U;
	int8_t x87 = 1;
	uint64_t x88 = 43610875076681LLU;
	volatile uint64_t t21 = 190604365LLU;

	t21 = (((x85&x86)==x87)|x88);

	if (t21 != 43610875076681LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -3;
	volatile int64_t x90 = INT64_MIN;
	int8_t x91 = -5;
	int64_t x92 = -1LL;

	t22 = (((x89&x90)==x91)|x92);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x95 = 561245930765444LLU;
	volatile uint64_t t23 = 31273936LLU;

	t23 = (((x93&x94)==x95)|x96);

	if (t23 != 1233106765LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MIN;
	int8_t x99 = 1;
	uint64_t x100 = 19LLU;
	volatile uint64_t t24 = 34356912784391138LLU;

	t24 = (((x97&x98)==x99)|x100);

	if (t24 != 19LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x102 = 28U;
	int64_t x103 = -1LL;
	int64_t x104 = -1LL;
	int64_t t25 = -6332351885924350LL;

	t25 = (((x101&x102)==x103)|x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = 1210253U;
	int16_t x106 = INT16_MAX;
	int64_t x107 = INT64_MAX;

	t26 = (((x105&x106)==x107)|x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MAX;
	static volatile uint16_t x110 = 6797U;
	static int8_t x111 = -1;

	t27 = (((x109&x110)==x111)|x112);

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 87U;
	volatile int16_t x114 = 7833;
	uint8_t x115 = UINT8_MAX;

	t28 = (((x113&x114)==x115)|x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 5;
	volatile int32_t x118 = INT32_MAX;
	int64_t x120 = INT64_MAX;
	static volatile int64_t t29 = INT64_MAX;

	t29 = (((x117&x118)==x119)|x120);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	volatile int8_t x122 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	static uint16_t x124 = UINT16_MAX;

	t30 = (((x121&x122)==x123)|x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MIN;

	t31 = (((x125&x126)==x127)|x128);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static uint16_t x131 = 23553U;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t32 = 18;

	t32 = (((x129&x130)==x131)|x132);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MIN;
	static uint64_t x135 = UINT64_MAX;
	int64_t t33 = -5294411811LL;

	t33 = (((x133&x134)==x135)|x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x139 = INT16_MIN;
	volatile int64_t x140 = -1LL;
	volatile int64_t t34 = 6775460LL;

	t34 = (((x137&x138)==x139)|x140);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 4U;
	uint64_t x142 = 1398051931LLU;
	int64_t x143 = -171996944LL;
	int64_t x144 = INT64_MIN;
	int64_t t35 = INT64_MIN;

	t35 = (((x141&x142)==x143)|x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -200944686399LL;
	int16_t x146 = INT16_MIN;
	static uint8_t x147 = UINT8_MAX;
	int64_t x148 = -1LL;
	int64_t t36 = -54318LL;

	t36 = (((x145&x146)==x147)|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = 222;
	uint64_t x150 = 374967347236455726LLU;
	uint32_t x151 = 3U;
	volatile int32_t t37 = -36;

	t37 = (((x149&x150)==x151)|x152);

	if (t37 != 59) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 1U;
	uint8_t x154 = UINT8_MAX;
	uint16_t x155 = 29U;
	uint64_t x156 = 169908112LLU;

	t38 = (((x153&x154)==x155)|x156);

	if (t38 != 169908112LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 54487LLU;
	uint16_t x158 = 63U;
	volatile int8_t x159 = -1;
	int32_t t39 = -80;

	t39 = (((x157&x158)==x159)|x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -16784025737086139LL;
	int64_t x162 = INT64_MAX;
	int8_t x163 = -1;
	static int64_t t40 = 65233939693LL;

	t40 = (((x161&x162)==x163)|x164);

	if (t40 != 21322LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = 156734LL;
	volatile uint16_t x167 = 57U;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -854126;

	t41 = (((x165&x166)==x167)|x168);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 995818454U;
	volatile int32_t x170 = -1;

	t42 = (((x169&x170)==x171)|x172);

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 488109884LLU;
	int8_t x174 = -1;
	int32_t x175 = -4810;
	int64_t x176 = 560689710LL;
	int64_t t43 = 0LL;

	t43 = (((x173&x174)==x175)|x176);

	if (t43 != 560689710LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 6258U;
	uint64_t x178 = 313633006660LLU;
	uint64_t x179 = 14937615493104918LLU;
	static uint64_t x180 = 9472LLU;
	volatile uint64_t t44 = 60LLU;

	t44 = (((x177&x178)==x179)|x180);

	if (t44 != 9472LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -157463241;
	int16_t x184 = 266;
	volatile int32_t t45 = 5238;

	t45 = (((x181&x182)==x183)|x184);

	if (t45 != 266) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	static int32_t x186 = -1;
	int8_t x187 = INT8_MIN;
	static uint64_t x188 = UINT64_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = (((x185&x186)==x187)|x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MAX;
	static int8_t x192 = INT8_MIN;
	static int32_t t47 = -217;

	t47 = (((x189&x190)==x191)|x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MAX;
	int32_t x194 = 9;
	int32_t t48 = -261913056;

	t48 = (((x193&x194)==x195)|x196);

	if (t48 != 53) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 879384U;
	int32_t x198 = -136937;
	int8_t x199 = -23;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 45450;

	t49 = (((x197&x198)==x199)|x200);

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -9244987572991LL;
	uint16_t x202 = 138U;
	static int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = INT32_MIN;

	t50 = (((x201&x202)==x203)|x204);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static volatile uint16_t x206 = 9U;
	int64_t x207 = INT64_MAX;
	int64_t x208 = 19581104709264LL;
	int64_t t51 = -2205333065246699LL;

	t51 = (((x205&x206)==x207)|x208);

	if (t51 != 19581104709264LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = INT64_MIN;
	uint8_t x211 = 1U;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = 18966108;

	t52 = (((x209&x210)==x211)|x212);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int64_t x214 = INT64_MAX;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -4090072;

	t53 = (((x213&x214)==x215)|x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int64_t x218 = 85943897LL;
	static uint64_t x219 = 1231612LLU;
	static int32_t x220 = 254775682;
	int32_t t54 = 1815;

	t54 = (((x217&x218)==x219)|x220);

	if (t54 != 254775682) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1064;
	int8_t x222 = INT8_MAX;
	static int64_t x223 = -1LL;
	int32_t t55 = -11;

	t55 = (((x221&x222)==x223)|x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 3U;
	volatile int64_t x227 = 2138910879LL;
	static int32_t x228 = INT32_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = (((x225&x226)==x227)|x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	uint8_t x230 = UINT8_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile uint32_t t57 = UINT32_MAX;

	t57 = (((x229&x230)==x231)|x232);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 524165U;
	int64_t x234 = 29744798LL;
	volatile int16_t x235 = -3;
	volatile int8_t x236 = -1;
	int32_t t58 = -14;

	t58 = (((x233&x234)==x235)|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = 216U;
	int16_t x239 = INT16_MIN;
	int64_t x240 = -1LL;

	t59 = (((x237&x238)==x239)|x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	static int16_t x242 = -1;
	int16_t x243 = 5295;
	volatile int32_t t60 = 3085;

	t60 = (((x241&x242)==x243)|x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = INT8_MAX;
	int32_t x247 = INT32_MAX;
	int32_t x248 = -1;
	int32_t t61 = 46;

	t61 = (((x245&x246)==x247)|x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	uint32_t x251 = 1444785310U;
	uint32_t x252 = UINT32_MAX;
	uint32_t t62 = UINT32_MAX;

	t62 = (((x249&x250)==x251)|x252);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	int32_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = INT32_MIN;

	t63 = (((x253&x254)==x255)|x256);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x258 = 116U;
	volatile int32_t x259 = INT32_MIN;
	volatile int32_t x260 = INT32_MAX;
	static int32_t t64 = INT32_MAX;

	t64 = (((x257&x258)==x259)|x260);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	static uint16_t x263 = 149U;
	static int64_t x264 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = (((x261&x262)==x263)|x264);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1799353;
	uint64_t x267 = 1886188643669LLU;
	volatile int8_t x268 = -1;
	int32_t t66 = -11039;

	t66 = (((x265&x266)==x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = 62906;
	static uint8_t x270 = UINT8_MAX;
	volatile uint64_t x271 = 3093LLU;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 7041;

	t67 = (((x269&x270)==x271)|x272);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	int16_t x275 = -1;
	int32_t t68 = 0;

	t68 = (((x273&x274)==x275)|x276);

	if (t68 != 3829) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	static uint64_t x278 = UINT64_MAX;
	int16_t x279 = INT16_MIN;
	int32_t x280 = -1;

	t69 = (((x277&x278)==x279)|x280);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = UINT8_MAX;
	volatile int64_t x282 = 14LL;
	static int32_t x283 = -1;
	volatile int16_t x284 = 155;
	static int32_t t70 = 3;

	t70 = (((x281&x282)==x283)|x284);

	if (t70 != 155) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 3;
	volatile int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MAX;
	volatile uint32_t x288 = 93672U;
	static volatile uint32_t t71 = 46U;

	t71 = (((x285&x286)==x287)|x288);

	if (t71 != 93672U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MAX;
	uint64_t x291 = UINT64_MAX;
	uint32_t t72 = UINT32_MAX;

	t72 = (((x289&x290)==x291)|x292);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 108722U;
	int8_t x294 = -1;
	volatile int32_t x295 = INT32_MAX;
	static uint8_t x296 = 0U;
	volatile int32_t t73 = 5849;

	t73 = (((x293&x294)==x295)|x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 44U;
	volatile int16_t x298 = -1;
	volatile int64_t x300 = -1LL;
	int64_t t74 = 217369606294876363LL;

	t74 = (((x297&x298)==x299)|x300);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 193658654689806441LLU;
	int64_t x302 = INT64_MIN;
	int8_t x303 = -3;
	static volatile int64_t x304 = -3775527411565LL;
	volatile int64_t t75 = 28LL;

	t75 = (((x301&x302)==x303)|x304);

	if (t75 != -3775527411565LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MIN;
	static volatile int64_t x307 = INT64_MIN;
	uint16_t x308 = 114U;

	t76 = (((x305&x306)==x307)|x308);

	if (t76 != 114) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x311 = INT64_MAX;
	int64_t x312 = INT64_MIN;

	t77 = (((x309&x310)==x311)|x312);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MIN;
	int64_t x314 = -1LL;
	uint16_t x315 = UINT16_MAX;

	t78 = (((x313&x314)==x315)|x316);

	if (t78 != -1840) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	int8_t x318 = -24;
	int32_t x319 = INT32_MIN;
	volatile int32_t t79 = -14609;

	t79 = (((x317&x318)==x319)|x320);

	if (t79 != 55) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x322 = INT8_MIN;
	volatile uint8_t x323 = 22U;
	static int8_t x324 = 8;
	int32_t t80 = 668396;

	t80 = (((x321&x322)==x323)|x324);

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 3U;
	uint64_t x327 = UINT64_MAX;

	t81 = (((x325&x326)==x327)|x328);

	if (t81 != -1892191LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 422364106LLU;
	volatile uint8_t x330 = UINT8_MAX;
	uint16_t x332 = UINT16_MAX;
	int32_t t82 = -8378;

	t82 = (((x329&x330)==x331)|x332);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = 53817518;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 1707;

	t83 = (((x333&x334)==x335)|x336);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 821415U;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MAX;

	t84 = (((x337&x338)==x339)|x340);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = -15;
	int8_t x344 = -1;
	int32_t t85 = -13184264;

	t85 = (((x341&x342)==x343)|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MIN;
	int64_t x348 = 295727LL;
	volatile int64_t t86 = -4568LL;

	t86 = (((x345&x346)==x347)|x348);

	if (t86 != 295727LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 868526287LLU;
	static int32_t x350 = INT32_MIN;
	uint16_t x351 = UINT16_MAX;
	int32_t t87 = -2186;

	t87 = (((x349&x350)==x351)|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1044386343036LL;
	volatile int16_t x354 = -4;
	int16_t x355 = INT16_MAX;
	int64_t x356 = -1LL;
	volatile int64_t t88 = 751654469465LL;

	t88 = (((x353&x354)==x355)|x356);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	int32_t x358 = -7442066;
	uint64_t x359 = 21633LLU;
	volatile int8_t x360 = INT8_MAX;
	int32_t t89 = 392000;

	t89 = (((x357&x358)==x359)|x360);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MAX;
	int8_t x362 = INT8_MIN;
	int16_t x363 = -554;
	static volatile int8_t x364 = INT8_MIN;

	t90 = (((x361&x362)==x363)|x364);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	volatile int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	static int32_t x368 = -1619337;
	volatile int32_t t91 = 32614;

	t91 = (((x365&x366)==x367)|x368);

	if (t91 != -1619337) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	int64_t x370 = -3163501226LL;
	volatile int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t92 = INT32_MIN;

	t92 = (((x369&x370)==x371)|x372);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 202;
	int32_t x376 = -1;
	int32_t t93 = -807833606;

	t93 = (((x373&x374)==x375)|x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -5185;
	uint16_t x378 = 32123U;
	uint16_t x379 = 3U;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x377&x378)==x379)|x380);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x382 = INT32_MAX;
	int8_t x383 = INT8_MIN;
	volatile int32_t t95 = -986111809;

	t95 = (((x381&x382)==x383)|x384);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = 25;
	volatile int64_t x386 = -1LL;
	volatile int16_t x387 = INT16_MAX;
	static int16_t x388 = 5267;
	volatile int32_t t96 = -1379112;

	t96 = (((x385&x386)==x387)|x388);

	if (t96 != 5267) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	static int16_t x390 = -6;
	int16_t x392 = -1;
	volatile int32_t t97 = -73545;

	t97 = (((x389&x390)==x391)|x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x393 = -28151LL;
	uint8_t x395 = 0U;
	static volatile int16_t x396 = INT16_MIN;
	static volatile int32_t t98 = -151940;

	t98 = (((x393&x394)==x395)|x396);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x399 = 0;
	int16_t x400 = -7982;
	volatile int32_t t99 = 5949;

	t99 = (((x397&x398)==x399)|x400);

	if (t99 != -7982) { NG(); } else { ; }
	
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

