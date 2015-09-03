#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -11153LL;
static uint64_t t1 = 860677LLU;
int8_t x25 = -6;
volatile uint64_t x27 = 5887154126LLU;
int64_t x31 = -1930LL;
uint8_t x32 = UINT8_MAX;
volatile int64_t t7 = 273996170211989004LL;
static int8_t x37 = INT8_MIN;
uint64_t x39 = UINT64_MAX;
static volatile uint64_t t8 = 6738887655632110681LLU;
int16_t x43 = INT16_MIN;
int8_t x56 = INT8_MIN;
uint64_t t11 = 8697363LLU;
int64_t x70 = -175648686789581855LL;
static volatile int64_t t14 = 0LL;
int8_t x73 = 7;
static int64_t t15 = -24277608142683238LL;
volatile uint64_t t17 = 19815LLU;
static volatile int64_t t18 = -1LL;
uint8_t x93 = UINT8_MAX;
static uint16_t x95 = 69U;
int64_t t20 = 2209084451864063LL;
int16_t x97 = INT16_MAX;
uint16_t x111 = 11327U;
volatile uint8_t x113 = UINT8_MAX;
int32_t x117 = -1;
uint64_t x128 = 57628045287999185LLU;
int32_t x143 = INT32_MAX;
int32_t x144 = -495560;
int32_t t33 = -781095;
uint8_t x159 = 6U;
int64_t x166 = -1LL;
int16_t x168 = -1;
static uint64_t t38 = 3311476607LLU;
int16_t x178 = INT16_MIN;
uint8_t x182 = 120U;
volatile uint64_t t41 = 4869190042011280LLU;
volatile uint64_t t43 = 22LLU;
int64_t x197 = INT64_MAX;
volatile uint8_t x200 = 6U;
volatile int32_t x211 = INT32_MIN;
uint64_t x214 = 11812738269LLU;
volatile uint64_t t49 = 26344726LLU;
volatile uint16_t x220 = 5246U;
int64_t x230 = INT64_MIN;
static uint64_t x233 = 1579098LLU;
uint16_t x237 = 3U;
int64_t x248 = -117631213LL;
volatile uint64_t t58 = 23315664682LLU;
int16_t x254 = INT16_MAX;
int32_t x259 = INT32_MIN;
int16_t x265 = INT16_MIN;
int64_t x268 = INT64_MIN;
volatile uint32_t x269 = 334525145U;
volatile uint64_t x278 = UINT64_MAX;
static uint32_t x279 = UINT32_MAX;
int32_t x280 = -113054521;
static int8_t x282 = INT8_MIN;
uint16_t x283 = 14429U;
int32_t x284 = -10581882;
int32_t t64 = 1;
static volatile int64_t t65 = -8319789351016LL;
int16_t x299 = INT16_MIN;
static int64_t t68 = -3218099199191169LL;
static int8_t x305 = INT8_MAX;
int8_t x309 = INT8_MIN;
volatile uint16_t x311 = 52U;
int16_t x312 = -1;
static volatile int8_t x316 = -1;
int32_t x317 = INT32_MIN;
uint32_t x318 = UINT32_MAX;
static volatile int64_t x320 = -98260605LL;
static volatile uint16_t x321 = 8U;
int64_t x323 = 27388708089LL;
int64_t t74 = 833744LL;
static int64_t t77 = -745841189509775688LL;
uint32_t x337 = 179U;
static volatile int16_t x339 = INT16_MIN;
int32_t x340 = INT32_MIN;
int64_t x350 = INT64_MIN;
static int32_t x355 = INT32_MIN;
volatile uint64_t t83 = 1362658566856256LLU;
int8_t x363 = INT8_MIN;
int8_t x364 = -1;
int32_t x369 = INT32_MIN;
volatile uint64_t t87 = 1335LLU;
int16_t x381 = INT16_MAX;
int32_t x382 = 56602969;
uint16_t x384 = UINT16_MAX;
volatile int64_t t89 = 58LL;
int64_t x386 = -1LL;
uint64_t x396 = UINT64_MAX;
volatile int16_t x400 = -19;
int8_t x409 = INT8_MIN;
int32_t t94 = 1;
volatile int32_t x413 = 1323;
static int64_t x428 = -7504881477084LL;
uint64_t x431 = 80LLU;
int16_t x432 = -1;
uint16_t x444 = 1U;


