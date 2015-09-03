#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int16_t x6 = 16;
uint16_t x10 = UINT16_MAX;
int16_t x16 = -1;
static uint32_t x29 = 177366319U;
int32_t t7 = 28573;
uint16_t x35 = 53U;
int64_t t10 = -1LL;
static int64_t x52 = INT64_MIN;
volatile uint16_t x53 = 10721U;
int64_t x54 = INT64_MIN;
static volatile int32_t x56 = -1;
int32_t x60 = INT32_MIN;
int32_t t16 = 0;
static uint16_t x73 = UINT16_MAX;
uint16_t x79 = 1U;
int32_t t20 = -51;
volatile int8_t x87 = -1;
volatile int64_t x88 = INT64_MIN;
volatile int8_t x90 = -13;
int64_t x94 = INT64_MAX;
int8_t x97 = -1;
int32_t x101 = INT32_MIN;
int32_t x103 = INT32_MIN;
int8_t x105 = INT8_MIN;
int32_t t26 = -3;
int16_t x113 = -15268;
uint8_t x114 = 2U;
uint32_t t28 = 24777624U;
uint8_t x119 = 62U;
uint32_t x125 = 4U;
int8_t x139 = 2;
int32_t t34 = -11;
static uint16_t x142 = 7U;
uint8_t x144 = 114U;
int8_t x149 = INT8_MIN;
int8_t x180 = INT8_MIN;
int32_t x181 = INT32_MAX;
uint64_t t46 = 12LLU;
int64_t x189 = INT64_MIN;
uint8_t x191 = 2U;
int32_t t48 = -5;
int16_t x197 = INT16_MIN;
uint64_t x206 = 73152887658LLU;
uint16_t x208 = 1U;
int32_t x215 = -1;
int8_t x218 = INT8_MIN;
volatile int32_t t54 = -3;
volatile int32_t t56 = -107;
int32_t x229 = 1;
static volatile int64_t x232 = 55998341630LL;
volatile int8_t x243 = INT8_MAX;
int32_t x245 = -1;
int64_t x248 = -19LL;
volatile int16_t x260 = 1;
int8_t x263 = -1;
uint64_t t65 = 144LLU;
uint32_t x268 = UINT32_MAX;
volatile int32_t t68 = 485616;
uint32_t x279 = 14U;
static int32_t t70 = 714721402;
int8_t x289 = 14;
uint16_t x293 = 4U;
static int16_t x295 = INT16_MAX;
volatile int32_t t73 = 643;
volatile int32_t t74 = -34473676;
volatile int64_t x302 = INT64_MAX;
uint8_t x303 = 1U;
int64_t t75 = -50763LL;
uint32_t x311 = 4U;
int64_t x319 = INT64_MIN;
int8_t x323 = 25;
volatile int32_t t80 = -437515;
int32_t x325 = INT32_MAX;
int16_t x331 = INT16_MAX;
volatile int32_t x333 = INT32_MIN;
int32_t t85 = 5;
int8_t x345 = INT8_MIN;
int64_t x346 = -1LL;
static int8_t x351 = -12;
int8_t x352 = INT8_MAX;
int32_t x358 = INT32_MIN;
int64_t x360 = -1LL;
uint64_t x361 = 341864083968LLU;
volatile uint32_t x365 = UINT32_MAX;
int16_t x366 = -1;
volatile int32_t t91 = -59929500;
static int32_t x375 = -1;
static volatile uint16_t x376 = 2430U;
static int64_t x377 = INT64_MIN;
int64_t x389 = INT64_MIN;
int32_t x390 = 116369817;
int64_t x392 = INT64_MIN;
static volatile uint8_t x393 = 47U;
static int8_t x395 = INT8_MAX;
volatile int32_t x397 = -1;


