#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -421;
volatile int64_t x4 = -1LL;
int32_t x5 = INT32_MIN;
int32_t t1 = 190765;
static int16_t x10 = INT16_MIN;
int64_t t3 = -24201LL;
uint32_t x18 = UINT32_MAX;
volatile uint32_t x20 = 251164848U;
uint32_t t4 = UINT32_MAX;
volatile int8_t x27 = INT8_MAX;
int32_t x28 = -1;
int32_t t6 = -3476644;
int64_t x32 = 4949LL;
volatile int64_t t9 = 35271536040729LL;
uint16_t x43 = 78U;
int64_t t10 = 1LL;
int8_t x45 = -11;
static uint16_t x46 = 92U;
static int32_t x55 = INT32_MIN;
int16_t x67 = INT16_MAX;
uint64_t t17 = 1170991374077913900LLU;
static volatile uint32_t x76 = 726110857U;
uint16_t x77 = 21U;
uint16_t x83 = 2425U;
int16_t x88 = -2901;
volatile uint32_t x90 = 45682065U;
static int64_t x97 = -1LL;
volatile int16_t x102 = INT16_MIN;
static volatile uint8_t x103 = UINT8_MAX;
int64_t x104 = INT64_MIN;
volatile int64_t t25 = INT64_MIN;
int64_t t26 = 373120LL;
uint64_t x110 = 7LLU;
static int16_t x112 = 7247;
volatile int64_t x114 = INT64_MIN;
int16_t x117 = 19;
uint32_t x120 = 8733U;
volatile int32_t x124 = -5417365;
int64_t x126 = INT64_MAX;
uint16_t x131 = UINT16_MAX;
volatile int32_t t32 = 59602;
int8_t x134 = -1;
uint16_t x138 = 335U;
volatile uint64_t t34 = 272636731988LLU;
static int8_t x142 = INT8_MIN;
int32_t x145 = INT32_MAX;
static volatile int16_t x147 = INT16_MIN;
uint16_t x149 = 1U;
int16_t x154 = INT16_MIN;
static uint64_t x160 = 190476LLU;
uint8_t x165 = 114U;
int64_t t41 = -3133184869826833037LL;
int16_t x170 = INT16_MIN;
static uint32_t x171 = 97919106U;
int16_t x174 = -3;
volatile int64_t x176 = 46872603225LL;
volatile int64_t t43 = -2816LL;
int32_t x179 = 1992004;
int32_t x182 = -1;
uint8_t x184 = 42U;
int8_t x193 = INT8_MIN;
int32_t x195 = INT32_MAX;
int32_t t50 = 14223796;
uint64_t x205 = 90908586119LLU;
uint32_t x207 = UINT32_MAX;
uint8_t x208 = 0U;
uint32_t t51 = UINT32_MAX;
uint64_t t52 = UINT64_MAX;
int16_t x219 = INT16_MIN;
volatile uint32_t t54 = 14551776U;
int32_t x222 = 3692;
uint8_t x230 = 1U;
int64_t x231 = INT64_MAX;
uint32_t x234 = 53197125U;
static volatile uint64_t t58 = UINT64_MAX;
int32_t t60 = -114369331;
volatile uint64_t x246 = UINT64_MAX;
volatile int64_t x254 = -1LL;
volatile int32_t t63 = -227;
int32_t x267 = 0;
static int16_t x268 = -1;
int64_t x271 = INT64_MIN;
uint8_t x275 = UINT8_MAX;
int16_t x277 = -1;
static uint8_t x281 = 2U;
uint16_t x282 = 2U;
static int32_t x284 = INT32_MIN;
volatile uint16_t x286 = 1022U;
uint8_t x289 = UINT8_MAX;
uint16_t x292 = 8U;
int64_t t72 = -150LL;
volatile uint16_t x299 = 184U;
volatile uint32_t x304 = 8U;
int32_t x306 = INT32_MAX;
uint32_t x308 = UINT32_MAX;
int64_t x315 = -1LL;
static uint16_t x318 = 2U;
uint64_t x320 = UINT64_MAX;
volatile int8_t x324 = INT8_MIN;
int32_t x334 = INT32_MAX;
int8_t x336 = -28;
volatile int64_t t86 = 510237121LL;
static uint16_t x351 = UINT16_MAX;
volatile int64_t x352 = 18LL;
uint16_t x353 = UINT16_MAX;
int16_t x356 = INT16_MIN;
volatile int64_t x359 = -1LL;
static int64_t t89 = -1048758247115300110LL;
int64_t t90 = INT64_MIN;
int32_t t91 = -47342240;
static int64_t x372 = INT64_MIN;
int64_t x377 = 47679379637212390LL;
static int16_t x378 = INT16_MIN;
volatile uint16_t x382 = UINT16_MAX;
static int32_t t95 = 17001685;
volatile uint8_t x392 = 0U;
volatile int32_t t97 = -50743;
int8_t x394 = 2;
int64_t x395 = INT64_MIN;
int8_t x397 = INT8_MIN;
volatile int16_t x398 = INT16_MIN;
uint16_t x400 = 111U;
volatile uint32_t t99 = 19904U;


