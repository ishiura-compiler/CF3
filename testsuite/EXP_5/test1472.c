#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -155;
static int16_t x11 = 247;
volatile int64_t x15 = -162411785571LL;
int32_t x20 = -8;
volatile int32_t t4 = -16;
static uint64_t x21 = 1015653471433LLU;
int64_t t6 = -23LL;
static int32_t x30 = -32624;
static int64_t x32 = INT64_MIN;
int64_t t7 = -80557236LL;
int32_t x37 = INT32_MAX;
int16_t x40 = -1;
volatile int32_t t9 = 18408604;
int8_t x45 = INT8_MIN;
volatile int32_t t11 = 222;
uint8_t x50 = UINT8_MAX;
int16_t x54 = -1;
volatile int64_t x55 = INT64_MAX;
int32_t t13 = INT32_MIN;
volatile int32_t x67 = -468258;
int16_t x71 = -12;
static int16_t x77 = 455;
uint64_t x79 = 18102476609LLU;
uint16_t x80 = 11U;
static volatile int32_t t19 = -416114696;
uint32_t x85 = 2027U;
static int64_t x90 = INT64_MIN;
volatile int32_t t23 = 68;
uint64_t x99 = UINT64_MAX;
int8_t x106 = INT8_MIN;
uint8_t x107 = 5U;
volatile int16_t x111 = INT16_MIN;
volatile int64_t x114 = INT64_MIN;
volatile int32_t t29 = -43;
int64_t x124 = INT64_MAX;
static int8_t x126 = INT8_MAX;
int32_t x132 = INT32_MIN;
uint8_t x140 = UINT8_MAX;
volatile int64_t t35 = 8030144601LL;
volatile int32_t t38 = 223;
int32_t x157 = 7395;
int32_t t39 = -32851650;
int64_t x161 = INT64_MAX;
volatile int8_t x163 = INT8_MIN;
static uint8_t x165 = 3U;
static int8_t x167 = INT8_MIN;
int16_t x170 = -1642;
uint64_t x175 = 2008527179LLU;
int8_t x177 = INT8_MIN;
volatile int16_t x179 = -1;
int16_t x180 = INT16_MAX;
int8_t x183 = -1;
uint16_t x184 = 5U;
int8_t x185 = 1;
volatile int64_t x189 = INT64_MIN;
int32_t x196 = INT32_MIN;
volatile int16_t x198 = -1;
int32_t t49 = 99178472;
volatile int8_t x202 = -22;
uint16_t x205 = 2365U;
uint16_t x207 = 52U;
static uint16_t x208 = 0U;
int32_t t51 = 169850;
int16_t x209 = INT16_MIN;
int32_t x211 = 814977;
uint64_t x212 = 61967202LLU;
volatile uint32_t t53 = 43955U;
volatile int16_t x217 = INT16_MIN;
int32_t x224 = INT32_MIN;
int32_t t56 = -3411;
int32_t x234 = -1;
static volatile int32_t t60 = 1;
int32_t x246 = 3;
int32_t x247 = 86513218;
int8_t x264 = INT8_MAX;
static int64_t t65 = INT64_MIN;
volatile int16_t x267 = INT16_MIN;
static volatile int64_t x269 = -1LL;
int8_t x272 = 5;
volatile int64_t t67 = 2573781LL;
volatile int32_t t70 = 1794740;
volatile uint32_t t72 = 275U;
int32_t x296 = INT32_MAX;
static int32_t t73 = -993273;
uint8_t x301 = 73U;
static int16_t x308 = INT16_MIN;
uint16_t x311 = 5U;
int32_t t77 = -3;
volatile uint32_t x315 = 40U;
int64_t x317 = -591725LL;
int8_t x321 = 27;
uint32_t x322 = 80U;
uint16_t x326 = 11U;
volatile int8_t x328 = INT8_MAX;
int8_t x333 = INT8_MIN;
int32_t x364 = INT32_MAX;
int64_t t90 = INT64_MIN;
static volatile int64_t x370 = 3661092803509LL;
int64_t x374 = INT64_MAX;
static volatile int32_t t93 = -51;
int32_t x391 = -882414;
int32_t t97 = -3332;
volatile int32_t x393 = 675333;
int8_t x396 = -1;
volatile int32_t t98 = 103876816;
int64_t x397 = -1LL;
int64_t t99 = 6834896252LL;