void f0(void) {
	volatile int32_t x1 = -68776220;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -6771853556665LL;

	t0 = (((x1^x2)<x3)*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -19;
	volatile int16_t x7 = 1;
	int16_t x8 = -1069;
	static int32_t t1 = -5851;

	t1 = (((x5^x6)<x7)*x8);

	if (t1 != -1069) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 160491LLU;
	int16_t x11 = INT16_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 4;

	t2 = (((x9^x10)<x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int64_t x14 = -1LL;
	static int16_t x15 = INT16_MAX;
	int32_t t3 = -241623;

	t3 = (((x13^x14)<x15)*x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MIN;
	volatile int32_t x18 = 3534;
	int8_t x19 = -40;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 0;

	t4 = (((x17^x18)<x19)*x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int32_t x22 = INT32_MIN;
	static uint64_t x23 = 182597202072192613LLU;
	static int32_t x24 = INT32_MIN;
	volatile int32_t t5 = INT32_MIN;

	t5 = (((x21^x22)<x23)*x24);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 1U;
	int8_t x26 = INT8_MIN;
	volatile uint16_t x27 = 9U;
	static uint32_t x28 = 1363956094U;
	volatile uint32_t t6 = 6534327U;

	t6 = (((x25^x26)<x27)*x28);

	if (t6 != 1363956094U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -3;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = UINT16_MAX;

	t7 = (((x29^x30)<x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MIN;
	uint32_t x36 = 65607407U;
	uint32_t t8 = 30797U;

	t8 = (((x33^x34)<x35)*x36);

	if (t8 != 65607407U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MAX;
	static int32_t x38 = INT32_MIN;
	int8_t x39 = -1;
	volatile int32_t x40 = -5;
	int32_t t9 = 38;

	t9 = (((x37^x38)<x39)*x40);

	if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int64_t x42 = INT64_MAX;
	static uint16_t x43 = UINT16_MAX;
	static int64_t x44 = INT64_MIN;

	t10 = (((x41^x42)<x43)*x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int8_t x46 = INT8_MAX;
	static int8_t x47 = -1;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t11 = -64;

	t11 = (((x45^x46)<x47)*x48);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = 30092839423138919LLU;
	int32_t x51 = INT32_MIN;
	int64_t t12 = INT64_MIN;

	t12 = (((x49^x50)<x51)*x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x55 = -20;
	static int32_t t13 = 383;

	t13 = (((x53^x54)<x55)*x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = INT16_MIN;
	volatile int32_t t14 = INT32_MIN;

	t14 = (((x57^x58)<x59)*x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 454U;
	int8_t x62 = -1;
	static uint32_t x63 = 6255973U;
	uint8_t x64 = 27U;
	volatile int32_t t15 = 57;

	t15 = (((x61^x62)<x63)*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = 15803;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MAX;

	t16 = (((x65^x66)<x67)*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	static int32_t x70 = INT32_MAX;
	int32_t x71 = -1886;
	static int32_t x72 = 962649547;
	static volatile int32_t t17 = -969578999;

	t17 = (((x69^x70)<x71)*x72);

	if (t17 != 962649547) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x74 = -1;
	volatile uint32_t x75 = 0U;
	volatile int64_t x76 = -2178136324731LL;
	volatile int64_t t18 = -13471804LL;

	t18 = (((x73^x74)<x75)*x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int64_t x78 = -1LL;
	static uint8_t x80 = 8U;
	static volatile int32_t t19 = 495347724;

	t19 = (((x77^x78)<x79)*x80);

	if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 6057U;
	int32_t x82 = INT32_MAX;
	int8_t x83 = -1;
	volatile int8_t x84 = INT8_MIN;

	t20 = (((x81^x82)<x83)*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 1411;
	volatile uint32_t x86 = UINT32_MAX;
	int64_t t21 = INT64_MIN;

	t21 = (((x85^x86)<x87)*x88);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	volatile uint16_t x91 = UINT16_MAX;
	int64_t x92 = INT64_MIN;
	static volatile int64_t t22 = INT64_MIN;

	t22 = (((x89^x90)<x91)*x92);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	volatile uint64_t x95 = UINT64_MAX;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -9338;

	t23 = (((x93^x94)<x95)*x96);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = UINT16_MAX;
	uint64_t x99 = 523667427526743835LLU;
	static int64_t x100 = INT64_MIN;
	int64_t t24 = -1435499LL;

	t24 = (((x97^x98)<x99)*x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x102 = 8U;
	int8_t x104 = -4;
	volatile int32_t t25 = 421623745;

	t25 = (((x101^x102)<x103)*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MIN;
	int32_t x107 = -1;
	static int8_t x108 = INT8_MIN;

	t26 = (((x105^x106)<x107)*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	int8_t x110 = 0;
	int16_t x111 = INT16_MAX;
	uint32_t x112 = 1U;
	volatile uint32_t t27 = 155086247U;

	t27 = (((x109^x110)<x111)*x112);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x115 = 16021734691419LL;
	uint32_t x116 = 20065463U;

	t28 = (((x113^x114)<x115)*x116);

	if (t28 != 20065463U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MAX;
	uint64_t x120 = 47LLU;
	volatile uint64_t t29 = 7661106315LLU;

	t29 = (((x117^x118)<x119)*x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = -3;
	uint8_t x122 = 1U;
	uint32_t x123 = 11U;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 9789109103LL;

	t30 = (((x121^x122)<x123)*x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x126 = 129289968LLU;
	static int32_t x127 = INT32_MAX;
	int32_t x128 = 756;
	int32_t t31 = 2516050;

	t31 = (((x125^x126)<x127)*x128);

	if (t31 != 756) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 7LL;
	volatile int8_t x130 = INT8_MAX;
	int64_t x131 = 35902142LL;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (((x129^x130)<x131)*x132);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 1322280377749257LLU;
	static uint16_t x134 = UINT16_MAX;
	int16_t x135 = INT16_MIN;
	int16_t x136 = -1;
	int32_t t33 = 177556;

	t33 = (((x133^x134)<x135)*x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 0U;
	int8_t x138 = INT8_MAX;
	int16_t x140 = INT16_MIN;

	t34 = (((x137^x138)<x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	uint64_t x143 = 21360470920677LLU;
	int32_t t35 = 2982;

	t35 = (((x141^x142)<x143)*x144);

	if (t35 != 114) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MIN;
	int32_t x146 = 522508;
	uint64_t x147 = 120LLU;
	int64_t x148 = INT64_MIN;
	int64_t t36 = 8451454354090LL;

	t36 = (((x145^x146)<x147)*x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = -775649408LL;
	uint16_t x151 = UINT16_MAX;
	uint8_t x152 = 2U;
	volatile int32_t t37 = 95;

	t37 = (((x149^x150)<x151)*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -4;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 107U;
	int8_t x156 = 1;
	int32_t t38 = -280;

	t38 = (((x153^x154)<x155)*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MAX;
	volatile uint64_t x159 = 2134415485LLU;
	int64_t x160 = -14LL;
	static volatile int64_t t39 = 42LL;

	t39 = (((x157^x158)<x159)*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x161 = 2716255LLU;
	int32_t x162 = -27;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = -1LL;
	int64_t t40 = -4409003355881158257LL;

	t40 = (((x161^x162)<x163)*x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = UINT32_MAX;
	uint64_t x166 = UINT64_MAX;
	uint8_t x167 = 2U;
	uint8_t x168 = 62U;
	int32_t t41 = 152;

	t41 = (((x165^x166)<x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	static int32_t x170 = INT32_MAX;
	int8_t x171 = -1;
	uint32_t x172 = UINT32_MAX;
	uint32_t t42 = 2463U;

	t42 = (((x169^x170)<x171)*x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 127;
	uint16_t x174 = 9543U;
	volatile uint64_t x175 = 32274504LLU;
	uint64_t x176 = UINT64_MAX;
	static volatile uint64_t t43 = UINT64_MAX;

	t43 = (((x173^x174)<x175)*x176);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile uint16_t x178 = 756U;
	uint16_t x179 = 3U;
	volatile int32_t t44 = -101365824;

	t44 = (((x177^x178)<x179)*x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	int64_t x183 = 4490233414776LL;
	int8_t x184 = -6;
	volatile int32_t t45 = 55275;

	t45 = (((x181^x182)<x183)*x184);

	if (t45 != -6) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	volatile uint64_t x186 = 62180LLU;
	uint64_t x187 = 37381824461LLU;
	volatile uint64_t x188 = UINT64_MAX;

	t46 = (((x185^x186)<x187)*x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	int64_t x192 = -1LL;
	int64_t t47 = -1481019757271345175LL;

	t47 = (((x189^x190)<x191)*x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MAX;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = 1410U;

	t48 = (((x193^x194)<x195)*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -1LL;
	int32_t x199 = -2;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = -108;

	t49 = (((x197^x198)<x199)*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 1U;
	uint8_t x202 = UINT8_MAX;
	volatile int64_t x203 = -1LL;
	uint32_t x204 = 948634U;
	uint32_t t50 = 755U;

	t50 = (((x201^x202)<x203)*x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	volatile uint32_t x207 = 1605493057U;
	int32_t t51 = -228520;

	t51 = (((x205^x206)<x207)*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int8_t x210 = INT8_MIN;
	uint64_t x211 = 3064465857217428LLU;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t52 = 607208701;

	t52 = (((x209^x210)<x211)*x212);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = INT16_MIN;
	static int64_t x216 = -1007184719871421379LL;
	int64_t t53 = -185275298702LL;

	t53 = (((x213^x214)<x215)*x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int16_t x219 = -1;
	int8_t x220 = INT8_MAX;

	t54 = (((x217^x218)<x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 32U;
	static int8_t x222 = INT8_MAX;
	volatile int32_t x223 = INT32_MIN;
	int64_t x224 = 1105543928915911LL;
	int64_t t55 = 81LL;

	t55 = (((x221^x222)<x223)*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 2U;
	int8_t x226 = -1;
	volatile uint64_t x227 = 42685LLU;
	int16_t x228 = INT16_MAX;

	t56 = (((x225^x226)<x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 2607761000LLU;
	uint64_t x231 = 1160602184142186LLU;
	volatile int64_t t57 = 379657429LL;

	t57 = (((x229^x230)<x231)*x232);

	if (t57 != 55998341630LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	volatile uint32_t x234 = 84116536U;
	volatile int64_t x235 = INT64_MIN;
	volatile uint32_t x236 = 699999U;
	static volatile uint32_t t58 = 648U;

	t58 = (((x233^x234)<x235)*x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 22056U;
	int8_t x238 = -23;
	volatile int8_t x239 = -1;
	volatile int16_t x240 = INT16_MAX;
	int32_t t59 = -6955;

	t59 = (((x237^x238)<x239)*x240);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -971;
	int32_t x242 = 2992794;
	int32_t x244 = INT32_MIN;
	int32_t t60 = INT32_MIN;

	t60 = (((x241^x242)<x243)*x244);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = UINT16_MAX;
	uint16_t x247 = 16U;
	int64_t t61 = 6124873LL;

	t61 = (((x245^x246)<x247)*x248);

	if (t61 != -19LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static uint32_t x250 = 18U;
	static volatile int64_t x251 = INT64_MAX;
	volatile int16_t x252 = 5;
	int32_t t62 = 7;

	t62 = (((x249^x250)<x251)*x252);

	if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 71U;
	static uint16_t x254 = UINT16_MAX;
	volatile int64_t x255 = 126620LL;
	volatile uint8_t x256 = 1U;
	static volatile int32_t t63 = 435877;

	t63 = (((x253^x254)<x255)*x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MIN;
	static volatile int32_t t64 = 0;

	t64 = (((x257^x258)<x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	int64_t x262 = INT64_MAX;
	volatile uint64_t x264 = 193022260LLU;

	t65 = (((x261^x262)<x263)*x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 14LL;
	volatile uint8_t x266 = UINT8_MAX;
	uint16_t x267 = 1568U;
	uint32_t t66 = UINT32_MAX;

	t66 = (((x265^x266)<x267)*x268);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int64_t x270 = 107563964732LL;
	int16_t x271 = INT16_MAX;
	volatile int64_t x272 = 27804013186424899LL;
	volatile int64_t t67 = -1260LL;

	t67 = (((x269^x270)<x271)*x272);

	if (t67 != 27804013186424899LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 7253U;
	uint8_t x274 = 9U;
	static int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MIN;

	t68 = (((x273^x274)<x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	uint32_t x278 = 661446U;
	int8_t x280 = INT8_MAX;
	int32_t t69 = 0;

	t69 = (((x277^x278)<x279)*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	volatile int8_t x282 = INT8_MAX;
	volatile int16_t x283 = -1951;
	int16_t x284 = INT16_MIN;

	t70 = (((x281^x282)<x283)*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -17269935484393926LL;
	static int32_t x286 = -1;
	int8_t x287 = INT8_MAX;
	int32_t x288 = INT32_MAX;
	volatile int32_t t71 = 53;

	t71 = (((x285^x286)<x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = 935709219;
	uint64_t x291 = 1617708LLU;
	int16_t x292 = -1;
	volatile int32_t t72 = 235573;

	t72 = (((x289^x290)<x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MIN;
	static int32_t x296 = 190029;

	t73 = (((x293^x294)<x295)*x296);

	if (t73 != 190029) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MIN;
	uint16_t x298 = 117U;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MAX;

	t74 = (((x297^x298)<x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 65838091162LLU;
	static volatile int64_t x304 = 14LL;

	t75 = (((x301^x302)<x303)*x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 5239373U;
	static volatile int32_t x306 = INT32_MAX;
	static uint64_t x307 = 26193072234304668LLU;
	volatile uint16_t x308 = 0U;
	int32_t t76 = -494080;

	t76 = (((x305^x306)<x307)*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int16_t x310 = 763;
	volatile uint8_t x312 = 15U;
	int32_t t77 = 623;

	t77 = (((x309^x310)<x311)*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1265572479902128376LL;
	static uint32_t x314 = 1696539U;
	static volatile uint64_t x315 = 11926463120LLU;
	uint8_t x316 = 0U;
	int32_t t78 = -130;

	t78 = (((x313^x314)<x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = 39U;
	static int8_t x320 = INT8_MAX;
	int32_t t79 = -3545;

	t79 = (((x317^x318)<x319)*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -175880LL;
	static int32_t x322 = INT32_MIN;
	static int8_t x324 = 0;

	t80 = (((x321^x322)<x323)*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = -79492093729420006LL;
	int32_t x327 = INT32_MIN;
	static uint16_t x328 = 510U;
	volatile int32_t t81 = -204270;

	t81 = (((x325^x326)<x327)*x328);

	if (t81 != 510) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 10888U;
	int16_t x330 = 7696;
	static int64_t x332 = INT64_MIN;
	int64_t t82 = INT64_MIN;

	t82 = (((x329^x330)<x331)*x332);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x334 = INT16_MIN;
	uint32_t x335 = UINT32_MAX;
	volatile uint32_t x336 = 61710U;
	static volatile uint32_t t83 = 931551248U;

	t83 = (((x333^x334)<x335)*x336);

	if (t83 != 61710U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MAX;
	volatile int8_t x338 = -1;
	volatile int64_t x339 = INT64_MAX;
	static int8_t x340 = 4;
	volatile int32_t t84 = 792;

	t84 = (((x337^x338)<x339)*x340);

	if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 7581LLU;
	int8_t x342 = 7;
	int32_t x343 = INT32_MIN;
	volatile int16_t x344 = INT16_MIN;

	t85 = (((x341^x342)<x343)*x344);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x347 = 1;
	uint16_t x348 = 22161U;
	int32_t t86 = 268;

	t86 = (((x345^x346)<x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 10U;
	volatile uint64_t x350 = 87417413164257LLU;
	volatile int32_t t87 = -141244;

	t87 = (((x349^x350)<x351)*x352);

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 50473;
	static int32_t x354 = -1;
	static int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t88 = 14;

	t88 = (((x353^x354)<x355)*x356);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	int64_t x359 = INT64_MAX;
	volatile int64_t t89 = -1LL;

	t89 = (((x357^x358)<x359)*x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	volatile int32_t x364 = INT32_MAX;
	int32_t t90 = INT32_MAX;

	t90 = (((x361^x362)<x363)*x364);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MIN;

	t91 = (((x365^x366)<x367)*x368);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MAX;
	uint8_t x371 = UINT8_MAX;
	volatile uint64_t x372 = 315932845121387106LLU;
	volatile uint64_t t92 = 0LLU;

	t92 = (((x369^x370)<x371)*x372);

	if (t92 != 315932845121387106LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 12U;
	int8_t x374 = INT8_MIN;
	volatile int32_t t93 = -694232894;

	t93 = (((x373^x374)<x375)*x376);

	if (t93 != 2430) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = -1;
	uint32_t x379 = 8062U;
	int32_t x380 = -1;
	int32_t t94 = 35;

	t94 = (((x377^x378)<x379)*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MAX;
	static volatile int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 1793;

	t95 = (((x381^x382)<x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -57;
	static volatile uint8_t x386 = UINT8_MAX;
	uint64_t x387 = UINT64_MAX;
	uint32_t x388 = UINT32_MAX;
	uint32_t t96 = UINT32_MAX;

	t96 = (((x385^x386)<x387)*x388);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x391 = 127U;
	static int64_t t97 = INT64_MIN;

	t97 = (((x389^x390)<x391)*x392);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = -3;
	int32_t x396 = 5;
	int32_t t98 = 63;

	t98 = (((x393^x394)<x395)*x396);

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MAX;
	int16_t x399 = INT16_MAX;
	int64_t x400 = 0LL;
	int64_t t99 = -159LL;

	t99 = (((x397^x398)<x399)*x400);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

