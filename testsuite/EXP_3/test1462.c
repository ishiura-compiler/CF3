#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = 385;
int8_t x10 = -1;
int16_t x15 = -1;
static int64_t x21 = 50172627984026LL;
int32_t x24 = INT32_MAX;
int16_t x28 = INT16_MIN;
volatile int32_t t7 = -11135990;
int32_t x33 = -4;
int16_t x34 = 441;
static uint16_t x37 = 2092U;
volatile int16_t x40 = INT16_MAX;
volatile int8_t x43 = 1;
uint8_t x44 = UINT8_MAX;
static int64_t x47 = -7646585043392LL;
static uint32_t x49 = 1U;
int16_t x50 = -1;
volatile int16_t x57 = INT16_MAX;
static int32_t x59 = -4;
volatile int32_t x62 = INT32_MAX;
volatile int8_t x63 = -1;
volatile uint16_t x77 = UINT16_MAX;
uint8_t x79 = 13U;
volatile int32_t x83 = 769164;
static int16_t x85 = INT16_MIN;
int64_t x87 = -35803756975672415LL;
volatile int32_t t21 = -38;
uint64_t x90 = 20093529634471LLU;
static uint32_t x91 = UINT32_MAX;
int32_t t23 = 3918678;
uint16_t x98 = 1971U;
uint8_t x101 = 1U;
int32_t t25 = 14504;
volatile int8_t x107 = -1;
uint64_t x109 = 49497929LLU;
int32_t t27 = -1729357;
volatile int32_t t28 = 40962282;
int32_t x119 = INT32_MAX;
static int8_t x126 = -50;
int64_t x129 = -1LL;
uint16_t x134 = 9U;
volatile int32_t x137 = 956;
int64_t x142 = INT64_MIN;
int32_t t35 = 62;
uint64_t x146 = 1158624LLU;
int8_t x152 = INT8_MIN;
int8_t x154 = INT8_MIN;
uint32_t x155 = 8143939U;
static int64_t x163 = INT64_MAX;
uint64_t x167 = 1048743923LLU;
int32_t x170 = INT32_MIN;
uint8_t x171 = 27U;
int32_t x172 = INT32_MIN;
volatile int16_t x173 = INT16_MIN;
static uint16_t x178 = 29U;
int8_t x179 = -1;
int32_t t44 = 1221599;
volatile int16_t x181 = INT16_MIN;
static volatile int16_t x184 = INT16_MIN;
int32_t x186 = INT32_MIN;
static volatile int64_t x187 = 17159991399645LL;
volatile int64_t x201 = 55610LL;
int32_t x206 = INT32_MIN;
int8_t x209 = INT8_MIN;
int16_t x211 = INT16_MAX;
static uint8_t x219 = UINT8_MAX;
static int8_t x220 = INT8_MAX;
static int16_t x232 = INT16_MIN;
int64_t x235 = INT64_MIN;
static volatile int32_t t58 = 59;
volatile uint32_t x237 = UINT32_MAX;
static int8_t x238 = INT8_MIN;
volatile int8_t x239 = INT8_MAX;
uint8_t x244 = 3U;
int32_t x246 = INT32_MIN;
int32_t x248 = INT32_MAX;
static int32_t t61 = 1573568;
uint64_t x253 = 43987208114LLU;
uint16_t x254 = 2833U;
static int16_t x259 = 1387;
int8_t x267 = INT8_MAX;
int32_t x271 = INT32_MIN;
int32_t x272 = -264377107;
int8_t x274 = -1;
int8_t x275 = INT8_MAX;
uint16_t x279 = UINT16_MAX;
int32_t t69 = 147;
uint32_t x283 = 15U;
int8_t x285 = 16;
volatile int8_t x288 = -28;
int64_t x293 = -96657675067LL;
volatile int16_t x295 = INT16_MAX;
int16_t x296 = -1;
volatile int32_t t73 = 1273;
int8_t x299 = INT8_MAX;
static int8_t x303 = -1;
uint64_t x309 = UINT64_MAX;
int16_t x312 = -78;
int64_t x315 = INT64_MIN;
int32_t t79 = -440117;
uint16_t x322 = UINT16_MAX;
volatile int64_t x324 = 78352664495LL;
static int32_t x326 = INT32_MAX;
int32_t x327 = 11297;
volatile int32_t t82 = -4631;
int16_t x339 = 3;
int32_t t84 = 257406071;
int64_t x348 = INT64_MAX;
int32_t x349 = INT32_MAX;
int8_t x361 = 1;
int16_t x362 = INT16_MIN;
int32_t x366 = INT32_MAX;
int8_t x373 = 5;
static uint32_t x379 = 58775U;
int16_t x383 = -1;
int64_t x391 = -1LL;
int16_t x392 = 0;
volatile int32_t x394 = -1;
volatile uint8_t x399 = 5U;