void f0(void) {
	int16_t x2 = -250;
	uint16_t x3 = 2U;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 12938369;

	t0 = (x1*((x2<x3)<=x4));

	if (t0 != -155) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	int64_t x7 = 1LL;
	uint16_t x8 = 0U;
	static int32_t t1 = -1779;

	t1 = (x5*((x6<x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = -1LL;
	uint8_t x10 = UINT8_MAX;
	int32_t x12 = -1;
	static int64_t t2 = 17122669634111982LL;

	t2 = (x9*((x10<x11)<=x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 55;
	static uint16_t x14 = 20039U;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 15;

	t3 = (x13*((x14<x15)<=x16));

	if (t3 != 55) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	static int64_t x18 = INT64_MIN;
	int64_t x19 = -245456LL;

	t4 = (x17*((x18<x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MAX;
	volatile int32_t x23 = INT32_MIN;
	static int32_t x24 = -1;
	uint64_t t5 = 12LLU;

	t5 = (x21*((x22<x23)<=x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = -1885120668226LL;
	volatile uint64_t x26 = 154220998557544LLU;
	int16_t x27 = INT16_MIN;
	uint64_t x28 = 497097441826438427LLU;

	t6 = (x25*((x26<x27)<=x28));

	if (t6 != -1885120668226LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint8_t x31 = 0U;

	t7 = (x29*((x30<x31)<=x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = INT32_MAX;
	volatile int16_t x35 = INT16_MIN;
	uint32_t x36 = 431U;
	volatile int32_t t8 = INT32_MIN;

	t8 = (x33*((x34<x35)<=x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 7U;
	volatile int32_t x39 = INT32_MAX;

	t9 = (x37*((x38<x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 8077;
	int64_t x42 = -1LL;
	int32_t x43 = INT32_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -23685;

	t10 = (x41*((x42<x43)<=x44));

	if (t10 != 8077) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	volatile uint8_t x47 = 11U;
	volatile uint8_t x48 = UINT8_MAX;

	t11 = (x45*((x46<x47)<=x48));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile int32_t x51 = -1;
	uint16_t x52 = 1U;
	int32_t t12 = -26717;

	t12 = (x49*((x50<x51)<=x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static uint64_t x56 = 2037178LLU;

	t13 = (x53*((x54<x55)<=x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	uint16_t x58 = 155U;
	static int32_t x59 = 407217346;
	int8_t x60 = -3;
	volatile int32_t t14 = 577973;

	t14 = (x57*((x58<x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 53;
	int8_t x62 = INT8_MIN;
	int32_t x63 = -1;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -8970373;

	t15 = (x61*((x62<x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MAX;
	uint64_t x68 = 1758407518775233800LLU;
	int32_t t16 = INT32_MIN;

	t16 = (x65*((x66<x67)<=x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 3574733LLU;
	uint16_t x70 = 20U;
	int64_t x72 = -1LL;
	uint64_t t17 = 216915336599751034LLU;

	t17 = (x69*((x70<x71)<=x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int32_t x74 = INT32_MIN;
	int16_t x75 = -1;
	static int64_t x76 = INT64_MIN;
	int32_t t18 = -2320;

	t18 = (x73*((x74<x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x78 = 62U;

	t19 = (x77*((x78<x79)<=x80));

	if (t19 != 455) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = INT16_MIN;
	int8_t x82 = 1;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = -1200;
	int32_t t20 = 111105347;

	t20 = (x81*((x82<x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = -1;
	static uint64_t x87 = 653124574022593LLU;
	int64_t x88 = INT64_MIN;
	uint32_t t21 = 415725U;

	t21 = (x85*((x86<x87)<=x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = 121709499;
	int64_t x91 = INT64_MIN;
	int32_t x92 = -107;
	static int32_t t22 = -29563010;

	t22 = (x89*((x90<x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = -16;
	uint16_t x96 = UINT16_MAX;

	t23 = (x93*((x94<x95)<=x96));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 0U;
	uint64_t x98 = UINT64_MAX;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 1;

	t24 = (x97*((x98<x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -1;
	uint16_t x102 = 54U;
	volatile int64_t x103 = INT64_MAX;
	int16_t x104 = -1;
	static int32_t t25 = 2936728;

	t25 = (x101*((x102<x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 1U;
	uint32_t x108 = 5U;
	int32_t t26 = 523509479;

	t26 = (x105*((x106<x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 4U;
	static uint16_t x110 = 39U;
	volatile int32_t x112 = 6971;
	int32_t t27 = 1597;

	t27 = (x109*((x110<x111)<=x112));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	static int64_t x115 = INT64_MIN;
	int64_t x116 = -1LL;
	int32_t t28 = -88906;

	t28 = (x113*((x114<x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 34305430;
	int8_t x118 = -1;
	int64_t x119 = INT64_MAX;
	uint64_t x120 = 52152649LLU;

	t29 = (x117*((x118<x119)<=x120));

	if (t29 != 34305430) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	uint8_t x122 = 71U;
	uint32_t x123 = 44620U;
	static int64_t t30 = INT64_MIN;

	t30 = (x121*((x122<x123)<=x124));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MIN;
	int64_t x127 = INT64_MAX;
	uint16_t x128 = 1737U;
	volatile int32_t t31 = 1855;

	t31 = (x125*((x126<x127)<=x128));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MAX;
	static int32_t x131 = INT32_MAX;
	volatile int32_t t32 = 1;

	t32 = (x129*((x130<x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MAX;
	static volatile uint64_t x135 = 245249097878520684LLU;
	static int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 740200;

	t33 = (x133*((x134<x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	int32_t x138 = -1;
	int32_t x139 = -1520;
	static int32_t t34 = 911128;

	t34 = (x137*((x138<x139)<=x140));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	static int16_t x142 = 2705;
	static uint32_t x143 = 1771U;
	int8_t x144 = INT8_MIN;

	t35 = (x141*((x142<x143)<=x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 0U;
	int32_t x146 = -14974;
	int32_t x147 = -1;
	uint64_t x148 = 1703794193883LLU;
	int32_t t36 = -119344777;

	t36 = (x145*((x146<x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 36;
	int32_t x150 = -1;
	int64_t x151 = -108928058431480774LL;
	uint64_t x152 = 1LLU;
	static int32_t t37 = -120150;

	t37 = (x149*((x150<x151)<=x152));

	if (t37 != 36) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = 13;
	static int8_t x154 = INT8_MAX;
	int32_t x155 = -1;
	int64_t x156 = -1947388323LL;

	t38 = (x153*((x154<x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = -1285;
	uint8_t x160 = UINT8_MAX;

	t39 = (x157*((x158<x159)<=x160));

	if (t39 != 7395) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = UINT8_MAX;
	int16_t x164 = INT16_MAX;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x161*((x162<x163)<=x164));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x166 = INT16_MAX;
	volatile int8_t x168 = 0;
	static int32_t t41 = 1;

	t41 = (x165*((x166<x167)<=x168));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 119;
	int8_t x171 = 0;
	int16_t x172 = -1;
	int32_t t42 = -34675277;

	t42 = (x169*((x170<x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	uint64_t x176 = 9LLU;
	volatile int32_t t43 = 1;

	t43 = (x173*((x174<x175)<=x176));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	volatile int32_t t44 = 90;

	t44 = (x177*((x178<x179)<=x180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = 25;
	int64_t x182 = -14396748424LL;
	volatile int32_t t45 = -110348;

	t45 = (x181*((x182<x183)<=x184));

	if (t45 != 25) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = 6967886U;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = 1U;
	int32_t t46 = -3390445;

	t46 = (x185*((x186<x187)<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x190 = UINT32_MAX;
	int64_t x191 = -3310LL;
	static uint32_t x192 = 332828734U;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x189*((x190<x191)<=x192));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -1;
	static volatile uint32_t x194 = UINT32_MAX;
	volatile int32_t x195 = 6572;
	volatile int32_t t48 = -226;

	t48 = (x193*((x194<x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static uint64_t x199 = UINT64_MAX;
	int64_t x200 = INT64_MIN;

	t49 = (x197*((x198<x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int16_t x203 = INT16_MAX;
	uint64_t x204 = UINT64_MAX;
	static volatile int32_t t50 = 778384956;

	t50 = (x201*((x202<x203)<=x204));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x206 = UINT64_MAX;

	t51 = (x205*((x206<x207)<=x208));

	if (t51 != 2365) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = 12;
	int32_t t52 = -1967562;

	t52 = (x209*((x210<x211)<=x212));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = 39672U;
	uint16_t x214 = UINT16_MAX;
	volatile int32_t x215 = INT32_MIN;
	static uint8_t x216 = UINT8_MAX;

	t53 = (x213*((x214<x215)<=x216));

	if (t53 != 39672U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x218 = -1017776048125919LL;
	static uint8_t x219 = 0U;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t54 = -5187;

	t54 = (x217*((x218<x219)<=x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int8_t x222 = -13;
	int32_t x223 = -1034950449;
	int64_t t55 = -48LL;

	t55 = (x221*((x222<x223)<=x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 3243753;
	static volatile uint32_t x226 = 658U;
	volatile int8_t x227 = -1;
	int16_t x228 = INT16_MAX;

	t56 = (x225*((x226<x227)<=x228));

	if (t56 != 3243753) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 119182144LLU;
	int64_t x230 = -2LL;
	uint8_t x231 = 94U;
	int64_t x232 = 3462LL;
	static volatile uint64_t t57 = 1027679953213599965LLU;

	t57 = (x229*((x230<x231)<=x232));

	if (t57 != 119182144LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x233 = INT32_MIN;
	volatile int64_t x235 = INT64_MAX;
	int32_t x236 = -1;
	volatile int32_t t58 = -8;

	t58 = (x233*((x234<x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = 37U;
	int8_t x238 = -1;
	int8_t x239 = 9;
	volatile int64_t x240 = -1LL;
	volatile int32_t t59 = 2172;

	t59 = (x237*((x238<x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 1;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 1U;
	uint32_t x244 = 7243U;

	t60 = (x241*((x242<x243)<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 27U;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 15387;

	t61 = (x245*((x246<x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x249 = -1;
	uint64_t x250 = 2263311LLU;
	volatile uint16_t x251 = 15U;
	int16_t x252 = 3521;
	volatile int32_t t62 = -885283034;

	t62 = (x249*((x250<x251)<=x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 1194693102375166228LLU;
	static uint16_t x254 = 1U;
	volatile int16_t x255 = -1;
	int16_t x256 = 1;
	volatile uint64_t t63 = 483557205954416564LLU;

	t63 = (x253*((x254<x255)<=x256));

	if (t63 != 1194693102375166228LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	uint32_t x258 = 241U;
	static volatile int32_t x259 = -1;
	int16_t x260 = 36;
	int32_t t64 = -13671720;

	t64 = (x257*((x258<x259)<=x260));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = -1;
	int8_t x263 = -3;

	t65 = (x261*((x262<x263)<=x264));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MAX;
	static int16_t x268 = 52;
	volatile int32_t t66 = 164;

	t66 = (x265*((x266<x267)<=x268));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = -495679793282180LL;
	static uint64_t x271 = 20058LLU;

	t67 = (x269*((x270<x271)<=x272));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = 204LLU;
	uint16_t x274 = UINT16_MAX;
	int64_t x275 = 906941LL;
	int32_t x276 = 255;
	uint64_t t68 = 394116259366921LLU;

	t68 = (x273*((x274<x275)<=x276));

	if (t68 != 204LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 28U;
	int32_t x280 = 9285;
	volatile int64_t t69 = 29397LL;

	t69 = (x277*((x278<x279)<=x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 0U;
	int32_t x282 = -1;
	int8_t x283 = -1;
	uint32_t x284 = 64092U;

	t70 = (x281*((x282<x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = -1LL;
	uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -435754;

	t71 = (x285*((x286<x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 995510482U;
	int64_t x290 = -32022127265LL;
	static uint8_t x291 = 26U;
	uint8_t x292 = 3U;

	t72 = (x289*((x290<x291)<=x292));

	if (t72 != 995510482U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -28;
	int16_t x294 = -99;
	static int32_t x295 = INT32_MIN;

	t73 = (x293*((x294<x295)<=x296));

	if (t73 != -28) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 1U;
	static uint32_t x298 = UINT32_MAX;
	volatile int8_t x299 = -1;
	int16_t x300 = -1;
	volatile uint32_t t74 = 7122U;

	t74 = (x297*((x298<x299)<=x300));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x302 = -64;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -21;

	t75 = (x301*((x302<x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -33LL;
	static int32_t x306 = -82626;
	int32_t x307 = -1;
	volatile int64_t t76 = 1320LL;

	t76 = (x305*((x306<x307)<=x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -4;
	uint64_t x310 = UINT64_MAX;
	static int8_t x312 = 1;

	t77 = (x309*((x310<x311)<=x312));

	if (t77 != -4) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = -1;
	uint8_t x314 = UINT8_MAX;
	uint64_t x316 = 466160784910695089LLU;
	static int32_t t78 = 1438307;

	t78 = (x313*((x314<x315)<=x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = 13440786;
	int16_t x319 = 247;
	int8_t x320 = INT8_MIN;
	volatile int64_t t79 = 35332377807210411LL;

	t79 = (x317*((x318<x319)<=x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = INT8_MIN;
	volatile int16_t x324 = INT16_MIN;
	int32_t t80 = -197705;

	t80 = (x321*((x322<x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	int64_t x327 = -1199LL;
	volatile int32_t t81 = -149681;

	t81 = (x325*((x326<x327)<=x328));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 1U;
	volatile int32_t x330 = -48876303;
	volatile int8_t x331 = INT8_MIN;
	static int64_t x332 = INT64_MIN;
	uint32_t t82 = 129786193U;

	t82 = (x329*((x330<x331)<=x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x334 = -1LL;
	volatile int64_t x335 = INT64_MIN;
	volatile uint8_t x336 = 118U;
	int32_t t83 = -67897530;

	t83 = (x333*((x334<x335)<=x336));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = UINT32_MAX;
	static int64_t x338 = 10949066304180804LL;
	static uint16_t x339 = 8296U;
	static int32_t x340 = -18536465;
	uint32_t t84 = 40U;

	t84 = (x337*((x338<x339)<=x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = 6888738;
	static int64_t x342 = INT64_MAX;
	int8_t x343 = INT8_MIN;
	volatile int16_t x344 = INT16_MIN;
	static volatile int32_t t85 = 25968;

	t85 = (x341*((x342<x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 765216U;
	uint16_t x346 = 14472U;
	int16_t x347 = INT16_MIN;
	volatile int8_t x348 = 1;
	uint32_t t86 = 45202636U;

	t86 = (x345*((x346<x347)<=x348));

	if (t86 != 765216U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -116;
	int32_t x350 = INT32_MAX;
	uint32_t x351 = 629294U;
	static int64_t x352 = INT64_MIN;
	static int32_t t87 = -8;

	t87 = (x349*((x350<x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 104;
	int64_t x354 = INT64_MIN;
	static int8_t x355 = INT8_MAX;
	uint16_t x356 = 9434U;
	volatile int32_t t88 = -3;

	t88 = (x353*((x354<x355)<=x356));

	if (t88 != 104) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int64_t x358 = INT64_MIN;
	volatile int8_t x359 = 5;
	static int32_t x360 = 231938541;
	volatile int32_t t89 = 1;

	t89 = (x357*((x358<x359)<=x360));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	int8_t x362 = -11;
	uint8_t x363 = UINT8_MAX;

	t90 = (x361*((x362<x363)<=x364));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MAX;
	int8_t x367 = INT8_MIN;
	static volatile uint16_t x368 = 4U;
	int32_t t91 = 54971;

	t91 = (x365*((x366<x367)<=x368));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	uint16_t x371 = UINT16_MAX;
	uint32_t x372 = 36682U;
	static int32_t t92 = 0;

	t92 = (x369*((x370<x371)<=x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = -5;
	static volatile int64_t x375 = 245871785762372LL;
	volatile uint64_t x376 = 1102595154LLU;

	t93 = (x373*((x374<x375)<=x376));

	if (t93 != -5) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	volatile uint32_t x379 = UINT32_MAX;
	uint16_t x380 = 4U;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x377*((x378<x379)<=x380));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 21245U;
	volatile int32_t x382 = 2;
	volatile int8_t x383 = -1;
	int8_t x384 = 2;
	int32_t t95 = 473;

	t95 = (x381*((x382<x383)<=x384));

	if (t95 != 21245) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	static int16_t x386 = -1;
	int64_t x387 = INT64_MAX;
	uint32_t x388 = UINT32_MAX;
	int32_t t96 = INT32_MIN;

	t96 = (x385*((x386<x387)<=x388));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = 0U;
	volatile uint8_t x390 = 0U;
	int32_t x392 = -1;

	t97 = (x389*((x390<x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = 26U;
	int8_t x395 = INT8_MIN;

	t98 = (x393*((x394<x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x398 = 8;
	uint16_t x399 = 1U;
	uint32_t x400 = 8482312U;

	t99 = (x397*((x398<x399)<=x400));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

