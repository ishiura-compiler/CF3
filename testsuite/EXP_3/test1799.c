#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x13 = 0LL;
int8_t x14 = INT8_MIN;
volatile int16_t x15 = INT16_MIN;
volatile int32_t t2 = -173;
int8_t x18 = -17;
volatile int32_t x19 = 96282;
static uint32_t x34 = 5425U;
int32_t x35 = -1;
uint32_t x40 = 6U;
int8_t x42 = INT8_MIN;
uint8_t x58 = UINT8_MAX;
int8_t x59 = INT8_MAX;
volatile int32_t x62 = 9880719;
volatile int64_t t14 = 56555LL;
int16_t x69 = INT16_MAX;
uint8_t x74 = 13U;
static volatile uint32_t x75 = UINT32_MAX;
volatile uint64_t t16 = 1016348135505LLU;
static int32_t x77 = 37;
int16_t x89 = INT16_MIN;
volatile int64_t x93 = -134066186695816LL;
volatile int32_t x96 = INT32_MAX;
int16_t x101 = -185;
volatile int32_t t24 = -2;
uint32_t x121 = 165628U;
volatile int64_t x125 = -1LL;
int8_t x131 = INT8_MAX;
volatile int16_t x133 = -22;
static int16_t x134 = -1;
int16_t x137 = -1;
volatile int64_t t32 = -30465588316018LL;
static int32_t x151 = INT32_MAX;
int32_t x154 = INT32_MIN;
volatile int32_t x159 = -1;
int8_t x175 = INT8_MIN;
int8_t x178 = -1;
int8_t x185 = 0;
int8_t x190 = -1;
uint16_t x191 = UINT16_MAX;
static int64_t x196 = 11993729984091LL;
uint8_t x200 = 2U;
static int64_t x203 = -1LL;
static uint8_t x209 = UINT8_MAX;
volatile int64_t x213 = -719780177115LL;
int8_t x221 = INT8_MIN;
uint16_t x223 = 204U;
int8_t x224 = -3;
volatile int64_t x225 = -1LL;
int32_t x228 = INT32_MIN;
static int64_t t52 = -2112813148944LL;
int8_t x235 = INT8_MIN;
int16_t x239 = INT16_MAX;
volatile int8_t x242 = -40;
int32_t x243 = INT32_MIN;
volatile int32_t t55 = -1596;
int8_t x253 = INT8_MAX;
static uint64_t x254 = 25291105920LLU;
volatile uint64_t t58 = 13653LLU;
int16_t x263 = -1;
int16_t x265 = -13827;
uint64_t x267 = 781418188109LLU;
static int8_t x269 = 22;
uint16_t x272 = 1U;
static int64_t x280 = -10649498LL;
volatile int32_t t65 = 1;
int8_t x295 = INT8_MAX;
static volatile int8_t x299 = -1;
int16_t x304 = -2;
volatile uint64_t t69 = 8309417845801LLU;
static int64_t t70 = 41459734LL;
volatile uint64_t x326 = 5947290620LLU;
int32_t x328 = INT32_MIN;
static volatile int32_t x343 = INT32_MAX;
int8_t x344 = INT8_MIN;
volatile int32_t t73 = -215750650;
volatile uint32_t x346 = 1803998932U;
uint16_t x352 = UINT16_MAX;
uint32_t x360 = UINT32_MAX;
int8_t x361 = INT8_MIN;
static volatile int32_t x364 = -1;
volatile uint32_t x365 = 547838U;
volatile int64_t x383 = INT64_MIN;
static volatile int64_t x385 = INT64_MIN;
static int64_t x388 = -21801LL;
uint16_t x393 = 27U;
uint64_t x407 = 68440348170LLU;
volatile uint64_t t88 = 12206LLU;
volatile int8_t x411 = -1;
volatile int32_t t89 = 383;
static int16_t x420 = 14434;
volatile uint64_t x422 = 427222016845LLU;
volatile int64_t t92 = 432115LL;
uint32_t x429 = 23510361U;
static int64_t x434 = INT64_MAX;
int64_t x436 = 5271LL;
volatile int64_t t95 = -2242289955475LL;
int8_t x449 = INT8_MIN;
uint16_t x452 = 18002U;
int64_t x453 = -1LL;


