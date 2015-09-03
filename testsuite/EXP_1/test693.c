#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 7282500LL;
int64_t t0 = -1300414LL;
volatile uint16_t x5 = UINT16_MAX;
int32_t x6 = INT32_MAX;
int64_t t1 = 16514131543173963LL;
static int32_t x11 = 5166;
volatile int8_t x13 = -1;
int64_t x19 = -1LL;
volatile uint8_t x21 = 1U;
int16_t x27 = -950;
volatile int8_t x38 = -33;
static int32_t t9 = -829393;
uint8_t x49 = 86U;
volatile int64_t x67 = -1LL;
static volatile int64_t t16 = -487929304427LL;
volatile int8_t x80 = INT8_MIN;
static int16_t x90 = INT16_MIN;
int16_t x94 = -1;
static uint64_t x95 = 1715679132039LLU;
int64_t x98 = INT64_MAX;
volatile int64_t t23 = -1LL;
int32_t x101 = INT32_MIN;
int32_t x103 = 179;
int64_t x109 = INT64_MIN;
int8_t x112 = INT8_MIN;
uint64_t x115 = 2631LLU;
int64_t x122 = INT64_MIN;
uint16_t x127 = 14U;
volatile uint16_t x132 = 348U;
int16_t x138 = 211;
volatile int64_t t34 = 52028068103428LL;
int64_t t36 = -129503349024951402LL;
volatile int16_t x167 = -21;
volatile int32_t x168 = INT32_MIN;
int64_t t43 = -491065027302499LL;
static int8_t x187 = INT8_MIN;
int64_t t47 = 214891247127304LL;
int64_t t48 = -14794LL;
static int8_t x207 = INT8_MIN;
static int32_t x208 = INT32_MIN;
int64_t t49 = 110209LL;
volatile int64_t t50 = -152700241670910LL;
int8_t x213 = INT8_MAX;
int32_t x214 = INT32_MIN;
uint64_t x215 = 2828390506LLU;
volatile uint8_t x216 = 28U;
int16_t x219 = INT16_MAX;
static int8_t x222 = INT8_MIN;
static uint32_t x224 = UINT32_MAX;
int8_t x226 = -1;
uint32_t x228 = UINT32_MAX;
int16_t x231 = INT16_MIN;
int64_t x232 = INT64_MAX;
static volatile int8_t x235 = -47;
static uint32_t t56 = 703289U;
volatile uint8_t x237 = 3U;
uint64_t t57 = 2947475174848LLU;
int32_t x242 = INT32_MIN;
static volatile int32_t t60 = 23862924;
uint32_t x256 = 64435892U;
volatile int8_t x260 = 27;
volatile uint64_t t62 = 654313706787396783LLU;
uint8_t x265 = UINT8_MAX;
volatile int32_t t63 = -16017;
uint16_t x271 = 1965U;
static uint64_t t64 = 6LLU;
static int16_t x280 = INT16_MIN;
volatile int8_t x286 = -1;
volatile int32_t t67 = -916345;
uint32_t x292 = 1522U;
volatile uint32_t t69 = 398844748U;
static uint32_t x298 = 2U;
int8_t x304 = -1;
volatile uint64_t x308 = 6217722345094LLU;
volatile int16_t x313 = -133;
uint16_t x316 = 6U;
int16_t x317 = INT16_MIN;
static volatile int16_t x324 = INT16_MIN;
volatile int64_t t76 = 1001249700408LL;
int8_t x331 = INT8_MAX;
int32_t x333 = INT32_MIN;
static volatile uint8_t x335 = UINT8_MAX;
static volatile int32_t t78 = 0;
volatile uint16_t x337 = UINT16_MAX;
volatile uint8_t x339 = UINT8_MAX;
int64_t x340 = INT64_MAX;
static uint64_t t80 = 47495205590LLU;
int64_t t82 = 1117LL;
uint16_t x372 = 4U;
int16_t x384 = -1;
int64_t t90 = 62LL;
int16_t x386 = INT16_MIN;
volatile int8_t x387 = -1;
int64_t x396 = -19766398190LL;
uint64_t x401 = UINT64_MAX;
int8_t x404 = 1;
volatile uint8_t x406 = 3U;
int8_t x408 = -2;
volatile uint64_t t95 = 3582365610LLU;
volatile int16_t x411 = INT16_MIN;
volatile uint16_t x415 = 4998U;
int32_t x418 = -6625146;
uint32_t x419 = 791370846U;
volatile int8_t x420 = 1;
static uint8_t x424 = 5U;


