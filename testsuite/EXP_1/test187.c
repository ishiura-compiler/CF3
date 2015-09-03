#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
volatile uint64_t x6 = 20LLU;
volatile int64_t x14 = INT64_MIN;
volatile uint16_t x26 = 599U;
int16_t x31 = -7;
int32_t t8 = -2043178;
uint16_t x50 = 23962U;
uint64_t x54 = 19LLU;
volatile uint64_t x56 = 15985LLU;
volatile uint64_t t11 = 843LLU;
volatile int8_t x65 = INT8_MIN;
uint64_t x67 = 8758901274258326270LLU;
int32_t x69 = INT32_MIN;
volatile int32_t t15 = 31452482;
static int32_t x74 = -1;
static volatile uint32_t t16 = 2437526U;
volatile uint16_t x93 = 44U;
int16_t x97 = 4;
int8_t x99 = -1;
int32_t x100 = INT32_MIN;
static int8_t x101 = -1;
int64_t x102 = 759LL;
static uint64_t x105 = 13920515372830036LLU;
volatile uint64_t t21 = 506714673665893186LLU;
static volatile int8_t x113 = INT8_MIN;
int16_t x120 = INT16_MIN;
int8_t x123 = 1;
int8_t x125 = -1;
volatile int32_t x126 = -1;
int8_t x127 = 44;
volatile uint32_t t27 = 96U;
uint16_t x133 = UINT16_MAX;
volatile uint64_t x138 = UINT64_MAX;
volatile int16_t x140 = INT16_MIN;
uint64_t t29 = 31984021754527315LLU;
uint64_t x145 = 84119994396LLU;
uint64_t x146 = 43LLU;
static uint64_t t31 = 950LLU;
volatile int64_t x149 = -106574LL;
uint16_t x150 = 7239U;
static int64_t x168 = INT64_MIN;
static uint16_t x174 = 47U;
static volatile uint64_t t37 = 1LLU;
int16_t x178 = -1;
int16_t x179 = 1;
uint32_t x184 = 165U;
volatile int8_t x192 = INT8_MAX;
volatile int32_t x193 = INT32_MAX;
static uint32_t x194 = UINT32_MAX;
volatile uint8_t x195 = 8U;
int16_t x196 = INT16_MIN;
static int16_t x197 = INT16_MIN;
static volatile uint16_t x201 = 2724U;
int32_t t43 = -6;
static int64_t x206 = 32597993789LL;
int16_t x210 = INT16_MAX;
uint16_t x212 = 19U;
uint8_t x218 = UINT8_MAX;
static uint16_t x220 = 7811U;
volatile uint16_t x222 = 28406U;
static int64_t x223 = INT64_MIN;
int64_t t48 = -345263683388227235LL;
int32_t x226 = 62;
uint64_t t49 = 23327186LLU;
volatile int32_t x239 = -1;
static int16_t x246 = INT16_MIN;
int32_t x247 = 0;
volatile uint8_t x248 = 55U;
int32_t t56 = -21;
volatile int64_t t57 = 6155806447LL;
int64_t x278 = INT64_MIN;
static volatile int8_t x279 = INT8_MIN;
int8_t x283 = -1;
uint32_t x297 = 98423957U;
static volatile int16_t x300 = 3;
int8_t x301 = INT8_MAX;
uint16_t x303 = UINT16_MAX;
volatile int32_t t64 = -45218436;
volatile uint64_t t65 = 5895067467LLU;
int16_t x321 = -1;
uint16_t x322 = 93U;
uint16_t x324 = 81U;
static uint16_t x325 = 4U;
static int16_t x334 = INT16_MAX;
static volatile int32_t t69 = -1773;
static uint64_t x337 = 2LLU;
static volatile int8_t x342 = -1;
static int32_t x349 = INT32_MAX;
uint8_t x356 = UINT8_MAX;
uint64_t t76 = 3266952621229LLU;
static int32_t x373 = 14608753;
volatile uint32_t t77 = 21962U;
uint32_t x377 = UINT32_MAX;
int64_t x381 = INT64_MIN;
static int32_t x386 = -1;
int32_t x392 = 276870;
volatile int16_t x398 = INT16_MAX;
int32_t x413 = -1;
static volatile int32_t t83 = 14887863;
static int16_t x417 = INT16_MIN;
volatile int64_t x420 = -24692LL;
volatile int64_t t84 = 72LL;
int32_t x422 = INT32_MIN;
volatile int8_t x423 = INT8_MIN;
int64_t t86 = 1527458972607LL;
static volatile int8_t x430 = -1;
volatile uint16_t x436 = 216U;
uint64_t x439 = UINT64_MAX;
int16_t x441 = INT16_MIN;
int16_t x442 = -1;
int8_t x463 = INT8_MAX;
volatile int16_t x477 = INT16_MIN;
int64_t x491 = -163LL;


