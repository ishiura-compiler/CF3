#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = INT16_MIN;
static int64_t x23 = 8642482481907LL;
uint64_t x25 = 3149LLU;
int64_t t5 = 1912LL;
uint64_t x40 = UINT64_MAX;
static volatile uint64_t t6 = UINT64_MAX;
static volatile uint32_t t7 = 1U;
int8_t x61 = 0;
uint64_t x62 = 2119898509137036LLU;
uint64_t t9 = 1945918337733114263LLU;
volatile uint32_t x66 = 2631697U;
static volatile int64_t x73 = INT64_MIN;
uint16_t x76 = UINT16_MAX;
volatile uint32_t x77 = 297358U;
uint32_t x82 = 9U;
uint64_t x84 = UINT64_MAX;
int8_t x85 = INT8_MAX;
volatile uint64_t t14 = 5240204948LLU;
int8_t x106 = INT8_MIN;
int8_t x113 = -1;
volatile int16_t x117 = -1;
uint8_t x119 = UINT8_MAX;
int8_t x126 = -1;
volatile int32_t x127 = INT32_MAX;
static int16_t x128 = -4781;
volatile int64_t t21 = -99594394563610531LL;
static volatile uint32_t x141 = 49947099U;
uint32_t x142 = UINT32_MAX;
volatile int32_t t25 = -381717;
uint16_t x162 = 1711U;
uint32_t t26 = 408498778U;
static int8_t x165 = INT8_MAX;
static uint64_t x176 = 2241154683199LLU;
int16_t x178 = -3264;
volatile uint64_t x191 = 10871427342LLU;
uint64_t t31 = 1964LLU;
int8_t x209 = -1;
uint16_t x211 = 246U;
int64_t x213 = INT64_MAX;
int32_t x215 = -1;
uint64_t x221 = 3089620045LLU;
static volatile int32_t x225 = INT32_MIN;
static uint32_t x249 = UINT32_MAX;
int32_t x253 = INT32_MIN;
uint32_t x255 = 7824159U;
volatile int16_t x259 = -8802;
int64_t x277 = -1LL;
uint64_t x295 = UINT64_MAX;
static int64_t x304 = -42LL;
int8_t x305 = INT8_MIN;
uint32_t x316 = UINT32_MAX;
static volatile int16_t x323 = INT16_MIN;
volatile uint64_t t52 = 59498LLU;
static int64_t x333 = 4544911829329807575LL;
static int16_t x335 = INT16_MIN;
static int16_t x336 = INT16_MAX;
uint32_t x341 = 1000U;
int32_t x343 = -4;
int32_t x375 = INT32_MIN;
static volatile uint64_t t60 = 6LLU;
static int16_t x377 = INT16_MAX;
uint16_t x378 = 3712U;
static volatile uint64_t x390 = UINT64_MAX;
volatile uint64_t t62 = 159LLU;
volatile int32_t t63 = -124839;
static volatile int64_t x413 = -1LL;
int16_t x414 = INT16_MIN;
int64_t x415 = -1LL;
static int16_t x424 = -1;
int32_t x426 = INT32_MIN;
uint16_t x446 = 6954U;
volatile int16_t x448 = INT16_MAX;
int64_t x453 = INT64_MIN;
int16_t x454 = INT16_MIN;
int64_t x462 = -1LL;
uint8_t x464 = 111U;
volatile int8_t x465 = INT8_MAX;
volatile int32_t x473 = 688677;
static uint32_t x474 = 23868U;
int64_t x475 = 16044470215LL;
volatile uint8_t x479 = 1U;
volatile int64_t t81 = 601876LL;
int8_t x492 = 59;
int8_t x494 = INT8_MIN;
uint64_t x497 = 1454455LLU;
static volatile int32_t x502 = 88372016;
volatile int16_t x512 = -1;
uint32_t x522 = 1209839U;
uint16_t x531 = UINT16_MAX;
static int8_t x536 = INT8_MIN;
int64_t t91 = 7826LL;
int16_t x540 = INT16_MAX;
int32_t t94 = -22444;
volatile int32_t x578 = 2;
int64_t t96 = INT64_MIN;
int32_t x583 = INT32_MIN;
uint8_t x588 = 50U;
int64_t t98 = -824654LL;
volatile uint64_t t99 = 1069759482LLU;


