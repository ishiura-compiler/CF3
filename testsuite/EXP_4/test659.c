#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 0;
static int64_t x4 = 2580981166LL;
volatile int32_t t0 = -313828;
static int32_t x7 = INT32_MAX;
static int32_t t1 = 327755;
volatile int32_t t3 = 1169;
volatile int16_t x20 = -1;
static int32_t x28 = -56778;
volatile int32_t x42 = INT32_MIN;
volatile int32_t t11 = -1719;
uint16_t x56 = 162U;
static int32_t t12 = -6073817;
static volatile int32_t t13 = 14;
volatile int32_t t16 = -1;
int16_t x79 = -1736;
uint8_t x80 = 106U;
int32_t x83 = -95242246;
static int16_t x85 = INT16_MIN;
uint16_t x86 = UINT16_MAX;
static uint16_t x88 = 19U;
volatile int32_t t20 = -32435;
int8_t x94 = -5;
int8_t x96 = 2;
int32_t t23 = 690;
static int64_t x105 = -1LL;
int8_t x107 = INT8_MIN;
uint8_t x108 = UINT8_MAX;
volatile int32_t t24 = -192316;
volatile int32_t t26 = -412460;
volatile int16_t x118 = -15388;
volatile int32_t t27 = 270163;
static int64_t x121 = -1LL;
volatile int16_t x125 = -1;
volatile uint64_t x128 = 20189351719120LLU;
uint16_t x136 = 14U;
int32_t t31 = -16720623;
uint32_t x138 = 421U;
static int32_t x141 = -1;
int32_t x143 = INT32_MAX;
volatile uint32_t x145 = 14U;
int32_t t34 = -33661;
uint32_t x152 = 512166892U;
uint32_t x153 = 1871629926U;
uint16_t x158 = 39U;
int32_t t37 = -30;
volatile int8_t x164 = 1;
uint16_t x169 = 1U;
int8_t x172 = INT8_MAX;
static volatile int8_t x173 = 31;
volatile int16_t x185 = INT16_MIN;
static int16_t x202 = INT16_MIN;
volatile int64_t x203 = INT64_MAX;
uint16_t x204 = 375U;
volatile int32_t x206 = -401607;
volatile int32_t t48 = -6223214;
int16_t x209 = 106;
int8_t x224 = -1;
int8_t x225 = -1;
static volatile uint16_t x230 = 12U;
static volatile int64_t x231 = 1LL;
volatile int32_t t54 = 601575;
int32_t x233 = INT32_MIN;
static int16_t x236 = INT16_MIN;
volatile int32_t t55 = 17140646;
volatile int32_t t57 = 111914644;
volatile int8_t x265 = -1;
static volatile int32_t t65 = 14;
int32_t t66 = 504;
uint64_t x283 = 27501746LLU;
int64_t x287 = INT64_MIN;
uint32_t x288 = 11250096U;
volatile int32_t t70 = -1;
volatile int32_t x306 = INT32_MIN;
int32_t x308 = -1;
volatile int64_t x310 = -1LL;
volatile int32_t t74 = 0;
int32_t x314 = -1;
int64_t x317 = 938097781840463LL;
static int16_t x320 = -1;
int16_t x328 = INT16_MAX;
int32_t t78 = 902017;
uint16_t x335 = UINT16_MAX;
volatile int32_t t82 = 145404342;
volatile int32_t t84 = -170318;
static int64_t x358 = -1LL;
volatile int16_t x361 = -1;
static int32_t t87 = 32037233;
int16_t x367 = -453;
uint64_t x368 = 2LLU;
volatile int8_t x369 = INT8_MIN;
int32_t t89 = -3;
int8_t x380 = INT8_MIN;
volatile int32_t t90 = 835517;
int64_t x384 = -8LL;
int32_t x390 = 1639197;
volatile int8_t x393 = -1;
int64_t x395 = INT64_MIN;
static int16_t x400 = INT16_MAX;
static int16_t x404 = 14783;
volatile int32_t t96 = -1464;
int32_t x405 = -502;
int32_t t97 = -116893;
uint8_t x409 = UINT8_MAX;
int16_t x415 = INT16_MIN;
volatile int32_t t99 = 7;


