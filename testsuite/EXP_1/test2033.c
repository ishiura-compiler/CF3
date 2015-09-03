#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x14 = INT8_MAX;
int16_t x15 = 3920;
int32_t x17 = INT32_MIN;
volatile int64_t t4 = -292LL;
static int64_t x33 = 235733269552952LL;
int32_t x34 = 154;
int64_t t6 = 375693LL;
int8_t x46 = INT8_MAX;
volatile int8_t x52 = INT8_MIN;
static int64_t x53 = -1LL;
volatile int32_t x57 = -43267;
int64_t x69 = INT64_MIN;
uint32_t x82 = 33650U;
static volatile int64_t t17 = 266LL;
int16_t x101 = INT16_MIN;
uint64_t x102 = 99183794635270584LLU;
int32_t x111 = INT32_MIN;
int64_t t22 = 7663001639LL;
uint64_t x116 = UINT64_MAX;
static volatile int16_t x117 = 0;
uint16_t x120 = 13388U;
int64_t x121 = INT64_MAX;
int32_t x122 = INT32_MAX;
uint8_t x124 = UINT8_MAX;
static int64_t t27 = 16LL;
volatile int32_t t28 = 54036;
static int8_t x139 = INT8_MAX;
int16_t x146 = INT16_MAX;
int32_t t31 = 234;
volatile uint32_t t32 = 7U;
int8_t x154 = INT8_MIN;
volatile uint32_t x158 = 19960U;
uint64_t t34 = 8637LLU;
uint64_t t36 = 92207969088822LLU;
static int64_t x180 = INT64_MAX;
int64_t t38 = -3332251480026709LL;
int32_t x184 = -488;
int8_t x186 = INT8_MIN;
volatile int32_t x190 = INT32_MAX;
volatile int16_t x192 = INT16_MIN;
volatile int32_t t42 = -6;
uint8_t x205 = 1U;
int8_t x210 = 15;
static volatile uint16_t x215 = 16313U;
uint16_t x228 = UINT16_MAX;
int16_t x230 = INT16_MAX;
uint32_t x233 = 1U;
static int32_t t50 = -5;
int32_t x243 = INT32_MAX;
volatile int64_t x251 = -1LL;
volatile int32_t x256 = INT32_MIN;
int64_t t54 = 104146402LL;
uint16_t x257 = 1869U;
volatile int16_t x273 = INT16_MIN;
int64_t x279 = -1LL;
int8_t x281 = -50;
volatile int64_t x295 = INT64_MIN;
volatile int64_t t62 = 111465175LL;
int8_t x299 = INT8_MIN;
int32_t x300 = INT32_MIN;
static volatile int32_t t63 = 0;
int32_t x301 = INT32_MAX;
int16_t x304 = INT16_MAX;
static int64_t t65 = 8873921964904528LL;
int32_t x313 = INT32_MAX;
uint16_t x316 = 1170U;
static int32_t x332 = INT32_MIN;
int8_t x336 = 1;
int32_t x337 = INT32_MAX;
int16_t x342 = 9648;
static volatile int8_t x347 = -1;
static volatile int8_t x348 = 1;
static int8_t x350 = -1;
volatile int16_t x351 = INT16_MAX;
int32_t t75 = 61617395;
uint16_t x356 = 1U;
int64_t x363 = -3497LL;
int32_t x368 = -1;
uint32_t x369 = 48005U;
uint64_t x371 = 997841774188435477LLU;
int8_t x377 = -7;
static int8_t x380 = -1;
int64_t x388 = -1718243988117194LL;
int64_t t83 = 556LL;
volatile int8_t x389 = 1;
uint32_t x393 = UINT32_MAX;
volatile uint64_t t85 = 59587LLU;
static int8_t x404 = -1;
volatile uint32_t t88 = 462056U;
int32_t x426 = -1736;
uint16_t x428 = 17790U;
int32_t x437 = -1;
int32_t x447 = INT32_MIN;
static int16_t x460 = -1;