void f0(void) {
	volatile int16_t x1 = 0;
	uint8_t x2 = 1U;
	int64_t x3 = INT64_MAX;
	static volatile int16_t x4 = INT16_MIN;

	t0 = (((x1/x2)/x3)%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = UINT64_MAX;
	int64_t x10 = -1LL;
	uint32_t x11 = UINT32_MAX;
	volatile int8_t x12 = INT8_MAX;

	t1 = (((x9/x10)/x11)%x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = INT64_MIN;
	static int16_t x14 = -16;
	int8_t x15 = INT8_MAX;
	int8_t x16 = -29;
	int64_t t2 = -1LL;

	t2 = (((x13/x14)/x15)%x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = 5;
	int16_t x18 = INT16_MAX;
	static int32_t x19 = -43349954;
	int16_t x20 = -1;
	int32_t t3 = 977164;

	t3 = (((x17/x18)/x19)%x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	volatile uint64_t x22 = 2921487355179672508LLU;
	volatile int32_t x23 = -17619154;
	int8_t x24 = INT8_MIN;
	uint64_t t4 = 86LLU;

	t4 = (((x21/x22)/x23)%x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x26 = -1;
	static int8_t x28 = INT8_MIN;
	volatile uint64_t t5 = 3670124869920796313LLU;

	t5 = (((x25/x26)/x27)%x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	uint8_t x30 = UINT8_MAX;
	static volatile uint64_t t6 = 4016111LLU;

	t6 = (((x29/x30)/x31)%x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 33957757806370LL;
	uint8_t x34 = UINT8_MAX;
	int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MAX;

	t7 = (((x33/x34)/x35)%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = 4;
	uint32_t x40 = UINT32_MAX;

	t8 = (((x37/x38)/x39)%x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	uint64_t x44 = UINT64_MAX;
	uint64_t t9 = 181015322LLU;

	t9 = (((x41/x42)/x43)%x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	volatile int32_t x46 = INT32_MAX;
	volatile int32_t x47 = INT32_MIN;
	int32_t x48 = -5546;
	static int32_t t10 = -3274599;

	t10 = (((x45/x46)/x47)%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 56539123894158LLU;
	static volatile int16_t x54 = -1;
	int32_t x55 = -1;

	t11 = (((x53/x54)/x55)%x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	uint16_t x59 = UINT16_MAX;
	volatile int64_t x60 = INT64_MIN;
	volatile int64_t t12 = 1179566LL;

	t12 = (((x57/x58)/x59)%x60);

	if (t12 != -551920140673LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 2U;
	int8_t x62 = -1;
	volatile int8_t x63 = INT8_MAX;
	static volatile int32_t x64 = -1;
	int32_t t13 = 328503548;

	t13 = (((x61/x62)/x63)%x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 503U;
	int64_t x71 = 3210671964654228LL;
	static uint16_t x72 = UINT16_MAX;

	t14 = (((x69/x70)/x71)%x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = 54801660LL;
	int8_t x75 = 5;
	uint32_t x76 = UINT32_MAX;

	t15 = (((x73/x74)/x75)%x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x77 = INT32_MAX;
	int8_t x78 = -1;
	volatile int8_t x79 = INT8_MAX;
	static volatile int8_t x80 = INT8_MAX;
	volatile int32_t t16 = 1980160;

	t16 = (((x77/x78)/x79)%x80);

	if (t16 != -32) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MAX;
	static uint8_t x82 = 1U;
	static uint64_t x83 = 4034464LLU;
	uint8_t x84 = UINT8_MAX;

	t17 = (((x81/x82)/x83)%x84);

	if (t17 != 5LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -131655218LL;
	int8_t x86 = 5;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;

	t18 = (((x85/x86)/x87)%x88);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	uint16_t x90 = 4U;
	int32_t x91 = -1;
	int64_t x92 = 4457688282897144LL;
	int64_t t19 = -58814864LL;

	t19 = (((x89/x90)/x91)%x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x94 = -14LL;
	uint32_t x96 = UINT32_MAX;

	t20 = (((x93/x94)/x95)%x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = -8595LL;
	volatile int64_t x99 = INT64_MIN;
	uint32_t x100 = 6595U;
	int64_t t21 = 24LL;

	t21 = (((x97/x98)/x99)%x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = UINT64_MAX;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MAX;
	int64_t x104 = -1LL;
	uint64_t t22 = 0LLU;

	t22 = (((x101/x102)/x103)%x104);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x106 = -1;
	uint32_t x107 = 140075U;
	int32_t x108 = INT32_MIN;
	uint64_t t23 = 1720442LLU;

	t23 = (((x105/x106)/x107)%x108);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MIN;
	static int32_t x112 = -1;
	int32_t t24 = -324;

	t24 = (((x109/x110)/x111)%x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x114 = 3443687444LLU;
	int16_t x115 = -1;
	uint16_t x116 = 3U;
	uint64_t t25 = 511LLU;

	t25 = (((x113/x114)/x115)%x116);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = -1;
	static int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t26 = 128058564;

	t26 = (((x117/x118)/x119)%x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MAX;
	int64_t x123 = -1LL;
	uint32_t x124 = 726982U;
	int64_t t27 = -733071103LL;

	t27 = (((x121/x122)/x123)%x124);

	if (t27 != 687613LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MAX;
	volatile uint64_t t28 = 13LLU;

	t28 = (((x125/x126)/x127)%x128);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = 13LLU;
	int16_t x130 = -47;
	volatile int64_t x131 = INT64_MIN;
	volatile uint16_t x132 = UINT16_MAX;
	uint64_t t29 = 300995LLU;

	t29 = (((x129/x130)/x131)%x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = 12725623LL;
	volatile uint64_t x134 = 2625445434848LLU;
	int64_t x135 = -1LL;
	uint8_t x136 = 2U;
	uint64_t t30 = 1925776LLU;

	t30 = (((x133/x134)/x135)%x136);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x137 = -15221760952147LL;
	int64_t x138 = -576306005LL;
	volatile uint64_t x139 = 68LLU;
	uint16_t x140 = 5U;
	volatile uint64_t t31 = 289943183LLU;

	t31 = (((x137/x138)/x139)%x140);

	if (t31 != 3LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = UINT16_MAX;
	uint64_t x142 = 113719132LLU;
	volatile uint64_t t32 = 429881866342758415LLU;

	t32 = (((x141/x142)/x143)%x144);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x145 = 9;
	volatile int16_t x146 = INT16_MIN;
	volatile int8_t x147 = -1;
	static uint8_t x148 = 2U;

	t33 = (((x145/x146)/x147)%x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = 2;
	static int8_t x150 = -36;
	int64_t x151 = INT64_MIN;
	static volatile uint8_t x152 = UINT8_MAX;
	int64_t t34 = 14427077040LL;

	t34 = (((x149/x150)/x151)%x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = INT32_MAX;
	int8_t x160 = -1;
	int32_t t35 = 20188;

	t35 = (((x157/x158)/x159)%x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = INT16_MIN;
	volatile int8_t x162 = -1;
	uint32_t x163 = 32399208U;
	volatile int32_t x164 = -73215;
	uint32_t t36 = 947373759U;

	t36 = (((x161/x162)/x163)%x164);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = 2U;
	uint16_t x167 = 8U;
	volatile int64_t t37 = -881141261205289017LL;

	t37 = (((x165/x166)/x167)%x168);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x169 = -153245971029498051LL;
	uint8_t x170 = UINT8_MAX;
	uint8_t x171 = 1U;
	static uint64_t x172 = UINT64_MAX;

	t38 = (((x169/x170)/x171)%x172);

	if (t38 != 18446143109117279075LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MIN;
	int64_t x174 = -1LL;
	volatile int32_t x175 = -49;
	volatile uint64_t x176 = UINT64_MAX;
	static uint64_t t39 = 186089335883550LLU;

	t39 = (((x173/x174)/x175)%x176);

	if (t39 != 18446744073665725420LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x177 = INT16_MAX;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t40 = -15;

	t40 = (((x177/x178)/x179)%x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 2744805950883981LLU;
	int64_t x183 = -1720631154913137378LL;
	int32_t x184 = -1;

	t41 = (((x181/x182)/x183)%x184);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = 1736238158LLU;
	static volatile int32_t x186 = 570813210;
	int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MIN;
	uint64_t t42 = 8103115938978046960LLU;

	t42 = (((x185/x186)/x187)%x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = -6513;
	uint64_t x190 = 330475434LLU;
	uint16_t x191 = 6U;
	uint64_t x192 = UINT64_MAX;

	t43 = (((x189/x190)/x191)%x192);

	if (t43 != 9303134300LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	volatile int16_t x194 = INT16_MAX;
	int32_t x195 = -1;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t44 = -120962060;

	t44 = (((x193/x194)/x195)%x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x198 = -8;
	int64_t x199 = -20LL;
	static int64_t t45 = 30LL;

	t45 = (((x197/x198)/x199)%x200);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = 0;
	int16_t x202 = INT16_MIN;
	static uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MAX;
	int64_t t46 = 14803428904597LL;

	t46 = (((x201/x202)/x203)%x204);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	static uint8_t x206 = 2U;
	volatile uint16_t x207 = 26U;
	int16_t x208 = 5090;
	int32_t t47 = 188;

	t47 = (((x205/x206)/x207)%x208);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = UINT16_MAX;
	static int16_t x210 = INT16_MIN;
	static int16_t x212 = INT16_MAX;
	static int32_t t48 = -1669343;

	t48 = (((x209/x210)/x211)%x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -2;
	volatile int8_t x215 = -1;
	int8_t x216 = INT8_MIN;

	t49 = (((x213/x214)/x215)%x216);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -1;
	int16_t x218 = -3557;
	static int16_t x219 = INT16_MIN;
	static int32_t t50 = 153269;

	t50 = (((x217/x218)/x219)%x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MAX;
	int8_t x223 = INT8_MIN;
	int8_t x224 = 17;
	int32_t t51 = 181719;

	t51 = (((x221/x222)/x223)%x224);

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = 7890402490LL;
	int16_t x226 = -1;
	uint32_t x227 = UINT32_MAX;
	static uint64_t x228 = 20385576854LLU;
	uint64_t t52 = 21206LLU;

	t52 = (((x225/x226)/x227)%x228);

	if (t52 != 8587855979LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = -1;
	int8_t x231 = INT8_MIN;
	static int32_t x232 = -1;
	volatile int64_t t53 = 195928442582118582LL;

	t53 = (((x229/x230)/x231)%x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x234 = INT64_MIN;
	int64_t x235 = -2961052LL;
	uint32_t x236 = UINT32_MAX;
	static uint64_t t54 = 36090LLU;

	t54 = (((x233/x234)/x235)%x236);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x238 = INT8_MIN;
	int16_t x239 = -2037;
	static uint32_t x240 = 5U;
	volatile uint32_t t55 = 60400689U;

	t55 = (((x237/x238)/x239)%x240);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x241 = UINT8_MAX;
	static volatile int32_t x242 = INT32_MAX;
	int16_t x243 = -13496;
	int64_t x244 = INT64_MIN;
	volatile int64_t t56 = -697732707LL;

	t56 = (((x241/x242)/x243)%x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x245 = -1LL;
	int64_t x246 = INT64_MAX;
	uint8_t x247 = 13U;
	static int64_t t57 = 13503676561472211LL;

	t57 = (((x245/x246)/x247)%x248);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 95U;
	uint32_t x250 = UINT32_MAX;
	volatile uint16_t x251 = 9098U;
	uint64_t x252 = UINT64_MAX;

	t58 = (((x249/x250)/x251)%x252);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x253 = 26U;
	int64_t x255 = -2148869341LL;
	uint16_t x256 = 4U;
	volatile int64_t t59 = 27751911996075LL;

	t59 = (((x253/x254)/x255)%x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = UINT8_MAX;
	int64_t x258 = INT64_MIN;
	uint16_t x260 = 40U;
	volatile int64_t t60 = 26186062482871LL;

	t60 = (((x257/x258)/x259)%x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x266 = UINT32_MAX;
	static uint64_t x267 = 81LLU;
	volatile uint64_t t61 = 405589778001147LLU;

	t61 = (((x265/x266)/x267)%x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MAX;
	static volatile int16_t x272 = INT16_MIN;
	volatile uint32_t t62 = 71U;

	t62 = (((x269/x270)/x271)%x272);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MAX;
	volatile uint64_t t63 = 29684197LLU;

	t63 = (((x277/x278)/x279)%x280);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = 2U;

	t64 = (((x281/x282)/x283)%x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x285 = -209;
	int64_t x286 = 4255203118LL;
	volatile int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MAX;

	t65 = (((x285/x286)/x287)%x288);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x289 = -1;
	volatile int32_t x290 = -1;
	static int64_t x291 = -8LL;
	volatile int64_t x292 = 2714306660169590LL;
	int64_t t66 = 8915971078LL;

	t66 = (((x289/x290)/x291)%x292);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = UINT32_MAX;
	int64_t x294 = INT64_MIN;
	static volatile uint8_t x295 = UINT8_MAX;
	static uint32_t x296 = 3U;
	static volatile int64_t t67 = 173250110821016904LL;

	t67 = (((x293/x294)/x295)%x296);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = 60LL;
	volatile int32_t x298 = -1;
	int32_t x300 = INT32_MIN;

	t68 = (((x297/x298)/x299)%x300);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x301 = INT8_MIN;
	uint8_t x302 = 54U;
	volatile int8_t x303 = -1;
	int32_t x304 = -422;
	int32_t t69 = 280878;

	t69 = (((x301/x302)/x303)%x304);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x306 = -14571;
	static int8_t x307 = INT8_MIN;
	volatile int32_t x308 = INT32_MIN;
	static int32_t t70 = -175;

	t70 = (((x305/x306)/x307)%x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x310 = INT64_MIN;
	volatile int64_t t71 = 521243460810476913LL;

	t71 = (((x309/x310)/x311)%x312);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MIN;
	volatile int32_t x314 = 1380427;
	uint8_t x315 = 68U;
	volatile int32_t t72 = -77153426;

	t72 = (((x313/x314)/x315)%x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x319 = INT64_MAX;
	volatile int64_t t73 = 532LL;

	t73 = (((x317/x318)/x319)%x320);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x322 = 8U;
	static int8_t x324 = INT8_MIN;

	t74 = (((x321/x322)/x323)%x324);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x325 = -1;
	int8_t x326 = -1;
	int16_t x327 = INT16_MAX;
	int32_t x328 = INT32_MIN;
	static int32_t t75 = 4146;

	t75 = (((x325/x326)/x327)%x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = -12866184;
	int64_t x330 = -217705LL;
	int32_t x331 = INT32_MAX;
	static volatile int8_t x332 = INT8_MIN;
	volatile int64_t t76 = -256729169681LL;

	t76 = (((x329/x330)/x331)%x332);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = INT64_MAX;
	int64_t x334 = INT64_MIN;
	static uint16_t x335 = 197U;
	uint32_t x336 = 25U;

	t77 = (((x333/x334)/x335)%x336);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x338 = -1LL;
	volatile int64_t t78 = -115939301400870526LL;

	t78 = (((x337/x338)/x339)%x340);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 4U;
	int64_t x342 = -1LL;
	volatile uint8_t x343 = UINT8_MAX;
	static int8_t x344 = INT8_MAX;
	volatile int64_t t79 = -87LL;

	t79 = (((x341/x342)/x343)%x344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = INT64_MAX;
	static volatile uint16_t x346 = 1U;
	int32_t x347 = INT32_MAX;
	uint16_t x348 = UINT16_MAX;
	static int64_t t80 = 24968190258943LL;

	t80 = (((x345/x346)/x347)%x348);

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = UINT32_MAX;
	volatile int64_t x351 = INT64_MIN;
	static int64_t x352 = INT64_MAX;
	int64_t t81 = -917039665684LL;

	t81 = (((x349/x350)/x351)%x352);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x353 = INT32_MIN;
	volatile int8_t x354 = 1;
	volatile int8_t x356 = INT8_MAX;
	int32_t t82 = 121;

	t82 = (((x353/x354)/x355)%x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x357 = UINT64_MAX;
	static volatile int64_t x358 = INT64_MIN;
	static volatile int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MIN;

	t83 = (((x357/x358)/x359)%x360);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = 19473U;
	int8_t x362 = 52;
	uint32_t t84 = 1696722346U;

	t84 = (((x361/x362)/x363)%x364);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x365 = INT16_MAX;
	uint16_t x366 = 48U;
	volatile uint16_t x367 = UINT16_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t85 = 1;

	t85 = (((x365/x366)/x367)%x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x370 = INT64_MIN;
	volatile uint32_t x371 = 1U;
	uint64_t x372 = 1LLU;
	uint64_t t86 = 17361588385LLU;

	t86 = (((x369/x370)/x371)%x372);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x373 = INT16_MIN;
	volatile int16_t x374 = -1;
	static uint32_t x375 = UINT32_MAX;
	volatile uint64_t x376 = 11LLU;

	t87 = (((x373/x374)/x375)%x376);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x377 = 66U;
	uint16_t x378 = 27U;
	int8_t x379 = INT8_MAX;
	int64_t x380 = -3218381151LL;
	int64_t t88 = 2078LL;

	t88 = (((x377/x378)/x379)%x380);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x383 = -1LL;

	t89 = (((x381/x382)/x383)%x384);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = INT16_MIN;
	int32_t x387 = -1;
	int64_t x388 = INT64_MIN;
	int64_t t90 = 16778535LL;

	t90 = (((x385/x386)/x387)%x388);

	if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x393 = 9U;
	int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MIN;
	uint64_t t91 = 15709024LLU;

	t91 = (((x393/x394)/x395)%x396);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x397 = 71436U;
	int32_t x398 = INT32_MIN;
	volatile int32_t x399 = -30450289;
	uint32_t t92 = 365U;

	t92 = (((x397/x398)/x399)%x400);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x401 = 0;
	uint8_t x402 = 51U;
	uint64_t x403 = 208LLU;
	int8_t x404 = INT8_MIN;
	volatile uint64_t t93 = 5249785258460815LLU;

	t93 = (((x401/x402)/x403)%x404);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x410 = -1;
	volatile int8_t x411 = 20;
	static volatile int32_t x412 = INT32_MIN;

	t94 = (((x409/x410)/x411)%x412);

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x414 = UINT16_MAX;
	uint64_t x415 = 3LLU;
	volatile uint8_t x416 = UINT8_MAX;
	volatile uint64_t t95 = 472587LLU;

	t95 = (((x413/x414)/x415)%x416);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = INT8_MIN;
	uint64_t x418 = 19699995830277423LLU;
	int8_t x419 = 5;
	int16_t x420 = -7568;
	volatile uint64_t t96 = 8390312LLU;

	t96 = (((x417/x418)/x419)%x420);

	if (t96 != 187LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x425 = UINT64_MAX;
	uint64_t x426 = 97859351LLU;
	uint64_t x427 = 167336932333376LLU;
	uint64_t t97 = 221102LLU;

	t97 = (((x425/x426)/x427)%x428);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = -1;
	volatile int8_t x430 = 1;
	uint64_t t98 = 751732557162LLU;

	t98 = (((x429/x430)/x431)%x432);

	if (t98 != 230584300921369395LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = 39547;
	int16_t x442 = -1;
	static volatile int16_t x443 = INT16_MIN;
	int32_t t99 = -41;

	t99 = (((x441/x442)/x443)%x444);

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