void f0(void) {
	volatile uint64_t x1 = 4542031726965628960LLU;
	int16_t x2 = 1;

	t0 = (x1<(x2|(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int64_t x6 = -63456641474087069LL;
	uint8_t x8 = UINT8_MAX;

	t1 = (x5<(x6|(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -185;
	uint32_t x10 = UINT32_MAX;
	static int32_t x11 = 18942;
	static int64_t x12 = -4428774940706322LL;
	static volatile int32_t t2 = -417487;

	t2 = (x9<(x10|(x11/x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int16_t x14 = -1;
	int64_t x15 = 526694809843693LL;
	uint32_t x16 = 7846896U;

	t3 = (x13<(x14|(x15/x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 677695LL;
	uint8_t x18 = 1U;
	static volatile int8_t x19 = INT8_MIN;
	volatile int32_t t4 = -122654854;

	t4 = (x17<(x18|(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 3835034U;
	int8_t x22 = -1;
	volatile uint32_t x23 = 2292370U;
	int16_t x24 = -1;
	volatile int32_t t5 = -1022938;

	t5 = (x21<(x22|(x23/x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	static int32_t x26 = 0;
	int64_t x27 = INT64_MIN;
	int32_t t6 = -243044;

	t6 = (x25<(x26|(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 3356U;
	static int64_t x36 = 18811483LL;
	static int32_t t7 = 57591842;

	t7 = (x33<(x34|(x35/x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -2;
	uint64_t x38 = 3096229LLU;
	uint64_t x39 = 24621LLU;
	volatile int16_t x40 = INT16_MIN;
	int32_t t8 = 17349085;

	t8 = (x37<(x38|(x39/x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 55706412U;
	int16_t x43 = INT16_MAX;
	uint64_t x44 = 37912134226LLU;
	static int32_t t9 = 941092;

	t9 = (x41<(x42|(x43/x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 1U;
	uint64_t x46 = UINT64_MAX;
	static volatile uint16_t x47 = 12418U;
	int64_t x48 = -243LL;
	int32_t t10 = -14;

	t10 = (x45<(x46|(x47/x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MAX;
	uint16_t x51 = UINT16_MAX;
	static int32_t x52 = INT32_MAX;

	t11 = (x49<(x50|(x51/x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int16_t x54 = -66;
	uint16_t x55 = 9865U;

	t12 = (x53<(x54|(x55/x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 14U;
	int8_t x58 = -1;
	uint16_t x59 = 7084U;
	static int8_t x60 = -22;

	t13 = (x57<(x58|(x59/x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	volatile int32_t x63 = -28;
	volatile int64_t x64 = INT64_MIN;
	static volatile int32_t t14 = 4432;

	t14 = (x61<(x62|(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	uint64_t x66 = UINT64_MAX;
	volatile uint16_t x67 = UINT16_MAX;
	static uint64_t x68 = 6803LLU;
	int32_t t15 = 47892298;

	t15 = (x65<(x66|(x67/x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x69 = -1;
	int64_t x70 = 27517939199749458LL;
	int32_t x71 = INT32_MAX;
	static volatile int32_t x72 = INT32_MIN;

	t16 = (x69<(x70|(x71/x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	volatile int32_t t17 = -5966325;

	t17 = (x77<(x78|(x79/x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 6154U;
	int8_t x82 = INT8_MIN;
	volatile uint64_t x84 = 2367544828136354LLU;
	volatile int32_t t18 = 0;

	t18 = (x81<(x82|(x83/x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x87 = -1;
	volatile int32_t t19 = 5708390;

	t19 = (x85<(x86|(x87/x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int32_t x90 = -1;
	volatile int64_t x91 = INT64_MAX;
	int32_t x92 = -1;

	t20 = (x89<(x90|(x91/x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -12;
	int64_t x95 = -8LL;
	volatile int32_t t21 = -502243509;

	t21 = (x93<(x94|(x95/x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 939LLU;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 3403LLU;
	int8_t x100 = 1;
	int32_t t22 = -1;

	t22 = (x97<(x98|(x99/x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -1;
	static int64_t x102 = INT64_MIN;
	static uint8_t x103 = UINT8_MAX;
	uint8_t x104 = 13U;

	t23 = (x101<(x102|(x103/x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = UINT32_MAX;

	t24 = (x105<(x106|(x107/x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MAX;
	uint64_t x110 = UINT64_MAX;
	volatile uint8_t x111 = UINT8_MAX;
	int64_t x112 = 15438881LL;
	volatile int32_t t25 = 0;

	t25 = (x109<(x110|(x111/x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = 15745951LL;
	int16_t x114 = INT16_MIN;
	static int16_t x115 = -1;
	int16_t x116 = INT16_MAX;

	t26 = (x113<(x114|(x115/x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x119 = INT32_MAX;
	int32_t x120 = INT32_MAX;

	t27 = (x117<(x118|(x119/x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x122 = 1355952072852761LLU;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MIN;
	volatile int32_t t28 = -1;

	t28 = (x121<(x122|(x123/x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = 666U;
	int16_t x127 = INT16_MIN;
	int32_t t29 = -503962;

	t29 = (x125<(x126|(x127/x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x129 = 0U;
	uint8_t x130 = 20U;
	int64_t x131 = 1591405530699430LL;
	static uint8_t x132 = 5U;
	volatile int32_t t30 = 2516982;

	t30 = (x129<(x130|(x131/x132)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 6466LLU;
	static volatile int8_t x134 = INT8_MAX;
	int32_t x135 = 166;

	t31 = (x133<(x134|(x135/x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	int32_t x139 = INT32_MAX;
	static uint64_t x140 = UINT64_MAX;
	volatile int32_t t32 = -1515274;

	t32 = (x137<(x138|(x139/x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = -1LL;
	int64_t x144 = -1LL;
	volatile int32_t t33 = -28730;

	t33 = (x141<(x142|(x143/x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = 1774;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = INT8_MIN;

	t34 = (x145<(x146|(x147/x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	volatile int16_t x151 = INT16_MIN;
	int32_t t35 = 14;

	t35 = (x149<(x150|(x151/x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x154 = -11412527LL;
	int8_t x155 = -1;
	volatile int32_t x156 = INT32_MAX;
	static int32_t t36 = 954954;

	t36 = (x153<(x154|(x155/x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = 55185812240LL;
	static uint32_t x159 = UINT32_MAX;
	static int16_t x160 = -2482;

	t37 = (x157<(x158|(x159/x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	int64_t x162 = INT64_MAX;
	uint64_t x163 = UINT64_MAX;
	static int32_t t38 = -8038480;

	t38 = (x161<(x162|(x163/x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x170 = 9016339;
	uint32_t x171 = 498545226U;
	static int32_t t39 = -142437791;

	t39 = (x169<(x170|(x171/x172)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = 58145483LL;
	int64_t x175 = 5511927501LL;
	int32_t x176 = -1;
	volatile int32_t t40 = -7225;

	t40 = (x173<(x174|(x175/x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -1;
	static uint32_t x178 = 13U;
	volatile uint16_t x179 = 282U;
	int8_t x180 = INT8_MAX;
	volatile int32_t t41 = -887269306;

	t41 = (x177<(x178|(x179/x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = -1LL;
	int16_t x183 = -1;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t42 = 115045;

	t42 = (x181<(x182|(x183/x184)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x186 = 11453U;
	static uint32_t x187 = 39U;
	int8_t x188 = INT8_MIN;
	int32_t t43 = -155143;

	t43 = (x185<(x186|(x187/x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x189 = -1;
	int16_t x190 = 3;
	volatile int32_t x191 = INT32_MIN;
	static int64_t x192 = 50LL;
	int32_t t44 = 1;

	t44 = (x189<(x190|(x191/x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = 985572001997493LLU;
	int32_t x194 = 6;
	int8_t x195 = INT8_MIN;
	int64_t x196 = -6597LL;
	int32_t t45 = -143;

	t45 = (x193<(x194|(x195/x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -141300LL;
	volatile int8_t x198 = INT8_MAX;
	volatile uint64_t x199 = 2LLU;
	volatile uint32_t x200 = 4U;
	volatile int32_t t46 = 41695690;

	t46 = (x197<(x198|(x199/x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = UINT32_MAX;
	static int32_t t47 = 1;

	t47 = (x201<(x202|(x203/x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 0U;
	uint32_t x207 = 6167167U;
	uint8_t x208 = 3U;

	t48 = (x205<(x206|(x207/x208)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = -1LL;
	int32_t x211 = 36830;
	int32_t x212 = INT32_MIN;
	volatile int32_t t49 = -31460;

	t49 = (x209<(x210|(x211/x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x213 = -1;
	int64_t x214 = INT64_MAX;
	int64_t x215 = 18LL;
	int16_t x216 = -1;
	static int32_t t50 = -1068569018;

	t50 = (x213<(x214|(x215/x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x217 = INT64_MAX;
	int32_t x218 = INT32_MIN;
	int16_t x219 = 2297;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t51 = 1;

	t51 = (x217<(x218|(x219/x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = INT64_MIN;
	uint32_t x222 = 216898141U;
	int8_t x223 = INT8_MAX;
	volatile int32_t t52 = 5216;

	t52 = (x221<(x222|(x223/x224)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MAX;
	int64_t x228 = INT64_MIN;
	int32_t t53 = 210;

	t53 = (x225<(x226|(x227/x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x229 = UINT64_MAX;
	volatile int32_t x232 = -194;

	t54 = (x229<(x230|(x231/x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x234 = 3;
	int16_t x235 = INT16_MIN;

	t55 = (x233<(x234|(x235/x236)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = 0;
	int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MAX;
	int16_t x240 = 465;
	int32_t t56 = -438242;

	t56 = (x237<(x238|(x239/x240)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = -181296;
	int16_t x242 = INT16_MAX;
	uint8_t x243 = 14U;
	int32_t x244 = INT32_MAX;

	t57 = (x241<(x242|(x243/x244)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x245 = INT32_MAX;
	uint8_t x246 = UINT8_MAX;
	static int8_t x247 = -1;
	volatile uint16_t x248 = 20169U;
	int32_t t58 = -20102;

	t58 = (x245<(x246|(x247/x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = 13348927234847LLU;
	uint16_t x250 = 74U;
	volatile uint16_t x251 = 5768U;
	int64_t x252 = INT64_MIN;
	volatile int32_t t59 = 445;

	t59 = (x249<(x250|(x251/x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MAX;
	int16_t x254 = INT16_MIN;
	int32_t x255 = -387;
	uint32_t x256 = 1005865U;
	volatile int32_t t60 = 1668699;

	t60 = (x253<(x254|(x255/x256)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = 0;
	static int16_t x258 = 52;
	volatile int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int32_t t61 = 2688880;

	t61 = (x257<(x258|(x259/x260)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = 9161287LLU;
	uint32_t x262 = UINT32_MAX;
	static int64_t x263 = INT64_MIN;
	uint16_t x264 = UINT16_MAX;
	int32_t t62 = -29229238;

	t62 = (x261<(x262|(x263/x264)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x266 = 1LL;
	int16_t x267 = 0;
	uint8_t x268 = 13U;
	int32_t t63 = 1;

	t63 = (x265<(x266|(x267/x268)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x269 = 101109LL;
	int8_t x270 = -1;
	volatile int32_t x271 = -1;
	int16_t x272 = INT16_MIN;
	int32_t t64 = 2;

	t64 = (x269<(x270|(x271/x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x273 = 22LL;
	int64_t x274 = 917678985562350LL;
	int64_t x275 = INT64_MAX;
	volatile int8_t x276 = -1;

	t65 = (x273<(x274|(x275/x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = 0U;
	int64_t x278 = INT64_MAX;
	static volatile int64_t x279 = INT64_MIN;
	int32_t x280 = -15;

	t66 = (x277<(x278|(x279/x280)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x281 = INT32_MAX;
	static volatile int8_t x282 = INT8_MAX;
	uint16_t x284 = UINT16_MAX;
	int32_t t67 = 42;

	t67 = (x281<(x282|(x283/x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = 190320LL;
	static int8_t x286 = 7;
	int32_t t68 = 5;

	t68 = (x285<(x286|(x287/x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = UINT8_MAX;
	int8_t x290 = 1;
	volatile int8_t x291 = INT8_MIN;
	volatile int64_t x292 = INT64_MAX;
	static volatile int32_t t69 = 132250982;

	t69 = (x289<(x290|(x291/x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x293 = 97806230LLU;
	int16_t x294 = -1;
	int32_t x295 = 1653;
	volatile int32_t x296 = INT32_MIN;

	t70 = (x293<(x294|(x295/x296)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = INT8_MIN;
	static volatile int16_t x298 = 1;
	volatile uint64_t x299 = UINT64_MAX;
	int64_t x300 = -920821650097LL;
	static volatile int32_t t71 = 4295054;

	t71 = (x297<(x298|(x299/x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x301 = -8;
	int8_t x302 = INT8_MIN;
	volatile int32_t x303 = -6206;
	static volatile int64_t x304 = INT64_MIN;
	static volatile int32_t t72 = 735779;

	t72 = (x301<(x302|(x303/x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = 8416446845225229LL;
	int8_t x307 = 31;
	int32_t t73 = -7;

	t73 = (x305<(x306|(x307/x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = 0;
	volatile uint16_t x311 = 45U;
	volatile int16_t x312 = INT16_MIN;

	t74 = (x309<(x310|(x311/x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x313 = INT32_MIN;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MAX;
	int32_t t75 = -434;

	t75 = (x313<(x314|(x315/x316)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x318 = 83U;
	static int16_t x319 = -102;
	int32_t t76 = 57;

	t76 = (x317<(x318|(x319/x320)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x321 = 219403647;
	volatile int32_t x322 = INT32_MIN;
	int8_t x323 = -11;
	static int8_t x324 = INT8_MIN;
	int32_t t77 = 186;

	t77 = (x321<(x322|(x323/x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x325 = 369LLU;
	volatile uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MAX;

	t78 = (x325<(x326|(x327/x328)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x329 = 1;
	static uint32_t x330 = 1U;
	int8_t x331 = -6;
	int8_t x332 = INT8_MIN;
	static int32_t t79 = -5723839;

	t79 = (x329<(x330|(x331/x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = -23849;
	int16_t x334 = 56;
	int64_t x336 = 1908LL;
	static int32_t t80 = 2666150;

	t80 = (x333<(x334|(x335/x336)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MIN;
	uint64_t x338 = 23LLU;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	volatile int32_t t81 = -1;

	t81 = (x337<(x338|(x339/x340)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = 73;
	int8_t x342 = INT8_MIN;
	static int32_t x343 = 3168;
	int8_t x344 = -1;

	t82 = (x341<(x342|(x343/x344)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x345 = INT64_MIN;
	uint8_t x346 = UINT8_MAX;
	static int8_t x347 = -1;
	int32_t x348 = -1;
	static int32_t t83 = -171957377;

	t83 = (x345<(x346|(x347/x348)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = UINT8_MAX;
	volatile uint16_t x351 = 15757U;
	static uint64_t x352 = UINT64_MAX;

	t84 = (x349<(x350|(x351/x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x354 = 0U;
	int64_t x355 = -6170308458LL;
	int64_t x356 = INT64_MAX;
	int32_t t85 = 3;

	t85 = (x353<(x354|(x355/x356)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = 8;
	volatile int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t86 = -39;

	t86 = (x357<(x358|(x359/x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x362 = 7047U;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 57361006376759LLU;

	t87 = (x361<(x362|(x363/x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x365 = 2536U;
	int16_t x366 = INT16_MAX;
	int32_t t88 = 576478653;

	t88 = (x365<(x366|(x367/x368)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x370 = 3988U;
	static uint32_t x371 = 179428818U;
	uint32_t x372 = 112U;

	t89 = (x369<(x370|(x371/x372)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x377 = 7U;
	int32_t x378 = 9856;
	uint16_t x379 = UINT16_MAX;

	t90 = (x377<(x378|(x379/x380)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = 828830888056436LLU;
	int8_t x382 = INT8_MIN;
	uint8_t x383 = 48U;
	static volatile int32_t t91 = -39;

	t91 = (x381<(x382|(x383/x384)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x385 = -1;
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = -1;
	int64_t x388 = INT64_MIN;
	static int32_t t92 = 1706495;

	t92 = (x385<(x386|(x387/x388)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x389 = 132253021435LL;
	static volatile uint16_t x391 = 0U;
	uint32_t x392 = 1605923U;
	volatile int32_t t93 = -14224;

	t93 = (x389<(x390|(x391/x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = INT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t94 = 324987425;

	t94 = (x393<(x394|(x395/x396)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MAX;
	static uint64_t x399 = 410923380598396966LLU;
	volatile int32_t t95 = -349487399;

	t95 = (x397<(x398|(x399/x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = 739U;
	uint32_t x402 = UINT32_MAX;
	uint64_t x403 = 1256699943034602059LLU;

	t96 = (x401<(x402|(x403/x404)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x406 = -1LL;
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MAX;

	t97 = (x405<(x406|(x407/x408)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x410 = 1082;
	uint64_t x411 = 49848673818068LLU;
	volatile int16_t x412 = INT16_MIN;
	static volatile int32_t t98 = -5853;

	t98 = (x409<(x410|(x411/x412)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x413 = 1;
	volatile uint32_t x414 = 195U;
	int16_t x416 = -1;

	t99 = (x413<(x414|(x415/x416)));

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

