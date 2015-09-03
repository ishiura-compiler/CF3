#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x14 = -49;
int8_t x15 = INT8_MAX;
volatile uint16_t x16 = 1892U;
static volatile int8_t x17 = 8;
uint8_t x20 = 2U;
static int8_t x26 = -1;
static int64_t x32 = -1LL;
static uint16_t x37 = UINT16_MAX;
uint16_t x49 = 5U;
static int16_t x52 = -1;
volatile uint64_t x57 = 9662LLU;
static int64_t x64 = -2896153LL;
int64_t x70 = -1LL;
volatile int32_t t17 = 1;
int32_t x74 = -1;
int32_t x77 = 2897;
volatile int16_t x89 = -1;
int64_t x93 = INT64_MIN;
int16_t x101 = -1;
volatile int32_t t25 = 25719;
int32_t x122 = INT32_MAX;
int16_t x126 = INT16_MIN;
int32_t x132 = INT32_MAX;
volatile int32_t t33 = 114;
volatile uint16_t x142 = 0U;
int16_t x157 = INT16_MIN;
int16_t x161 = 56;
uint64_t x168 = 13474115364861469LLU;
static volatile int32_t t42 = 535978;
volatile int32_t x175 = INT32_MIN;
static volatile int32_t t45 = 7244346;
uint16_t x187 = 2U;
int64_t x188 = 82239747286587846LL;
int32_t t46 = -1803;
static int32_t t48 = 328339;
static uint32_t x197 = UINT32_MAX;
static volatile int32_t x205 = INT32_MIN;
volatile int32_t t53 = 55;
volatile int8_t x231 = -1;
static volatile int32_t t58 = 1496;
uint32_t x240 = UINT32_MAX;
uint16_t x242 = 62U;
int32_t x254 = INT32_MIN;
int32_t x258 = INT32_MIN;
int32_t t66 = 633054;
int16_t x275 = -3;
uint16_t x280 = 307U;
uint16_t x281 = 1U;
uint16_t x282 = UINT16_MAX;
int16_t x302 = -2526;
int16_t x303 = -1;
int32_t t75 = -514741463;
int32_t x308 = INT32_MIN;
int16_t x312 = 1;
volatile int32_t x317 = -3454;
uint64_t x318 = 191498LLU;
int64_t x319 = -18974695413LL;
int32_t x326 = 0;
volatile int32_t t84 = -7;
uint64_t x342 = 5052LLU;
int64_t x345 = -1LL;
int8_t x349 = INT8_MAX;
uint16_t x355 = 7U;
uint16_t x358 = UINT16_MAX;
uint32_t x361 = 19709200U;
int64_t x364 = INT64_MAX;
int32_t t90 = -28178838;
uint8_t x366 = 57U;
static int16_t x368 = INT16_MAX;
static volatile uint8_t x369 = UINT8_MAX;
int8_t x374 = INT8_MIN;
static uint8_t x376 = 3U;
uint64_t x378 = 32157754255182LLU;
static int32_t x381 = -20693792;
static int32_t x384 = INT32_MIN;
int32_t x388 = INT32_MIN;
int32_t x391 = -21088110;
static int8_t x392 = INT8_MAX;
int16_t x396 = -3;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MAX;
	int16_t x4 = -2;
	volatile int32_t t0 = 1960;

	t0 = (x1==(x2|(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x6 = INT16_MIN;
	volatile int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = -193;

	t1 = (x5==(x6|(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint16_t x10 = 3U;
	int16_t x11 = 1450;
	static int32_t x12 = INT32_MAX;
	static volatile int32_t t2 = 49078473;

	t2 = (x9==(x10|(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = -1;
	volatile int32_t t3 = 77408816;

	t3 = (x13==(x14|(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 1833438041199971LL;
	static int32_t x19 = INT32_MAX;
	volatile int32_t t4 = -4;

	t4 = (x17==(x18|(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -275464LL;
	volatile int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 4126794;

	t5 = (x21==(x22|(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	int32_t x27 = -83;
	uint64_t x28 = 21967546980LLU;
	volatile int32_t t6 = -1;

	t6 = (x25==(x26|(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	uint8_t x30 = 4U;
	volatile uint32_t x31 = UINT32_MAX;
	int32_t t7 = 342513393;

	t7 = (x29==(x30|(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	int32_t x34 = -1;
	int16_t x35 = INT16_MAX;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 2059511;

	t8 = (x33==(x34|(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = UINT64_MAX;
	uint32_t x39 = 6373921U;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 96608302;

	t9 = (x37==(x38|(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	volatile int32_t x42 = INT32_MIN;
	uint16_t x43 = UINT16_MAX;
	volatile uint64_t x44 = 10LLU;
	volatile int32_t t10 = 495;

	t10 = (x41==(x42|(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = -1;
	uint64_t x47 = UINT64_MAX;
	static volatile int64_t x48 = -23LL;
	volatile int32_t t11 = 11770;

	t11 = (x45==(x46|(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = INT16_MAX;
	uint8_t x51 = UINT8_MAX;
	static volatile int32_t t12 = -379;

	t12 = (x49==(x50|(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MAX;
	int32_t x55 = -1;
	int8_t x56 = 13;
	volatile int32_t t13 = 0;

	t13 = (x53==(x54|(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 1;
	static int8_t x59 = INT8_MIN;
	int64_t x60 = -1LL;
	int32_t t14 = -30945554;

	t14 = (x57==(x58|(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	uint64_t x62 = 350492445366LLU;
	uint32_t x63 = UINT32_MAX;
	int32_t t15 = -23346475;

	t15 = (x61==(x62|(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 147U;
	int64_t x66 = 109389LL;
	int16_t x67 = -1;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 0;

	t16 = (x65==(x66|(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 203;
	uint32_t x71 = 1224U;
	volatile int16_t x72 = -1;

	t17 = (x69==(x70|(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int32_t x75 = -1;
	uint64_t x76 = 15981486291LLU;
	int32_t t18 = -13294;

	t18 = (x73==(x74|(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = 22752891945LL;
	uint32_t x79 = UINT32_MAX;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 25;

	t19 = (x77==(x78|(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	volatile int8_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = 2;

	t20 = (x81==(x82|(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 17U;
	static uint8_t x86 = 19U;
	uint32_t x87 = 1887U;
	int8_t x88 = INT8_MIN;
	static int32_t t21 = -283;

	t21 = (x85==(x86|(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	static int16_t x91 = INT16_MAX;
	uint64_t x92 = UINT64_MAX;
	static int32_t t22 = -11923436;

	t22 = (x89==(x90|(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 4LLU;
	int16_t x95 = INT16_MAX;
	uint8_t x96 = 43U;
	int32_t t23 = 501131;

	t23 = (x93==(x94|(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -1;
	uint8_t x98 = 15U;
	static int8_t x99 = -1;
	volatile int16_t x100 = 8;
	volatile int32_t t24 = 35490;

	t24 = (x97==(x98|(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = 0;
	volatile int32_t x103 = -4482709;
	volatile int32_t x104 = INT32_MAX;

	t25 = (x101==(x102|(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x106 = 87158U;
	static int64_t x107 = 32798204426993880LL;
	volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = 2;

	t26 = (x105==(x106|(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -62728847LL;
	uint32_t x110 = 8941789U;
	uint64_t x111 = 79268040282924292LLU;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 1767710;

	t27 = (x109==(x110|(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -748220590;

	t28 = (x113==(x114|(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = INT16_MIN;
	int16_t x120 = -1;
	volatile int32_t t29 = -2611;

	t29 = (x117==(x118|(x119<x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x121 = 195U;
	uint32_t x123 = 2U;
	int8_t x124 = -1;
	static int32_t t30 = -1813;

	t30 = (x121==(x122|(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 791;
	int8_t x127 = -1;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t31 = -1221;

	t31 = (x125==(x126|(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -103;
	int8_t x130 = INT8_MIN;
	int16_t x131 = 170;
	volatile int32_t t32 = -13986;

	t32 = (x129==(x130|(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MAX;
	int32_t x135 = INT32_MIN;
	static uint64_t x136 = 492667207LLU;

	t33 = (x133==(x134|(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	volatile uint64_t x140 = UINT64_MAX;
	static volatile int32_t t34 = -8328270;

	t34 = (x137==(x138|(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 426U;
	int32_t x143 = INT32_MIN;
	int32_t x144 = -1;
	int32_t t35 = -60;

	t35 = (x141==(x142|(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	uint8_t x146 = 0U;
	int64_t x147 = INT64_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -469;

	t36 = (x145==(x146|(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MAX;
	int16_t x151 = INT16_MIN;
	int32_t x152 = -1;
	int32_t t37 = -1;

	t37 = (x149==(x150|(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	int8_t x154 = INT8_MIN;
	static volatile int64_t x155 = -1LL;
	int8_t x156 = INT8_MIN;
	int32_t t38 = 489488204;

	t38 = (x153==(x154|(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = -252594392315LL;
	int64_t x159 = -1LL;
	volatile int8_t x160 = INT8_MIN;
	static int32_t t39 = 1029863;

	t39 = (x157==(x158|(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = 3U;
	volatile int8_t x163 = INT8_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = 31;

	t40 = (x161==(x162|(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 1;
	int64_t x166 = -119475LL;
	volatile int8_t x167 = INT8_MIN;
	volatile int32_t t41 = 13931700;

	t41 = (x165==(x166|(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	volatile uint32_t x170 = 314591U;
	static int8_t x171 = INT8_MAX;
	volatile int16_t x172 = INT16_MIN;

	t42 = (x169==(x170|(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MAX;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 16;

	t43 = (x173==(x174|(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = -1;
	static uint32_t x178 = 1U;
	int8_t x179 = INT8_MIN;
	static uint16_t x180 = 0U;
	volatile int32_t t44 = 435633552;

	t44 = (x177==(x178|(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MAX;
	static uint16_t x183 = 22504U;
	int16_t x184 = INT16_MIN;

	t45 = (x181==(x182|(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int32_t x186 = INT32_MAX;

	t46 = (x185==(x186|(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 5;
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = 7853U;
	volatile int64_t x192 = -1686133911LL;
	volatile int32_t t47 = -21983557;

	t47 = (x189==(x190|(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -8844;
	int32_t x194 = 1;
	int16_t x195 = INT16_MAX;
	uint8_t x196 = 26U;

	t48 = (x193==(x194|(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 3596U;
	uint64_t x199 = 166747676880LLU;
	int32_t x200 = INT32_MAX;
	int32_t t49 = -3;

	t49 = (x197==(x198|(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	int8_t x202 = 4;
	int32_t x203 = -3691;
	int64_t x204 = -3070LL;
	volatile int32_t t50 = -51939411;

	t50 = (x201==(x202|(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 13LLU;
	int8_t x207 = -25;
	static uint16_t x208 = 2U;
	int32_t t51 = 14225;

	t51 = (x205==(x206|(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 35U;
	int8_t x210 = INT8_MAX;
	int8_t x211 = 0;
	int16_t x212 = 556;
	volatile int32_t t52 = -26593801;

	t52 = (x209==(x210|(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	uint32_t x214 = UINT32_MAX;
	uint32_t x215 = 601U;
	uint16_t x216 = 175U;

	t53 = (x213==(x214|(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 3534708LL;
	int16_t x218 = INT16_MIN;
	volatile int64_t x219 = -1LL;
	int64_t x220 = -1LL;
	volatile int32_t t54 = -1256023;

	t54 = (x217==(x218|(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	static int8_t x222 = 0;
	uint32_t x223 = 0U;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -1791533;

	t55 = (x221==(x222|(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	int8_t x226 = INT8_MIN;
	static uint8_t x227 = 11U;
	uint16_t x228 = UINT16_MAX;
	static volatile int32_t t56 = 14859286;

	t56 = (x225==(x226|(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MIN;
	volatile uint32_t x232 = 131400045U;
	volatile int32_t t57 = -375491;

	t57 = (x229==(x230|(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int16_t x234 = -1;
	uint32_t x235 = UINT32_MAX;
	int64_t x236 = -62548337LL;

	t58 = (x233==(x234|(x235<x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	int16_t x239 = -2;
	volatile int32_t t59 = -359026;

	t59 = (x237==(x238|(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = 1;
	volatile int32_t t60 = 0;

	t60 = (x241==(x242|(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 188139296904LLU;
	uint16_t x246 = 58U;
	volatile uint32_t x247 = 3437330U;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -186;

	t61 = (x245==(x246|(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 57U;
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = 2U;
	volatile uint16_t x252 = 237U;
	static int32_t t62 = -36;

	t62 = (x249==(x250|(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = 15;
	static uint64_t x255 = 368879181LLU;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 87144478;

	t63 = (x253==(x254|(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	uint8_t x259 = 1U;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = 3;

	t64 = (x257==(x258|(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = -1;
	int16_t x262 = 1174;
	int8_t x263 = INT8_MAX;
	volatile int8_t x264 = INT8_MIN;
	static int32_t t65 = 1442;

	t65 = (x261==(x262|(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	static int16_t x266 = -1;
	uint16_t x267 = 187U;
	int8_t x268 = 1;

	t66 = (x265==(x266|(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = -1;
	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MIN;
	volatile uint8_t x272 = UINT8_MAX;
	int32_t t67 = 213;

	t67 = (x269==(x270|(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = 2982LLU;
	uint64_t x274 = UINT64_MAX;
	int64_t x276 = INT64_MAX;
	static int32_t t68 = 42969883;

	t68 = (x273==(x274|(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile int64_t x278 = -1LL;
	int8_t x279 = INT8_MIN;
	int32_t t69 = -182439164;

	t69 = (x277==(x278|(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x283 = 1107U;
	int8_t x284 = -1;
	volatile int32_t t70 = -34682185;

	t70 = (x281==(x282|(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MAX;
	static int8_t x286 = INT8_MAX;
	int64_t x287 = INT64_MAX;
	static uint32_t x288 = 5U;
	volatile int32_t t71 = -1855763;

	t71 = (x285==(x286|(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int8_t x290 = -7;
	int16_t x291 = -1;
	int32_t x292 = INT32_MIN;
	static int32_t t72 = -432768567;

	t72 = (x289==(x290|(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = UINT16_MAX;
	uint32_t x294 = 44484U;
	int16_t x295 = -1;
	int8_t x296 = -15;
	int32_t t73 = -130340;

	t73 = (x293==(x294|(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MAX;
	int64_t x299 = INT64_MIN;
	int8_t x300 = -11;
	volatile int32_t t74 = 23;

	t74 = (x297==(x298|(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 4025921LLU;
	volatile int64_t x304 = INT64_MIN;

	t75 = (x301==(x302|(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MIN;
	static int64_t x307 = -264735082LL;
	int32_t t76 = -12;

	t76 = (x305==(x306|(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	volatile int8_t x311 = INT8_MAX;
	int32_t t77 = 3;

	t77 = (x309==(x310|(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int64_t x314 = -412317618426180704LL;
	int8_t x315 = -5;
	static int32_t x316 = INT32_MIN;
	int32_t t78 = -1;

	t78 = (x313==(x314|(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x320 = 63U;
	volatile int32_t t79 = 1;

	t79 = (x317==(x318|(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint16_t x322 = 27217U;
	uint64_t x323 = UINT64_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t80 = -9;

	t80 = (x321==(x322|(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int8_t x327 = 1;
	int64_t x328 = INT64_MIN;
	int32_t t81 = 51;

	t81 = (x325==(x326|(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MIN;
	uint8_t x330 = 42U;
	volatile int16_t x331 = 261;
	uint16_t x332 = 59U;
	static volatile int32_t t82 = -9869;

	t82 = (x329==(x330|(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -10055;
	int8_t x334 = -32;
	int16_t x335 = INT16_MIN;
	int8_t x336 = 28;
	int32_t t83 = 2;

	t83 = (x333==(x334|(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -6;
	volatile uint8_t x338 = 7U;
	static volatile int64_t x339 = -1LL;
	static uint32_t x340 = 58U;

	t84 = (x337==(x338|(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -1;
	int8_t x343 = -1;
	int32_t x344 = INT32_MAX;
	volatile int32_t t85 = -22;

	t85 = (x341==(x342|(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -1;
	int64_t x347 = INT64_MAX;
	int64_t x348 = -1LL;
	int32_t t86 = -30;

	t86 = (x345==(x346|(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x350 = INT16_MAX;
	int16_t x351 = -12;
	static int8_t x352 = 2;
	int32_t t87 = 14028063;

	t87 = (x349==(x350|(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MIN;
	static int64_t x356 = 13851997962115LL;
	volatile int32_t t88 = 935023;

	t88 = (x353==(x354|(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x359 = -213;
	volatile uint64_t x360 = UINT64_MAX;
	int32_t t89 = 3948258;

	t89 = (x357==(x358|(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x362 = -1;
	volatile int64_t x363 = INT64_MAX;

	t90 = (x361==(x362|(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = UINT64_MAX;
	int16_t x367 = 6268;
	int32_t t91 = 0;

	t91 = (x365==(x366|(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MAX;
	int16_t x371 = 0;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 7901702;

	t92 = (x369==(x370|(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int8_t x375 = INT8_MAX;
	int32_t t93 = -53540;

	t93 = (x373==(x374|(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 0U;
	volatile int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MAX;
	volatile int32_t t94 = 455935359;

	t94 = (x377==(x378|(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MAX;
	uint16_t x383 = 28U;
	volatile int32_t t95 = 4123952;

	t95 = (x381==(x382|(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = INT32_MIN;
	int64_t x386 = -24028978393225LL;
	static int64_t x387 = -36LL;
	static volatile int32_t t96 = 419;

	t96 = (x385==(x386|(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = INT64_MAX;
	int32_t t97 = -51328;

	t97 = (x389==(x390|(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	volatile uint64_t x394 = UINT64_MAX;
	uint16_t x395 = 7U;
	int32_t t98 = -3161621;

	t98 = (x393==(x394|(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	uint8_t x398 = 93U;
	volatile int8_t x399 = INT8_MIN;
	volatile int16_t x400 = -1;
	volatile int32_t t99 = -684947;

	t99 = (x397==(x398|(x399<x400)));

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

