#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1567;
int8_t x11 = INT8_MIN;
uint8_t x12 = UINT8_MAX;
static int16_t x13 = INT16_MIN;
int16_t x16 = INT16_MIN;
static volatile int32_t t4 = -107;
int32_t x27 = -13436;
int32_t t6 = 1600419;
int16_t x31 = -1;
volatile uint64_t x49 = 7LLU;
volatile int32_t t10 = 1071;
volatile int16_t x73 = 8;
static int32_t t15 = -1959097;
static uint8_t x78 = UINT8_MAX;
uint32_t x86 = 5U;
int32_t x95 = INT32_MIN;
int32_t t22 = -5;
uint32_t x109 = 5964342U;
int16_t x117 = -3;
volatile int16_t x122 = INT16_MAX;
static uint32_t x123 = UINT32_MAX;
uint8_t x130 = 0U;
int8_t x133 = -1;
volatile int32_t t30 = 0;
uint16_t x141 = 486U;
uint8_t x144 = 15U;
uint16_t x145 = UINT16_MAX;
static int32_t t34 = -18267;
int64_t x159 = INT64_MAX;
int64_t x163 = 4306350LL;
int32_t t39 = -829108569;
volatile uint8_t x184 = 5U;
int16_t x185 = -3;
int32_t t42 = -2346305;
int32_t t43 = 811651;
static uint16_t x203 = UINT16_MAX;
uint8_t x206 = UINT8_MAX;
volatile int16_t x210 = INT16_MIN;
int32_t x215 = INT32_MIN;
volatile int64_t x217 = 4636LL;
volatile uint8_t x224 = 1U;
volatile int32_t t50 = -70;
static volatile uint8_t x227 = UINT8_MAX;
int64_t x234 = -61920987LL;
int32_t x240 = INT32_MIN;
volatile uint32_t x242 = 1484256U;
static int64_t x244 = INT64_MIN;
int8_t x245 = -1;
uint8_t x247 = 5U;
int64_t x258 = INT64_MIN;
volatile uint64_t x262 = 15204672LLU;
static int16_t x268 = INT16_MIN;
static volatile int32_t t61 = -115;
int16_t x270 = INT16_MIN;
int16_t x274 = INT16_MIN;
uint8_t x276 = 13U;
static uint8_t x291 = UINT8_MAX;
int32_t t67 = -1773635;
volatile int8_t x300 = 1;
static int8_t x308 = INT8_MAX;
int32_t t71 = -2020;
static volatile int64_t x315 = -1LL;
static uint32_t x322 = 151U;
int8_t x323 = INT8_MIN;
static volatile int32_t t75 = 1444;
volatile int8_t x325 = 0;
int32_t x330 = 121466;
uint64_t x331 = 1LLU;
int32_t x333 = -110;
static volatile uint64_t x334 = 6327303967598319LLU;
int8_t x340 = INT8_MAX;
volatile int32_t t80 = -10723136;
int64_t x347 = INT64_MAX;
int64_t x350 = INT64_MIN;
static int16_t x357 = 358;
volatile int32_t x358 = INT32_MIN;
int16_t x359 = INT16_MIN;
int16_t x361 = -74;
uint32_t x364 = UINT32_MAX;
volatile int8_t x377 = INT8_MIN;
int32_t t89 = 787601;
uint32_t x381 = 21093041U;
int32_t t90 = -34;
int32_t x391 = -1;
int8_t x393 = -1;
int32_t t92 = 17156;
int16_t x398 = -798;
int8_t x401 = INT8_MIN;
int32_t x409 = INT32_MAX;
int64_t x410 = -195226877LL;
int8_t x414 = -1;
int32_t t99 = 897912338;


