#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 45U;
int64_t x6 = -130877731LL;
uint64_t x9 = 1254418LLU;
uint64_t t3 = UINT64_MAX;
static volatile int64_t t5 = 2000499218557065061LL;
int8_t x30 = INT8_MIN;
static int32_t x31 = INT32_MIN;
int32_t x32 = -1;
int16_t x33 = INT16_MIN;
int64_t x40 = -38618967145LL;
volatile int32_t t10 = -77804730;
int16_t x59 = INT16_MAX;
volatile int32_t t13 = INT32_MIN;
int64_t x65 = INT64_MIN;
static int32_t t15 = 20;
int64_t x69 = INT64_MAX;
uint32_t x72 = 156U;
volatile int16_t x81 = -1;
uint8_t x88 = 123U;
volatile int32_t t20 = 1;
uint8_t x91 = 1U;
volatile int64_t x96 = -1LL;
volatile uint32_t t23 = 205U;
uint64_t x101 = UINT64_MAX;
int16_t x102 = -1202;
int8_t x112 = -1;
static int32_t t27 = 0;
static int8_t x117 = 27;
uint32_t x121 = UINT32_MAX;
volatile uint16_t x123 = UINT16_MAX;
volatile uint16_t x125 = 2U;
volatile int32_t x127 = INT32_MAX;
int64_t x128 = INT64_MAX;
uint8_t x131 = 2U;
int32_t x135 = INT32_MIN;
volatile int32_t t32 = -23024;
int64_t x147 = INT64_MIN;
int16_t x154 = -1;
uint8_t x156 = 5U;
static volatile int8_t x163 = 1;
static uint16_t x164 = 4U;
int16_t x165 = INT16_MIN;
static int32_t x173 = INT32_MIN;
volatile int64_t x174 = 47LL;
int8_t x176 = -48;
uint64_t x177 = UINT64_MAX;
int32_t t44 = 128322;
static int16_t x185 = INT16_MIN;
int64_t t46 = 20LL;
int32_t t49 = 5;
int64_t x206 = INT64_MIN;
volatile int32_t t51 = 52;
uint16_t x217 = UINT16_MAX;
uint16_t x221 = 429U;
int8_t x223 = 1;
int8_t x229 = INT8_MIN;
static int16_t x232 = INT16_MAX;
volatile uint32_t t56 = 1834U;
int32_t x239 = -7122120;
int32_t t58 = 2545274;
int16_t x246 = INT16_MAX;
int8_t x251 = INT8_MIN;
volatile int32_t x252 = 0;
volatile uint64_t x253 = 118LLU;
uint64_t x257 = 4434642510308LLU;
int16_t x269 = INT16_MIN;
volatile uint32_t t65 = UINT32_MAX;
int16_t x274 = -23;
int8_t x276 = -1;
int32_t t66 = 13;
int32_t x278 = INT32_MIN;
volatile int32_t t67 = INT32_MIN;
volatile int32_t x282 = INT32_MIN;
static volatile int8_t x284 = INT8_MAX;
volatile int32_t t68 = -189215;
int8_t x290 = INT8_MIN;
uint16_t x292 = 27526U;
int32_t t70 = -67815;
int16_t x294 = 86;
volatile int64_t t71 = 6400305953LL;
volatile int32_t x301 = INT32_MIN;
int32_t x302 = -1;
int64_t x308 = -1LL;
volatile int64_t t74 = 66660253608LL;
int32_t x311 = INT32_MAX;
volatile int32_t x313 = -1;
static volatile int32_t t77 = 15370;
int8_t x321 = -1;
int32_t t79 = -4020;
uint8_t x336 = 1U;
static int16_t x341 = INT16_MIN;
uint32_t x343 = 31583U;
int32_t x347 = INT32_MAX;
int32_t t84 = 1;
int8_t x351 = INT8_MIN;
volatile int32_t t87 = 981;
volatile int32_t t88 = 9;
uint64_t x365 = 9170475683356489501LLU;
int8_t x369 = INT8_MIN;
int16_t x372 = INT16_MIN;
uint16_t x385 = 15U;
int64_t x390 = INT64_MIN;
uint64_t x392 = UINT64_MAX;
int32_t t96 = 7689602;
volatile uint32_t x397 = UINT32_MAX;
uint8_t x404 = UINT8_MAX;
volatile int32_t t98 = -211178;
static volatile int16_t x405 = INT16_MAX;
static int64_t x406 = -16LL;
static volatile uint64_t t99 = 3863LLU;


