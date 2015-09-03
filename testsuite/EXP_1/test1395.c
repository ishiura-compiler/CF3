#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
uint32_t x16 = UINT32_MAX;
uint32_t t2 = 329293U;
uint64_t x23 = 3100829LLU;
volatile uint64_t t4 = 186576065LLU;
static uint64_t x26 = 7449410649LLU;
volatile int64_t x34 = INT64_MIN;
uint64_t x35 = 118925226602LLU;
volatile uint64_t t7 = 668LLU;
volatile uint32_t x45 = 456U;
uint8_t x53 = 3U;
int32_t x54 = -237;
static uint64_t t14 = 840877739007207LLU;
volatile int16_t x79 = INT16_MIN;
volatile uint8_t x81 = UINT8_MAX;
int64_t x85 = 45498536LL;
static int16_t x89 = INT16_MIN;
int64_t t20 = 47LL;
volatile int8_t x94 = INT8_MIN;
uint32_t t22 = 1045563U;
volatile int32_t x101 = INT32_MAX;
int8_t x102 = INT8_MAX;
static uint8_t x106 = UINT8_MAX;
volatile int64_t x107 = INT64_MAX;
uint8_t x109 = UINT8_MAX;
int32_t x111 = INT32_MAX;
int16_t x112 = 12;
uint64_t x113 = 844466235LLU;
volatile int64_t t26 = 14876094LL;
volatile int32_t x117 = INT32_MIN;
int64_t x120 = INT64_MAX;
static int16_t x123 = INT16_MIN;
volatile int64_t t28 = -180352LL;
static int8_t x128 = INT8_MIN;
int32_t x139 = INT32_MAX;
int32_t x140 = INT32_MIN;
int64_t x141 = 922250774472626461LL;
volatile uint32_t t32 = 13954U;
int16_t x145 = 2365;
static volatile int8_t x152 = INT8_MIN;
volatile int32_t t34 = 99230;
uint8_t x154 = UINT8_MAX;
uint8_t x158 = 36U;
int64_t x161 = -1LL;
int64_t x168 = INT64_MAX;
static int64_t t38 = -145515LL;
int8_t x169 = -1;
static volatile int32_t x174 = 28155;
uint32_t x175 = UINT32_MAX;
uint32_t t40 = 70892U;
uint64_t x179 = 234857245646875171LLU;
volatile int8_t x185 = -1;
int32_t x190 = -1;
int16_t x197 = INT16_MAX;
static uint32_t x203 = UINT32_MAX;
static volatile int32_t x204 = -60;
int32_t x205 = -1029470875;
int64_t x219 = INT64_MAX;
volatile int8_t x220 = -1;
volatile int64_t t51 = 6LL;
static int64_t x229 = INT64_MIN;
uint8_t x233 = 101U;
volatile int32_t x244 = 45111;
uint32_t t57 = 114267739U;
volatile int16_t x246 = -58;
int8_t x247 = -1;
static int8_t x249 = INT8_MIN;
static int32_t t59 = -10036579;
uint16_t x267 = UINT16_MAX;
uint16_t x277 = 1U;
volatile uint64_t t65 = 665613619906LLU;
int64_t x281 = INT64_MAX;
int16_t x283 = INT16_MIN;
int32_t x297 = INT32_MIN;
volatile int64_t x300 = -1675LL;
volatile int16_t x304 = -1;
uint64_t x315 = 4159471LLU;
uint64_t t73 = 31LLU;
int16_t x321 = 7492;
volatile uint8_t x322 = UINT8_MAX;
int64_t x327 = -1LL;
uint32_t x328 = 59500U;
static int64_t x336 = 1409471594269535995LL;
volatile uint8_t x339 = 16U;
static int16_t x344 = INT16_MIN;
volatile int32_t x353 = INT32_MIN;
int32_t x356 = -1;
volatile uint8_t x358 = 26U;
int64_t x362 = -1LL;
int32_t x364 = 7;
uint8_t x378 = UINT8_MAX;
int64_t x380 = INT64_MAX;
int64_t t88 = 640027763922LL;
int16_t x382 = INT16_MAX;
static int32_t x384 = -2;
int16_t x387 = INT16_MIN;
volatile int64_t x388 = INT64_MIN;
int16_t x390 = -4846;
static volatile int8_t x400 = INT8_MAX;
volatile int16_t x402 = 5;
uint64_t x403 = 860LLU;
static uint64_t t94 = 790159LLU;
volatile int64_t x415 = INT64_MIN;
static int64_t t97 = 48429796747160LL;
static volatile int16_t x429 = -1;