void f0(void) {
	uint32_t x1 = 31335355U;
	int8_t x3 = INT8_MAX;
	uint8_t x4 = UINT8_MAX;

	t0 = (((x1%x2)-x3)/x4);

	if (t0 != 8647LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = INT32_MAX;
	static int64_t x8 = -1LL;

	t1 = (((x5%x6)-x7)/x8);

	if (t1 != 2147418112LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MAX;
	int32_t x10 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	static int64_t t2 = -453163LL;

	t2 = (((x9%x10)-x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	uint64_t x15 = 4LLU;
	int64_t x16 = INT64_MIN;
	uint64_t t3 = 22108141663LLU;

	t3 = (((x13%x14)-x15)/x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static int32_t x18 = INT32_MAX;
	int8_t x20 = INT8_MIN;
	static volatile int64_t t4 = -4185331724704461046LL;

	t4 = (((x17%x18)-x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -3LL;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MAX;
	int64_t t5 = -469LL;

	t5 = (((x21%x22)-x23)/x24);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 14U;
	int32_t x26 = INT32_MAX;
	int32_t x28 = -1;
	int32_t t6 = 132852202;

	t6 = (((x25%x26)-x27)/x28);

	if (t6 != -964) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int8_t x30 = -10;
	static uint8_t x31 = 1U;
	int64_t x32 = 9595926LL;
	int64_t t7 = -65843LL;

	t7 = (((x29%x30)-x31)/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	volatile uint32_t x34 = 14292335U;
	volatile int8_t x35 = -18;
	volatile int64_t x36 = -1LL;
	int64_t t8 = 55484097377879LL;

	t8 = (((x33%x34)-x35)/x36);

	if (t8 != -7266813LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	volatile uint16_t x39 = 5U;
	static int32_t x40 = INT32_MAX;

	t9 = (((x37%x38)-x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static int16_t x42 = INT16_MIN;
	static int32_t x43 = -499062;
	volatile int32_t x44 = INT32_MIN;
	int32_t t10 = -40337837;

	t10 = (((x41%x42)-x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	volatile int64_t x46 = INT64_MIN;
	volatile int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;
	int64_t t11 = 1567714838345786LL;

	t11 = (((x45%x46)-x47)/x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = UINT8_MAX;
	int64_t x51 = -1LL;
	int32_t x52 = INT32_MAX;
	int64_t t12 = -6336340265794733LL;

	t12 = (((x49%x50)-x51)/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 9096669776152LLU;
	static uint16_t x54 = 11926U;
	int64_t x55 = -70161521936371LL;
	int32_t x56 = 54623778;
	volatile uint64_t t13 = 771985803489234039LLU;

	t13 = (((x53%x54)-x55)/x56);

	if (t13 != 1284450LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = INT8_MIN;
	volatile uint16_t x58 = UINT16_MAX;
	static int32_t x59 = INT32_MIN;
	uint32_t x60 = 16604546U;
	static volatile uint32_t t14 = 9757385U;

	t14 = (((x57%x58)-x59)/x60);

	if (t14 != 129U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	uint64_t x62 = 2105312322762LLU;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = INT32_MAX;
	uint64_t t15 = 50612LLU;

	t15 = (((x61%x62)-x63)/x64);

	if (t15 != 8589934595LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 1U;
	int32_t x66 = INT32_MAX;
	volatile int8_t x68 = INT8_MIN;

	t16 = (((x65%x66)-x67)/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 6062763U;
	int8_t x70 = 4;
	int64_t x71 = -4017672480851904LL;
	int16_t x72 = -1;
	volatile int64_t t17 = 1808697099792101LL;

	t17 = (((x69%x70)-x71)/x72);

	if (t17 != -4017672480851907LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 1407U;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 506;

	t18 = (((x73%x74)-x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MAX;
	static int16_t x78 = -1;
	int64_t x79 = -3824228000275LL;
	int64_t t19 = -117493LL;

	t19 = (((x77%x78)-x79)/x80);

	if (t19 != -29876781252LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MAX;
	volatile uint8_t x87 = 6U;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t20 = -5911289425371367LL;

	t20 = (((x85%x86)-x87)/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 503U;
	int8_t x91 = -1;
	int64_t x92 = INT64_MAX;
	volatile int64_t t21 = 63515221613801LL;

	t21 = (((x89%x90)-x91)/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = INT32_MAX;
	int32_t x96 = 1348212;
	volatile uint64_t t22 = 62802LLU;

	t22 = (((x93%x94)-x95)/x96);

	if (t22 != 13682375144287LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x97 = INT32_MAX;
	int64_t x99 = INT64_MAX;
	int16_t x100 = INT16_MIN;

	t23 = (((x97%x98)-x99)/x100);

	if (t23 != 281474976645120LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = INT32_MAX;
	uint32_t x104 = 7592U;
	volatile uint32_t t24 = 2347555U;

	t24 = (((x101%x102)-x103)/x104);

	if (t24 != 565722U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 4U;
	volatile uint32_t x106 = 464669U;
	uint8_t x107 = 8U;
	int16_t x108 = INT16_MIN;
	static uint32_t t25 = 753U;

	t25 = (((x105%x106)-x107)/x108);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x110 = UINT32_MAX;
	volatile uint32_t x111 = UINT32_MAX;
	int64_t t26 = 5515220090619LL;

	t26 = (((x109%x110)-x111)/x112);

	if (t26 != 50331647LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -1;
	uint8_t x114 = 46U;
	int8_t x116 = INT8_MIN;
	static volatile uint64_t t27 = 40734475LLU;

	t27 = (((x113%x114)-x115)/x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	volatile int64_t x119 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t28 = 669LL;

	t28 = (((x117%x118)-x119)/x120);

	if (t28 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -2;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = -26;
	int64_t t29 = 138509993666LL;

	t29 = (((x121%x122)-x123)/x124);

	if (t29 != 2520LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	int64_t x126 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int64_t t30 = -1812346392LL;

	t30 = (((x125%x126)-x127)/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	uint16_t x130 = 180U;
	volatile int64_t x131 = 3487757827178952LL;
	static volatile int64_t t31 = 278991714126LL;

	t31 = (((x129%x130)-x131)/x132);

	if (t31 != -10022292606835LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MAX;
	int32_t x135 = INT32_MAX;
	int8_t x136 = -1;
	volatile int64_t t32 = -2124LL;

	t32 = (((x133%x134)-x135)/x136);

	if (t32 != 2147516415LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = INT8_MAX;
	uint8_t x139 = UINT8_MAX;
	static volatile int16_t x140 = INT16_MAX;
	static volatile int32_t t33 = -1131;

	t33 = (((x137%x138)-x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = 14202LL;
	uint32_t x143 = 0U;
	static uint16_t x144 = UINT16_MAX;

	t34 = (((x141%x142)-x143)/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	uint16_t x146 = UINT16_MAX;
	static uint32_t x147 = 1821925U;
	volatile uint16_t x148 = UINT16_MAX;
	static uint32_t t35 = 2585260U;

	t35 = (((x145%x146)-x147)/x148);

	if (t35 != 65509U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	int16_t x150 = -661;
	int64_t x151 = -1LL;
	volatile int32_t x152 = INT32_MIN;

	t36 = (((x149%x150)-x151)/x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = INT8_MIN;
	int32_t x154 = -1;
	static int32_t x155 = 0;
	volatile int64_t x156 = INT64_MIN;
	volatile int64_t t37 = 14497267740LL;

	t37 = (((x153%x154)-x155)/x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MIN;
	volatile int64_t x159 = -13022535065LL;
	uint64_t x160 = 18LLU;
	uint64_t t38 = 7507289219465756LLU;

	t38 = (((x157%x158)-x159)/x160);

	if (t38 != 723474170LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = -1;
	static int8_t x162 = 1;
	int16_t x163 = -1;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = 310;

	t39 = (((x161%x162)-x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = 46155916357737LL;
	int64_t x166 = INT64_MIN;
	int64_t t40 = -100036786541LL;

	t40 = (((x165%x166)-x167)/x168);

	if (t40 != -21493LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = 107287529472LL;
	volatile uint32_t x170 = 750271960U;
	int32_t x171 = INT32_MAX;
	uint8_t x172 = UINT8_MAX;
	int64_t t41 = 19435437611175743LL;

	t41 = (((x169%x170)-x171)/x172);

	if (t41 != -5484598LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MIN;
	uint8_t x175 = UINT8_MAX;
	volatile int64_t x176 = INT64_MIN;
	int64_t t42 = -308072139513635294LL;

	t42 = (((x173%x174)-x175)/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -952;
	int64_t x178 = -1LL;
	static volatile int16_t x179 = INT16_MIN;
	uint8_t x180 = UINT8_MAX;

	t43 = (((x177%x178)-x179)/x180);

	if (t43 != 128LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = -1;
	static int8_t x182 = -1;
	int16_t x183 = INT16_MAX;
	volatile int32_t x184 = INT32_MIN;
	volatile int32_t t44 = -285;

	t44 = (((x181%x182)-x183)/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	static volatile int32_t x186 = INT32_MIN;
	int16_t x188 = -1;
	int64_t t45 = -7LL;

	t45 = (((x185%x186)-x187)/x188);

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -1;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = 0LLU;
	int16_t x196 = -1;
	volatile uint64_t t46 = 14LLU;

	t46 = (((x193%x194)-x195)/x196);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	int32_t x200 = INT32_MAX;

	t47 = (((x197%x198)-x199)/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = 94182836;
	static volatile int64_t x202 = -14904510LL;
	uint8_t x203 = UINT8_MAX;
	uint16_t x204 = 7U;

	t48 = (((x201%x202)-x203)/x204);

	if (t48 != 679360LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MAX;

	t49 = (((x205%x206)-x207)/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 14U;
	int64_t x210 = INT64_MIN;
	static int32_t x211 = -1;
	int16_t x212 = INT16_MIN;

	t50 = (((x209%x210)-x211)/x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t t51 = 888695LLU;

	t51 = (((x213%x214)-x215)/x216);

	if (t51 != 658812288245755758LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MIN;
	static int32_t x218 = INT32_MIN;
	static int32_t x220 = INT32_MIN;
	static volatile int32_t t52 = 2297;

	t52 = (((x217%x218)-x219)/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x221 = 705046U;
	int32_t x223 = -55513799;
	volatile uint32_t t53 = 4423037U;

	t53 = (((x221%x222)-x223)/x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = 1284;
	volatile int16_t x227 = INT16_MIN;
	static volatile uint32_t t54 = 13927985U;

	t54 = (((x225%x226)-x227)/x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = -1;
	volatile int8_t x230 = INT8_MAX;
	volatile int64_t t55 = -24LL;

	t55 = (((x229%x230)-x231)/x232);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x233 = UINT32_MAX;
	int8_t x234 = 19;
	int8_t x236 = -25;

	t56 = (((x233%x234)-x235)/x236);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = 9608903497LL;

	t57 = (((x237%x238)-x239)/x240);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x241 = 10097LLU;
	int8_t x243 = 0;
	uint32_t x244 = 1823U;
	volatile uint64_t t58 = 68045LLU;

	t58 = (((x241%x242)-x243)/x244);

	if (t58 != 5LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = UINT16_MAX;
	uint32_t x246 = UINT32_MAX;
	uint16_t x247 = 6U;
	volatile uint32_t x248 = 966190100U;
	volatile uint32_t t59 = 8U;

	t59 = (((x245%x246)-x247)/x248);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int16_t x250 = 113;
	static int8_t x251 = INT8_MIN;
	int32_t x252 = 8011805;

	t60 = (((x249%x250)-x251)/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	uint16_t x254 = UINT16_MAX;
	volatile int32_t x255 = -10;
	static volatile uint32_t t61 = 0U;

	t61 = (((x253%x254)-x255)/x256);

	if (t61 != 66U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	volatile uint64_t x258 = UINT64_MAX;
	uint16_t x259 = 2600U;

	t62 = (((x257%x258)-x259)/x260);

	if (t62 != 341606371735361970LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x266 = UINT16_MAX;
	static int8_t x267 = INT8_MIN;
	uint8_t x268 = 10U;

	t63 = (((x265%x266)-x267)/x268);

	if (t63 != 38) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -1LL;
	volatile uint64_t x270 = UINT64_MAX;
	int32_t x272 = INT32_MIN;

	t64 = (((x269%x270)-x271)/x272);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 1388LLU;
	int16_t x274 = INT16_MIN;
	static int32_t x275 = 0;
	uint32_t x276 = UINT32_MAX;
	uint64_t t65 = 53258190LLU;

	t65 = (((x273%x274)-x275)/x276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = 0LL;
	int32_t x278 = -1;
	int64_t x279 = -3490368LL;
	volatile int64_t t66 = -2172LL;

	t66 = (((x277%x278)-x279)/x280);

	if (t66 != -106LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = UINT16_MAX;
	static uint8_t x287 = 1U;
	int16_t x288 = INT16_MIN;

	t67 = (((x285%x286)-x287)/x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MIN;
	volatile int16_t x290 = -30;
	int32_t x291 = INT32_MIN;
	volatile uint32_t t68 = 28181U;

	t68 = (((x289%x290)-x291)/x292);

	if (t68 != 1410961U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MAX;
	uint32_t x294 = 16309U;
	int8_t x295 = INT8_MIN;
	static volatile uint8_t x296 = 13U;

	t69 = (((x293%x294)-x295)/x296);

	if (t69 != 19U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x297 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MIN;
	static volatile uint32_t t70 = 2679802U;

	t70 = (((x297%x298)-x299)/x300);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = -5;
	static uint16_t x302 = 9U;
	uint64_t x303 = 6737955301LLU;
	volatile uint64_t t71 = 2551LLU;

	t71 = (((x301%x302)-x303)/x304);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x305 = INT64_MIN;
	volatile uint8_t x306 = 3U;
	int32_t x307 = INT32_MIN;
	uint64_t t72 = 27LLU;

	t72 = (((x305%x306)-x307)/x308);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x309 = INT8_MIN;
	uint32_t x310 = 28931152U;
	int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t73 = 7128460648236489LL;

	t73 = (((x309%x310)-x311)/x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x314 = 14U;
	volatile int32_t x315 = INT32_MIN;
	uint32_t t74 = 745U;

	t74 = (((x313%x314)-x315)/x316);

	if (t74 != 357913943U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x318 = -168514475;
	int64_t x319 = 150777649LL;
	int64_t x320 = -100798LL;
	int64_t t75 = -5148889LL;

	t75 = (((x317%x318)-x319)/x320);

	if (t75 != 1496LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 0U;
	static volatile int32_t x322 = -1;
	volatile int64_t x323 = -4390641282971010907LL;

	t76 = (((x321%x322)-x323)/x324);

	if (t76 != -133991738371918LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = -1;
	int32_t x330 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;
	static int32_t t77 = -55451754;

	t77 = (((x329%x330)-x331)/x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x334 = INT8_MAX;
	static int16_t x336 = INT16_MIN;

	t78 = (((x333%x334)-x335)/x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x338 = 1268353463496239LL;
	volatile int64_t t79 = -443LL;

	t79 = (((x337%x338)-x339)/x340);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = 473626272476996188LLU;
	int8_t x342 = INT8_MAX;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;

	t80 = (((x341%x342)-x343)/x344);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x345 = -1;
	int16_t x346 = INT16_MAX;
	static int32_t x347 = INT32_MIN;
	static int8_t x348 = INT8_MAX;
	int32_t t81 = 176891445;

	t81 = (((x345%x346)-x347)/x348);

	if (t81 != 16909320) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = -554333856594LL;
	static int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = -1LL;

	t82 = (((x349%x350)-x351)/x352);

	if (t82 != 337LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x353 = INT32_MAX;
	volatile int8_t x354 = -1;
	static int8_t x355 = INT8_MAX;
	volatile uint8_t x356 = UINT8_MAX;
	static int32_t t83 = 0;

	t83 = (((x353%x354)-x355)/x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = -44;
	int8_t x358 = -1;
	static int16_t x359 = INT16_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t84 = 22;

	t84 = (((x357%x358)-x359)/x360);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x361 = 82U;
	static int8_t x362 = 17;
	uint32_t x363 = 30489735U;
	int64_t x364 = INT64_MIN;
	static volatile int64_t t85 = -143LL;

	t85 = (((x361%x362)-x363)/x364);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x365 = INT16_MIN;
	static uint64_t x366 = 66LLU;
	int16_t x367 = -14;
	volatile uint32_t x368 = UINT32_MAX;
	volatile uint64_t t86 = 7118410735921439291LLU;

	t86 = (((x365%x366)-x367)/x368);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x369 = INT32_MIN;
	int64_t x370 = -190987528710578926LL;
	int64_t x371 = 14LL;
	int64_t t87 = -317030730LL;

	t87 = (((x369%x370)-x371)/x372);

	if (t87 != -536870915LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	uint32_t x375 = 1U;
	uint64_t x376 = 76774312862LLU;
	uint64_t t88 = 206436LLU;

	t88 = (((x373%x374)-x375)/x376);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x377 = 0U;
	int8_t x378 = INT8_MIN;
	volatile uint64_t x379 = 6LLU;
	uint8_t x380 = 113U;
	static uint64_t t89 = 13965729810920LLU;

	t89 = (((x377%x378)-x379)/x380);

	if (t89 != 163245522776190722LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 157U;
	static int64_t x382 = INT64_MIN;
	volatile int16_t x383 = -170;

	t90 = (((x381%x382)-x383)/x384);

	if (t90 != -327LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = -1LL;
	int32_t x388 = -1045534493;
	volatile int64_t t91 = -23LL;

	t91 = (((x385%x386)-x387)/x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = -1;
	volatile int64_t t92 = 26676934881828218LL;

	t92 = (((x393%x394)-x395)/x396);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = -1;
	int8_t x398 = INT8_MIN;
	volatile uint32_t x399 = UINT32_MAX;
	volatile int64_t x400 = -126578615LL;
	int64_t t93 = -12LL;

	t93 = (((x397%x398)-x399)/x400);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x402 = -1615;
	int16_t x403 = INT16_MIN;
	uint64_t t94 = 21651LLU;

	t94 = (((x401%x402)-x403)/x404);

	if (t94 != 34382LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x405 = 439302250131LLU;
	static int32_t x407 = -776412;

	t95 = (((x405%x406)-x407)/x408);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MIN;
	int32_t x410 = INT32_MIN;
	volatile int16_t x412 = INT16_MIN;
	int32_t t96 = -15341936;

	t96 = (((x409%x410)-x411)/x412);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x413 = UINT8_MAX;
	uint16_t x414 = 15773U;
	volatile int32_t x416 = INT32_MAX;
	int32_t t97 = 471074003;

	t97 = (((x413%x414)-x415)/x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x417 = UINT16_MAX;
	volatile uint32_t t98 = 24460U;

	t98 = (((x417%x418)-x419)/x420);

	if (t98 != 3503661985U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = 268450309942LLU;
	int16_t x422 = -4995;
	volatile int8_t x423 = 1;
	uint64_t t99 = 2LLU;

	t99 = (((x421%x422)-x423)/x424);

	if (t99 != 53690061988LLU) { NG(); } else { ; }
	
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

