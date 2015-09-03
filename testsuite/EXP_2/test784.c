#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
int8_t x6 = INT8_MIN;
uint64_t x7 = 278651LLU;
volatile int64_t x9 = 209305815742LL;
static int64_t x12 = -161069338936830LL;
volatile uint32_t x20 = 377481U;
int32_t x31 = INT32_MAX;
uint8_t x36 = 75U;
int16_t x41 = INT16_MIN;
volatile int32_t t8 = -23634552;
int16_t x46 = INT16_MAX;
int8_t x49 = INT8_MIN;
volatile int32_t t10 = -25;
int64_t x55 = 3623LL;
int64_t t11 = -33267065963462LL;
int8_t x57 = INT8_MAX;
int64_t x59 = 323LL;
static int16_t x68 = 1;
uint64_t x72 = 60766650LLU;
volatile uint32_t x73 = 650409U;
volatile int8_t x74 = INT8_MIN;
int64_t x75 = INT64_MIN;
int16_t x76 = INT16_MIN;
int64_t x78 = INT64_MIN;
static uint16_t x79 = 40U;
volatile int8_t x81 = -10;
static uint64_t x91 = 692LLU;
uint64_t x96 = 300636775627LLU;
int8_t x98 = -18;
volatile int8_t x105 = INT8_MAX;
static int8_t x110 = INT8_MIN;
int32_t x112 = INT32_MIN;
static int32_t t25 = 44661573;
uint32_t x115 = 38U;
int8_t x119 = 1;
volatile uint32_t x123 = 597U;
static int16_t x125 = 2;
uint8_t x127 = UINT8_MAX;
volatile int16_t x131 = INT16_MIN;
int8_t x138 = -2;
static uint32_t t37 = 1U;
int64_t x165 = INT64_MAX;
static int8_t x166 = -1;
static uint32_t x168 = UINT32_MAX;
static volatile uint64_t t42 = 81401274569LLU;
int16_t x184 = INT16_MIN;
int32_t x187 = INT32_MAX;
uint32_t x191 = UINT32_MAX;
volatile uint64_t x206 = 31364981772344LLU;
static volatile int16_t x209 = INT16_MIN;
int64_t x216 = INT64_MAX;
static int64_t x225 = INT64_MAX;
static volatile int8_t x226 = INT8_MIN;
static int64_t x230 = INT64_MIN;
uint64_t x235 = 64733162529LLU;
uint32_t t57 = 31753229U;
uint32_t x259 = 1924505U;
int32_t t66 = 28811;
volatile int64_t x282 = 21LL;
volatile int32_t t70 = 0;
volatile uint32_t t73 = 3212U;
int16_t x313 = INT16_MIN;
uint64_t x322 = 105316439912899784LLU;
int8_t x337 = -1;
int64_t x338 = -1LL;
int8_t x342 = INT8_MIN;
uint64_t x343 = 16975279658706389LLU;
volatile uint32_t x348 = 3106414U;
uint32_t t82 = 3605U;
int32_t x349 = 6;
int64_t x359 = INT64_MIN;
int16_t x361 = INT16_MIN;
int16_t x362 = -3318;
volatile int32_t t86 = -184230;
int64_t x366 = INT64_MAX;
int16_t x368 = INT16_MAX;
int32_t t88 = -49;
static volatile int64_t x389 = INT64_MAX;
int16_t x390 = 11;
volatile uint64_t t94 = 8022912LLU;
int64_t x400 = INT64_MIN;
uint16_t x401 = UINT16_MAX;
uint16_t x407 = 185U;
volatile int64_t x408 = INT64_MIN;
static volatile int32_t t98 = -1;
static int32_t x414 = INT32_MIN;