void f0(void) {
	volatile uint8_t x2 = 25U;
	volatile int8_t x3 = INT8_MAX;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = 2562;

	t0 = (((x1<x2)/x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	int64_t x10 = -1LL;
	int32_t x11 = -7415;
	int16_t x12 = -1;
	static int32_t t1 = -72674352;

	t1 = (((x9<x10)/x11)/x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	int8_t x14 = INT8_MAX;
	volatile uint16_t x15 = 15283U;

	t2 = (((x13<x14)/x15)/x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -4;
	int32_t x18 = -28350094;
	volatile int16_t x19 = INT16_MAX;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t3 = -304;

	t3 = (((x17<x18)/x19)/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	uint8_t x22 = 0U;
	uint64_t x24 = 384171031LLU;

	t4 = (((x21<x22)/x23)/x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 25U;
	int8_t x27 = -1;
	static uint64_t x28 = 4416436872296793903LLU;
	volatile uint64_t t5 = 3022867170282006LLU;

	t5 = (((x25<x26)/x27)/x28);

	if (t5 != 4LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 121919195995LL;
	int16_t x30 = -1;
	uint32_t x31 = 113U;
	int64_t x32 = 4244747299LL;
	static volatile int64_t t6 = 1529282294533LL;

	t6 = (((x29<x30)/x31)/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 42;
	int32_t x36 = 11080710;

	t7 = (((x33<x34)/x35)/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	static volatile int32_t x38 = INT32_MIN;
	uint16_t x39 = 7U;
	uint64_t x40 = 528639678761LLU;
	static uint64_t t8 = 1378723652718125LLU;

	t8 = (((x37<x38)/x39)/x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MIN;
	volatile uint64_t x48 = 519350773300983176LLU;
	volatile uint64_t t9 = 100826250920586475LLU;

	t9 = (((x45<x46)/x47)/x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = 185;
	uint16_t x52 = 10459U;
	volatile int32_t t10 = 0;

	t10 = (((x49<x50)/x51)/x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x55 = 404098447635LLU;
	int32_t x56 = -3957187;
	uint64_t t11 = 390448405LLU;

	t11 = (((x53<x54)/x55)/x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = -1;
	int8_t x58 = 0;
	int16_t x59 = 18;
	uint64_t x60 = UINT64_MAX;
	uint64_t t12 = 1797437567074916373LLU;

	t12 = (((x57<x58)/x59)/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	uint64_t x62 = UINT64_MAX;
	volatile int8_t x63 = 57;
	volatile uint32_t x64 = 26604U;
	uint32_t t13 = 904913903U;

	t13 = (((x61<x62)/x63)/x64);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x65 = 51U;
	int16_t x66 = -1;
	static volatile uint64_t x67 = UINT64_MAX;
	uint8_t x68 = UINT8_MAX;

	t14 = (((x65<x66)/x67)/x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = -404;
	static volatile uint16_t x70 = 9U;
	volatile int32_t x71 = INT32_MIN;
	static int16_t x72 = INT16_MAX;
	int32_t t15 = -1532;

	t15 = (((x69<x70)/x71)/x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	uint8_t x75 = UINT8_MAX;
	volatile uint16_t x76 = 8777U;
	volatile int32_t t16 = -97475020;

	t16 = (((x73<x74)/x75)/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	static int8_t x78 = INT8_MIN;
	int8_t x80 = INT8_MIN;
	int32_t t17 = -300;

	t17 = (((x77<x78)/x79)/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = INT16_MIN;
	int16_t x83 = -1;
	int64_t x84 = INT64_MAX;
	static volatile int64_t t18 = -53867932265LL;

	t18 = (((x81<x82)/x83)/x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x86 = INT16_MIN;
	int32_t x87 = -1;
	uint64_t x88 = 2250926767022143LLU;
	uint64_t t19 = 104165LLU;

	t19 = (((x85<x86)/x87)/x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x90 = 65LLU;
	volatile int8_t x91 = 2;
	int64_t x92 = INT64_MIN;

	t20 = (((x89<x90)/x91)/x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x95 = 78U;
	int8_t x96 = INT8_MAX;
	volatile int32_t t21 = -15;

	t21 = (((x93<x94)/x95)/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = -1;
	int32_t x98 = INT32_MIN;
	int32_t x99 = 67649374;
	uint32_t x100 = UINT32_MAX;

	t22 = (((x97<x98)/x99)/x100);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x103 = 411500193;
	int32_t x104 = -1;
	int32_t t23 = -30;

	t23 = (((x101<x102)/x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x105 = 166009642U;
	int16_t x108 = INT16_MIN;
	static volatile int64_t t24 = -3323LL;

	t24 = (((x105<x106)/x107)/x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = INT16_MAX;
	volatile int32_t t25 = -17;

	t25 = (((x109<x110)/x111)/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x114 = 55U;
	volatile int8_t x115 = INT8_MIN;
	int64_t x116 = -1LL;

	t26 = (((x113<x114)/x115)/x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x118 = 29936948646670LLU;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int64_t t27 = 1472789LL;

	t27 = (((x117<x118)/x119)/x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1;
	static uint8_t x122 = 7U;
	int64_t x124 = INT64_MIN;

	t28 = (((x121<x122)/x123)/x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	int64_t x127 = -1LL;
	static volatile int64_t t29 = -2921072676905LL;

	t29 = (((x125<x126)/x127)/x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = 52;
	static int32_t x134 = -1;
	int8_t x135 = INT8_MIN;
	int16_t x136 = 338;
	int32_t t30 = 561832301;

	t30 = (((x133<x134)/x135)/x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	volatile int16_t x138 = INT16_MIN;
	volatile int32_t t31 = 6064;

	t31 = (((x137<x138)/x139)/x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x142 = 31614U;
	int32_t x143 = INT32_MIN;
	static uint32_t x144 = 7U;

	t32 = (((x141<x142)/x143)/x144);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x146 = 4048320LLU;
	static volatile int8_t x147 = INT8_MAX;
	int16_t x148 = INT16_MIN;
	static int32_t t33 = 0;

	t33 = (((x145<x146)/x147)/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = 80000765LL;
	static volatile int8_t x150 = INT8_MAX;
	int16_t x151 = INT16_MAX;

	t34 = (((x149<x150)/x151)/x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = -49578LL;
	int32_t x155 = 411;
	int16_t x156 = INT16_MIN;
	int32_t t35 = 6416;

	t35 = (((x153<x154)/x155)/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -2937199983824008LL;
	int8_t x159 = 1;
	static int64_t x160 = -41001190063529136LL;
	int64_t t36 = 30389443803LL;

	t36 = (((x157<x158)/x159)/x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x162 = INT8_MIN;
	int16_t x163 = -37;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t37 = 24833;

	t37 = (((x161<x162)/x163)/x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int32_t x166 = -1;
	volatile int8_t x167 = INT8_MIN;

	t38 = (((x165<x166)/x167)/x168);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x170 = INT8_MAX;
	static int32_t x171 = -410526;
	int32_t x172 = -6366;
	int32_t t39 = 1999;

	t39 = (((x169<x170)/x171)/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -6924;
	volatile int32_t x176 = INT32_MIN;

	t40 = (((x173<x174)/x175)/x176);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = -1;
	static int16_t x180 = 1524;
	uint64_t t41 = 45410LLU;

	t41 = (((x177<x178)/x179)/x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = -71;
	uint16_t x182 = UINT16_MAX;
	volatile int16_t x183 = INT16_MIN;
	int16_t x184 = -1;
	volatile int32_t t42 = 2067479;

	t42 = (((x181<x182)/x183)/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x186 = INT64_MIN;
	static int32_t x187 = -27473273;
	static uint8_t x188 = 49U;
	int32_t t43 = -213740222;

	t43 = (((x185<x186)/x187)/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = INT64_MAX;
	int8_t x191 = 13;
	int32_t x192 = 1502;
	int32_t t44 = 15;

	t44 = (((x189<x190)/x191)/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MAX;
	int16_t x194 = -1;
	volatile uint32_t x195 = UINT32_MAX;
	int64_t x196 = 126730174LL;
	static int64_t t45 = -5764016373LL;

	t45 = (((x193<x194)/x195)/x196);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x198 = -25;
	int16_t x199 = INT16_MIN;
	int32_t x200 = 22045384;
	int32_t t46 = -34426;

	t46 = (((x197<x198)/x199)/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = 8769;
	uint8_t x202 = 2U;
	uint32_t t47 = 5213U;

	t47 = (((x201<x202)/x203)/x204);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x206 = INT16_MIN;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = 607737LLU;
	uint64_t t48 = 1941592110596422LLU;

	t48 = (((x205<x206)/x207)/x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = -1LL;
	volatile int16_t x210 = INT16_MIN;
	uint64_t x211 = 2289513LLU;
	uint8_t x212 = 7U;
	uint64_t t49 = 9083774142349981031LLU;

	t49 = (((x209<x210)/x211)/x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -1;
	volatile uint32_t x214 = UINT32_MAX;
	int64_t x215 = 122726870751530880LL;
	int64_t x216 = INT64_MIN;
	static int64_t t50 = 69LL;

	t50 = (((x213<x214)/x215)/x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = 30292U;
	static volatile uint16_t x218 = 3U;

	t51 = (((x217<x218)/x219)/x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x221 = -1LL;
	static uint16_t x222 = 22U;
	int8_t x223 = -1;
	static int32_t x224 = -410542025;
	int32_t t52 = 0;

	t52 = (((x221<x222)/x223)/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = 507977U;
	volatile int16_t x226 = 0;
	uint16_t x227 = UINT16_MAX;
	static int32_t x228 = INT32_MAX;
	volatile int32_t t53 = -41;

	t53 = (((x225<x226)/x227)/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x230 = UINT64_MAX;
	uint8_t x231 = UINT8_MAX;
	static volatile uint64_t x232 = 1630795LLU;
	uint64_t t54 = 65446281LLU;

	t54 = (((x229<x230)/x231)/x232);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x234 = INT8_MIN;
	uint8_t x235 = 15U;
	uint16_t x236 = 3U;
	int32_t t55 = -70;

	t55 = (((x233<x234)/x235)/x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = -1697;
	volatile int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MAX;
	static int32_t t56 = -31;

	t56 = (((x237<x238)/x239)/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = -1;
	volatile uint64_t x242 = 185LLU;
	uint32_t x243 = 35497U;

	t57 = (((x241<x242)/x243)/x244);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -55;
	int8_t x248 = 6;
	int32_t t58 = 55279055;

	t58 = (((x245<x246)/x247)/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x250 = INT64_MIN;
	static int32_t x251 = 15854;
	int16_t x252 = -1;

	t59 = (((x249<x250)/x251)/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MIN;
	static int8_t x254 = INT8_MAX;
	static uint8_t x255 = 1U;
	static volatile int64_t x256 = -1326926LL;
	volatile int64_t t60 = 18LL;

	t60 = (((x253<x254)/x255)/x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = -138814718322646709LL;
	int32_t x258 = -1;
	volatile int16_t x259 = -1;
	int8_t x260 = -1;
	int32_t t61 = 122645;

	t61 = (((x257<x258)/x259)/x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	uint16_t x263 = UINT16_MAX;
	static uint32_t x264 = UINT32_MAX;
	volatile uint32_t t62 = 1047235U;

	t62 = (((x261<x262)/x263)/x264);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x265 = INT8_MAX;
	static volatile uint16_t x266 = UINT16_MAX;
	volatile int32_t x268 = 149;
	static volatile int32_t t63 = -944769841;

	t63 = (((x265<x266)/x267)/x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = -1;
	uint32_t x274 = 590616U;
	int8_t x275 = INT8_MAX;
	int8_t x276 = 3;
	volatile int32_t t64 = 91898;

	t64 = (((x273<x274)/x275)/x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x278 = 2547U;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MAX;

	t65 = (((x277<x278)/x279)/x280);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x282 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t66 = 1794;

	t66 = (((x281<x282)/x283)/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x289 = INT64_MIN;
	static int16_t x290 = -13;
	uint64_t x291 = UINT64_MAX;
	int16_t x292 = -1;
	uint64_t t67 = 62809956910LLU;

	t67 = (((x289<x290)/x291)/x292);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	static volatile int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t68 = 78955;

	t68 = (((x293<x294)/x295)/x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x298 = 0;
	int8_t x299 = -1;
	static volatile int64_t t69 = -14018198LL;

	t69 = (((x297<x298)/x299)/x300);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x301 = UINT16_MAX;
	volatile int8_t x302 = INT8_MAX;
	static uint32_t x303 = 10214050U;
	volatile uint32_t t70 = 286608U;

	t70 = (((x301<x302)/x303)/x304);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MIN;
	volatile int32_t x306 = -55796;
	volatile uint32_t x307 = 30667957U;
	uint64_t x308 = 89971LLU;
	uint64_t t71 = 237547502755299981LLU;

	t71 = (((x305<x306)/x307)/x308);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = 38919815;
	int32_t x310 = INT32_MAX;
	int16_t x311 = INT16_MIN;
	uint8_t x312 = 49U;
	volatile int32_t t72 = 286707878;

	t72 = (((x309<x310)/x311)/x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MAX;
	int8_t x316 = -1;

	t73 = (((x313<x314)/x315)/x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = -1;
	int32_t x318 = INT32_MIN;
	int8_t x319 = 5;
	int32_t x320 = INT32_MIN;
	volatile int32_t t74 = -28792798;

	t74 = (((x317<x318)/x319)/x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x323 = 21586420;
	uint16_t x324 = 1U;
	volatile int32_t t75 = 1;

	t75 = (((x321<x322)/x323)/x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = 3;
	int8_t x326 = INT8_MIN;
	int64_t t76 = -4236188523655LL;

	t76 = (((x325<x326)/x327)/x328);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MIN;
	static int8_t x331 = INT8_MAX;
	static volatile int64_t x332 = INT64_MAX;
	int64_t t77 = 135238LL;

	t77 = (((x329<x330)/x331)/x332);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = -1LL;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	int64_t t78 = 67237038009LL;

	t78 = (((x333<x334)/x335)/x336);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile int32_t x338 = -1;
	uint64_t x340 = 491600LLU;
	volatile uint64_t t79 = 379693873666483LLU;

	t79 = (((x337<x338)/x339)/x340);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	static uint32_t x342 = 1613U;
	static uint32_t x343 = 415384U;
	uint32_t t80 = 3309U;

	t80 = (((x341<x342)/x343)/x344);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x345 = 3688808851921LLU;
	static volatile int64_t x346 = -389628809382871LL;
	int16_t x347 = -1;
	uint64_t x348 = 480656959LLU;
	volatile uint64_t t81 = 842LLU;

	t81 = (((x345<x346)/x347)/x348);

	if (t81 != 38378189950LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MIN;
	uint16_t x352 = 222U;
	volatile int32_t t82 = 291452580;

	t82 = (((x349<x350)/x351)/x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x354 = 31U;
	int8_t x355 = 5;
	int32_t t83 = 16751034;

	t83 = (((x353<x354)/x355)/x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x357 = 14826LLU;
	static uint64_t x359 = 54417032327304286LLU;
	volatile uint32_t x360 = 1438911254U;
	uint64_t t84 = 12LLU;

	t84 = (((x357<x358)/x359)/x360);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = -1LL;
	int64_t x363 = INT64_MIN;
	int64_t t85 = 33413LL;

	t85 = (((x361<x362)/x363)/x364);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x365 = INT8_MAX;
	int8_t x366 = 0;
	static uint16_t x367 = 1080U;
	uint16_t x368 = 14U;
	static volatile int32_t t86 = -8253;

	t86 = (((x365<x366)/x367)/x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x373 = INT8_MIN;
	int64_t x374 = 6444LL;
	int32_t x375 = INT32_MAX;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t87 = -18370491;

	t87 = (((x373<x374)/x375)/x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x377 = 95U;
	uint32_t x379 = 64U;

	t88 = (((x377<x378)/x379)/x380);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x383 = 6;
	int32_t t89 = -2;

	t89 = (((x381<x382)/x383)/x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x385 = 4U;
	uint8_t x386 = 29U;
	volatile int64_t t90 = 7256LL;

	t90 = (((x385<x386)/x387)/x388);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x389 = 1888240951LLU;
	static volatile int32_t x391 = -1;
	uint16_t x392 = 135U;
	int32_t t91 = 33;

	t91 = (((x389<x390)/x391)/x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = 1;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -1;
	uint64_t x396 = 139559194418735LLU;
	volatile uint64_t t92 = 10LLU;

	t92 = (((x393<x394)/x395)/x396);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x397 = INT64_MAX;
	static int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	volatile int32_t t93 = -113;

	t93 = (((x397<x398)/x399)/x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x401 = -1LL;
	int32_t x404 = -257;

	t94 = (((x401<x402)/x403)/x404);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = -1;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MAX;
	static int64_t x408 = -1LL;
	volatile int64_t t95 = 647639644469725897LL;

	t95 = (((x405<x406)/x407)/x408);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x409 = UINT32_MAX;
	static uint32_t x410 = 1985U;
	static int16_t x411 = -1;
	static uint64_t x412 = UINT64_MAX;
	volatile uint64_t t96 = 81LLU;

	t96 = (((x409<x410)/x411)/x412);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x413 = 7798433714LL;
	volatile uint8_t x414 = UINT8_MAX;
	volatile int32_t x416 = -5;

	t97 = (((x413<x414)/x415)/x416);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x417 = UINT32_MAX;
	static int16_t x418 = 6;
	int8_t x419 = INT8_MIN;
	volatile uint16_t x420 = 21925U;
	static volatile int32_t t98 = -8118159;

	t98 = (((x417<x418)/x419)/x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x430 = INT64_MIN;
	static int8_t x431 = -1;
	uint32_t x432 = 160538U;
	uint32_t t99 = 98657511U;

	t99 = (((x429<x430)/x431)/x432);

	if (t99 != 0U) { NG(); } else { ; }
	
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