void f0(void) {
	int8_t x1 = 3;
	int8_t x2 = INT8_MIN;
	static int8_t x3 = INT8_MIN;
	int64_t x4 = -67083821267LL;

	t0 = ((x1<x2)<<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MIN;
	static uint64_t x7 = 438384LLU;
	uint16_t x8 = 0U;
	volatile int32_t t1 = 830538774;

	t1 = ((x5<x6)<<(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x11 = 23495U;
	int16_t x12 = 2;
	volatile int32_t t2 = -1618408;

	t2 = ((x9<x10)<<(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 58U;
	volatile uint8_t x14 = 77U;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 17910973;

	t3 = ((x13<x14)<<(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	volatile uint16_t x18 = UINT16_MAX;
	static int16_t x19 = 0;
	int32_t x20 = -52795;
	int32_t t4 = 18;

	t4 = ((x17<x18)<<(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 17664615U;
	int32_t x23 = -1;
	int32_t t5 = -40781;

	t5 = ((x21<x22)<<(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint8_t x26 = 105U;
	int32_t x27 = INT32_MAX;
	int32_t t6 = 5098;

	t6 = ((x25<x26)<<(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile uint32_t x30 = UINT32_MAX;
	static int32_t x31 = -1;
	int32_t x32 = INT32_MIN;

	t7 = ((x29<x30)<<(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x35 = -1;
	int8_t x36 = -24;
	int32_t t8 = -1;

	t8 = ((x33<x34)<<(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x38 = -19;
	int32_t x39 = INT32_MAX;
	int32_t t9 = 3070286;

	t9 = ((x37<x38)<<(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static int32_t x42 = INT32_MIN;
	int32_t t10 = -253;

	t10 = ((x41<x42)<<(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 525400183;
	int8_t x46 = INT8_MIN;
	int32_t x48 = 102083;
	int32_t t11 = -9;

	t11 = ((x45<x46)<<(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x51 = 1U;
	int8_t x52 = 1;
	volatile int32_t t12 = -60020;

	t12 = ((x49<x50)<<(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int32_t x54 = -111209240;
	uint8_t x55 = 76U;
	volatile int8_t x56 = -1;
	volatile int32_t t13 = -191;

	t13 = ((x53<x54)<<(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -92318976;

	t14 = ((x57<x58)<<(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	int16_t x64 = INT16_MAX;
	static int32_t t15 = -1965;

	t15 = ((x61<x62)<<(x63<x64));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = 149116351308LL;
	uint64_t x66 = 115LLU;
	uint16_t x67 = UINT16_MAX;
	int8_t x68 = 1;
	int32_t t16 = 13095776;

	t16 = ((x65<x66)<<(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 7U;
	int32_t x70 = INT32_MAX;
	volatile int64_t x71 = INT64_MIN;
	uint64_t x72 = 461252LLU;
	int32_t t17 = 58537801;

	t17 = ((x69<x70)<<(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int32_t x74 = -7071;
	uint8_t x75 = 9U;
	int16_t x76 = -1;
	int32_t t18 = 413081;

	t18 = ((x73<x74)<<(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x78 = 25205LLU;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = 7731;

	t19 = ((x77<x78)<<(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static int16_t x82 = INT16_MIN;
	int16_t x84 = 0;
	int32_t t20 = 45936203;

	t20 = ((x81<x82)<<(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -1LL;
	int8_t x88 = INT8_MIN;

	t21 = ((x85<x86)<<(x87<x88));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -59LL;
	int16_t x92 = -1;
	int32_t t22 = -71310264;

	t22 = ((x89<x90)<<(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x94 = -1;
	volatile uint16_t x95 = 4U;
	int32_t x96 = -13484841;

	t23 = ((x93<x94)<<(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	volatile uint16_t x99 = 1322U;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = 3;

	t24 = ((x97<x98)<<(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = -54340195;
	static volatile uint32_t x103 = 2688904U;
	int16_t x104 = INT16_MIN;

	t25 = ((x101<x102)<<(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 0U;
	int64_t x106 = INT64_MAX;
	static int8_t x108 = 1;
	static volatile int32_t t26 = 310;

	t26 = ((x105<x106)<<(x107<x108));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x110 = UINT16_MAX;
	uint8_t x111 = 118U;
	uint32_t x112 = 2485U;

	t27 = ((x109<x110)<<(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int16_t x114 = 2;
	int8_t x115 = -1;
	int8_t x116 = 1;

	t28 = ((x113<x114)<<(x115<x116));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	static int8_t x118 = 1;
	int8_t x120 = -6;
	int32_t t29 = -27910582;

	t29 = ((x117<x118)<<(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -1;
	static uint32_t x123 = 60377U;
	int8_t x124 = INT8_MAX;
	volatile int32_t t30 = -6516391;

	t30 = ((x121<x122)<<(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 2;
	uint16_t x127 = 1935U;
	int32_t x128 = -7;
	volatile int32_t t31 = -15180838;

	t31 = ((x125<x126)<<(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 6811U;
	uint16_t x131 = 24U;
	volatile int64_t x132 = 405673LL;
	int32_t t32 = -4104018;

	t32 = ((x129<x130)<<(x131<x132));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MAX;
	int64_t x135 = -707838203337833546LL;
	volatile int16_t x136 = 3;
	volatile int32_t t33 = -59;

	t33 = ((x133<x134)<<(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	volatile int16_t x140 = 9;
	volatile int32_t t34 = -456;

	t34 = ((x137<x138)<<(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x143 = 796U;
	uint8_t x144 = 0U;

	t35 = ((x141<x142)<<(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int64_t x147 = -741963974622118833LL;
	static volatile int32_t x148 = INT32_MIN;
	int32_t t36 = 11;

	t36 = ((x145<x146)<<(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	uint64_t x150 = 16831696926531LLU;
	uint16_t x151 = 5919U;
	static int32_t t37 = -1166;

	t37 = ((x149<x150)<<(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -28LL;
	int64_t x156 = -27LL;
	int32_t t38 = -10874572;

	t38 = ((x153<x154)<<(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 17U;
	volatile int64_t x158 = -17441184772418339LL;
	volatile int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -1;

	t39 = ((x157<x158)<<(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = INT8_MIN;
	static int16_t x162 = -1;
	static int64_t x164 = -233278LL;
	static int32_t t40 = -150125;

	t40 = ((x161<x162)<<(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 455;
	uint16_t x166 = UINT16_MAX;
	static volatile int8_t x168 = 1;
	int32_t t41 = 649;

	t41 = ((x165<x166)<<(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 1165174LLU;
	static int32_t t42 = -16;

	t42 = ((x169<x170)<<(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x174 = 380053LL;
	int32_t x175 = -285995;
	int16_t x176 = -1;
	volatile int32_t t43 = 11408;

	t43 = ((x173<x174)<<(x175<x176));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 15639U;
	static uint16_t x180 = 600U;

	t44 = ((x177<x178)<<(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = INT32_MAX;
	int64_t x183 = INT64_MAX;
	volatile int32_t t45 = -40;

	t45 = ((x181<x182)<<(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = UINT16_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = 711;

	t46 = ((x185<x186)<<(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static uint8_t x190 = 1U;
	volatile uint64_t x191 = UINT64_MAX;
	int64_t x192 = INT64_MIN;
	static int32_t t47 = -3;

	t47 = ((x189<x190)<<(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	volatile int8_t x196 = INT8_MIN;
	static int32_t t48 = 3059202;

	t48 = ((x193<x194)<<(x195<x196));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MAX;
	volatile uint8_t x198 = 4U;
	int16_t x199 = -1;
	static uint8_t x200 = 0U;
	static int32_t t49 = 79723240;

	t49 = ((x197<x198)<<(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x202 = UINT32_MAX;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t x204 = -1;
	static int32_t t50 = -2;

	t50 = ((x201<x202)<<(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 7606397LLU;
	static uint32_t x207 = UINT32_MAX;
	uint16_t x208 = 0U;
	int32_t t51 = -119;

	t51 = ((x205<x206)<<(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x210 = UINT64_MAX;
	volatile int8_t x212 = 13;
	volatile int32_t t52 = -1681073;

	t52 = ((x209<x210)<<(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = 10166069LLU;
	static volatile int8_t x214 = INT8_MAX;
	static int8_t x215 = INT8_MIN;
	int8_t x216 = 3;
	volatile int32_t t53 = -5;

	t53 = ((x213<x214)<<(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	static int16_t x218 = -199;
	int32_t t54 = 25523;

	t54 = ((x217<x218)<<(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x222 = 541U;
	static int16_t x223 = INT16_MIN;
	int16_t x224 = -3;
	static int32_t t55 = -2099;

	t55 = ((x221<x222)<<(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	uint16_t x226 = 5U;
	uint64_t x227 = 215625593LLU;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 917161;

	t56 = ((x225<x226)<<(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MAX;
	volatile int16_t x231 = INT16_MIN;
	int32_t t57 = -17184;

	t57 = ((x229<x230)<<(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = 3U;
	static volatile int16_t x234 = 5;
	int32_t x236 = INT32_MAX;

	t58 = ((x233<x234)<<(x235<x236));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x240 = INT16_MIN;
	int32_t t59 = -99;

	t59 = ((x237<x238)<<(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 15U;
	volatile int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MAX;
	volatile int32_t t60 = -1;

	t60 = ((x241<x242)<<(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	static volatile int16_t x247 = -29;

	t61 = ((x245<x246)<<(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -742;
	volatile int8_t x250 = INT8_MIN;
	volatile int64_t x251 = -440LL;
	static int8_t x252 = -1;
	int32_t t62 = -244880856;

	t62 = ((x249<x250)<<(x251<x252));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MAX;
	int32_t t63 = 2028;

	t63 = ((x253<x254)<<(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 18933U;
	volatile int16_t x258 = INT16_MAX;
	volatile uint8_t x260 = UINT8_MAX;
	volatile int32_t t64 = 1870;

	t64 = ((x257<x258)<<(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 12096735881366LLU;
	int16_t x262 = INT16_MAX;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = 343099;

	t65 = ((x261<x262)<<(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static uint8_t x266 = 51U;
	volatile int16_t x268 = -1;
	int32_t t66 = 72319343;

	t66 = ((x265<x266)<<(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 0;
	int8_t x270 = INT8_MIN;
	volatile int32_t t67 = -183182295;

	t67 = ((x269<x270)<<(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	uint16_t x276 = 24839U;
	static volatile int32_t t68 = 466793577;

	t68 = ((x273<x274)<<(x275<x276));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x278 = 55764386U;
	int32_t x280 = INT32_MAX;

	t69 = ((x277<x278)<<(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -367221;
	volatile int16_t x282 = -205;
	int16_t x284 = INT16_MIN;
	int32_t t70 = 117450392;

	t70 = ((x281<x282)<<(x283<x284));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = 12;
	int32_t x287 = INT32_MAX;
	int32_t t71 = -7833811;

	t71 = ((x285<x286)<<(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	static volatile int64_t x290 = INT64_MIN;
	int32_t x291 = -1;
	uint32_t x292 = 148008U;
	volatile int32_t t72 = 466126;

	t72 = ((x289<x290)<<(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 16U;

	t73 = ((x293<x294)<<(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x297 = 53U;
	uint64_t x298 = 0LLU;
	volatile int32_t x300 = -1;
	volatile int32_t t74 = 90562888;

	t74 = ((x297<x298)<<(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 12796235LLU;
	static int64_t x302 = 182LL;
	static uint8_t x304 = 0U;
	volatile int32_t t75 = -40;

	t75 = ((x301<x302)<<(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MIN;
	int8_t x307 = -1;
	int16_t x308 = INT16_MAX;
	volatile int32_t t76 = 3147362;

	t76 = ((x305<x306)<<(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x310 = -12;
	int64_t x311 = 221673513LL;
	static int32_t t77 = -445899787;

	t77 = ((x309<x310)<<(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 10115050419LLU;
	int16_t x314 = -1;
	int16_t x316 = INT16_MAX;
	static int32_t t78 = 14;

	t78 = ((x313<x314)<<(x315<x316));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 17;
	volatile int8_t x318 = 37;
	volatile int16_t x319 = 245;
	volatile uint8_t x320 = 9U;

	t79 = ((x317<x318)<<(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 406U;
	static uint8_t x323 = 0U;
	int32_t t80 = 1;

	t80 = ((x321<x322)<<(x323<x324));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	volatile int32_t x328 = 10;
	int32_t t81 = -10424;

	t81 = ((x325<x326)<<(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	static int64_t x330 = -8585176LL;
	volatile int32_t x331 = INT32_MAX;
	static volatile int64_t x332 = INT64_MAX;

	t82 = ((x329<x330)<<(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = INT8_MIN;
	int32_t x335 = -21350983;
	int16_t x336 = INT16_MIN;
	static int32_t t83 = 114437;

	t83 = ((x333<x334)<<(x335<x336));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -208681585915942LL;
	int16_t x338 = INT16_MAX;
	int64_t x340 = 3134272929452LL;

	t84 = ((x337<x338)<<(x339<x340));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	static volatile int64_t x342 = 9456LL;
	uint32_t x343 = 69701U;
	int64_t x344 = 275740565740981391LL;
	static int32_t t85 = 106116147;

	t85 = ((x341<x342)<<(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 231;
	int64_t x346 = INT64_MIN;
	int8_t x347 = -1;
	volatile int32_t t86 = -2093168;

	t86 = ((x345<x346)<<(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MAX;
	int8_t x351 = 0;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t87 = -1842475;

	t87 = ((x349<x350)<<(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 4;
	uint16_t x354 = 4241U;
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = 1;
	volatile int32_t t88 = -11;

	t88 = ((x353<x354)<<(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	volatile int64_t x358 = -1LL;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = -89374;

	t89 = ((x357<x358)<<(x359<x360));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x363 = INT64_MIN;
	uint64_t x364 = 68956098116025LLU;
	static int32_t t90 = -15;

	t90 = ((x361<x362)<<(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 1U;
	int8_t x367 = -1;
	uint64_t x368 = 1112680450LLU;
	int32_t t91 = -6;

	t91 = ((x365<x366)<<(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int32_t x370 = 121506;
	uint16_t x371 = 76U;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -91670681;

	t92 = ((x369<x370)<<(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = -913330223789838LL;
	int32_t x375 = INT32_MIN;
	static volatile int32_t x376 = -1;
	static volatile int32_t t93 = -42512018;

	t93 = ((x373<x374)<<(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int16_t x378 = INT16_MIN;
	int16_t x380 = INT16_MAX;
	volatile int32_t t94 = -1022625;

	t94 = ((x377<x378)<<(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 496873241LL;
	uint64_t x382 = 92699518541261LLU;
	int64_t x384 = -1LL;
	volatile int32_t t95 = -1515;

	t95 = ((x381<x382)<<(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MAX;
	uint16_t x387 = 10U;
	volatile uint8_t x388 = UINT8_MAX;
	static volatile int32_t t96 = -162;

	t96 = ((x385<x386)<<(x387<x388));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int64_t x390 = INT64_MIN;
	volatile int32_t t97 = -68503254;

	t97 = ((x389<x390)<<(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 907U;
	static uint32_t x395 = 128234U;
	static int16_t x396 = -1;
	int32_t t98 = -155630758;

	t98 = ((x393<x394)<<(x395<x396));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int32_t x398 = INT32_MIN;
	static uint32_t x400 = 35633004U;
	volatile int32_t t99 = -4488;

	t99 = ((x397<x398)<<(x399<x400));

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

