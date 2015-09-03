#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 158148933LLU;
static int32_t x10 = 221974432;
static volatile int32_t x13 = -3;
volatile int64_t x32 = INT64_MIN;
int64_t t6 = 2LL;
int32_t x36 = -1;
volatile uint64_t x45 = UINT64_MAX;
volatile int64_t x47 = -1LL;
static uint32_t x49 = 760006926U;
int64_t t10 = 873700460LL;
int32_t x53 = 65579;
int32_t x55 = INT32_MIN;
static int8_t x63 = INT8_MIN;
volatile int64_t t13 = -1006353380LL;
int64_t x69 = 212401738555279692LL;
int32_t x72 = INT32_MIN;
uint16_t x74 = 7U;
volatile int8_t x77 = INT8_MIN;
int16_t x80 = INT16_MIN;
volatile uint64_t t18 = 28LLU;
static uint16_t x85 = 1U;
int16_t x87 = 1953;
int32_t t21 = -425419;
int64_t x112 = INT64_MAX;
uint32_t x115 = 194485614U;
volatile uint32_t t25 = 228007U;
static volatile int8_t x119 = INT8_MIN;
uint32_t x121 = 2548U;
int16_t x122 = INT16_MIN;
uint64_t x129 = UINT64_MAX;
static volatile uint16_t x136 = UINT16_MAX;
static volatile uint64_t t30 = 2557LLU;
int64_t x138 = INT64_MIN;
uint32_t x141 = UINT32_MAX;
uint8_t x144 = UINT8_MAX;
int8_t x148 = INT8_MIN;
uint32_t x150 = 28U;
uint32_t x154 = UINT32_MAX;
volatile int64_t x163 = INT64_MIN;
int64_t t37 = 1038051327815646LL;
volatile int8_t x177 = 25;
static volatile int64_t x187 = INT64_MIN;
volatile int64_t t45 = 23549726LL;
uint64_t x207 = 3381LLU;
static volatile int16_t x209 = INT16_MAX;
volatile uint32_t x216 = UINT32_MAX;
static uint32_t t48 = 30U;
int64_t x220 = 123LL;
int64_t t49 = 2259475744LL;
int16_t x228 = INT16_MAX;
uint32_t t53 = 17U;
int64_t x253 = INT64_MAX;
int16_t x254 = 0;
static int32_t x255 = INT32_MAX;
volatile uint8_t x256 = UINT8_MAX;
uint32_t x271 = 1146174U;
uint64_t x284 = 489755LLU;
uint32_t x285 = 392904181U;
uint8_t x289 = 2U;
volatile int8_t x302 = INT8_MIN;
int32_t x304 = INT32_MAX;
uint16_t x308 = 2505U;
static volatile int64_t t66 = -2279719LL;
int64_t x310 = INT64_MIN;
int32_t x315 = INT32_MIN;
int64_t t68 = 74829780247549551LL;
uint32_t x317 = UINT32_MAX;
int8_t x318 = -1;
int8_t x321 = 7;
uint16_t x324 = 535U;
static uint64_t t71 = 6410110526643199438LLU;
volatile uint8_t x336 = UINT8_MAX;
uint32_t x337 = 6U;
static int64_t t74 = 218LL;
static int8_t x342 = INT8_MAX;
static int32_t x344 = -1;
int32_t x345 = 2800;
volatile int16_t x348 = INT16_MIN;
uint8_t x359 = 1U;
int64_t x360 = -4904531LL;
int64_t t78 = 0LL;
volatile int8_t x361 = INT8_MIN;
uint16_t x368 = 1011U;
int64_t t80 = 4921063LL;
int8_t x372 = -38;
int8_t x378 = INT8_MAX;
static int32_t x379 = INT32_MAX;
int16_t x385 = 186;
int32_t x387 = INT32_MAX;
volatile uint64_t t85 = 2194LLU;
int8_t x399 = -1;
uint16_t x400 = UINT16_MAX;
int8_t x401 = INT8_MIN;
int16_t x403 = 1415;
uint64_t x404 = UINT64_MAX;
int8_t x438 = INT8_MAX;
uint8_t x448 = 1U;
volatile int8_t x450 = INT8_MAX;
static volatile int8_t x452 = -1;
uint8_t x464 = UINT8_MAX;
static volatile int32_t t98 = -3;
int64_t x466 = INT64_MIN;
int16_t x467 = -1;


