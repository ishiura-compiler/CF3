#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x5 = INT32_MAX;
static uint64_t x7 = 37LLU;
int64_t x11 = -64193624LL;
int32_t x18 = 2017200;
int32_t t7 = 0;
static int32_t x37 = INT32_MIN;
int8_t x40 = -1;
static uint64_t x41 = 4166000LLU;
int64_t x44 = 61467256660540602LL;
static volatile int8_t x48 = -2;
uint16_t x52 = 34U;
volatile uint64_t x56 = 850LLU;
int16_t x59 = 1;
int64_t x62 = -7433093LL;
volatile int32_t t15 = 1;
static volatile int32_t x66 = 685;
volatile int32_t x69 = INT32_MIN;
int64_t x71 = -146781039690LL;
volatile uint16_t x72 = 3652U;
int8_t x75 = INT8_MIN;
int32_t x80 = INT32_MAX;
volatile int16_t x87 = INT16_MIN;
static int32_t t21 = 65;
volatile int16_t x89 = INT16_MIN;
static int8_t x105 = -1;
uint64_t x111 = 2049LLU;
int8_t x115 = INT8_MIN;
int64_t x116 = -1LL;
int64_t x127 = -1LL;
uint64_t x137 = 875224LLU;
static uint16_t x142 = 267U;
volatile int32_t t34 = 137352398;
int32_t x146 = INT32_MAX;
volatile uint32_t x150 = 2U;
int16_t x152 = -1;
int8_t x156 = INT8_MIN;
int32_t t38 = 3708132;
int8_t x166 = 0;
int8_t x168 = 2;
int8_t x178 = -1;
volatile int64_t x181 = INT64_MAX;
volatile int32_t t44 = -535632;
int16_t x191 = 24;
volatile int8_t x195 = INT8_MIN;
volatile int32_t t46 = -6783200;
int32_t x203 = INT32_MIN;
volatile int32_t t48 = -466425;
volatile int32_t t50 = -980871;
uint8_t x213 = 23U;
int32_t x215 = 38535;
uint8_t x216 = 1U;
uint16_t x222 = 194U;
static int32_t t53 = -330509621;
volatile int64_t x229 = INT64_MAX;
int8_t x234 = INT8_MIN;
static volatile int16_t x240 = INT16_MAX;
static int64_t x247 = INT64_MIN;
int32_t t58 = 620868;
static int16_t x249 = 5214;
int16_t x254 = INT16_MAX;
static int32_t x258 = INT32_MIN;
int64_t x259 = -591180264747562173LL;
int32_t t61 = -1795;
volatile int32_t t62 = 0;
int16_t x269 = -1;
volatile uint8_t x271 = 5U;
uint16_t x281 = 14U;
volatile int32_t t69 = -214200682;
volatile int16_t x298 = INT16_MIN;
int32_t x312 = INT32_MIN;
int64_t x317 = INT64_MAX;
volatile int32_t t76 = -9674371;
uint64_t x326 = 3LLU;
int16_t x338 = -1;
static volatile int16_t x339 = INT16_MAX;
static int32_t x345 = -1;
int16_t x352 = 1549;
uint16_t x360 = 4U;
int32_t t86 = -4898;
int32_t x367 = -13;
int32_t t89 = -63148;
int32_t x377 = -1;
int8_t x380 = INT8_MIN;
int16_t x393 = INT16_MIN;
static int32_t x394 = INT32_MIN;
int32_t x395 = INT32_MAX;
int8_t x396 = INT8_MIN;
int32_t t93 = -170427;
uint32_t x398 = 1645U;
int8_t x403 = INT8_MIN;
int32_t x405 = INT32_MIN;
int16_t x406 = INT16_MIN;
uint32_t x419 = 728786U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = 81U;
	uint32_t x3 = 68370071U;
	int8_t x4 = -1;
	volatile int32_t t0 = 0;

	t0 = (x1<=(x2<=(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = UINT32_MAX;
	int64_t x8 = 112LL;
	int32_t t1 = -533;

	t1 = (x5<=(x6<=(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	static int64_t x10 = -16837670942LL;
	int32_t x12 = -1;
	int32_t t2 = 7652;

	t2 = (x9<=(x10<=(x11/x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	volatile uint64_t x14 = 76004024553LLU;
	int16_t x15 = INT16_MAX;
	static int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -1026776;

	t3 = (x13<=(x14<=(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	int32_t x19 = INT32_MAX;
	uint32_t x20 = UINT32_MAX;
	volatile int32_t t4 = -1907;

	t4 = (x17<=(x18<=(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	volatile int16_t x22 = 204;
	uint64_t x23 = 394187834828321LLU;
	volatile int32_t x24 = -1;
	int32_t t5 = -224984;

	t5 = (x21<=(x22<=(x23/x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static volatile int16_t x26 = -1;
	int32_t x27 = 7;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -18945;

	t6 = (x25<=(x26<=(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile int8_t x30 = INT8_MIN;
	static int8_t x31 = 22;
	uint16_t x32 = 15387U;

	t7 = (x29<=(x30<=(x31/x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	volatile int64_t x34 = INT64_MAX;
	static int64_t x35 = 4LL;
	int8_t x36 = -1;
	volatile int32_t t8 = 39742;

	t8 = (x33<=(x34<=(x35/x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	volatile int64_t x39 = 23257134931880LL;
	volatile int32_t t9 = -2;

	t9 = (x37<=(x38<=(x39/x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = -1LL;
	int16_t x43 = INT16_MIN;
	volatile int32_t t10 = -5638646;

	t10 = (x41<=(x42<=(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x45 = 5LLU;
	static uint16_t x46 = 0U;
	int8_t x47 = -1;
	int32_t t11 = 225;

	t11 = (x45<=(x46<=(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 3969337U;
	uint16_t x50 = 32U;
	static int32_t x51 = INT32_MAX;
	int32_t t12 = 386687996;

	t12 = (x49<=(x50<=(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 29U;
	uint32_t x54 = 0U;
	int32_t x55 = INT32_MIN;
	volatile int32_t t13 = -181762017;

	t13 = (x53<=(x54<=(x55/x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x58 = -6771478;
	int64_t x60 = INT64_MAX;
	static int32_t t14 = 3721;

	t14 = (x57<=(x58<=(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -64501649;
	uint32_t x63 = 5U;
	int16_t x64 = -740;

	t15 = (x61<=(x62<=(x63/x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 1;
	int8_t x67 = INT8_MAX;
	int8_t x68 = -27;
	volatile int32_t t16 = -102769;

	t16 = (x65<=(x66<=(x67/x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -235;
	int32_t t17 = 18873;

	t17 = (x69<=(x70<=(x71/x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x74 = 26U;
	static int64_t x76 = INT64_MAX;
	int32_t t18 = -106;

	t18 = (x73<=(x74<=(x75/x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	volatile int64_t x78 = INT64_MAX;
	uint16_t x79 = 18U;
	int32_t t19 = 4112;

	t19 = (x77<=(x78<=(x79/x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = -275659LL;
	int32_t x82 = -599;
	static int32_t x83 = -35862679;
	volatile uint8_t x84 = 51U;
	volatile int32_t t20 = -1;

	t20 = (x81<=(x82<=(x83/x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 1U;
	uint8_t x86 = 3U;
	int8_t x88 = -1;

	t21 = (x85<=(x86<=(x87/x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x90 = 13U;
	volatile int32_t x91 = 4;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 349;

	t22 = (x89<=(x90<=(x91/x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 16382;
	volatile uint64_t x98 = 1411055443702714LLU;
	int32_t x99 = -1122;
	volatile uint8_t x100 = 57U;
	int32_t t23 = -66247769;

	t23 = (x97<=(x98<=(x99/x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MIN;
	uint32_t x103 = 6820U;
	uint32_t x104 = UINT32_MAX;
	int32_t t24 = -29696642;

	t24 = (x101<=(x102<=(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x106 = 43U;
	int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MAX;
	int32_t t25 = -1;

	t25 = (x105<=(x106<=(x107/x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 3925U;
	uint16_t x110 = 4881U;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t26 = 0;

	t26 = (x109<=(x110<=(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 122U;
	int32_t x114 = INT32_MAX;
	int32_t t27 = 40;

	t27 = (x113<=(x114<=(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = INT8_MAX;
	uint16_t x118 = 13368U;
	static int32_t x119 = INT32_MIN;
	static int16_t x120 = INT16_MIN;
	volatile int32_t t28 = -4;

	t28 = (x117<=(x118<=(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	static uint32_t x122 = 235456U;
	uint64_t x123 = 318LLU;
	uint16_t x124 = 13259U;
	volatile int32_t t29 = 115730003;

	t29 = (x121<=(x122<=(x123/x124)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	volatile uint64_t x126 = 0LLU;
	int16_t x128 = INT16_MIN;
	volatile int32_t t30 = -104886;

	t30 = (x125<=(x126<=(x127/x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x129 = 10U;
	static int32_t x130 = -16086410;
	uint8_t x131 = 44U;
	uint64_t x132 = 7706945434LLU;
	volatile int32_t t31 = -77276;

	t31 = (x129<=(x130<=(x131/x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = INT16_MIN;
	static int8_t x134 = INT8_MIN;
	int8_t x135 = -1;
	int64_t x136 = -3771173106LL;
	int32_t t32 = 136480;

	t32 = (x133<=(x134<=(x135/x136)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x138 = 1766744U;
	uint64_t x139 = 136182175005167LLU;
	uint8_t x140 = 13U;
	volatile int32_t t33 = 152;

	t33 = (x137<=(x138<=(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -5188LL;
	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MIN;

	t34 = (x141<=(x142<=(x143/x144)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	volatile int32_t x147 = INT32_MIN;
	uint8_t x148 = UINT8_MAX;
	int32_t t35 = -17773;

	t35 = (x145<=(x146<=(x147/x148)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	uint64_t x151 = 196345592300LLU;
	static int32_t t36 = -356;

	t36 = (x149<=(x150<=(x151/x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	static int16_t x154 = -1;
	volatile int64_t x155 = 764490986659LL;
	int32_t t37 = -3;

	t37 = (x153<=(x154<=(x155/x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static uint64_t x158 = 11702767LLU;
	uint8_t x159 = UINT8_MAX;
	int16_t x160 = -15;

	t38 = (x157<=(x158<=(x159/x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MIN;
	static uint16_t x163 = 344U;
	int32_t x164 = INT32_MAX;
	volatile int32_t t39 = -1012;

	t39 = (x161<=(x162<=(x163/x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = INT64_MAX;
	int16_t x167 = INT16_MIN;
	volatile int32_t t40 = 3;

	t40 = (x165<=(x166<=(x167/x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = -988;
	int8_t x170 = 1;
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = INT16_MIN;
	int32_t t41 = -7933;

	t41 = (x169<=(x170<=(x171/x172)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	static uint16_t x174 = 676U;
	uint32_t x175 = 0U;
	int32_t x176 = INT32_MIN;
	volatile int32_t t42 = 55;

	t42 = (x173<=(x174<=(x175/x176)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	uint8_t x179 = 1U;
	int64_t x180 = -8341108439LL;
	int32_t t43 = -13;

	t43 = (x177<=(x178<=(x179/x180)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x182 = INT64_MAX;
	int64_t x183 = INT64_MIN;
	int32_t x184 = 46;

	t44 = (x181<=(x182<=(x183/x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -1;
	uint64_t x190 = 6219555609182LLU;
	int16_t x192 = -12;
	static volatile int32_t t45 = -1;

	t45 = (x189<=(x190<=(x191/x192)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 1837U;
	int16_t x194 = INT16_MIN;
	uint8_t x196 = 3U;

	t46 = (x193<=(x194<=(x195/x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	uint8_t x198 = 0U;
	volatile int8_t x199 = INT8_MIN;
	int32_t x200 = -44144919;
	int32_t t47 = -257872147;

	t47 = (x197<=(x198<=(x199/x200)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = UINT16_MAX;
	volatile uint32_t x202 = 24762U;
	static uint16_t x204 = 13U;

	t48 = (x201<=(x202<=(x203/x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MAX;
	static int32_t x206 = 6;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 1685822285615LLU;
	static int32_t t49 = -33905;

	t49 = (x205<=(x206<=(x207/x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x209 = UINT8_MAX;
	static int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = 1U;

	t50 = (x209<=(x210<=(x211/x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x214 = UINT8_MAX;
	volatile int32_t t51 = 58296352;

	t51 = (x213<=(x214<=(x215/x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	int64_t x223 = -124051092369172282LL;
	int64_t x224 = 59826593158LL;
	int32_t t52 = 56;

	t52 = (x221<=(x222<=(x223/x224)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = 31;
	int32_t x226 = INT32_MIN;
	static uint16_t x227 = 503U;
	int32_t x228 = INT32_MIN;

	t53 = (x225<=(x226<=(x227/x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x230 = 2510738318511LLU;
	int32_t x231 = INT32_MIN;
	static uint32_t x232 = 921U;
	volatile int32_t t54 = 21717;

	t54 = (x229<=(x230<=(x231/x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x233 = INT64_MIN;
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MAX;
	int32_t t55 = 209;

	t55 = (x233<=(x234<=(x235/x236)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = 105596390662042695LLU;
	int32_t x239 = -14713;
	volatile int32_t t56 = -6141106;

	t56 = (x237<=(x238<=(x239/x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 0U;
	volatile uint8_t x242 = UINT8_MAX;
	int16_t x243 = INT16_MIN;
	uint8_t x244 = 102U;
	int32_t t57 = 3430;

	t57 = (x241<=(x242<=(x243/x244)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 73U;
	uint32_t x248 = 2284633U;

	t58 = (x245<=(x246<=(x247/x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = INT64_MAX;
	static uint8_t x252 = 15U;
	int32_t t59 = -4;

	t59 = (x249<=(x250<=(x251/x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = 40;
	int64_t x255 = -350879LL;
	uint64_t x256 = UINT64_MAX;
	volatile int32_t t60 = -8;

	t60 = (x253<=(x254<=(x255/x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x257 = 10U;
	static int32_t x260 = -20;

	t61 = (x257<=(x258<=(x259/x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MAX;
	volatile int8_t x262 = -1;
	uint32_t x263 = 28516355U;
	uint16_t x264 = UINT16_MAX;

	t62 = (x261<=(x262<=(x263/x264)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = -1;
	uint32_t x266 = 779U;
	int16_t x267 = INT16_MIN;
	int8_t x268 = 4;
	int32_t t63 = 225;

	t63 = (x265<=(x266<=(x267/x268)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x270 = -158917LL;
	uint8_t x272 = UINT8_MAX;
	static volatile int32_t t64 = 21;

	t64 = (x269<=(x270<=(x271/x272)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = -26752363;
	static int16_t x274 = INT16_MAX;
	static int8_t x275 = INT8_MIN;
	volatile int8_t x276 = -6;
	int32_t t65 = 9;

	t65 = (x273<=(x274<=(x275/x276)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MIN;
	static volatile uint64_t x278 = 315525082LLU;
	uint64_t x279 = 20239866800372LLU;
	int64_t x280 = INT64_MIN;
	volatile int32_t t66 = -2693;

	t66 = (x277<=(x278<=(x279/x280)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x282 = -2LL;
	volatile int64_t x283 = -468045570LL;
	uint16_t x284 = 1963U;
	int32_t t67 = 0;

	t67 = (x281<=(x282<=(x283/x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = -38LL;
	uint16_t x287 = UINT16_MAX;
	volatile int16_t x288 = INT16_MAX;
	static int32_t t68 = -8;

	t68 = (x285<=(x286<=(x287/x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	uint16_t x290 = UINT16_MAX;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = INT16_MIN;

	t69 = (x289<=(x290<=(x291/x292)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x293 = 6U;
	int64_t x294 = INT64_MAX;
	int16_t x295 = INT16_MIN;
	static int8_t x296 = INT8_MIN;
	volatile int32_t t70 = 529482069;

	t70 = (x293<=(x294<=(x295/x296)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x299 = INT8_MAX;
	static uint8_t x300 = UINT8_MAX;
	static volatile int32_t t71 = -2;

	t71 = (x297<=(x298<=(x299/x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = 115745593LL;
	static uint32_t x302 = 55634U;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -1;
	static int32_t t72 = 4645;

	t72 = (x301<=(x302<=(x303/x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MIN;
	int16_t x307 = 0;
	int16_t x308 = INT16_MIN;
	volatile int32_t t73 = 0;

	t73 = (x305<=(x306<=(x307/x308)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 116U;
	int32_t x310 = -1;
	static int32_t x311 = -971778541;
	volatile int32_t t74 = 333622;

	t74 = (x309<=(x310<=(x311/x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = 3869U;
	uint64_t x314 = UINT64_MAX;
	uint64_t x315 = 5307LLU;
	uint64_t x316 = UINT64_MAX;
	int32_t t75 = -7883199;

	t75 = (x313<=(x314<=(x315/x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x318 = 12980;
	volatile int32_t x319 = INT32_MAX;
	static int8_t x320 = 3;

	t76 = (x317<=(x318<=(x319/x320)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = -1;
	volatile int32_t x322 = INT32_MAX;
	uint8_t x323 = 92U;
	volatile int32_t x324 = -289;
	int32_t t77 = -2623;

	t77 = (x321<=(x322<=(x323/x324)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = 0;
	int8_t x327 = 7;
	int64_t x328 = INT64_MIN;
	static int32_t t78 = -44960;

	t78 = (x325<=(x326<=(x327/x328)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 3577U;
	volatile int32_t x330 = -1;
	uint32_t x331 = 874566U;
	int8_t x332 = INT8_MIN;
	int32_t t79 = -5321835;

	t79 = (x329<=(x330<=(x331/x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x333 = 1757019LL;
	volatile int8_t x334 = INT8_MAX;
	volatile int16_t x335 = 0;
	int32_t x336 = 5896;
	static int32_t t80 = -744;

	t80 = (x333<=(x334<=(x335/x336)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x337 = INT8_MAX;
	int16_t x340 = INT16_MIN;
	static int32_t t81 = -1;

	t81 = (x337<=(x338<=(x339/x340)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = 1;
	volatile int64_t x343 = -1LL;
	int16_t x344 = INT16_MIN;
	volatile int32_t t82 = 27;

	t82 = (x341<=(x342<=(x343/x344)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x346 = INT32_MAX;
	uint32_t x347 = 2896367U;
	uint64_t x348 = 171321197977441217LLU;
	volatile int32_t t83 = 6591;

	t83 = (x345<=(x346<=(x347/x348)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = -16901;
	int64_t x350 = -1LL;
	volatile int64_t x351 = -1LL;
	volatile int32_t t84 = 27930308;

	t84 = (x349<=(x350<=(x351/x352)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MAX;
	volatile uint8_t x354 = 30U;
	uint64_t x355 = 838840410LLU;
	volatile uint8_t x356 = 7U;
	int32_t t85 = 36060863;

	t85 = (x353<=(x354<=(x355/x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = 3193793644081166568LL;
	int64_t x358 = -14896LL;
	int8_t x359 = -14;

	t86 = (x357<=(x358<=(x359/x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x361 = 5U;
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	int32_t t87 = 6;

	t87 = (x361<=(x362<=(x363/x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x365 = 856730309489168LLU;
	uint64_t x366 = UINT64_MAX;
	static uint32_t x368 = 482U;
	int32_t t88 = 1514982;

	t88 = (x365<=(x366<=(x367/x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = INT32_MAX;
	uint8_t x376 = 48U;

	t89 = (x373<=(x374<=(x375/x376)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x378 = INT16_MAX;
	int64_t x379 = -1LL;
	volatile int32_t t90 = 3886;

	t90 = (x377<=(x378<=(x379/x380)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x381 = INT16_MIN;
	int32_t x382 = 5174;
	int64_t x383 = -1LL;
	int16_t x384 = INT16_MIN;
	volatile int32_t t91 = 581858;

	t91 = (x381<=(x382<=(x383/x384)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x389 = INT8_MIN;
	int32_t x390 = 1;
	static uint32_t x391 = UINT32_MAX;
	int16_t x392 = 470;
	int32_t t92 = 0;

	t92 = (x389<=(x390<=(x391/x392)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {


	t93 = (x393<=(x394<=(x395/x396)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = 2;
	int64_t x399 = INT64_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t94 = -1;

	t94 = (x397<=(x398<=(x399/x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x401 = INT16_MIN;
	volatile int64_t x402 = 15678LL;
	int32_t x404 = INT32_MIN;
	volatile int32_t t95 = 2684866;

	t95 = (x401<=(x402<=(x403/x404)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x407 = 7U;
	volatile int32_t x408 = 496500;
	volatile int32_t t96 = 456;

	t96 = (x405<=(x406<=(x407/x408)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MAX;
	uint8_t x412 = 2U;
	int32_t t97 = -1008582;

	t97 = (x409<=(x410<=(x411/x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x413 = UINT64_MAX;
	static uint32_t x414 = 25422U;
	volatile uint16_t x415 = 23U;
	static int8_t x416 = INT8_MAX;
	int32_t t98 = -11278267;

	t98 = (x413<=(x414<=(x415/x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MIN;
	volatile int32_t x418 = 63;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t99 = 2;

	t99 = (x417<=(x418<=(x419/x420)));

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

