#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
uint8_t x5 = UINT8_MAX;
int64_t x7 = INT64_MIN;
int32_t t1 = 1;
volatile int16_t x13 = INT16_MIN;
uint32_t x16 = UINT32_MAX;
uint64_t x19 = 17374377101259517LLU;
int8_t x20 = 1;
uint8_t x21 = 0U;
int64_t x24 = -1408589078LL;
volatile int32_t t5 = -14346635;
int32_t t8 = -6154888;
uint32_t x38 = 7U;
volatile int16_t x44 = INT16_MAX;
static int16_t x45 = -1;
int16_t x55 = 0;
int32_t x57 = -62;
static uint16_t x68 = 10U;
volatile int32_t t17 = -180;
int64_t x79 = 44399LL;
static int64_t x80 = 1446122427LL;
volatile int32_t t19 = 260316;
int8_t x82 = INT8_MIN;
int64_t x83 = 23407978LL;
uint16_t x84 = UINT16_MAX;
int32_t x89 = -4142;
int64_t x90 = -93923508679027111LL;
int16_t x102 = INT16_MIN;
int8_t x104 = -1;
volatile int32_t t25 = -54;
int32_t x107 = -43200;
static uint8_t x108 = UINT8_MAX;
int8_t x114 = -1;
volatile int8_t x116 = -1;
int32_t x125 = -1;
volatile int64_t x136 = -1LL;
int64_t x138 = -1LL;
uint64_t x140 = 11426LLU;
int16_t x145 = INT16_MIN;
volatile int32_t t35 = -2811984;
int64_t x158 = -1LL;
static uint64_t x162 = UINT64_MAX;
static volatile int32_t x167 = -1;
int8_t x172 = -4;
int32_t x173 = INT32_MIN;
volatile int8_t x175 = -62;
int32_t t41 = 1414057;
int64_t x189 = -108156055425615138LL;
int8_t x196 = INT8_MIN;
volatile int32_t t43 = -84766;
static int32_t t44 = -23226;
int64_t x206 = INT64_MIN;
uint64_t x210 = UINT64_MAX;
uint64_t x213 = 564048300928662316LLU;
int32_t x234 = INT32_MAX;
uint64_t x239 = 313803611736853936LLU;
volatile int64_t x240 = INT64_MAX;
int32_t t53 = -1161311;
int32_t x248 = INT32_MIN;
int32_t x249 = -1633153;
static int16_t x251 = INT16_MAX;
volatile int32_t t56 = 199740972;
volatile uint64_t x255 = UINT64_MAX;
int16_t x256 = INT16_MAX;
int32_t t57 = -32831511;
int8_t x259 = -18;
static volatile int8_t x265 = INT8_MIN;
volatile uint16_t x278 = UINT16_MAX;
volatile int32_t t65 = 448;
static volatile uint8_t x297 = UINT8_MAX;
int8_t x304 = INT8_MIN;
volatile int8_t x307 = -1;
static volatile uint16_t x308 = 212U;
int8_t x313 = INT8_MIN;
static int32_t x324 = -2709;
int16_t x330 = INT16_MAX;
volatile int8_t x331 = INT8_MIN;
volatile int16_t x336 = INT16_MAX;
int16_t x358 = -1;
uint64_t x361 = 7774668805387851410LLU;
static uint16_t x363 = 1471U;
uint64_t x368 = 2280822348190LLU;
int32_t t81 = 110113841;
uint8_t x370 = 0U;
int32_t t83 = -327853;
int8_t x377 = INT8_MIN;
volatile int32_t t84 = 123179388;
static uint64_t x382 = 6066524076876177299LLU;
int8_t x384 = -4;
int8_t x388 = -15;
static int32_t t86 = -703573;
volatile int32_t x402 = 176409020;
static uint16_t x403 = UINT16_MAX;
int32_t x407 = -211291;
int8_t x411 = -1;
uint16_t x412 = UINT16_MAX;
int16_t x415 = 0;
uint32_t x419 = 758599U;
int64_t x430 = -1LL;
uint32_t x443 = UINT32_MAX;
volatile uint16_t x444 = 1U;
static uint16_t x445 = 25U;
int32_t x447 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MIN;
	int16_t x4 = 2310;
	static int32_t t0 = -1620111;

	t0 = (x1<((x2-x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = -1;
	uint8_t x8 = 105U;

	t1 = (x5<((x6-x7)|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MIN;
	int16_t x11 = -1;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = -174;

	t2 = (x9<((x10-x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = INT8_MAX;
	int32_t t3 = 235305;

	t3 = (x13<((x14-x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = INT32_MIN;
	int32_t t4 = -229187;

	t4 = (x17<((x18-x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = 585U;
	int8_t x23 = -1;

	t5 = (x21<((x22-x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int32_t x26 = 129949;
	static int32_t x27 = -65061540;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -7691;

	t6 = (x25<((x26-x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = -1;
	int8_t x31 = INT8_MIN;
	static uint32_t x32 = 445U;
	int32_t t7 = -16;

	t7 = (x29<((x30-x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int32_t x34 = -276;
	volatile int8_t x35 = -1;
	static int64_t x36 = -1LL;

	t8 = (x33<((x34-x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int64_t x39 = -1LL;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 7262903;

	t9 = (x37<((x38-x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -48017;
	volatile int16_t x42 = -110;
	int64_t x43 = INT64_MIN;
	static volatile int32_t t10 = 340898281;

	t10 = (x41<((x42-x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x46 = 31U;
	uint16_t x47 = 21U;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -81694;

	t11 = (x45<((x46-x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = 1737702630075LL;
	volatile uint64_t x50 = 225898833199930528LLU;
	int16_t x51 = 0;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -2752;

	t12 = (x49<((x50-x51)|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	volatile int16_t x54 = -1;
	uint8_t x56 = 16U;
	int32_t t13 = 0;

	t13 = (x53<((x54-x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	uint8_t x59 = 3U;
	int16_t x60 = -197;
	int32_t t14 = -3613;

	t14 = (x57<((x58-x59)|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = -1;
	int64_t x63 = -1LL;
	int16_t x64 = -1;
	static int32_t t15 = 1037714685;

	t15 = (x61<((x62-x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 5;
	uint8_t x66 = 16U;
	uint64_t x67 = 7720543835232LLU;
	static volatile int32_t t16 = 538360342;

	t16 = (x65<((x66-x67)|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = 0U;
	uint8_t x72 = 19U;

	t17 = (x69<((x70-x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 21;
	volatile int64_t x74 = INT64_MIN;
	volatile int32_t x75 = -1;
	static int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 188762;

	t18 = (x73<((x74-x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 441132317527LLU;
	uint64_t x78 = 145LLU;

	t19 = (x77<((x78-x79)|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 3U;
	volatile int32_t t20 = -401296812;

	t20 = (x81<((x82-x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -5658;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 750U;
	static int32_t x88 = -126431;
	int32_t t21 = -48;

	t21 = (x85<((x86-x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x91 = 26689905U;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = 256250;

	t22 = (x89<((x90-x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -12721312804378457LL;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = 4;
	volatile uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = 49548;

	t23 = (x93<((x94-x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 868U;
	int8_t x98 = 0;
	static int32_t x99 = -348009;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 11776742;

	t24 = (x97<((x98-x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int16_t x103 = INT16_MAX;

	t25 = (x101<((x102-x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	uint8_t x106 = 5U;
	volatile int32_t t26 = -81;

	t26 = (x105<((x106-x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static int16_t x110 = INT16_MAX;
	uint64_t x111 = UINT64_MAX;
	static int16_t x112 = INT16_MIN;
	int32_t t27 = -24;

	t27 = (x109<((x110-x111)|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	int64_t x115 = -1089370371205LL;
	volatile int32_t t28 = 160358;

	t28 = (x113<((x114-x115)|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static uint32_t x118 = 2041U;
	volatile uint64_t x119 = 87504207203547027LLU;
	int64_t x120 = -26104LL;
	int32_t t29 = -29162014;

	t29 = (x117<((x118-x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 734705;
	int16_t x122 = -27;
	volatile int8_t x123 = INT8_MIN;
	static volatile uint64_t x124 = 32LLU;
	int32_t t30 = 35569221;

	t30 = (x121<((x122-x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x126 = 63U;
	int64_t x127 = -695177396935149LL;
	int64_t x128 = -1LL;
	static volatile int32_t t31 = 21;

	t31 = (x125<((x126-x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	uint64_t x134 = UINT64_MAX;
	static uint16_t x135 = UINT16_MAX;
	static volatile int32_t t32 = -308;

	t32 = (x133<((x134-x135)|x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	uint32_t x139 = UINT32_MAX;
	static volatile int32_t t33 = -3066;

	t33 = (x137<((x138-x139)|x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = -18;
	volatile int8_t x142 = 1;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MAX;
	volatile int32_t t34 = 9172122;

	t34 = (x141<((x142-x143)|x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x146 = 42;
	volatile int8_t x147 = INT8_MIN;
	static int16_t x148 = 978;

	t35 = (x145<((x146-x147)|x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	volatile uint32_t x150 = 62U;
	int64_t x151 = INT64_MAX;
	int8_t x152 = INT8_MIN;
	volatile int32_t t36 = -11450;

	t36 = (x149<((x150-x151)|x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	static uint32_t x159 = UINT32_MAX;
	uint64_t x160 = UINT64_MAX;
	int32_t t37 = -140743;

	t37 = (x157<((x158-x159)|x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = INT32_MIN;
	int64_t x163 = INT64_MIN;
	volatile int32_t x164 = 263841;
	volatile int32_t t38 = -15;

	t38 = (x161<((x162-x163)|x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	static uint64_t x166 = 22924598LLU;
	volatile int16_t x168 = -1;
	int32_t t39 = 2;

	t39 = (x165<((x166-x167)|x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = INT16_MAX;
	int64_t x170 = INT64_MIN;
	int16_t x171 = -718;
	int32_t t40 = 37803864;

	t40 = (x169<((x170-x171)|x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = -1LL;
	static volatile uint8_t x176 = 12U;

	t41 = (x173<((x174-x175)|x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x190 = 9U;
	int32_t x191 = -3340831;
	volatile int32_t x192 = INT32_MIN;
	int32_t t42 = 0;

	t42 = (x189<((x190-x191)|x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x194 = 1LLU;
	int8_t x195 = INT8_MIN;

	t43 = (x193<((x194-x195)|x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x197 = 1146U;
	volatile uint8_t x198 = 43U;
	uint8_t x199 = 5U;
	int64_t x200 = -1LL;

	t44 = (x197<((x198-x199)|x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = 882381416683681LL;
	static int16_t x202 = INT16_MIN;
	int64_t x203 = -1LL;
	uint32_t x204 = UINT32_MAX;
	static int32_t t45 = -36333626;

	t45 = (x201<((x202-x203)|x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x205 = INT32_MIN;
	static int64_t x207 = -1LL;
	int16_t x208 = -1;
	volatile int32_t t46 = -4;

	t46 = (x205<((x206-x207)|x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MAX;
	int16_t x211 = INT16_MIN;
	static int16_t x212 = INT16_MIN;
	int32_t t47 = 34;

	t47 = (x209<((x210-x211)|x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x214 = -1;
	uint32_t x215 = UINT32_MAX;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t48 = 3;

	t48 = (x213<((x214-x215)|x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = INT32_MAX;
	int64_t x219 = -5931869404543LL;
	int64_t x220 = INT64_MAX;
	static volatile int32_t t49 = 1870;

	t49 = (x217<((x218-x219)|x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x226 = -1LL;
	int8_t x227 = -5;
	int8_t x228 = 0;
	volatile int32_t t50 = 249;

	t50 = (x225<((x226-x227)|x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MAX;
	uint16_t x230 = 3963U;
	volatile uint32_t x231 = UINT32_MAX;
	static int8_t x232 = INT8_MAX;
	int32_t t51 = 58388;

	t51 = (x229<((x230-x231)|x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x235 = 29355U;
	static int16_t x236 = INT16_MIN;
	static int32_t t52 = 44;

	t52 = (x233<((x234-x235)|x236));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = -631812427890039401LL;
	int8_t x238 = -62;

	t53 = (x237<((x238-x239)|x240));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 3U;
	int32_t x242 = -1;
	int32_t x243 = -1;
	int64_t x244 = INT64_MAX;
	volatile int32_t t54 = -616212;

	t54 = (x241<((x242-x243)|x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = 14U;
	uint32_t x246 = 12828U;
	int32_t x247 = INT32_MAX;
	static int32_t t55 = 8564;

	t55 = (x245<((x246-x247)|x248));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x250 = 954229465LLU;
	static int64_t x252 = INT64_MIN;

	t56 = (x249<((x250-x251)|x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = 322LL;
	int8_t x254 = -1;

	t57 = (x253<((x254-x255)|x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = INT32_MAX;
	static volatile int64_t x258 = 13LL;
	static volatile int32_t x260 = 28972;
	volatile int32_t t58 = 105;

	t58 = (x257<((x258-x259)|x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = -1;
	int8_t x262 = INT8_MIN;
	volatile int16_t x263 = -1;
	static int16_t x264 = -58;
	volatile int32_t t59 = -4198752;

	t59 = (x261<((x262-x263)|x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x266 = 3U;
	volatile int8_t x267 = 1;
	int32_t x268 = -82;
	volatile int32_t t60 = 127237;

	t60 = (x265<((x266-x267)|x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = INT64_MIN;
	volatile int32_t x270 = 0;
	int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t61 = 255284;

	t61 = (x269<((x270-x271)|x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = 29;
	int8_t x279 = INT8_MAX;
	static int64_t x280 = -1664830193298LL;
	static volatile int32_t t62 = -672895;

	t62 = (x277<((x278-x279)|x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x281 = 821028LLU;
	int8_t x282 = -1;
	int64_t x283 = INT64_MAX;
	int64_t x284 = 16560192LL;
	volatile int32_t t63 = 15586888;

	t63 = (x281<((x282-x283)|x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = -5745991695789553LL;
	volatile int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t64 = 141785;

	t64 = (x285<((x286-x287)|x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	uint64_t x292 = 895038546106LLU;

	t65 = (x289<((x290-x291)|x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x293 = 2;
	volatile uint16_t x294 = 9U;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MIN;
	int32_t t66 = -42493;

	t66 = (x293<((x294-x295)|x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x298 = -24133363;
	uint16_t x299 = UINT16_MAX;
	static uint64_t x300 = UINT64_MAX;
	int32_t t67 = 366289093;

	t67 = (x297<((x298-x299)|x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = -1;
	int64_t x302 = INT64_MIN;
	static volatile int32_t x303 = -1;
	int32_t t68 = 921614;

	t68 = (x301<((x302-x303)|x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MAX;
	static volatile int16_t x306 = INT16_MIN;
	volatile int32_t t69 = 250344;

	t69 = (x305<((x306-x307)|x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x309 = -1LL;
	int32_t x310 = INT32_MAX;
	int64_t x311 = -1LL;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t70 = 55594;

	t70 = (x309<((x310-x311)|x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x314 = -32;
	int16_t x315 = -1;
	static int16_t x316 = INT16_MIN;
	static volatile int32_t t71 = -3750;

	t71 = (x313<((x314-x315)|x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x321 = 930651U;
	static uint8_t x322 = UINT8_MAX;
	volatile int64_t x323 = 2976714160192305LL;
	volatile int32_t t72 = -487415253;

	t72 = (x321<((x322-x323)|x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x325 = INT8_MAX;
	volatile int8_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = -1839387;
	int32_t t73 = -857061608;

	t73 = (x325<((x326-x327)|x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x329 = 0U;
	volatile int16_t x332 = -1;
	int32_t t74 = -378026;

	t74 = (x329<((x330-x331)|x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x333 = INT64_MAX;
	int64_t x334 = -311090233610745708LL;
	static int32_t x335 = -77833;
	static volatile int32_t t75 = -52;

	t75 = (x333<((x334-x335)|x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x341 = 7545U;
	int16_t x342 = -1;
	volatile int16_t x343 = 222;
	volatile int8_t x344 = 2;
	static int32_t t76 = 1302723;

	t76 = (x341<((x342-x343)|x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = -1;
	volatile uint32_t x346 = 30312U;
	int32_t x347 = INT32_MIN;
	uint8_t x348 = UINT8_MAX;
	static int32_t t77 = 236;

	t77 = (x345<((x346-x347)|x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x349 = -7917;
	uint8_t x350 = 1U;
	int8_t x351 = 4;
	int64_t x352 = INT64_MIN;
	int32_t t78 = -115035;

	t78 = (x349<((x350-x351)|x352));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x357 = 6U;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t79 = -522314899;

	t79 = (x357<((x358-x359)|x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x362 = 13;
	uint16_t x364 = 5235U;
	volatile int32_t t80 = 14104690;

	t80 = (x361<((x362-x363)|x364));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 1499923486U;
	uint16_t x367 = 13U;

	t81 = (x365<((x366-x367)|x368));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = INT64_MAX;
	int64_t x371 = -1LL;
	uint16_t x372 = 47U;
	int32_t t82 = 3934701;

	t82 = (x369<((x370-x371)|x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = INT8_MIN;
	static int8_t x374 = -47;
	int8_t x375 = -27;
	volatile uint32_t x376 = 4055664U;

	t83 = (x373<((x374-x375)|x376));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x378 = 31675U;
	int32_t x379 = -1;
	int8_t x380 = INT8_MIN;

	t84 = (x377<((x378-x379)|x380));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x381 = INT32_MIN;
	int16_t x383 = INT16_MAX;
	int32_t t85 = 7991;

	t85 = (x381<((x382-x383)|x384));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x385 = 59;
	uint8_t x386 = 9U;
	uint8_t x387 = UINT8_MAX;

	t86 = (x385<((x386-x387)|x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x389 = UINT32_MAX;
	uint8_t x390 = 19U;
	volatile int8_t x391 = 7;
	int32_t x392 = 999225;
	int32_t t87 = 493553;

	t87 = (x389<((x390-x391)|x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x397 = 4724U;
	uint16_t x398 = UINT16_MAX;
	uint64_t x399 = 78450091316LLU;
	uint8_t x400 = 10U;
	volatile int32_t t88 = 44;

	t88 = (x397<((x398-x399)|x400));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = INT64_MAX;
	volatile uint8_t x404 = UINT8_MAX;
	int32_t t89 = 6602;

	t89 = (x401<((x402-x403)|x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x405 = UINT16_MAX;
	uint64_t x406 = UINT64_MAX;
	static uint64_t x408 = UINT64_MAX;
	int32_t t90 = -1;

	t90 = (x405<((x406-x407)|x408));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x409 = INT8_MAX;
	int8_t x410 = INT8_MIN;
	int32_t t91 = -5;

	t91 = (x409<((x410-x411)|x412));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = INT64_MIN;
	static volatile int32_t x414 = INT32_MIN;
	uint32_t x416 = UINT32_MAX;
	volatile int32_t t92 = 1322629;

	t92 = (x413<((x414-x415)|x416));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = UINT8_MAX;
	static int32_t x418 = INT32_MIN;
	volatile int8_t x420 = INT8_MAX;
	volatile int32_t t93 = -10409;

	t93 = (x417<((x418-x419)|x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = INT8_MAX;
	static int64_t x426 = -1LL;
	int16_t x427 = INT16_MIN;
	int32_t x428 = INT32_MIN;
	int32_t t94 = -2026;

	t94 = (x425<((x426-x427)|x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MAX;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = UINT16_MAX;
	static volatile int32_t t95 = -34689;

	t95 = (x429<((x430-x431)|x432));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = 0;
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	int32_t t96 = 3699;

	t96 = (x433<((x434-x435)|x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = INT8_MIN;
	static int32_t x438 = INT32_MAX;
	int64_t x439 = -1LL;
	volatile uint8_t x440 = UINT8_MAX;
	static int32_t t97 = 1029;

	t97 = (x437<((x438-x439)|x440));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = INT32_MAX;
	static volatile int32_t x442 = -1422893;
	int32_t t98 = -410541309;

	t98 = (x441<((x442-x443)|x444));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x446 = INT16_MIN;
	static int32_t x448 = -1;
	static volatile int32_t t99 = 27953125;

	t99 = (x445<((x446-x447)|x448));

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