void f0(void) {
	int64_t x5 = 70373700189LL;
	uint64_t x6 = 16494573202LLU;
	int64_t x7 = -1LL;
	int8_t x8 = 14;

	t0 = (((x5+x6)|x7)/x8);

	if (t0 != 1317624576693539401LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = -1;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -1;
	volatile int32_t t1 = 63650890;

	t1 = (((x9+x10)|x11)/x12);

	if (t1 != 28769) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = 12U;
	int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t2 = -724998;

	t2 = (((x13+x14)|x15)/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MIN;
	static int32_t x19 = -1;
	static int16_t x20 = INT16_MAX;
	volatile int32_t t3 = 140971;

	t3 = (((x17+x18)|x19)/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1180;
	int8_t x22 = 9;
	volatile uint8_t x23 = 27U;
	static uint8_t x24 = 1U;
	int32_t t4 = 3767862;

	t4 = (((x21+x22)|x23)/x24);

	if (t4 != -1153) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	int32_t x26 = -14595642;
	int8_t x27 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t5 = -1038505518093LL;

	t5 = (((x25+x26)|x27)/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = 4668412262LL;
	static volatile int32_t x30 = INT32_MIN;
	int16_t x31 = 103;

	t6 = (((x29+x30)|x31)/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = -1;
	volatile int32_t x34 = -1;
	static int64_t x35 = INT64_MIN;
	int64_t t7 = -1776409LL;

	t7 = (((x33+x34)|x35)/x36);

	if (t7 != 2LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = INT16_MIN;
	volatile uint16_t x42 = 5241U;
	int32_t x43 = INT32_MIN;
	uint8_t x44 = 20U;
	volatile int32_t t8 = 3078;

	t8 = (((x41+x42)|x43)/x44);

	if (t8 != -1376) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x46 = 1235603U;
	volatile uint8_t x48 = UINT8_MAX;
	uint64_t t9 = 1LLU;

	t9 = (((x45+x46)|x47)/x48);

	if (t9 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x50 = -1;
	volatile int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MIN;

	t10 = (((x49+x50)|x51)/x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = -1LL;
	uint16_t x56 = 20825U;
	int64_t t11 = -431435035916LL;

	t11 = (((x53+x54)|x55)/x56);

	if (t11 != -103117LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = 40275866340LLU;
	int32_t x58 = INT32_MAX;
	uint64_t x59 = 269459739842326LLU;
	int64_t x60 = INT64_MAX;
	volatile uint64_t t12 = 18804405433LLU;

	t12 = (((x57+x58)|x59)/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = -1;
	static int64_t x62 = -648LL;
	volatile uint32_t x64 = UINT32_MAX;

	t13 = (((x61+x62)|x63)/x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 67636U;
	int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MAX;
	uint8_t x68 = UINT8_MAX;
	int64_t t14 = 10LL;

	t14 = (((x65+x66)|x67)/x68);

	if (t14 != -36170086419037951LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x70 = 0U;
	int64_t x71 = -1LL;
	int64_t t15 = 626246575984453LL;

	t15 = (((x69+x70)|x71)/x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 17513319;
	int8_t x75 = 33;
	int32_t x76 = INT32_MIN;
	volatile int32_t t16 = -166;

	t16 = (((x73+x74)|x75)/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = INT16_MAX;
	uint8_t x79 = 9U;
	int32_t t17 = 60122;

	t17 = (((x77+x78)|x79)/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	static volatile uint64_t x82 = UINT64_MAX;
	int32_t x83 = -1;
	static uint32_t x84 = 1165659378U;

	t18 = (((x81+x82)|x83)/x84);

	if (t18 != 15825158208LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x86 = 15U;
	uint8_t x88 = 3U;
	static volatile int32_t t19 = -980;

	t19 = (((x85+x86)|x87)/x88);

	if (t19 != 656) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 484;
	int8_t x90 = INT8_MAX;
	int32_t x91 = -1;
	uint16_t x92 = 145U;
	int32_t t20 = 7138856;

	t20 = (((x89+x90)|x91)/x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = 11;
	uint16_t x95 = UINT16_MAX;
	uint16_t x96 = UINT16_MAX;

	t21 = (((x93+x94)|x95)/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	volatile uint32_t x98 = UINT32_MAX;
	uint8_t x99 = 0U;
	volatile int8_t x100 = INT8_MIN;
	volatile uint32_t t22 = 13259414U;

	t22 = (((x97+x98)|x99)/x100);

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = UINT8_MAX;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = -220;
	int8_t x104 = -1;
	int32_t t23 = -73823;

	t23 = (((x101+x102)|x103)/x104);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	static int16_t x110 = -1;
	uint32_t x111 = UINT32_MAX;
	int64_t t24 = 70885LL;

	t24 = (((x109+x110)|x111)/x112);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -145;
	static uint32_t x114 = 7U;
	volatile int8_t x116 = 22;

	t25 = (((x113+x114)|x115)/x116);

	if (t25 != 195225780U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	int32_t x118 = INT32_MAX;
	volatile uint8_t x120 = 80U;
	volatile int32_t t26 = -9995106;

	t26 = (((x117+x118)|x119)/x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x123 = -2805;
	int16_t x124 = -1;
	uint32_t t27 = 14445U;

	t27 = (((x121+x122)|x123)/x124);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = UINT32_MAX;
	int16_t x126 = 184;
	static uint64_t x127 = 10281949LLU;
	int64_t x128 = 1464489LL;
	uint64_t t28 = 845406LLU;

	t28 = (((x125+x126)|x127)/x128);

	if (t28 != 7LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x130 = 0U;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = -1;
	uint64_t t29 = 0LLU;

	t29 = (((x129+x130)|x131)/x132);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x134 = 103U;
	uint64_t x135 = 917149LLU;

	t30 = (((x133+x134)|x135)/x136);

	if (t30 != 281479271710734LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x137 = 242507862790LLU;
	int64_t x139 = INT64_MIN;
	uint64_t x140 = UINT64_MAX;
	static uint64_t t31 = 87LLU;

	t31 = (((x137+x138)|x139)/x140);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x142 = INT8_MIN;
	volatile uint16_t x143 = UINT16_MAX;
	volatile uint32_t t32 = 669794U;

	t32 = (((x141+x142)|x143)/x144);

	if (t32 != 16843009U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MAX;
	int64_t x146 = INT64_MIN;
	uint16_t x147 = 184U;
	volatile int64_t t33 = -19732LL;

	t33 = (((x145+x146)|x147)/x148);

	if (t33 != 72057594037927934LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x149 = UINT8_MAX;
	uint16_t x151 = 0U;
	volatile int8_t x152 = INT8_MIN;
	uint32_t t34 = 65483023U;

	t34 = (((x149+x150)|x151)/x152);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -220;
	int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MIN;
	uint32_t t35 = 154103893U;

	t35 = (((x153+x154)|x155)/x156);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x157 = 13674;
	uint32_t x158 = 72047706U;
	uint64_t x159 = 0LLU;
	uint8_t x160 = 20U;
	uint64_t t36 = 1045694LLU;

	t36 = (((x157+x158)|x159)/x160);

	if (t36 != 3603069LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x161 = 219201336;
	int64_t x162 = -1LL;
	int64_t x164 = INT64_MIN;

	t37 = (((x161+x162)|x163)/x164);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -1;
	int32_t x170 = -30;
	volatile uint8_t x171 = 17U;
	int16_t x172 = -7;
	int32_t t38 = 60221;

	t38 = (((x169+x170)|x171)/x172);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x173 = 13611507U;
	static int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MAX;
	static uint16_t x176 = 15U;
	volatile int64_t t39 = 10LL;

	t39 = (((x173+x174)|x175)/x176);

	if (t39 != 614891469123651720LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x178 = -13361;
	uint8_t x179 = 1U;
	uint64_t x180 = 925600966136107690LLU;
	uint64_t t40 = 4126571033LLU;

	t40 = (((x177+x178)|x179)/x180);

	if (t40 != 19LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = UINT8_MAX;
	static uint16_t x182 = UINT16_MAX;
	int64_t x183 = -12022LL;
	static int64_t x184 = -44895861550042LL;
	int64_t t41 = 30304014LL;

	t41 = (((x181+x182)|x183)/x184);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -1;
	uint32_t x186 = 2679U;
	uint64_t x188 = 2784798275714409495LLU;
	uint64_t t42 = 1705481490745898LLU;

	t42 = (((x185+x186)|x187)/x188);

	if (t42 != 3LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 350U;
	int64_t x194 = INT64_MIN;
	uint16_t x195 = 180U;
	int64_t x196 = INT64_MAX;
	int64_t t43 = -46824LL;

	t43 = (((x193+x194)|x195)/x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	int64_t x199 = -1LL;
	int32_t x200 = 6966;
	volatile int64_t t44 = 15633913062710685LL;

	t44 = (((x197+x198)|x199)/x200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x201 = INT16_MIN;
	int64_t x202 = -1LL;
	int8_t x203 = -1;
	int64_t x204 = -1LL;

	t45 = (((x201+x202)|x203)/x204);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	static int64_t x206 = 13240739849LL;
	uint64_t x208 = UINT64_MAX;
	uint64_t t46 = 22290452966LLU;

	t46 = (((x205+x206)|x207)/x208);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x210 = 7840LLU;
	int8_t x211 = INT8_MIN;
	static uint64_t x212 = 5378721LLU;
	volatile uint64_t t47 = 17134162484937450LLU;

	t47 = (((x209+x210)|x211)/x212);

	if (t47 != 3429578160627LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MIN;
	uint32_t x214 = UINT32_MAX;
	volatile int8_t x215 = -2;

	t48 = (((x213+x214)|x215)/x216);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -1;
	volatile int32_t x218 = INT32_MAX;
	static uint8_t x219 = UINT8_MAX;

	t49 = (((x217+x218)|x219)/x220);

	if (t49 != 17459216LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MIN;
	uint8_t x222 = 0U;
	static uint32_t x223 = UINT32_MAX;
	int16_t x224 = 1603;
	static uint32_t t50 = 28U;

	t50 = (((x221+x222)|x223)/x224);

	if (t50 != 2679330U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = 126186LL;
	uint32_t x226 = UINT32_MAX;
	uint16_t x227 = 245U;
	int64_t t51 = -599413262000LL;

	t51 = (((x225+x226)|x227)/x228);

	if (t51 != 131079LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MIN;
	volatile int64_t x230 = 98763396616LL;
	int8_t x231 = INT8_MIN;
	int16_t x232 = -10211;
	volatile int64_t t52 = 651644207938412LL;

	t52 = (((x229+x230)|x231)/x232);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = UINT32_MAX;
	static int32_t x238 = INT32_MIN;
	int32_t x239 = -355802;
	static int32_t x240 = -10052;

	t53 = (((x237+x238)|x239)/x240);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = -1;
	uint64_t x242 = 1053178LLU;
	int16_t x243 = -10;
	volatile uint16_t x244 = 983U;
	static volatile uint64_t t54 = 14442608582184938LLU;

	t54 = (((x241+x242)|x243)/x244);

	if (t54 != 18765762028188760LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 65876U;
	int16_t x246 = 13758;
	int32_t x247 = -30;
	static int64_t x248 = INT64_MIN;
	int64_t t55 = 27905LL;

	t55 = (((x245+x246)|x247)/x248);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t t56 = 3325905151630372LL;

	t56 = (((x253+x254)|x255)/x256);

	if (t56 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x257 = -166;
	int32_t x258 = 448748;
	int16_t x259 = -1;
	int8_t x260 = -1;
	int32_t t57 = -3240423;

	t57 = (((x257+x258)|x259)/x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x261 = INT8_MIN;
	uint16_t x262 = UINT16_MAX;
	static int32_t x263 = -1;
	uint8_t x264 = 4U;
	int32_t t58 = -7948792;

	t58 = (((x261+x262)|x263)/x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	uint16_t x272 = 1722U;
	uint64_t t59 = 32LLU;

	t59 = (((x269+x270)|x271)/x272);

	if (t59 != 10712394931220713LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x277 = INT64_MIN;
	uint8_t x278 = 17U;
	volatile int32_t x279 = -31445;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t60 = -294095LL;

	t60 = (((x277+x278)|x279)/x280);

	if (t60 != -123LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = 2006;
	int16_t x282 = -1;
	int32_t x283 = -1;
	uint64_t t61 = 14041LLU;

	t61 = (((x281+x282)|x283)/x284);

	if (t61 != 37665249101509LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x286 = INT32_MAX;
	volatile int8_t x287 = -48;
	int64_t x288 = -507625731859212LL;
	int64_t t62 = 38839847610LL;

	t62 = (((x285+x286)|x287)/x288);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x290 = -1;
	uint16_t x291 = 5954U;
	int64_t x292 = INT64_MIN;
	volatile int64_t t63 = -58937LL;

	t63 = (((x289+x290)|x291)/x292);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = 55947;
	int16_t x294 = -10764;
	uint64_t x295 = 1213201LLU;
	volatile int8_t x296 = -5;
	volatile uint64_t t64 = 4LLU;

	t64 = (((x293+x294)|x295)/x296);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = 0;
	static int16_t x303 = INT16_MIN;
	int32_t t65 = -1;

	t65 = (((x301+x302)|x303)/x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x305 = -3602LL;
	volatile uint16_t x306 = 7U;
	int16_t x307 = -1;

	t66 = (((x305+x306)|x307)/x308);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x309 = 495LL;
	static volatile int32_t x311 = INT32_MIN;
	static uint8_t x312 = 1U;
	int64_t t67 = -26736961018131466LL;

	t67 = (((x309+x310)|x311)/x312);

	if (t67 != -2147483153LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MAX;
	volatile int64_t x314 = -1LL;
	static int8_t x316 = INT8_MIN;

	t68 = (((x313+x314)|x315)/x316);

	if (t68 != 16776960LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x319 = -1LL;
	int8_t x320 = -1;
	volatile int64_t t69 = -1902284544480LL;

	t69 = (((x317+x318)|x319)/x320);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x322 = -1;
	uint8_t x323 = 23U;
	static int32_t t70 = 182;

	t70 = (((x321+x322)|x323)/x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x325 = UINT64_MAX;
	static int8_t x326 = -1;
	volatile int16_t x327 = -7;
	int32_t x328 = -1;

	t71 = (((x325+x326)|x327)/x328);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = 1100324823U;
	static int16_t x330 = 435;
	volatile uint16_t x331 = 50U;
	volatile int32_t x332 = INT32_MIN;
	uint32_t t72 = 4U;

	t72 = (((x329+x330)|x331)/x332);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x333 = 139871321U;
	int16_t x334 = -35;
	uint16_t x335 = UINT16_MAX;
	volatile uint32_t t73 = 58610175U;

	t73 = (((x333+x334)|x335)/x336);

	if (t73 != 548703U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x338 = -1LL;
	int32_t x339 = 244;
	uint32_t x340 = 96492U;

	t74 = (((x337+x338)|x339)/x340);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = -1LL;
	static int16_t x343 = INT16_MAX;
	volatile int64_t t75 = -332412836439054LL;

	t75 = (((x341+x342)|x343)/x344);

	if (t75 != -32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x346 = INT16_MAX;
	int16_t x347 = 1;
	static int32_t t76 = -14073;

	t76 = (((x345+x346)|x347)/x348);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = -2;
	int32_t x354 = -1;
	int32_t x355 = -396956909;
	int32_t x356 = INT32_MIN;
	volatile int32_t t77 = 26786;

	t77 = (((x353+x354)|x355)/x356);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x357 = INT8_MAX;
	uint8_t x358 = 2U;

	t78 = (((x357+x358)|x359)/x360);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x362 = 2U;
	int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MIN;
	volatile uint32_t t79 = 380U;

	t79 = (((x361+x362)|x363)/x364);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x365 = -305873;
	static int16_t x366 = -1;
	volatile int64_t x367 = INT64_MIN;

	t80 = (((x365+x366)|x367)/x368);

	if (t80 != -302LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x369 = 12;
	int8_t x370 = 54;
	static volatile uint16_t x371 = 2748U;
	int32_t t81 = -33929;

	t81 = (((x369+x370)|x371)/x372);

	if (t81 != -74) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = UINT64_MAX;
	int8_t x380 = -24;
	uint64_t t82 = 472227169522LLU;

	t82 = (((x377+x378)|x379)/x380);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x381 = 184U;
	static int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MAX;
	static int16_t x384 = INT16_MIN;
	int32_t t83 = -1290651;

	t83 = (((x381+x382)|x383)/x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x386 = -1;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t84 = 3806126068378284125LLU;

	t84 = (((x385+x386)|x387)/x388);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = UINT64_MAX;
	uint16_t x390 = 1409U;
	uint64_t x391 = UINT64_MAX;
	uint32_t x392 = 80078U;

	t85 = (((x389+x390)|x391)/x392);

	if (t85 != 230359700213661LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x397 = INT16_MIN;
	uint64_t x398 = 102517862680LLU;
	uint64_t t86 = 134018LLU;

	t86 = (((x397+x398)|x399)/x400);

	if (t86 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x402 = 471982877;
	static volatile uint64_t t87 = 1LLU;

	t87 = (((x401+x402)|x403)/x404);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = 0U;
	uint32_t x410 = 100498U;
	int8_t x411 = -1;
	int32_t x412 = -65067815;
	uint32_t t88 = 41U;

	t88 = (((x409+x410)|x411)/x412);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x413 = 3929LL;
	int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MIN;
	uint64_t x416 = 12276377LLU;
	uint64_t t89 = 920LLU;

	t89 = (((x413+x414)|x415)/x416);

	if (t89 != 1502621178358LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = INT8_MIN;
	uint64_t x422 = 3LLU;
	int8_t x423 = INT8_MIN;
	uint32_t x424 = 56209U;
	volatile uint64_t t90 = 8447616704924LLU;

	t90 = (((x421+x422)|x423)/x424);

	if (t90 != 328181324586979LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x433 = INT32_MIN;
	uint8_t x434 = UINT8_MAX;
	static volatile int32_t x435 = -1;
	uint32_t x436 = 3074916U;
	volatile uint32_t t91 = 115U;

	t91 = (((x433+x434)|x435)/x436);

	if (t91 != 1396U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x437 = -1LL;
	int64_t x439 = 125024482576LL;
	int8_t x440 = -1;
	volatile int64_t t92 = 1012791439LL;

	t92 = (((x437+x438)|x439)/x440);

	if (t92 != -125024482686LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x441 = 254688448U;
	uint32_t x442 = 23692055U;
	int32_t x443 = INT32_MIN;
	static int32_t x444 = -1;
	static uint32_t t93 = 696U;

	t93 = (((x441+x442)|x443)/x444);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x445 = UINT32_MAX;
	static uint8_t x446 = UINT8_MAX;
	int64_t x447 = INT64_MIN;
	static int64_t t94 = 1LL;

	t94 = (((x445+x446)|x447)/x448);

	if (t94 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x449 = -40;
	static int32_t x451 = INT32_MIN;
	int32_t t95 = 50915181;

	t95 = (((x449+x450)|x451)/x452);

	if (t95 != 2147483561) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x453 = 1U;
	int8_t x454 = 0;
	int8_t x455 = -1;
	volatile int8_t x456 = -12;
	int32_t t96 = -54606113;

	t96 = (((x453+x454)|x455)/x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x457 = -46;
	int8_t x458 = 22;
	uint32_t x459 = 40251U;
	int32_t x460 = -324706359;
	uint32_t t97 = 1515792970U;

	t97 = (((x457+x458)|x459)/x460);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x461 = UINT16_MAX;
	int8_t x462 = 22;
	static volatile int32_t x463 = INT32_MIN;

	t98 = (((x461+x462)|x463)/x464);

	if (t98 != -8421247) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x465 = INT64_MAX;
	volatile int32_t x468 = INT32_MIN;
	static int64_t t99 = 3284LL;

	t99 = (((x465+x466)|x467)/x468);

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

