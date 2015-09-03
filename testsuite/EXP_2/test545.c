#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
int8_t x10 = 3;
int8_t x13 = INT8_MIN;
int32_t x22 = 907431;
volatile int16_t x28 = INT16_MIN;
uint32_t t5 = 101U;
int16_t x29 = 7395;
static uint32_t x30 = 13U;
volatile int64_t t6 = 2701463564272LL;
volatile int16_t x35 = -1;
uint16_t x49 = UINT16_MAX;
int64_t x54 = INT64_MIN;
uint32_t x55 = UINT32_MAX;
int32_t x59 = 668460225;
static uint16_t x63 = 26271U;
int8_t x66 = INT8_MIN;
static int8_t x69 = 0;
int16_t x71 = INT16_MIN;
uint64_t x74 = UINT64_MAX;
int16_t x76 = INT16_MAX;
volatile uint32_t x78 = UINT32_MAX;
int8_t x81 = 5;
int64_t x82 = -1LL;
int64_t x91 = INT64_MIN;
int16_t x93 = INT16_MAX;
volatile uint16_t x95 = 3U;
uint16_t x97 = 687U;
static uint32_t x102 = UINT32_MAX;
static int32_t x108 = 0;
int64_t t23 = -84905623LL;
volatile int16_t x113 = INT16_MAX;
int8_t x114 = -21;
volatile int32_t x123 = 424220;
int64_t x131 = 270969073385290721LL;
int64_t x135 = INT64_MIN;
int64_t t30 = INT64_MAX;
uint8_t x137 = 2U;
uint8_t x139 = 3U;
static int64_t x140 = INT64_MAX;
int64_t t31 = 104LL;
int8_t x154 = 27;
uint32_t t35 = 475455U;
static int8_t x160 = -1;
uint16_t x162 = UINT16_MAX;
uint64_t x163 = UINT64_MAX;
uint64_t x166 = UINT64_MAX;
uint32_t x172 = UINT32_MAX;
uint8_t x173 = 0U;
uint8_t x176 = 0U;
volatile int64_t t40 = -915401861586092LL;
int16_t x178 = -5;
volatile int32_t x180 = -139;
int32_t t41 = -942898;
int64_t x183 = INT64_MIN;
volatile int16_t x186 = 33;
uint32_t x187 = 27014262U;
volatile int8_t x191 = 12;
uint64_t x196 = 139308119704358839LLU;
uint32_t x201 = UINT32_MAX;
int16_t x203 = 753;
uint32_t t47 = 1619403156U;
static uint64_t t48 = 1603LLU;
volatile int64_t x213 = INT64_MIN;
int64_t t51 = 1LL;
int8_t x233 = INT8_MIN;
int16_t x236 = -21;
int32_t x239 = -1;
uint64_t t55 = 5346LLU;
static volatile int8_t x249 = -1;
int32_t x251 = INT32_MIN;
int16_t x253 = -1;
int64_t x263 = -1LL;
int64_t t59 = 28947LL;
uint8_t x265 = 6U;
volatile int16_t x267 = -3601;
volatile int32_t x268 = INT32_MIN;
int16_t x278 = -1;
int16_t x284 = INT16_MAX;
uint64_t x290 = UINT64_MAX;
uint64_t x296 = 2375273520420158LLU;
uint64_t x306 = 2854408014264214LLU;
int8_t x307 = INT8_MAX;
int32_t x313 = -1;
int16_t x316 = -1;
static int64_t t71 = -554088053061270726LL;
int16_t x331 = -1;
volatile int8_t x342 = INT8_MIN;
volatile uint64_t x345 = UINT64_MAX;
uint64_t t76 = 381237572LLU;
static volatile int64_t t77 = -448308085343757LL;
volatile int8_t x360 = INT8_MAX;
int16_t x367 = -1;
int16_t x374 = 0;
static uint64_t x381 = 6121579675734033047LLU;
uint8_t x382 = 3U;
volatile int32_t t84 = -894144;
volatile int64_t x404 = INT64_MAX;
uint64_t x405 = 4LLU;
int8_t x407 = -1;
int16_t x421 = 462;
static int8_t x430 = -1;
static int8_t x441 = -1;
int32_t x446 = -1;
static int64_t t96 = -79LL;
int32_t x450 = -1;
int16_t x454 = INT16_MAX;
int16_t x455 = INT16_MIN;
int64_t x460 = INT64_MIN;


