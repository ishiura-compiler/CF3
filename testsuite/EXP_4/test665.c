#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 22U;
uint64_t x3 = 111LLU;
uint16_t x10 = 381U;
int32_t x12 = INT32_MIN;
int32_t x22 = 104091;
uint16_t x27 = 144U;
int16_t x31 = -1;
volatile uint32_t t6 = 769U;
int32_t x37 = INT32_MIN;
int16_t x42 = -1;
static volatile uint8_t x44 = UINT8_MAX;
static int16_t x45 = 99;
uint64_t t11 = 2578502319406132836LLU;
volatile uint16_t x66 = 6348U;
int16_t x70 = INT16_MAX;
int16_t x83 = -1;
static int64_t t18 = 375977833623561736LL;
uint32_t x89 = UINT32_MAX;
uint32_t x103 = 520604U;
uint16_t x107 = 28303U;
uint8_t x111 = 2U;
volatile int8_t x113 = INT8_MAX;
uint8_t x114 = 15U;
volatile uint8_t x115 = 0U;
int8_t x116 = 1;
int16_t x125 = INT16_MIN;
int32_t t27 = 92263;
int64_t x131 = INT64_MIN;
int8_t x135 = 4;
volatile uint64_t t29 = 3885464215948LLU;
static int32_t x137 = INT32_MIN;
volatile int8_t x140 = -35;
static int8_t x155 = -9;
static int32_t x157 = -1;
volatile uint32_t x159 = 226136263U;
int64_t x164 = INT64_MAX;
int16_t x165 = -577;
uint16_t x167 = 76U;
int8_t x169 = INT8_MIN;
volatile uint64_t x176 = 177LLU;
volatile int32_t x179 = -23249989;
volatile int16_t x180 = 489;
int32_t x183 = INT32_MAX;
volatile uint64_t t40 = 22674346628507LLU;
uint16_t x186 = UINT16_MAX;
uint64_t t43 = 2412797144LLU;
uint64_t x198 = UINT64_MAX;
volatile uint8_t x203 = UINT8_MAX;
static volatile int16_t x211 = INT16_MIN;
int16_t x212 = -342;
int64_t x213 = -79009LL;
int32_t x214 = 4333;
uint16_t x215 = UINT16_MAX;
static int64_t t48 = 26LL;
int16_t x218 = 154;
int32_t x219 = -3381;
volatile int32_t t49 = 1173168;
volatile int32_t x223 = -6522496;
volatile int64_t t52 = -48362049079282LL;
int64_t t53 = 610957771LL;
int32_t x249 = INT32_MIN;
static uint64_t x252 = 1346377LLU;
static int16_t x253 = INT16_MIN;
static int8_t x254 = INT8_MIN;
int64_t x255 = 1314610984997LL;
static int32_t x256 = INT32_MIN;
int64_t t57 = 11062LL;
uint16_t x257 = UINT16_MAX;
uint32_t x262 = UINT32_MAX;
static int16_t x265 = INT16_MIN;
int16_t x268 = -11067;
int32_t x274 = INT32_MAX;
static volatile int32_t x276 = 3243;
volatile int64_t t63 = 3883539188LL;
uint64_t t71 = 31429874115660673LLU;
int16_t x321 = -1;
int64_t x328 = 55835899490330LL;
volatile uint32_t x329 = UINT32_MAX;
volatile int64_t x330 = -1LL;
static volatile int16_t x331 = -68;
int64_t x338 = -50050LL;
static uint32_t x339 = UINT32_MAX;
static uint32_t x353 = 61U;
int32_t x355 = INT32_MIN;
uint8_t x356 = 97U;
int16_t x361 = -984;
int32_t x363 = INT32_MIN;
int8_t x372 = -1;
volatile uint64_t t83 = 56725498036982LLU;
volatile int8_t x382 = -1;
volatile int8_t x385 = INT8_MIN;
static volatile int32_t x390 = -260748117;
static int16_t x391 = 0;
static uint32_t x392 = 1377U;
int64_t t89 = -79563314480LL;
static uint8_t x404 = 124U;
int32_t t91 = 1;
static int64_t x418 = -1LL;
static int32_t x428 = INT32_MIN;
uint8_t x432 = 1U;
int64_t t95 = -889873681LL;
uint8_t x433 = 0U;
volatile uint64_t x439 = 6328654012529LLU;
int64_t t98 = 18LL;
static uint64_t x446 = 1435LLU;
uint64_t t99 = 837862916065912LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 58LLU;

	t0 = (x1-(x2^(x3/x4)));

	if (t0 != 18446744073709551466LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 158520766862LLU;
	volatile int64_t x11 = INT64_MIN;
	uint64_t t1 = 50983666LLU;

	t1 = (x9-(x10^(x11/x12)));

	if (t1 != 154225799185LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -117720173;
	int16_t x14 = INT16_MIN;
	static int32_t x15 = -1;
	int32_t x16 = INT32_MIN;
	int32_t t2 = -181;

	t2 = (x13-(x14^(x15/x16)));

	if (t2 != -117687405) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = 2;
	volatile int8_t x20 = -8;
	volatile int32_t t3 = -1739829;

	t3 = (x17-(x18^(x19/x20)));

	if (t3 != -98303) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = 0U;
	volatile int8_t x23 = -2;
	static uint8_t x24 = UINT8_MAX;
	int32_t t4 = -3;

	t4 = (x21-(x22^(x23/x24)));

	if (t4 != -104091) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static int8_t x26 = 3;
	uint32_t x28 = 16U;
	volatile uint32_t t5 = 347U;

	t5 = (x25-(x26^(x27/x28)));

	if (t5 != 4294967158U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MAX;
	volatile uint32_t x30 = 1806U;
	uint32_t x32 = 1865455U;

	t6 = (x29-(x30^(x31/x32)));

	if (t6 != 28687U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 0U;
	int16_t x34 = -1;
	volatile int16_t x35 = 0;
	static uint32_t x36 = 12434771U;
	uint32_t t7 = 21541U;

	t7 = (x33-(x34^(x35/x36)));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x38 = 3;
	int16_t x39 = INT16_MIN;
	uint8_t x40 = 1U;
	int32_t t8 = 400;

	t8 = (x37-(x38^(x39/x40)));

	if (t8 != -2147450883) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MIN;
	uint64_t x43 = 6744455388LLU;
	volatile uint64_t t9 = 292321812028LLU;

	t9 = (x41-(x42^(x43/x44)));

	if (t9 != 18446744071588516813LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = INT64_MAX;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	int64_t t10 = 10629669813690339LL;

	t10 = (x45-(x46^(x47/x48)));

	if (t10 != -9223372036854775708LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	static uint64_t x50 = UINT64_MAX;
	uint64_t x51 = 821996543LLU;
	static uint8_t x52 = 13U;

	t11 = (x49-(x50^(x51/x52)));

	if (t11 != 63230503LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = -1;
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = 675242361;
	static volatile uint64_t t12 = 17700LLU;

	t12 = (x61-(x62^(x63/x64)));

	if (t12 != 27318766404LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = INT32_MAX;
	static int8_t x67 = 3;
	static int64_t x68 = INT64_MIN;
	static volatile int64_t t13 = 2043464530LL;

	t13 = (x65-(x66^(x67/x68)));

	if (t13 != 2147477299LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MIN;
	int16_t x71 = INT16_MAX;
	static int16_t x72 = -89;
	volatile int32_t t14 = -3925;

	t14 = (x69-(x70^(x71/x72)));

	if (t14 != 32273) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x73 = 171111090U;
	int64_t x74 = -1LL;
	int64_t x75 = -1LL;
	int32_t x76 = -1;
	int64_t t15 = -59827751948LL;

	t15 = (x73-(x74^(x75/x76)));

	if (t15 != 171111092LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x77 = INT64_MIN;
	uint16_t x78 = 123U;
	volatile int32_t x79 = INT32_MIN;
	int32_t x80 = 12;
	volatile int64_t t16 = 90728166416181LL;

	t16 = (x77-(x78^(x79/x80)));

	if (t16 != -9223372036675818797LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 193U;
	uint64_t x82 = 2022717623118007160LLU;
	volatile int64_t x84 = INT64_MAX;
	uint64_t t17 = 2762794276379LLU;

	t17 = (x81-(x82^(x83/x84)));

	if (t17 != 16424026450591544649LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = 23;
	int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	volatile uint32_t x88 = 5U;

	t18 = (x85-(x86^(x87/x88)));

	if (t18 != -1844674407370955216LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x90 = -39725724LL;
	int32_t x91 = INT32_MIN;
	static uint32_t x92 = UINT32_MAX;
	int64_t t19 = -76513781486275LL;

	t19 = (x89-(x90^(x91/x92)));

	if (t19 != 4334693019LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 11U;
	uint64_t x94 = 1665556337LLU;
	volatile uint8_t x95 = 1U;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t20 = 310576119594319LLU;

	t20 = (x93-(x94^(x95/x96)));

	if (t20 != 18446744072043995290LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = 276057520566LL;
	static int32_t x102 = INT32_MIN;
	static int32_t x104 = INT32_MIN;
	volatile int64_t t21 = 39838783840LL;

	t21 = (x101-(x102^(x103/x104)));

	if (t21 != 273910036918LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x105 = 4U;
	volatile uint64_t x106 = 75384846513484LLU;
	volatile uint32_t x108 = 5854U;
	uint64_t t22 = 250443589670475039LLU;

	t22 = (x105-(x106^(x107/x108)));

	if (t22 != 18446668688863038140LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = -1;
	int8_t x110 = 0;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t23 = 851755202;

	t23 = (x109-(x110^(x111/x112)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t t24 = 1;

	t24 = (x113-(x114^(x115/x116)));

	if (t24 != 112) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MAX;
	uint32_t x118 = 31532U;
	uint16_t x119 = 1U;
	uint8_t x120 = 9U;
	int64_t t25 = -783LL;

	t25 = (x117-(x118^(x119/x120)));

	if (t25 != 9223372036854744275LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = 7LLU;
	uint32_t x123 = 2005078831U;
	int8_t x124 = INT8_MIN;
	uint64_t t26 = 24612769LLU;

	t26 = (x121-(x122^(x123/x124)));

	if (t26 != 18446744073709518841LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x126 = 4U;
	int32_t x127 = 133624;
	uint8_t x128 = 1U;

	t27 = (x125-(x126^(x127/x128)));

	if (t27 != -166396) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x129 = 85741U;
	volatile int8_t x130 = INT8_MIN;
	int8_t x132 = 63;
	int64_t t28 = -9LL;

	t28 = (x129-(x130^(x131/x132)));

	if (t28 != -146402730743640971LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = INT64_MIN;
	uint64_t x134 = 977858438402LLU;
	volatile int64_t x136 = INT64_MAX;

	t29 = (x133-(x134^(x135/x136)));

	if (t29 != 9223371058996337406LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = INT16_MIN;
	static uint16_t x139 = 11U;
	int32_t t30 = 193174;

	t30 = (x137-(x138^(x139/x140)));

	if (t30 != -2147450880) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = -31;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t31 = -2095871;

	t31 = (x141-(x142^(x143/x144)));

	if (t31 != 32736) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MAX;
	int32_t x146 = 74238;
	static int64_t x147 = INT64_MAX;
	int16_t x148 = INT16_MIN;
	int64_t t32 = -1LL;

	t32 = (x145-(x146^(x147/x148)));

	if (t32 != 281474976636544LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -1;
	volatile uint16_t x154 = 13U;
	int8_t x156 = INT8_MAX;
	int32_t t33 = 0;

	t33 = (x153-(x154^(x155/x156)));

	if (t33 != -14) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x158 = -1;
	int8_t x160 = -1;
	uint32_t t34 = 299U;

	t34 = (x157-(x158^(x159/x160)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	uint32_t x163 = UINT32_MAX;
	static int64_t t35 = 190875622810998LL;

	t35 = (x161-(x162^(x163/x164)));

	if (t35 != -2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x166 = UINT64_MAX;
	static uint16_t x168 = 5439U;
	volatile uint64_t t36 = 483386606791834LLU;

	t36 = (x165-(x166^(x167/x168)));

	if (t36 != 18446744073709551040LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x170 = INT32_MIN;
	uint8_t x171 = 36U;
	static volatile uint32_t x172 = 382U;
	uint32_t t37 = 415346U;

	t37 = (x169-(x170^(x171/x172)));

	if (t37 != 2147483520U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 30U;
	static int16_t x174 = -1;
	volatile uint64_t x175 = UINT64_MAX;
	volatile uint64_t t38 = 46142112900LLU;

	t38 = (x173-(x174^(x175/x176)));

	if (t38 != 104218893071805407LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = 2420959752LL;
	int8_t x178 = INT8_MIN;
	int64_t t39 = -1094569336LL;

	t39 = (x177-(x178^(x179/x180)));

	if (t39 != 2420912193LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = UINT16_MAX;
	uint64_t x182 = UINT64_MAX;
	static int8_t x184 = INT8_MIN;

	t40 = (x181-(x182^(x183/x184)));

	if (t40 != 18446744073692839937LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = 949;
	static uint8_t x187 = UINT8_MAX;
	uint16_t x188 = 5032U;
	int32_t t41 = 1;

	t41 = (x185-(x186^(x187/x188)));

	if (t41 != -64586) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x189 = 53014833U;
	int16_t x190 = 2;
	static int8_t x191 = -14;
	uint16_t x192 = UINT16_MAX;
	volatile uint32_t t42 = 0U;

	t42 = (x189-(x190^(x191/x192)));

	if (t42 != 53014831U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x193 = 15U;
	int16_t x194 = 1865;
	int32_t x195 = 0;
	uint64_t x196 = 145697755LLU;

	t43 = (x193-(x194^(x195/x196)));

	if (t43 != 18446744073709549766LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x197 = INT64_MIN;
	static int16_t x199 = 783;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t44 = 64275905427687596LLU;

	t44 = (x197-(x198^(x199/x200)));

	if (t44 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -16028LL;
	uint8_t x202 = 1U;
	uint8_t x204 = 13U;
	int64_t t45 = 35884287609518498LL;

	t45 = (x201-(x202^(x203/x204)));

	if (t45 != -16046LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x205 = 3708;
	int32_t x206 = INT32_MIN;
	int32_t x207 = -1;
	int64_t x208 = INT64_MIN;
	int64_t t46 = 5LL;

	t46 = (x205-(x206^(x207/x208)));

	if (t46 != 2147487356LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 306U;
	int16_t x210 = INT16_MIN;
	uint32_t t47 = 209752U;

	t47 = (x209-(x210^(x211/x212)));

	if (t47 != 32979U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x216 = INT64_MIN;

	t48 = (x213-(x214^(x215/x216)));

	if (t48 != -83342LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = 94U;
	volatile uint16_t x220 = 523U;

	t49 = (x217-(x218^(x219/x220)));

	if (t49 != 254) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = UINT32_MAX;
	volatile int8_t x222 = INT8_MIN;
	static volatile int16_t x224 = INT16_MIN;
	volatile uint32_t t50 = 2201U;

	t50 = (x221-(x222^(x223/x224)));

	if (t50 != 184U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -71;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = 1;
	volatile uint32_t x228 = 2947223U;
	volatile uint32_t t51 = 2120453U;

	t51 = (x225-(x226^(x227/x228)));

	if (t51 != 57U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MIN;
	int32_t x230 = -1;
	volatile int32_t x231 = INT32_MAX;
	uint16_t x232 = UINT16_MAX;

	t52 = (x229-(x230^(x231/x232)));

	if (t52 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = -394LL;
	int64_t x234 = -44166LL;
	static int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MAX;

	t53 = (x233-(x234^(x235/x236)));

	if (t53 != 43772LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = INT32_MAX;
	int8_t x242 = 1;
	volatile int8_t x243 = INT8_MAX;
	uint8_t x244 = 9U;
	int32_t t54 = -1;

	t54 = (x241-(x242^(x243/x244)));

	if (t54 != 2147483632) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = -1LL;
	int64_t x246 = INT64_MAX;
	int64_t x247 = -6959LL;
	uint32_t x248 = UINT32_MAX;
	int64_t t55 = INT64_MIN;

	t55 = (x245-(x246^(x247/x248)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x250 = -2762;
	static int8_t x251 = -1;
	uint64_t t56 = 387155954LLU;

	t56 = (x249-(x250^(x251/x252)));

	if (t56 != 13698876877303LLU) { NG(); } else { ; }
	
}

void f57(void) {


	t57 = (x253-(x254^(x255/x256)));

	if (t57 != -33308LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x258 = -69;
	int64_t x259 = -69LL;
	int32_t x260 = -8612203;
	volatile int64_t t58 = 4697LL;

	t58 = (x257-(x258^(x259/x260)));

	if (t58 != 65604LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MIN;
	int32_t x263 = -5587885;
	uint16_t x264 = UINT16_MAX;
	uint32_t t59 = 64543U;

	t59 = (x261-(x262^(x263/x264)));

	if (t59 != 2147483564U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x266 = 91U;
	int32_t x267 = INT32_MIN;
	volatile int32_t t60 = -733543;

	t60 = (x265-(x266^(x267/x268)));

	if (t60 != -226720) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x273 = 18U;
	int32_t x275 = 42320;
	volatile int32_t t61 = -97773805;

	t61 = (x273-(x274^(x275/x276)));

	if (t61 != -2147483616) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x277 = UINT32_MAX;
	volatile int32_t x278 = INT32_MAX;
	uint8_t x279 = UINT8_MAX;
	static uint32_t x280 = UINT32_MAX;
	uint32_t t62 = 2049514722U;

	t62 = (x277-(x278^(x279/x280)));

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = -1;
	static volatile int32_t x282 = -3829;
	int64_t x283 = -6357457LL;
	volatile int64_t x284 = INT64_MAX;

	t63 = (x281-(x282^(x283/x284)));

	if (t63 != 3828LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = -4910514;
	int64_t x286 = -1LL;
	int32_t x287 = 944;
	int32_t x288 = -1;
	volatile int64_t t64 = -372850370LL;

	t64 = (x285-(x286^(x287/x288)));

	if (t64 != -4911457LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = -1;
	uint64_t x290 = 12889632810088LLU;
	static int64_t x291 = INT64_MIN;
	int16_t x292 = -31;
	uint64_t t65 = 13907LLU;

	t65 = (x289-(x290^(x291/x292)));

	if (t65 != 18149220646595852959LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = -48777831895LL;
	int8_t x295 = INT8_MAX;
	uint16_t x296 = 3U;
	int64_t t66 = -185055040884639649LL;

	t66 = (x293-(x294^(x295/x296)));

	if (t66 != 48777831805LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x297 = 3U;
	uint32_t x298 = 29U;
	volatile uint8_t x299 = 10U;
	int8_t x300 = -1;
	volatile uint32_t t67 = 2810U;

	t67 = (x297-(x298^(x299/x300)));

	if (t67 != 24U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = 1;
	int32_t x306 = -56051832;
	int32_t x307 = -1478898;
	volatile uint64_t x308 = UINT64_MAX;
	uint64_t t68 = 1095166325LLU;

	t68 = (x305-(x306^(x307/x308)));

	if (t68 != 56051833LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = -1;
	int32_t x310 = -1;
	volatile int16_t x311 = INT16_MAX;
	uint8_t x312 = 7U;
	volatile int32_t t69 = 735;

	t69 = (x309-(x310^(x311/x312)));

	if (t69 != 4681) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = 246087394889337LL;
	int32_t x314 = INT32_MAX;
	static int32_t x315 = 3150;
	uint64_t x316 = 114478464180973071LLU;
	static volatile uint64_t t70 = 1958179417084508398LLU;

	t70 = (x313-(x314^(x315/x316)));

	if (t70 != 246085247405690LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MAX;
	int16_t x318 = 216;
	uint64_t x319 = 5980409LLU;
	int32_t x320 = INT32_MIN;

	t71 = (x317-(x318^(x319/x320)));

	if (t71 != 9223372036854775591LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x322 = UINT8_MAX;
	int16_t x323 = -4198;
	static uint32_t x324 = 13101U;
	uint32_t t72 = 3649416U;

	t72 = (x321-(x322^(x323/x324)));

	if (t72 != 4294639514U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = -137637;
	uint32_t x326 = 38711393U;
	int8_t x327 = -1;
	int64_t t73 = -1747103055723220LL;

	t73 = (x325-(x326^(x327/x328)));

	if (t73 != -38849030LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x332 = -7;
	volatile int64_t t74 = -60761701061825LL;

	t74 = (x329-(x330^(x331/x332)));

	if (t74 != 4294967305LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x333 = 123U;
	int8_t x334 = 0;
	static uint8_t x335 = UINT8_MAX;
	int8_t x336 = -3;
	volatile int32_t t75 = -70119;

	t75 = (x333-(x334^(x335/x336)));

	if (t75 != 208) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = INT8_MAX;
	int8_t x340 = INT8_MIN;
	int64_t t76 = -2585530291554332110LL;

	t76 = (x337-(x338^(x339/x340)));

	if (t76 != 50176LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = -393498392LL;
	static int16_t x342 = -1;
	volatile int16_t x343 = -1;
	int16_t x344 = INT16_MIN;
	volatile int64_t t77 = -1LL;

	t77 = (x341-(x342^(x343/x344)));

	if (t77 != -393498391LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = -2;
	static int64_t x350 = -1LL;
	volatile uint32_t x351 = 42476594U;
	static int8_t x352 = -1;
	static int64_t t78 = -253201994LL;

	t78 = (x349-(x350^(x351/x352)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x354 = INT64_MAX;
	int64_t t79 = -225255437898LL;

	t79 = (x353-(x354^(x355/x356)));

	if (t79 != 9223372036832636864LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = INT32_MAX;
	volatile uint16_t x358 = 15949U;
	volatile int16_t x359 = INT16_MIN;
	static int32_t x360 = INT32_MIN;
	static volatile int32_t t80 = 1418;

	t80 = (x357-(x358^(x359/x360)));

	if (t80 != 2147467698) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x362 = INT32_MIN;
	int64_t x364 = -126820527550673LL;
	int64_t t81 = -1034006334064LL;

	t81 = (x361-(x362^(x363/x364)));

	if (t81 != 2147482664LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = -1;
	int8_t x366 = -2;
	int16_t x367 = -1;
	static int64_t x368 = INT64_MAX;
	static int64_t t82 = 22LL;

	t82 = (x365-(x366^(x367/x368)));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = 12870012784LL;
	volatile uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;

	t83 = (x369-(x370^(x371/x372)));

	if (t83 != 12870012786LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = 17144621U;
	static int32_t x374 = INT32_MIN;
	uint8_t x375 = 61U;
	int8_t x376 = INT8_MIN;
	static volatile uint32_t t84 = 7433712U;

	t84 = (x373-(x374^(x375/x376)));

	if (t84 != 2164628269U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x377 = 1U;
	int32_t x378 = -1;
	volatile int64_t x379 = INT64_MAX;
	uint16_t x380 = 158U;
	int64_t t85 = 8360055508357171LL;

	t85 = (x377-(x378^(x379/x380)));

	if (t85 != 58375772385156810LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = -1;
	int64_t x383 = -1LL;
	int8_t x384 = INT8_MAX;
	int64_t t86 = -329978290463335573LL;

	t86 = (x381-(x382^(x383/x384)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x386 = 0;
	uint64_t x387 = 136471LLU;
	uint32_t x388 = UINT32_MAX;
	uint64_t t87 = 309LLU;

	t87 = (x385-(x386^(x387/x388)));

	if (t87 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x389 = 23U;
	volatile uint32_t t88 = 706165757U;

	t88 = (x389-(x390^(x391/x392)));

	if (t88 != 260748140U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x393 = 1U;
	static uint8_t x394 = 126U;
	int16_t x395 = INT16_MIN;
	int64_t x396 = 529234650940499409LL;

	t89 = (x393-(x394^(x395/x396)));

	if (t89 != -125LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x397 = 1809U;
	static volatile int16_t x398 = 104;
	int8_t x399 = INT8_MIN;
	uint64_t x400 = 122LLU;
	volatile uint64_t t90 = 11983832042LLU;

	t90 = (x397-(x398^(x399/x400)));

	if (t90 != 18295541253433245650LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x401 = UINT8_MAX;
	static int32_t x402 = -116197;
	int16_t x403 = INT16_MAX;

	t91 = (x401-(x402^(x403/x404)));

	if (t91 != 116204) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x417 = UINT32_MAX;
	int8_t x419 = INT8_MIN;
	int8_t x420 = -1;
	volatile int64_t t92 = 31503560354LL;

	t92 = (x417-(x418^(x419/x420)));

	if (t92 != 4294967424LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x421 = UINT32_MAX;
	uint64_t x422 = 104007374223868LLU;
	int16_t x423 = 1;
	static uint8_t x424 = UINT8_MAX;
	uint64_t t93 = 12814279519924LLU;

	t93 = (x421-(x422^(x423/x424)));

	if (t93 != 18446640070630295043LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = -440;
	volatile int16_t x426 = INT16_MAX;
	static volatile int16_t x427 = -1;
	int32_t t94 = 237357929;

	t94 = (x425-(x426^(x427/x428)));

	if (t94 != -33207) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x429 = -62;
	static int64_t x430 = -1LL;
	int16_t x431 = -1;

	t95 = (x429-(x430^(x431/x432)));

	if (t95 != -62LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x434 = 5;
	volatile uint32_t x435 = 168U;
	int64_t x436 = INT64_MAX;
	int64_t t96 = 62132451582784225LL;

	t96 = (x433-(x434^(x435/x436)));

	if (t96 != -5LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x437 = INT64_MIN;
	static int8_t x438 = INT8_MAX;
	int32_t x440 = INT32_MIN;
	uint64_t t97 = 10LLU;

	t97 = (x437-(x438^(x439/x440)));

	if (t97 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x441 = 33;
	int64_t x442 = 1785316LL;
	volatile int32_t x443 = INT32_MAX;
	int64_t x444 = -1LL;

	t98 = (x441-(x442^(x443/x444)));

	if (t98 != 2145698364LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x445 = 3U;
	volatile int32_t x447 = 1712829;
	int8_t x448 = INT8_MIN;

	t99 = (x445-(x446^(x447/x448)));

	if (t99 != 12771LLU) { NG(); } else { ; }
	
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

