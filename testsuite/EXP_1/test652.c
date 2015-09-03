#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = -1889137;
int64_t x10 = -1LL;
volatile int8_t x13 = -2;
volatile uint64_t x16 = UINT64_MAX;
int16_t x23 = INT16_MAX;
int16_t x29 = 14447;
static volatile int16_t x30 = INT16_MAX;
int16_t x32 = -287;
uint32_t x33 = 4365284U;
uint8_t x34 = 64U;
uint64_t x40 = 34846415976673LLU;
volatile int32_t x42 = -1;
int64_t x43 = -1LL;
int8_t x47 = -6;
uint32_t x52 = 24185204U;
volatile int64_t t11 = 830259LL;
int64_t x61 = INT64_MIN;
int8_t x68 = INT8_MIN;
int16_t x76 = 1;
volatile int8_t x88 = 0;
uint16_t x89 = 8U;
int64_t x97 = -3065LL;
volatile uint32_t x102 = 4300627U;
uint32_t x105 = 105493U;
volatile int64_t t25 = 70435418116198LL;
volatile int32_t x109 = INT32_MIN;
volatile int8_t x123 = INT8_MAX;
volatile int16_t x130 = INT16_MIN;
uint64_t x132 = 55641745087860LLU;
volatile uint64_t t31 = 661440302609568LLU;
static int32_t x134 = 22345;
int64_t t32 = -103801013181LL;
int32_t x139 = -1;
int16_t x140 = -1;
uint8_t x150 = 2U;
int16_t x151 = INT16_MIN;
int16_t x155 = -1;
int64_t x158 = 405340LL;
static int64_t x161 = -308664271880LL;
int16_t x162 = 4;
static int64_t x167 = INT64_MAX;
int64_t x169 = -17393549LL;
static int8_t x171 = -1;
int32_t x176 = -106517758;
uint64_t x182 = 981787980159339677LLU;
int64_t x184 = INT64_MIN;
uint64_t t42 = 11652989270LLU;
int32_t x189 = INT32_MIN;
int8_t x190 = INT8_MAX;
int16_t x197 = -901;
static uint32_t x200 = 360014605U;
static int8_t x203 = INT8_MIN;
int8_t x208 = INT8_MIN;
static volatile int32_t x210 = 32388;
int8_t x212 = INT8_MIN;
int32_t t49 = 154317176;
uint8_t x213 = 13U;
volatile int32_t t50 = -209;
uint16_t x220 = 25U;
static int8_t x245 = -56;
volatile uint64_t t55 = 752897220LLU;
volatile uint64_t t56 = 1787004079LLU;
uint64_t t58 = 1257743552789570782LLU;
volatile int64_t t60 = -7360960526078LL;
uint8_t x282 = UINT8_MAX;
int8_t x283 = -1;
uint16_t x288 = 0U;
uint32_t x291 = UINT32_MAX;
uint64_t t64 = 1121591440880263LLU;
volatile uint64_t t68 = 547LLU;
volatile int64_t t70 = -22710236903925161LL;
uint64_t x321 = UINT64_MAX;
static volatile uint64_t t71 = 4017784279LLU;
int16_t x326 = 1453;
int64_t x328 = -1388000LL;
int64_t x329 = -1LL;
static int64_t x330 = INT64_MAX;
int64_t t73 = 4037099195LL;
uint32_t x337 = 3U;
int64_t x343 = -1LL;
volatile int32_t x350 = -1;
uint32_t t77 = 26345U;
uint64_t x366 = UINT64_MAX;
int32_t x368 = INT32_MAX;
volatile int32_t t82 = -1068;
int8_t x375 = INT8_MIN;
static int16_t x390 = INT16_MAX;
uint32_t x399 = 64049105U;
int8_t x400 = INT8_MAX;
uint32_t t88 = 889U;
int32_t x403 = -1;
int32_t x404 = 16560723;
volatile int32_t t89 = -3727;
int32_t x409 = -1285;
uint16_t x410 = 12U;
int16_t x411 = INT16_MIN;
int32_t x418 = -1;
int64_t x421 = -1LL;
uint8_t x425 = 73U;
volatile uint16_t x426 = 12721U;
int8_t x428 = INT8_MIN;
static volatile uint8_t x430 = UINT8_MAX;
uint8_t x431 = 2U;
int8_t x441 = INT8_MIN;
int32_t x447 = -466;


