#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
uint16_t x18 = 17U;
volatile uint64_t t2 = 150184547789122252LLU;
static int16_t x25 = INT16_MIN;
volatile int32_t x27 = -3;
volatile int64_t x40 = 1652453LL;
int64_t t8 = -2622172006977789LL;
int16_t x62 = -1;
static int64_t x64 = INT64_MIN;
uint32_t t12 = 1086U;
volatile int8_t x69 = INT8_MIN;
int16_t x70 = INT16_MIN;
uint64_t t14 = 255337940481281LLU;
int32_t x83 = -1;
uint16_t x87 = 8027U;
volatile uint64_t t17 = 314717336LLU;
uint16_t x93 = UINT16_MAX;
volatile int32_t x96 = -1;
int32_t t23 = -6;
volatile int32_t x138 = -1;
uint64_t x139 = UINT64_MAX;
volatile int8_t x143 = INT8_MIN;
uint16_t x145 = UINT16_MAX;
volatile int32_t t26 = 0;
uint16_t x161 = 50U;
int32_t x163 = INT32_MAX;
volatile int64_t t30 = 1621150999LL;
volatile int32_t x171 = INT32_MIN;
int16_t x177 = INT16_MIN;
volatile int16_t x179 = INT16_MIN;
volatile int64_t t32 = INT64_MIN;
int64_t x185 = INT64_MIN;
int32_t x187 = 103;
uint8_t x190 = 61U;
uint64_t x191 = UINT64_MAX;
static uint32_t x193 = 15145012U;
int16_t x194 = -1;
uint64_t x195 = 4519290118663459831LLU;
uint32_t x197 = 1048510U;
int8_t x204 = INT8_MAX;
static int32_t t37 = -1;
uint8_t x205 = UINT8_MAX;
static int64_t t39 = 1621177195196LL;
volatile int32_t t40 = -491576;
uint32_t x221 = 49321U;
int8_t x225 = INT8_MIN;
int64_t x228 = -25513489830LL;
volatile uint64_t t42 = 1435833813341116LLU;
int64_t x230 = 5734966042LL;
volatile uint64_t t43 = 109767214335823LLU;
static int64_t x237 = INT64_MAX;
int64_t t45 = 164923650103287285LL;
volatile uint64_t t46 = 124505078471070012LLU;
volatile int8_t x255 = -3;
uint32_t t49 = 12145990U;
int8_t x266 = INT8_MIN;
int64_t x268 = 292LL;
int32_t x269 = 43;
volatile int16_t x273 = -2;
uint8_t x275 = 0U;
uint16_t x290 = 11U;
static volatile int64_t x292 = -1LL;
uint64_t x293 = UINT64_MAX;
static volatile int64_t x302 = -1LL;
int64_t x303 = INT64_MIN;
int8_t x305 = -1;
static uint32_t x311 = 41U;
volatile int32_t x317 = 21944;
int64_t x321 = INT64_MAX;
static int16_t x323 = -1;
int16_t x324 = INT16_MIN;
int32_t t65 = 187007045;
uint16_t x336 = UINT16_MAX;
int8_t x338 = 1;
int32_t t68 = -3;
static uint64_t x345 = 3785269709539LLU;
uint16_t x346 = 220U;
uint8_t x347 = 0U;
int32_t x349 = -1;
int64_t x355 = -195979LL;
uint16_t x356 = 41U;
int32_t x380 = INT32_MIN;
uint8_t x387 = 11U;
uint8_t x390 = 0U;
volatile uint64_t x391 = UINT64_MAX;
uint64_t t80 = 8067649274203646523LLU;
uint64_t x400 = 705137894LLU;
uint64_t t81 = 95311390031LLU;
static int32_t x401 = INT32_MAX;
int8_t x403 = -1;
volatile int32_t x405 = INT32_MAX;
volatile uint64_t t85 = 2599494464937629722LLU;
static volatile int16_t x425 = INT16_MIN;
static uint8_t x432 = 3U;
uint16_t x436 = 4185U;
volatile int64_t x437 = INT64_MIN;
int64_t t90 = -794838894755359047LL;
int64_t x442 = -790559923103LL;
int16_t x444 = INT16_MIN;
volatile int64_t t92 = -770568770952757LL;
volatile uint8_t x459 = 4U;
int32_t x471 = INT32_MIN;
volatile int64_t x472 = -28807LL;
int32_t x475 = INT32_MIN;
int32_t t97 = -3678;
static uint32_t x478 = 3U;
uint32_t x481 = 24U;
static int8_t x483 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MIN;
	static uint32_t x3 = UINT32_MAX;
	static uint8_t x4 = 16U;
	uint32_t t0 = 3017U;

	t0 = (((x1-x2)+x3)&x4);

	if (t0 != 16U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = -1;
	static uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = 2637;

	t1 = (((x5-x6)+x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x17 = -1;
	int8_t x19 = -1;
	volatile uint64_t x20 = 60670LLU;

	t2 = (((x17-x18)+x19)&x20);

	if (t2 != 60652LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MAX;
	static int16_t x23 = INT16_MIN;
	volatile uint64_t x24 = 4334992497789464LLU;
	uint64_t t3 = 152349737900249490LLU;

	t3 = (((x21-x22)+x23)&x24);

	if (t3 != 4334992497770496LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = 2605254;
	uint32_t x28 = 8286596U;
	uint32_t t4 = 10116U;

	t4 = (((x25-x26)+x27)&x28);

	if (t4 != 5648644U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x33 = UINT8_MAX;
	uint16_t x34 = 4U;
	static volatile uint32_t x35 = 24109U;
	static int8_t x36 = -1;
	static uint32_t t5 = 213U;

	t5 = (((x33-x34)+x35)&x36);

	if (t5 != 24360U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -1;
	int64_t x38 = -935728431LL;
	uint16_t x39 = UINT16_MAX;
	static volatile int64_t t6 = 8LL;

	t6 = (((x37-x38)+x39)&x40);

	if (t6 != 70693LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -2;
	volatile int8_t x42 = 0;
	int16_t x43 = 47;
	int64_t x44 = INT64_MAX;
	int64_t t7 = 188127359753036LL;

	t7 = (((x41-x42)+x43)&x44);

	if (t7 != 45LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x45 = UINT32_MAX;
	int8_t x46 = INT8_MIN;
	int16_t x47 = -12522;
	int64_t x48 = -1LL;

	t8 = (((x45-x46)+x47)&x48);

	if (t8 != 4294954901LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = 51018LL;
	uint8_t x50 = 6U;
	int8_t x51 = -1;
	uint16_t x52 = 549U;
	int64_t t9 = -13355LL;

	t9 = (((x49-x50)+x51)&x52);

	if (t9 != 513LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -39090069LL;
	int16_t x54 = -27;
	int32_t x55 = INT32_MAX;
	int32_t x56 = INT32_MIN;
	volatile int64_t t10 = 36280362579340LL;

	t10 = (((x53-x54)+x55)&x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 424222476U;
	int16_t x63 = INT16_MIN;
	volatile int64_t t11 = 3LL;

	t11 = (((x61-x62)+x63)&x64);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 944670325U;
	static uint16_t x66 = 2U;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = UINT8_MAX;

	t12 = (((x65-x66)+x67)&x68);

	if (t12 != 243U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	uint64_t t13 = 47534258211109LLU;

	t13 = (((x69-x70)+x71)&x72);

	if (t13 != 32512LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MAX;
	static int64_t x75 = INT64_MIN;
	static int16_t x76 = -1;

	t14 = (((x73-x74)+x75)&x76);

	if (t14 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	volatile uint16_t x78 = 3071U;
	int64_t x79 = -130476564513LL;
	int8_t x80 = INT8_MAX;
	int64_t t15 = 4568589255LL;

	t15 = (((x77-x78)+x79)&x80);

	if (t15 != 96LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = -1LL;
	uint8_t x82 = UINT8_MAX;
	int8_t x84 = -1;
	volatile int64_t t16 = -221LL;

	t16 = (((x81-x82)+x83)&x84);

	if (t16 != -257LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 184387963520307153LLU;
	uint16_t x86 = 101U;
	int64_t x88 = INT64_MAX;

	t17 = (((x85-x86)+x87)&x88);

	if (t17 != 184387963520315079LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x94 = 658744U;
	int8_t x95 = -55;
	volatile uint32_t t18 = 47U;

	t18 = (((x93-x94)+x95)&x96);

	if (t18 != 4294374032U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = -1;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	int16_t x108 = 86;
	volatile int32_t t19 = -14;

	t19 = (((x105-x106)+x107)&x108);

	if (t19 != 86) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = -1;
	int32_t x110 = 373217;
	volatile int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MIN;
	int32_t t20 = INT32_MIN;

	t20 = (((x109-x110)+x111)&x112);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x121 = INT64_MAX;
	uint16_t x122 = 3U;
	int32_t x123 = INT32_MIN;
	uint64_t x124 = 1646451709912358LLU;
	uint64_t t21 = 533948999LLU;

	t21 = (((x121-x122)+x123)&x124);

	if (t21 != 1646451709912356LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x129 = 275151735666LLU;
	static int64_t x130 = -1LL;
	static int32_t x131 = INT32_MAX;
	int16_t x132 = -1;
	uint64_t t22 = 3LLU;

	t22 = (((x129-x130)+x131)&x132);

	if (t22 != 277299219314LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MAX;
	static volatile int32_t x135 = -1;
	volatile uint16_t x136 = 15539U;

	t23 = (((x133-x134)+x135)&x136);

	if (t23 != 15539) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x140 = 5404224;
	uint64_t t24 = 2634253547540350LLU;

	t24 = (((x137-x138)+x139)&x140);

	if (t24 != 5404224LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x141 = 1680;
	volatile int32_t x142 = 1;
	int16_t x144 = -1;
	int32_t t25 = -13;

	t25 = (((x141-x142)+x143)&x144);

	if (t25 != 1551) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x146 = INT8_MAX;
	static uint16_t x147 = 4U;
	int32_t x148 = -1;

	t26 = (((x145-x146)+x147)&x148);

	if (t26 != 65412) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = -27;
	volatile int32_t x150 = 1013;
	int16_t x151 = -1;
	static int8_t x152 = -1;
	int32_t t27 = 684;

	t27 = (((x149-x150)+x151)&x152);

	if (t27 != -1041) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x153 = 19574049;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MAX;
	int32_t x156 = 5;
	volatile uint32_t t28 = 1U;

	t28 = (((x153-x154)+x155)&x156);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x162 = INT8_MAX;
	int32_t x164 = 5694;
	static int32_t t29 = -93;

	t29 = (((x161-x162)+x163)&x164);

	if (t29 != 5682) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x165 = -1LL;
	uint8_t x166 = 3U;
	static uint16_t x167 = 3799U;
	volatile int8_t x168 = INT8_MAX;

	t30 = (((x165-x166)+x167)&x168);

	if (t30 != 83LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x169 = 6U;
	int16_t x170 = -1;
	volatile int8_t x172 = INT8_MIN;
	uint32_t t31 = 11201257U;

	t31 = (((x169-x170)+x171)&x172);

	if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x178 = INT16_MAX;
	int64_t x180 = INT64_MIN;

	t32 = (((x177-x178)+x179)&x180);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x186 = INT64_MIN;
	static int32_t x188 = 394;
	volatile int64_t t33 = -19949LL;

	t33 = (((x185-x186)+x187)&x188);

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x189 = UINT8_MAX;
	int32_t x192 = INT32_MAX;
	uint64_t t34 = 0LLU;

	t34 = (((x189-x190)+x191)&x192);

	if (t34 != 193LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x196 = UINT64_MAX;
	uint64_t t35 = 2208162727557375LLU;

	t35 = (((x193-x194)+x195)&x196);

	if (t35 != 4519290118678604844LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x198 = 6746204075712LLU;
	int64_t x199 = INT64_MIN;
	static int16_t x200 = -1;
	static volatile uint64_t t36 = 826LLU;

	t36 = (((x197-x198)+x199)&x200);

	if (t36 != 9223365290651748606LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x201 = 2U;
	volatile int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MIN;

	t37 = (((x201-x202)+x203)&x204);

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x206 = 1U;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = 0U;
	uint32_t t38 = 0U;

	t38 = (((x205-x206)+x207)&x208);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = -1LL;
	int8_t x215 = INT8_MIN;
	int32_t x216 = -7639624;

	t39 = (((x213-x214)+x215)&x216);

	if (t39 != -7639808LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x217 = -1;
	int32_t x218 = INT32_MIN;
	uint16_t x219 = 0U;
	volatile int16_t x220 = INT16_MAX;

	t40 = (((x217-x218)+x219)&x220);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x222 = INT8_MIN;
	uint64_t x223 = 0LLU;
	static uint32_t x224 = UINT32_MAX;
	static uint64_t t41 = 47457845789LLU;

	t41 = (((x221-x222)+x223)&x224);

	if (t41 != 49449LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x226 = 1410LL;
	uint64_t x227 = UINT64_MAX;

	t42 = (((x225-x226)+x227)&x228);

	if (t42 != 18446744048196061272LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x229 = 7721650443358706138LLU;
	uint16_t x231 = UINT16_MAX;
	int8_t x232 = -1;

	t43 = (((x229-x230)+x231)&x232);

	if (t43 != 7721650437623805631LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	uint32_t t44 = 21U;

	t44 = (((x233-x234)+x235)&x236);

	if (t44 != 2147450880U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = -1;
	uint32_t x240 = UINT32_MAX;

	t45 = (((x237-x238)+x239)&x240);

	if (t45 != 4294967039LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x241 = UINT32_MAX;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = UINT8_MAX;

	t46 = (((x241-x242)+x243)&x244);

	if (t46 != 128LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x245 = UINT16_MAX;
	uint8_t x246 = UINT8_MAX;
	volatile int32_t x247 = 13783152;
	int16_t x248 = INT16_MAX;
	volatile int32_t t47 = -28296;

	t47 = (((x245-x246)+x247)&x248);

	if (t47 != 20336) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MIN;
	uint16_t x256 = 2U;
	int32_t t48 = -532;

	t48 = (((x253-x254)+x255)&x256);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = -1;
	static uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MIN;

	t49 = (((x257-x258)+x259)&x260);

	if (t49 != 4294934528U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x261 = 4U;
	static uint16_t x262 = UINT16_MAX;
	volatile int32_t x263 = INT32_MAX;
	int32_t x264 = INT32_MIN;
	int32_t t50 = 562;

	t50 = (((x261-x262)+x263)&x264);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x265 = INT32_MIN;
	int8_t x267 = -1;
	int64_t t51 = 94947293LL;

	t51 = (((x265-x266)+x267)&x268);

	if (t51 != 36LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = INT8_MIN;
	static int32_t x272 = -64948641;
	volatile int32_t t52 = -1007393;

	t52 = (((x269-x270)+x271)&x272);

	if (t52 != -64948724) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x274 = INT64_MIN;
	static int64_t x276 = -1LL;
	volatile int64_t t53 = -12013843LL;

	t53 = (((x273-x274)+x275)&x276);

	if (t53 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x281 = INT16_MIN;
	uint8_t x282 = 2U;
	int8_t x283 = -12;
	static int32_t x284 = INT32_MIN;
	static volatile int32_t t54 = INT32_MIN;

	t54 = (((x281-x282)+x283)&x284);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x285 = 79802224LLU;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MIN;
	volatile uint32_t x288 = 11U;
	volatile uint64_t t55 = 2117050LLU;

	t55 = (((x285-x286)+x287)&x288);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = INT8_MIN;
	int32_t x291 = -1;
	static int64_t t56 = -3262LL;

	t56 = (((x289-x290)+x291)&x292);

	if (t56 != -140LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x294 = -1;
	int8_t x295 = 52;
	static uint16_t x296 = UINT16_MAX;
	uint64_t t57 = 375LLU;

	t57 = (((x293-x294)+x295)&x296);

	if (t57 != 52LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x297 = 63029223U;
	volatile int64_t x298 = -31991927276LL;
	volatile int16_t x299 = INT16_MIN;
	volatile uint32_t x300 = 105U;
	volatile int64_t t58 = -192949LL;

	t58 = (((x297-x298)+x299)&x300);

	if (t58 != 65LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x301 = UINT8_MAX;
	static int8_t x304 = INT8_MIN;
	volatile int64_t t59 = 8055975416083LL;

	t59 = (((x301-x302)+x303)&x304);

	if (t59 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x306 = UINT32_MAX;
	int32_t x307 = -94536;
	int32_t x308 = INT32_MIN;
	volatile uint32_t t60 = 1558769U;

	t60 = (((x305-x306)+x307)&x308);

	if (t60 != 2147483648U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int16_t x310 = INT16_MIN;
	static int32_t x312 = INT32_MIN;
	volatile uint32_t t61 = 1065871595U;

	t61 = (((x309-x310)+x311)&x312);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x313 = UINT64_MAX;
	static volatile int8_t x314 = -1;
	int8_t x315 = -1;
	int32_t x316 = INT32_MIN;
	uint64_t t62 = 6781LLU;

	t62 = (((x313-x314)+x315)&x316);

	if (t62 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x318 = INT32_MAX;
	int8_t x319 = INT8_MIN;
	static int64_t x320 = INT64_MIN;
	volatile int64_t t63 = INT64_MIN;

	t63 = (((x317-x318)+x319)&x320);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x322 = UINT16_MAX;
	static int64_t t64 = -5LL;

	t64 = (((x321-x322)+x323)&x324);

	if (t64 != 9223372036854677504LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = 96;
	int32_t x331 = -50567230;
	int8_t x332 = INT8_MIN;

	t65 = (((x329-x330)+x331)&x332);

	if (t65 != -50567552) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x333 = INT8_MIN;
	uint8_t x334 = 112U;
	int64_t x335 = INT64_MAX;
	int64_t t66 = 7990930342520945LL;

	t66 = (((x333-x334)+x335)&x336);

	if (t66 != 65295LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = 194425LL;
	uint8_t x339 = 4U;
	static uint16_t x340 = UINT16_MAX;
	volatile int64_t t67 = 1579324891LL;

	t67 = (((x337-x338)+x339)&x340);

	if (t67 != 63356LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x341 = -1;
	int32_t x342 = INT32_MIN;
	static int32_t x343 = INT32_MIN;
	uint8_t x344 = 0U;

	t68 = (((x341-x342)+x343)&x344);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x348 = INT8_MIN;
	volatile uint64_t t69 = 6298158569643462714LLU;

	t69 = (((x345-x346)+x347)&x348);

	if (t69 != 3785269709312LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x350 = INT8_MAX;
	int64_t x351 = 38821LL;
	static uint16_t x352 = 5277U;
	volatile int64_t t70 = -22934379LL;

	t70 = (((x349-x350)+x351)&x352);

	if (t70 != 5125LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x353 = INT16_MIN;
	static uint8_t x354 = 0U;
	volatile int64_t t71 = -125295344475LL;

	t71 = (((x353-x354)+x355)&x356);

	if (t71 != 33LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x361 = 185U;
	int64_t x362 = -16LL;
	int8_t x363 = -9;
	volatile int16_t x364 = 3;
	int64_t t72 = 18LL;

	t72 = (((x361-x362)+x363)&x364);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x365 = -53;
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MIN;
	uint16_t x368 = 1255U;
	volatile int64_t t73 = 87054879103075318LL;

	t73 = (((x365-x366)+x367)&x368);

	if (t73 != 67LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x369 = 1028;
	static int8_t x370 = 45;
	uint8_t x371 = 41U;
	uint8_t x372 = 0U;
	static volatile int32_t t74 = -13859504;

	t74 = (((x369-x370)+x371)&x372);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x373 = 3739LL;
	int16_t x374 = 0;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	int64_t t75 = -238LL;

	t75 = (((x373-x374)+x375)&x376);

	if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x377 = 1003902970614636LLU;
	volatile uint8_t x378 = 4U;
	uint8_t x379 = UINT8_MAX;
	uint64_t t76 = 261818631592LLU;

	t76 = (((x377-x378)+x379)&x380);

	if (t76 != 1003901360799744LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x381 = UINT32_MAX;
	volatile uint64_t x382 = 5562306535804LLU;
	static int8_t x383 = INT8_MAX;
	static int64_t x384 = -1LL;
	static uint64_t t77 = 5591498LLU;

	t77 = (((x381-x382)+x383)&x384);

	if (t77 != 18446738515697983234LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x385 = 7978;
	int64_t x386 = -1LL;
	int64_t x388 = INT64_MIN;
	volatile int64_t t78 = 119231LL;

	t78 = (((x385-x386)+x387)&x388);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x389 = -1;
	volatile int64_t x392 = 4711LL;
	uint64_t t79 = 147838LLU;

	t79 = (((x389-x390)+x391)&x392);

	if (t79 != 4710LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = 9584U;
	int8_t x394 = -14;
	int16_t x395 = 23;
	static uint64_t x396 = 47149LLU;

	t80 = (((x393-x394)+x395)&x396);

	if (t80 != 8197LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = -1;
	uint64_t x398 = 30762927LLU;
	static int64_t x399 = INT64_MAX;

	t81 = (((x397-x398)+x399)&x400);

	if (t81 != 704809030LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x402 = 4600U;
	static volatile uint8_t x404 = UINT8_MAX;
	volatile uint32_t t82 = 29U;

	t82 = (((x401-x402)+x403)&x404);

	if (t82 != 6U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x406 = 39U;
	static int64_t x407 = -45069841LL;
	static int8_t x408 = INT8_MIN;
	int64_t t83 = -4085807905289530LL;

	t83 = (((x405-x406)+x407)&x408);

	if (t83 != 2102413696LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x413 = 499152394606377LLU;
	volatile uint8_t x414 = 3U;
	int32_t x415 = INT32_MIN;
	static int8_t x416 = -37;
	uint64_t t84 = 1733902421364998LLU;

	t84 = (((x413-x414)+x415)&x416);

	if (t84 != 499150247122690LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int32_t x418 = INT32_MIN;
	static volatile int16_t x419 = 14570;
	uint16_t x420 = 111U;

	t85 = (((x417-x418)+x419)&x420);

	if (t85 != 105LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x421 = -1;
	int32_t x422 = INT32_MIN;
	uint64_t x423 = 25454930195LLU;
	int16_t x424 = INT16_MIN;
	uint64_t t86 = 374650586103558848LLU;

	t86 = (((x421-x422)+x423)&x424);

	if (t86 != 27602386944LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x426 = 9832LL;
	int8_t x427 = -1;
	int32_t x428 = 3107;
	volatile int64_t t87 = -619122LL;

	t87 = (((x425-x426)+x427)&x428);

	if (t87 != 2051LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x429 = 1;
	uint8_t x430 = UINT8_MAX;
	uint32_t x431 = UINT32_MAX;
	volatile uint32_t t88 = 38644773U;

	t88 = (((x429-x430)+x431)&x432);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x433 = INT32_MIN;
	static int32_t x434 = INT32_MIN;
	volatile int16_t x435 = -11;
	volatile int32_t t89 = -984221396;

	t89 = (((x433-x434)+x435)&x436);

	if (t89 != 4177) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x438 = INT8_MIN;
	int32_t x439 = 487;
	int16_t x440 = INT16_MAX;

	t90 = (((x437-x438)+x439)&x440);

	if (t90 != 615LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x441 = UINT32_MAX;
	uint8_t x443 = UINT8_MAX;
	int64_t t91 = -3LL;

	t91 = (((x441-x442)+x443)&x444);

	if (t91 != 794854883328LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x449 = -107729471470LL;
	static int32_t x450 = -1;
	int64_t x451 = 7203718LL;
	int32_t x452 = INT32_MIN;

	t92 = (((x449-x450)+x451)&x452);

	if (t92 != -109521666048LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x453 = 0;
	uint16_t x454 = 9U;
	uint8_t x455 = 1U;
	int64_t x456 = -1LL;
	volatile int64_t t93 = -576390177826817473LL;

	t93 = (((x453-x454)+x455)&x456);

	if (t93 != -8LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x457 = INT64_MIN;
	static int8_t x458 = 0;
	int8_t x460 = INT8_MAX;
	static volatile int64_t t94 = -82302035LL;

	t94 = (((x457-x458)+x459)&x460);

	if (t94 != 4LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x465 = INT8_MIN;
	volatile int16_t x466 = 1;
	int8_t x467 = -1;
	int16_t x468 = -1;
	volatile int32_t t95 = 22134072;

	t95 = (((x465-x466)+x467)&x468);

	if (t95 != -130) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x469 = 4966790U;
	int32_t x470 = INT32_MAX;
	int64_t t96 = 23278485LL;

	t96 = (((x469-x470)+x471)&x472);

	if (t96 != 4950273LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x473 = INT16_MAX;
	volatile int16_t x474 = -1098;
	int8_t x476 = INT8_MIN;

	t97 = (((x473-x474)+x475)&x476);

	if (t97 != -2147449856) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x477 = UINT32_MAX;
	int32_t x479 = 338658412;
	uint16_t x480 = 7142U;
	uint32_t t98 = 32U;

	t98 = (((x477-x478)+x479)&x480);

	if (t98 != 96U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x482 = 4241359867316564LL;
	int32_t x484 = -1;
	int64_t t99 = 371LL;

	t99 = (((x481-x482)+x483)&x484);

	if (t99 != -4241359867316668LL) { NG(); } else { ; }
	
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

