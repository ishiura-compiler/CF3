#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
int64_t t0 = -782326547969LL;
uint16_t x7 = 38U;
static int16_t x10 = 1390;
uint64_t x12 = 8297621849965LLU;
int64_t x20 = INT64_MAX;
volatile int32_t t5 = -70543;
volatile uint16_t x27 = UINT16_MAX;
int16_t x32 = INT16_MIN;
uint64_t t7 = 2LLU;
volatile int64_t x36 = 12396431252735801LL;
volatile int32_t x48 = 0;
volatile int64_t x49 = INT64_MIN;
volatile int64_t x58 = -4340909947170262LL;
uint16_t x66 = UINT16_MAX;
volatile int8_t x69 = -7;
volatile int64_t t17 = 254081895691252LL;
uint16_t x78 = UINT16_MAX;
int16_t x85 = INT16_MIN;
static int32_t x87 = INT32_MIN;
uint8_t x90 = UINT8_MAX;
volatile int64_t x95 = INT64_MAX;
int64_t t23 = 34096677489LL;
int64_t x100 = INT64_MIN;
int8_t x102 = -1;
int16_t x103 = -813;
volatile int32_t t25 = 25;
uint32_t x109 = UINT32_MAX;
int16_t x111 = -1;
uint32_t x112 = 88974U;
static uint32_t t29 = 418285U;
uint64_t x127 = 9LLU;
uint16_t x130 = UINT16_MAX;
int64_t x135 = -3154232551402LL;
uint32_t x141 = UINT32_MAX;
int64_t x153 = -1LL;
int32_t x163 = -4379221;
static int8_t x165 = -34;
uint32_t x169 = UINT32_MAX;
uint32_t x176 = 998223U;
int16_t x177 = INT16_MIN;
uint16_t x181 = UINT16_MAX;
static uint8_t x184 = UINT8_MAX;
uint16_t x191 = UINT16_MAX;
uint64_t x195 = 97LLU;
volatile uint8_t x197 = 27U;
static int64_t x201 = -13743226367885748LL;
static int32_t x205 = -1;
int16_t x214 = INT16_MAX;
static uint16_t x215 = UINT16_MAX;
volatile int32_t t53 = -755;
int8_t x222 = INT8_MAX;
static uint64_t x224 = UINT64_MAX;
volatile int32_t t56 = -85;
int16_t x231 = INT16_MIN;
uint32_t t57 = 514409U;
int32_t x238 = INT32_MIN;
int64_t t59 = -394322057896489428LL;
static int8_t x246 = INT8_MAX;
int32_t x255 = 483;
int8_t x259 = INT8_MIN;
int64_t x261 = 8856433330917430LL;
int8_t x262 = 1;
uint64_t x268 = 7109322754932LLU;
int32_t t69 = -208094522;
static int32_t x283 = INT32_MIN;
int16_t x285 = INT16_MIN;
uint32_t x287 = 477U;
int16_t x288 = INT16_MIN;
volatile uint32_t t71 = 343218935U;
int16_t x290 = 4480;
int32_t t72 = -458562242;
uint32_t x295 = UINT32_MAX;
uint32_t x297 = 13484U;
int8_t x303 = INT8_MIN;
volatile int32_t t75 = INT32_MAX;
int16_t x305 = -3;
int8_t x322 = 0;
static volatile int64_t t79 = 22891LL;
int16_t x331 = INT16_MAX;
int16_t x334 = INT16_MIN;
static int8_t x336 = 14;
int32_t x338 = -261180608;
volatile int32_t t83 = -13354210;
static int32_t x344 = INT32_MAX;
volatile uint64_t t85 = 1186257882575356LLU;
volatile uint8_t x352 = 87U;
volatile int8_t x358 = INT8_MAX;
uint16_t x360 = 4U;
int16_t x372 = 431;
static int8_t x374 = -1;
int16_t x378 = 18;
static int64_t x379 = 1400296604401645656LL;
volatile int16_t x384 = 83;
int8_t x394 = INT8_MIN;
int64_t x395 = -349LL;
int16_t x399 = 25;
int8_t x409 = 1;


