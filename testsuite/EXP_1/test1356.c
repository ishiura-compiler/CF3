#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x18 = 123U;
uint32_t t4 = 32975354U;
uint16_t x26 = 7U;
volatile uint64_t t6 = 1482845872LLU;
uint16_t x35 = 15U;
static volatile int32_t x36 = INT32_MIN;
static uint16_t x38 = 143U;
int8_t x45 = INT8_MIN;
static int8_t x47 = -1;
int32_t x48 = -1;
int64_t x49 = -14229663751684LL;
volatile int16_t x50 = INT16_MIN;
static volatile int32_t t12 = 92;
static int64_t x58 = INT64_MAX;
static int64_t t14 = 5885092LL;
static uint16_t x70 = 0U;
uint8_t x73 = 0U;
int64_t x78 = INT64_MAX;
int64_t x82 = -4067241786520LL;
int32_t x88 = INT32_MIN;
int16_t x96 = -1;
volatile int16_t x98 = INT16_MIN;
int32_t x102 = -1;
int64_t t26 = 3125043099829070LL;
static volatile int64_t x113 = -500LL;
static int64_t x121 = -170235191050LL;
int64_t x129 = -27909508LL;
int32_t x132 = INT32_MAX;
volatile int32_t x135 = -208986794;
volatile int64_t t33 = 1977321LL;
int8_t x145 = 1;
uint64_t x146 = 110782171925532844LLU;
int8_t x149 = -1;
int32_t x150 = INT32_MAX;
static int8_t x152 = -1;
int16_t x153 = -329;
uint64_t x157 = 47LLU;
static uint64_t x158 = UINT64_MAX;
int8_t x172 = 2;
static int32_t t41 = 436;
volatile int32_t x178 = -1;
int32_t x185 = -1;
volatile int32_t x196 = -12953;
int16_t x200 = INT16_MAX;
volatile int32_t t48 = -138693714;
int16_t x207 = INT16_MIN;
volatile int64_t t49 = -241488551220LL;
int16_t x212 = 1;
int8_t x217 = INT8_MAX;
static int32_t x221 = INT32_MIN;
uint8_t x222 = UINT8_MAX;
uint8_t x224 = 3U;
volatile int8_t x225 = -1;
int16_t x227 = 0;
static int8_t x240 = -5;
volatile int32_t x242 = INT32_MIN;
volatile int64_t x246 = -1LL;
int32_t t59 = -1100;
static int32_t x259 = INT32_MIN;
uint64_t x267 = UINT64_MAX;
uint32_t t63 = 10U;
volatile int32_t x280 = 6872967;
int16_t x285 = -1;
uint64_t x287 = 1148969LLU;
volatile uint64_t t67 = 65796161101161065LLU;
int32_t t68 = -1048588575;
static uint64_t x293 = 1365577284317809895LLU;
volatile uint16_t x295 = UINT16_MAX;
static int32_t t69 = 10408;
int32_t x298 = -1;
volatile uint64_t t72 = 25667235LLU;
static int8_t x309 = -1;
int32_t x311 = INT32_MIN;
int64_t x312 = -163LL;
static uint64_t x318 = 11481LLU;
volatile int8_t x319 = INT8_MAX;
uint32_t t75 = 3U;
volatile int64_t x321 = INT64_MIN;
volatile int32_t x325 = INT32_MAX;
static int8_t x330 = -2;
uint16_t x335 = 38U;
static int32_t x336 = 16618;
uint8_t x342 = 38U;
int8_t x343 = 1;
uint16_t x344 = UINT16_MAX;
volatile int32_t t84 = -2;
volatile int32_t x359 = INT32_MIN;
volatile int16_t x364 = INT16_MAX;
volatile int16_t x366 = -270;
uint16_t x368 = 89U;
int64_t x375 = INT64_MIN;
volatile uint64_t x377 = UINT64_MAX;
uint16_t x378 = UINT16_MAX;
int64_t x382 = 2059018379LL;
int64_t t91 = 37021646LL;
uint16_t x400 = 5917U;
static volatile int32_t t94 = 3;
int8_t x404 = INT8_MAX;
uint64_t x405 = UINT64_MAX;
int32_t x406 = -43;
int32_t x410 = -30303;
volatile int64_t t98 = 612699328433473LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = UINT64_MAX;
	uint32_t x4 = 1133712512U;
	uint64_t t0 = 99653927738823LLU;

	t0 = (((x1<x2)+x3)/x4);

	if (t0 != 16271095077LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint16_t x6 = UINT16_MAX;
	static volatile int16_t x7 = 2245;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 1338804U;

	t1 = (((x5<x6)+x7)/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = UINT16_MAX;
	static int64_t x10 = INT64_MAX;
	uint32_t x11 = 1U;
	static uint32_t x12 = 323312U;
	volatile uint32_t t2 = 317726U;

	t2 = (((x9<x10)+x11)/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 93U;
	int8_t x14 = INT8_MAX;
	volatile int16_t x15 = -2;
	uint8_t x16 = 8U;
	volatile int32_t t3 = 1504568;

	t3 = (((x13<x14)+x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -739545145LL;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 17U;

	t4 = (((x17<x18)+x19)/x20);

	if (t4 != 126322567U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 5U;
	uint64_t x22 = 5556LLU;
	int16_t x23 = INT16_MAX;
	volatile int16_t x24 = INT16_MIN;
	static int32_t t5 = 212;

	t5 = (((x21<x22)+x23)/x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 3U;
	volatile int8_t x27 = -1;
	static volatile uint64_t x28 = 46873685LLU;

	t6 = (((x25<x26)+x27)/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -235074LL;
	int16_t x30 = -1;
	int32_t x31 = INT32_MIN;
	volatile int8_t x32 = -1;
	int32_t t7 = INT32_MAX;

	t7 = (((x29<x30)+x31)/x32);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 18582U;
	static volatile uint8_t x34 = UINT8_MAX;
	int32_t t8 = 243396447;

	t8 = (((x33<x34)+x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 596;
	static int8_t x39 = -1;
	static uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 7U;

	t9 = (((x37<x38)+x39)/x40);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 0;
	int8_t x42 = 0;
	int64_t x43 = -170621613LL;
	uint32_t x44 = 441U;
	static volatile int64_t t10 = 178896LL;

	t10 = (((x41<x42)+x43)/x44);

	if (t10 != -386897LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = -47;
	volatile int32_t t11 = 233036249;

	t11 = (((x45<x46)+x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = -1;
	int8_t x52 = INT8_MAX;

	t12 = (((x49<x50)+x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 10917654582268967LL;
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = -4666;
	static int8_t x56 = -1;
	static int32_t t13 = -219785682;

	t13 = (((x53<x54)+x55)/x56);

	if (t13 != 4666) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 23008286733490095LLU;
	int16_t x59 = INT16_MIN;
	int64_t x60 = -1LL;

	t14 = (((x57<x58)+x59)/x60);

	if (t14 != 32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int8_t x62 = 0;
	static uint32_t x63 = UINT32_MAX;
	uint32_t x64 = UINT32_MAX;
	static uint32_t t15 = 183950U;

	t15 = (((x61<x62)+x63)/x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	uint64_t x66 = UINT64_MAX;
	static uint16_t x67 = 19919U;
	int32_t x68 = -2412784;
	int32_t t16 = 84;

	t16 = (((x65<x66)+x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MAX;
	volatile uint8_t x71 = 1U;
	int32_t x72 = 4;
	volatile int32_t t17 = -120063656;

	t17 = (((x69<x70)+x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MAX;
	int32_t x75 = -1;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -18034893;

	t18 = (((x73<x74)+x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = -1;
	int32_t t19 = -22175;

	t19 = (((x77<x78)+x79)/x80);

	if (t19 != -256) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static int32_t x83 = -6635123;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 528156;

	t20 = (((x81<x82)+x83)/x84);

	if (t20 != 51836) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 54U;
	uint64_t x86 = 245397188191522649LLU;
	int8_t x87 = 0;
	volatile int32_t t21 = -50264;

	t21 = (((x85<x86)+x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	volatile int32_t x90 = INT32_MAX;
	volatile int32_t x91 = 6;
	volatile uint8_t x92 = 5U;
	volatile int32_t t22 = 20;

	t22 = (((x89<x90)+x91)/x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int32_t x94 = -93326110;
	uint32_t x95 = 494270U;
	static uint32_t t23 = 10687462U;

	t23 = (((x93<x94)+x95)/x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -3;
	uint64_t x99 = UINT64_MAX;
	volatile int64_t x100 = 7583LL;
	volatile uint64_t t24 = 307354469972LLU;

	t24 = (((x97<x98)+x99)/x100);

	if (t24 != 2432644609482995LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	static uint8_t x103 = 11U;
	static int64_t x104 = INT64_MIN;
	int64_t t25 = -50LL;

	t25 = (((x101<x102)+x103)/x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 3333599079LL;
	volatile uint8_t x106 = 13U;
	int32_t x107 = 207607;
	int64_t x108 = 34097793355423442LL;

	t26 = (((x105<x106)+x107)/x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = 0;
	int32_t x111 = -51572;
	int64_t x112 = INT64_MIN;
	int64_t t27 = 18788LL;

	t27 = (((x109<x110)+x111)/x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MAX;
	uint16_t x115 = 23944U;
	uint32_t x116 = 91U;
	static volatile uint32_t t28 = 1U;

	t28 = (((x113<x114)+x115)/x116);

	if (t28 != 263U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = -1LL;
	int8_t x123 = INT8_MAX;
	static int16_t x124 = -236;
	int32_t t29 = 912;

	t29 = (((x121<x122)+x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MAX;
	int16_t x127 = -1;
	int8_t x128 = INT8_MIN;
	volatile int32_t t30 = 2262527;

	t30 = (((x125<x126)+x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x130 = 1U;
	int16_t x131 = 3;
	int32_t t31 = 30225511;

	t31 = (((x129<x130)+x131)/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MAX;
	static volatile uint16_t x134 = UINT16_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t32 = -100218;

	t32 = (((x133<x134)+x135)/x136);

	if (t32 != 1632709) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x137 = INT32_MIN;
	uint32_t x138 = 1873U;
	static int64_t x139 = INT64_MAX;
	volatile int32_t x140 = INT32_MIN;

	t33 = (((x137<x138)+x139)/x140);

	if (t33 != -4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x141 = 1LLU;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = INT16_MAX;
	int32_t t34 = -352;

	t34 = (((x141<x142)+x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x147 = -1;
	int16_t x148 = 8;
	volatile int32_t t35 = -335795769;

	t35 = (((x145<x146)+x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x151 = 19U;
	int32_t t36 = 8470999;

	t36 = (((x149<x150)+x151)/x152);

	if (t36 != -20) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x154 = INT64_MIN;
	static int8_t x155 = INT8_MIN;
	static int64_t x156 = INT64_MIN;
	int64_t t37 = 237971598191LL;

	t37 = (((x153<x154)+x155)/x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x159 = INT16_MAX;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t38 = 0;

	t38 = (((x157<x158)+x159)/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	volatile int8_t x164 = -45;
	volatile int32_t t39 = -12;

	t39 = (((x161<x162)+x163)/x164);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x165 = INT8_MIN;
	static int8_t x166 = -7;
	volatile uint8_t x167 = 2U;
	volatile int8_t x168 = INT8_MIN;
	static volatile int32_t t40 = -1;

	t40 = (((x165<x166)+x167)/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x169 = 10415593064012226LLU;
	int8_t x170 = 42;
	int16_t x171 = -1;

	t41 = (((x169<x170)+x171)/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	uint8_t x174 = UINT8_MAX;
	int64_t x175 = -1LL;
	int64_t x176 = -22LL;
	volatile int64_t t42 = 107083916973LL;

	t42 = (((x173<x174)+x175)/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = UINT16_MAX;
	int16_t x179 = -98;
	int8_t x180 = INT8_MIN;
	static int32_t t43 = 205338769;

	t43 = (((x177<x178)+x179)/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x181 = 10U;
	uint64_t x182 = 37LLU;
	uint64_t x183 = 92456583687LLU;
	uint64_t x184 = 2328642LLU;
	volatile uint64_t t44 = 2832823152959230LLU;

	t44 = (((x181<x182)+x183)/x184);

	if (t44 != 39704LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x186 = UINT8_MAX;
	volatile int8_t x187 = 1;
	volatile uint32_t x188 = 240665306U;
	volatile uint32_t t45 = 1811808U;

	t45 = (((x185<x186)+x187)/x188);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MIN;
	int16_t x190 = INT16_MIN;
	int32_t x191 = -459587499;
	static int64_t x192 = -125806822661616LL;
	int64_t t46 = 4925305115LL;

	t46 = (((x189<x190)+x191)/x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x193 = -9;
	static int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MAX;
	int64_t t47 = 178952188409LL;

	t47 = (((x193<x194)+x195)/x196);

	if (t47 != -712064543878234LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = UINT8_MAX;
	int64_t x198 = -22979LL;
	int32_t x199 = INT32_MIN;

	t48 = (((x197<x198)+x199)/x200);

	if (t48 != -65538) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = 21813U;
	volatile int16_t x206 = INT16_MIN;
	static int64_t x208 = -438874666121711LL;

	t49 = (((x205<x206)+x207)/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = 0;
	uint32_t x210 = 1801U;
	int16_t x211 = -1;
	int32_t t50 = 8250;

	t50 = (((x209<x210)+x211)/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = -1;
	int32_t x215 = INT32_MAX;
	int32_t x216 = -4912116;
	volatile int32_t t51 = 2008064;

	t51 = (((x213<x214)+x215)/x216);

	if (t51 != -437) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x218 = -21270852LL;
	uint8_t x219 = 122U;
	uint8_t x220 = UINT8_MAX;
	static volatile int32_t t52 = -2;

	t52 = (((x217<x218)+x219)/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x223 = -1LL;
	int64_t t53 = 33903414784LL;

	t53 = (((x221<x222)+x223)/x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x226 = INT8_MAX;
	uint64_t x228 = UINT64_MAX;
	uint64_t t54 = 2523384564827LLU;

	t54 = (((x225<x226)+x227)/x228);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = 3;
	int64_t x234 = INT64_MIN;
	volatile int8_t x235 = 0;
	uint64_t x236 = UINT64_MAX;
	uint64_t t55 = 124LLU;

	t55 = (((x233<x234)+x235)/x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = 15;
	int8_t x239 = -1;
	volatile int32_t t56 = -277017205;

	t56 = (((x237<x238)+x239)/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x241 = 3184303U;
	static uint32_t x243 = UINT32_MAX;
	uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t57 = 531849611845LLU;

	t57 = (((x241<x242)+x243)/x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 6392838LLU;
	int16_t x247 = 5;
	static uint64_t x248 = 15696225310LLU;
	uint64_t t58 = 2378712934LLU;

	t58 = (((x245<x246)+x247)/x248);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MAX;

	t59 = (((x253<x254)+x255)/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = INT32_MAX;
	int8_t x258 = 4;
	int16_t x260 = 3614;
	int32_t t60 = -1;

	t60 = (((x257<x258)+x259)/x260);

	if (t60 != -594212) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x261 = UINT16_MAX;
	int32_t x262 = 210567618;
	uint32_t x263 = 50U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t61 = -2727LL;

	t61 = (((x261<x262)+x263)/x264);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = INT64_MIN;
	static int8_t x268 = INT8_MIN;
	volatile uint64_t t62 = 166754723089LLU;

	t62 = (((x265<x266)+x267)/x268);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x269 = 252381U;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 4533237U;
	int16_t x272 = INT16_MAX;

	t63 = (((x269<x270)+x271)/x272);

	if (t63 != 138U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MAX;
	uint64_t x274 = UINT64_MAX;
	static uint16_t x275 = 10U;
	uint8_t x276 = 3U;
	int32_t t64 = 1;

	t64 = (((x273<x274)+x275)/x276);

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = 3;
	uint16_t x278 = 0U;
	volatile uint64_t x279 = UINT64_MAX;
	volatile uint64_t t65 = 241884500LLU;

	t65 = (((x277<x278)+x279)/x280);

	if (t65 != 2683956444678LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -1;
	uint8_t x282 = 0U;
	uint16_t x283 = 15358U;
	uint64_t x284 = 1232769527036LLU;
	static volatile uint64_t t66 = 251674733366300423LLU;

	t66 = (((x281<x282)+x283)/x284);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x286 = 3U;
	static int16_t x288 = INT16_MIN;

	t67 = (((x285<x286)+x287)/x288);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = 431U;
	int16_t x290 = INT16_MAX;
	int16_t x291 = -15244;
	static int32_t x292 = INT32_MIN;

	t68 = (((x289<x290)+x291)/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x294 = -1;
	uint8_t x296 = 55U;

	t69 = (((x293<x294)+x295)/x296);

	if (t69 != 1191) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -1;
	int64_t x299 = INT64_MAX;
	volatile int32_t x300 = INT32_MAX;
	static int64_t t70 = 136453718015009LL;

	t70 = (((x297<x298)+x299)/x300);

	if (t70 != 4294967298LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = -1;
	static int16_t x302 = INT16_MIN;
	static int16_t x303 = INT16_MAX;
	static int32_t x304 = INT32_MAX;
	int32_t t71 = -815651;

	t71 = (((x301<x302)+x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = 17913035209035615LL;
	volatile uint32_t x306 = 1636132930U;
	uint64_t x307 = 324LLU;
	uint64_t x308 = 2171106LLU;

	t72 = (((x305<x306)+x307)/x308);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x310 = 1LLU;
	volatile int64_t t73 = 61196918LL;

	t73 = (((x309<x310)+x311)/x312);

	if (t73 != 13174746LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	volatile uint8_t x314 = 63U;
	volatile int32_t x315 = -19;
	volatile int8_t x316 = INT8_MIN;
	int32_t t74 = 139906;

	t74 = (((x313<x314)+x315)/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x317 = UINT16_MAX;
	static volatile uint32_t x320 = 3110U;

	t75 = (((x317<x318)+x319)/x320);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x322 = 161385670364LLU;
	static int64_t x323 = INT64_MIN;
	int32_t x324 = 79059;
	int64_t t76 = 13LL;

	t76 = (((x321<x322)+x323)/x324);

	if (t76 != -116664415649765LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x326 = -20671;
	int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MIN;
	static int32_t t77 = 587702533;

	t77 = (((x325<x326)+x327)/x328);

	if (t77 != -255) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 312U;
	static int32_t x331 = INT32_MIN;
	uint64_t x332 = 939938759LLU;
	uint64_t t78 = 1560457753LLU;

	t78 = (((x329<x330)+x331)/x332);

	if (t78 != 19625474420LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	int32_t t79 = -3;

	t79 = (((x333<x334)+x335)/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 107U;
	volatile int64_t x338 = -1LL;
	int16_t x339 = -28;
	uint64_t x340 = 49520LLU;
	static volatile uint64_t t80 = 138984916LLU;

	t80 = (((x337<x338)+x339)/x340);

	if (t80 != 372510986948900LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = 1;
	volatile int32_t t81 = 1374939;

	t81 = (((x341<x342)+x343)/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x345 = -4404957LL;
	int16_t x346 = 1744;
	uint16_t x347 = 387U;
	volatile uint32_t x348 = UINT32_MAX;
	volatile uint32_t t82 = 2273698U;

	t82 = (((x345<x346)+x347)/x348);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = -1;
	static int32_t x350 = INT32_MAX;
	uint16_t x351 = UINT16_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t83 = 5990249815LLU;

	t83 = (((x349<x350)+x351)/x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MAX;
	volatile int32_t x354 = -7580;
	static volatile uint16_t x355 = UINT16_MAX;
	volatile int32_t x356 = INT32_MAX;

	t84 = (((x353<x354)+x355)/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = -49;
	uint16_t x358 = 30227U;
	volatile int32_t x360 = -1;
	int32_t t85 = INT32_MAX;

	t85 = (((x357<x358)+x359)/x360);

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 44068LLU;
	uint32_t x362 = 305832U;
	static volatile int64_t x363 = INT64_MIN;
	int64_t t86 = -88578498LL;

	t86 = (((x361<x362)+x363)/x364);

	if (t86 != -281483566907400LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x365 = -1LL;
	uint8_t x367 = 3U;
	volatile int32_t t87 = 15403;

	t87 = (((x365<x366)+x367)/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = -1;
	int32_t x374 = -3110240;
	volatile int16_t x376 = INT16_MAX;
	int64_t t88 = 46716824425828482LL;

	t88 = (((x373<x374)+x375)/x376);

	if (t88 != -281483566907400LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x379 = 378015LLU;
	volatile int32_t x380 = -1;
	static uint64_t t89 = 18273001LLU;

	t89 = (((x377<x378)+x379)/x380);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = 7008;
	uint32_t x383 = 3U;
	static int16_t x384 = INT16_MIN;
	uint32_t t90 = 847U;

	t90 = (((x381<x382)+x383)/x384);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MIN;
	volatile int8_t x386 = -61;
	int64_t x387 = -1LL;
	int16_t x388 = INT16_MAX;

	t91 = (((x385<x386)+x387)/x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = 6U;
	volatile int16_t x390 = -1;
	volatile int8_t x391 = INT8_MAX;
	uint32_t x392 = UINT32_MAX;
	uint32_t t92 = 2054700714U;

	t92 = (((x389<x390)+x391)/x392);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x393 = -1;
	static uint64_t x394 = 238808LLU;
	uint8_t x395 = 8U;
	uint32_t x396 = UINT32_MAX;
	uint32_t t93 = 1950330909U;

	t93 = (((x393<x394)+x395)/x396);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x397 = INT16_MIN;
	int64_t x398 = 22159701969LL;
	uint8_t x399 = UINT8_MAX;

	t94 = (((x397<x398)+x399)/x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	uint32_t x402 = UINT32_MAX;
	int8_t x403 = 5;
	int32_t t95 = 10012026;

	t95 = (((x401<x402)+x403)/x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x407 = INT16_MAX;
	int8_t x408 = -1;
	volatile int32_t t96 = 21;

	t96 = (((x405<x406)+x407)/x408);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = -91773;
	uint16_t x411 = 114U;
	int64_t x412 = -1LL;
	static volatile int64_t t97 = -38750337313LL;

	t97 = (((x409<x410)+x411)/x412);

	if (t97 != -115LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MIN;
	static uint32_t x414 = 0U;
	volatile int8_t x415 = -1;
	int64_t x416 = INT64_MIN;

	t98 = (((x413<x414)+x415)/x416);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = 1700U;
	int8_t x422 = -1;
	int32_t x423 = INT32_MIN;
	uint8_t x424 = 65U;
	volatile int32_t t99 = -713542290;

	t99 = (((x421<x422)+x423)/x424);

	if (t99 != -33038209) { NG(); } else { ; }
	
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

