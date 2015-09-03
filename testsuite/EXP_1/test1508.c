#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = 7U;
volatile int32_t x3 = 23640570;
static int8_t x7 = INT8_MIN;
int32_t x9 = INT32_MIN;
int32_t t3 = 1618;
uint8_t x18 = UINT8_MAX;
volatile uint32_t x26 = 1912U;
int8_t x31 = -53;
static uint32_t x43 = UINT32_MAX;
volatile uint16_t x44 = 120U;
int16_t x45 = INT16_MIN;
static uint64_t x51 = 2265649847348LLU;
volatile int8_t x62 = 19;
uint64_t x64 = 3142351LLU;
uint16_t x67 = 0U;
int64_t x78 = INT64_MIN;
static uint64_t x81 = UINT64_MAX;
volatile int32_t t20 = 298707;
int32_t t21 = 58436;
int16_t x92 = -79;
int32_t t25 = -50;
int16_t x108 = 4779;
int8_t x109 = -1;
static volatile int32_t x111 = INT32_MIN;
volatile int32_t t27 = -1206;
int8_t x116 = 1;
volatile int64_t t30 = -177453LL;
static int32_t x125 = 335986758;
volatile int64_t x131 = -1LL;
volatile int64_t x135 = INT64_MAX;
static int8_t x138 = INT8_MAX;
uint32_t t35 = 1000028U;
volatile uint32_t x148 = 6935U;
int32_t t37 = 13009;
volatile int64_t t40 = -153394678LL;
volatile int32_t x168 = INT32_MIN;
volatile int64_t t42 = 278535LL;
int32_t x174 = -1;
volatile uint32_t x175 = 1822895U;
static int64_t x177 = INT64_MAX;
int32_t x188 = INT32_MIN;
int16_t x191 = INT16_MIN;
volatile uint64_t x201 = UINT64_MAX;
int16_t x204 = INT16_MIN;
uint64_t x210 = 2251423145205545LLU;
int32_t t52 = 0;
int16_t x213 = -5;
static int64_t x218 = -955944530063322LL;
static int8_t x221 = -1;
int32_t t56 = -12087;
int64_t x235 = INT64_MIN;
volatile int32_t x238 = INT32_MIN;
uint64_t x239 = 2014LLU;
static uint32_t x242 = 292813U;
uint16_t x243 = UINT16_MAX;
static int16_t x246 = -1;
static uint8_t x248 = 0U;
uint32_t x250 = 5231U;
volatile uint32_t x251 = UINT32_MAX;
static uint32_t t62 = 325895U;
int32_t x256 = -15728585;
int16_t x262 = INT16_MAX;
int32_t t65 = -192954;
int8_t x268 = INT8_MAX;
uint16_t x270 = 0U;
int32_t x273 = 29;
int32_t x283 = 1;
volatile int32_t t70 = -91560;
int16_t x287 = INT16_MIN;
uint8_t x288 = UINT8_MAX;
volatile int32_t t72 = 3301;
static int32_t t73 = -48044731;
static int8_t x300 = -1;
volatile int64_t x305 = -30LL;
int16_t x306 = INT16_MIN;
uint8_t x308 = 125U;
uint8_t x309 = UINT8_MAX;
static uint64_t x311 = UINT64_MAX;
int8_t x312 = INT8_MIN;
uint16_t x323 = 36U;
uint32_t x335 = UINT32_MAX;
uint16_t x337 = UINT16_MAX;
int32_t x338 = 2523900;
volatile int32_t x339 = -1;
uint8_t x344 = 75U;
int32_t t85 = -876282;
volatile int64_t x347 = INT64_MIN;
int16_t x348 = INT16_MIN;
static uint32_t x356 = UINT32_MAX;
static int8_t x359 = INT8_MAX;
int32_t t89 = 410123805;
int32_t x363 = -231;
int32_t x367 = -22;
static volatile int32_t t91 = 30144406;
volatile uint64_t x371 = 13LLU;
int8_t x373 = INT8_MIN;
int64_t t93 = -336318950208354LL;
int8_t x377 = INT8_MIN;
int32_t x378 = INT32_MAX;
int32_t t94 = -29572514;
int8_t x383 = INT8_MAX;
int32_t t96 = -1;
int32_t x397 = -1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int64_t x4 = -15353014811921LL;
	int64_t t0 = 416537126LL;

	t0 = (((x1<x2)|x3)^x4);

	if (t0 != -15353024791787LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int64_t x6 = INT64_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 710750;

	t1 = (((x5<x6)|x7)^x8);

	if (t1 != -130) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 19308542884191408LLU;
	uint16_t x11 = 210U;
	static int8_t x12 = INT8_MAX;
	static int32_t t2 = -356;

	t2 = (((x9<x10)|x11)^x12);

	if (t2 != 173) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = -1;
	static volatile uint64_t x14 = 6020761816415761LLU;
	static int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MAX;

	t3 = (((x13<x14)|x15)^x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 8099U;
	volatile uint8_t x19 = 2U;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -3;

	t4 = (((x17<x18)|x19)^x20);

	if (t4 != -2147483646) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile uint32_t x22 = 1U;
	int64_t x23 = INT64_MIN;
	int32_t x24 = -1;
	int64_t t5 = INT64_MAX;

	t5 = (((x21<x22)|x23)^x24);

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1LLU;
	uint32_t x27 = 3U;
	uint8_t x28 = UINT8_MAX;
	volatile uint32_t t6 = 7384U;

	t6 = (((x25<x26)|x27)^x28);

	if (t6 != 252U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 0U;
	int32_t x30 = -143;
	static uint16_t x32 = 216U;
	static volatile int32_t t7 = 42249493;

	t7 = (((x29<x30)|x31)^x32);

	if (t7 != -237) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 130;
	static uint8_t x34 = UINT8_MAX;
	int32_t x35 = -1;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -19208;

	t8 = (((x33<x34)|x35)^x36);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 2U;
	uint64_t x38 = 128384522043LLU;
	int8_t x39 = -1;
	static int64_t x40 = INT64_MIN;
	int64_t t9 = INT64_MAX;

	t9 = (((x37<x38)|x39)^x40);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	int32_t x42 = -1;
	static volatile uint32_t t10 = 307937U;

	t10 = (((x41<x42)|x43)^x44);

	if (t10 != 4294967175U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x46 = 241U;
	int16_t x47 = INT16_MIN;
	int8_t x48 = -32;
	int32_t t11 = 95433;

	t11 = (((x45<x46)|x47)^x48);

	if (t11 != 32737) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int16_t x50 = -1;
	int64_t x52 = INT64_MAX;
	uint64_t t12 = 173598266976LLU;

	t12 = (((x49<x50)|x51)^x52);

	if (t12 != 9223369771204928459LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	uint64_t x54 = 32LLU;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = -1;
	int32_t t13 = -15598;

	t13 = (((x53<x54)|x55)^x56);

	if (t13 != -256) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -3257LL;
	int8_t x58 = -1;
	int16_t x59 = INT16_MIN;
	static volatile int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -310753489;

	t14 = (((x57<x58)|x59)^x60);

	if (t14 != 2147450881) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	volatile int64_t x63 = 1095538LL;
	volatile uint64_t t15 = 7405677731LLU;

	t15 = (((x61<x62)|x63)^x64);

	if (t15 != 4146620LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 234127252U;
	uint8_t x66 = 47U;
	int32_t x68 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = (((x65<x66)|x67)^x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 3U;
	static int8_t x70 = INT8_MAX;
	volatile int16_t x71 = INT16_MIN;
	volatile int32_t x72 = -23362;
	int32_t t17 = 12481131;

	t17 = (((x69<x70)|x71)^x72);

	if (t17 != 9407) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	uint32_t x74 = 6093U;
	int16_t x75 = INT16_MAX;
	uint16_t x76 = 0U;
	int32_t t18 = 167381;

	t18 = (((x73<x74)|x75)^x76);

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 564;
	int16_t x79 = INT16_MAX;
	static int16_t x80 = INT16_MIN;
	int32_t t19 = 50109670;

	t19 = (((x77<x78)|x79)^x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 58013U;
	static int8_t x83 = INT8_MAX;
	int8_t x84 = 0;

	t20 = (((x81<x82)|x83)^x84);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -2752544;
	int32_t x86 = 3097;
	uint8_t x87 = 105U;
	uint16_t x88 = 249U;

	t21 = (((x85<x86)|x87)^x88);

	if (t21 != 144) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int64_t x90 = INT64_MIN;
	static int64_t x91 = -1LL;
	int64_t t22 = -84705985054LL;

	t22 = (((x89<x90)|x91)^x92);

	if (t22 != 78LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	static int64_t x94 = -74745132685106LL;
	int64_t x95 = 9LL;
	uint8_t x96 = UINT8_MAX;
	volatile int64_t t23 = -1LL;

	t23 = (((x93<x94)|x95)^x96);

	if (t23 != 246LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 12U;
	static uint8_t x98 = 0U;
	int8_t x99 = INT8_MIN;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -1;

	t24 = (((x97<x98)|x99)^x100);

	if (t24 != 2147483520) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -2537293;
	static uint64_t x102 = 650689457LLU;
	int8_t x103 = INT8_MAX;
	volatile uint8_t x104 = 51U;

	t25 = (((x101<x102)|x103)^x104);

	if (t25 != 76) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	uint32_t x106 = 75474258U;
	uint16_t x107 = UINT16_MAX;
	volatile int32_t t26 = 2;

	t26 = (((x105<x106)|x107)^x108);

	if (t26 != 60756) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = INT32_MIN;
	int32_t x112 = 90056;

	t27 = (((x109<x110)|x111)^x112);

	if (t27 != -2147393592) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MIN;
	int64_t t28 = INT64_MIN;

	t28 = (((x113<x114)|x115)^x116);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 2981212814LLU;
	uint32_t x118 = 7089U;
	uint64_t x119 = UINT64_MAX;
	static uint8_t x120 = UINT8_MAX;
	uint64_t t29 = 777871LLU;

	t29 = (((x117<x118)|x119)^x120);

	if (t29 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -3909;
	int8_t x122 = INT8_MIN;
	volatile uint16_t x123 = 2U;
	static volatile int64_t x124 = -4175936462532480LL;

	t30 = (((x121<x122)|x123)^x124);

	if (t30 != -4175936462532477LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -7988498;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = 1LLU;
	volatile uint64_t t31 = 116831706196070LLU;

	t31 = (((x125<x126)|x127)^x128);

	if (t31 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int32_t x130 = -1;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = INT64_MAX;

	t32 = (((x129<x130)|x131)^x132);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = -1;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = 545146889313LL;

	t33 = (((x133<x134)|x135)^x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -1;
	static volatile int32_t t34 = 77;

	t34 = (((x137<x138)|x139)^x140);

	if (t34 != 2147483646) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 711201U;
	int32_t x142 = -1;
	static int32_t x143 = INT32_MIN;
	uint32_t x144 = 23922958U;

	t35 = (((x141<x142)|x143)^x144);

	if (t35 != 2171406607U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	static volatile int32_t x146 = -1;
	int16_t x147 = INT16_MIN;
	uint32_t t36 = 1663U;

	t36 = (((x145<x146)|x147)^x148);

	if (t36 != 4294941463U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int16_t x150 = 1;
	uint16_t x151 = 6256U;
	volatile int8_t x152 = INT8_MAX;

	t37 = (((x149<x150)|x151)^x152);

	if (t37 != 6158) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	volatile int32_t x154 = INT32_MAX;
	int8_t x155 = INT8_MAX;
	uint32_t x156 = 1443150U;
	volatile uint32_t t38 = 0U;

	t38 = (((x153<x154)|x155)^x156);

	if (t38 != 1443121U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x158 = 3U;
	int64_t x159 = -1689649430212311184LL;
	volatile int16_t x160 = INT16_MAX;
	int64_t t39 = 76781200344238713LL;

	t39 = (((x157<x158)|x159)^x160);

	if (t39 != -1689649430212282226LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 14U;
	int64_t x162 = INT64_MAX;
	uint8_t x163 = UINT8_MAX;
	int64_t x164 = -7347538195300701LL;

	t40 = (((x161<x162)|x163)^x164);

	if (t40 != -7347538195300772LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 32;
	volatile uint64_t x166 = 992714242889268LLU;
	uint64_t x167 = 494747833380899LLU;
	static uint64_t t41 = 89180132042LLU;

	t41 = (((x165<x166)|x167)^x168);

	if (t41 != 18446249327649927203LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = 9;
	uint32_t x170 = 485279121U;
	int64_t x171 = INT64_MIN;
	static int64_t x172 = 41684147736LL;

	t42 = (((x169<x170)|x171)^x172);

	if (t42 != -9223371995170628071LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 407356238902LLU;
	volatile int64_t x176 = INT64_MIN;
	int64_t t43 = 364341LL;

	t43 = (((x173<x174)|x175)^x176);

	if (t43 != -9223372036852952913LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = 63U;
	int32_t x179 = INT32_MIN;
	static int64_t x180 = 66830173LL;
	int64_t t44 = -224074036069455007LL;

	t44 = (((x177<x178)|x179)^x180);

	if (t44 != -2080653475LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -5;
	uint16_t x182 = UINT16_MAX;
	volatile int64_t x183 = -405LL;
	int16_t x184 = INT16_MAX;
	static volatile int64_t t45 = -2933412548LL;

	t45 = (((x181<x182)|x183)^x184);

	if (t45 != -32364LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MIN;
	volatile int8_t x187 = -1;
	volatile int32_t t46 = INT32_MAX;

	t46 = (((x185<x186)|x187)^x188);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = -1;
	volatile int8_t x190 = -1;
	volatile int32_t x192 = -1;
	static int32_t t47 = 1;

	t47 = (((x189<x190)|x191)^x192);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = UINT8_MAX;
	static int16_t x194 = INT16_MIN;
	int32_t x195 = -1;
	static uint32_t x196 = 6045788U;
	volatile uint32_t t48 = 1U;

	t48 = (((x193<x194)|x195)^x196);

	if (t48 != 4288921507U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = 1;
	uint16_t x198 = 6433U;
	int32_t x199 = 1925;
	int16_t x200 = -10;
	int32_t t49 = 56;

	t49 = (((x197<x198)|x199)^x200);

	if (t49 != -1933) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x202 = INT64_MIN;
	volatile uint32_t x203 = UINT32_MAX;
	uint32_t t50 = 187228U;

	t50 = (((x201<x202)|x203)^x204);

	if (t50 != 32767U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 356926U;
	int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	volatile uint16_t x208 = UINT16_MAX;
	int32_t t51 = 0;

	t51 = (((x205<x206)|x207)^x208);

	if (t51 != -32770) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = 130290;
	volatile int8_t x211 = -15;
	int32_t x212 = INT32_MIN;

	t52 = (((x209<x210)|x211)^x212);

	if (t52 != 2147483633) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	uint16_t x215 = UINT16_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -38987;

	t53 = (((x213<x214)|x215)^x216);

	if (t53 != -32769) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MIN;
	int16_t x219 = INT16_MAX;
	uint16_t x220 = 24543U;
	int32_t t54 = -45366282;

	t54 = (((x217<x218)|x219)^x220);

	if (t54 != 8224) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = -1;
	static int64_t x223 = INT64_MAX;
	int64_t x224 = INT64_MIN;
	static int64_t t55 = -3188152009LL;

	t55 = (((x221<x222)|x223)^x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MIN;
	int8_t x226 = 60;
	int32_t x227 = INT32_MAX;
	volatile int32_t x228 = INT32_MIN;

	t56 = (((x225<x226)|x227)^x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 1266398655U;
	volatile uint32_t x230 = UINT32_MAX;
	static uint32_t x231 = 159800961U;
	int16_t x232 = -1326;
	static volatile uint32_t t57 = 806U;

	t57 = (((x229<x230)|x231)^x232);

	if (t57 != 4135167059U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 4U;
	volatile int8_t x234 = INT8_MIN;
	uint16_t x236 = 134U;
	static int64_t t58 = 81231212102965LL;

	t58 = (((x233<x234)|x235)^x236);

	if (t58 != -9223372036854775674LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int32_t x240 = -1;
	static uint64_t t59 = 725LLU;

	t59 = (((x237<x238)|x239)^x240);

	if (t59 != 18446744073709549601LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x244 = INT8_MAX;
	int32_t t60 = 37211;

	t60 = (((x241<x242)|x243)^x244);

	if (t60 != 65408) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = 6631;
	uint8_t x247 = 97U;
	static int32_t t61 = -48;

	t61 = (((x245<x246)|x247)^x248);

	if (t61 != 97) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = 0;
	uint8_t x252 = UINT8_MAX;

	t62 = (((x249<x250)|x251)^x252);

	if (t62 != 4294967040U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -667753277234033613LL;
	int64_t x254 = INT64_MIN;
	static int64_t x255 = INT64_MAX;
	volatile int64_t t63 = 12436915634LL;

	t63 = (((x253<x254)|x255)^x256);

	if (t63 != -9223372036839047224LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 2057U;
	int64_t x258 = INT64_MAX;
	int32_t x259 = INT32_MAX;
	int64_t x260 = -1LL;
	volatile int64_t t64 = 259263905116LL;

	t64 = (((x257<x258)|x259)^x260);

	if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 83U;
	static int32_t x263 = -105440211;
	static int32_t x264 = 0;

	t65 = (((x261<x262)|x263)^x264);

	if (t65 != -105440211) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -126;
	int32_t x266 = INT32_MAX;
	volatile uint16_t x267 = 255U;
	static volatile int32_t t66 = 941251;

	t66 = (((x265<x266)|x267)^x268);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 38;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 1U;
	int64_t t67 = 11611LL;

	t67 = (((x269<x270)|x271)^x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = -1LL;
	volatile uint16_t x275 = UINT16_MAX;
	int8_t x276 = INT8_MAX;
	volatile int32_t t68 = 0;

	t68 = (((x273<x274)|x275)^x276);

	if (t68 != 65408) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x278 = 4484U;
	static uint64_t x279 = 1841802609625080043LLU;
	int64_t x280 = INT64_MIN;
	uint64_t t69 = 892LLU;

	t69 = (((x277<x278)|x279)^x280);

	if (t69 != 11065174646479855851LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = 10;
	uint16_t x284 = UINT16_MAX;

	t70 = (((x281<x282)|x283)^x284);

	if (t70 != 65534) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 1121222745657042LLU;
	int16_t x286 = -3850;
	static int32_t t71 = -198713;

	t71 = (((x285<x286)|x287)^x288);

	if (t71 != -32514) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int16_t x290 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	int8_t x292 = INT8_MIN;

	t72 = (((x289<x290)|x291)^x292);

	if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	volatile int64_t x294 = INT64_MIN;
	static int32_t x295 = INT32_MIN;
	static int16_t x296 = INT16_MAX;

	t73 = (((x293<x294)|x295)^x296);

	if (t73 != -2147450881) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = -1;
	volatile uint8_t x299 = 22U;
	int32_t t74 = 461317;

	t74 = (((x297<x298)|x299)^x300);

	if (t74 != -24) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	volatile int8_t x303 = 4;
	volatile int8_t x304 = -1;
	int32_t t75 = -195;

	t75 = (((x301<x302)|x303)^x304);

	if (t75 != -6) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x307 = 3U;
	int32_t t76 = 162439868;

	t76 = (((x305<x306)|x307)^x308);

	if (t76 != 126) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x310 = INT64_MIN;
	volatile uint64_t t77 = 3011515564LLU;

	t77 = (((x309<x310)|x311)^x312);

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 5911U;
	int32_t x314 = -1;
	int64_t x315 = INT64_MIN;
	int16_t x316 = -1;
	volatile int64_t t78 = INT64_MAX;

	t78 = (((x313<x314)|x315)^x316);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 30592U;
	int64_t x318 = INT64_MAX;
	volatile uint8_t x319 = UINT8_MAX;
	volatile int16_t x320 = INT16_MIN;
	int32_t t79 = 528;

	t79 = (((x317<x318)|x319)^x320);

	if (t79 != -32513) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x321 = 42;
	uint64_t x322 = UINT64_MAX;
	static uint64_t x324 = UINT64_MAX;
	uint64_t t80 = 1LLU;

	t80 = (((x321<x322)|x323)^x324);

	if (t80 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 6;
	volatile int64_t x326 = 849973666047898880LL;
	int8_t x327 = INT8_MIN;
	int64_t x328 = -1022010249350720LL;
	int64_t t81 = 4LL;

	t81 = (((x325<x326)|x327)^x328);

	if (t81 != 1022010249350721LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	static int16_t x330 = INT16_MAX;
	static int8_t x331 = -1;
	uint8_t x332 = 96U;
	int32_t t82 = -216;

	t82 = (((x329<x330)|x331)^x332);

	if (t82 != -97) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = 51;
	int64_t x334 = -20011402LL;
	uint8_t x336 = 1U;
	volatile uint32_t t83 = 20136289U;

	t83 = (((x333<x334)|x335)^x336);

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x340 = INT32_MIN;
	int32_t t84 = INT32_MAX;

	t84 = (((x337<x338)|x339)^x340);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = INT32_MAX;
	uint32_t x342 = UINT32_MAX;
	int16_t x343 = INT16_MIN;

	t85 = (((x341<x342)|x343)^x344);

	if (t85 != -32694) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 4U;
	uint64_t x346 = 9599841260710LLU;
	static volatile int64_t t86 = 21547572969LL;

	t86 = (((x345<x346)|x347)^x348);

	if (t86 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	int8_t x352 = -1;
	volatile int32_t t87 = INT32_MAX;

	t87 = (((x349<x350)|x351)^x352);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = UINT8_MAX;
	int64_t x354 = -1LL;
	int16_t x355 = -242;
	volatile uint32_t t88 = 736508256U;

	t88 = (((x353<x354)|x355)^x356);

	if (t88 != 241U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	uint32_t x358 = UINT32_MAX;
	uint16_t x360 = 52U;

	t89 = (((x357<x358)|x359)^x360);

	if (t89 != 75) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 1853;
	volatile int16_t x362 = -31;
	int8_t x364 = INT8_MIN;
	static int32_t t90 = 163;

	t90 = (((x361<x362)|x363)^x364);

	if (t90 != 153) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = -1;
	volatile uint32_t x366 = UINT32_MAX;
	volatile int32_t x368 = INT32_MIN;

	t91 = (((x365<x366)|x367)^x368);

	if (t91 != 2147483626) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = 6619384U;
	uint32_t x370 = UINT32_MAX;
	volatile uint32_t x372 = 3U;
	volatile uint64_t t92 = 119453LLU;

	t92 = (((x369<x370)|x371)^x372);

	if (t92 != 14LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MAX;
	int64_t x375 = INT64_MIN;
	static int8_t x376 = -10;

	t93 = (((x373<x374)|x375)^x376);

	if (t93 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x379 = 0U;
	int8_t x380 = INT8_MIN;

	t94 = (((x377<x378)|x379)^x380);

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	int64_t x382 = INT64_MIN;
	uint8_t x384 = 54U;
	static volatile int32_t t95 = 0;

	t95 = (((x381<x382)|x383)^x384);

	if (t95 != 73) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static uint16_t x386 = UINT16_MAX;
	int16_t x387 = INT16_MIN;
	static int16_t x388 = INT16_MAX;

	t96 = (((x385<x386)|x387)^x388);

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	static int64_t x390 = INT64_MIN;
	int8_t x391 = -1;
	int32_t x392 = INT32_MIN;
	int32_t t97 = INT32_MAX;

	t97 = (((x389<x390)|x391)^x392);

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 1067U;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	static uint16_t x396 = 7488U;
	int32_t t98 = -1;

	t98 = (((x393<x394)|x395)^x396);

	if (t98 != -2147476160) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 1059085311U;
	volatile int64_t x399 = 105866682658635LL;
	static int64_t x400 = -1875378450980682LL;
	volatile int64_t t99 = -2LL;

	t99 = (((x397<x398)|x399)^x400);

	if (t99 != -1910867731984387LL) { NG(); } else { ; }
	
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

