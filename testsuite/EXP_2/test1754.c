#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 9418126834260221LLU;
static volatile int32_t x9 = INT32_MIN;
int8_t x11 = -1;
uint64_t x12 = UINT64_MAX;
uint64_t x25 = UINT64_MAX;
int32_t x27 = INT32_MAX;
uint64_t x33 = 178287597231835LLU;
int8_t x34 = -1;
int16_t x37 = -29;
uint32_t x38 = 3U;
int16_t x40 = -1;
static uint64_t x44 = 18982370608LLU;
uint32_t x60 = 197U;
uint32_t t13 = 7U;
volatile int8_t x61 = INT8_MIN;
volatile int64_t t14 = -450796622037LL;
uint32_t x94 = 16126U;
volatile int64_t t24 = -11202789LL;
int8_t x117 = INT8_MIN;
uint8_t x148 = 32U;
static int16_t x168 = INT16_MIN;
static int64_t x188 = -30926043589062LL;
volatile uint16_t x192 = UINT16_MAX;
uint64_t t38 = 8144197037674LLU;
static int32_t x197 = 30416115;
uint16_t x199 = 1U;
volatile int32_t x203 = INT32_MAX;
volatile int32_t t40 = 1;
static uint32_t x221 = 40896U;
int32_t x222 = INT32_MAX;
int32_t x225 = -3;
uint16_t x227 = UINT16_MAX;
static volatile int64_t x228 = INT64_MIN;
volatile int64_t t44 = -113022LL;
uint32_t x236 = UINT32_MAX;
int16_t x237 = INT16_MIN;
static int32_t x252 = INT32_MAX;
int8_t x256 = -1;
static volatile int64_t t50 = -258258218LL;
uint32_t x262 = 10573159U;
uint16_t x264 = 2481U;
uint32_t t51 = 104U;
int32_t x270 = INT32_MAX;
volatile uint16_t x275 = UINT16_MAX;
int16_t x278 = -9;
uint16_t x286 = UINT16_MAX;
static int32_t x301 = INT32_MIN;
uint32_t x303 = UINT32_MAX;
uint16_t x324 = UINT16_MAX;
static uint8_t x335 = 3U;
uint32_t x343 = 1232269852U;
int64_t t68 = INT64_MAX;
uint8_t x349 = 17U;
static int64_t x350 = INT64_MIN;
volatile int64_t t69 = 122815991LL;
int64_t x354 = -185816LL;
static volatile uint64_t x356 = 2224474LLU;
int8_t x360 = INT8_MIN;
static int32_t x365 = INT32_MAX;
int64_t x366 = -1LL;
static int16_t x379 = -1;
volatile uint64_t t76 = 217596964429LLU;
volatile int32_t t77 = -68841;
int64_t x391 = 527502431LL;
int32_t x394 = -1;
int32_t x398 = -1;
volatile int16_t x401 = -3;
static volatile uint32_t x403 = 1622882U;
uint16_t x405 = UINT16_MAX;
int32_t x410 = 170616;
int32_t x412 = INT32_MIN;
int16_t x417 = -1614;
static volatile int16_t x425 = -1;
uint64_t x432 = UINT64_MAX;
int64_t x434 = -793558527146LL;
uint16_t x436 = 1U;
static int64_t t89 = 14257984675LL;
uint64_t x443 = 241120367906LLU;
static int16_t x444 = INT16_MIN;
volatile uint64_t t90 = 80476401463575632LLU;
int16_t x446 = INT16_MIN;
int64_t x448 = -322540235337950LL;
volatile uint16_t x461 = UINT16_MAX;
volatile uint32_t x465 = UINT32_MAX;
uint64_t x473 = 654724295111LLU;
int32_t x478 = -1;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	static int64_t x2 = INT64_MAX;
	int32_t x3 = INT32_MIN;
	volatile uint64_t x4 = 24501294840284LLU;

	t0 = ((x1%(x2&x3))|x4);

	if (t0 != 24501294840319LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 599318707LL;
	int8_t x6 = -1;
	volatile uint16_t x7 = UINT16_MAX;
	uint16_t x8 = 4U;
	int64_t t1 = 40417980699800LL;

	t1 = ((x5%(x6&x7))|x8);

	if (t1 != 1132LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = INT64_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = ((x9%(x10&x11))|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 2045U;
	int16_t x14 = 231;
	int32_t x15 = -1;
	int64_t x16 = -1LL;
	int64_t t3 = 901597528697LL;

	t3 = ((x13%(x14&x15))|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 3U;
	int32_t x18 = -1;
	uint32_t x19 = 11U;
	int32_t x20 = 1702881;
	uint32_t t4 = 276U;

	t4 = ((x17%(x18&x19))|x20);

	if (t4 != 1702883U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = -106;
	volatile int32_t x23 = 42;
	uint16_t x24 = 3639U;
	int32_t t5 = 4540960;

	t5 = ((x21%(x22&x23))|x24);

	if (t5 != 3639) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -39722834;
	static uint32_t x28 = 3026024U;
	volatile uint64_t t6 = 247673973LLU;

	t6 = ((x25%(x26&x27))|x28);

	if (t6 != 288324975LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int32_t x30 = INT32_MIN;
	volatile int16_t x31 = -1;
	int8_t x32 = -1;
	volatile int32_t t7 = 1;

	t7 = ((x29%(x30&x31))|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x35 = INT64_MIN;
	int8_t x36 = INT8_MIN;
	static volatile uint64_t t8 = 1353LLU;

	t8 = ((x33%(x34&x35))|x36);

	if (t8 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x39 = 11206U;
	uint32_t t9 = UINT32_MAX;

	t9 = ((x37%(x38&x39))|x40);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 59U;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = -1LL;
	volatile uint64_t t10 = 57325802LLU;

	t10 = ((x41%(x42&x43))|x44);

	if (t10 != 18982370619LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 0LLU;
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = -1;
	uint64_t x52 = 210599571LLU;
	uint64_t t11 = 223799193535695LLU;

	t11 = ((x49%(x50&x51))|x52);

	if (t11 != 210599571LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -50;
	int8_t x54 = 12;
	int16_t x55 = -1;
	int16_t x56 = -21;
	volatile int32_t t12 = -124748;

	t12 = ((x53%(x54&x55))|x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	int32_t x58 = -1;
	static int8_t x59 = INT8_MIN;

	t13 = ((x57%(x58&x59))|x60);

	if (t13 != 255U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = 7;
	int32_t x63 = -1;
	int64_t x64 = 1LL;

	t14 = ((x61%(x62&x63))|x64);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x69 = INT8_MIN;
	int32_t x70 = -10443135;
	int8_t x71 = INT8_MIN;
	static int16_t x72 = -1;
	static volatile int32_t t15 = -16227;

	t15 = ((x69%(x70&x71))|x72);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 23;
	volatile int32_t x74 = -1;
	volatile int8_t x75 = INT8_MAX;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t16 = 15734173;

	t16 = ((x73%(x74&x75))|x76);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 0U;
	uint8_t x82 = UINT8_MAX;
	static int16_t x83 = -448;
	uint16_t x84 = 1U;
	int32_t t17 = 19504;

	t17 = ((x81%(x82&x83))|x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 561940975991585LLU;
	static int8_t x86 = -1;
	static int8_t x87 = 10;
	int8_t x88 = INT8_MAX;
	uint64_t t18 = 11480670921LLU;

	t18 = ((x85%(x86&x87))|x88);

	if (t18 != 127LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	static int16_t x90 = -39;
	int16_t x91 = 1;
	int8_t x92 = 0;
	uint32_t t19 = 64021040U;

	t19 = ((x89%(x90&x91))|x92);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = 11822271245LL;
	volatile int16_t x95 = -16;
	static uint8_t x96 = UINT8_MAX;
	static int64_t t20 = -261735455231460LL;

	t20 = ((x93%(x94&x95))|x96);

	if (t20 != 10751LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = -28600;
	static uint16_t x99 = 8U;
	volatile uint16_t x100 = 1U;
	int32_t t21 = 52;

	t21 = ((x97%(x98&x99))|x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = INT32_MIN;
	int8_t x108 = -1;
	static int32_t t22 = -492453217;

	t22 = ((x105%(x106&x107))|x108);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	uint64_t x111 = UINT64_MAX;
	uint16_t x112 = 24370U;
	static uint64_t t23 = 2830465952LLU;

	t23 = ((x109%(x110&x111))|x112);

	if (t23 != 24382LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = 36;
	static uint8_t x114 = 20U;
	uint8_t x115 = UINT8_MAX;
	int64_t x116 = INT64_MIN;

	t24 = ((x113%(x114&x115))|x116);

	if (t24 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	int32_t x120 = -1;
	volatile int32_t t25 = 35989;

	t25 = ((x117%(x118&x119))|x120);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x125 = INT16_MAX;
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 4U;
	int32_t t26 = -42588554;

	t26 = ((x125%(x126&x127))|x128);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MAX;
	int32_t x138 = INT32_MIN;
	static int8_t x139 = -36;
	int64_t x140 = INT64_MAX;
	static int64_t t27 = INT64_MAX;

	t27 = ((x137%(x138&x139))|x140);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = 3;
	int16_t x142 = 107;
	volatile int64_t x143 = INT64_MAX;
	int64_t x144 = -2103029515722LL;
	volatile int64_t t28 = -3282700300862810LL;

	t28 = ((x141%(x142&x143))|x144);

	if (t28 != -2103029515721LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x145 = UINT16_MAX;
	uint64_t x146 = 1468LLU;
	int32_t x147 = -3518243;
	uint64_t t29 = 62162222113593LLU;

	t29 = ((x145%(x146&x147))|x148);

	if (t29 != 47LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = INT32_MIN;
	volatile int16_t x150 = -1;
	int32_t x151 = INT32_MIN;
	volatile int8_t x152 = -1;
	volatile int32_t t30 = -85574012;

	t30 = ((x149%(x150&x151))|x152);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = 32282056LL;
	int16_t x154 = -959;
	uint16_t x155 = 1U;
	uint64_t x156 = 290803645LLU;
	static uint64_t t31 = 108499LLU;

	t31 = ((x153%(x154&x155))|x156);

	if (t31 != 290803645LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MAX;
	uint16_t x162 = UINT16_MAX;
	static int8_t x163 = -1;
	static uint16_t x164 = 31U;
	static volatile int32_t t32 = -9283870;

	t32 = ((x161%(x162&x163))|x164);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x165 = INT64_MIN;
	volatile int32_t x166 = 40;
	static int8_t x167 = -1;
	int64_t t33 = -20854234234LL;

	t33 = ((x165%(x166&x167))|x168);

	if (t33 != -8LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x173 = INT64_MIN;
	static int64_t x174 = -1LL;
	static int64_t x175 = INT64_MAX;
	int16_t x176 = INT16_MIN;
	volatile int64_t t34 = 9661LL;

	t34 = ((x173%(x174&x175))|x176);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = -55;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = INT8_MIN;
	volatile int32_t x180 = -20472;
	static uint64_t t35 = 621952LLU;

	t35 = ((x177%(x178&x179))|x180);

	if (t35 != 18446744073709531209LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MAX;
	uint64_t x183 = 12770241744461LLU;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t36 = 2452LLU;

	t36 = ((x181%(x182&x183))|x184);

	if (t36 != 9223372036854775850LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x185 = 88771172;
	uint8_t x186 = 28U;
	int8_t x187 = -2;
	int64_t t37 = 1012452098311LL;

	t37 = ((x185%(x186&x187))|x188);

	if (t37 != -30926043589062LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x189 = UINT64_MAX;
	static int32_t x190 = 24560474;
	static int32_t x191 = -66031352;

	t38 = ((x189%(x190&x191))|x192);

	if (t38 != 589823LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x198 = UINT64_MAX;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t39 = 1033327582105397LLU;

	t39 = ((x197%(x198&x199))|x200);

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = INT32_MAX;
	uint8_t x202 = 2U;
	uint16_t x204 = 14840U;

	t40 = ((x201%(x202&x203))|x204);

	if (t40 != 14841) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = INT64_MAX;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = -4730;
	int64_t x208 = INT64_MIN;
	volatile int64_t t41 = 26383LL;

	t41 = ((x205%(x206&x207))|x208);

	if (t41 != -9223372036843589359LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x213 = 48U;
	int8_t x214 = INT8_MAX;
	static volatile uint32_t x215 = 14974U;
	int32_t x216 = INT32_MIN;
	volatile uint32_t t42 = 579783U;

	t42 = ((x213%(x214&x215))|x216);

	if (t42 != 2147483696U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x223 = -1;
	static int8_t x224 = 0;
	uint32_t t43 = 6U;

	t43 = ((x221%(x222&x223))|x224);

	if (t43 != 40896U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x226 = UINT8_MAX;

	t44 = ((x225%(x226&x227))|x228);

	if (t44 != -3LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x229 = 32U;
	uint32_t x230 = 2089163U;
	int8_t x231 = INT8_MAX;
	int32_t x232 = -395640;
	uint32_t t45 = 18160U;

	t45 = ((x229%(x230&x231))|x232);

	if (t45 != 4294571688U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x233 = 441;
	static int8_t x234 = INT8_MIN;
	int16_t x235 = -917;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = ((x233%(x234&x235))|x236);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x238 = 1;
	int64_t x239 = -1LL;
	static int64_t x240 = INT64_MIN;
	static volatile int64_t t47 = INT64_MIN;

	t47 = ((x237%(x238&x239))|x240);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x249 = UINT8_MAX;
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;
	volatile int64_t t48 = -1LL;

	t48 = ((x249%(x250&x251))|x252);

	if (t48 != 2147483647LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = 26206790766LL;
	static int16_t x254 = INT16_MAX;
	int16_t x255 = -3;
	static volatile int64_t t49 = -8639229512LL;

	t49 = ((x253%(x254&x255))|x256);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x257 = 1048998U;
	int64_t x258 = -1LL;
	int8_t x259 = -1;
	int64_t x260 = 3072LL;

	t50 = ((x257%(x258&x259))|x260);

	if (t50 != 3072LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x261 = UINT32_MAX;
	static int8_t x263 = 7;

	t51 = ((x261%(x262&x263))|x264);

	if (t51 != 2483U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x265 = -1;
	static uint8_t x266 = 37U;
	int32_t x267 = 44;
	static uint32_t x268 = 61372U;
	uint32_t t52 = UINT32_MAX;

	t52 = ((x265%(x266&x267))|x268);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x269 = 6677037448LLU;
	static volatile int8_t x271 = -6;
	int32_t x272 = INT32_MIN;
	volatile uint64_t t53 = 2697944479341812498LLU;

	t53 = ((x269%(x270&x271))|x272);

	if (t53 != 18446744071796654490LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x273 = UINT32_MAX;
	int32_t x274 = -1;
	uint32_t x276 = 1402U;
	static uint32_t t54 = 4U;

	t54 = ((x273%(x274&x275))|x276);

	if (t54 != 1402U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = -1;
	int16_t x279 = 1;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = ((x277%(x278&x279))|x280);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x281 = INT64_MAX;
	int32_t x282 = -1;
	uint16_t x283 = UINT16_MAX;
	uint32_t x284 = 4073582U;
	int64_t t56 = 217741LL;

	t56 = ((x281%(x282&x283))|x284);

	if (t56 != 4095999LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x285 = -1LL;
	volatile int8_t x287 = INT8_MIN;
	static volatile uint8_t x288 = UINT8_MAX;
	volatile int64_t t57 = -38852020453721LL;

	t57 = ((x285%(x286&x287))|x288);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x289 = 5U;
	static int16_t x290 = INT16_MAX;
	uint32_t x291 = UINT32_MAX;
	uint64_t x292 = 1689828501LLU;
	volatile uint64_t t58 = 86789LLU;

	t58 = ((x289%(x290&x291))|x292);

	if (t58 != 1689828501LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = INT64_MAX;
	int8_t x298 = INT8_MAX;
	int16_t x299 = -1;
	static int16_t x300 = INT16_MIN;
	int64_t t59 = -56346022LL;

	t59 = ((x297%(x298&x299))|x300);

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x302 = 702730;
	int16_t x304 = INT16_MAX;
	uint32_t t60 = 29473U;

	t60 = ((x301%(x302&x303))|x304);

	if (t60 != 655359U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = INT8_MAX;
	int64_t x310 = -21631941LL;
	static int64_t x311 = INT64_MIN;
	int16_t x312 = -1;
	int64_t t61 = -14265335441LL;

	t61 = ((x309%(x310&x311))|x312);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = 1U;
	static volatile int16_t x316 = -1;
	uint32_t t62 = UINT32_MAX;

	t62 = ((x313%(x314&x315))|x316);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x317 = 1019U;
	volatile int16_t x318 = -1;
	volatile int16_t x319 = -181;
	volatile uint8_t x320 = 97U;
	volatile uint32_t t63 = 956U;

	t63 = ((x317%(x318&x319))|x320);

	if (t63 != 1019U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	uint32_t x323 = 31285768U;
	volatile int64_t t64 = 37999106LL;

	t64 = ((x321%(x322&x323))|x324);

	if (t64 != -17301505LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x325 = 80U;
	static volatile int32_t x326 = -1;
	int8_t x327 = -1;
	uint64_t x328 = 1LLU;
	uint64_t t65 = 1406185LLU;

	t65 = ((x325%(x326&x327))|x328);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	volatile int64_t x331 = INT64_MIN;
	uint16_t x332 = 10U;
	int64_t t66 = -23LL;

	t66 = ((x329%(x330&x331))|x332);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x333 = -1;
	int8_t x334 = 13;
	uint8_t x336 = 0U;
	int32_t t67 = -1687230;

	t67 = ((x333%(x334&x335))|x336);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x341 = 514;
	uint32_t x342 = UINT32_MAX;
	volatile int64_t x344 = INT64_MAX;

	t68 = ((x341%(x342&x343))|x344);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x351 = -1LL;
	int32_t x352 = 120;

	t69 = ((x349%(x350&x351))|x352);

	if (t69 != 121LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x353 = INT32_MAX;
	static volatile int64_t x355 = -54860326719332954LL;
	volatile uint64_t t70 = 256657LLU;

	t70 = ((x353%(x354&x355))|x356);

	if (t70 != 2147483647LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x357 = 96U;
	static int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	volatile int32_t t71 = -430423010;

	t71 = ((x357%(x358&x359))|x360);

	if (t71 != -32) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MIN;
	static int64_t t72 = 182029176LL;

	t72 = ((x365%(x366&x367))|x368);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x369 = INT16_MAX;
	volatile int64_t x370 = INT64_MIN;
	int32_t x371 = -1;
	volatile int64_t x372 = 7683387LL;
	volatile int64_t t73 = 3164693135629402LL;

	t73 = ((x369%(x370&x371))|x372);

	if (t73 != 7700479LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x373 = 3U;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = INT64_MIN;
	int8_t x376 = -1;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x373%(x374&x375))|x376);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x377 = -9926LL;
	volatile int8_t x378 = INT8_MIN;
	static int16_t x380 = INT16_MAX;
	volatile int64_t t75 = -2150917899822LL;

	t75 = ((x377%(x378&x379))|x380);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x381 = -1LL;
	uint64_t x382 = 53980527353699379LLU;
	volatile uint16_t x383 = 600U;
	uint16_t x384 = UINT16_MAX;

	t76 = ((x381%(x382&x383))|x384);

	if (t76 != 65535LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x385 = -1;
	volatile uint8_t x386 = 5U;
	int32_t x387 = -1;
	volatile int8_t x388 = -1;

	t77 = ((x385%(x386&x387))|x388);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	volatile uint64_t x392 = 3992444200173326LLU;
	volatile uint64_t t78 = 81230LLU;

	t78 = ((x389%(x390&x391))|x392);

	if (t78 != 3992444286746398LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x393 = INT8_MIN;
	static uint64_t x395 = UINT64_MAX;
	static uint16_t x396 = 447U;
	uint64_t t79 = 8036856LLU;

	t79 = ((x393%(x394&x395))|x396);

	if (t79 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x397 = INT8_MIN;
	int32_t x399 = 37513884;
	uint16_t x400 = 6U;
	volatile int32_t t80 = -2186;

	t80 = ((x397%(x398&x399))|x400);

	if (t80 != -122) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x402 = UINT32_MAX;
	volatile int32_t x404 = -853694;
	uint32_t t81 = 174266023U;

	t81 = ((x401%(x402&x403))|x404);

	if (t81 != 4294900051U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x406 = INT8_MIN;
	int8_t x407 = -6;
	int8_t x408 = 7;
	static volatile int32_t t82 = 4;

	t82 = ((x405%(x406&x407))|x408);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x409 = 48;
	static volatile uint64_t x411 = 106400480995225168LLU;
	static volatile uint64_t t83 = 155LLU;

	t83 = ((x409%(x410&x411))|x412);

	if (t83 != 18446744071562068016LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x418 = -6;
	static int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	volatile int32_t t84 = -259839632;

	t84 = ((x417%(x418&x419))|x420);

	if (t84 != -78) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x421 = INT16_MAX;
	static volatile int64_t x422 = INT64_MAX;
	static int16_t x423 = INT16_MAX;
	int64_t x424 = INT64_MIN;
	volatile int64_t t85 = INT64_MIN;

	t85 = ((x421%(x422&x423))|x424);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x426 = INT64_MAX;
	volatile int64_t x427 = 1925678406LL;
	int32_t x428 = 0;
	static int64_t t86 = 11284962714LL;

	t86 = ((x425%(x426&x427))|x428);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x429 = -1LL;
	uint32_t x430 = 4662550U;
	int8_t x431 = -20;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x429%(x430&x431))|x432);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x433 = 1U;
	int16_t x435 = -1;
	int64_t t88 = -31625555266LL;

	t88 = ((x433%(x434&x435))|x436);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x437 = 3576822070LL;
	int64_t x438 = 16542147LL;
	volatile int32_t x439 = INT32_MAX;
	uint16_t x440 = UINT16_MAX;

	t89 = ((x437%(x438&x439))|x440);

	if (t89 != 3735551LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x441 = INT8_MIN;
	int8_t x442 = -1;

	t90 = ((x441%(x442&x443))|x444);

	if (t90 != 18446744073709527216LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x445 = 491282101106895525LLU;
	int64_t x447 = INT64_MIN;
	volatile uint64_t t91 = 0LLU;

	t91 = ((x445%(x446&x447))|x448);

	if (t91 != 18446738541791408039LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x449 = UINT32_MAX;
	uint64_t x450 = UINT64_MAX;
	uint64_t x451 = UINT64_MAX;
	int64_t x452 = INT64_MAX;
	static uint64_t t92 = 59376649LLU;

	t92 = ((x449%(x450&x451))|x452);

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x453 = -1;
	int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MAX;
	int64_t x456 = INT64_MIN;
	static int64_t t93 = -41273300LL;

	t93 = ((x453%(x454&x455))|x456);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = 4824;
	static uint64_t x458 = 4095251599LLU;
	uint32_t x459 = UINT32_MAX;
	int8_t x460 = INT8_MIN;
	volatile uint64_t t94 = 46848483351LLU;

	t94 = ((x457%(x458&x459))|x460);

	if (t94 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x462 = -1;
	static int64_t x463 = INT64_MAX;
	uint32_t x464 = 8370U;
	int64_t t95 = -468466452021514622LL;

	t95 = ((x461%(x462&x463))|x464);

	if (t95 != 65535LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x466 = 9;
	int32_t x467 = INT32_MAX;
	static uint32_t x468 = UINT32_MAX;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = ((x465%(x466&x467))|x468);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x469 = 96U;
	int64_t x470 = -1LL;
	uint16_t x471 = UINT16_MAX;
	int16_t x472 = INT16_MIN;
	static volatile int64_t t97 = 560LL;

	t97 = ((x469%(x470&x471))|x472);

	if (t97 != -32672LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x474 = INT64_MAX;
	uint32_t x475 = 30950U;
	int8_t x476 = -1;
	static volatile uint64_t t98 = UINT64_MAX;

	t98 = ((x473%(x474&x475))|x476);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x477 = 3U;
	uint8_t x479 = 9U;
	volatile int32_t x480 = -3079223;
	int32_t t99 = -1186445;

	t99 = ((x477%(x478&x479))|x480);

	if (t99 != -3079221) { NG(); } else { ; }
	
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