void f0(void) {
	volatile uint64_t x1 = 11758325LLU;
	int64_t x3 = INT64_MAX;
	volatile int8_t x4 = INT8_MAX;

	t0 = (((x1<x2)/x3)^x4);

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 422U;
	int8_t x6 = INT8_MIN;
	uint32_t x8 = 820U;
	volatile uint32_t t1 = 170124036U;

	t1 = (((x5<x6)/x7)^x8);

	if (t1 != 820U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 95961539915LLU;
	int64_t x11 = INT64_MAX;
	uint64_t t2 = 330032264LLU;

	t2 = (((x9<x10)/x11)^x12);

	if (t2 != 8297621849965LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 612286880U;
	int32_t x14 = INT32_MAX;
	int16_t x15 = INT16_MIN;
	volatile uint8_t x16 = UINT8_MAX;
	int32_t t3 = -106941;

	t3 = (((x13<x14)/x15)^x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 105U;
	int64_t x18 = -1LL;
	static uint32_t x19 = UINT32_MAX;
	int64_t t4 = INT64_MAX;

	t4 = (((x17<x18)/x19)^x20);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 20538U;
	uint16_t x22 = 125U;
	int8_t x23 = 61;
	static int16_t x24 = 13989;

	t5 = (((x21<x22)/x23)^x24);

	if (t5 != 13989) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 111877110842272LLU;
	int8_t x26 = INT8_MIN;
	int32_t x28 = 6;
	int32_t t6 = 19;

	t6 = (((x25<x26)/x27)^x28);

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	static volatile int64_t x30 = INT64_MIN;
	volatile uint64_t x31 = 5239LLU;

	t7 = (((x29<x30)/x31)^x32);

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = 37426LL;
	static int16_t x35 = INT16_MIN;
	int64_t t8 = 3896525455885LL;

	t8 = (((x33<x34)/x35)^x36);

	if (t8 != 12396431252735801LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 1U;
	static uint32_t x38 = UINT32_MAX;
	volatile int64_t x39 = INT64_MAX;
	int32_t x40 = 0;
	static int64_t t9 = 6827960LL;

	t9 = (((x37<x38)/x39)^x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 7306U;
	int16_t x43 = INT16_MIN;
	int8_t x44 = 1;
	int32_t t10 = -175928340;

	t10 = (((x41<x42)/x43)^x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static uint16_t x46 = UINT16_MAX;
	static int8_t x47 = INT8_MAX;
	static volatile int32_t t11 = -15668949;

	t11 = (((x45<x46)/x47)^x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = -12914630593289LL;
	static int64_t x51 = -532446628003111325LL;
	volatile int8_t x52 = -1;
	volatile int64_t t12 = -1261384090689LL;

	t12 = (((x49<x50)/x51)^x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	int16_t x55 = INT16_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t13 = 3206594;

	t13 = (((x53<x54)/x55)^x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 716U;
	uint64_t x59 = UINT64_MAX;
	static uint8_t x60 = 7U;
	uint64_t t14 = 2074844241LLU;

	t14 = (((x57<x58)/x59)^x60);

	if (t14 != 7LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -3343;
	int32_t x62 = 3;
	uint32_t x63 = 442U;
	int32_t x64 = -1;
	uint32_t t15 = UINT32_MAX;

	t15 = (((x61<x62)/x63)^x64);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 0;
	volatile int64_t x67 = 722LL;
	int32_t x68 = INT32_MAX;
	volatile int64_t t16 = -23373629762453671LL;

	t16 = (((x65<x66)/x67)^x68);

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = INT16_MIN;
	volatile uint32_t x71 = UINT32_MAX;
	int64_t x72 = 141LL;

	t17 = (((x69<x70)/x71)^x72);

	if (t17 != 141LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 7542;
	int8_t x74 = -1;
	static uint8_t x75 = UINT8_MAX;
	int32_t x76 = -57954645;
	volatile int32_t t18 = 447;

	t18 = (((x73<x74)/x75)^x76);

	if (t18 != -57954645) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int64_t x79 = INT64_MIN;
	int16_t x80 = INT16_MIN;
	int64_t t19 = -122903356788LL;

	t19 = (((x77<x78)/x79)^x80);

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 9U;
	volatile uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MIN;
	int32_t x84 = -29120992;
	int32_t t20 = 42938;

	t20 = (((x81<x82)/x83)^x84);

	if (t20 != -29120992) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x86 = 14;
	static int64_t x88 = 306000972800LL;
	volatile int64_t t21 = 1203800180LL;

	t21 = (((x85<x86)/x87)^x88);

	if (t21 != 306000972800LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	uint16_t x91 = 2827U;
	static int16_t x92 = -110;
	int32_t t22 = -9358;

	t22 = (((x89<x90)/x91)^x92);

	if (t22 != -110) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 28LL;
	int16_t x94 = -1;
	int8_t x96 = INT8_MIN;

	t23 = (((x93<x94)/x95)^x96);

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 81329875762162749LLU;
	uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	int64_t t24 = INT64_MIN;

	t24 = (((x97<x98)/x99)^x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -1;
	int16_t x104 = -230;

	t25 = (((x101<x102)/x103)^x104);

	if (t25 != -230) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -2018;
	volatile uint16_t x106 = 17U;
	volatile int8_t x107 = INT8_MAX;
	volatile uint8_t x108 = 126U;
	volatile int32_t t26 = -192048636;

	t26 = (((x105<x106)/x107)^x108);

	if (t26 != 126) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MIN;
	volatile uint32_t t27 = 3590U;

	t27 = (((x109<x110)/x111)^x112);

	if (t27 != 88974U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	static int8_t x114 = INT8_MIN;
	volatile int32_t x115 = -154;
	int8_t x116 = -4;
	volatile int32_t t28 = -9;

	t28 = (((x113<x114)/x115)^x116);

	if (t28 != -4) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = 0;
	volatile uint32_t x118 = 92U;
	static uint32_t x119 = 385U;
	int8_t x120 = 0;

	t29 = (((x117<x118)/x119)^x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 6154U;
	uint64_t x122 = 150705189816043705LLU;
	volatile int64_t x123 = INT64_MAX;
	uint32_t x124 = 229U;
	volatile int64_t t30 = -580LL;

	t30 = (((x121<x122)/x123)^x124);

	if (t30 != 229LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 5U;
	int8_t x126 = 0;
	int32_t x128 = INT32_MAX;
	static volatile uint64_t t31 = 64181148408LLU;

	t31 = (((x125<x126)/x127)^x128);

	if (t31 != 2147483647LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MAX;
	static int16_t x131 = INT16_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -12884;

	t32 = (((x129<x130)/x131)^x132);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -2475;
	static int8_t x134 = 0;
	static int8_t x136 = -1;
	volatile int64_t t33 = 35952981906LL;

	t33 = (((x133<x134)/x135)^x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	volatile uint16_t x138 = 32638U;
	static volatile int16_t x139 = -1;
	uint16_t x140 = 485U;
	static volatile int32_t t34 = -426253889;

	t34 = (((x137<x138)/x139)^x140);

	if (t34 != -486) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = -1015037069;

	t35 = (((x141<x142)/x143)^x144);

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	volatile int32_t x146 = INT32_MIN;
	int8_t x147 = -39;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

	t36 = (((x145<x146)/x147)^x148);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	static int64_t x150 = 58056742645LL;
	int64_t x151 = -1LL;
	int64_t x152 = INT64_MIN;
	static int64_t t37 = INT64_MAX;

	t37 = (((x149<x150)/x151)^x152);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x154 = 1U;
	int8_t x155 = 1;
	int64_t x156 = -1LL;
	static int64_t t38 = 25967766216710853LL;

	t38 = (((x153<x154)/x155)^x156);

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	uint32_t x158 = 89U;
	volatile int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -2157;

	t39 = (((x157<x158)/x159)^x160);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	volatile int8_t x162 = INT8_MAX;
	static volatile uint8_t x164 = 13U;
	static volatile int32_t t40 = -11694631;

	t40 = (((x161<x162)/x163)^x164);

	if (t40 != 13) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x166 = INT32_MIN;
	uint16_t x167 = 7418U;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (((x165<x166)/x167)^x168);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = UINT8_MAX;
	int64_t x171 = -3LL;
	int16_t x172 = -1;
	int64_t t42 = -282471633183850081LL;

	t42 = (((x169<x170)/x171)^x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 19;
	uint16_t x174 = 265U;
	uint32_t x175 = UINT32_MAX;
	volatile uint32_t t43 = 728700626U;

	t43 = (((x173<x174)/x175)^x176);

	if (t43 != 998223U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = 10774U;
	static int64_t x179 = -1LL;
	volatile int32_t x180 = 253;
	volatile int64_t t44 = 619LL;

	t44 = (((x177<x178)/x179)^x180);

	if (t44 != -254LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x182 = 105U;
	int16_t x183 = -53;
	int32_t t45 = -1185083;

	t45 = (((x181<x182)/x183)^x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	static uint64_t x186 = 236418444671038LLU;
	int32_t x187 = -21;
	static volatile uint64_t x188 = 49775775276LLU;
	volatile uint64_t t46 = 37LLU;

	t46 = (((x185<x186)/x187)^x188);

	if (t46 != 49775775276LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int64_t x190 = INT64_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t47 = 3317;

	t47 = (((x189<x190)/x191)^x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = 3LL;
	uint8_t x194 = 4U;
	int64_t x196 = -1LL;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (((x193<x194)/x195)^x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x198 = -1;
	int64_t x199 = -1LL;
	uint64_t x200 = 493989141892LLU;
	volatile uint64_t t49 = 230397269803LLU;

	t49 = (((x197<x198)/x199)^x200);

	if (t49 != 493989141892LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x202 = UINT64_MAX;
	static int64_t x203 = INT64_MAX;
	static uint64_t x204 = 7795LLU;
	volatile uint64_t t50 = 984LLU;

	t50 = (((x201<x202)/x203)^x204);

	if (t50 != 7795LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = -1LL;
	int32_t x207 = -9;
	volatile int32_t x208 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = (((x205<x206)/x207)^x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	static int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MAX;
	int32_t x212 = INT32_MIN;
	static volatile int32_t t52 = INT32_MIN;

	t52 = (((x209<x210)/x211)^x212);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	uint16_t x216 = 1U;

	t53 = (((x213<x214)/x215)^x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MAX;
	int8_t x218 = -1;
	volatile int64_t x219 = INT64_MIN;
	uint64_t x220 = 1029763245810LLU;
	static volatile uint64_t t54 = 719555640912LLU;

	t54 = (((x217<x218)/x219)^x220);

	if (t54 != 1029763245810LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = 15867;
	volatile int16_t x223 = -1341;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (((x221<x222)/x223)^x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 130074474265LLU;
	int32_t x226 = INT32_MIN;
	int8_t x227 = 1;
	int16_t x228 = -1;

	t56 = (((x225<x226)/x227)^x228);

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MIN;
	volatile uint32_t x232 = 8U;

	t57 = (((x229<x230)/x231)^x232);

	if (t57 != 8U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	int32_t x234 = INT32_MIN;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = -3697;
	volatile uint32_t t58 = 23837U;

	t58 = (((x233<x234)/x235)^x236);

	if (t58 != 4294963599U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x239 = -1LL;
	int8_t x240 = -10;

	t59 = (((x237<x238)/x239)^x240);

	if (t59 != -10LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 0U;
	int32_t x242 = INT32_MAX;
	static int64_t x243 = INT64_MIN;
	volatile int64_t x244 = -1LL;
	volatile int64_t t60 = 3164LL;

	t60 = (((x241<x242)/x243)^x244);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -114;
	uint8_t x247 = UINT8_MAX;
	volatile int64_t x248 = INT64_MIN;
	static volatile int64_t t61 = INT64_MIN;

	t61 = (((x245<x246)/x247)^x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MAX;
	volatile int16_t x250 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	int32_t x252 = INT32_MIN;
	int64_t t62 = 1LL;

	t62 = (((x249<x250)/x251)^x252);

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int32_t x254 = 522757;
	int8_t x256 = 0;
	volatile int32_t t63 = -782924213;

	t63 = (((x253<x254)/x255)^x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 117LL;
	int16_t x258 = INT16_MAX;
	uint16_t x260 = 1083U;
	int32_t t64 = -59;

	t64 = (((x257<x258)/x259)^x260);

	if (t64 != 1083) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x263 = 29U;
	volatile uint32_t x264 = 17U;
	static volatile uint32_t t65 = 12125U;

	t65 = (((x261<x262)/x263)^x264);

	if (t65 != 17U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 11;
	int8_t x266 = -1;
	uint8_t x267 = 87U;
	static uint64_t t66 = 1055865744745LLU;

	t66 = (((x265<x266)/x267)^x268);

	if (t66 != 7109322754932LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 9U;
	uint32_t x270 = 123857U;
	uint32_t x271 = 31289483U;
	static int8_t x272 = INT8_MAX;
	uint32_t t67 = 2U;

	t67 = (((x269<x270)/x271)^x272);

	if (t67 != 127U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -91988407585LL;
	static uint32_t x274 = 7U;
	int8_t x275 = INT8_MAX;
	static int16_t x276 = INT16_MAX;
	int32_t t68 = 87;

	t68 = (((x273<x274)/x275)^x276);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = -1;
	uint32_t x278 = 5U;
	static int32_t x279 = INT32_MAX;
	static int16_t x280 = 1243;

	t69 = (((x277<x278)/x279)^x280);

	if (t69 != 1243) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 347U;
	int16_t x282 = -1;
	static uint32_t x284 = 5U;
	uint32_t t70 = 727610472U;

	t70 = (((x281<x282)/x283)^x284);

	if (t70 != 5U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = -1LL;

	t71 = (((x285<x286)/x287)^x288);

	if (t71 != 4294934528U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 78U;
	int16_t x291 = INT16_MAX;
	static uint8_t x292 = 27U;

	t72 = (((x289<x290)/x291)^x292);

	if (t72 != 27) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 347658192LLU;
	int32_t x294 = INT32_MAX;
	static int16_t x296 = INT16_MAX;
	static uint32_t t73 = 7464U;

	t73 = (((x293<x294)/x295)^x296);

	if (t73 != 32767U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x298 = INT32_MAX;
	int32_t x299 = 94;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (((x297<x298)/x299)^x300);

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 115841869U;
	int64_t x302 = -1LL;
	int32_t x304 = INT32_MAX;

	t75 = (((x301<x302)/x303)^x304);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = -1;
	volatile uint16_t x307 = 1082U;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t76 = INT32_MIN;

	t76 = (((x305<x306)/x307)^x308);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = 1620U;
	volatile uint32_t x316 = 11679433U;
	static volatile uint32_t t77 = 1U;

	t77 = (((x313<x314)/x315)^x316);

	if (t77 != 11679433U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 45053234U;
	static int8_t x318 = INT8_MIN;
	static int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t78 = INT64_MIN;

	t78 = (((x317<x318)/x319)^x320);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = 314U;
	int8_t x323 = -17;
	int64_t x324 = -1LL;

	t79 = (((x321<x322)/x323)^x324);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x325 = 11U;
	volatile uint16_t x326 = UINT16_MAX;
	volatile int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MAX;
	volatile int64_t t80 = 1683029300274693LL;

	t80 = (((x325<x326)/x327)^x328);

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t81 = -697544668;

	t81 = (((x329<x330)/x331)^x332);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x333 = -197;
	uint64_t x335 = 12539673638LLU;
	uint64_t t82 = 5057787093687177LLU;

	t82 = (((x333<x334)/x335)^x336);

	if (t82 != 14LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x337 = 1168U;
	uint16_t x339 = UINT16_MAX;
	static volatile uint8_t x340 = UINT8_MAX;

	t83 = (((x337<x338)/x339)^x340);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x341 = INT32_MAX;
	volatile int8_t x342 = -1;
	volatile uint64_t x343 = 1LLU;
	uint64_t t84 = 1181832002982LLU;

	t84 = (((x341<x342)/x343)^x344);

	if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MAX;
	uint16_t x346 = 59U;
	uint64_t x347 = 419LLU;
	uint16_t x348 = UINT16_MAX;

	t85 = (((x345<x346)/x347)^x348);

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MAX;
	static int64_t x350 = 15LL;
	volatile int8_t x351 = 1;
	int32_t t86 = 115674215;

	t86 = (((x349<x350)/x351)^x352);

	if (t86 != 87) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x353 = 1;
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = 7886U;
	static uint32_t t87 = 40U;

	t87 = (((x353<x354)/x355)^x356);

	if (t87 != 7886U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = 120006868191LLU;
	static volatile int16_t x359 = -2968;
	int32_t t88 = -16124966;

	t88 = (((x357<x358)/x359)^x360);

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MAX;
	int8_t x366 = INT8_MIN;
	int8_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	int32_t t89 = 156831145;

	t89 = (((x365<x366)/x367)^x368);

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x369 = 0U;
	uint16_t x370 = UINT16_MAX;
	int8_t x371 = -1;
	volatile int32_t t90 = -45774864;

	t90 = (((x369<x370)/x371)^x372);

	if (t90 != -432) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x373 = -1;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = -60;
	volatile uint32_t t91 = 4000315U;

	t91 = (((x373<x374)/x375)^x376);

	if (t91 != 4294967236U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = -2356LL;
	int8_t x380 = INT8_MAX;
	volatile int64_t t92 = 1385LL;

	t92 = (((x377<x378)/x379)^x380);

	if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x381 = INT8_MAX;
	static int64_t x382 = 742706806773838553LL;
	static volatile uint8_t x383 = 3U;
	int32_t t93 = 995063;

	t93 = (((x381<x382)/x383)^x384);

	if (t93 != 83) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = 29;
	int64_t x387 = INT64_MIN;
	uint64_t x388 = UINT64_MAX;
	uint64_t t94 = UINT64_MAX;

	t94 = (((x385<x386)/x387)^x388);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x389 = 13;
	int16_t x390 = -1;
	int8_t x391 = -2;
	int32_t x392 = -4323432;
	volatile int32_t t95 = -5036387;

	t95 = (((x389<x390)/x391)^x392);

	if (t95 != -4323432) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x393 = 1474U;
	static int32_t x396 = 17472847;
	volatile int64_t t96 = 130393LL;

	t96 = (((x393<x394)/x395)^x396);

	if (t96 != 17472847LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = INT8_MIN;
	static uint8_t x398 = 17U;
	int64_t x400 = -23307LL;
	int64_t t97 = 16191LL;

	t97 = (((x397<x398)/x399)^x400);

	if (t97 != -23307LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MAX;
	uint64_t x403 = 1043337912441LLU;
	volatile int64_t x404 = 848198337223067427LL;
	volatile uint64_t t98 = 34359360593920LLU;

	t98 = (((x401<x402)/x403)^x404);

	if (t98 != 848198337223067427LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x410 = UINT32_MAX;
	static uint64_t x411 = 256545199LLU;
	int8_t x412 = INT8_MAX;
	volatile uint64_t t99 = 3947927LLU;

	t99 = (((x409<x410)/x411)^x412);

	if (t99 != 127LLU) { NG(); } else { ; }
	
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

