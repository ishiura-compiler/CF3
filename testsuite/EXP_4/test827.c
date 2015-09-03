#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = -1LL;
volatile int16_t x10 = -1;
int64_t x13 = -1LL;
volatile uint8_t x19 = 0U;
int64_t x22 = -2630831LL;
uint8_t x24 = 3U;
static int32_t t5 = -90;
static volatile uint8_t x29 = 106U;
int64_t x34 = INT64_MIN;
int32_t x37 = INT32_MAX;
int8_t x39 = INT8_MIN;
int16_t x40 = INT16_MIN;
volatile int64_t x43 = INT64_MIN;
volatile int32_t t10 = 1;
static int64_t x47 = INT64_MIN;
static uint32_t x48 = 15U;
volatile int32_t x51 = INT32_MAX;
uint8_t x57 = 13U;
int32_t x65 = INT32_MIN;
volatile int32_t t16 = -1833046;
uint32_t x70 = UINT32_MAX;
volatile int16_t x71 = -119;
volatile int32_t t18 = -85;
static uint8_t x77 = UINT8_MAX;
int64_t x88 = INT64_MIN;
int32_t x96 = 345;
int32_t t23 = -248388;
volatile int32_t t24 = 2377;
static volatile int32_t t25 = -13;
volatile int8_t x106 = 0;
static int8_t x110 = INT8_MIN;
uint64_t x118 = 184LLU;
static int8_t x120 = -42;
int16_t x130 = INT16_MIN;
int16_t x131 = INT16_MIN;
static volatile uint16_t x134 = UINT16_MAX;
volatile int32_t t35 = 0;
uint32_t x145 = 2091686784U;
uint32_t x147 = 342491398U;
static uint16_t x161 = 104U;
volatile int32_t t44 = -1;
static uint32_t x192 = UINT32_MAX;
volatile int32_t t45 = 503493;
int16_t x193 = INT16_MIN;
int32_t x217 = -182570;
int16_t x219 = -1;
static volatile int8_t x224 = INT8_MIN;
volatile int32_t t53 = 2;
int64_t x226 = -197091LL;
int32_t x253 = 142056;
int64_t x255 = INT64_MIN;
int32_t x256 = -1;
volatile int64_t x259 = INT64_MAX;
volatile uint8_t x260 = 25U;
volatile int32_t t61 = -12372308;
static volatile int32_t t62 = 48;
static volatile int32_t x268 = INT32_MIN;
static int8_t x270 = -1;
int16_t x277 = INT16_MAX;
uint32_t x283 = 627789U;
uint64_t x284 = UINT64_MAX;
static volatile int16_t x295 = INT16_MAX;
uint64_t x296 = 4LLU;
volatile int32_t t69 = -155;
volatile int32_t x301 = INT32_MIN;
static int8_t x310 = INT8_MIN;
int64_t x316 = INT64_MAX;
static int8_t x325 = 1;
static int16_t x327 = -1;
uint32_t x331 = 7865638U;
int8_t x337 = 1;
int8_t x347 = -48;
volatile int32_t t81 = 87;
int32_t t82 = -5;
uint8_t x357 = UINT8_MAX;
int64_t x361 = INT64_MAX;
volatile uint64_t x364 = 315230LLU;
uint64_t x368 = 9489714057LLU;
uint64_t x369 = UINT64_MAX;
volatile int32_t t87 = 16772;
volatile uint64_t x374 = 4355900LLU;
static volatile int32_t t88 = -1838;
int32_t t89 = -186308;
uint32_t x388 = 2181160U;
static int32_t t91 = -2646;
uint64_t x393 = 6895972172LLU;
static int32_t x394 = -1;
static volatile int16_t x400 = INT16_MIN;
volatile int32_t t94 = 4614;
volatile int8_t x404 = 1;
volatile int32_t x405 = INT32_MAX;
volatile int32_t t99 = 42824;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint16_t x2 = 625U;
	int8_t x3 = INT8_MIN;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -24930;

	t0 = (x1==(x2|(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int8_t x7 = -1;
	static uint32_t x8 = 1308U;
	int32_t t1 = 16195809;

	t1 = (x5==(x6|(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	uint32_t x11 = 1738U;
	int16_t x12 = -1;
	static int32_t t2 = 172;

	t2 = (x9==(x10|(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 7;
	volatile int32_t x15 = INT32_MAX;
	static int16_t x16 = -1;
	volatile int32_t t3 = -1;

	t3 = (x13==(x14|(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -2;
	static uint16_t x18 = 26U;
	uint32_t x20 = 9U;
	int32_t t4 = 218567;

	t4 = (x17==(x18|(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 45U;
	int8_t x23 = -29;

	t5 = (x21==(x22|(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 1;
	int64_t x26 = INT64_MIN;
	uint8_t x27 = 13U;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 8;

	t6 = (x25==(x26|(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	volatile int32_t x31 = -85;
	uint64_t x32 = 27434605096627LLU;
	volatile int32_t t7 = 434;

	t7 = (x29==(x30|(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int32_t x35 = -1;
	static int32_t x36 = -1980;
	volatile int32_t t8 = -107932;

	t8 = (x33==(x34|(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = UINT64_MAX;
	int32_t t9 = 204481705;

	t9 = (x37==(x38|(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	int64_t x42 = INT64_MAX;
	uint32_t x44 = UINT32_MAX;

	t10 = (x41==(x42|(x43%x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 0LLU;
	int32_t x46 = 188964965;
	volatile int32_t t11 = 100354;

	t11 = (x45==(x46|(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x50 = 96U;
	static uint16_t x52 = 26532U;
	volatile int32_t t12 = -14595;

	t12 = (x49==(x50|(x51%x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	volatile int32_t x54 = INT32_MIN;
	int8_t x55 = 0;
	volatile int8_t x56 = -1;
	int32_t t13 = -89167;

	t13 = (x53==(x54|(x55%x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x58 = 82184LL;
	int64_t x59 = 114335767609297LL;
	volatile int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 14932;

	t14 = (x57==(x58|(x59%x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -79;
	uint16_t x62 = 18U;
	static int64_t x63 = INT64_MAX;
	int64_t x64 = INT64_MIN;
	int32_t t15 = -1945006;

	t15 = (x61==(x62|(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -1;
	volatile int16_t x67 = -1;
	int8_t x68 = INT8_MAX;

	t16 = (x65==(x66|(x67%x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x69 = UINT32_MAX;
	int32_t x72 = -2174578;
	int32_t t17 = -3;

	t17 = (x69==(x70|(x71%x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -21;
	static int16_t x74 = INT16_MAX;
	static int32_t x75 = -241444;
	static int32_t x76 = 192994;

	t18 = (x73==(x74|(x75%x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 27885LLU;
	int32_t x79 = 3405;
	static uint8_t x80 = 7U;
	int32_t t19 = 377;

	t19 = (x77==(x78|(x79%x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int8_t x82 = -1;
	static uint16_t x83 = 14U;
	volatile int16_t x84 = 214;
	int32_t t20 = -70877;

	t20 = (x81==(x82|(x83%x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = 49;
	static int16_t x86 = INT16_MIN;
	volatile int64_t x87 = -28LL;
	volatile int32_t t21 = -77238674;

	t21 = (x85==(x86|(x87%x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	static uint32_t x90 = 118040940U;
	int32_t x91 = INT32_MAX;
	uint16_t x92 = UINT16_MAX;
	static volatile int32_t t22 = -23;

	t22 = (x89==(x90|(x91%x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	static volatile uint64_t x94 = 128801777971482LLU;
	uint32_t x95 = 113U;

	t23 = (x93==(x94|(x95%x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 1631LL;
	int32_t x98 = -101716711;
	int16_t x99 = -70;
	static int64_t x100 = -1LL;

	t24 = (x97==(x98|(x99%x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -83;
	static int8_t x102 = -24;
	uint32_t x103 = UINT32_MAX;
	int64_t x104 = 763170784003064LL;

	t25 = (x101==(x102|(x103%x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int64_t x107 = -1LL;
	int16_t x108 = INT16_MIN;
	int32_t t26 = -221540;

	t26 = (x105==(x106|(x107%x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int32_t x111 = 7574;
	static int32_t x112 = -45;
	int32_t t27 = -126055507;

	t27 = (x109==(x110|(x111%x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	volatile uint8_t x114 = 13U;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 1597592;

	t28 = (x113==(x114|(x115%x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -3;
	int32_t x119 = -209;
	volatile int32_t t29 = -369;

	t29 = (x117==(x118|(x119%x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = 3985;
	uint32_t x123 = 1221958402U;
	volatile int8_t x124 = -1;
	volatile int32_t t30 = -8339648;

	t30 = (x121==(x122|(x123%x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x125 = 31924038763294343LLU;
	static volatile int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MAX;
	volatile int32_t x128 = -4862;
	int32_t t31 = 4537;

	t31 = (x125==(x126|(x127%x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 0;

	t32 = (x129==(x130|(x131%x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 1;
	volatile int64_t x135 = -1LL;
	int8_t x136 = -1;
	volatile int32_t t33 = 1;

	t33 = (x133==(x134|(x135%x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int64_t x138 = INT64_MIN;
	volatile int16_t x139 = INT16_MIN;
	uint32_t x140 = UINT32_MAX;
	int32_t t34 = 100;

	t34 = (x137==(x138|(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x141 = UINT64_MAX;
	int32_t x142 = -1515503;
	uint64_t x143 = 68641220685LLU;
	uint32_t x144 = 501U;

	t35 = (x141==(x142|(x143%x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MIN;
	static int16_t x148 = INT16_MIN;
	static int32_t t36 = -62159679;

	t36 = (x145==(x146|(x147%x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	volatile int32_t x150 = INT32_MIN;
	uint8_t x151 = 56U;
	int8_t x152 = INT8_MAX;
	int32_t t37 = -14961;

	t37 = (x149==(x150|(x151%x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	uint32_t x154 = 940U;
	int32_t x155 = INT32_MIN;
	volatile uint32_t x156 = UINT32_MAX;
	int32_t t38 = 495;

	t38 = (x153==(x154|(x155%x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = 250272500387LL;
	int64_t x158 = 1370411613861096LL;
	int64_t x159 = INT64_MIN;
	volatile int64_t x160 = -1LL;
	volatile int32_t t39 = 1728;

	t39 = (x157==(x158|(x159%x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = 16078898967LLU;
	volatile int32_t t40 = 0;

	t40 = (x161==(x162|(x163%x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 101LLU;
	static volatile int32_t x166 = INT32_MAX;
	uint16_t x167 = 56U;
	int64_t x168 = -17906LL;
	volatile int32_t t41 = 187778774;

	t41 = (x165==(x166|(x167%x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 15;
	int64_t x170 = INT64_MIN;
	uint32_t x171 = 20004U;
	int64_t x172 = 2445926800806LL;
	volatile int32_t t42 = 30;

	t42 = (x169==(x170|(x171%x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 441233U;
	uint8_t x174 = 28U;
	volatile int32_t x175 = INT32_MAX;
	volatile int64_t x176 = 2240341979644843236LL;
	int32_t t43 = -1;

	t43 = (x173==(x174|(x175%x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x185 = UINT64_MAX;
	static int8_t x186 = INT8_MIN;
	static uint16_t x187 = 1U;
	static volatile uint64_t x188 = 74508295205122923LLU;

	t44 = (x185==(x186|(x187%x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MAX;
	uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = INT16_MAX;

	t45 = (x189==(x190|(x191%x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x194 = 731;
	int16_t x195 = -1;
	static uint64_t x196 = 6975387960742913162LLU;
	int32_t t46 = -8737641;

	t46 = (x193==(x194|(x195%x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -5;
	int16_t x198 = -1;
	static uint32_t x199 = UINT32_MAX;
	static int16_t x200 = INT16_MIN;
	static volatile int32_t t47 = 2355;

	t47 = (x197==(x198|(x199%x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	volatile int32_t x202 = 120973;
	volatile int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t48 = 28;

	t48 = (x201==(x202|(x203%x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = 1123;
	uint32_t x206 = UINT32_MAX;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = 6U;
	volatile int32_t t49 = 60012;

	t49 = (x205==(x206|(x207%x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MAX;
	static int8_t x211 = -1;
	int16_t x212 = -456;
	volatile int32_t t50 = -1;

	t50 = (x209==(x210|(x211%x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -1LL;
	int8_t x214 = 1;
	volatile uint32_t x215 = UINT32_MAX;
	int16_t x216 = INT16_MIN;
	volatile int32_t t51 = -251734579;

	t51 = (x213==(x214|(x215%x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x218 = 1U;
	int64_t x220 = -1663751089420293LL;
	volatile int32_t t52 = -1;

	t52 = (x217==(x218|(x219%x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x221 = UINT64_MAX;
	uint32_t x222 = 82U;
	volatile uint8_t x223 = 29U;

	t53 = (x221==(x222|(x223%x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 162U;
	int32_t x227 = 359618;
	static uint16_t x228 = 51U;
	volatile int32_t t54 = 187270;

	t54 = (x225==(x226|(x227%x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = INT64_MIN;
	int16_t x230 = 7051;
	volatile int16_t x231 = INT16_MIN;
	uint8_t x232 = 1U;
	static int32_t t55 = 2;

	t55 = (x229==(x230|(x231%x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x233 = 12138U;
	int8_t x234 = 0;
	int64_t x235 = INT64_MAX;
	static volatile int16_t x236 = 635;
	static volatile int32_t t56 = 58132;

	t56 = (x233==(x234|(x235%x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x237 = UINT32_MAX;
	int32_t x238 = INT32_MAX;
	int64_t x239 = -64737626757LL;
	int64_t x240 = 165083LL;
	volatile int32_t t57 = 2;

	t57 = (x237==(x238|(x239%x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x242 = INT16_MIN;
	int32_t x243 = 876835;
	uint64_t x244 = UINT64_MAX;
	int32_t t58 = 74;

	t58 = (x241==(x242|(x243%x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = 12306373LL;
	uint8_t x250 = 0U;
	int32_t x251 = -1;
	int16_t x252 = INT16_MAX;
	volatile int32_t t59 = -988;

	t59 = (x249==(x250|(x251%x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x254 = -1LL;
	volatile int32_t t60 = 1599489;

	t60 = (x253==(x254|(x255%x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 4U;
	uint16_t x258 = UINT16_MAX;

	t61 = (x257==(x258|(x259%x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = 1015U;
	static int64_t x262 = -2509273LL;
	volatile uint64_t x263 = 28937LLU;
	uint16_t x264 = UINT16_MAX;

	t62 = (x261==(x262|(x263%x264)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MAX;
	volatile int16_t x266 = INT16_MAX;
	int16_t x267 = -220;
	static volatile int32_t t63 = -5639;

	t63 = (x265==(x266|(x267%x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x271 = 140;
	int64_t x272 = 481LL;
	int32_t t64 = 544563;

	t64 = (x269==(x270|(x271%x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x274 = INT16_MAX;
	uint64_t x275 = 13274LLU;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t65 = -3764126;

	t65 = (x273==(x274|(x275%x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	static volatile int32_t t66 = -2;

	t66 = (x277==(x278|(x279%x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	static int32_t x282 = INT32_MIN;
	volatile int32_t t67 = 0;

	t67 = (x281==(x282|(x283%x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x290 = UINT8_MAX;
	uint64_t x291 = 3094981101931441LLU;
	int16_t x292 = -1;
	volatile int32_t t68 = -378;

	t68 = (x289==(x290|(x291%x292)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 246U;
	static volatile int8_t x294 = -1;

	t69 = (x293==(x294|(x295%x296)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x302 = INT64_MAX;
	int32_t x303 = -1;
	volatile uint16_t x304 = 4U;
	volatile int32_t t70 = 34;

	t70 = (x301==(x302|(x303%x304)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x305 = 4826U;
	volatile int32_t x306 = -58;
	int16_t x307 = 662;
	uint64_t x308 = 23011587LLU;
	int32_t t71 = -1;

	t71 = (x305==(x306|(x307%x308)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = 1;
	uint16_t x311 = 9U;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t72 = 62619;

	t72 = (x309==(x310|(x311%x312)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = 66079559622LLU;
	volatile int64_t x314 = INT64_MIN;
	int8_t x315 = 10;
	int32_t t73 = 106014627;

	t73 = (x313==(x314|(x315%x316)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = 5U;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = 12555U;
	static volatile uint32_t x320 = UINT32_MAX;
	int32_t t74 = -509218;

	t74 = (x317==(x318|(x319%x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = -7;
	int16_t x322 = -1;
	uint32_t x323 = UINT32_MAX;
	static uint64_t x324 = 2390102LLU;
	int32_t t75 = -9295638;

	t75 = (x321==(x322|(x323%x324)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x326 = 109U;
	uint8_t x328 = 70U;
	int32_t t76 = 19;

	t76 = (x325==(x326|(x327%x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x329 = INT32_MIN;
	int32_t x330 = 234771;
	int64_t x332 = INT64_MIN;
	static int32_t t77 = -25;

	t77 = (x329==(x330|(x331%x332)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MAX;
	uint16_t x335 = 119U;
	static int32_t x336 = INT32_MIN;
	int32_t t78 = 1;

	t78 = (x333==(x334|(x335%x336)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x338 = 10403LL;
	volatile uint64_t x339 = UINT64_MAX;
	int16_t x340 = -196;
	static volatile int32_t t79 = 349;

	t79 = (x337==(x338|(x339%x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = -1;
	static int64_t x342 = 30518213374LL;
	uint16_t x343 = 12207U;
	int32_t x344 = INT32_MIN;
	int32_t t80 = -186;

	t80 = (x341==(x342|(x343%x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x345 = 29U;
	uint8_t x346 = UINT8_MAX;
	uint8_t x348 = UINT8_MAX;

	t81 = (x345==(x346|(x347%x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x349 = 92U;
	int32_t x350 = 3198;
	uint8_t x351 = 52U;
	uint32_t x352 = 120262530U;

	t82 = (x349==(x350|(x351%x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = 194153785294LLU;
	static uint32_t x354 = 4752612U;
	static uint16_t x355 = UINT16_MAX;
	static int16_t x356 = -1;
	int32_t t83 = 30;

	t83 = (x353==(x354|(x355%x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x358 = 0U;
	volatile int32_t x359 = -1;
	int16_t x360 = INT16_MIN;
	volatile int32_t t84 = -2231;

	t84 = (x357==(x358|(x359%x360)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x362 = 452U;
	int8_t x363 = -7;
	volatile int32_t t85 = 9236;

	t85 = (x361==(x362|(x363%x364)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x365 = INT16_MIN;
	static uint64_t x366 = 1885373LLU;
	uint64_t x367 = 5845LLU;
	volatile int32_t t86 = 37538682;

	t86 = (x365==(x366|(x367%x368)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x370 = -1LL;
	static int16_t x371 = -1;
	static uint64_t x372 = UINT64_MAX;

	t87 = (x369==(x370|(x371%x372)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x373 = 11U;
	static uint64_t x375 = 1005752164113LLU;
	static uint16_t x376 = 3622U;

	t88 = (x373==(x374|(x375%x376)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x377 = 34109932LL;
	int8_t x378 = INT8_MIN;
	static volatile uint8_t x379 = 11U;
	int32_t x380 = INT32_MAX;

	t89 = (x377==(x378|(x379%x380)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = 0;
	uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	static volatile int32_t x384 = -3664438;
	volatile int32_t t90 = -18012;

	t90 = (x381==(x382|(x383%x384)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MAX;
	volatile int32_t x386 = INT32_MIN;
	int16_t x387 = -121;

	t91 = (x385==(x386|(x387%x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = 6U;
	int32_t x390 = -1;
	uint16_t x391 = 2966U;
	volatile uint8_t x392 = 1U;
	static int32_t t92 = -1142;

	t92 = (x389==(x390|(x391%x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x395 = 5022557213887701168LLU;
	volatile int32_t x396 = -101498928;
	int32_t t93 = 95;

	t93 = (x393==(x394|(x395%x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x397 = UINT8_MAX;
	static int32_t x398 = INT32_MAX;
	uint64_t x399 = 127059105635497740LLU;

	t94 = (x397==(x398|(x399%x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = UINT16_MAX;
	int16_t x402 = INT16_MIN;
	volatile int16_t x403 = INT16_MIN;
	volatile int32_t t95 = -974;

	t95 = (x401==(x402|(x403%x404)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x406 = 2541427U;
	uint64_t x407 = 1534889263LLU;
	int8_t x408 = INT8_MIN;
	volatile int32_t t96 = -2450957;

	t96 = (x405==(x406|(x407%x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = INT32_MAX;
	int16_t x410 = -7988;
	volatile int8_t x411 = -35;
	int32_t x412 = INT32_MAX;
	volatile int32_t t97 = 20;

	t97 = (x409==(x410|(x411%x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x413 = -1;
	int32_t x414 = 149515682;
	static int64_t x415 = -1LL;
	int16_t x416 = INT16_MAX;
	volatile int32_t t98 = 65444482;

	t98 = (x413==(x414|(x415%x416)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = -1;
	static uint16_t x418 = UINT16_MAX;
	volatile int16_t x419 = INT16_MIN;
	volatile int16_t x420 = INT16_MIN;

	t99 = (x417==(x418|(x419%x420)));

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