void f0(void) {
	int16_t x1 = -60;
	int16_t x2 = -1;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -3;

	t0 = (((x1-x2)-x3)%x4);

	if (t0 != 69) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint16_t x7 = UINT16_MAX;
	uint8_t x8 = 10U;
	uint64_t t1 = 646234334LLU;

	t1 = (((x5-x6)-x7)%x8);

	if (t1 != 3LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 70U;
	uint64_t x10 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 260050575LLU;
	static uint64_t t2 = 626169264094LLU;

	t2 = (((x9-x10)-x11)%x12);

	if (t2 != 199LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int16_t x15 = -1;
	uint64_t x16 = 299788766LLU;
	uint64_t t3 = 2295367LLU;

	t3 = (((x13-x14)-x15)%x16);

	if (t3 != 128757323LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	int16_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int8_t x24 = -1;
	volatile int32_t t4 = -837;

	t4 = (((x21-x22)-x23)%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 0U;
	int8_t x27 = 0;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = -46;

	t5 = (((x25-x26)-x27)%x28);

	if (t5 != -599) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 9147484LLU;
	int64_t x30 = 512805LL;
	static volatile int16_t x32 = INT16_MIN;
	volatile uint64_t t6 = 238863434LLU;

	t6 = (((x29-x30)-x31)%x32);

	if (t6 != 8634686LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	static uint8_t x34 = 6U;
	uint8_t x35 = 7U;
	volatile int16_t x36 = -1;
	int64_t t7 = -284928938687625519LL;

	t7 = (((x33-x34)-x35)%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -3;
	int8_t x38 = INT8_MAX;
	static int32_t x39 = INT32_MIN;
	int32_t x40 = INT32_MAX;

	t8 = (((x37-x38)-x39)%x40);

	if (t8 != 2147483518) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x45 = 3U;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MAX;
	volatile int32_t t9 = -3672852;

	t9 = (((x45-x46)-x47)%x48);

	if (t9 != 259) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = -1;
	int64_t x51 = INT64_MIN;
	static uint64_t x52 = 3165LLU;
	uint64_t t10 = 147397718028962LLU;

	t10 = (((x49-x50)-x51)%x52);

	if (t10 != 2130LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	volatile uint64_t x55 = 184225LLU;

	t11 = (((x53-x54)-x55)%x56);

	if (t11 != 15409LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 27;
	int64_t x58 = -219583772831440837LL;
	volatile int16_t x59 = INT16_MAX;
	int8_t x60 = 1;
	static int64_t t12 = -830054LL;

	t12 = (((x57-x58)-x59)%x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	static volatile uint8_t x63 = 107U;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t13 = 42604;

	t13 = (((x61-x62)-x63)%x64);

	if (t13 != -107) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x66 = 783172LL;
	int8_t x68 = INT8_MIN;
	static volatile uint64_t t14 = 16791957960LLU;

	t14 = (((x65-x66)-x67)%x68);

	if (t14 != 9687842799450442046LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	int8_t x72 = 14;

	t15 = (((x69-x70)-x71)%x72);

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	int8_t x75 = INT8_MIN;
	volatile uint32_t x76 = 1888072U;

	t16 = (((x73-x74)-x75)%x76);

	if (t16 != 128U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = INT16_MIN;
	static uint64_t x78 = 225876703778LLU;
	int8_t x79 = 52;
	int8_t x80 = INT8_MAX;
	uint64_t t17 = 25186LLU;

	t17 = (((x77-x78)-x79)%x80);

	if (t17 != 118LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = INT8_MAX;
	int16_t x95 = INT16_MIN;
	volatile int16_t x96 = 53;
	int32_t t18 = -7;

	t18 = (((x93-x94)-x95)%x96);

	if (t18 != 37) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x98 = -4;
	volatile int32_t t19 = -58664;

	t19 = (((x97-x98)-x99)%x100);

	if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x103 = UINT64_MAX;
	static int32_t x104 = -1;
	volatile uint64_t t20 = 368763033253298357LLU;

	t20 = (((x101-x102)-x103)%x104);

	if (t20 != 18446744073709550857LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x106 = INT8_MIN;
	volatile uint16_t x107 = 6U;
	int64_t x108 = INT64_MAX;

	t21 = (((x105-x106)-x107)%x108);

	if (t21 != 13920515372830158LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	int8_t x111 = 2;
	volatile uint32_t x112 = UINT32_MAX;
	volatile uint32_t t22 = 1639632U;

	t22 = (((x109-x110)-x111)%x112);

	if (t22 != 32638U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MAX;
	uint16_t x116 = UINT16_MAX;
	int32_t t23 = -5;

	t23 = (((x113-x114)-x115)%x116);

	if (t23 != -382) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x117 = UINT16_MAX;
	int64_t x118 = 54446919LL;
	uint64_t x119 = 425LLU;
	uint64_t t24 = 1358287038941862LLU;

	t24 = (((x117-x118)-x119)%x120);

	if (t24 != 18446744073655169807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x121 = UINT32_MAX;
	uint32_t x122 = 1909U;
	static uint64_t x124 = 10LLU;
	volatile uint64_t t25 = 5357290721LLU;

	t25 = (((x121-x122)-x123)%x124);

	if (t25 != 5LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t26 = 5U;

	t26 = (((x125-x126)-x127)%x128);

	if (t26 != 4294967252U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = 3404U;
	int32_t x130 = -61;
	static uint32_t x131 = 2462276U;
	int16_t x132 = -1;

	t27 = (((x129-x130)-x131)%x132);

	if (t27 != 4292508485U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x134 = INT8_MAX;
	static uint32_t x135 = UINT32_MAX;
	uint16_t x136 = 1U;
	uint32_t t28 = 3446263U;

	t28 = (((x133-x134)-x135)%x136);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x137 = 3U;
	int8_t x139 = INT8_MIN;

	t29 = (((x137-x138)-x139)%x140);

	if (t29 != 132LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = -3;
	uint8_t x142 = UINT8_MAX;
	static int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	volatile int64_t t30 = 342949619110LL;

	t30 = (((x141-x142)-x143)%x144);

	if (t30 != 126LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x147 = INT64_MAX;
	int64_t x148 = -1LL;

	t31 = (((x145-x146)-x147)%x148);

	if (t31 != 9223372120974770162LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x151 = 288513937093LL;
	uint32_t x152 = UINT32_MAX;
	int64_t t32 = -13260266LL;

	t32 = (((x149-x150)-x151)%x152);

	if (t32 != -751242141LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = UINT64_MAX;
	uint16_t x154 = 20386U;
	int8_t x155 = 3;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t33 = 3972200870840452LLU;

	t33 = (((x153-x154)-x155)%x156);

	if (t33 != 9223372036854755418LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x161 = -1;
	int8_t x162 = 3;
	uint64_t x163 = 3458935824185209LLU;
	int16_t x164 = -1;
	uint64_t t34 = 150368LLU;

	t34 = (((x161-x162)-x163)%x164);

	if (t34 != 18443285137885366403LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x165 = -1;
	static int32_t x166 = INT32_MIN;
	volatile int32_t x167 = 78049248;
	int64_t t35 = -151078851950859LL;

	t35 = (((x165-x166)-x167)%x168);

	if (t35 != 2069434399LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x169 = INT16_MIN;
	int64_t x170 = 4607019979LL;
	volatile uint8_t x171 = 1U;
	int16_t x172 = -1;
	volatile int64_t t36 = 493340152225LL;

	t36 = (((x169-x170)-x171)%x172);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x173 = UINT64_MAX;
	static int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;

	t37 = (((x173-x174)-x175)%x176);

	if (t37 != 80LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = -6095451;
	int16_t x180 = -2;
	volatile int32_t t38 = -970419376;

	t38 = (((x177-x178)-x179)%x180);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	int16_t x182 = 13982;
	volatile uint8_t x183 = 10U;
	volatile uint32_t t39 = 332U;

	t39 = (((x181-x182)-x183)%x184);

	if (t39 != 131U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x189 = -1LL;
	uint64_t x190 = 2243693035186LLU;
	int16_t x191 = -1;
	uint64_t t40 = 3390614301992845LLU;

	t40 = (((x189-x190)-x191)%x192);

	if (t40 != 27LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t t41 = 335U;

	t41 = (((x193-x194)-x195)%x196);

	if (t41 != 2147483640U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x198 = -1LL;
	int8_t x199 = -1;
	int64_t x200 = INT64_MAX;
	volatile int64_t t42 = -1572205LL;

	t42 = (((x197-x198)-x199)%x200);

	if (t42 != -32766LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x202 = 3075U;
	static int32_t x203 = INT32_MIN;
	int32_t x204 = -178798;

	t43 = (((x201-x202)-x203)%x204);

	if (t43 != 119317) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 11413U;
	int8_t x207 = INT8_MIN;
	static int16_t x208 = INT16_MIN;
	volatile int64_t t44 = 57LL;

	t44 = (((x205-x206)-x207)%x208);

	if (t44 != -15400LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x209 = 0U;
	uint32_t x211 = 3U;
	static volatile uint32_t t45 = 168969U;

	t45 = (((x209-x210)-x211)%x212);

	if (t45 != 11U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x213 = 7U;
	uint32_t x214 = 306U;
	static uint64_t x215 = 29778711181139LLU;
	volatile uint16_t x216 = UINT16_MAX;
	volatile uint64_t t46 = 137074973977LLU;

	t46 = (((x213-x214)-x215)%x216);

	if (t46 != 1774LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = INT16_MIN;
	int32_t x219 = -1;
	volatile int32_t t47 = 575365;

	t47 = (((x217-x218)-x219)%x220);

	if (t47 != -1778) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MIN;
	volatile int64_t x224 = INT64_MAX;

	t48 = (((x221-x222)-x223)%x224);

	if (t48 != 9223372036854714634LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x225 = 2010935;
	static int8_t x227 = 0;
	uint64_t x228 = 13076529656LLU;

	t49 = (((x225-x226)-x227)%x228);

	if (t49 != 2010873LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = INT32_MIN;
	int16_t x230 = INT16_MIN;
	int64_t x231 = -1LL;
	int16_t x232 = 485;
	volatile int64_t t50 = 5626LL;

	t50 = (((x229-x230)-x231)%x232);

	if (t50 != -374LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = INT64_MIN;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = UINT8_MAX;
	int8_t x236 = INT8_MIN;
	int64_t t51 = 1897LL;

	t51 = (((x233-x234)-x235)%x236);

	if (t51 != -127LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = 3948U;
	int8_t x238 = INT8_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t52 = 813087699;

	t52 = (((x237-x238)-x239)%x240);

	if (t52 != 3822) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = 0;
	int16_t x243 = -1;
	uint32_t x244 = 222U;
	uint64_t t53 = 823064541798LLU;

	t53 = (((x241-x242)-x243)%x244);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = INT64_MIN;
	static int64_t t54 = 693910425017733952LL;

	t54 = (((x245-x246)-x247)%x248);

	if (t54 != -20LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x249 = 6U;
	int16_t x250 = -15;
	static int16_t x251 = INT16_MAX;
	volatile int32_t x252 = 762;
	static volatile int32_t t55 = -261707223;

	t55 = (((x249-x250)-x251)%x252);

	if (t55 != -742) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MIN;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = 26U;

	t56 = (((x261-x262)-x263)%x264);

	if (t56 != -15) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = 1949796722617LL;
	uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MIN;
	volatile int8_t x272 = -3;

	t57 = (((x269-x270)-x271)%x272);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x273 = 283506LL;
	static int64_t x274 = 207LL;
	static int32_t x275 = 27;
	static volatile int64_t x276 = -1LL;
	volatile int64_t t58 = 94861433LL;

	t58 = (((x273-x274)-x275)%x276);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MIN;
	int64_t x280 = -1LL;
	int64_t t59 = 2045200222990250726LL;

	t59 = (((x277-x278)-x279)%x280);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x281 = INT64_MAX;
	int64_t x282 = 14LL;
	volatile uint16_t x284 = 206U;
	volatile int64_t t60 = 2388916721955084LL;

	t60 = (((x281-x282)-x283)%x284);

	if (t60 != 168LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x285 = -24;
	volatile int64_t x286 = 8486746922276LL;
	int8_t x287 = 1;
	int8_t x288 = INT8_MIN;
	int64_t t61 = 51517425LL;

	t61 = (((x285-x286)-x287)%x288);

	if (t61 != -61LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile uint8_t x294 = UINT8_MAX;
	uint32_t x295 = UINT32_MAX;
	int8_t x296 = 62;
	uint32_t t62 = 243073808U;

	t62 = (((x293-x294)-x295)%x296);

	if (t62 != 56U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x298 = -7;
	int16_t x299 = INT16_MIN;
	volatile uint32_t t63 = 2U;

	t63 = (((x297-x298)-x299)%x300);

	if (t63 != 2U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x302 = 1397U;
	int8_t x304 = INT8_MIN;

	t64 = (((x301-x302)-x303)%x304);

	if (t64 != -117) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	uint32_t x310 = 34U;
	static uint8_t x311 = UINT8_MAX;
	int64_t x312 = -547185LL;

	t65 = (((x309-x310)-x311)%x312);

	if (t65 != 546895LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x323 = -218865LL;
	static int64_t t66 = 6525LL;

	t66 = (((x321-x322)-x323)%x324);

	if (t66 != 71LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x326 = INT16_MAX;
	int16_t x327 = INT16_MIN;
	static uint8_t x328 = UINT8_MAX;
	int32_t t67 = -2691;

	t67 = (((x325-x326)-x327)%x328);

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x329 = INT16_MAX;
	int32_t x330 = 0;
	static int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MAX;
	int32_t t68 = -14;

	t68 = (((x329-x330)-x331)%x332);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x333 = 74U;
	static uint8_t x335 = UINT8_MAX;
	int8_t x336 = INT8_MAX;

	t69 = (((x333-x334)-x335)%x336);

	if (t69 != -55) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x338 = -1;
	int32_t x339 = INT32_MIN;
	int64_t x340 = 487269887255LL;
	static volatile uint64_t t70 = 914LLU;

	t70 = (((x337-x338)-x339)%x340);

	if (t70 != 2147483651LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = INT32_MIN;
	int16_t x343 = -3495;
	int32_t x344 = -4841;
	volatile int32_t t71 = 233;

	t71 = (((x341-x342)-x343)%x344);

	if (t71 != -2870) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = 2119;
	static uint16_t x346 = 32581U;
	uint64_t x347 = 523887458251836610LLU;
	uint16_t x348 = 1798U;
	uint64_t t72 = 219057905172973LLU;

	t72 = (((x345-x346)-x347)%x348);

	if (t72 != 978LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x350 = 142014560U;
	volatile int16_t x351 = INT16_MIN;
	volatile uint16_t x352 = 6U;
	uint32_t t73 = 300331U;

	t73 = (((x349-x350)-x351)%x352);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x353 = INT16_MIN;
	int32_t x354 = 400;
	int32_t x355 = -1;
	volatile int32_t t74 = -513257;

	t74 = (((x353-x354)-x355)%x356);

	if (t74 != -17) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x361 = 275311917U;
	uint32_t x362 = 124U;
	volatile int16_t x363 = -1;
	uint64_t x364 = 252882843LLU;
	volatile uint64_t t75 = 13596610976397LLU;

	t75 = (((x361-x362)-x363)%x364);

	if (t75 != 22428951LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x369 = 5228801;
	volatile int8_t x370 = -8;
	uint64_t x371 = 84326LLU;
	volatile int8_t x372 = -1;

	t76 = (((x369-x370)-x371)%x372);

	if (t76 != 5144483LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x374 = -1;
	int8_t x375 = -1;
	volatile uint32_t x376 = UINT32_MAX;

	t77 = (((x373-x374)-x375)%x376);

	if (t77 != 14608755U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x378 = -1LL;
	uint16_t x379 = 14U;
	int32_t x380 = INT32_MIN;
	static int64_t t78 = -5704715907LL;

	t78 = (((x377-x378)-x379)%x380);

	if (t78 != 2147483634LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x382 = 17357105764636LLU;
	int8_t x383 = INT8_MAX;
	volatile uint16_t x384 = UINT16_MAX;
	uint64_t t79 = 2135451977588LLU;

	t79 = (((x381-x382)-x383)%x384);

	if (t79 != 37500LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x385 = 120016034U;
	static int8_t x387 = -1;
	volatile uint64_t x388 = UINT64_MAX;
	uint64_t t80 = 0LLU;

	t80 = (((x385-x386)-x387)%x388);

	if (t80 != 120016036LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x389 = UINT8_MAX;
	static uint8_t x390 = 29U;
	uint16_t x391 = 4U;
	int32_t t81 = 31;

	t81 = (((x389-x390)-x391)%x392);

	if (t81 != 222) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = 0;
	int32_t x399 = -1;
	int8_t x400 = INT8_MIN;
	int32_t t82 = -110742;

	t82 = (((x397-x398)-x399)%x400);

	if (t82 != -126) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x414 = -1;
	volatile int16_t x415 = INT16_MIN;
	uint8_t x416 = UINT8_MAX;

	t83 = (((x413-x414)-x415)%x416);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x418 = -1;
	volatile int8_t x419 = -1;

	t84 = (((x417-x418)-x419)%x420);

	if (t84 != -8074LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x421 = 54LLU;
	int8_t x424 = 3;
	volatile uint64_t t85 = 10LLU;

	t85 = (((x421-x422)-x423)%x424);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x425 = 21301U;
	static volatile int16_t x426 = INT16_MIN;
	int8_t x427 = -1;
	int64_t x428 = INT64_MIN;

	t86 = (((x425-x426)-x427)%x428);

	if (t86 != 54070LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x429 = INT8_MIN;
	static int8_t x431 = INT8_MIN;
	volatile int64_t x432 = -1LL;
	int64_t t87 = -506389343082288LL;

	t87 = (((x429-x430)-x431)%x432);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x433 = 218604U;
	int64_t x434 = INT64_MAX;
	int8_t x435 = -1;
	static int64_t t88 = 6536928516808017LL;

	t88 = (((x433-x434)-x435)%x436);

	if (t88 != -66LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x437 = INT32_MIN;
	volatile uint64_t x438 = 362551156616LLU;
	int64_t x440 = INT64_MIN;
	uint64_t t89 = 2733003487LLU;

	t89 = (((x437-x438)-x439)%x440);

	if (t89 != 9223371672156135545LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x443 = INT32_MIN;
	uint32_t x444 = 9U;
	uint32_t t90 = 7923U;

	t90 = (((x441-x442)-x443)%x444);

	if (t90 != 4U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x445 = 2707298092188791035LLU;
	int8_t x446 = INT8_MIN;
	static uint8_t x447 = 26U;
	int32_t x448 = -93462546;
	volatile uint64_t t91 = 457224941LLU;

	t91 = (((x445-x446)-x447)%x448);

	if (t91 != 2707298092188791137LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x449 = 110LLU;
	static int32_t x450 = INT32_MIN;
	int32_t x451 = -15982551;
	volatile int64_t x452 = -257169670142LL;
	static uint64_t t92 = 884706185030LLU;

	t92 = (((x449-x450)-x451)%x452);

	if (t92 != 2163466309LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x457 = 11LLU;
	int16_t x458 = 0;
	static int8_t x459 = 22;
	int16_t x460 = -19;
	volatile uint64_t t93 = 207366533LLU;

	t93 = (((x457-x458)-x459)%x460);

	if (t93 != 8LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x461 = INT16_MAX;
	volatile int16_t x462 = INT16_MAX;
	static uint64_t x464 = 1534194568059310LLU;
	volatile uint64_t t94 = 6435611934907395LLU;

	t94 = (((x461-x462)-x463)%x464);

	if (t94 != 1122781932467359LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x465 = INT64_MIN;
	volatile int32_t x466 = INT32_MIN;
	uint8_t x467 = 16U;
	static int32_t x468 = -1;
	static int64_t t95 = -2602LL;

	t95 = (((x465-x466)-x467)%x468);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x478 = 103U;
	int16_t x479 = INT16_MIN;
	int64_t x480 = INT64_MIN;
	int64_t t96 = 281173297922621428LL;

	t96 = (((x477-x478)-x479)%x480);

	if (t96 != -103LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x481 = 668440495LLU;
	static int64_t x482 = -1LL;
	int32_t x483 = -1;
	int64_t x484 = INT64_MIN;
	uint64_t t97 = 402735LLU;

	t97 = (((x481-x482)-x483)%x484);

	if (t97 != 668440497LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x489 = INT8_MIN;
	uint32_t x490 = UINT32_MAX;
	int8_t x492 = INT8_MAX;
	int64_t t98 = -56033047818LL;

	t98 = (((x489-x490)-x491)%x492);

	if (t98 != 52LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x493 = 28068U;
	uint16_t x494 = 0U;
	uint16_t x495 = 378U;
	static int16_t x496 = -1;
	int32_t t99 = -879586;

	t99 = (((x493-x494)-x495)%x496);

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