void f0(void) {
	volatile int8_t x2 = 1;
	int32_t x3 = -358;
	int32_t x4 = INT32_MIN;
	int32_t t0 = INT32_MIN;

	t0 = ((x1<(x2%x3))|x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MIN;
	int16_t x7 = -1;
	uint32_t x8 = 3426635U;
	volatile uint32_t t1 = 0U;

	t1 = ((x5<(x6%x7))|x8);

	if (t1 != 3426635U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -28;
	volatile int8_t x11 = 23;
	static uint32_t x12 = 23064141U;
	uint32_t t2 = 1538U;

	t2 = ((x9<(x10%x11))|x12);

	if (t2 != 23064141U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = -14175108639849LL;
	int64_t x15 = -239LL;
	uint64_t x16 = UINT64_MAX;

	t3 = ((x13<(x14%x15))|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 151LL;
	uint64_t x18 = 7867762721LLU;
	int64_t x19 = -6281453LL;
	static volatile uint8_t x20 = 58U;
	int32_t t4 = -3;

	t4 = ((x17<(x18%x19))|x20);

	if (t4 != 59) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	static int64_t x24 = -1LL;

	t5 = ((x21<(x22%x23))|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int64_t x26 = -2LL;
	uint32_t x27 = 1017U;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = -528755;

	t6 = ((x25<(x26%x27))|x28);

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int32_t t7 = 1;

	t7 = ((x29<(x30%x31))|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 10103U;
	volatile int32_t x35 = -59697;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = ((x33<(x34%x35))|x36);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	uint16_t x38 = UINT16_MAX;
	int8_t x39 = -55;
	static int64_t t9 = 53580581835321302LL;

	t9 = ((x37<(x38%x39))|x40);

	if (t9 != -38618967145LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 6;
	int32_t x42 = INT32_MAX;
	volatile uint64_t x43 = 3359274310LLU;
	int16_t x44 = -31;

	t10 = ((x41<(x42%x43))|x44);

	if (t10 != -31) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -10303076734029615LL;
	static volatile int16_t x50 = 40;
	uint16_t x51 = 2878U;
	int32_t x52 = INT32_MIN;
	volatile int32_t t11 = -37305;

	t11 = ((x49<(x50%x51))|x52);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MIN;
	int16_t x55 = 295;
	static int32_t x56 = -1;
	volatile int32_t t12 = 1;

	t12 = ((x53<(x54%x55))|x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	volatile int64_t x58 = INT64_MIN;
	int32_t x60 = INT32_MIN;

	t13 = ((x57<(x58%x59))|x60);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x61 = INT32_MIN;
	volatile int64_t x62 = -2281944804847236LL;
	volatile int32_t x63 = INT32_MIN;
	volatile int16_t x64 = 1416;
	volatile int32_t t14 = -3197311;

	t14 = ((x61<(x62%x63))|x64);

	if (t14 != 1417) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x66 = UINT16_MAX;
	static volatile int16_t x67 = INT16_MIN;
	static uint16_t x68 = UINT16_MAX;

	t15 = ((x65<(x66%x67))|x68);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x70 = 379132028U;
	int8_t x71 = INT8_MIN;
	volatile uint32_t t16 = 432845U;

	t16 = ((x69<(x70%x71))|x72);

	if (t16 != 156U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = INT64_MAX;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

	t17 = ((x73<(x74%x75))|x76);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x78 = 71U;
	int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MIN;
	static volatile int64_t t18 = -25291468419270687LL;

	t18 = ((x77<(x78%x79))|x80);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x82 = UINT16_MAX;
	int64_t x83 = INT64_MAX;
	volatile int16_t x84 = -1;
	static int32_t t19 = -3;

	t19 = ((x81<(x82%x83))|x84);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 215;
	int64_t x86 = -15982LL;
	int16_t x87 = 3350;

	t20 = ((x85<(x86%x87))|x88);

	if (t20 != 123) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = 78733879247067100LL;
	int16_t x90 = INT16_MIN;
	uint32_t x92 = 6U;
	uint32_t t21 = 139839103U;

	t21 = ((x89<(x90%x91))|x92);

	if (t21 != 6U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = INT32_MIN;
	static int16_t x94 = INT16_MAX;
	static int32_t x95 = INT32_MAX;
	static int64_t t22 = -44791644101682LL;

	t22 = ((x93<(x94%x95))|x96);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = UINT8_MAX;
	static int16_t x98 = 0;
	int16_t x99 = INT16_MAX;
	static uint32_t x100 = 435464859U;

	t23 = ((x97<(x98%x99))|x100);

	if (t23 != 435464859U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x103 = -88928;
	static int64_t x104 = INT64_MIN;
	int64_t t24 = INT64_MIN;

	t24 = ((x101<(x102%x103))|x104);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 0U;
	uint8_t x106 = 0U;
	uint64_t x107 = 1758301698LLU;
	int8_t x108 = 25;
	volatile int32_t t25 = 17811;

	t25 = ((x105<(x106%x107))|x108);

	if (t25 != 25) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	int32_t x110 = 0;
	int8_t x111 = INT8_MIN;
	volatile int32_t t26 = 2911;

	t26 = ((x109<(x110%x111))|x112);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MAX;
	static int32_t x114 = INT32_MIN;
	int64_t x115 = 7676045804599LL;
	int16_t x116 = INT16_MAX;

	t27 = ((x113<(x114%x115))|x116);

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x118 = 1LLU;
	uint32_t x119 = 161U;
	uint64_t x120 = 931494407835LLU;
	uint64_t t28 = 140184279904052534LLU;

	t28 = ((x117<(x118%x119))|x120);

	if (t28 != 931494407835LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x122 = 343789352876LLU;
	static uint16_t x124 = 381U;
	volatile int32_t t29 = 21308002;

	t29 = ((x121<(x122%x123))|x124);

	if (t29 != 381) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x126 = INT8_MAX;
	volatile int64_t t30 = INT64_MAX;

	t30 = ((x125<(x126%x127))|x128);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = UINT32_MAX;
	static uint32_t x132 = 1911047U;
	volatile uint32_t t31 = 142233804U;

	t31 = ((x129<(x130%x131))|x132);

	if (t31 != 1911047U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = INT8_MAX;
	int64_t x134 = -1LL;
	int8_t x136 = INT8_MAX;

	t32 = ((x133<(x134%x135))|x136);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -447;
	uint64_t x138 = 3LLU;
	volatile uint32_t x139 = 1089U;
	uint64_t x140 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

	t33 = ((x137<(x138%x139))|x140);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x141 = 56660075925469864LLU;
	int64_t x142 = INT64_MAX;
	static int64_t x143 = -1LL;
	int32_t x144 = 29102;
	int32_t t34 = -1;

	t34 = ((x141<(x142%x143))|x144);

	if (t34 != 29102) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	uint16_t x146 = 7U;
	static uint8_t x148 = 4U;
	int32_t t35 = -909738;

	t35 = ((x145<(x146%x147))|x148);

	if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	uint32_t x150 = 65198U;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MAX;
	static volatile int32_t t36 = -13;

	t36 = ((x149<(x150%x151))|x152);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x153 = INT8_MIN;
	uint32_t x155 = 1794809306U;
	int32_t t37 = -6382;

	t37 = ((x153<(x154%x155))|x156);

	if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 93002405U;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 838984811952LLU;
	uint16_t x160 = UINT16_MAX;
	static int32_t t38 = 16022252;

	t38 = ((x157<(x158%x159))|x160);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 52587LLU;
	volatile int16_t x162 = INT16_MAX;
	static int32_t t39 = 16166;

	t39 = ((x161<(x162%x163))|x164);

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = -1;
	int32_t x167 = 5696883;
	int8_t x168 = INT8_MIN;
	int32_t t40 = 233237;

	t40 = ((x165<(x166%x167))|x168);

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 104;
	int64_t x170 = INT64_MIN;
	volatile uint16_t x171 = 22U;
	int8_t x172 = -1;
	volatile int32_t t41 = 12;

	t41 = ((x169<(x170%x171))|x172);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x175 = INT8_MIN;
	volatile int32_t t42 = -11936;

	t42 = ((x173<(x174%x175))|x176);

	if (t42 != -47) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x178 = INT16_MIN;
	uint8_t x179 = 6U;
	int16_t x180 = INT16_MIN;
	static int32_t t43 = 3259214;

	t43 = ((x177<(x178%x179))|x180);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x181 = INT64_MIN;
	int32_t x182 = INT32_MIN;
	volatile uint64_t x183 = 134LLU;
	uint8_t x184 = UINT8_MAX;

	t44 = ((x181<(x182%x183))|x184);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x186 = -12644209;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t45 = -19007163;

	t45 = ((x185<(x186%x187))|x188);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = 0;
	int64_t x190 = -742188988LL;
	static int8_t x191 = 10;
	int64_t x192 = -112460395LL;

	t46 = ((x189<(x190%x191))|x192);

	if (t46 != -112460395LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	static int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	volatile int8_t x196 = INT8_MIN;
	int32_t t47 = -81431230;

	t47 = ((x193<(x194%x195))|x196);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -1LL;
	int8_t x198 = 8;
	int64_t x199 = INT64_MAX;
	volatile int32_t x200 = INT32_MIN;
	int32_t t48 = -86646;

	t48 = ((x197<(x198%x199))|x200);

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = INT32_MIN;
	int16_t x202 = 24;
	uint64_t x203 = 131194694LLU;
	int8_t x204 = 8;

	t49 = ((x201<(x202%x203))|x204);

	if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x205 = UINT32_MAX;
	int16_t x207 = 1;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t50 = INT32_MIN;

	t50 = ((x205<(x206%x207))|x208);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = -486554;
	int16_t x214 = -1;
	volatile int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;

	t51 = ((x213<(x214%x215))|x216);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x218 = 84776892;
	int16_t x219 = 759;
	uint16_t x220 = 31152U;
	int32_t t52 = 3856242;

	t52 = ((x217<(x218%x219))|x220);

	if (t52 != 31152) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x222 = 188U;
	uint16_t x224 = 58U;
	volatile int32_t t53 = 1;

	t53 = ((x221<(x222%x223))|x224);

	if (t53 != 58) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 15U;
	int8_t x226 = 1;
	uint16_t x227 = 2U;
	volatile int32_t x228 = INT32_MAX;
	int32_t t54 = INT32_MAX;

	t54 = ((x225<(x226%x227))|x228);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x230 = 88U;
	int32_t x231 = INT32_MAX;
	volatile int32_t t55 = -27052;

	t55 = ((x229<(x230%x231))|x232);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = 53;
	static int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	volatile uint32_t x236 = 92U;

	t56 = ((x233<(x234%x235))|x236);

	if (t56 != 92U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = 145U;
	static int32_t x238 = INT32_MIN;
	uint8_t x240 = 102U;
	int32_t t57 = -14509083;

	t57 = ((x237<(x238%x239))|x240);

	if (t57 != 103) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = -1;
	uint64_t x242 = 20792834394LLU;
	uint32_t x243 = 9U;
	uint16_t x244 = 0U;

	t58 = ((x241<(x242%x243))|x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MIN;
	volatile uint64_t x247 = 584579LLU;
	int32_t x248 = -1;
	volatile int32_t t59 = -65;

	t59 = ((x245<(x246%x247))|x248);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -31;
	int32_t x250 = -1;
	int32_t t60 = -21432;

	t60 = ((x249<(x250%x251))|x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x254 = INT64_MIN;
	static int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = ((x253<(x254%x255))|x256);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x258 = 0;
	uint64_t x259 = 258675904074LLU;
	int32_t x260 = -1;
	volatile int32_t t62 = 3;

	t62 = ((x257<(x258%x259))|x260);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = INT16_MAX;
	int32_t x262 = -220964442;
	static volatile int32_t x263 = INT32_MIN;
	int8_t x264 = 0;
	int32_t t63 = 552;

	t63 = ((x261<(x262%x263))|x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x265 = 5U;
	static int32_t x266 = -1;
	static uint64_t x267 = UINT64_MAX;
	static volatile int64_t x268 = -1LL;
	int64_t t64 = -6970021LL;

	t64 = ((x265<(x266%x267))|x268);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x270 = -6;
	int64_t x271 = INT64_MIN;
	uint32_t x272 = UINT32_MAX;

	t65 = ((x269<(x270%x271))|x272);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -1;
	static int8_t x275 = INT8_MIN;

	t66 = ((x273<(x274%x275))|x276);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = -927;
	uint32_t x279 = 463270099U;
	static int32_t x280 = INT32_MIN;

	t67 = ((x277<(x278%x279))|x280);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x281 = UINT16_MAX;
	uint64_t x283 = 28LLU;

	t68 = ((x281<(x282%x283))|x284);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = -1LL;
	int64_t x286 = 6150419LL;
	int16_t x287 = -1;
	int64_t x288 = -452944575197334579LL;
	volatile int64_t t69 = -272847822LL;

	t69 = ((x285<(x286%x287))|x288);

	if (t69 != -452944575197334579LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	int8_t x291 = INT8_MIN;

	t70 = ((x289<(x290%x291))|x292);

	if (t70 != 27527) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	int64_t x295 = INT64_MIN;
	static int64_t x296 = -1LL;

	t71 = ((x293<(x294%x295))|x296);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = 1;
	uint8_t x299 = UINT8_MAX;
	int64_t x300 = -1LL;
	volatile int64_t t72 = 7039748900275755LL;

	t72 = ((x297<(x298%x299))|x300);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x303 = 313516U;
	int8_t x304 = INT8_MAX;
	volatile int32_t t73 = 907578;

	t73 = ((x301<(x302%x303))|x304);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = 0;
	static int64_t x306 = INT64_MIN;
	uint64_t x307 = 2773LLU;

	t74 = ((x305<(x306%x307))|x308);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x309 = UINT8_MAX;
	int32_t x310 = INT32_MAX;
	int64_t x312 = -1LL;
	volatile int64_t t75 = 7863925966LL;

	t75 = ((x309<(x310%x311))|x312);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	static int32_t t76 = -60619502;

	t76 = ((x313<(x314%x315))|x316);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 15U;
	int64_t x318 = 1LL;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t x320 = -1;

	t77 = ((x317<(x318%x319))|x320);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x322 = 12024U;
	int64_t x323 = 108129462907549226LL;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t78 = 864768;

	t78 = ((x321<(x322%x323))|x324);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x325 = 669664;
	int32_t x326 = INT32_MIN;
	int16_t x327 = 2;
	int8_t x328 = INT8_MIN;

	t79 = ((x325<(x326%x327))|x328);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	volatile int64_t x330 = -1LL;
	static uint32_t x331 = UINT32_MAX;
	static int32_t x332 = INT32_MIN;
	int32_t t80 = -5774;

	t80 = ((x329<(x330%x331))|x332);

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = 11948481U;
	int8_t x334 = 6;
	uint8_t x335 = 21U;
	int32_t t81 = 0;

	t81 = ((x333<(x334%x335))|x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x337 = 42;
	int16_t x338 = INT16_MAX;
	static uint64_t x339 = UINT64_MAX;
	uint64_t x340 = 30968590LLU;
	volatile uint64_t t82 = 3924301453879504LLU;

	t82 = ((x337<(x338%x339))|x340);

	if (t82 != 30968591LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x342 = 0;
	int32_t x344 = -1;
	static volatile int32_t t83 = -204;

	t83 = ((x341<(x342%x343))|x344);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x345 = -1;
	int32_t x346 = 3;
	volatile uint8_t x348 = 36U;

	t84 = ((x345<(x346%x347))|x348);

	if (t84 != 37) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MIN;
	volatile uint32_t x350 = 12021U;
	volatile uint16_t x352 = UINT16_MAX;
	int32_t t85 = -6412067;

	t85 = ((x349<(x350%x351))|x352);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = 0;
	int16_t x354 = INT16_MIN;
	volatile uint16_t x355 = 58U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x353<(x354%x355))|x356);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -1708432766713824591LL;
	static volatile int32_t x358 = -1;
	uint64_t x359 = 1758LLU;
	int8_t x360 = -4;

	t87 = ((x357<(x358%x359))|x360);

	if (t87 != -4) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x362 = 853127445U;
	int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;

	t88 = ((x361<(x362%x363))|x364);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x366 = INT16_MAX;
	int8_t x367 = INT8_MIN;
	volatile int16_t x368 = INT16_MIN;
	int32_t t89 = -4;

	t89 = ((x365<(x366%x367))|x368);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	int32_t t90 = -50330;

	t90 = ((x369<(x370%x371))|x372);

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x373 = INT64_MAX;
	uint32_t x374 = 2U;
	int8_t x375 = 3;
	int64_t x376 = 4628LL;
	int64_t t91 = 10986LL;

	t91 = ((x373<(x374%x375))|x376);

	if (t91 != 4628LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MIN;
	volatile uint64_t x378 = UINT64_MAX;
	volatile int8_t x379 = -32;
	int64_t x380 = 76111525LL;
	static int64_t t92 = -56111374202592LL;

	t92 = ((x377<(x378%x379))|x380);

	if (t92 != 76111525LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = -1;
	int8_t x382 = -2;
	uint64_t x383 = 2211949858LLU;
	int16_t x384 = INT16_MIN;
	static int32_t t93 = 2;

	t93 = ((x381<(x382%x383))|x384);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x386 = 1U;
	static int8_t x387 = INT8_MAX;
	uint16_t x388 = 6U;
	volatile int32_t t94 = 193631646;

	t94 = ((x385<(x386%x387))|x388);

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MIN;
	volatile int8_t x391 = INT8_MIN;
	static volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x389<(x390%x391))|x392);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x393 = UINT16_MAX;
	static uint16_t x394 = 6686U;
	int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MIN;

	t96 = ((x393<(x394%x395))|x396);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x398 = 3174LLU;
	static int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	int32_t t97 = 127;

	t97 = ((x397<(x398%x399))|x400);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = 2555LLU;
	int16_t x402 = INT16_MAX;
	static int8_t x403 = INT8_MIN;

	t98 = ((x401<(x402%x403))|x404);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x407 = 1U;
	volatile uint64_t x408 = 3549853815160LLU;

	t99 = ((x405<(x406%x407))|x408);

	if (t99 != 3549853815160LLU) { NG(); } else { ; }
	
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