void f0(void) {
	volatile uint64_t x1 = 66649457844986132LLU;
	volatile int64_t x2 = -691337432LL;
	uint8_t x3 = 3U;
	int16_t x4 = 1;
	static volatile int32_t t0 = -1;

	t0 = ((x1<x2)%(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 25348139421104LLU;
	uint64_t x6 = 33332781665777LLU;
	volatile uint64_t x7 = 2700258069000LLU;
	uint32_t x8 = 59442475U;
	volatile uint64_t t1 = 6013LLU;

	t1 = ((x5<x6)%(x7&x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x16 = INT8_MIN;

	t2 = ((x13<x14)%(x15&x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x17 = 37;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t3 = 7574060LLU;

	t3 = ((x17<x18)%(x19&x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MAX;
	int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MAX;
	int64_t x24 = -1LL;
	static volatile int64_t t4 = 453977013LL;

	t4 = ((x21<x22)%(x23&x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 1;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 3300940699259625535LLU;
	static volatile uint16_t x28 = UINT16_MAX;
	volatile uint64_t t5 = 79179710159225675LLU;

	t5 = ((x25<x26)%(x27&x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x33 = UINT64_MAX;
	static uint8_t x36 = UINT8_MAX;
	static volatile int32_t t6 = 2;

	t6 = ((x33<x34)%(x35&x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = 567131910339870LLU;
	static int64_t x38 = INT64_MIN;
	static uint64_t x39 = 229008706389561746LLU;
	static volatile uint64_t t7 = 694142567107892275LLU;

	t7 = ((x37<x38)%(x39&x40));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	int64_t x43 = -1LL;
	uint64_t x44 = 1244LLU;
	volatile uint64_t t8 = 341860950989738LLU;

	t8 = ((x41<x42)%(x43&x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x45 = UINT16_MAX;
	volatile int16_t x46 = -1;
	int32_t x47 = INT32_MAX;
	int16_t x48 = INT16_MAX;
	volatile int32_t t9 = 0;

	t9 = ((x45<x46)%(x47&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = 0;
	uint64_t x51 = UINT64_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile uint64_t t10 = 5983075809848022636LLU;

	t10 = ((x49<x50)%(x51&x52));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 0;
	int32_t x54 = -8;
	volatile int64_t x55 = -84159LL;
	volatile uint8_t x56 = 5U;
	volatile int64_t t11 = -453LL;

	t11 = ((x53<x54)%(x55&x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	volatile int8_t x60 = -27;
	int32_t t12 = 22;

	t12 = ((x57<x58)%(x59&x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = INT64_MAX;
	static volatile uint32_t x63 = 7548U;
	uint16_t x64 = 8U;
	uint32_t t13 = 1U;

	t13 = ((x61<x62)%(x63&x64));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	int32_t x66 = 2;
	static int64_t x67 = 19LL;
	int64_t x68 = -27708640092356141LL;

	t14 = ((x65<x66)%(x67&x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x70 = 0U;
	int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	volatile int64_t t15 = 51781085063688273LL;

	t15 = ((x69<x70)%(x71&x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	uint64_t x76 = 75254404LLU;

	t16 = ((x73<x74)%(x75&x76));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x78 = INT64_MIN;
	uint16_t x79 = UINT16_MAX;
	static uint16_t x80 = UINT16_MAX;
	int32_t t17 = -826;

	t17 = ((x77<x78)%(x79&x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MAX;
	static uint64_t x82 = 8384215481760425LLU;
	int64_t x83 = -23608206336302279LL;
	int64_t x84 = INT64_MIN;
	static volatile int64_t t18 = -13132986053992230LL;

	t18 = ((x81<x82)%(x83&x84));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	static uint64_t x87 = 2889469LLU;
	int16_t x88 = -1;
	uint64_t t19 = 205833251LLU;

	t19 = ((x85<x86)%(x87&x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;
	static int32_t x91 = -496;
	volatile int16_t x92 = INT16_MIN;
	static volatile int32_t t20 = 108147;

	t20 = ((x89<x90)%(x91&x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	volatile int32_t t21 = 145684;

	t21 = ((x93<x94)%(x95&x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 27017U;
	volatile int32_t x98 = 141272606;
	static int64_t x99 = INT64_MAX;
	uint8_t x100 = 20U;
	volatile int64_t t22 = -1892482411LL;

	t22 = ((x97<x98)%(x99&x100));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	static int32_t x104 = -1;
	int32_t t23 = 19;

	t23 = ((x101<x102)%(x103&x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x105 = -1;
	int64_t x106 = -1LL;
	static uint8_t x107 = 3U;
	static uint8_t x108 = UINT8_MAX;

	t24 = ((x105<x106)%(x107&x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 1474U;
	uint32_t x110 = 22U;
	uint32_t x111 = 150468758U;
	int16_t x112 = INT16_MIN;
	volatile uint32_t t25 = 3U;

	t25 = ((x109<x110)%(x111&x112));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 15212;
	int64_t x114 = 44381393LL;
	int8_t x115 = INT8_MAX;
	volatile uint32_t x116 = 36U;
	volatile uint32_t t26 = 118775474U;

	t26 = ((x113<x114)%(x115&x116));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x122 = 4256165U;
	int8_t x123 = -1;
	int32_t x124 = -1;
	static int32_t t27 = -17246251;

	t27 = ((x121<x122)%(x123&x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x126 = 144U;
	static int16_t x127 = INT16_MIN;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t28 = -518850650;

	t28 = ((x125<x126)%(x127&x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 910U;
	int64_t x130 = INT64_MIN;
	uint8_t x132 = 50U;
	int32_t t29 = -185220;

	t29 = ((x129<x130)%(x131&x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x135 = -1LL;
	static int64_t x136 = -1LL;
	int64_t t30 = 10LL;

	t30 = ((x133<x134)%(x135&x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x138 = 0;
	static int64_t x139 = INT64_MIN;
	volatile int8_t x140 = -1;
	static int64_t t31 = 830771711LL;

	t31 = ((x137<x138)%(x139&x140));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 0;
	int32_t x142 = -3572766;
	volatile int64_t x143 = -1LL;
	int16_t x144 = -1;

	t32 = ((x141<x142)%(x143&x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x145 = 9;
	static uint8_t x146 = UINT8_MAX;
	uint16_t x147 = UINT16_MAX;
	int16_t x148 = 1;
	int32_t t33 = -32;

	t33 = ((x145<x146)%(x147&x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 16637U;
	int8_t x150 = INT8_MIN;
	uint64_t x152 = 234405LLU;
	volatile uint64_t t34 = 29LLU;

	t34 = ((x149<x150)%(x151&x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = INT64_MIN;
	volatile int8_t x155 = INT8_MAX;
	int64_t x156 = INT64_MAX;
	volatile int64_t t35 = -48340764721LL;

	t35 = ((x153<x154)%(x155&x156));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 24U;
	uint64_t x158 = 219768681LLU;
	static int8_t x160 = INT8_MAX;
	static int32_t t36 = 3;

	t36 = ((x157<x158)%(x159&x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = -1861;
	uint8_t x162 = UINT8_MAX;
	static int16_t x163 = INT16_MAX;
	static uint8_t x164 = 3U;
	volatile int32_t t37 = -2486430;

	t37 = ((x161<x162)%(x163&x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	volatile uint16_t x166 = UINT16_MAX;
	uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = INT8_MIN;
	uint32_t t38 = 8417184U;

	t38 = ((x165<x166)%(x167&x168));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -2013LL;
	uint16_t x170 = 69U;
	int32_t x171 = 6710;
	uint64_t x172 = 1999521856921614LLU;
	volatile uint64_t t39 = 1631LLU;

	t39 = ((x169<x170)%(x171&x172));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 424LLU;
	volatile uint32_t x174 = 4U;
	static int16_t x176 = -1;
	static int32_t t40 = 1;

	t40 = ((x173<x174)%(x175&x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MIN;
	static volatile uint64_t x179 = UINT64_MAX;
	int16_t x180 = INT16_MIN;
	volatile uint64_t t41 = 3LLU;

	t41 = ((x177<x178)%(x179&x180));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x186 = -1;
	static int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t42 = 19;

	t42 = ((x185<x186)%(x187&x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x192 = INT8_MIN;
	int32_t t43 = -30048;

	t43 = ((x189<x190)%(x191&x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	int64_t t44 = 113996LL;

	t44 = ((x193<x194)%(x195&x196));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x197 = INT32_MIN;
	static int32_t x198 = 1189741;
	uint16_t x199 = 1571U;
	int32_t t45 = -47231;

	t45 = ((x197<x198)%(x199&x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = 2;
	int32_t x202 = INT32_MAX;
	int32_t x204 = INT32_MAX;
	int64_t t46 = -1969418048LL;

	t46 = ((x201<x202)%(x203&x204));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x210 = INT32_MIN;
	static int64_t x211 = -270523430LL;
	uint8_t x212 = 111U;
	int64_t t47 = 328468647437012164LL;

	t47 = ((x209<x210)%(x211&x212));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x214 = UINT16_MAX;
	volatile int64_t x215 = INT64_MAX;
	int16_t x216 = -130;
	int64_t t48 = 286303651969017LL;

	t48 = ((x213<x214)%(x215&x216));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = 15U;
	uint64_t x218 = UINT64_MAX;
	int32_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	static volatile int32_t t49 = 49;

	t49 = ((x217<x218)%(x219&x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x222 = 67U;
	static volatile int32_t t50 = -1832;

	t50 = ((x221<x222)%(x223&x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x226 = INT64_MAX;
	int32_t x227 = -34;
	static int32_t t51 = -4640391;

	t51 = ((x225<x226)%(x227&x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = 277;
	static int16_t x230 = -119;
	int64_t x231 = INT64_MIN;
	static int16_t x232 = -1;

	t52 = ((x229<x230)%(x231&x232));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = INT32_MIN;
	int64_t x234 = -1135650576LL;
	int8_t x236 = INT8_MIN;
	int32_t t53 = -12611887;

	t53 = ((x233<x234)%(x235&x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MIN;
	volatile int8_t x238 = -1;
	static uint64_t x240 = 5LLU;
	uint64_t t54 = 55388315138LLU;

	t54 = ((x237<x238)%(x239&x240));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x241 = INT32_MAX;
	int32_t x244 = INT32_MIN;

	t55 = ((x241<x242)%(x243&x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = UINT16_MAX;
	static int64_t x246 = -1843LL;
	int32_t x247 = INT32_MAX;
	int8_t x248 = -2;
	int32_t t56 = 30669921;

	t56 = ((x245<x246)%(x247&x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = -1;
	int8_t x250 = -1;
	static int16_t x251 = -8;
	int16_t x252 = INT16_MAX;
	int32_t t57 = 74;

	t57 = ((x249<x250)%(x251&x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x255 = 49291237798164LLU;
	int8_t x256 = INT8_MIN;

	t58 = ((x253<x254)%(x255&x256));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = INT8_MIN;
	volatile uint16_t x258 = 183U;
	uint16_t x259 = 2801U;
	uint32_t x260 = 3U;
	uint32_t t59 = 29454U;

	t59 = ((x257<x258)%(x259&x260));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = -1;
	volatile uint64_t x262 = UINT64_MAX;
	uint8_t x264 = 7U;
	volatile int32_t t60 = 249534695;

	t60 = ((x261<x262)%(x263&x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x266 = 0;
	volatile uint32_t x268 = UINT32_MAX;
	uint64_t t61 = 8LLU;

	t61 = ((x265<x266)%(x267&x268));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x270 = UINT8_MAX;
	static uint16_t x271 = UINT16_MAX;
	int32_t t62 = -519771746;

	t62 = ((x269<x270)%(x271&x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x277 = 3U;
	int16_t x278 = -9551;
	int32_t x279 = -12607298;
	volatile int64_t t63 = 2352932156564527861LL;

	t63 = ((x277<x278)%(x279&x280));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = -1LL;
	int64_t x282 = INT64_MIN;
	static uint8_t x283 = 16U;
	int64_t x284 = -1LL;
	volatile int64_t t64 = -20962364230LL;

	t64 = ((x281<x282)%(x283&x284));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x285 = -204;
	static volatile int8_t x286 = INT8_MAX;
	int16_t x287 = -1;
	volatile int16_t x288 = -1;

	t65 = ((x285<x286)%(x287&x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = -14318LL;
	static uint16_t x291 = UINT16_MAX;
	static int8_t x292 = 1;
	int32_t t66 = -2938;

	t66 = ((x289<x290)%(x291&x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = 16;
	volatile int8_t x296 = 32;
	volatile int32_t t67 = 13;

	t67 = ((x293<x294)%(x295&x296));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x297 = -3630968883769743146LL;
	volatile int64_t x298 = INT64_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t68 = -7;

	t68 = ((x297<x298)%(x299&x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 28U;
	uint64_t x303 = UINT64_MAX;

	t69 = ((x301<x302)%(x303&x304));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = -1;
	uint16_t x306 = 1162U;
	int64_t x307 = -1LL;
	int64_t x308 = INT64_MIN;

	t70 = ((x305<x306)%(x307&x308));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x325 = 424406LLU;
	int32_t x327 = -175751;
	int32_t t71 = -6671;

	t71 = ((x325<x326)%(x327&x328));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x329 = -1;
	static uint64_t x330 = 53160901879155905LLU;
	uint64_t x331 = 4124544726636LLU;
	uint16_t x332 = UINT16_MAX;
	volatile uint64_t t72 = 25462319492LLU;

	t72 = ((x329<x330)%(x331&x332));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x341 = INT8_MAX;
	volatile uint16_t x342 = UINT16_MAX;

	t73 = ((x341<x342)%(x343&x344));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = INT32_MIN;
	static volatile uint8_t x347 = 29U;
	int32_t x348 = -208;
	int32_t t74 = 1972;

	t74 = ((x345<x346)%(x347&x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = 242300355361LLU;
	uint8_t x351 = 93U;
	static int32_t t75 = -14290;

	t75 = ((x349<x350)%(x351&x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x357 = INT16_MIN;
	volatile int16_t x358 = INT16_MIN;
	int16_t x359 = -11;
	uint32_t t76 = 159080007U;

	t76 = ((x357<x358)%(x359&x360));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x362 = 78;
	static int64_t x363 = -1LL;
	volatile int64_t t77 = 573758867848405LL;

	t77 = ((x361<x362)%(x363&x364));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x366 = UINT16_MAX;
	volatile uint16_t x367 = UINT16_MAX;
	uint32_t x368 = 652653550U;
	uint32_t t78 = 72030619U;

	t78 = ((x365<x366)%(x367&x368));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = 17597340621LLU;
	int32_t x370 = -31435;
	uint16_t x371 = 7068U;
	uint8_t x372 = 4U;
	int32_t t79 = -193281859;

	t79 = ((x369<x370)%(x371&x372));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x373 = INT8_MAX;
	volatile uint64_t x374 = 1622930720LLU;
	uint64_t x375 = 1LLU;
	uint32_t x376 = 15U;
	uint64_t t80 = 5776747363420166LLU;

	t80 = ((x373<x374)%(x375&x376));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x377 = 81U;
	int32_t x378 = -3153516;
	int32_t x379 = INT32_MIN;
	int8_t x380 = -1;
	volatile int32_t t81 = -7798457;

	t81 = ((x377<x378)%(x379&x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = 6528225;
	volatile uint32_t x382 = 23025263U;
	volatile int16_t x384 = -1;
	int64_t t82 = -101774719389LL;

	t82 = ((x381<x382)%(x383&x384));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x386 = INT64_MAX;
	volatile int8_t x387 = INT8_MAX;
	volatile int64_t t83 = 1802LL;

	t83 = ((x385<x386)%(x387&x388));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x389 = -1;
	static int64_t x390 = 3414482266LL;
	int32_t x391 = -1;
	static int16_t x392 = -6;
	int32_t t84 = 1;

	t84 = ((x389<x390)%(x391&x392));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x394 = -1;
	int64_t x395 = INT64_MIN;
	int64_t x396 = -1LL;
	int64_t t85 = 2LL;

	t85 = ((x393<x394)%(x395&x396));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x397 = INT8_MIN;
	int16_t x398 = -1;
	int16_t x399 = -19;
	static uint32_t x400 = 4651567U;
	volatile uint32_t t86 = 374U;

	t86 = ((x397<x398)%(x399&x400));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x401 = UINT64_MAX;
	uint8_t x402 = 7U;
	volatile int16_t x403 = -1;
	uint8_t x404 = 33U;
	volatile int32_t t87 = -20660;

	t87 = ((x401<x402)%(x403&x404));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = INT16_MIN;
	uint32_t x406 = 55U;
	int16_t x408 = INT16_MIN;

	t88 = ((x405<x406)%(x407&x408));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x409 = INT8_MIN;
	static volatile int8_t x410 = INT8_MAX;
	uint8_t x412 = UINT8_MAX;

	t89 = ((x409<x410)%(x411&x412));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x417 = UINT8_MAX;
	uint8_t x418 = 0U;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int32_t t90 = 490116;

	t90 = ((x417<x418)%(x419&x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = INT64_MIN;
	volatile int32_t x423 = -1;
	int16_t x424 = -9297;
	static volatile int32_t t91 = -846;

	t91 = ((x421<x422)%(x423&x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x425 = UINT64_MAX;
	int64_t x426 = INT64_MIN;
	int64_t x427 = -1LL;
	int16_t x428 = 3563;

	t92 = ((x425<x426)%(x427&x428));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x430 = UINT64_MAX;
	volatile int16_t x431 = INT16_MAX;
	int32_t x432 = -1;
	static volatile int32_t t93 = -6;

	t93 = ((x429<x430)%(x431&x432));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x433 = 32933858242LLU;
	int64_t x435 = 139208546520251LL;
	static int64_t t94 = 212LL;

	t94 = ((x433<x434)%(x435&x436));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x437 = INT32_MAX;
	int32_t x438 = INT32_MAX;
	int32_t x439 = -30689;
	static int64_t x440 = INT64_MAX;

	t95 = ((x437<x438)%(x439&x440));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x441 = 1429;
	int32_t x442 = INT32_MAX;
	int16_t x443 = INT16_MIN;
	static int64_t x444 = INT64_MIN;
	int64_t t96 = 26638LL;

	t96 = ((x441<x442)%(x443&x444));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x450 = UINT16_MAX;
	volatile int64_t x451 = -1LL;
	static int64_t t97 = 428913LL;

	t97 = ((x449<x450)%(x451&x452));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x454 = INT8_MAX;
	int8_t x455 = INT8_MIN;
	int64_t x456 = -1LL;
	volatile int64_t t98 = 16289370183LL;

	t98 = ((x453<x454)%(x455&x456));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = 19;
	static int64_t x458 = INT64_MIN;
	static uint32_t x459 = 356570260U;
	volatile int16_t x460 = INT16_MAX;
	static uint32_t t99 = 13690U;

	t99 = ((x457<x458)%(x459&x460));

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