void f0(void) {
	uint32_t x1 = 1584670656U;
	uint8_t x2 = 99U;
	int16_t x3 = -1;
	uint8_t x4 = UINT8_MAX;

	t0 = (((x1^x2)-x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	int64_t x6 = 94454302541185196LL;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MIN;
	static int32_t t1 = 53;

	t1 = (((x5^x6)-x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 0U;
	volatile int32_t t2 = 2;

	t2 = (((x9^x10)-x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 1;
	uint64_t x15 = 2019601655627566LLU;
	int32_t t3 = -2140;

	t3 = (((x13^x14)-x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int32_t x18 = -1;
	static int64_t x19 = INT64_MAX;
	int64_t x20 = INT64_MIN;

	t4 = (((x17^x18)-x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = INT16_MIN;
	static volatile int16_t x23 = -52;
	uint64_t x24 = UINT64_MAX;
	int32_t t5 = -1359;

	t5 = (((x21^x22)-x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	volatile int64_t x26 = -1LL;
	int16_t x28 = -5;

	t6 = (((x25^x26)-x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MIN;
	static int64_t x32 = -2121575208401697LL;
	static int32_t t7 = -470647361;

	t7 = (((x29^x30)-x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 171669695131871LLU;
	volatile int8_t x42 = INT8_MAX;
	static int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MIN;
	int32_t t8 = -60072;

	t8 = (((x41^x42)-x43)==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1;
	volatile int16_t x46 = INT16_MIN;
	volatile int16_t x47 = -1;
	volatile int16_t x48 = -11780;
	int32_t t9 = -115;

	t9 = (((x45^x46)-x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = 0;
	volatile uint16_t x51 = UINT16_MAX;
	static uint16_t x52 = UINT16_MAX;

	t10 = (((x49^x50)-x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 12U;
	uint32_t x54 = 2062U;
	volatile uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t11 = -20632266;

	t11 = (((x53^x54)-x55)==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x57 = 2760U;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = 11839U;
	static int16_t x60 = INT16_MAX;
	volatile int32_t t12 = 3370;

	t12 = (((x57^x58)-x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	int64_t x62 = -1LL;
	int32_t x63 = -1;
	int8_t x64 = INT8_MIN;
	volatile int32_t t13 = 43179;

	t13 = (((x61^x62)-x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 23;
	int64_t x70 = INT64_MIN;
	volatile int64_t x71 = -1LL;
	volatile int32_t x72 = 375445196;
	volatile int32_t t14 = 1;

	t14 = (((x69^x70)-x71)==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x74 = -7;
	static int8_t x75 = INT8_MIN;
	int16_t x76 = -1482;

	t15 = (((x73^x74)-x75)==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 0U;
	int16_t x79 = -1216;
	volatile int64_t x80 = -15933142776539896LL;
	static volatile int32_t t16 = 1;

	t16 = (((x77^x78)-x79)==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1LL;
	volatile uint64_t x82 = 501038586254001LLU;
	volatile int32_t x83 = -1;
	int32_t x84 = INT32_MAX;
	volatile int32_t t17 = 1158;

	t17 = (((x81^x82)-x83)==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 10U;
	static volatile int64_t x87 = 9LL;
	uint8_t x88 = 16U;
	volatile int32_t t18 = -3;

	t18 = (((x85^x86)-x87)==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	int32_t x90 = -19336;
	uint8_t x91 = 7U;
	volatile int32_t x92 = INT32_MAX;
	volatile int32_t t19 = -236246;

	t19 = (((x89^x90)-x91)==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x94 = -246;
	volatile int16_t x96 = 705;
	int32_t t20 = -187;

	t20 = (((x93^x94)-x95)==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	static int32_t x99 = -1;
	int16_t x100 = -1;
	int32_t t21 = -81403363;

	t21 = (((x97^x98)-x99)==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x101 = 79U;
	static int64_t x102 = INT64_MAX;
	int32_t x103 = INT32_MAX;
	int16_t x104 = -67;

	t22 = (((x101^x102)-x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x110 = -232;
	int8_t x111 = INT8_MAX;
	int8_t x112 = -35;
	volatile int32_t t23 = 65160940;

	t23 = (((x109^x110)-x111)==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	uint64_t x115 = 1511699748880155190LLU;
	int8_t x116 = -1;
	int32_t t24 = -31289105;

	t24 = (((x113^x114)-x115)==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x118 = INT64_MIN;
	volatile uint32_t x119 = UINT32_MAX;
	volatile int32_t x120 = INT32_MIN;
	static volatile int32_t t25 = 5433495;

	t25 = (((x117^x118)-x119)==x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = 9;
	uint32_t x124 = UINT32_MAX;
	int32_t t26 = -137762582;

	t26 = (((x121^x122)-x123)==x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int64_t x126 = -1LL;
	int16_t x127 = -1;
	uint64_t x128 = 4LLU;
	volatile int32_t t27 = -413338;

	t27 = (((x125^x126)-x127)==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x129 = 1U;
	int16_t x131 = 11010;
	static uint16_t x132 = 31U;
	static volatile int32_t t28 = 6950;

	t28 = (((x129^x130)-x131)==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x134 = -1;
	static uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 808424416U;
	volatile int32_t t29 = -2858961;

	t29 = (((x133^x134)-x135)==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 11;
	volatile int8_t x138 = INT8_MIN;
	uint64_t x139 = 21LLU;
	int8_t x140 = INT8_MAX;

	t30 = (((x137^x138)-x139)==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x142 = INT64_MIN;
	uint8_t x143 = 104U;
	static volatile int32_t t31 = 48;

	t31 = (((x141^x142)-x143)==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x146 = UINT16_MAX;
	static uint64_t x147 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t32 = 50014911;

	t32 = (((x145^x146)-x147)==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x149 = -4400;
	volatile int8_t x150 = 6;
	uint8_t x151 = UINT8_MAX;
	static volatile uint32_t x152 = UINT32_MAX;
	int32_t t33 = -193;

	t33 = (((x149^x150)-x151)==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x153 = UINT64_MAX;
	volatile int32_t x154 = INT32_MIN;
	int64_t x155 = -1LL;
	static uint64_t x156 = 0LLU;

	t34 = (((x153^x154)-x155)==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = -1;
	int64_t x158 = INT64_MIN;
	static uint16_t x160 = 11249U;
	volatile int32_t t35 = 265285658;

	t35 = (((x157^x158)-x159)==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MIN;
	volatile uint64_t x162 = 1708LLU;
	static uint16_t x164 = 7U;
	volatile int32_t t36 = 14080;

	t36 = (((x161^x162)-x163)==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 3U;
	uint32_t x166 = 7599843U;
	int16_t x167 = INT16_MIN;
	static int8_t x168 = -1;
	static int32_t t37 = -1;

	t37 = (((x165^x166)-x167)==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MAX;
	int8_t x170 = -1;
	int8_t x171 = 26;
	volatile uint32_t x172 = 430U;
	volatile int32_t t38 = -1952887;

	t38 = (((x169^x170)-x171)==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = 12232734LL;
	uint64_t x174 = 49415LLU;
	int8_t x175 = -21;
	int32_t x176 = 40519714;

	t39 = (((x173^x174)-x175)==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x177 = 1691110U;
	volatile uint32_t x178 = 70322572U;
	int64_t x179 = -5175677303573144LL;
	int8_t x180 = -1;
	int32_t t40 = 12633;

	t40 = (((x177^x178)-x179)==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	uint64_t x182 = UINT64_MAX;
	uint32_t x183 = UINT32_MAX;
	int32_t t41 = 1;

	t41 = (((x181^x182)-x183)==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x186 = -1LL;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MIN;

	t42 = (((x185^x186)-x187)==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -1LL;
	int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = UINT8_MAX;

	t43 = (((x189^x190)-x191)==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x197 = INT16_MAX;
	uint16_t x198 = 0U;
	uint64_t x199 = 3LLU;
	static volatile int32_t x200 = INT32_MIN;
	volatile int32_t t44 = 116238359;

	t44 = (((x197^x198)-x199)==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 9718U;
	int64_t x202 = -1LL;
	static uint32_t x204 = UINT32_MAX;
	static int32_t t45 = 36629682;

	t45 = (((x201^x202)-x203)==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = 446;
	int8_t x207 = INT8_MIN;
	int32_t x208 = 12240589;
	int32_t t46 = 58195248;

	t46 = (((x205^x206)-x207)==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x209 = 10U;
	int8_t x211 = INT8_MIN;
	volatile uint16_t x212 = 44U;
	int32_t t47 = 13550683;

	t47 = (((x209^x210)-x211)==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MIN;
	static volatile int8_t x214 = 0;
	static volatile int8_t x216 = INT8_MAX;
	volatile int32_t t48 = -1299;

	t48 = (((x213^x214)-x215)==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x218 = INT32_MIN;
	uint32_t x219 = 1932770424U;
	int16_t x220 = INT16_MIN;
	static int32_t t49 = -507088;

	t49 = (((x217^x218)-x219)==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 13725LLU;
	volatile uint64_t x222 = 155232695755258LLU;
	static int64_t x223 = INT64_MIN;

	t50 = (((x221^x222)-x223)==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x226 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t51 = 37074;

	t51 = (((x225^x226)-x227)==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MAX;
	int8_t x231 = 6;
	volatile int8_t x232 = 0;
	volatile int32_t t52 = -26642775;

	t52 = (((x229^x230)-x231)==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MAX;
	int8_t x235 = -1;
	uint32_t x236 = UINT32_MAX;
	int32_t t53 = 238787396;

	t53 = (((x233^x234)-x235)==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x237 = UINT16_MAX;
	volatile int16_t x238 = INT16_MIN;
	static uint64_t x239 = UINT64_MAX;
	volatile int32_t t54 = -655314882;

	t54 = (((x237^x238)-x239)==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = UINT8_MAX;
	static int32_t x243 = -96;
	int32_t t55 = -1;

	t55 = (((x241^x242)-x243)==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x246 = INT64_MIN;
	int32_t x248 = 1021;
	int32_t t56 = 431;

	t56 = (((x245^x246)-x247)==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x249 = INT64_MIN;
	volatile uint16_t x250 = 4137U;
	int8_t x251 = -1;
	int32_t x252 = 1919384;
	volatile int32_t t57 = -126674;

	t57 = (((x249^x250)-x251)==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = -1;
	int64_t x254 = -137LL;
	int64_t x255 = -1LL;
	static volatile uint8_t x256 = 43U;
	int32_t t58 = -613241;

	t58 = (((x253^x254)-x255)==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MAX;
	static int64_t x259 = -1126413517392554397LL;
	volatile int64_t x260 = INT64_MAX;
	static volatile int32_t t59 = -354899;

	t59 = (((x257^x258)-x259)==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 3U;
	int32_t x263 = 43429;
	int64_t x264 = INT64_MIN;
	volatile int32_t t60 = 1;

	t60 = (((x261^x262)-x263)==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = 12;
	static uint16_t x266 = 27U;
	volatile int8_t x267 = INT8_MAX;

	t61 = (((x265^x266)-x267)==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = 10U;
	int64_t x271 = -353113622583613LL;
	static volatile int8_t x272 = -1;
	volatile int32_t t62 = 5;

	t62 = (((x269^x270)-x271)==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = UINT8_MAX;
	volatile int64_t x275 = -1LL;
	int32_t t63 = 124643;

	t63 = (((x273^x274)-x275)==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = 7716U;
	uint64_t x278 = 6158952644LLU;
	int8_t x279 = -15;
	int64_t x280 = -3167LL;
	volatile int32_t t64 = -427318;

	t64 = (((x277^x278)-x279)==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = 10310U;
	static uint64_t x282 = UINT64_MAX;
	volatile int64_t x283 = INT64_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t65 = 11684;

	t65 = (((x281^x282)-x283)==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x285 = 28721853611298LLU;
	int8_t x286 = INT8_MAX;
	uint32_t x287 = 483231809U;
	int32_t x288 = -57223527;
	static int32_t t66 = 41;

	t66 = (((x285^x286)-x287)==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = 27U;
	static int16_t x290 = -8053;
	volatile uint16_t x292 = 1864U;

	t67 = (((x289^x290)-x291)==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x293 = 54U;
	int8_t x294 = 0;
	static uint32_t x295 = 222U;
	uint16_t x296 = 455U;
	int32_t t68 = 720326;

	t68 = (((x293^x294)-x295)==x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = 3702U;
	int16_t x298 = INT16_MIN;
	int8_t x299 = -1;
	static int32_t t69 = 804416;

	t69 = (((x297^x298)-x299)==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = INT8_MIN;
	static int8_t x302 = INT8_MAX;
	static int32_t x303 = 799;
	int32_t x304 = INT32_MAX;
	volatile int32_t t70 = -2534030;

	t70 = (((x301^x302)-x303)==x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = -1;
	volatile int16_t x306 = -1;
	volatile uint16_t x307 = UINT16_MAX;

	t71 = (((x305^x306)-x307)==x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x309 = 65LLU;
	static volatile int16_t x310 = -6823;
	static int16_t x311 = INT16_MIN;
	static int16_t x312 = INT16_MIN;
	static volatile int32_t t72 = -676057;

	t72 = (((x309^x310)-x311)==x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = INT32_MIN;
	static volatile int16_t x314 = -652;
	int32_t x316 = 1850258;
	volatile int32_t t73 = 101;

	t73 = (((x313^x314)-x315)==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x317 = 10;
	uint16_t x318 = 14610U;
	uint64_t x319 = 1174417460476LLU;
	int8_t x320 = -1;
	volatile int32_t t74 = -118170138;

	t74 = (((x317^x318)-x319)==x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x321 = -1;
	static int32_t x324 = -1;

	t75 = (((x321^x322)-x323)==x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x326 = -1;
	int16_t x327 = 359;
	volatile int16_t x328 = -1;
	volatile int32_t t76 = 3874;

	t76 = (((x325^x326)-x327)==x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x329 = 2U;
	static volatile int8_t x332 = INT8_MIN;
	volatile int32_t t77 = 36628;

	t77 = (((x329^x330)-x331)==x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x335 = -1;
	int16_t x336 = -474;
	volatile int32_t t78 = 493;

	t78 = (((x333^x334)-x335)==x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x337 = INT8_MIN;
	static int64_t x338 = INT64_MAX;
	uint8_t x339 = 27U;
	static int32_t t79 = -724;

	t79 = (((x337^x338)-x339)==x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MIN;
	uint32_t x342 = 3717U;
	static uint32_t x343 = 14998720U;
	int16_t x344 = -1;

	t80 = (((x341^x342)-x343)==x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = -27;
	static int32_t x346 = -9;
	volatile uint64_t x348 = 559598271450LLU;
	int32_t t81 = 19155061;

	t81 = (((x345^x346)-x347)==x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = 7U;
	int8_t x351 = -29;
	int32_t x352 = INT32_MIN;
	int32_t t82 = -17703;

	t82 = (((x349^x350)-x351)==x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = -1LL;
	int64_t x354 = -1LL;
	int8_t x355 = INT8_MIN;
	int8_t x356 = 0;
	int32_t t83 = -1;

	t83 = (((x353^x354)-x355)==x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x360 = 3072514561385558LL;
	volatile int32_t t84 = 2;

	t84 = (((x357^x358)-x359)==x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x362 = -49;
	static int32_t x363 = 308813471;
	volatile int32_t t85 = 597827;

	t85 = (((x361^x362)-x363)==x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = -9;
	int16_t x366 = -1;
	int16_t x367 = -1;
	static volatile int64_t x368 = -1LL;
	volatile int32_t t86 = 254477144;

	t86 = (((x365^x366)-x367)==x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = -1;
	volatile uint32_t x371 = 30039980U;
	uint8_t x372 = 26U;
	volatile int32_t t87 = -446209689;

	t87 = (((x369^x370)-x371)==x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = -1;
	uint32_t x374 = 305203U;
	int8_t x375 = 0;
	volatile int64_t x376 = -1LL;
	int32_t t88 = -3177;

	t88 = (((x373^x374)-x375)==x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x378 = INT8_MAX;
	int8_t x379 = -1;
	uint8_t x380 = 7U;

	t89 = (((x377^x378)-x379)==x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x382 = INT64_MAX;
	static int64_t x383 = -1728LL;
	static int64_t x384 = -1673857222455LL;

	t90 = (((x381^x382)-x383)==x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = 25;
	int64_t x390 = -1LL;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t91 = 753;

	t91 = (((x389^x390)-x391)==x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x394 = 1U;
	int64_t x395 = -1LL;
	int8_t x396 = 10;

	t92 = (((x393^x394)-x395)==x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x397 = INT16_MAX;
	int64_t x399 = 4098684663439903924LL;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t93 = -2;

	t93 = (((x397^x398)-x399)==x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x402 = -1;
	volatile int32_t x403 = -203163046;
	int64_t x404 = -1LL;
	volatile int32_t t94 = -110800;

	t94 = (((x401^x402)-x403)==x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = 230079;
	uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MIN;
	static uint16_t x408 = 1026U;
	volatile int32_t t95 = 1007115167;

	t95 = (((x405^x406)-x407)==x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x411 = 102U;
	static int8_t x412 = INT8_MIN;
	volatile int32_t t96 = -1423;

	t96 = (((x409^x410)-x411)==x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MIN;
	volatile int8_t x415 = INT8_MIN;
	static int8_t x416 = INT8_MIN;
	volatile int32_t t97 = -1;

	t97 = (((x413^x414)-x415)==x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x417 = -17;
	int16_t x418 = INT16_MIN;
	static int16_t x419 = INT16_MAX;
	uint32_t x420 = 25U;
	static volatile int32_t t98 = -101930418;

	t98 = (((x417^x418)-x419)==x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MAX;
	uint64_t x423 = UINT64_MAX;
	uint32_t x424 = 0U;

	t99 = (((x421^x422)-x423)==x424);

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

