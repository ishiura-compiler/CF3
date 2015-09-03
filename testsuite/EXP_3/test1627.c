#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 2090671658929557LL;
int32_t x6 = -63930432;
int32_t x7 = INT32_MAX;
volatile int32_t t1 = 32128;
static int32_t x9 = 30356515;
int32_t x11 = -89424061;
int32_t t2 = -52628321;
int32_t t4 = 2062003;
int8_t x21 = -1;
uint16_t x24 = 209U;
uint64_t x39 = 63565889LLU;
int32_t t10 = -54149003;
int16_t x46 = INT16_MAX;
int32_t x48 = INT32_MAX;
static int32_t x49 = INT32_MAX;
int8_t x50 = 6;
volatile int64_t x53 = INT64_MIN;
volatile int8_t x54 = -58;
int16_t x55 = INT16_MIN;
int8_t x58 = INT8_MIN;
int16_t x60 = INT16_MAX;
static int16_t x65 = -1;
static volatile int32_t x66 = INT32_MAX;
int8_t x67 = 1;
uint32_t x75 = 0U;
int8_t x84 = INT8_MIN;
uint32_t x85 = UINT32_MAX;
volatile int8_t x90 = 0;
int32_t x92 = INT32_MIN;
static int8_t x93 = 11;
volatile uint64_t x98 = 56610261055LLU;
int16_t x101 = -1;
uint8_t x104 = UINT8_MAX;
uint8_t x106 = 122U;
int64_t x110 = 8LL;
volatile int32_t t27 = 24296;
volatile int16_t x115 = INT16_MIN;
volatile int32_t t28 = -43890064;
int16_t x118 = -9;
uint64_t x122 = 409042288054LLU;
volatile int32_t x125 = INT32_MIN;
int32_t t31 = -342;
int64_t x129 = -128122LL;
volatile int16_t x132 = 1615;
int32_t t34 = -24827;
uint8_t x141 = UINT8_MAX;
int16_t x154 = 31;
volatile int8_t x162 = INT8_MIN;
int8_t x165 = INT8_MIN;
static int32_t x166 = INT32_MIN;
static int8_t x168 = INT8_MAX;
uint64_t x172 = 17395419LLU;
volatile int16_t x173 = 6;
int64_t x177 = INT64_MIN;
static int32_t x178 = -1;
static volatile int32_t t46 = -73608;
int32_t x195 = INT32_MIN;
uint16_t x197 = 1309U;
int16_t x198 = INT16_MIN;
int16_t x205 = INT16_MIN;
volatile uint64_t x207 = 9021792LLU;
uint16_t x214 = 6739U;
int64_t x215 = INT64_MAX;
volatile uint8_t x217 = 3U;
int8_t x220 = INT8_MIN;
int16_t x222 = INT16_MAX;
int16_t x223 = INT16_MIN;
volatile uint16_t x225 = UINT16_MAX;
volatile int8_t x226 = INT8_MIN;
volatile uint16_t x228 = 11U;
static uint8_t x235 = UINT8_MAX;
static uint64_t x237 = UINT64_MAX;
uint8_t x240 = 6U;
static uint8_t x245 = 0U;
static uint16_t x249 = UINT16_MAX;
int16_t x258 = INT16_MIN;
volatile uint8_t x262 = 18U;
int32_t t69 = 35536;
int16_t x282 = INT16_MAX;
static uint32_t x286 = 20082U;
uint64_t x292 = 88015921267729LLU;
volatile int32_t t72 = 22;
uint16_t x294 = UINT16_MAX;
uint64_t x298 = 10LLU;
static volatile uint16_t x314 = 66U;
int64_t x318 = INT64_MIN;
int64_t x328 = -1LL;
int16_t x343 = INT16_MIN;
volatile int32_t x344 = INT32_MIN;
volatile int32_t t86 = 190;
int16_t x350 = -1;
static int32_t x351 = INT32_MIN;
uint16_t x356 = 68U;
uint64_t x362 = 445LLU;
int16_t x366 = -1;
uint32_t x372 = 4U;
int16_t x375 = 225;
int64_t x376 = -12LL;
volatile int32_t t93 = -848121782;
uint64_t x377 = UINT64_MAX;
static uint16_t x379 = 5U;
static uint16_t x380 = 446U;
int8_t x384 = -1;
static uint8_t x393 = UINT8_MAX;
uint8_t x394 = 38U;
volatile uint32_t x396 = 101534161U;
uint16_t x400 = UINT16_MAX;