void f0(void) {
	static uint16_t x5 = 8431U;
	static uint32_t x6 = 57U;
	uint64_t x7 = 2522347246136029LLU;
	int64_t x8 = -1LL;
	static volatile uint64_t t0 = 303521299LLU;

	t0 = ((x5%(x6*x7))*x8);

	if (t0 != 18446744073709543185LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = -1LL;
	static int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MIN;
	int64_t t1 = -15945LL;

	t1 = ((x13%(x14*x15))*x16);

	if (t1 != 32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MAX;
	uint32_t x18 = UINT32_MAX;
	static int64_t x19 = 3531LL;
	uint32_t x20 = UINT32_MAX;
	volatile int64_t t2 = 140178LL;

	t2 = ((x17%(x18*x19))*x20);

	if (t2 != 9223372030412324865LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x21 = -20224;
	int64_t x22 = 229LL;
	static int8_t x24 = -1;
	volatile int64_t t3 = 1891417649LL;

	t3 = ((x21%(x22*x23))*x24);

	if (t3 != 20224LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x26 = 5U;
	uint8_t x27 = 15U;
	int16_t x28 = INT16_MIN;
	static uint64_t t4 = 164305LLU;

	t4 = ((x25%(x26*x27))*x28);

	if (t4 != 18446744073707126784LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = -1002149582577LL;
	int16_t x30 = 6775;
	static volatile uint16_t x31 = 25U;
	int64_t x32 = -1LL;

	t5 = ((x29%(x30*x31))*x32);

	if (t5 != 51327LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 1U;
	static volatile int64_t x38 = 8394788800787963LL;
	static int8_t x39 = INT8_MIN;

	t6 = ((x37%(x38*x39))*x40);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x45 = INT32_MAX;
	volatile uint32_t x46 = 1769U;
	uint32_t x47 = 3838U;
	int8_t x48 = 3;

	t7 = ((x45%(x46*x47))*x48);

	if (t7 != 6078885U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MIN;
	volatile uint64_t x59 = 26LLU;
	int32_t x60 = INT32_MAX;
	uint64_t t8 = 4577LLU;

	t8 = ((x57%(x58*x59))*x60);

	if (t8 != 4611686014132420609LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x63 = 201295579104600LL;
	volatile int32_t x64 = 3924;

	t9 = ((x61%(x62*x63))*x64);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int32_t x67 = -1701;
	uint32_t x68 = 1001240413U;
	uint32_t t10 = 0U;

	t10 = ((x65%(x66*x67))*x68);

	if (t10 != 1913234851U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x74 = 248U;
	static volatile int16_t x75 = INT16_MIN;
	volatile int64_t t11 = -11039676LL;

	t11 = ((x73%(x74*x75))*x76);

	if (t11 != -17179607040LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x78 = -3;
	volatile int32_t x79 = 10;
	int8_t x80 = INT8_MIN;
	volatile uint32_t t12 = 20431144U;

	t12 = ((x77%(x78*x79))*x80);

	if (t12 != 4256905472U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x81 = -398LL;
	int16_t x83 = INT16_MAX;
	volatile uint64_t t13 = 3786639847LLU;

	t13 = ((x81%(x82*x83))*x84);

	if (t13 != 398LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x86 = UINT64_MAX;
	static volatile int64_t x87 = INT64_MIN;
	static uint8_t x88 = 33U;

	t14 = ((x85%(x86*x87))*x88);

	if (t14 != 4191LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = -1;
	volatile int16_t x90 = -2331;
	uint32_t x91 = UINT32_MAX;
	volatile uint32_t x92 = 13198U;
	uint32_t t15 = 41U;

	t15 = ((x89%(x90*x91))*x92);

	if (t15 != 24983814U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x97 = 57;
	uint8_t x98 = 56U;
	static volatile int16_t x99 = 1;
	int32_t x100 = 361574;
	volatile int32_t t16 = -1;

	t16 = ((x97%(x98*x99))*x100);

	if (t16 != 361574) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x105 = INT16_MAX;
	static int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t17 = -57747;

	t17 = ((x105%(x106*x107))*x108);

	if (t17 != 8355585) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x114 = 7741U;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = 40U;
	volatile int32_t t18 = -369264423;

	t18 = ((x113%(x114*x115))*x116);

	if (t18 != -40) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x118 = -1LL;
	uint32_t x120 = 1623797U;
	int64_t t19 = -3LL;

	t19 = ((x117%(x118*x119))*x120);

	if (t19 != -1623797LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x125 = 2163338LL;
	static volatile int64_t t20 = -122LL;

	t20 = ((x125%(x126*x127))*x128);

	if (t20 != -10342918978LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = -2672210144339LL;
	uint16_t x135 = 34U;
	static int16_t x136 = INT16_MAX;

	t21 = ((x133%(x134*x135))*x136);

	if (t21 != 1073676289LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x137 = -14615;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = INT16_MIN;
	volatile int32_t x140 = 14;
	volatile int32_t t22 = -3;

	t22 = ((x137%(x138*x139))*x140);

	if (t22 != -204610) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = INT16_MAX;
	uint32_t t23 = 38037U;

	t23 = ((x141%(x142*x143))*x144);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = -1;
	uint16_t x147 = 19036U;
	uint64_t x148 = 2122138189912949LLU;
	static uint64_t t24 = 13920LLU;

	t24 = ((x145%(x146*x147))*x148);

	if (t24 != 371374183234766075LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x149 = -286;
	uint8_t x150 = 61U;
	static volatile uint8_t x151 = 10U;
	volatile uint16_t x152 = 344U;

	t25 = ((x149%(x150*x151))*x152);

	if (t25 != -98384) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x161 = INT16_MIN;
	volatile int8_t x163 = -1;
	uint32_t x164 = UINT32_MAX;

	t26 = ((x161%(x162*x163))*x164);

	if (t26 != 259U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x166 = INT16_MAX;
	volatile int16_t x167 = INT16_MIN;
	int16_t x168 = -1;
	int32_t t27 = 54;

	t27 = ((x165%(x166*x167))*x168);

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x173 = -1;
	uint16_t x174 = 1927U;
	uint8_t x175 = 9U;
	volatile uint64_t t28 = 202089488LLU;

	t28 = ((x173%(x174*x175))*x176);

	if (t28 != 18446741832554868417LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x177 = INT8_MIN;
	volatile int8_t x179 = -1;
	static int8_t x180 = INT8_MAX;
	int32_t t29 = 3046598;

	t29 = ((x177%(x178*x179))*x180);

	if (t29 != -16256) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x186 = 29247U;
	uint16_t x187 = 666U;
	static uint8_t x188 = 118U;
	int32_t t30 = -5147;

	t30 = ((x185%(x186*x187))*x188);

	if (t30 != -572114504) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x189 = -1;
	int8_t x190 = INT8_MAX;
	int8_t x192 = -1;

	t31 = ((x189%(x190*x191))*x192);

	if (t31 != 18446742953636578405LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = -1LL;
	int32_t x194 = 36230504;
	uint8_t x195 = 58U;
	int32_t x196 = INT32_MIN;
	static volatile int64_t t32 = 2LL;

	t32 = ((x193%(x194*x195))*x196);

	if (t32 != 2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x197 = UINT16_MAX;
	uint16_t x198 = 146U;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = -198124699LL;
	volatile int64_t t33 = 4404396380LL;

	t33 = ((x197%(x198*x199))*x200);

	if (t33 != -1876439024229LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x210 = INT16_MIN;
	static uint32_t x212 = 16959U;
	static volatile uint32_t t34 = 220U;

	t34 = ((x209%(x210*x211))*x212);

	if (t34 != 4294950337U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x214 = -30;
	int32_t x216 = INT32_MIN;
	static int64_t t35 = -30329LL;

	t35 = ((x213%(x214*x215))*x216);

	if (t35 != -15032385536LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x222 = UINT32_MAX;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	uint64_t t36 = 16791830LLU;

	t36 = ((x221%(x222*x223))*x224);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x226 = 15;
	static uint32_t x227 = 9U;
	uint32_t x228 = 63U;
	uint32_t t37 = 76364U;

	t37 = ((x225%(x226*x227))*x228);

	if (t37 != 2394U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x229 = 1;
	int16_t x230 = 10;
	int32_t x231 = -1;
	uint16_t x232 = 477U;
	int32_t t38 = -4589;

	t38 = ((x229%(x230*x231))*x232);

	if (t38 != 477) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x250 = 1U;
	int64_t x251 = INT64_MIN;
	int8_t x252 = -1;
	int64_t t39 = 841015658621878LL;

	t39 = ((x249%(x250*x251))*x252);

	if (t39 != -4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x254 = 63U;
	int8_t x256 = 0;
	uint32_t t40 = 115583675U;

	t40 = ((x253%(x254*x255))*x256);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x257 = 3LLU;
	uint16_t x258 = 5U;
	static volatile int64_t x260 = 94LL;
	volatile uint64_t t41 = 7714192517369LLU;

	t41 = ((x257%(x258*x259))*x260);

	if (t41 != 282LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x261 = 10U;
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 43444U;
	int32_t x264 = INT32_MIN;
	uint64_t t42 = 994460866817647115LLU;

	t42 = ((x261%(x262*x263))*x264);

	if (t42 != 18446744052234715136LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x265 = 0U;
	volatile int16_t x266 = 1;
	int32_t x267 = INT32_MIN;
	int8_t x268 = 1;
	int32_t t43 = 38;

	t43 = ((x265%(x266*x267))*x268);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x278 = 18279U;
	int8_t x279 = INT8_MAX;
	volatile uint16_t x280 = UINT16_MAX;
	static int64_t t44 = -165436006645780898LL;

	t44 = ((x277%(x278*x279))*x280);

	if (t44 != -65535LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x285 = INT16_MIN;
	volatile int32_t x286 = -1;
	int8_t x287 = -40;
	volatile int16_t x288 = -1;
	static volatile int32_t t45 = -3785737;

	t45 = ((x285%(x286*x287))*x288);

	if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x289 = UINT32_MAX;
	static uint16_t x290 = 121U;
	static int8_t x291 = INT8_MAX;
	static uint8_t x292 = UINT8_MAX;
	volatile uint32_t t46 = 548U;

	t46 = ((x289%(x290*x291))*x292);

	if (t46 != 3501405U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	uint32_t x296 = UINT32_MAX;
	uint64_t t47 = 71170465821LLU;

	t47 = ((x293%(x294*x295))*x296);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x297 = INT32_MAX;
	volatile int8_t x298 = 7;
	static uint64_t x299 = 350320088496432428LLU;
	uint32_t x300 = UINT32_MAX;
	uint64_t t48 = 1122802948LLU;

	t48 = ((x297%(x298*x299))*x300);

	if (t48 != 9223372030412324865LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x301 = 0U;
	uint64_t x302 = 2033932373033LLU;
	volatile int64_t x303 = 1LL;
	uint64_t t49 = 1234243785613658LLU;

	t49 = ((x301%(x302*x303))*x304);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x306 = -1;
	volatile int32_t x307 = INT32_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t50 = -6771;

	t50 = ((x305%(x306*x307))*x308);

	if (t50 != 4194304) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x313 = 1741191LLU;
	volatile uint32_t x314 = 15U;
	static uint32_t x315 = 2074261426U;
	volatile uint64_t t51 = 92LLU;

	t51 = ((x313%(x314*x315))*x316);

	if (t51 != 7478358399348345LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x321 = 3741689LLU;
	volatile int64_t x322 = -1LL;
	int64_t x324 = -3LL;

	t52 = ((x321%(x322*x323))*x324);

	if (t52 != 18446744073709533205LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x329 = 2876034LL;
	volatile int16_t x330 = -1;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = 1U;
	static volatile int64_t t53 = 9353303325312553LL;

	t53 = ((x329%(x330*x331))*x332);

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x334 = 36284LLU;
	static volatile uint64_t t54 = 201846163849784LLU;

	t54 = ((x333%(x334*x335))*x336);

	if (t54 != 2561004592594614057LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x342 = 84050994LLU;
	volatile int8_t x344 = -1;
	volatile uint64_t t55 = 197091310529080329LLU;

	t55 = ((x341%(x342*x343))*x344);

	if (t55 != 18446744073709550616LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x345 = 113U;
	static volatile uint16_t x346 = 943U;
	int16_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	uint32_t t56 = 50U;

	t56 = ((x345%(x346*x347))*x348);

	if (t56 != 28815U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x353 = -1;
	int8_t x354 = INT8_MIN;
	static int64_t x355 = -1LL;
	int32_t x356 = 200054;
	volatile int64_t t57 = 11169801919LL;

	t57 = ((x353%(x354*x355))*x356);

	if (t57 != -200054LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x361 = INT64_MIN;
	static uint16_t x362 = 167U;
	int32_t x363 = -1;
	volatile int8_t x364 = INT8_MIN;
	volatile int64_t t58 = 4107318063690LL;

	t58 = ((x361%(x362*x363))*x364);

	if (t58 != 13824LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = UINT8_MAX;
	static int16_t x367 = INT16_MIN;
	static uint8_t x368 = 0U;
	static volatile int32_t t59 = 454096;

	t59 = ((x365%(x366*x367))*x368);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x373 = UINT64_MAX;
	int64_t x374 = 4020LL;
	uint16_t x376 = 3217U;

	t60 = ((x373%(x374*x375))*x376);

	if (t60 != 27771988680373103LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x379 = 7;
	volatile uint32_t x380 = 1300456U;
	uint32_t t61 = 87U;

	t61 = ((x377%(x378*x379))*x380);

	if (t61 != 231058456U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x389 = 0;
	volatile int64_t x391 = INT64_MAX;
	volatile uint32_t x392 = 145143U;

	t62 = ((x389%(x390*x391))*x392);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x397 = INT8_MIN;
	uint8_t x398 = 14U;
	uint16_t x399 = UINT16_MAX;
	int16_t x400 = INT16_MAX;

	t63 = ((x397%(x398*x399))*x400);

	if (t63 != -4194176) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x401 = INT64_MIN;
	uint8_t x402 = UINT8_MAX;
	int8_t x403 = INT8_MAX;
	static int32_t x404 = -4364;
	int64_t t64 = 27149486LL;

	t64 = ((x401%(x402*x403))*x404);

	if (t64 != 558592LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	int16_t x407 = INT16_MIN;
	static volatile int16_t x408 = -12;
	int32_t t65 = 119274783;

	t65 = ((x405%(x406*x407))*x408);

	if (t65 != -3060) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x416 = 823962U;
	static int64_t t66 = -19LL;

	t66 = ((x413%(x414*x415))*x416);

	if (t66 != -823962LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x417 = INT8_MAX;
	volatile int64_t x418 = 6428453099946LL;
	uint64_t x419 = 1145445820488LLU;
	uint8_t x420 = 99U;
	uint64_t t67 = 2684500858686472255LLU;

	t67 = ((x417%(x418*x419))*x420);

	if (t67 != 12573LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x421 = -10;
	int8_t x422 = -1;
	int8_t x423 = INT8_MIN;
	volatile int32_t t68 = 3709;

	t68 = ((x421%(x422*x423))*x424);

	if (t68 != 10) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x425 = -1;
	volatile uint64_t x427 = 44834242399LLU;
	static uint32_t x428 = UINT32_MAX;
	static uint64_t t69 = 257495798LLU;

	t69 = ((x425%(x426*x427))*x428);

	if (t69 != 5176289978786775041LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x429 = INT8_MAX;
	int32_t x430 = 1;
	volatile int64_t x431 = INT64_MAX;
	int8_t x432 = -1;
	int64_t t70 = -2792109990155149685LL;

	t70 = ((x429%(x430*x431))*x432);

	if (t70 != -127LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x433 = INT8_MIN;
	volatile int8_t x434 = 1;
	static uint32_t x435 = 268U;
	int16_t x436 = INT16_MIN;
	volatile uint32_t t71 = 5718932U;

	t71 = ((x433%(x434*x435))*x436);

	if (t71 != 4287102976U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x441 = -1;
	uint64_t x442 = UINT64_MAX;
	int16_t x443 = -14291;
	uint16_t x444 = UINT16_MAX;
	static volatile uint64_t t72 = 669896836828073LLU;

	t72 = ((x441%(x442*x443))*x444);

	if (t72 != 356510400LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x445 = INT8_MIN;
	volatile uint64_t x447 = UINT64_MAX;
	volatile uint64_t t73 = 53433231LLU;

	t73 = ((x445%(x446*x447))*x448);

	if (t73 != 223667542LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x449 = INT32_MAX;
	int16_t x450 = INT16_MIN;
	int64_t x451 = 20822932659LL;
	int16_t x452 = INT16_MIN;
	volatile int64_t t74 = 15982540LL;

	t74 = ((x449%(x450*x451))*x452);

	if (t74 != -70368744144896LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x455 = INT16_MIN;
	int64_t x456 = INT64_MIN;
	int64_t t75 = 1455214852790947892LL;

	t75 = ((x453%(x454*x455))*x456);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x457 = INT32_MAX;
	int16_t x458 = 7463;
	uint16_t x459 = 45U;
	int8_t x460 = 1;
	int32_t t76 = 12;

	t76 = ((x457%(x458*x459))*x460);

	if (t76 != 154657) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x461 = UINT16_MAX;
	uint8_t x463 = 3U;
	volatile int64_t t77 = -23929223LL;

	t77 = ((x461%(x462*x463))*x464);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x466 = 11U;
	uint64_t x467 = 108LLU;
	uint64_t x468 = 6423775453386836589LLU;
	volatile uint64_t t78 = 4472LLU;

	t78 = ((x465%(x466*x467))*x468);

	if (t78 != 4162743336907975699LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x476 = INT8_MIN;
	volatile int64_t t79 = -78511656066378LL;

	t79 = ((x473%(x474*x475))*x476);

	if (t79 != -88150656LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x477 = -1LL;
	uint8_t x478 = 50U;
	static volatile uint16_t x480 = 1U;
	static volatile int64_t t80 = 274317993768LL;

	t80 = ((x477%(x478*x479))*x480);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x481 = UINT8_MAX;
	uint16_t x482 = UINT16_MAX;
	int16_t x483 = INT16_MIN;
	int64_t x484 = -2210338495LL;

	t81 = ((x481%(x482*x483))*x484);

	if (t81 != -563636316225LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x489 = 7274U;
	int32_t x490 = 436587502;
	static int64_t x491 = -7081LL;
	volatile int64_t t82 = -37LL;

	t82 = ((x489%(x490*x491))*x492);

	if (t82 != 429166LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x493 = -168913793LL;
	uint16_t x495 = 39U;
	int16_t x496 = INT16_MIN;
	int64_t t83 = -571197LL;

	t83 = ((x493%(x494*x495))*x496);

	if (t83 != 146833408LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x498 = -1LL;
	int16_t x499 = INT16_MIN;
	volatile uint64_t x500 = 16570884LLU;
	uint64_t t84 = 15449938851959031LLU;

	t84 = ((x497%(x498*x499))*x500);

	if (t84 != 209837104092LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x501 = 2U;
	uint64_t x503 = UINT64_MAX;
	uint16_t x504 = 27U;
	uint64_t t85 = 234307442LLU;

	t85 = ((x501%(x502*x503))*x504);

	if (t85 != 54LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x505 = INT32_MIN;
	static volatile uint64_t x506 = 153739712247872LLU;
	int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;
	volatile uint64_t t86 = 15087331469003LLU;

	t86 = ((x505%(x506*x507))*x508);

	if (t86 != 293279333546459136LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x509 = UINT64_MAX;
	volatile uint64_t x510 = 2LLU;
	uint64_t x511 = 21288306225750LLU;
	volatile uint64_t t87 = 4633234137359LLU;

	t87 = ((x509%(x510*x511))*x512);

	if (t87 != 18446743110736890001LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x513 = -1;
	uint32_t x514 = UINT32_MAX;
	volatile int64_t x515 = 5192LL;
	uint64_t x516 = 768334LLU;
	static volatile uint64_t t88 = 0LLU;

	t88 = ((x513%(x514*x515))*x516);

	if (t88 != 18446744073708783282LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x521 = INT16_MAX;
	int8_t x523 = -5;
	volatile int8_t x524 = INT8_MIN;
	uint32_t t89 = 64902007U;

	t89 = ((x521%(x522*x523))*x524);

	if (t89 != 4290773120U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x529 = 0U;
	volatile int16_t x530 = -1;
	static uint16_t x532 = UINT16_MAX;
	int32_t t90 = 22445043;

	t90 = ((x529%(x530*x531))*x532);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x533 = -8598763518790273LL;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = 1;

	t91 = ((x533%(x534*x535))*x536);

	if (t91 != 30464LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x537 = -1;
	int16_t x538 = INT16_MAX;
	uint32_t x539 = 77831U;
	volatile uint32_t t92 = 1179U;

	t92 = ((x537%(x538*x539))*x540);

	if (t92 != 1879396346U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x553 = UINT8_MAX;
	int32_t x554 = -1;
	uint32_t x555 = 1541U;
	int32_t x556 = 1;
	uint32_t t93 = 30237U;

	t93 = ((x553%(x554*x555))*x556);

	if (t93 != 255U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x565 = INT8_MAX;
	int8_t x566 = INT8_MAX;
	uint16_t x567 = 1U;
	static int32_t x568 = 386183358;

	t94 = ((x565%(x566*x567))*x568);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x569 = INT32_MIN;
	volatile int32_t x570 = 1983;
	int16_t x571 = 1612;
	int8_t x572 = INT8_MAX;
	int32_t t95 = 5;

	t95 = ((x569%(x570*x571))*x572);

	if (t95 != -326101964) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x577 = UINT8_MAX;
	int16_t x579 = -1;
	volatile int64_t x580 = INT64_MIN;

	t96 = ((x577%(x578*x579))*x580);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x581 = 60U;
	static int32_t x582 = 1;
	int16_t x584 = -379;
	static int32_t t97 = 0;

	t97 = ((x581%(x582*x583))*x584);

	if (t97 != -22740) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x585 = INT16_MIN;
	int64_t x586 = 107900LL;
	volatile int32_t x587 = -1;

	t98 = ((x585%(x586*x587))*x588);

	if (t98 != -1638400LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x589 = 4388795LL;
	uint64_t x590 = 113586957399624LLU;
	static uint64_t x591 = UINT64_MAX;
	int16_t x592 = -6731;

	t99 = ((x589%(x590*x591))*x592);

	if (t99 != 18446744044168572471LLU) { NG(); } else { ; }
	
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