void f0(void) {
	int32_t x1 = 89;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = -1;
	uint64_t t0 = 17LLU;

	t0 = ((x1*(x2/x3))|x4);

	if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -3;
	uint8_t x6 = 15U;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = -1;
	static volatile int32_t t1 = 2;

	t1 = ((x5*(x6/x7))|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x11 = INT32_MIN;
	int16_t x12 = -10803;
	static int64_t t2 = -7345267LL;

	t2 = ((x9*(x10/x11))|x12);

	if (t2 != -10803LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = 1U;
	int32_t x15 = -7382058;
	uint32_t x16 = 291U;
	static volatile uint32_t t3 = 685367U;

	t3 = ((x13*(x14/x15))|x16);

	if (t3 != 291U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 4U;
	int16_t x23 = -4575;
	int8_t x24 = -1;
	uint32_t t4 = UINT32_MAX;

	t4 = ((x21*(x22/x23))|x24);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = -274083907;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = UINT32_MAX;

	t5 = ((x25*(x26/x27))|x28);

	if (t5 != 4294934528U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x31 = INT64_MIN;
	uint32_t x32 = 45812448U;

	t6 = ((x29*(x30/x31))|x32);

	if (t6 != 45812448LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 24009221U;
	uint16_t x34 = UINT16_MAX;
	uint64_t x36 = 2717LLU;
	volatile uint64_t t7 = 333246LLU;

	t7 = ((x33*(x34/x35))|x36);

	if (t7 != 2808699549LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	volatile uint32_t x42 = 6U;
	uint8_t x43 = UINT8_MAX;
	static uint32_t x44 = 15867U;
	volatile uint32_t t8 = 73191031U;

	t8 = ((x41*(x42/x43))|x44);

	if (t8 != 15867U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x50 = UINT8_MAX;
	int8_t x51 = INT8_MAX;
	static uint8_t x52 = 1U;
	volatile int32_t t9 = -1018032;

	t9 = ((x49*(x50/x51))|x52);

	if (t9 != 131071) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 291U;
	int8_t x56 = 0;
	int64_t t10 = -1089303157LL;

	t10 = ((x53*(x54/x55))|x56);

	if (t10 != -624917741568LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -4616;
	static int64_t x58 = INT64_MIN;
	int8_t x60 = -1;
	static volatile int64_t t11 = -1087710242LL;

	t11 = ((x57*(x58/x59))|x60);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = UINT8_MAX;
	int32_t x62 = -1;
	uint16_t x64 = UINT16_MAX;
	static int32_t t12 = -93113052;

	t12 = ((x61*(x62/x63))|x64);

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x65 = INT16_MIN;
	uint32_t x67 = UINT32_MAX;
	int64_t x68 = INT64_MAX;
	static int64_t t13 = INT64_MAX;

	t13 = ((x65*(x66/x67))|x68);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = -1;
	uint8_t x72 = 94U;
	volatile int32_t t14 = -3966;

	t14 = ((x69*(x70/x71))|x72);

	if (t14 != 94) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	uint8_t x75 = 5U;
	static uint64_t t15 = 991636832161LLU;

	t15 = ((x73*(x74/x75))|x76);

	if (t15 != 14757395258967654399LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	static uint64_t x79 = 284050988471LLU;
	static volatile uint64_t x80 = 52032LLU;
	uint64_t t16 = 33444697894061LLU;

	t16 = ((x77*(x78/x79))|x80);

	if (t16 != 52032LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x83 = UINT64_MAX;
	static int8_t x84 = INT8_MIN;
	static uint64_t t17 = 961830755897313LLU;

	t17 = ((x81*(x82/x83))|x84);

	if (t17 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = -1;
	int8_t x86 = INT8_MIN;
	uint16_t x87 = 974U;
	volatile int8_t x88 = INT8_MIN;
	volatile int32_t t18 = 11118;

	t18 = ((x85*(x86/x87))|x88);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 5008417653391LLU;
	int8_t x90 = 1;
	uint16_t x92 = 35U;
	static uint64_t t19 = 394072LLU;

	t19 = ((x89*(x90/x91))|x92);

	if (t19 != 35LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x94 = -476996LL;
	int8_t x96 = INT8_MAX;
	volatile int64_t t20 = 4134263LL;

	t20 = ((x93*(x94/x95))|x96);

	if (t20 != -5209887361LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x98 = 78U;
	static volatile uint16_t x99 = 4U;
	int64_t x100 = INT64_MAX;
	int64_t t21 = INT64_MAX;

	t21 = ((x97*(x98/x99))|x100);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	int64_t x103 = INT64_MIN;
	static int32_t x104 = -18;
	static int64_t t22 = 106871756LL;

	t22 = ((x101*(x102/x103))|x104);

	if (t22 != -18LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = 3;
	int64_t x106 = INT64_MIN;
	uint8_t x107 = 62U;

	t23 = ((x105*(x106/x107))|x108);

	if (t23 != -446292195331682700LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 100311738586183LLU;
	static uint32_t x110 = 745542482U;
	uint8_t x111 = 2U;
	static int64_t x112 = INT64_MIN;
	volatile uint64_t t24 = 923188536190227674LLU;

	t24 = ((x109*(x110/x111))|x112);

	if (t24 != 11004414266616013279LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x115 = INT32_MIN;
	uint16_t x116 = UINT16_MAX;
	int32_t t25 = 1;

	t25 = ((x113*(x114/x115))|x116);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 2U;
	uint8_t x118 = UINT8_MAX;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = 146580696717LLU;
	static uint64_t t26 = UINT64_MAX;

	t26 = ((x117*(x118/x119))|x120);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x121 = -1;
	int8_t x122 = 2;
	uint16_t x124 = 8344U;
	volatile int32_t t27 = -135;

	t27 = ((x121*(x122/x123))|x124);

	if (t27 != 8344) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = INT8_MIN;
	static int16_t x127 = INT16_MIN;
	uint64_t x128 = 776LLU;
	uint64_t t28 = 488084534198LLU;

	t28 = ((x125*(x126/x127))|x128);

	if (t28 != 776LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 47135356LL;
	static uint16_t x130 = 6U;
	int32_t x132 = INT32_MIN;
	volatile int64_t t29 = -563771LL;

	t29 = ((x129*(x130/x131))|x132);

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MAX;
	static int32_t x134 = INT32_MIN;
	static int64_t x136 = INT64_MAX;

	t30 = ((x133*(x134/x135))|x136);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x138 = INT32_MIN;

	t31 = ((x137*(x138/x139))|x140);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x141 = 286U;
	static int16_t x142 = -1;
	int64_t x143 = INT64_MAX;
	static volatile int64_t x144 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = ((x141*(x142/x143))|x144);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	static uint64_t x146 = UINT64_MAX;
	static volatile int8_t x147 = -1;
	int32_t x148 = -813417964;
	uint64_t t33 = UINT64_MAX;

	t33 = ((x145*(x146/x147))|x148);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MIN;
	static int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MAX;
	volatile int64_t t34 = -3LL;

	t34 = ((x149*(x150/x151))|x152);

	if (t34 != 36029898678075391LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x153 = INT8_MIN;
	uint32_t x155 = 2599U;
	int8_t x156 = 1;

	t35 = ((x153*(x154/x155))|x156);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	static int16_t x158 = 0;
	uint8_t x159 = UINT8_MAX;
	int64_t t36 = -121705427633464327LL;

	t36 = ((x157*(x158/x159))|x160);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x161 = -47;
	uint64_t x164 = UINT64_MAX;
	static volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x161*(x162/x163))|x164);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x165 = 750835921;
	int8_t x167 = -1;
	int64_t x168 = INT64_MIN;
	static volatile uint64_t t38 = 300176LLU;

	t38 = ((x165*(x166/x167))|x168);

	if (t38 != 9223372037605611729LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x169 = -1;
	static uint16_t x170 = 357U;
	volatile int64_t x171 = INT64_MIN;
	int64_t t39 = -2LL;

	t39 = ((x169*(x170/x171))|x172);

	if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x174 = UINT8_MAX;
	int64_t x175 = -1LL;

	t40 = ((x173*(x174/x175))|x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = UINT8_MAX;
	volatile int8_t x179 = 2;

	t41 = ((x177*(x178/x179))|x180);

	if (t41 != -137) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x181 = INT32_MIN;
	uint32_t x182 = 44733U;
	volatile int64_t x184 = INT64_MIN;
	int64_t t42 = INT64_MIN;

	t42 = ((x181*(x182/x183))|x184);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x185 = -1;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t43 = 1498514U;

	t43 = ((x185*(x186/x187))|x188);

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x190 = 31049U;
	volatile int32_t x192 = -1;
	uint32_t t44 = UINT32_MAX;

	t44 = ((x189*(x190/x191))|x192);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = -1;
	int64_t x195 = -31LL;
	static uint64_t t45 = 673661504LLU;

	t45 = ((x193*(x194/x195))|x196);

	if (t45 != 139308119704358839LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1251;
	volatile int16_t x198 = INT16_MIN;
	volatile int64_t x199 = INT64_MIN;
	uint64_t x200 = 5259497LLU;
	uint64_t t46 = 512736043401893LLU;

	t46 = ((x197*(x198/x199))|x200);

	if (t46 != 5259497LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x202 = INT8_MIN;
	static volatile int16_t x204 = INT16_MIN;

	t47 = ((x201*(x202/x203))|x204);

	if (t47 != 4294934528U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x205 = UINT64_MAX;
	volatile int16_t x206 = INT16_MIN;
	uint8_t x207 = 1U;
	int8_t x208 = INT8_MAX;

	t48 = ((x205*(x206/x207))|x208);

	if (t48 != 32895LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = 42;
	int32_t x210 = 446428912;
	static uint64_t x211 = 123578957LLU;
	int64_t x212 = INT64_MIN;
	volatile uint64_t t49 = 95596128557971LLU;

	t49 = ((x209*(x210/x211))|x212);

	if (t49 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = -1;
	static int8_t x215 = INT8_MIN;
	static int64_t x216 = -21LL;
	volatile int64_t t50 = 1816943LL;

	t50 = ((x213*(x214/x215))|x216);

	if (t50 != -21LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = -1LL;
	volatile uint16_t x223 = 1U;
	int32_t x224 = INT32_MAX;

	t51 = ((x221*(x222/x223))|x224);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	static int32_t t52 = -138175809;

	t52 = ((x233*(x234/x235))|x236);

	if (t52 != -21) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x237 = 1U;
	static uint32_t x238 = 4613347U;
	static uint16_t x240 = 96U;
	volatile uint32_t t53 = 83774U;

	t53 = ((x237*(x238/x239))|x240);

	if (t53 != 96U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 1U;
	static int32_t x242 = INT32_MIN;
	uint64_t x243 = UINT64_MAX;
	static int8_t x244 = INT8_MAX;
	volatile uint64_t t54 = 212173LLU;

	t54 = ((x241*(x242/x243))|x244);

	if (t54 != 127LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = UINT64_MAX;
	volatile uint16_t x246 = 31826U;
	volatile uint32_t x247 = 346858323U;
	static uint32_t x248 = UINT32_MAX;

	t55 = ((x245*(x246/x247))|x248);

	if (t55 != 4294967295LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x250 = 13946U;
	static int8_t x252 = -1;
	int32_t t56 = -1;

	t56 = ((x249*(x250/x251))|x252);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x254 = 60U;
	static int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MIN;
	int64_t t57 = INT64_MIN;

	t57 = ((x253*(x254/x255))|x256);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x257 = -6743946LL;
	uint16_t x258 = UINT16_MAX;
	volatile int8_t x259 = INT8_MIN;
	uint8_t x260 = 15U;
	volatile int64_t t58 = 0LL;

	t58 = ((x257*(x258/x259))|x260);

	if (t58 != 3446156415LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x261 = -1;
	volatile uint16_t x262 = 125U;
	int64_t x264 = 15656303509LL;

	t59 = ((x261*(x262/x263))|x264);

	if (t59 != 15656303613LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x266 = -1;
	volatile int32_t t60 = INT32_MIN;

	t60 = ((x265*(x266/x267))|x268);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x269 = 31U;
	int16_t x270 = INT16_MIN;
	static int64_t x271 = -1LL;
	volatile int16_t x272 = 0;
	volatile int64_t t61 = 241561997288357934LL;

	t61 = ((x269*(x270/x271))|x272);

	if (t61 != 1015808LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x273 = 17U;
	static int32_t x274 = -1320753;
	int8_t x275 = -1;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t62 = -211;

	t62 = ((x273*(x274/x275))|x276);

	if (t62 != 22478847) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x277 = INT32_MIN;
	uint8_t x279 = 15U;
	uint8_t x280 = 15U;
	static int32_t t63 = -73659;

	t63 = ((x277*(x278/x279))|x280);

	if (t63 != 15) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = INT16_MAX;
	int64_t x282 = 207LL;
	int16_t x283 = -6882;
	int64_t t64 = 920876084138762151LL;

	t64 = ((x281*(x282/x283))|x284);

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = INT32_MAX;
	int8_t x286 = -6;
	static uint64_t x287 = UINT64_MAX;
	int16_t x288 = -3587;
	uint64_t t65 = 12931431167LLU;

	t65 = ((x285*(x286/x287))|x288);

	if (t65 != 18446744073709548029LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x289 = -1;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x289*(x290/x291))|x292);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x293 = INT32_MIN;
	static int32_t x294 = -63;
	uint8_t x295 = 118U;
	static volatile uint64_t t67 = 17365LLU;

	t67 = ((x293*(x294/x295))|x296);

	if (t67 != 2375273520420158LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x297 = UINT32_MAX;
	static int32_t x298 = 531;
	int16_t x299 = INT16_MAX;
	static int32_t x300 = 9;
	uint32_t t68 = 864071030U;

	t68 = ((x297*(x298/x299))|x300);

	if (t68 != 9U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x302 = -1LL;
	uint32_t x303 = UINT32_MAX;
	volatile int8_t x304 = -1;
	static int64_t t69 = -1929405925246355LL;

	t69 = ((x301*(x302/x303))|x304);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x305 = 39U;
	static int32_t x308 = INT32_MAX;
	volatile uint64_t t70 = 87LLU;

	t70 = ((x305*(x306/x307))|x308);

	if (t70 != 876551285506047LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x314 = INT64_MIN;
	static uint32_t x315 = 10131U;

	t71 = ((x313*(x314/x315))|x316);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = 1542U;
	int16_t x323 = INT16_MIN;
	volatile int16_t x324 = -14;
	static uint32_t t72 = 8307195U;

	t72 = ((x321*(x322/x323))|x324);

	if (t72 != 4294967282U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = -1;
	static int8_t x330 = 0;
	static int16_t x332 = 1;
	int32_t t73 = 24;

	t73 = ((x329*(x330/x331))|x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x333 = 8742378LL;
	int16_t x334 = 7450;
	uint64_t x335 = 130651164LLU;
	uint8_t x336 = UINT8_MAX;
	static volatile uint64_t t74 = 34254767LLU;

	t74 = ((x333*(x334/x335))|x336);

	if (t74 != 255LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x341 = INT16_MAX;
	int16_t x343 = INT16_MIN;
	int8_t x344 = 7;
	int32_t t75 = 1060882044;

	t75 = ((x341*(x342/x343))|x344);

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MAX;

	t76 = ((x345*(x346/x347))|x348);

	if (t76 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MAX;
	static uint32_t x352 = UINT32_MAX;

	t77 = ((x349*(x350/x351))|x352);

	if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = INT32_MIN;
	volatile int64_t x354 = 3267213014555LL;
	static volatile uint64_t x355 = 3583545710398388753LLU;
	uint32_t x356 = UINT32_MAX;
	uint64_t t78 = 2662280019978LLU;

	t78 = ((x353*(x354/x355))|x356);

	if (t78 != 4294967295LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x357 = 125U;
	int32_t x358 = -1;
	int16_t x359 = 1;
	int32_t t79 = 1997;

	t79 = ((x357*(x358/x359))|x360);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = 66534;
	uint64_t x366 = 6349LLU;
	static int64_t x368 = INT64_MIN;
	uint64_t t80 = 11593LLU;

	t80 = ((x365*(x366/x367))|x368);

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = -1;
	volatile int16_t x375 = INT16_MIN;
	int16_t x376 = -1;
	int32_t t81 = -105136255;

	t81 = ((x373*(x374/x375))|x376);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x383 = INT16_MAX;
	uint32_t x384 = 941090931U;
	uint64_t t82 = 24236725078530LLU;

	t82 = ((x381*(x382/x383))|x384);

	if (t82 != 941090931LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x385 = UINT32_MAX;
	volatile int32_t x386 = -39862;
	int16_t x387 = 1912;
	int32_t x388 = 6437129;
	uint32_t t83 = 28U;

	t83 = ((x385*(x386/x387))|x388);

	if (t83 != 6437149U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x389 = 32283U;
	int8_t x390 = INT8_MIN;
	static int8_t x391 = 1;
	int8_t x392 = INT8_MIN;

	t84 = ((x389*(x390/x391))|x392);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x393 = INT16_MIN;
	static uint64_t x394 = UINT64_MAX;
	int8_t x395 = -6;
	int32_t x396 = INT32_MAX;
	static volatile uint64_t t85 = UINT64_MAX;

	t85 = ((x393*(x394/x395))|x396);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = INT8_MAX;
	int32_t x398 = 18;
	static int16_t x399 = INT16_MIN;
	uint8_t x400 = 31U;
	int32_t t86 = 5;

	t86 = ((x397*(x398/x399))|x400);

	if (t86 != 31) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = -110;
	uint64_t x402 = 973LLU;
	volatile uint32_t x403 = 10446016U;
	static volatile uint64_t t87 = 4258390777739555LLU;

	t87 = ((x401*(x402/x403))|x404);

	if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x406 = -1;
	uint16_t x408 = UINT16_MAX;
	uint64_t t88 = 69942254443131LLU;

	t88 = ((x405*(x406/x407))|x408);

	if (t88 != 65535LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x413 = 26344122LLU;
	volatile uint16_t x414 = UINT16_MAX;
	int16_t x415 = -1;
	static int64_t x416 = -1646681LL;
	static volatile uint64_t t89 = 67119249LLU;

	t89 = ((x413*(x414/x415))|x416);

	if (t89 != 18446744073709027263LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x417 = -27;
	uint32_t x418 = 3U;
	static int16_t x419 = -1;
	static int64_t x420 = -1LL;
	static volatile int64_t t90 = 7LL;

	t90 = ((x417*(x418/x419))|x420);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x422 = INT32_MIN;
	volatile uint64_t x423 = 10LLU;
	uint16_t x424 = 2U;
	uint64_t t91 = 11178648439456188LLU;

	t91 = ((x421*(x422/x423))|x424);

	if (t91 != 3689348715528165418LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x425 = 36U;
	uint32_t x426 = UINT32_MAX;
	int32_t x427 = INT32_MAX;
	volatile uint64_t x428 = 8066169733783781989LLU;
	uint64_t t92 = 213LLU;

	t92 = ((x425*(x426/x427))|x428);

	if (t92 != 8066169733783781997LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = 32244U;
	int8_t x431 = -44;
	int64_t x432 = INT64_MIN;
	static volatile int64_t t93 = INT64_MIN;

	t93 = ((x429*(x430/x431))|x432);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = -1;
	uint32_t x434 = 134207689U;
	uint64_t x435 = 1240743459LLU;
	int64_t x436 = INT64_MAX;
	static uint64_t t94 = 9LLU;

	t94 = ((x433*(x434/x435))|x436);

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x442 = 1U;
	volatile int32_t x443 = 1308;
	int16_t x444 = -1;
	static int32_t t95 = 1;

	t95 = ((x441*(x442/x443))|x444);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MAX;

	t96 = ((x445*(x446/x447))|x448);

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = INT64_MIN;
	int16_t x451 = -1;
	int16_t x452 = -7;
	int64_t t97 = 929024519087236575LL;

	t97 = ((x449*(x450/x451))|x452);

	if (t97 != -7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MAX;
	int16_t x456 = -499;
	int32_t t98 = 9418;

	t98 = ((x453*(x454/x455))|x456);

	if (t98 != -499) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x457 = 0U;
	volatile int16_t x458 = -849;
	int8_t x459 = INT8_MIN;
	int64_t t99 = INT64_MIN;

	t99 = ((x457*(x458/x459))|x460);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