void f0(void) {
	int16_t x1 = -1;
	int8_t x2 = -1;
	volatile int64_t x3 = -1378176845481648LL;
	volatile uint16_t x4 = 9071U;
	int64_t t0 = 450807LL;

	t0 = (((x1^x2)+x3)%x4);

	if (t0 != -71LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = -1LL;
	static volatile uint8_t x16 = 2U;
	volatile int64_t t1 = -177LL;

	t1 = (((x13^x14)+x15)%x16);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = INT16_MIN;
	int16_t x19 = -1;
	volatile int8_t x20 = INT8_MIN;
	int32_t t2 = 1;

	t2 = (((x17^x18)+x19)%x20);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -1;
	int16_t x22 = -1;
	uint32_t x23 = 214207812U;
	int32_t x24 = INT32_MIN;
	volatile uint32_t t3 = 38U;

	t3 = (((x21^x22)+x23)%x24);

	if (t3 != 214207812U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MIN;
	volatile int64_t x28 = 1881708LL;

	t4 = (((x25^x26)+x27)%x28);

	if (t4 != -280688LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 5U;
	int16_t x30 = INT16_MAX;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -135219619LL;
	volatile int64_t t5 = -137945644538172828LL;

	t5 = (((x29^x30)+x31)%x32);

	if (t5 != 32634LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MIN;

	t6 = (((x33^x34)+x35)%x36);

	if (t6 != -24670LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MAX;
	volatile uint16_t x38 = UINT16_MAX;
	int8_t x39 = -49;
	static volatile int16_t x40 = 28;
	int64_t t7 = 106742502LL;

	t7 = (((x37^x38)+x39)%x40);

	if (t7 != 27LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1254968616LL;
	static uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 469200515U;
	uint8_t x44 = UINT8_MAX;
	uint64_t t8 = 1250703971444175435LLU;

	t8 = (((x41^x42)+x43)%x44);

	if (t8 != 145LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MIN;
	static uint32_t t9 = 157U;

	t9 = (((x45^x46)+x47)%x48);

	if (t9 != 127U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 464U;
	int32_t x50 = INT32_MIN;
	static volatile int8_t x51 = INT8_MAX;
	int32_t t10 = 98069635;

	t10 = (((x49^x50)+x51)%x52);

	if (t10 != -49) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x54 = 4781;
	uint32_t x55 = UINT32_MAX;
	uint32_t x56 = 3906U;
	int64_t t11 = 1LL;

	t11 = (((x53^x54)+x55)%x56);

	if (t11 != 3033LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x58 = 10U;
	int32_t x59 = INT32_MAX;
	volatile int32_t x60 = 129340;
	uint32_t t12 = 127U;

	t12 = (((x57^x58)+x59)%x60);

	if (t12 != 8354U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 1905LL;
	uint16_t x62 = UINT16_MAX;
	int64_t x63 = INT64_MIN;
	uint64_t x64 = 7467695415584LLU;
	volatile uint64_t t13 = 132434476628170114LLU;

	t13 = (((x61^x62)+x63)%x64);

	if (t13 != 6493676209870LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x70 = UINT32_MAX;
	volatile int8_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int64_t t14 = 14664569939LL;

	t14 = (((x69^x70)+x71)%x72);

	if (t14 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = -1LL;
	int16_t x74 = INT16_MAX;
	static volatile int8_t x75 = INT8_MIN;
	int16_t x76 = 106;
	volatile int64_t t15 = -548259051523564LL;

	t15 = (((x73^x74)+x75)%x76);

	if (t15 != -36LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x77 = 423031679U;
	static int32_t x78 = INT32_MIN;
	volatile uint16_t x79 = 1U;
	int32_t x80 = INT32_MAX;
	uint32_t t16 = 13287900U;

	t16 = (((x77^x78)+x79)%x80);

	if (t16 != 423031681U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	int64_t x84 = 462591600LL;

	t17 = (((x81^x82)+x83)%x84);

	if (t17 != 33650LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x90 = UINT32_MAX;
	static volatile int64_t x91 = INT64_MIN;
	uint32_t x92 = UINT32_MAX;
	int64_t t18 = -662967100153843LL;

	t18 = (((x89^x90)+x91)%x92);

	if (t18 != -2147516415LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	volatile int16_t x98 = INT16_MAX;
	volatile int64_t x99 = INT64_MAX;
	static int64_t x100 = INT64_MAX;
	static volatile int64_t t19 = -3LL;

	t19 = (((x97^x98)+x99)%x100);

	if (t19 != 32766LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x103 = 0U;
	int16_t x104 = 4829;
	uint64_t t20 = 5631897LLU;

	t20 = (((x101^x102)+x103)%x104);

	if (t20 != 1821LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = INT16_MIN;
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = 516450635LL;
	int32_t x108 = INT32_MIN;
	volatile uint64_t t21 = 33401180LLU;

	t21 = (((x105^x106)+x107)%x108);

	if (t21 != 516483402LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 14U;
	static int32_t x110 = INT32_MAX;
	int64_t x112 = INT64_MIN;

	t22 = (((x109^x110)+x111)%x112);

	if (t22 != 4294967281LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = 0U;
	volatile uint32_t x114 = 61U;
	int8_t x115 = -1;
	volatile uint64_t t23 = 16155765LLU;

	t23 = (((x113^x114)+x115)%x116);

	if (t23 != 60LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x118 = UINT16_MAX;
	uint32_t x119 = 1179U;
	uint32_t t24 = 324747396U;

	t24 = (((x117^x118)+x119)%x120);

	if (t24 != 13162U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x123 = -1;
	int64_t t25 = 148LL;

	t25 = (((x121^x122)+x123)%x124);

	if (t25 != 254LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x125 = 0;
	uint64_t x126 = UINT64_MAX;
	static int64_t x127 = INT64_MIN;
	static int8_t x128 = -1;
	volatile uint64_t t26 = 3LLU;

	t26 = (((x125^x126)+x127)%x128);

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -180753LL;
	volatile int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MIN;
	int32_t x132 = 15840186;

	t27 = (((x129^x130)+x131)%x132);

	if (t27 != 8845017LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = -26;
	int8_t x134 = 1;
	volatile int8_t x135 = 7;
	int32_t x136 = -1;

	t28 = (((x133^x134)+x135)%x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x137 = 1;
	static int64_t x138 = INT64_MIN;
	static volatile int32_t x140 = 72731;
	volatile int64_t t29 = -845130LL;

	t29 = (((x137^x138)+x139)%x140);

	if (t29 != -8482LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = INT16_MIN;
	static int8_t x142 = -1;
	uint16_t x143 = 112U;
	int64_t x144 = INT64_MAX;
	int64_t t30 = 1LL;

	t30 = (((x141^x142)+x143)%x144);

	if (t30 != 32879LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x145 = 11U;
	int8_t x147 = INT8_MAX;
	static int8_t x148 = INT8_MIN;

	t31 = (((x145^x146)+x147)%x148);

	if (t31 != 115) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MAX;
	int8_t x151 = 5;
	volatile int16_t x152 = -1;

	t32 = (((x149^x150)+x151)%x152);

	if (t32 != 2147483653U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -14;
	int16_t x155 = 216;
	uint8_t x156 = 5U;
	volatile int32_t t33 = -5852;

	t33 = (((x153^x154)+x155)%x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x157 = INT8_MIN;
	uint8_t x159 = 0U;
	uint64_t x160 = UINT64_MAX;

	t34 = (((x157^x158)+x159)%x160);

	if (t34 != 4294947448LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	uint8_t x163 = 0U;
	uint16_t x164 = 1894U;
	int64_t t35 = 107457425LL;

	t35 = (((x161^x162)+x163)%x164);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x169 = INT16_MIN;
	volatile int8_t x170 = -2;
	uint64_t x171 = UINT64_MAX;
	static int64_t x172 = INT64_MIN;

	t36 = (((x169^x170)+x171)%x172);

	if (t36 != 32765LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = -1;
	static int8_t x174 = INT8_MIN;
	uint64_t x175 = 392434207LLU;
	uint32_t x176 = 190046765U;
	volatile uint64_t t37 = 58313113025262855LLU;

	t37 = (((x173^x174)+x175)%x176);

	if (t37 != 12340804LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x177 = -1;
	static int8_t x178 = 0;
	uint8_t x179 = 80U;

	t38 = (((x177^x178)+x179)%x180);

	if (t38 != 79LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x181 = 4617U;
	uint32_t x182 = 0U;
	int64_t x183 = 59742766353111LL;
	static int64_t t39 = -3108761LL;

	t39 = (((x181^x182)+x183)%x184);

	if (t39 != 352LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x185 = -1;
	volatile int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t40 = 6351473;

	t40 = (((x185^x186)+x187)%x188);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = 1653;
	volatile uint8_t x191 = UINT8_MAX;
	int32_t t41 = 89935;

	t41 = (((x189^x190)+x191)%x192);

	if (t41 != 31369) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MAX;
	uint16_t x195 = 930U;
	volatile int8_t x196 = 2;

	t42 = (((x193^x194)+x195)%x196);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x206 = 198217U;
	uint64_t x207 = 24312906671397LLU;
	int32_t x208 = -1;
	volatile uint64_t t43 = 6843751619207248560LLU;

	t43 = (((x205^x206)+x207)%x208);

	if (t43 != 24312906869613LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x211 = 2093148073456787LLU;
	volatile int64_t x212 = -1LL;
	static volatile uint64_t t44 = 32956419LLU;

	t44 = (((x209^x210)+x211)%x212);

	if (t44 != 9225465184928232610LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x213 = INT32_MIN;
	uint32_t x214 = 1937425U;
	int32_t x216 = INT32_MIN;
	volatile uint32_t t45 = 2963653U;

	t45 = (((x213^x214)+x215)%x216);

	if (t45 != 1953738U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 1433123044991LLU;
	static uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = 73LLU;
	uint64_t t46 = 3LLU;

	t46 = (((x221^x222)+x223)%x224);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = UINT64_MAX;
	uint8_t x226 = 2U;
	static int32_t x227 = INT32_MIN;
	uint64_t t47 = 733170932695247309LLU;

	t47 = (((x225^x226)+x227)%x228);

	if (t47 != 32765LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = 192946229408LL;
	volatile int64_t x231 = INT64_MIN;
	volatile uint16_t x232 = 6U;
	int64_t t48 = 3055122LL;

	t48 = (((x229^x230)+x231)%x232);

	if (t48 != -5LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x234 = INT8_MIN;
	int32_t x235 = -3003;
	static uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t49 = 15813457LLU;

	t49 = (((x233^x234)+x235)%x236);

	if (t49 != 4294964166LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = -1645569;
	static int32_t x238 = -2633479;
	int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MAX;

	t50 = (((x237^x238)+x239)%x240);

	if (t50 != -85) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x241 = INT64_MIN;
	static uint64_t x242 = 11786710578LLU;
	int8_t x244 = INT8_MAX;
	static uint64_t t51 = 66773068LLU;

	t51 = (((x241^x242)+x243)%x244);

	if (t51 != 98LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x245 = 195474LLU;
	int16_t x246 = 4428;
	uint16_t x247 = UINT16_MAX;
	static uint8_t x248 = 70U;
	volatile uint64_t t52 = 5LLU;

	t52 = (((x245^x246)+x247)%x248);

	if (t52 != 43LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = INT16_MAX;
	static uint16_t x250 = 7766U;
	uint16_t x252 = 7424U;
	static int64_t t53 = 270781984058LL;

	t53 = (((x249^x250)+x251)%x252);

	if (t53 != 2728LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x253 = -1LL;
	int16_t x254 = INT16_MAX;
	int32_t x255 = INT32_MIN;

	t54 = (((x253^x254)+x255)%x256);

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x258 = -694LL;
	volatile uint16_t x259 = 30998U;
	uint8_t x260 = UINT8_MAX;
	volatile int64_t t55 = -15901741087751472LL;

	t55 = (((x257^x258)+x259)%x260);

	if (t55 != 144LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = 5;
	int16_t x262 = -8;
	static int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t56 = -6;

	t56 = (((x261^x262)+x263)%x264);

	if (t56 != 124) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MIN;
	uint32_t x267 = 27962227U;
	uint32_t x268 = 89U;
	uint32_t t57 = 21901U;

	t57 = (((x265^x266)+x267)%x268);

	if (t57 != 57U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x274 = 0;
	volatile int8_t x275 = 0;
	static int64_t x276 = 384408335412952845LL;
	static volatile int64_t t58 = 6612LL;

	t58 = (((x273^x274)+x275)%x276);

	if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = 9604LL;
	uint8_t x278 = 1U;
	volatile int32_t x280 = INT32_MAX;
	int64_t t59 = 59LL;

	t59 = (((x277^x278)+x279)%x280);

	if (t59 != 9604LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x282 = -5;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MIN;
	uint32_t t60 = 7U;

	t60 = (((x281^x282)+x283)%x284);

	if (t60 != 52U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x290 = 50776U;
	volatile int16_t x291 = INT16_MIN;
	volatile int32_t x292 = -1;
	static uint32_t t61 = 57734002U;

	t61 = (((x289^x290)+x291)%x292);

	if (t61 != 2147501656U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x293 = INT8_MIN;
	int64_t x294 = -1LL;
	int16_t x296 = -11;

	t62 = (((x293^x294)+x295)%x296);

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x297 = 24;
	static int8_t x298 = 1;

	t63 = (((x297^x298)+x299)%x300);

	if (t63 != -103) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x302 = INT16_MIN;
	int16_t x303 = -10;
	volatile int32_t t64 = -18934;

	t64 = (((x301^x302)+x303)%x304);

	if (t64 != -12) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MAX;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = -1LL;

	t65 = (((x305^x306)+x307)%x308);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MIN;
	volatile uint64_t x311 = 171LLU;
	static int64_t x312 = -2880834961071723LL;
	volatile uint64_t t66 = 7LLU;

	t66 = (((x309^x310)+x311)%x312);

	if (t66 != 171LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x314 = 3U;
	int64_t x315 = -18361963379311LL;
	static int64_t t67 = 242188505LL;

	t67 = (((x313^x314)+x315)%x316);

	if (t67 != -207LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = -19743444460299LL;
	uint32_t x318 = 3U;
	static int32_t x319 = INT32_MIN;
	static int8_t x320 = 6;
	int64_t t68 = 21447576734LL;

	t68 = (((x317^x318)+x319)%x320);

	if (t68 != -4LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x321 = UINT32_MAX;
	int32_t x322 = INT32_MAX;
	int16_t x323 = -1;
	int32_t x324 = INT32_MIN;
	static volatile uint32_t t69 = 949U;

	t69 = (((x321^x322)+x323)%x324);

	if (t69 != 2147483647U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = -1;
	static int32_t x331 = -10;
	int32_t t70 = 267928485;

	t70 = (((x329^x330)+x331)%x332);

	if (t70 != 117) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x333 = 0U;
	uint8_t x334 = 2U;
	uint64_t x335 = 245198908LLU;
	uint64_t t71 = 109LLU;

	t71 = (((x333^x334)+x335)%x336);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MAX;
	static int32_t x340 = 6612098;
	int32_t t72 = 0;

	t72 = (((x337^x338)+x339)%x340);

	if (t72 != 5163895) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = INT8_MIN;
	volatile uint8_t x343 = UINT8_MAX;
	static int16_t x344 = -1;
	int32_t t73 = 1;

	t73 = (((x341^x342)+x343)%x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = 0;
	volatile int32_t t74 = 205;

	t74 = (((x345^x346)+x347)%x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x349 = INT16_MIN;
	int32_t x352 = -186809;

	t75 = (((x349^x350)+x351)%x352);

	if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = 1;
	static int8_t x354 = -1;
	int8_t x355 = -11;
	static volatile int32_t t76 = 187;

	t76 = (((x353^x354)+x355)%x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x361 = 3088446691591LLU;
	int64_t x362 = 11227881822LL;
	uint16_t x364 = 6U;
	uint64_t t77 = 320566385885307076LLU;

	t77 = (((x361^x362)+x363)%x364);

	if (t77 != 4LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = -1;
	volatile uint32_t x366 = 16686950U;
	int32_t x367 = INT32_MIN;
	volatile uint32_t t78 = 41U;

	t78 = (((x365^x366)+x367)%x368);

	if (t78 != 2130796697U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x370 = 1330U;
	int8_t x372 = INT8_MAX;
	volatile uint64_t t79 = 12LLU;

	t79 = (((x369^x370)+x371)%x372);

	if (t79 != 49LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = -1289;
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MAX;
	int64_t t80 = 1LL;

	t80 = (((x373^x374)+x375)%x376);

	if (t80 != 9223372036854774391LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x378 = 274414272U;
	uint8_t x379 = 2U;
	static uint32_t t81 = 76874044U;

	t81 = (((x377^x378)+x379)%x380);

	if (t81 != 4020553019U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x381 = -1;
	volatile int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MIN;
	int32_t x384 = -5720;
	int32_t t82 = 110014533;

	t82 = (((x381^x382)+x383)%x384);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x386 = INT16_MIN;
	int32_t x387 = -1;

	t83 = (((x385^x386)+x387)%x388);

	if (t83 != 32766LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x390 = 26U;
	int8_t x391 = -1;
	int32_t x392 = 505796;
	int32_t t84 = 31;

	t84 = (((x389^x390)+x391)%x392);

	if (t84 != 26) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x394 = UINT64_MAX;
	static uint8_t x395 = 82U;
	int32_t x396 = INT32_MIN;

	t85 = (((x393^x394)+x395)%x396);

	if (t85 != 18446744069414584402LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = 57495950718678020LL;
	static uint64_t x398 = 65156851LLU;
	int64_t x399 = INT64_MAX;
	uint64_t x400 = UINT64_MAX;
	static volatile uint64_t t86 = 63105871826LLU;

	t86 = (((x397^x398)+x399)%x400);

	if (t86 != 9280867987554697974LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = INT64_MIN;
	volatile int16_t x402 = -1;
	int32_t x403 = INT32_MIN;
	int64_t t87 = -840LL;

	t87 = (((x401^x402)+x403)%x404);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = INT32_MIN;
	volatile int16_t x406 = -56;
	int8_t x407 = -1;
	volatile uint32_t x408 = 713U;

	t88 = (((x405^x406)+x407)%x408);

	if (t88 != 317U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x409 = INT64_MAX;
	static uint32_t x410 = 0U;
	static int32_t x411 = -1;
	int16_t x412 = -87;
	volatile int64_t t89 = 49646471388875368LL;

	t89 = (((x409^x410)+x411)%x412);

	if (t89 != 39LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x413 = 1U;
	volatile int8_t x414 = INT8_MIN;
	uint32_t x415 = 0U;
	int32_t x416 = -914;
	static uint32_t t90 = 0U;

	t90 = (((x413^x414)+x415)%x416);

	if (t90 != 787U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = 74978779;
	volatile int64_t x422 = -46413076LL;
	int64_t x423 = INT64_MAX;
	static uint32_t x424 = 230840617U;
	int64_t t91 = 90435348LL;

	t91 = (((x421^x422)+x423)%x424);

	if (t91 != 86337044LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x425 = INT8_MAX;
	volatile int32_t x427 = -62;
	static int32_t t92 = 51;

	t92 = (((x425^x426)+x427)%x428);

	if (t92 != -1783) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = 964U;
	uint16_t x430 = 33U;
	volatile int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MAX;
	uint32_t t93 = 244622U;

	t93 = (((x429^x430)+x431)%x432);

	if (t93 != 869U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = 3700;
	static int32_t x434 = INT32_MAX;
	uint16_t x435 = 263U;
	static volatile int8_t x436 = -2;
	volatile int32_t t94 = -12;

	t94 = (((x433^x434)+x435)%x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x438 = INT32_MIN;
	static int16_t x439 = INT16_MIN;
	uint64_t x440 = 64807LLU;
	uint64_t t95 = 19577476994113074LLU;

	t95 = (((x437^x438)+x439)%x440);

	if (t95 != 6127LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = INT8_MIN;
	int64_t x446 = 0LL;
	int64_t x448 = -1LL;
	volatile int64_t t96 = -3LL;

	t96 = (((x445^x446)+x447)%x448);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x449 = INT16_MIN;
	int16_t x450 = 251;
	int16_t x451 = -1;
	int64_t x452 = -757875015861LL;
	int64_t t97 = -24LL;

	t97 = (((x449^x450)+x451)%x452);

	if (t97 != -32518LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = INT8_MAX;
	static uint16_t x454 = 0U;
	int8_t x455 = INT8_MAX;
	int32_t x456 = 36;
	static int32_t t98 = 289671947;

	t98 = (((x453^x454)+x455)%x456);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = INT16_MIN;
	int32_t x458 = 81529;
	int8_t x459 = INT8_MAX;
	static int32_t t99 = 1;

	t99 = (((x457^x458)+x459)%x460);

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