void f0(void) {
	static uint32_t x2 = 10930U;
	int32_t x3 = INT32_MIN;
	int64_t t0 = -1383518LL;

	t0 = (((x1<x2)*x3)|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 118U;
	int16_t x7 = -1;
	uint8_t x8 = 117U;

	t1 = (((x5<x6)*x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	int16_t x11 = 13;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -1539769;

	t2 = (((x9<x10)*x11)|x12);

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -12261;
	volatile uint16_t x14 = 4941U;
	int32_t x15 = -1;
	volatile int64_t x16 = 8056985202553LL;

	t3 = (((x13<x14)*x15)|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	int32_t x19 = -1;

	t4 = (((x17<x18)*x19)|x20);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = -1LL;
	int64_t x23 = -426555585827LL;
	int16_t x24 = 19;
	volatile int64_t t5 = 43473013703241479LL;

	t5 = (((x21<x22)*x23)|x24);

	if (t5 != -426555585825LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -2169;
	uint8_t x26 = 4U;

	t6 = (((x25<x26)*x27)|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	static volatile int64_t t7 = 221772LL;

	t7 = (((x29<x30)*x31)|x32);

	if (t7 != 4949LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 1U;
	uint8_t x34 = 3U;
	volatile uint16_t x35 = 1U;
	uint32_t x36 = 5169791U;
	uint32_t t8 = 127166U;

	t8 = (((x33<x34)*x35)|x36);

	if (t8 != 5169791U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 5U;

	t9 = (((x37<x38)*x39)|x40);

	if (t9 != 5LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	int64_t x42 = INT64_MIN;
	int64_t x44 = -1LL;

	t10 = (((x41<x42)*x43)|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x47 = 55;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = 23869292;

	t11 = (((x45<x46)*x47)|x48);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = 32504U;
	static int16_t x51 = 1924;
	int8_t x52 = INT8_MAX;
	int32_t t12 = 1322560;

	t12 = (((x49<x50)*x51)|x52);

	if (t12 != 2047) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -27580403615939794LL;
	int32_t x54 = -1;
	volatile int32_t x56 = 6743767;
	static int32_t t13 = -135847959;

	t13 = (((x53<x54)*x55)|x56);

	if (t13 != -2140739881) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = UINT64_MAX;
	volatile int8_t x58 = INT8_MIN;
	static int32_t x59 = INT32_MIN;
	int64_t x60 = -126825351145355085LL;
	static int64_t t14 = 1133LL;

	t14 = (((x57<x58)*x59)|x60);

	if (t14 != -126825351145355085LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	volatile int32_t x62 = -293501317;
	static volatile int16_t x63 = INT16_MAX;
	volatile int8_t x64 = INT8_MIN;
	static int32_t t15 = 174;

	t15 = (((x61<x62)*x63)|x64);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int64_t x66 = -5497027090449861LL;
	int8_t x68 = INT8_MIN;
	int32_t t16 = 62;

	t16 = (((x65<x66)*x67)|x68);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 2299;
	volatile uint64_t x70 = 27481546320977LLU;
	uint64_t x71 = 132576666164015LLU;
	uint8_t x72 = UINT8_MAX;

	t17 = (((x69<x70)*x71)|x72);

	if (t17 != 132576666164223LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	volatile uint64_t x74 = 35LLU;
	volatile int8_t x75 = INT8_MIN;
	volatile uint32_t t18 = 480U;

	t18 = (((x73<x74)*x75)|x76);

	if (t18 != 726110857U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = UINT32_MAX;
	uint32_t x79 = 2017687U;
	int16_t x80 = -34;
	uint32_t t19 = 0U;

	t19 = (((x77<x78)*x79)|x80);

	if (t19 != 4294967263U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	uint8_t x82 = 58U;
	volatile int64_t x84 = -3284355656898993702LL;
	int64_t t20 = -4065990LL;

	t20 = (((x81<x82)*x83)|x84);

	if (t20 != -3284355656898991621LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static int16_t x86 = 61;
	static volatile int16_t x87 = INT16_MIN;
	volatile int32_t t21 = -29;

	t21 = (((x85<x86)*x87)|x88);

	if (t21 != -2901) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int16_t x91 = 114;
	static uint32_t x92 = 31224354U;
	static uint32_t t22 = 203918U;

	t22 = (((x89<x90)*x91)|x92);

	if (t22 != 31224354U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 5U;
	static int64_t x94 = -1LL;
	volatile int8_t x95 = INT8_MAX;
	int32_t x96 = -1;
	int32_t t23 = 387;

	t23 = (((x93<x94)*x95)|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x98 = INT16_MAX;
	int8_t x99 = -1;
	volatile int8_t x100 = -4;
	volatile int32_t t24 = 12201;

	t24 = (((x97<x98)*x99)|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;

	t25 = (((x101<x102)*x103)|x104);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 0U;
	static int32_t x106 = INT32_MIN;
	static int64_t x107 = INT64_MIN;
	volatile int32_t x108 = 0;

	t26 = (((x105<x106)*x107)|x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 84607U;
	int8_t x111 = INT8_MIN;
	volatile int32_t t27 = -702620;

	t27 = (((x109<x110)*x111)|x112);

	if (t27 != 7247) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = -92921019;

	t28 = (((x113<x114)*x115)|x116);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -5660;
	int8_t x119 = -3;
	volatile uint32_t t29 = 1323549836U;

	t29 = (((x117<x118)*x119)|x120);

	if (t29 != 8733U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	volatile int8_t x122 = -3;
	static uint32_t x123 = 584216439U;
	volatile uint32_t t30 = 106017056U;

	t30 = (((x121<x122)*x123)|x124);

	if (t30 != 4294934399U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -227;
	int32_t x127 = -1;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = -475;

	t31 = (((x125<x126)*x127)|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 1413662067603945320LLU;
	volatile int64_t x130 = INT64_MAX;
	int8_t x132 = INT8_MIN;

	t32 = (((x129<x130)*x131)|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	uint32_t x135 = 760U;
	int8_t x136 = -1;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (((x133<x134)*x135)|x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	uint64_t x139 = 1773733LLU;
	static uint8_t x140 = 3U;

	t34 = (((x137<x138)*x139)|x140);

	if (t34 != 1773735LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 2747539346936LL;
	int32_t x143 = INT32_MAX;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = (((x141<x142)*x143)|x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = UINT32_MAX;
	int8_t x148 = INT8_MAX;
	volatile int32_t t36 = -7947085;

	t36 = (((x145<x146)*x147)|x148);

	if (t36 != -32641) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MAX;
	int8_t x151 = INT8_MAX;
	uint64_t x152 = 5250LLU;
	uint64_t t37 = 10321LLU;

	t37 = (((x149<x150)*x151)|x152);

	if (t37 != 5375LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 18;
	int8_t x155 = INT8_MIN;
	int16_t x156 = 898;
	volatile int32_t t38 = 360;

	t38 = (((x153<x154)*x155)|x156);

	if (t38 != 898) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint16_t x158 = UINT16_MAX;
	static int64_t x159 = INT64_MIN;
	uint64_t t39 = 15LLU;

	t39 = (((x157<x158)*x159)|x160);

	if (t39 != 9223372036854966284LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -350357;
	static volatile int64_t x162 = 2031956534317LL;
	volatile uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 219U;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (((x161<x162)*x163)|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = 11902U;
	volatile int64_t x167 = INT64_MIN;
	int8_t x168 = -3;

	t41 = (((x165<x166)*x167)|x168);

	if (t41 != -3LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = 0;
	static int64_t x172 = 4112005700LL;
	int64_t t42 = -3490663LL;

	t42 = (((x169<x170)*x171)|x172);

	if (t42 != 4112005700LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int8_t x175 = INT8_MIN;

	t43 = (((x173<x174)*x175)|x176);

	if (t43 != 46872603225LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 7;
	volatile uint8_t x178 = 1U;
	static int16_t x180 = INT16_MAX;
	int32_t t44 = 4607821;

	t44 = (((x177<x178)*x179)|x180);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = 3;
	volatile uint64_t x183 = 1969444037LLU;
	static volatile uint64_t t45 = 12555614LLU;

	t45 = (((x181<x182)*x183)|x184);

	if (t45 != 42LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MIN;
	static uint32_t x187 = 377930672U;
	static uint8_t x188 = UINT8_MAX;
	volatile uint32_t t46 = 671527537U;

	t46 = (((x185<x186)*x187)|x188);

	if (t46 != 255U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	volatile int32_t x190 = INT32_MIN;
	uint64_t x191 = UINT64_MAX;
	volatile uint8_t x192 = 108U;
	volatile uint64_t t47 = 68100286553778485LLU;

	t47 = (((x189<x190)*x191)|x192);

	if (t47 != 108LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x194 = 999U;
	static uint32_t x196 = UINT32_MAX;
	volatile uint32_t t48 = UINT32_MAX;

	t48 = (((x193<x194)*x195)|x196);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 907U;
	uint8_t x198 = UINT8_MAX;
	int8_t x199 = INT8_MAX;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 27390;

	t49 = (((x197<x198)*x199)|x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 0U;
	volatile int16_t x202 = 26;
	static int8_t x203 = INT8_MIN;
	int16_t x204 = 266;

	t50 = (((x201<x202)*x203)|x204);

	if (t50 != -118) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MIN;

	t51 = (((x205<x206)*x207)|x208);

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 2U;
	uint16_t x210 = 5882U;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 13U;

	t52 = (((x209<x210)*x211)|x212);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 0LLU;
	int8_t x214 = -1;
	static int8_t x215 = INT8_MAX;
	uint32_t x216 = 227U;
	uint32_t t53 = 380U;

	t53 = (((x213<x214)*x215)|x216);

	if (t53 != 255U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 86LLU;
	static int32_t x218 = -1;
	static uint32_t x220 = 2016369375U;

	t54 = (((x217<x218)*x219)|x220);

	if (t54 != 4294957791U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = -119844LL;
	uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 42597U;
	uint32_t t55 = UINT32_MAX;

	t55 = (((x221<x222)*x223)|x224);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 3179772327680841LLU;
	static int64_t x226 = INT64_MIN;
	int8_t x227 = -3;
	int16_t x228 = INT16_MIN;
	static int32_t t56 = 1215379;

	t56 = (((x225<x226)*x227)|x228);

	if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint8_t x232 = 3U;
	int64_t t57 = INT64_MAX;

	t57 = (((x229<x230)*x231)|x232);

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 14U;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MIN;

	t58 = (((x233<x234)*x235)|x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -1;
	int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MAX;
	uint32_t x240 = UINT32_MAX;
	static volatile uint32_t t59 = UINT32_MAX;

	t59 = (((x237<x238)*x239)|x240);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 1;
	uint16_t x242 = 31053U;
	int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MAX;

	t60 = (((x241<x242)*x243)|x244);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	volatile uint32_t x247 = 8U;
	int8_t x248 = INT8_MIN;
	uint32_t t61 = 219532092U;

	t61 = (((x245<x246)*x247)|x248);

	if (t61 != 4294967168U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 288892115620799LL;
	int16_t x250 = INT16_MIN;
	volatile int8_t x251 = INT8_MIN;
	uint32_t x252 = 16103U;
	uint32_t t62 = 167236715U;

	t62 = (((x249<x250)*x251)|x252);

	if (t62 != 16103U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	static int16_t x255 = INT16_MIN;
	uint8_t x256 = 0U;

	t63 = (((x253<x254)*x255)|x256);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 1986809LLU;
	int8_t x258 = -1;
	uint16_t x259 = UINT16_MAX;
	int32_t x260 = -1;
	static int32_t t64 = -10124;

	t64 = (((x257<x258)*x259)|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 2;
	uint64_t x262 = 0LLU;
	int8_t x263 = INT8_MIN;
	volatile uint64_t x264 = 46300LLU;
	uint64_t t65 = 30428LLU;

	t65 = (((x261<x262)*x263)|x264);

	if (t65 != 46300LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	uint64_t x266 = UINT64_MAX;
	int32_t t66 = 3;

	t66 = (((x265<x266)*x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = UINT64_MAX;
	static volatile int32_t x270 = INT32_MIN;
	volatile uint64_t x272 = 1366173129968LLU;
	uint64_t t67 = 61228LLU;

	t67 = (((x269<x270)*x271)|x272);

	if (t67 != 1366173129968LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -1;
	static volatile uint8_t x274 = 0U;
	static uint32_t x276 = 7U;
	uint32_t t68 = 14U;

	t68 = (((x273<x274)*x275)|x276);

	if (t68 != 255U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = UINT8_MAX;
	uint64_t x279 = 125348834097224LLU;
	volatile int8_t x280 = 0;
	volatile uint64_t t69 = 32042LLU;

	t69 = (((x277<x278)*x279)|x280);

	if (t69 != 125348834097224LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x283 = 1U;
	static int32_t t70 = INT32_MIN;

	t70 = (((x281<x282)*x283)|x284);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -10851;
	uint16_t x287 = 11U;
	uint32_t x288 = 107361837U;
	static volatile uint32_t t71 = 43243U;

	t71 = (((x285<x286)*x287)|x288);

	if (t71 != 107361839U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = UINT16_MAX;
	int64_t x291 = -3305089042970358429LL;

	t72 = (((x289<x290)*x291)|x292);

	if (t72 != -3305089042970358421LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 0LLU;
	static volatile int64_t x294 = INT64_MIN;
	int32_t x295 = -1;
	int32_t x296 = -998104;
	volatile int32_t t73 = -27;

	t73 = (((x293<x294)*x295)|x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x297 = INT32_MIN;
	volatile int64_t x298 = -21545423072357LL;
	int64_t x300 = -255LL;
	volatile int64_t t74 = 1978027620LL;

	t74 = (((x297<x298)*x299)|x300);

	if (t74 != -255LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 1;
	uint32_t x302 = 7U;
	int64_t x303 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (((x301<x302)*x303)|x304);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int32_t x307 = INT32_MAX;
	uint32_t t76 = UINT32_MAX;

	t76 = (((x305<x306)*x307)|x308);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = 0;
	volatile int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MIN;
	int32_t x312 = 28;
	static volatile int32_t t77 = 128314850;

	t77 = (((x309<x310)*x311)|x312);

	if (t77 != 28) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	static uint16_t x314 = 16U;
	static int64_t x316 = -6855899951231255LL;
	volatile int64_t t78 = -5900LL;

	t78 = (((x313<x314)*x315)|x316);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -418;
	volatile uint32_t x319 = UINT32_MAX;
	static uint64_t t79 = UINT64_MAX;

	t79 = (((x317<x318)*x319)|x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 4222170U;
	int64_t x322 = INT64_MIN;
	volatile int8_t x323 = -1;
	int32_t t80 = 8152;

	t80 = (((x321<x322)*x323)|x324);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 1U;
	volatile int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	volatile int16_t x328 = -1;
	int32_t t81 = 0;

	t81 = (((x325<x326)*x327)|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 1102933479112461LLU;
	int32_t x330 = INT32_MAX;
	int64_t x331 = INT64_MIN;
	static uint16_t x332 = 120U;
	static int64_t t82 = -15374625441LL;

	t82 = (((x329<x330)*x331)|x332);

	if (t82 != 120LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 232001168LLU;
	int32_t x335 = -1;
	volatile int32_t t83 = -15;

	t83 = (((x333<x334)*x335)|x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	volatile int8_t x338 = INT8_MIN;
	static uint64_t x339 = UINT64_MAX;
	int8_t x340 = -1;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (((x337<x338)*x339)|x340);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x341 = INT8_MIN;
	uint32_t x342 = 122U;
	volatile uint16_t x343 = UINT16_MAX;
	int64_t x344 = -15367799304567439LL;
	int64_t t85 = -6333455LL;

	t85 = (((x341<x342)*x343)|x344);

	if (t85 != -15367799304567439LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int64_t x346 = -1LL;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = 901757819175575936LL;

	t86 = (((x345<x346)*x347)|x348);

	if (t86 != 901757819175575936LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 42832LL;
	int16_t x350 = INT16_MIN;
	static volatile int64_t t87 = 10505061784LL;

	t87 = (((x349<x350)*x351)|x352);

	if (t87 != 18LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MAX;
	static int8_t x355 = 1;
	volatile int32_t t88 = -213506075;

	t88 = (((x353<x354)*x355)|x356);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 1828U;
	uint32_t x358 = 211U;
	volatile int32_t x360 = INT32_MIN;

	t89 = (((x357<x358)*x359)|x360);

	if (t89 != -2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 30406366LLU;
	uint32_t x362 = 123510U;
	int32_t x363 = INT32_MIN;
	static int64_t x364 = INT64_MIN;

	t90 = (((x361<x362)*x363)|x364);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 3U;
	uint32_t x366 = UINT32_MAX;
	volatile int8_t x367 = INT8_MIN;
	uint16_t x368 = 0U;

	t91 = (((x365<x366)*x367)|x368);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 5;
	int8_t x370 = INT8_MAX;
	static int8_t x371 = 5;
	volatile int64_t t92 = -141530014562LL;

	t92 = (((x369<x370)*x371)|x372);

	if (t92 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	int16_t x374 = -1;
	int8_t x375 = INT8_MIN;
	volatile int8_t x376 = INT8_MIN;
	int32_t t93 = 287188;

	t93 = (((x373<x374)*x375)|x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x379 = -1;
	static int64_t x380 = -1LL;
	volatile int64_t t94 = 258753LL;

	t94 = (((x377<x378)*x379)|x380);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 4LLU;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MAX;

	t95 = (((x381<x382)*x383)|x384);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	uint8_t x386 = 12U;
	int32_t x387 = INT32_MIN;
	int8_t x388 = 1;
	int32_t t96 = 29267;

	t96 = (((x385<x386)*x387)|x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = INT32_MAX;
	volatile int64_t x390 = -46760054055740723LL;
	int32_t x391 = -63;

	t97 = (((x389<x390)*x391)|x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	static uint32_t x396 = UINT32_MAX;
	volatile int64_t t98 = 512655707LL;

	t98 = (((x393<x394)*x395)|x396);

	if (t98 != 4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x399 = UINT32_MAX;

	t99 = (((x397<x398)*x399)|x400);

	if (t99 != 111U) { NG(); } else { ; }
	
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