void f0(void) {
	int64_t x1 = -1LL;
	static int16_t x2 = -1;
	volatile uint8_t x3 = UINT8_MAX;
	volatile int32_t x4 = INT32_MIN;
	int64_t t0 = 1LL;

	t0 = (((x1/x2)|x3)-x4);

	if (t0 != 2147483903LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 61316U;
	int64_t x6 = 44LL;
	int8_t x8 = INT8_MIN;
	static volatile int64_t t1 = -2LL;

	t1 = (((x5/x6)|x7)-x8);

	if (t1 != -1888641LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint32_t x11 = 41108782U;
	int8_t x12 = -3;
	int64_t t2 = -191740030LL;

	t2 = (((x9/x10)|x11)-x12);

	if (t2 != 2188592433LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	int16_t x15 = -1;
	volatile uint64_t t3 = 6652513790LLU;

	t3 = (((x13/x14)|x15)-x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static uint32_t x18 = 477U;
	static uint64_t x19 = 825215793225400687LLU;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t4 = 493508LLU;

	t4 = (((x17/x18)|x19)-x20);

	if (t4 != 825215793225433455LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 99U;
	int8_t x22 = 1;
	int16_t x24 = INT16_MAX;
	static volatile int32_t t5 = 6590;

	t5 = (((x21/x22)|x23)-x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x31 = 11U;
	static int32_t t6 = -11274732;

	t6 = (((x29/x30)|x31)-x32);

	if (t6 != 298) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x35 = UINT8_MAX;
	uint8_t x36 = UINT8_MAX;
	uint32_t t7 = 186U;

	t7 = (((x33/x34)|x35)-x36);

	if (t7 != 68096U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	int64_t x38 = INT64_MIN;
	int64_t x39 = 43678LL;
	uint64_t t8 = 81441148658857LLU;

	t8 = (((x37/x38)|x39)-x40);

	if (t8 != 18446709227293618621LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 3U;
	int32_t x44 = INT32_MIN;
	volatile int64_t t9 = 1213309594487743406LL;

	t9 = (((x41/x42)|x43)-x44);

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 1929669782681LL;
	int8_t x46 = INT8_MAX;
	int16_t x48 = 232;
	volatile int64_t t10 = 1965856156LL;

	t10 = (((x45/x46)|x47)-x48);

	if (t10 != -237LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 70124134U;
	int16_t x50 = INT16_MAX;
	int64_t x51 = -1LL;

	t11 = (((x49/x50)|x51)-x52);

	if (t11 != -24185205LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 15380;
	int8_t x54 = INT8_MIN;
	volatile int64_t x55 = -1204LL;
	static int8_t x56 = INT8_MIN;
	int64_t t12 = -247301898042198082LL;

	t12 = (((x53/x54)|x55)-x56);

	if (t12 != 76LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = -1;
	int8_t x58 = 28;
	int32_t x59 = INT32_MIN;
	int8_t x60 = -1;
	int32_t t13 = -47914;

	t13 = (((x57/x58)|x59)-x60);

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x62 = 3U;
	int32_t x63 = INT32_MIN;
	static int32_t x64 = -1;
	int64_t t14 = 7349LL;

	t14 = (((x61/x62)|x63)-x64);

	if (t14 != -715827881LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = UINT16_MAX;
	int8_t x66 = INT8_MAX;
	uint8_t x67 = 7U;
	volatile int32_t t15 = 13188942;

	t15 = (((x65/x66)|x67)-x68);

	if (t15 != 647) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MAX;
	volatile uint16_t x71 = UINT16_MAX;
	uint32_t x72 = 679187U;
	volatile int64_t t16 = 10066114LL;

	t16 = (((x69/x70)|x71)-x72);

	if (t16 != -613652LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 0U;
	uint32_t x74 = 260853U;
	int64_t x75 = INT64_MAX;
	volatile int64_t t17 = 12732415714625180LL;

	t17 = (((x73/x74)|x75)-x76);

	if (t17 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	static int8_t x78 = -1;
	int8_t x79 = -1;
	volatile int32_t x80 = 169;
	int32_t t18 = 1764;

	t18 = (((x77/x78)|x79)-x80);

	if (t18 != -170) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MAX;
	int32_t x83 = 20155830;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t19 = 875374LLU;

	t19 = (((x81/x82)|x83)-x84);

	if (t19 != 20155831LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MAX;
	uint8_t x87 = 12U;
	int64_t t20 = -52629659328LL;

	t20 = (((x85/x86)|x87)-x88);

	if (t20 != 12LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = 5992LL;
	static int8_t x91 = 39;
	static volatile int8_t x92 = -1;
	int64_t t21 = -1LL;

	t21 = (((x89/x90)|x91)-x92);

	if (t21 != 40LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x93 = 6U;
	int16_t x94 = INT16_MIN;
	static int16_t x95 = INT16_MIN;
	int32_t x96 = -1;
	int32_t t22 = 61887;

	t22 = (((x93/x94)|x95)-x96);

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MIN;
	volatile int64_t t23 = 9620545LL;

	t23 = (((x97/x98)|x99)-x100);

	if (t23 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int8_t x103 = 0;
	static int16_t x104 = -14001;
	volatile int64_t t24 = 0LL;

	t24 = (((x101/x102)|x103)-x104);

	if (t24 != -2144657506136LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x106 = 675U;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = -1LL;

	t25 = (((x105/x106)|x107)-x108);

	if (t25 != 4294967296LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t26 = 4720534719LLU;

	t26 = (((x109/x110)|x111)-x112);

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = 1841603606LLU;
	int8_t x116 = INT8_MAX;
	static uint64_t t27 = 14109880524LLU;

	t27 = (((x113/x114)|x115)-x116);

	if (t27 != 281476818314135LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 11792889LL;
	volatile int32_t x118 = INT32_MIN;
	volatile int32_t x119 = INT32_MAX;
	uint16_t x120 = 4U;
	int64_t t28 = -13065648515839LL;

	t28 = (((x117/x118)|x119)-x120);

	if (t28 != 2147483643LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = 1;
	volatile int16_t x122 = INT16_MIN;
	static int16_t x124 = -1;
	static volatile int32_t t29 = 31279398;

	t29 = (((x121/x122)|x123)-x124);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	uint8_t x126 = 10U;
	int16_t x127 = -661;
	int64_t x128 = 49762236LL;
	volatile int64_t t30 = 10110LL;

	t30 = (((x125/x126)|x127)-x128);

	if (t30 != 4245204543LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x131 = 39828786002078LLU;

	t31 = (((x129/x130)|x131)-x132);

	if (t31 != 265662017624874LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = 29367LL;
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;

	t32 = (((x133/x134)|x135)-x136);

	if (t32 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x137 = 0U;
	volatile uint32_t x138 = 4U;
	volatile uint32_t t33 = 437087393U;

	t33 = (((x137/x138)|x139)-x140);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -1;
	volatile uint16_t x146 = 19973U;
	static int8_t x147 = INT8_MIN;
	int32_t x148 = 159;
	int32_t t34 = -1;

	t34 = (((x145/x146)|x147)-x148);

	if (t34 != -287) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -1044;
	int32_t x152 = 77463438;
	int32_t t35 = 114293;

	t35 = (((x149/x150)|x151)-x152);

	if (t35 != -77463960) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 4012U;
	static int16_t x154 = INT16_MIN;
	int16_t x156 = INT16_MAX;
	volatile int32_t t36 = -40017919;

	t36 = (((x153/x154)|x155)-x156);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	int16_t x159 = INT16_MIN;
	static volatile int16_t x160 = -56;
	int64_t t37 = -42210051009585442LL;

	t37 = (((x157/x158)|x159)-x160);

	if (t37 != -27415LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x163 = INT8_MAX;
	int32_t x164 = -1;
	volatile int64_t t38 = -1070232034855LL;

	t38 = (((x161/x162)|x163)-x164);

	if (t38 != -77166067968LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -1;
	int16_t x166 = INT16_MIN;
	int16_t x168 = 69;
	volatile int64_t t39 = -2671LL;

	t39 = (((x165/x166)|x167)-x168);

	if (t39 != 9223372036854775738LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = -1688LL;
	int32_t x172 = INT32_MIN;
	volatile int64_t t40 = -467169933865017394LL;

	t40 = (((x169/x170)|x171)-x172);

	if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1835;
	static uint16_t x174 = UINT16_MAX;
	uint16_t x175 = 15U;
	int32_t t41 = -8;

	t41 = (((x173/x174)|x175)-x176);

	if (t41 != 106517773) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x181 = UINT16_MAX;
	uint8_t x183 = 25U;

	t42 = (((x181/x182)|x183)-x184);

	if (t42 != 9223372036854775833LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MIN;
	int64_t x187 = 297475LL;
	volatile int16_t x188 = INT16_MIN;
	volatile int64_t t43 = 8526781345LL;

	t43 = (((x185/x186)|x187)-x188);

	if (t43 != 330243LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = INT16_MAX;
	static uint64_t t44 = 136657600351LLU;

	t44 = (((x189/x190)|x191)-x192);

	if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = -1LL;
	int32_t x196 = 1692;
	volatile int64_t t45 = -6633351821LL;

	t45 = (((x193/x194)|x195)-x196);

	if (t45 != -1693LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x198 = INT64_MAX;
	static int32_t x199 = INT32_MIN;
	volatile int64_t t46 = -218390714LL;

	t46 = (((x197/x198)|x199)-x200);

	if (t46 != -2507498253LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MAX;
	int16_t x202 = INT16_MIN;
	uint8_t x204 = 9U;
	volatile int32_t t47 = 9188981;

	t47 = (((x201/x202)|x203)-x204);

	if (t47 != -137) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = 191U;
	volatile uint32_t t48 = 65U;

	t48 = (((x205/x206)|x207)-x208);

	if (t48 != 319U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = INT16_MAX;
	int16_t x211 = INT16_MIN;

	t49 = (((x209/x210)|x211)-x212);

	if (t49 != -32639) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x214 = -1;
	volatile int8_t x215 = INT8_MAX;
	volatile uint8_t x216 = 14U;

	t50 = (((x213/x214)|x215)-x216);

	if (t50 != -15) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = UINT64_MAX;
	int8_t x218 = 2;
	static int64_t x219 = INT64_MAX;
	volatile uint64_t t51 = 123LLU;

	t51 = (((x217/x218)|x219)-x220);

	if (t51 != 9223372036854775782LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x229 = 61U;
	uint64_t x230 = 1675778012LLU;
	uint64_t x231 = 40096850973448LLU;
	int64_t x232 = INT64_MAX;
	static volatile uint64_t t52 = 2LLU;

	t52 = (((x229/x230)|x231)-x232);

	if (t52 != 9223412133705749257LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int8_t x243 = -1;
	static int64_t x244 = -511539274638129681LL;
	int64_t t53 = -104119451926834618LL;

	t53 = (((x241/x242)|x243)-x244);

	if (t53 != 511539274638129680LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x246 = INT32_MIN;
	volatile uint8_t x247 = UINT8_MAX;
	int32_t x248 = -1;
	int32_t t54 = 864882839;

	t54 = (((x245/x246)|x247)-x248);

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x249 = 24U;
	uint64_t x250 = 39LLU;
	static uint64_t x251 = UINT64_MAX;
	static uint16_t x252 = 13U;

	t55 = (((x249/x250)|x251)-x252);

	if (t55 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 27897726938106LLU;
	uint32_t x254 = 3606U;
	int64_t x255 = INT64_MIN;
	static uint64_t x256 = 14LLU;

	t56 = (((x253/x254)|x255)-x256);

	if (t56 != 9223372044591250263LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = 22U;
	uint32_t x258 = 321U;
	int16_t x259 = 172;
	int32_t x260 = INT32_MIN;
	uint32_t t57 = 8249471U;

	t57 = (((x257/x258)|x259)-x260);

	if (t57 != 2147483820U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = UINT64_MAX;
	volatile int16_t x263 = -1;
	static int8_t x264 = 1;

	t58 = (((x261/x262)|x263)-x264);

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x265 = UINT64_MAX;
	uint64_t x266 = UINT64_MAX;
	volatile int8_t x267 = INT8_MIN;
	static volatile int16_t x268 = 696;
	static uint64_t t59 = 10005LLU;

	t59 = (((x265/x266)|x267)-x268);

	if (t59 != 18446744073709550793LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x269 = INT16_MAX;
	int64_t x270 = -1LL;
	int32_t x271 = 537;
	int32_t x272 = -3809;

	t60 = (((x269/x270)|x271)-x272);

	if (t60 != -28422LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x273 = INT16_MAX;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	static uint64_t x276 = 3247207284LLU;
	uint64_t t61 = 421621878524573333LLU;

	t61 = (((x273/x274)|x275)-x276);

	if (t61 != 9223372033607568524LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = -1LL;
	int8_t x284 = INT8_MIN;
	static int64_t t62 = -74LL;

	t62 = (((x281/x282)|x283)-x284);

	if (t62 != 127LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = -1LL;
	int8_t x286 = -1;
	uint8_t x287 = UINT8_MAX;
	volatile int64_t t63 = -9292LL;

	t63 = (((x285/x286)|x287)-x288);

	if (t63 != 255LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = UINT8_MAX;
	static uint64_t x290 = 21340LLU;
	uint64_t x292 = UINT64_MAX;

	t64 = (((x289/x290)|x291)-x292);

	if (t64 != 4294967296LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = INT32_MIN;
	static int8_t x294 = 2;
	volatile int32_t x295 = -1;
	static volatile int64_t x296 = 1827793671932464LL;
	int64_t t65 = 736080906LL;

	t65 = (((x293/x294)|x295)-x296);

	if (t65 != -1827793671932465LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x297 = INT64_MIN;
	volatile int16_t x298 = INT16_MAX;
	int16_t x299 = -1;
	uint16_t x300 = 28U;
	volatile int64_t t66 = -4034908617LL;

	t66 = (((x297/x298)|x299)-x300);

	if (t66 != -29LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = 1472564;
	static uint32_t x302 = 258169759U;
	uint64_t x303 = 38720165086LLU;
	uint64_t x304 = 284035100576808LLU;
	uint64_t t67 = 16424682980LLU;

	t67 = (((x301/x302)|x303)-x304);

	if (t67 != 18446460077329139894LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = 5935641;
	int16_t x306 = INT16_MAX;
	static int32_t x307 = INT32_MIN;
	volatile uint64_t x308 = 15LLU;

	t68 = (((x305/x306)|x307)-x308);

	if (t68 != 18446744071562068134LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MAX;
	volatile int8_t x314 = -1;
	uint64_t x315 = 65594876809041835LLU;
	int8_t x316 = -1;
	volatile uint64_t t69 = 532434652263136222LLU;

	t69 = (((x313/x314)|x315)-x316);

	if (t69 != 18446744073709541292LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = UINT8_MAX;
	static int8_t x318 = 15;
	int64_t x319 = -1LL;
	int32_t x320 = INT32_MIN;

	t70 = (((x317/x318)|x319)-x320);

	if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x322 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	int32_t x324 = 1;

	t71 = (((x321/x322)|x323)-x324);

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = 0;
	static int8_t x327 = -1;
	volatile int64_t t72 = 56452335402697LL;

	t72 = (((x325/x326)|x327)-x328);

	if (t72 != 1387999LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x331 = 827950;
	volatile int16_t x332 = INT16_MAX;

	t73 = (((x329/x330)|x331)-x332);

	if (t73 != 795183LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = 795902LL;
	uint64_t x334 = UINT64_MAX;
	int64_t x335 = -1LL;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t74 = 15691773163LLU;

	t74 = (((x333/x334)|x335)-x336);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x338 = 27962;
	uint16_t x339 = 2U;
	int16_t x340 = -3;
	uint32_t t75 = 0U;

	t75 = (((x337/x338)|x339)-x340);

	if (t75 != 5U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x341 = 133702LL;
	int16_t x342 = INT16_MAX;
	int64_t x344 = INT64_MIN;
	int64_t t76 = INT64_MAX;

	t76 = (((x341/x342)|x343)-x344);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = -1;
	uint32_t x351 = 1U;
	static int8_t x352 = -1;

	t77 = (((x349/x350)|x351)-x352);

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = INT64_MAX;
	static int32_t x354 = 1;
	volatile int16_t x355 = INT16_MIN;
	uint64_t x356 = 1615866142933212350LLU;
	uint64_t t78 = 777425654206LLU;

	t78 = (((x353/x354)|x355)-x356);

	if (t78 != 16830877930776339265LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	int64_t x359 = INT64_MAX;
	volatile uint8_t x360 = 1U;
	volatile int64_t t79 = 5056895028LL;

	t79 = (((x357/x358)|x359)-x360);

	if (t79 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	volatile int16_t x363 = -1;
	int8_t x364 = INT8_MIN;
	volatile int32_t t80 = 17470702;

	t80 = (((x361/x362)|x363)-x364);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x365 = UINT16_MAX;
	uint64_t x367 = UINT64_MAX;
	uint64_t t81 = 1910977379988LLU;

	t81 = (((x365/x366)|x367)-x368);

	if (t81 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x369 = 8U;
	static int32_t x370 = INT32_MIN;
	int16_t x371 = -1;
	int32_t x372 = -1;

	t82 = (((x369/x370)|x371)-x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x373 = UINT8_MAX;
	uint8_t x374 = UINT8_MAX;
	int32_t x376 = -3376579;
	volatile int32_t t83 = -164;

	t83 = (((x373/x374)|x375)-x376);

	if (t83 != 3376452) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x377 = -3797;
	int64_t x378 = 98846LL;
	int8_t x379 = INT8_MIN;
	uint64_t x380 = 42516146146LLU;
	uint64_t t84 = 4LLU;

	t84 = (((x377/x378)|x379)-x380);

	if (t84 != 18446744031193405342LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x381 = 9488U;
	uint32_t x382 = 38U;
	int64_t x383 = -461084030558LL;
	int8_t x384 = -1;
	int64_t t85 = -181259232793839LL;

	t85 = (((x381/x382)|x383)-x384);

	if (t85 != -461084030468LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = INT8_MIN;
	static int32_t x386 = 115;
	int16_t x387 = INT16_MAX;
	int8_t x388 = -1;
	static int32_t t86 = -5085017;

	t86 = (((x385/x386)|x387)-x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x389 = INT64_MAX;
	int8_t x391 = -1;
	static int16_t x392 = 0;
	int64_t t87 = 676714289568305123LL;

	t87 = (((x389/x390)|x391)-x392);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x397 = 0;
	static int32_t x398 = INT32_MIN;

	t88 = (((x397/x398)|x399)-x400);

	if (t88 != 64048978U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;

	t89 = (((x401/x402)|x403)-x404);

	if (t89 != -16560724) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x405 = INT8_MIN;
	int64_t x406 = -1657392893876438LL;
	volatile int8_t x407 = INT8_MIN;
	int8_t x408 = 3;
	volatile int64_t t90 = -5190LL;

	t90 = (((x405/x406)|x407)-x408);

	if (t90 != -131LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x412 = 729804U;
	volatile uint32_t t91 = 50556874U;

	t91 = (((x409/x410)|x411)-x412);

	if (t91 != 4294237385U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x413 = 19;
	static uint32_t x414 = UINT32_MAX;
	volatile int16_t x415 = -3989;
	int32_t x416 = INT32_MIN;
	uint32_t t92 = 7678699U;

	t92 = (((x413/x414)|x415)-x416);

	if (t92 != 2147479659U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = -5172533;
	static int8_t x419 = -1;
	static uint32_t x420 = UINT32_MAX;
	volatile uint32_t t93 = 12058U;

	t93 = (((x417/x418)|x419)-x420);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x422 = 4728U;
	uint64_t x423 = 184LLU;
	volatile int16_t x424 = INT16_MIN;
	volatile uint64_t t94 = 931046694113100305LLU;

	t94 = (((x421/x422)|x423)-x424);

	if (t94 != 32952LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x427 = INT32_MIN;
	volatile int32_t t95 = -55514;

	t95 = (((x425/x426)|x427)-x428);

	if (t95 != -2147483520) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = -1;
	int16_t x432 = INT16_MIN;
	int32_t t96 = 16;

	t96 = (((x429/x430)|x431)-x432);

	if (t96 != 32770) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x442 = UINT64_MAX;
	int16_t x443 = INT16_MAX;
	int16_t x444 = 1064;
	static volatile uint64_t t97 = 4LLU;

	t97 = (((x441/x442)|x443)-x444);

	if (t97 != 31703LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x445 = 3542LLU;
	volatile uint8_t x446 = 1U;
	volatile uint64_t x448 = 12747181LLU;
	uint64_t t98 = 119275018LLU;

	t98 = (((x445/x446)|x447)-x448);

	if (t98 != 18446744073696804433LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = -1;
	int16_t x450 = -6;
	int32_t x451 = 0;
	uint16_t x452 = 10239U;
	volatile int32_t t99 = -3733403;

	t99 = (((x449/x450)|x451)-x452);

	if (t99 != -10239) { NG(); } else { ; }
	
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

