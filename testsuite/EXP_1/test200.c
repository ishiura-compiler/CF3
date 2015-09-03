#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x5 = 52880512099LLU;
static uint32_t x10 = 2143U;
volatile int8_t x11 = -1;
static uint16_t x21 = 3062U;
volatile int32_t x24 = INT32_MIN;
static volatile int64_t x32 = INT64_MIN;
static uint64_t x41 = 85981LLU;
int64_t x44 = INT64_MIN;
int32_t x54 = INT32_MAX;
int32_t x58 = INT32_MIN;
volatile int8_t x60 = INT8_MIN;
int64_t x73 = -1LL;
static volatile int64_t t13 = -1258LL;
volatile uint32_t x90 = 24U;
int16_t x91 = INT16_MAX;
uint16_t x92 = 13U;
static uint32_t t19 = 772650U;
int8_t x105 = INT8_MAX;
static volatile uint8_t x107 = 40U;
uint8_t x108 = UINT8_MAX;
int16_t x121 = -1;
static int32_t x138 = INT32_MIN;
static int64_t x140 = INT64_MIN;
volatile int8_t x141 = INT8_MIN;
uint32_t x149 = UINT32_MAX;
int8_t x150 = -1;
int16_t x151 = 0;
int8_t x152 = -1;
int32_t x156 = INT32_MIN;
int16_t x167 = INT16_MAX;
int8_t x194 = INT8_MIN;
int16_t x195 = 82;
int16_t x197 = INT16_MAX;
int8_t x198 = -8;
static volatile uint16_t x210 = 149U;
int64_t t38 = 8415LL;
static volatile int32_t x219 = INT32_MIN;
static int8_t x220 = INT8_MIN;
uint8_t x247 = 0U;
int64_t x252 = -1730861432LL;
uint32_t t45 = 297U;
int32_t x266 = INT32_MIN;
uint32_t x285 = 67787340U;
uint32_t t52 = 13471U;
int64_t x296 = INT64_MIN;
int32_t x298 = INT32_MAX;
volatile uint64_t t55 = 3222399058569LLU;
static volatile uint32_t x305 = 46815U;
int64_t x312 = INT64_MIN;
uint32_t x313 = 6U;
static int8_t x314 = 0;
volatile uint64_t t60 = 5LLU;
int64_t x341 = -1LL;
static volatile int64_t t61 = -15026568452128637LL;
uint8_t x349 = UINT8_MAX;
int64_t x352 = INT64_MIN;
uint8_t x354 = 1U;
int64_t x362 = -4805394475951LL;
int16_t x370 = INT16_MIN;
uint32_t x374 = UINT32_MAX;
uint64_t x376 = UINT64_MAX;
int32_t x378 = -1;
int8_t x380 = INT8_MIN;
static uint32_t x381 = UINT32_MAX;
static uint8_t x383 = UINT8_MAX;
volatile int8_t x384 = -22;
uint16_t x386 = UINT16_MAX;
volatile int32_t x398 = -1;
volatile uint64_t t73 = 268518930877792130LLU;
int32_t x404 = INT32_MAX;
int32_t t75 = 4298;
uint64_t x413 = UINT64_MAX;
uint16_t x421 = 208U;
volatile int8_t x424 = -1;
uint32_t x435 = 36922U;
uint32_t t79 = 2283747U;
volatile uint32_t t80 = 7473U;
int16_t x453 = -56;
static int64_t x455 = -346855LL;
int16_t x457 = INT16_MAX;
volatile uint32_t x458 = UINT32_MAX;
int64_t x472 = INT64_MIN;
uint64_t x475 = 468209949LLU;
int64_t x490 = INT64_MIN;
static uint8_t x491 = UINT8_MAX;
int64_t x512 = INT64_MAX;
volatile int64_t t92 = -1327834057952705LL;
uint8_t x521 = 13U;
static int8_t x523 = INT8_MAX;
int32_t t94 = -165452256;
volatile int64_t t95 = -60694620LL;
uint16_t x529 = UINT16_MAX;
uint64_t t97 = 21948102693021LLU;
volatile int16_t x546 = INT16_MIN;
int32_t x572 = INT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = 124879LLU;
	int64_t x3 = 28320LL;
	int8_t x4 = -1;
	static uint64_t t0 = 3493155050966LLU;

	t0 = (((x1-x2)*x3)%x4);

	if (t0 != 18446683253436066976LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x6 = 3U;
	static uint32_t x7 = UINT32_MAX;
	int64_t x8 = 220186756LL;
	volatile uint64_t t1 = 2241599412282323937LLU;

	t1 = (((x5-x6)*x7)%x8);

	if (t1 != 52236664LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x12 = INT8_MAX;
	uint32_t t2 = 5U;

	t2 = (((x9-x10)*x11)%x12);

	if (t2 != 112U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 2143683830121692LLU;
	volatile int32_t x14 = INT32_MAX;
	int64_t x15 = INT64_MIN;
	int32_t x16 = -2845;
	volatile uint64_t t3 = 2LLU;

	t3 = (((x13-x14)*x15)%x16);

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 2565046757426976974LLU;
	static uint32_t x18 = 1U;
	int8_t x19 = -1;
	uint16_t x20 = UINT16_MAX;
	volatile uint64_t t4 = 729148LLU;

	t4 = (((x17-x18)*x19)%x20);

	if (t4 != 39543LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MAX;
	static int32_t t5 = 23887;

	t5 = (((x21-x22)*x23)%x24);

	if (t5 != 4550410) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = 25LLU;
	volatile int8_t x27 = INT8_MIN;
	static int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 1083643764701717LLU;

	t6 = (((x25-x26)*x27)%x28);

	if (t6 != 3200LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 878907155U;
	uint64_t x30 = 1043208334364LLU;
	int8_t x31 = 0;
	static uint64_t t7 = 28765058670254LLU;

	t7 = (((x29-x30)*x31)%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MAX;
	volatile int16_t x43 = INT16_MIN;
	volatile uint64_t t8 = 26198LLU;

	t8 = (((x41-x42)*x43)%x44);

	if (t8 != 9223372034041511936LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MIN;
	static int64_t x47 = -1LL;
	int16_t x48 = -57;
	volatile int64_t t9 = -1321845889823LL;

	t9 = (((x45-x46)*x47)%x48);

	if (t9 != -27LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	int64_t x55 = INT64_MAX;
	int32_t x56 = INT32_MIN;
	static volatile uint64_t t10 = 1030625679114577LLU;

	t10 = (((x53-x54)*x55)%x56);

	if (t10 != 2147483648LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x57 = 2167129150552906211LLU;
	volatile uint16_t x59 = 0U;
	volatile uint64_t t11 = 31858LLU;

	t11 = (((x57-x58)*x59)%x60);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = 42;
	uint64_t x70 = UINT64_MAX;
	static int16_t x71 = -71;
	int64_t x72 = -32829781388636LL;
	volatile uint64_t t12 = 870348852982LLU;

	t12 = (((x69-x70)*x71)%x72);

	if (t12 != 32829781385583LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MAX;
	int32_t x76 = INT32_MAX;

	t13 = (((x73-x74)*x75)%x76);

	if (t13 != -4161536LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x77 = -1;
	int8_t x78 = INT8_MIN;
	uint64_t x79 = 241145062LLU;
	int16_t x80 = INT16_MIN;
	volatile uint64_t t14 = 2813780589956006296LLU;

	t14 = (((x77-x78)*x79)%x80);

	if (t14 != 30625422874LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x81 = -27591;
	int64_t x82 = INT64_MIN;
	static int64_t x83 = -1LL;
	uint64_t x84 = 134266703008LLU;
	volatile uint64_t t15 = 895570900444LLU;

	t15 = (((x81-x82)*x83)%x84);

	if (t15 != 91075018119LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -1;
	volatile uint32_t t16 = 0U;

	t16 = (((x89-x90)*x91)%x92);

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x93 = 3945U;
	int8_t x94 = 4;
	int8_t x95 = 0;
	volatile int16_t x96 = INT16_MIN;
	static volatile int32_t t17 = 7901418;

	t17 = (((x93-x94)*x95)%x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = 1U;
	static uint64_t x98 = UINT64_MAX;
	int16_t x99 = 15788;
	int32_t x100 = 3322217;
	uint64_t t18 = 20LLU;

	t18 = (((x97-x98)*x99)%x100);

	if (t18 != 31576LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	static uint32_t x103 = UINT32_MAX;
	int32_t x104 = INT32_MAX;

	t19 = (((x101-x102)*x103)%x104);

	if (t19 != 2147450882U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x106 = 0U;
	int32_t t20 = -1072233;

	t20 = (((x105-x106)*x107)%x108);

	if (t20 != 235) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MAX;
	int8_t x110 = -1;
	static uint8_t x111 = 117U;
	int32_t x112 = -1;
	volatile int32_t t21 = -4298077;

	t21 = (((x109-x110)*x111)%x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x122 = 4;
	uint64_t x123 = UINT64_MAX;
	static int8_t x124 = INT8_MIN;
	static volatile uint64_t t22 = 1LLU;

	t22 = (((x121-x122)*x123)%x124);

	if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x129 = UINT32_MAX;
	uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MAX;
	int16_t x132 = -1;
	static volatile uint64_t t23 = 39LLU;

	t23 = (((x129-x130)*x131)%x132);

	if (t23 != 140733193388032LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x133 = 10U;
	int16_t x134 = -10546;
	int8_t x135 = -1;
	static volatile int16_t x136 = INT16_MIN;
	volatile uint32_t t24 = 28U;

	t24 = (((x133-x134)*x135)%x136);

	if (t24 != 22212U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x137 = UINT64_MAX;
	int32_t x139 = 0;
	volatile uint64_t t25 = 7428LLU;

	t25 = (((x137-x138)*x139)%x140);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x142 = 491836853017817LL;
	uint8_t x143 = 7U;
	int16_t x144 = INT16_MIN;
	int64_t t26 = 851042632LL;

	t26 = (((x141-x142)*x143)%x144);

	if (t26 != -3439LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = INT64_MIN;
	int64_t x146 = -1LL;
	uint64_t x147 = 339796307657LLU;
	int8_t x148 = -1;
	volatile uint64_t t27 = 470567LLU;

	t27 = (((x145-x146)*x147)%x148);

	if (t27 != 9223372376651083465LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t t28 = 1U;

	t28 = (((x149-x150)*x151)%x152);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x153 = UINT8_MAX;
	static uint64_t x154 = 16LLU;
	uint16_t x155 = 3281U;
	volatile uint64_t t29 = 3608LLU;

	t29 = (((x153-x154)*x155)%x156);

	if (t29 != 784159LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x157 = UINT16_MAX;
	static uint16_t x158 = 32443U;
	int16_t x159 = -1;
	int32_t x160 = INT32_MAX;
	int32_t t30 = -95;

	t30 = (((x157-x158)*x159)%x160);

	if (t30 != -33092) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = -1LL;
	int64_t x162 = -17064366LL;
	volatile int16_t x163 = INT16_MIN;
	uint64_t x164 = 119999275465040526LLU;
	uint64_t t31 = 1404469LLU;

	t31 = (((x161-x162)*x163)%x164);

	if (t31 != 86854368393238818LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x165 = 1U;
	static int8_t x166 = INT8_MAX;
	int16_t x168 = -1;
	static uint32_t t32 = 956U;

	t32 = (((x165-x166)*x167)%x168);

	if (t32 != 4290838654U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x177 = UINT32_MAX;
	volatile uint8_t x178 = 2U;
	static volatile int32_t x179 = -727399040;
	int64_t x180 = INT64_MIN;
	volatile int64_t t33 = 213LL;

	t33 = (((x177-x178)*x179)%x180);

	if (t33 != 2182197120LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x193 = -59;
	uint64_t x196 = 1724023LLU;
	volatile uint64_t t34 = 6439350254343LLU;

	t34 = (((x193-x194)*x195)%x196);

	if (t34 != 5658LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t35 = 135540868;

	t35 = (((x197-x198)*x199)%x200);

	if (t35 != -195) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = -1LL;
	uint8_t x202 = UINT8_MAX;
	volatile uint16_t x203 = UINT16_MAX;
	uint16_t x204 = 2U;
	static int64_t t36 = 13047LL;

	t36 = (((x201-x202)*x203)%x204);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int64_t x211 = -1LL;
	int16_t x212 = INT16_MIN;
	static volatile int64_t t37 = 740786LL;

	t37 = (((x209-x210)*x211)%x212);

	if (t37 != 277LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = -2867667017375819925LL;
	volatile int16_t x214 = INT16_MAX;
	int8_t x215 = -2;
	volatile int16_t x216 = -1;

	t38 = (((x213-x214)*x215)%x216);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x217 = 34U;
	uint64_t x218 = UINT64_MAX;
	volatile uint64_t t39 = 95353586904LLU;

	t39 = (((x217-x218)*x219)%x220);

	if (t39 != 18446743998547623936LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x221 = 9LL;
	volatile int8_t x222 = INT8_MAX;
	static int16_t x223 = -30;
	static int16_t x224 = -1053;
	int64_t t40 = 0LL;

	t40 = (((x221-x222)*x223)%x224);

	if (t40 != 381LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x229 = INT8_MAX;
	int8_t x230 = INT8_MIN;
	static int32_t x231 = -1;
	int16_t x232 = INT16_MAX;
	volatile int32_t t41 = -53;

	t41 = (((x229-x230)*x231)%x232);

	if (t41 != -255) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x233 = 0U;
	int8_t x234 = -13;
	static int16_t x235 = -1;
	static int16_t x236 = -7080;
	volatile int32_t t42 = -11813;

	t42 = (((x233-x234)*x235)%x236);

	if (t42 != -13) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x245 = -1LL;
	volatile int32_t x246 = INT32_MIN;
	int32_t x248 = INT32_MIN;
	int64_t t43 = -3714412746LL;

	t43 = (((x245-x246)*x247)%x248);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x249 = 27U;
	static uint64_t x250 = 965219199147207401LLU;
	static int32_t x251 = -205411275;
	volatile uint64_t t44 = 64216LLU;

	t44 = (((x249-x250)*x251)%x252);

	if (t44 != 9774991358945360730LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x253 = 1U;
	volatile int8_t x254 = -1;
	uint32_t x255 = 30180U;
	int32_t x256 = INT32_MIN;

	t45 = (((x253-x254)*x255)%x256);

	if (t45 != 60360U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x261 = -1;
	int8_t x262 = INT8_MIN;
	uint16_t x263 = 1U;
	int32_t x264 = INT32_MAX;
	volatile int32_t t46 = 21172;

	t46 = (((x261-x262)*x263)%x264);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x267 = 3;
	int16_t x268 = -1;
	uint32_t t47 = 32137U;

	t47 = (((x265-x266)*x267)%x268);

	if (t47 != 2147483645U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x273 = UINT64_MAX;
	uint16_t x274 = 3146U;
	static volatile uint16_t x275 = 2058U;
	int64_t x276 = -220769568LL;
	volatile uint64_t t48 = 12615268813805LLU;

	t48 = (((x273-x274)*x275)%x276);

	if (t48 != 214293042LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x277 = 1;
	uint8_t x278 = UINT8_MAX;
	uint16_t x279 = 169U;
	int64_t x280 = INT64_MIN;
	int64_t t49 = -47520928293LL;

	t49 = (((x277-x278)*x279)%x280);

	if (t49 != -42926LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x281 = INT8_MIN;
	static uint8_t x282 = 36U;
	uint64_t x283 = 7887808LLU;
	int8_t x284 = INT8_MIN;
	uint64_t t50 = 299904754921152344LLU;

	t50 = (((x281-x282)*x283)%x284);

	if (t50 != 18446744072415951104LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 1U;
	int16_t x288 = -5689;
	static volatile uint32_t t51 = 12116U;

	t51 = (((x285-x286)*x287)%x288);

	if (t51 != 67820108U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x289 = UINT32_MAX;
	volatile uint16_t x290 = 31354U;
	volatile int8_t x291 = 1;
	int8_t x292 = INT8_MIN;

	t52 = (((x289-x290)*x291)%x292);

	if (t52 != 4294935941U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x293 = -228446465LL;
	volatile uint32_t x294 = 5873037U;
	int16_t x295 = INT16_MIN;
	volatile int64_t t53 = -298896236782LL;

	t53 = (((x293-x294)*x295)%x296);

	if (t53 != 7678181441536LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x297 = INT32_MAX;
	uint64_t x299 = 6749509204LLU;
	static int8_t x300 = INT8_MIN;
	uint64_t t54 = 507363919816710LLU;

	t54 = (((x297-x298)*x299)%x300);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MAX;
	uint16_t x303 = 1421U;
	int64_t x304 = INT64_MIN;

	t55 = (((x301-x302)*x303)%x304);

	if (t55 != 9223372036854593920LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x306 = UINT16_MAX;
	int16_t x307 = 6468;
	uint8_t x308 = 47U;
	static uint32_t t56 = 33016U;

	t56 = (((x305-x306)*x307)%x308);

	if (t56 != 12U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x309 = 947233051LL;
	static uint32_t x310 = 25131890U;
	int8_t x311 = -1;
	volatile int64_t t57 = 35265LL;

	t57 = (((x309-x310)*x311)%x312);

	if (t57 != -922101161LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x315 = UINT64_MAX;
	volatile uint32_t x316 = 373904554U;
	uint64_t t58 = 1594LLU;

	t58 = (((x313-x314)*x315)%x316);

	if (t58 != 131273998LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x317 = -1;
	volatile int32_t x318 = -152;
	uint8_t x319 = UINT8_MAX;
	volatile int8_t x320 = 16;
	int32_t t59 = 2;

	t59 = (((x317-x318)*x319)%x320);

	if (t59 != 9) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x325 = 840U;
	static int32_t x326 = -121146106;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 120LLU;

	t60 = (((x325-x326)*x327)%x328);

	if (t60 != 32LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x342 = 1;
	static volatile uint32_t x343 = 118721U;
	int64_t x344 = INT64_MAX;

	t61 = (((x341-x342)*x343)%x344);

	if (t61 != -237442LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x345 = -1;
	int16_t x346 = -650;
	int8_t x347 = -1;
	int8_t x348 = INT8_MIN;
	int32_t t62 = -2265;

	t62 = (((x345-x346)*x347)%x348);

	if (t62 != -9) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x350 = 269636;
	uint32_t x351 = 31435270U;
	static int64_t t63 = 2956298LL;

	t63 = (((x349-x350)*x351)%x352);

	if (t63 != 1611039842LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x353 = INT16_MIN;
	uint32_t x355 = UINT32_MAX;
	static uint8_t x356 = 13U;
	uint32_t t64 = 167964U;

	t64 = (((x353-x354)*x355)%x356);

	if (t64 != 9U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x357 = 805169670563LLU;
	int32_t x358 = -1;
	int64_t x359 = -20279740LL;
	int16_t x360 = INT16_MIN;
	uint64_t t65 = 6401661267651996261LLU;

	t65 = (((x357-x358)*x359)%x360);

	if (t65 != 2118112498785978256LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = INT16_MIN;
	volatile int16_t x363 = INT16_MIN;
	int32_t x364 = -1;
	volatile int64_t t66 = -113130468LL;

	t66 = (((x361-x362)*x363)%x364);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x371 = -82;
	int32_t x372 = -1;
	volatile int32_t t67 = 4774100;

	t67 = (((x369-x370)*x371)%x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x373 = 26785593;
	static volatile int8_t x375 = -11;
	volatile uint64_t t68 = 140357294525LLU;

	t68 = (((x373-x374)*x375)%x376);

	if (t68 != 4000325762LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = INT64_MIN;
	int8_t x379 = 1;
	int64_t t69 = 59774215483568LL;

	t69 = (((x377-x378)*x379)%x380);

	if (t69 != -127LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x382 = 3;
	static volatile uint32_t t70 = 6587U;

	t70 = (((x381-x382)*x383)%x384);

	if (t70 != 4294966276U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x385 = -11;
	int16_t x387 = 26;
	int16_t x388 = -2285;
	int32_t t71 = 346116336;

	t71 = (((x385-x386)*x387)%x388);

	if (t71 != -1871) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x389 = INT32_MIN;
	int64_t x390 = -1LL;
	volatile int16_t x391 = 3;
	int32_t x392 = INT32_MAX;
	static int64_t t72 = 5LL;

	t72 = (((x389-x390)*x391)%x392);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = INT8_MIN;
	uint32_t x399 = 3157U;
	uint64_t x400 = UINT64_MAX;

	t73 = (((x397-x398)*x399)%x400);

	if (t73 != 4294566357LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x401 = INT8_MIN;
	int16_t x402 = INT16_MAX;
	int64_t x403 = -991LL;
	int64_t t74 = 8LL;

	t74 = (((x401-x402)*x403)%x404);

	if (t74 != 32598945LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x409 = 5;
	int16_t x410 = -1;
	int8_t x411 = INT8_MAX;
	uint8_t x412 = 4U;

	t75 = (((x409-x410)*x411)%x412);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x414 = INT8_MAX;
	static volatile uint16_t x415 = UINT16_MAX;
	int16_t x416 = -47;
	volatile uint64_t t76 = 23980474054LLU;

	t76 = (((x413-x414)*x415)%x416);

	if (t76 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int32_t t77 = 1;

	t77 = (((x421-x422)*x423)%x424);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x433 = 15628775089LLU;
	int32_t x434 = INT32_MIN;
	int16_t x436 = -668;
	uint64_t t78 = 61609LLU;

	t78 = (((x433-x434)*x435)%x436);

	if (t78 != 656335025087514LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x437 = 10U;
	uint32_t x438 = 14505U;
	uint8_t x439 = UINT8_MAX;
	uint32_t x440 = 384U;

	t79 = (((x437-x438)*x439)%x440);

	if (t79 != 31U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x441 = -138;
	int16_t x442 = -1;
	static volatile uint32_t x443 = 261667266U;
	static int8_t x444 = -1;

	t80 = (((x441-x442)*x443)%x444);

	if (t80 != 2806290222U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x445 = 135984198355832299LLU;
	int16_t x446 = 6;
	static volatile int64_t x447 = -1LL;
	int32_t x448 = -1;
	uint64_t t81 = 433437388549111255LLU;

	t81 = (((x445-x446)*x447)%x448);

	if (t81 != 18310759875353719323LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x449 = INT8_MAX;
	volatile int16_t x450 = INT16_MIN;
	uint8_t x451 = 1U;
	int16_t x452 = -1;
	int32_t t82 = 44;

	t82 = (((x449-x450)*x451)%x452);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x454 = INT8_MIN;
	int64_t x456 = INT64_MIN;
	int64_t t83 = -24LL;

	t83 = (((x453-x454)*x455)%x456);

	if (t83 != -24973560LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x459 = INT16_MIN;
	int8_t x460 = INT8_MAX;
	uint32_t t84 = 156U;

	t84 = (((x457-x458)*x459)%x460);

	if (t84 != 12U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x461 = -1;
	volatile uint32_t x462 = 30058U;
	uint64_t x463 = 3461304705177798482LLU;
	int16_t x464 = INT16_MIN;
	uint64_t t85 = 26379901483406LLU;

	t85 = (((x461-x462)*x463)%x464);

	if (t85 != 3448955494155040442LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x469 = UINT16_MAX;
	int64_t x470 = -1LL;
	int8_t x471 = 0;
	volatile int64_t t86 = 907359LL;

	t86 = (((x469-x470)*x471)%x472);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x473 = -315169191543LL;
	uint32_t x474 = 14U;
	uint32_t x476 = 2966U;
	uint64_t t87 = 893567904LLU;

	t87 = (((x473-x474)*x475)%x476);

	if (t87 != 1987LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x489 = INT64_MIN;
	uint32_t x492 = 9092U;
	int64_t t88 = 652543384602212712LL;

	t88 = (((x489-x490)*x491)%x492);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x493 = -1;
	int64_t x494 = -4298LL;
	int64_t x495 = -1LL;
	static volatile int64_t x496 = 87519354LL;
	static int64_t t89 = 368077402LL;

	t89 = (((x493-x494)*x495)%x496);

	if (t89 != -4297LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x501 = 1299322170U;
	uint32_t x502 = 2300472U;
	int32_t x503 = -1;
	uint16_t x504 = 8U;
	volatile uint32_t t90 = 775680U;

	t90 = (((x501-x502)*x503)%x504);

	if (t90 != 6U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x509 = 1;
	int32_t x510 = INT32_MAX;
	uint32_t x511 = 15U;
	static volatile int64_t t91 = 421LL;

	t91 = (((x509-x510)*x511)%x512);

	if (t91 != 2147483678LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x513 = INT64_MAX;
	volatile int32_t x514 = INT32_MAX;
	int8_t x515 = -1;
	uint16_t x516 = 243U;

	t92 = (((x513-x514)*x515)%x516);

	if (t92 != -123LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x517 = 4LL;
	volatile int16_t x518 = 1;
	uint16_t x519 = 28232U;
	static int64_t x520 = INT64_MAX;
	volatile int64_t t93 = -2635LL;

	t93 = (((x517-x518)*x519)%x520);

	if (t93 != 84696LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x522 = 160U;
	int8_t x524 = INT8_MIN;

	t94 = (((x521-x522)*x523)%x524);

	if (t94 != -109) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x525 = -10282;
	static int8_t x526 = 6;
	static int64_t x527 = 23053LL;
	int16_t x528 = INT16_MIN;

	t95 = (((x525-x526)*x527)%x528);

	if (t95 != -27248LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x530 = 180U;
	static volatile int16_t x531 = INT16_MIN;
	uint32_t x532 = 225U;
	static volatile uint32_t t96 = 968557924U;

	t96 = (((x529-x530)*x531)%x532);

	if (t96 != 181U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x541 = 708032;
	static uint64_t x542 = 10961LLU;
	int32_t x543 = -1;
	volatile uint32_t x544 = 305206257U;

	t97 = (((x541-x542)*x543)%x544);

	if (t97 != 89024122LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x545 = -1LL;
	int64_t x547 = 9LL;
	int8_t x548 = INT8_MIN;
	static volatile int64_t t98 = 1085627557660035LL;

	t98 = (((x545-x546)*x547)%x548);

	if (t98 != 119LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x569 = INT32_MIN;
	int64_t x570 = -1LL;
	int32_t x571 = INT32_MIN;
	volatile int64_t t99 = 45912473810768573LL;

	t99 = (((x569-x570)*x571)%x572);

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