void f0(void) {
	static volatile int16_t x2 = -2486;
	volatile int64_t x3 = INT64_MAX;
	static volatile int16_t x4 = -69;
	int32_t t0 = 0;

	t0 = ((x1<x2)-(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1250650199U;
	int32_t x8 = INT32_MAX;

	t1 = ((x5<x6)-(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	int8_t x12 = -1;

	t2 = ((x9<x10)-(x11<=x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MIN;
	uint32_t x16 = 7582008U;
	volatile int32_t t3 = -177;

	t3 = ((x13<x14)-(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = 746;
	uint64_t x19 = 187329072386LLU;
	int8_t x20 = 3;

	t4 = ((x17<x18)-(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int16_t x23 = -232;
	int32_t t5 = 136;

	t5 = ((x21<x22)-(x23<=x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 382443818LL;
	uint16_t x26 = UINT16_MAX;
	uint16_t x27 = 58U;
	volatile uint16_t x28 = 5565U;
	int32_t t6 = 8264;

	t6 = ((x25<x26)-(x27<=x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 3U;
	int8_t x30 = -1;
	int32_t x31 = INT32_MIN;
	int32_t x32 = -3841;
	volatile int32_t t7 = 799743;

	t7 = ((x29<x30)-(x31<=x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -1LL;
	int64_t x35 = -196675973147LL;
	uint8_t x36 = 10U;
	int32_t t8 = 21085603;

	t8 = ((x33<x34)-(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	volatile int16_t x38 = -3105;
	volatile int16_t x40 = -1;
	volatile int32_t t9 = 70;

	t9 = ((x37<x38)-(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -258625;
	int32_t x42 = INT32_MIN;
	int32_t x43 = 4107318;
	volatile int64_t x44 = 20676556158357LL;

	t10 = ((x41<x42)-(x43<=x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x45 = UINT64_MAX;
	volatile int32_t x47 = INT32_MIN;
	int32_t t11 = 10191;

	t11 = ((x45<x46)-(x47<=x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = -210;
	volatile int32_t t12 = -54427576;

	t12 = ((x49<x50)-(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x56 = 1072477783754435669LLU;
	static volatile int32_t t13 = 1301;

	t13 = ((x53<x54)-(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 5150LL;
	static uint16_t x59 = 1U;
	int32_t t14 = 59228793;

	t14 = ((x57<x58)-(x59<=x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 27U;
	volatile int32_t x62 = -1;
	uint16_t x63 = UINT16_MAX;
	static volatile int16_t x64 = -4081;
	int32_t t15 = 3336313;

	t15 = ((x61<x62)-(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x68 = INT32_MIN;
	static int32_t t16 = -13;

	t16 = ((x65<x66)-(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int32_t x70 = 1;
	volatile uint8_t x71 = 10U;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 30476449;

	t17 = ((x69<x70)-(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static int16_t x74 = INT16_MIN;
	uint64_t x76 = 64241454LLU;
	volatile int32_t t18 = -84578816;

	t18 = ((x73<x74)-(x75<=x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = 7;
	int32_t x78 = INT32_MIN;
	volatile int16_t x79 = 1;
	volatile int16_t x80 = INT16_MIN;
	static int32_t t19 = 572;

	t19 = ((x77<x78)-(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	uint32_t x82 = 873U;
	static int64_t x83 = -1LL;
	int32_t t20 = 404655016;

	t20 = ((x81<x82)-(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x86 = 1044708140300035367LL;
	int16_t x87 = INT16_MAX;
	uint8_t x88 = 7U;
	volatile int32_t t21 = 11786;

	t21 = ((x85<x86)-(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint32_t x91 = 19U;
	int32_t t22 = 30907;

	t22 = ((x89<x90)-(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x94 = -1;
	static int64_t x95 = 76596879444212LL;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = -3928;

	t23 = ((x93<x94)-(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -56;
	int16_t x99 = 60;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -2145;

	t24 = ((x97<x98)-(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x102 = INT8_MIN;
	volatile int16_t x103 = INT16_MIN;
	volatile int32_t t25 = -1;

	t25 = ((x101<x102)-(x103<=x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 1;
	int16_t x107 = INT16_MIN;
	static uint64_t x108 = UINT64_MAX;
	int32_t t26 = 26746079;

	t26 = ((x105<x106)-(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int64_t x111 = -3246LL;
	int64_t x112 = INT64_MAX;

	t27 = ((x109<x110)-(x111<=x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = INT64_MAX;
	volatile uint64_t x116 = 159LLU;

	t28 = ((x113<x114)-(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x119 = 1U;
	int8_t x120 = -1;
	volatile int32_t t29 = 81245324;

	t29 = ((x117<x118)-(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int32_t x123 = -1;
	int16_t x124 = 11365;
	volatile int32_t t30 = 2;

	t30 = ((x121<x122)-(x123<=x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MAX;
	volatile uint32_t x128 = UINT32_MAX;

	t31 = ((x125<x126)-(x127<=x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 61126340U;
	static uint8_t x131 = UINT8_MAX;
	int32_t t32 = 252620077;

	t32 = ((x129<x130)-(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	static int8_t x134 = INT8_MAX;
	volatile uint8_t x135 = 0U;
	uint64_t x136 = 900199565107454437LLU;
	int32_t t33 = 385764103;

	t33 = ((x133<x134)-(x135<=x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = -1LL;
	int32_t x139 = -1;
	int16_t x140 = INT16_MIN;

	t34 = ((x137<x138)-(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = 47U;
	static uint8_t x143 = 4U;
	static volatile uint16_t x144 = UINT16_MAX;
	static volatile int32_t t35 = 7;

	t35 = ((x141<x142)-(x143<=x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	static volatile uint8_t x146 = 12U;
	static int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 1514;

	t36 = ((x145<x146)-(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	int64_t x151 = 6LL;
	static uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = -1788828;

	t37 = ((x149<x150)-(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int16_t x155 = INT16_MIN;
	volatile int64_t x156 = INT64_MAX;
	int32_t t38 = -429180397;

	t38 = ((x153<x154)-(x155<=x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -14199949295629654LL;
	int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MAX;
	static volatile int64_t x160 = -5687150548906287LL;
	static volatile int32_t t39 = -81769733;

	t39 = ((x157<x158)-(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static uint8_t x163 = 4U;
	int8_t x164 = 1;
	volatile int32_t t40 = 31851;

	t40 = ((x161<x162)-(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x167 = 255647882;
	static int32_t t41 = 487400491;

	t41 = ((x165<x166)-(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	volatile int64_t x170 = INT64_MAX;
	static int8_t x171 = INT8_MIN;
	volatile int32_t t42 = -722804195;

	t42 = ((x169<x170)-(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	volatile int32_t x175 = INT32_MIN;
	volatile uint32_t x176 = 7011U;
	int32_t t43 = 87413210;

	t43 = ((x173<x174)-(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x179 = 0U;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 397565;

	t44 = ((x177<x178)-(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = UINT8_MAX;
	uint32_t x182 = UINT32_MAX;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t45 = -83913;

	t45 = ((x181<x182)-(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	static volatile int32_t x186 = INT32_MAX;
	static uint32_t x187 = 27U;
	static int16_t x188 = INT16_MIN;

	t46 = ((x185<x186)-(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = -3456;
	static int16_t x191 = -1339;
	int16_t x192 = INT16_MIN;
	int32_t t47 = 1866100;

	t47 = ((x189<x190)-(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int64_t x194 = -13892015LL;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -172;

	t48 = ((x193<x194)-(x195<=x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 359U;
	volatile int32_t t49 = -2;

	t49 = ((x197<x198)-(x199<=x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int64_t x202 = 7657128LL;
	static uint64_t x203 = 980556883112LLU;
	int32_t x204 = -1;
	volatile int32_t t50 = -794264250;

	t50 = ((x201<x202)-(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x206 = 17564340727211LLU;
	static int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 26158867;

	t51 = ((x205<x206)-(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	static volatile int16_t x210 = -1155;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MAX;
	int32_t t52 = -3780490;

	t52 = ((x209<x210)-(x211<=x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int16_t x216 = 291;
	volatile int32_t t53 = -412;

	t53 = ((x213<x214)-(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MAX;
	int16_t x219 = INT16_MIN;
	volatile int32_t t54 = -109350971;

	t54 = ((x217<x218)-(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	static int32_t x224 = -1;
	volatile int32_t t55 = -31574;

	t55 = ((x221<x222)-(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x227 = -1;
	int32_t t56 = 148158504;

	t56 = ((x225<x226)-(x227<=x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	volatile uint8_t x230 = UINT8_MAX;
	int32_t x231 = INT32_MAX;
	static int8_t x232 = -16;
	int32_t t57 = 68;

	t57 = ((x229<x230)-(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 62LLU;
	uint16_t x234 = 1U;
	volatile uint16_t x236 = 119U;
	volatile int32_t t58 = 41296241;

	t58 = ((x233<x234)-(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MIN;
	uint64_t x239 = 6LLU;
	int32_t t59 = -314892;

	t59 = ((x237<x238)-(x239<=x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	int8_t x242 = 0;
	static int64_t x243 = INT64_MIN;
	volatile uint32_t x244 = 4U;
	int32_t t60 = 11396050;

	t60 = ((x241<x242)-(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -1;
	int16_t x247 = -11516;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 8076;

	t61 = ((x245<x246)-(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MIN;
	static volatile int32_t x251 = -1;
	uint16_t x252 = 123U;
	volatile int32_t t62 = 196733;

	t62 = ((x249<x250)-(x251<=x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MIN;
	uint16_t x255 = 21U;
	volatile uint16_t x256 = 53U;
	static int32_t t63 = -50695770;

	t63 = ((x253<x254)-(x255<=x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int32_t x259 = INT32_MIN;
	volatile int16_t x260 = 50;
	volatile int32_t t64 = 675923;

	t64 = ((x257<x258)-(x259<=x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 26LLU;
	int16_t x263 = -11380;
	int64_t x264 = -1LL;
	volatile int32_t t65 = 53502970;

	t65 = ((x261<x262)-(x263<=x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 1;
	int32_t x266 = INT32_MIN;
	int16_t x267 = 1;
	static uint16_t x268 = UINT16_MAX;
	int32_t t66 = 4979;

	t66 = ((x265<x266)-(x267<=x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MAX;
	int32_t t67 = -2214636;

	t67 = ((x269<x270)-(x271<=x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MAX;
	uint32_t x276 = 18115U;
	static volatile int32_t t68 = 11633;

	t68 = ((x273<x274)-(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 15979886U;
	uint32_t x278 = 39602U;
	volatile uint64_t x279 = 32783299930962LLU;
	uint32_t x280 = UINT32_MAX;

	t69 = ((x277<x278)-(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	static uint16_t x284 = 22320U;
	int32_t t70 = 22;

	t70 = ((x281<x282)-(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x287 = -1;
	volatile uint8_t x288 = 43U;
	static volatile int32_t t71 = -253725;

	t71 = ((x285<x286)-(x287<=x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	int16_t x290 = 1;
	volatile int32_t x291 = -2969144;

	t72 = ((x289<x290)-(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	static int32_t x295 = INT32_MIN;
	static volatile int16_t x296 = INT16_MAX;
	volatile int32_t t73 = -6;

	t73 = ((x293<x294)-(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x299 = 40604522;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t74 = -11746;

	t74 = ((x297<x298)-(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 1;
	volatile int64_t x302 = INT64_MIN;
	static uint64_t x303 = 98816987604LLU;
	uint16_t x304 = 1101U;
	volatile int32_t t75 = 74384;

	t75 = ((x301<x302)-(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 7247U;
	volatile int64_t x306 = 55665365869042LL;
	int32_t x307 = INT32_MAX;
	int64_t x308 = 96797265221513LL;
	static int32_t t76 = 679;

	t76 = ((x305<x306)-(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x309 = 7U;
	static int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MAX;
	static int32_t x312 = -1369225;
	volatile int32_t t77 = 71;

	t77 = ((x309<x310)-(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 27152LL;
	volatile int16_t x315 = INT16_MAX;
	uint16_t x316 = 2U;
	static int32_t t78 = -1;

	t78 = ((x313<x314)-(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int16_t x319 = INT16_MAX;
	static uint64_t x320 = 68LLU;
	volatile int32_t t79 = 7430118;

	t79 = ((x317<x318)-(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	uint8_t x322 = 4U;
	uint64_t x323 = UINT64_MAX;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = 294259888;

	t80 = ((x321<x322)-(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x325 = INT16_MAX;
	int64_t x326 = INT64_MIN;
	static uint32_t x327 = UINT32_MAX;
	int32_t t81 = 10270;

	t81 = ((x325<x326)-(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 0U;
	int8_t x330 = 4;
	int64_t x331 = 2326983406LL;
	volatile int8_t x332 = 1;
	volatile int32_t t82 = -31;

	t82 = ((x329<x330)-(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	uint16_t x334 = 1U;
	int64_t x335 = -1LL;
	static int16_t x336 = INT16_MAX;
	int32_t t83 = -329088;

	t83 = ((x333<x334)-(x335<=x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 68911U;
	int8_t x338 = -1;
	static uint64_t x339 = UINT64_MAX;
	static uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = 2983;

	t84 = ((x337<x338)-(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	volatile uint32_t x342 = 32U;
	volatile int32_t t85 = 2098;

	t85 = ((x341<x342)-(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = 13170;
	volatile int16_t x346 = INT16_MAX;
	uint8_t x347 = UINT8_MAX;
	int64_t x348 = INT64_MIN;

	t86 = ((x345<x346)-(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	volatile int8_t x352 = 0;
	volatile int32_t t87 = 4;

	t87 = ((x349<x350)-(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = UINT64_MAX;
	static int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MIN;
	int32_t t88 = -7;

	t88 = ((x353<x354)-(x355<=x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int64_t x358 = 6443953LL;
	int64_t x359 = INT64_MIN;
	volatile int64_t x360 = INT64_MIN;
	volatile int32_t t89 = 852430690;

	t89 = ((x357<x358)-(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x363 = 1U;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 10216732;

	t90 = ((x361<x362)-(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;
	int32_t t91 = 1;

	t91 = ((x365<x366)-(x367<=x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x370 = UINT64_MAX;
	uint32_t x371 = UINT32_MAX;
	int32_t t92 = 3949;

	t92 = ((x369<x370)-(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 9;
	static int64_t x374 = INT64_MIN;

	t93 = ((x373<x374)-(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	int32_t t94 = -32;

	t94 = ((x377<x378)-(x379<=x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x381 = INT64_MIN;
	volatile int64_t x382 = -1LL;
	uint32_t x383 = 7321U;
	volatile int32_t t95 = 3024;

	t95 = ((x381<x382)-(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x385 = 3745U;
	static uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MAX;
	int64_t x388 = INT64_MIN;
	volatile int32_t t96 = -1777960;

	t96 = ((x385<x386)-(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MIN;
	volatile uint32_t x391 = 31U;
	static volatile uint16_t x392 = 1882U;
	int32_t t97 = -9240970;

	t97 = ((x389<x390)-(x391<=x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x395 = INT8_MIN;
	static volatile int32_t t98 = 428;

	t98 = ((x393<x394)-(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 0U;
	int16_t x398 = INT16_MAX;
	static uint64_t x399 = 14279843497LLU;
	volatile int32_t t99 = 1;

	t99 = ((x397<x398)-(x399<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