void f0(void) {
	uint16_t x1 = 13U;
	int16_t x2 = -97;
	uint32_t x4 = 2951U;
	volatile uint32_t t0 = 36159181U;

	t0 = ((x1<(x2%x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int16_t x8 = 1;
	int32_t t1 = 8396;

	t1 = ((x5<(x6%x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	static int32_t x11 = 526675056;
	volatile int64_t t2 = -47470LL;

	t2 = ((x9<(x10%x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 4U;
	int16_t x16 = -1;
	int32_t t3 = 8033;

	t3 = ((x13<(x14%x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	static int16_t x18 = -1;
	static uint8_t x19 = UINT8_MAX;
	uint32_t t4 = 13124U;

	t4 = ((x17<(x18%x19))/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int16_t x22 = INT16_MAX;
	uint16_t x23 = UINT16_MAX;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = 120U;

	t5 = ((x21<(x22%x23))/x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	uint32_t x30 = UINT32_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t6 = 88123;

	t6 = ((x29<(x30%x31))/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 219LLU;
	static int32_t x34 = 26189796;
	int16_t x35 = INT16_MIN;
	int32_t t7 = 114695;

	t7 = ((x33<(x34%x35))/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x42 = 173700823396576822LLU;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MIN;

	t8 = ((x41<(x42%x43))/x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 1;
	int64_t x47 = -1LL;
	int64_t x48 = INT64_MAX;
	int64_t t9 = -2503371084050LL;

	t9 = ((x45<(x46%x47))/x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x50 = 39988151231995362LLU;
	volatile int16_t x51 = -1;
	uint16_t x52 = 109U;

	t10 = ((x49<(x50%x51))/x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	int64_t x54 = 128326LL;
	int64_t x56 = INT64_MIN;

	t11 = ((x53<(x54%x55))/x56);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = 2;
	volatile int32_t x60 = INT32_MIN;
	static int32_t t12 = -38273144;

	t12 = ((x57<(x58%x59))/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = -1;
	static int8_t x63 = INT8_MIN;
	static int32_t x64 = INT32_MIN;
	volatile int32_t t13 = -3;

	t13 = ((x61<(x62%x63))/x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 11;
	static int32_t x66 = -1;
	uint64_t x67 = UINT64_MAX;
	int32_t t14 = -6611556;

	t14 = ((x65<(x66%x67))/x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x69 = UINT32_MAX;
	int8_t x70 = -1;
	volatile uint64_t x71 = 3431551239849LLU;
	volatile uint64_t t15 = 1LLU;

	t15 = ((x69<(x70%x71))/x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t t16 = -1643231;

	t16 = ((x73<(x74%x75))/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 35U;
	volatile uint16_t x80 = 1U;
	volatile int32_t t17 = -223282;

	t17 = ((x77<(x78%x79))/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x82 = 1432467120U;
	int16_t x83 = 51;
	uint64_t x84 = UINT64_MAX;
	uint64_t t18 = 67541LLU;

	t18 = ((x81<(x82%x83))/x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x85 = -1;
	int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MAX;
	int64_t t19 = 188107LL;

	t19 = ((x85<(x86%x87))/x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -2;
	int8_t x90 = -1;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t20 = 400790713543115LLU;

	t20 = ((x89<(x90%x91))/x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MIN;
	static volatile int64_t x95 = INT64_MIN;
	uint64_t t21 = 265313365863LLU;

	t21 = ((x93<(x94%x95))/x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	static uint64_t x100 = 942575897548236LLU;
	static volatile uint64_t t22 = 126LLU;

	t22 = ((x97<(x98%x99))/x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 1;
	uint8_t x102 = 0U;
	int32_t x103 = -76857277;
	static int64_t x104 = 33882367186627294LL;
	int64_t t23 = -14271367LL;

	t23 = ((x101<(x102%x103))/x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = -1LL;
	int32_t x107 = INT32_MAX;
	static int32_t x108 = -1;
	static int32_t t24 = 1;

	t24 = ((x105<(x106%x107))/x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	static volatile int8_t x111 = INT8_MIN;

	t25 = ((x109<(x110%x111))/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = INT8_MIN;
	int16_t x114 = -684;
	static int8_t x116 = -14;
	volatile int32_t t26 = 125193;

	t26 = ((x113<(x114%x115))/x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	static int8_t x120 = INT8_MIN;
	int32_t t27 = -5;

	t27 = ((x117<(x118%x119))/x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x121 = 1053305046LLU;
	int8_t x122 = -3;
	static uint64_t x124 = 553668441925299LLU;
	volatile uint64_t t28 = 4LLU;

	t28 = ((x121<(x122%x123))/x124);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x126 = 349U;
	int64_t x128 = 400450792278144302LL;
	int64_t t29 = -465LL;

	t29 = ((x125<(x126%x127))/x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x129 = 25U;
	static volatile uint8_t x130 = 2U;
	volatile int8_t x132 = 50;
	volatile int32_t t30 = -1229680;

	t30 = ((x129<(x130%x131))/x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	volatile uint16_t x134 = 0U;
	int16_t x135 = -1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t31 = -137943227;

	t31 = ((x133<(x134%x135))/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	volatile int8_t x139 = -41;
	int16_t x140 = INT16_MIN;
	volatile int32_t t32 = 1080650;

	t32 = ((x137<(x138%x139))/x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 509;
	static int16_t x142 = INT16_MIN;
	int32_t x143 = 3;
	static volatile int16_t x144 = -1;
	volatile int32_t t33 = 2114;

	t33 = ((x141<(x142%x143))/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = 24433447U;
	volatile int64_t x146 = INT64_MIN;
	uint16_t x147 = 23U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t34 = 10638573;

	t34 = ((x145<(x146%x147))/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MAX;
	int64_t x150 = -15138553770690070LL;
	static int8_t x151 = INT8_MIN;
	uint8_t x152 = 22U;
	int32_t t35 = 596;

	t35 = ((x149<(x150%x151))/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MIN;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = -1;
	int32_t t36 = 344401578;

	t36 = ((x153<(x154%x155))/x156);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MAX;
	static int32_t x158 = -3454809;
	int8_t x159 = -1;
	uint32_t x160 = 5612602U;

	t37 = ((x157<(x158%x159))/x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = 7;
	int8_t x162 = INT8_MIN;
	static int64_t x163 = INT64_MIN;
	uint16_t x164 = UINT16_MAX;
	static volatile int32_t t38 = -17079;

	t38 = ((x161<(x162%x163))/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x167 = 742U;
	volatile uint32_t t39 = 35019U;

	t39 = ((x165<(x166%x167))/x168);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	int16_t x170 = -13;
	int64_t x171 = INT64_MAX;
	uint32_t x172 = 416987U;
	volatile uint32_t t40 = 74U;

	t40 = ((x169<(x170%x171))/x172);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	static volatile uint32_t x174 = 280U;
	int32_t x175 = INT32_MAX;
	uint64_t x176 = 8039LLU;
	uint64_t t41 = 3147820601660LLU;

	t41 = ((x173<(x174%x175))/x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = INT64_MIN;
	uint8_t x178 = 3U;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = 3378346LLU;

	t42 = ((x177<(x178%x179))/x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x181 = INT16_MAX;
	static uint8_t x182 = 1U;
	int64_t x183 = INT64_MIN;
	int32_t t43 = -1;

	t43 = ((x181<(x182%x183))/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 23U;
	int8_t x186 = INT8_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t44 = 1573;

	t44 = ((x185<(x186%x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = UINT32_MAX;
	volatile uint32_t x190 = 2913U;
	int32_t x192 = INT32_MIN;
	int32_t t45 = 0;

	t45 = ((x189<(x190%x191))/x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x193 = 299233090LLU;
	volatile int8_t x194 = -1;
	static uint16_t x195 = 4U;
	int64_t x196 = INT64_MAX;
	int64_t t46 = -2215434330LL;

	t46 = ((x193<(x194%x195))/x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 150U;
	uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MAX;
	volatile int64_t x200 = -6LL;
	volatile int64_t t47 = 485055047LL;

	t47 = ((x197<(x198%x199))/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MAX;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = 1U;
	uint32_t x204 = 162710648U;
	static uint32_t t48 = 11849U;

	t48 = ((x201<(x202%x203))/x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	int32_t x207 = INT32_MAX;
	int16_t x208 = -1;
	int32_t t49 = 420;

	t49 = ((x205<(x206%x207))/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x210 = 0U;
	static int16_t x211 = -1;
	int64_t x212 = INT64_MIN;
	static int64_t t50 = -1721010817263LL;

	t50 = ((x209<(x210%x211))/x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 32822768244LLU;
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MAX;
	volatile int64_t t51 = 1737594198420383036LL;

	t51 = ((x213<(x214%x215))/x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -239008;
	int32_t x218 = -1;
	static volatile int8_t x219 = INT8_MAX;
	static uint64_t x220 = 16LLU;
	static uint64_t t52 = 15717274081703755LLU;

	t52 = ((x217<(x218%x219))/x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -1LL;
	static uint32_t x222 = 330008654U;
	uint16_t x223 = UINT16_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t53 = -20034;

	t53 = ((x221<(x222%x223))/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x227 = 11U;
	volatile int16_t x228 = INT16_MIN;
	int32_t t54 = -735;

	t54 = ((x225<(x226%x227))/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int64_t x231 = -1LL;
	int32_t x232 = -1;
	int32_t t55 = 256485902;

	t55 = ((x229<(x230%x231))/x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = -2809LL;
	int32_t x234 = INT32_MAX;
	int16_t x236 = 11295;
	volatile int32_t t56 = 3052654;

	t56 = ((x233<(x234%x235))/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x237 = -3;
	int64_t x238 = INT64_MIN;
	int64_t x239 = -1LL;
	volatile uint32_t x240 = UINT32_MAX;

	t57 = ((x237<(x238%x239))/x240);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MAX;
	volatile uint16_t x242 = UINT16_MAX;
	volatile int16_t x243 = -1;
	int8_t x244 = INT8_MIN;
	int32_t t58 = 7;

	t58 = ((x241<(x242%x243))/x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x245 = INT64_MAX;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	int8_t x248 = -1;
	int32_t t59 = -128803145;

	t59 = ((x245<(x246%x247))/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x249 = -1;
	static int16_t x250 = 233;
	static int8_t x251 = INT8_MIN;
	int64_t x252 = INT64_MIN;
	volatile int64_t t60 = 134036666LL;

	t60 = ((x249<(x250%x251))/x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MIN;
	int32_t x255 = 1022737563;
	uint32_t x256 = 279443582U;
	volatile uint32_t t61 = 189505U;

	t61 = ((x253<(x254%x255))/x256);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	static volatile uint32_t x258 = 119U;
	int8_t x260 = INT8_MIN;
	volatile int32_t t62 = 712;

	t62 = ((x257<(x258%x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x261 = 1711LL;
	volatile int64_t x262 = -1LL;
	volatile uint32_t x263 = UINT32_MAX;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t63 = -3116;

	t63 = ((x261<(x262%x263))/x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x265 = 0U;
	uint32_t x266 = 56120U;
	uint8_t x267 = 59U;
	static uint32_t x268 = 9216829U;
	uint32_t t64 = 13762367U;

	t64 = ((x265<(x266%x267))/x268);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x273 = 4;
	int8_t x274 = INT8_MAX;
	int16_t x275 = 1;
	int64_t x276 = -8333LL;
	volatile int64_t t65 = 1009071609085303212LL;

	t65 = ((x273<(x274%x275))/x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 1546062939U;
	int16_t x280 = -1;

	t66 = ((x277<(x278%x279))/x280);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MAX;
	static uint16_t x283 = UINT16_MAX;
	static uint64_t x284 = UINT64_MAX;
	uint64_t t67 = 136235188283066LLU;

	t67 = ((x281<(x282%x283))/x284);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = -1LL;
	int8_t x287 = -49;
	static uint8_t x288 = 55U;
	static int32_t t68 = 183575;

	t68 = ((x285<(x286%x287))/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x289 = UINT16_MAX;
	static int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t69 = 6506;

	t69 = ((x289<(x290%x291))/x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = 13;
	uint16_t x294 = 30U;
	int8_t x295 = INT8_MIN;
	int16_t x296 = -1;

	t70 = ((x293<(x294%x295))/x296);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 30U;
	volatile int32_t x298 = INT32_MAX;
	int32_t x299 = INT32_MIN;
	int16_t x300 = -138;
	int32_t t71 = 1050;

	t71 = ((x297<(x298%x299))/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MAX;
	int16_t x302 = -1;
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = INT8_MIN;
	int32_t t72 = -1361;

	t72 = ((x301<(x302%x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	uint16_t x310 = UINT16_MAX;
	static int16_t x311 = INT16_MIN;
	static volatile uint32_t x312 = 51883877U;

	t73 = ((x309<(x310%x311))/x312);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x314 = 1U;
	static int64_t x315 = -24286469726572297LL;
	int64_t x316 = 3232340269287745LL;
	volatile int64_t t74 = -4031712LL;

	t74 = ((x313<(x314%x315))/x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x318 = -1;
	volatile int8_t x319 = -1;
	int64_t x320 = INT64_MIN;
	static volatile int64_t t75 = 3490122472718LL;

	t75 = ((x317<(x318%x319))/x320);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = UINT16_MAX;
	uint64_t x323 = 27843LLU;
	int64_t x324 = INT64_MAX;
	int64_t t76 = -67358LL;

	t76 = ((x321<(x322%x323))/x324);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -1;
	uint32_t x326 = 99473118U;
	uint8_t x327 = 23U;
	static volatile int16_t x328 = INT16_MIN;
	volatile int32_t t77 = 94432;

	t77 = ((x325<(x326%x327))/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	volatile int16_t x331 = INT16_MIN;
	static volatile int16_t x332 = 821;
	volatile int32_t t78 = -104801118;

	t78 = ((x329<(x330%x331))/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 10712U;
	int64_t x334 = 96959361199018LL;
	volatile uint32_t x335 = 255U;
	int64_t x336 = INT64_MIN;
	int64_t t79 = -931736177743885795LL;

	t79 = ((x333<(x334%x335))/x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x339 = -440;
	volatile int8_t x340 = 3;
	int32_t t80 = 91227;

	t80 = ((x337<(x338%x339))/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = INT8_MIN;
	int16_t x344 = -1711;
	volatile int32_t t81 = 895273836;

	t81 = ((x341<(x342%x343))/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = INT8_MAX;
	volatile int16_t x346 = -1;
	uint64_t x347 = 3730560846LLU;

	t82 = ((x345<(x346%x347))/x348);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x350 = INT8_MAX;
	uint32_t x351 = 310U;
	int16_t x352 = 1844;
	int32_t t83 = -154789;

	t83 = ((x349<(x350%x351))/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = 39;
	int64_t x355 = -1LL;
	static int16_t x356 = -1;
	static int32_t t84 = 0;

	t84 = ((x353<(x354%x355))/x356);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x357 = 3140LL;
	int32_t x358 = INT32_MIN;
	volatile uint8_t x360 = UINT8_MAX;
	volatile int32_t t85 = 500231;

	t85 = ((x357<(x358%x359))/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x363 = 9211971LL;
	static volatile int8_t x364 = INT8_MIN;

	t86 = ((x361<(x362%x363))/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = 4LL;
	static uint32_t x367 = 32105250U;
	volatile int32_t t87 = 1431;

	t87 = ((x365<(x366%x367))/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x369 = INT32_MAX;
	int8_t x370 = -1;
	uint8_t x371 = UINT8_MAX;
	volatile int16_t x372 = INT16_MAX;

	t88 = ((x369<(x370%x371))/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = -5;
	uint16_t x375 = 6U;
	volatile uint8_t x376 = 115U;
	static int32_t t89 = 1436864;

	t89 = ((x373<(x374%x375))/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = INT8_MIN;
	volatile uint32_t x379 = 1116425U;
	int16_t x380 = -3;
	int32_t t90 = -2120;

	t90 = ((x377<(x378%x379))/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = 42U;
	static int16_t x383 = INT16_MIN;
	volatile int64_t x384 = INT64_MIN;
	volatile int64_t t91 = 450LL;

	t91 = ((x381<(x382%x383))/x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = 7U;
	uint32_t x386 = 434U;
	static int16_t x387 = INT16_MIN;
	int8_t x388 = 12;
	int32_t t92 = -95879672;

	t92 = ((x385<(x386%x387))/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x391 = 2140270527279LLU;
	static int8_t x392 = -1;
	volatile int32_t t93 = 13;

	t93 = ((x389<(x390%x391))/x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x393 = INT16_MIN;
	int16_t x394 = -1;
	int64_t x395 = INT64_MIN;
	static uint64_t x396 = 1571LLU;

	t94 = ((x393<(x394%x395))/x396);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MIN;
	static int8_t x398 = INT8_MIN;
	int64_t x399 = 6074410274237LL;
	volatile int64_t t95 = 5LL;

	t95 = ((x397<(x398%x399))/x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x402 = 3U;
	uint32_t x403 = UINT32_MAX;
	int64_t x404 = INT64_MIN;
	volatile int64_t t96 = 39842711973LL;

	t96 = ((x401<(x402%x403))/x404);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x405 = INT8_MIN;
	static int16_t x406 = -13228;
	static int64_t t97 = -208528476173383028LL;

	t97 = ((x405<(x406%x407))/x408);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = -1;
	int32_t x410 = INT32_MIN;
	int16_t x411 = 26;
	int16_t x412 = INT16_MAX;

	t98 = ((x409<(x410%x411))/x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = 0;
	static int8_t x415 = 1;
	volatile uint8_t x416 = UINT8_MAX;
	volatile int32_t t99 = -11552762;

	t99 = ((x413<(x414%x415))/x416);

	if (t99 != 0) { NG(); } else { ; }
	
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

