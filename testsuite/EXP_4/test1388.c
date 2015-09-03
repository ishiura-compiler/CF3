#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 869578;
uint16_t x7 = 839U;
volatile int32_t t1 = 193905555;
static int16_t x13 = -1;
static int16_t x16 = -1;
int8_t x18 = INT8_MIN;
int8_t x23 = INT8_MAX;
int16_t x24 = -295;
int32_t t5 = -1;
int32_t t6 = -8834;
uint8_t x29 = UINT8_MAX;
int16_t x39 = INT16_MIN;
volatile int32_t t9 = -39;
int8_t x44 = 36;
int16_t x46 = 15;
static volatile int32_t x47 = INT32_MAX;
uint64_t x48 = 8557951306302746LLU;
static int64_t x50 = INT64_MIN;
uint64_t x55 = 15912789LLU;
int16_t x61 = -45;
static volatile int8_t x64 = INT8_MIN;
int8_t x66 = -15;
static int64_t x74 = INT64_MIN;
int32_t x76 = -1272402;
static int32_t x77 = -1;
int8_t x79 = -37;
volatile int32_t t20 = -1;
int64_t x85 = -1LL;
volatile int32_t t21 = -291523829;
static uint8_t x89 = UINT8_MAX;
volatile uint16_t x99 = 289U;
uint8_t x107 = 1U;
int8_t x108 = INT8_MAX;
int16_t x114 = 0;
volatile int64_t x116 = -1LL;
static volatile int32_t t33 = -1157341;
volatile int32_t x138 = -281;
int32_t x142 = INT32_MIN;
int32_t x152 = INT32_MAX;
static int32_t t38 = 2;
static uint64_t x164 = 9258829763LLU;
int64_t x168 = -1LL;
int8_t x175 = INT8_MIN;
volatile int32_t x177 = -398391;
int32_t x187 = INT32_MAX;
static int32_t t46 = 0;
int8_t x189 = -2;
int32_t t47 = -543827687;
volatile uint8_t x195 = 26U;
volatile int32_t t48 = 40631684;
uint16_t x216 = UINT16_MAX;
static volatile int32_t t53 = 49536;
int32_t x217 = -3742272;
volatile int32_t t54 = -263297356;
uint32_t x221 = 2695U;
static volatile int16_t x230 = INT16_MIN;
static int8_t x232 = INT8_MIN;
int32_t x251 = -184;
int8_t x256 = -1;
static volatile uint32_t x258 = UINT32_MAX;
static int64_t x261 = -124880031522LL;
static int32_t t67 = 0;
int64_t x276 = 9LL;
int32_t t68 = 621609533;
uint8_t x277 = 0U;
int16_t x280 = INT16_MIN;
int64_t x281 = 802701LL;
volatile int8_t x284 = INT8_MAX;
static int8_t x286 = INT8_MIN;
static int32_t x287 = INT32_MIN;
static int32_t t71 = 631345;
int32_t x294 = -1;
uint64_t x298 = 164717087LLU;
int16_t x300 = -1;
int32_t t74 = 3046487;
uint16_t x303 = UINT16_MAX;
volatile int32_t t75 = -16960;
static int8_t x307 = INT8_MIN;
static uint16_t x312 = 1U;
uint64_t x316 = UINT64_MAX;
int64_t x320 = INT64_MAX;
volatile int32_t t79 = -14553;
int32_t x333 = -1;
int64_t x334 = INT64_MIN;
uint64_t x344 = UINT64_MAX;
uint16_t x347 = 290U;
int32_t t86 = 0;
static uint8_t x349 = 92U;
volatile int16_t x351 = INT16_MIN;
int16_t x357 = -1;
int8_t x360 = INT8_MIN;
int64_t x362 = -1LL;
volatile int16_t x367 = 13491;
uint16_t x369 = 388U;
int16_t x375 = 145;
int32_t t93 = 228;
volatile uint16_t x378 = UINT16_MAX;
uint16_t x379 = 22U;
volatile int64_t x386 = INT64_MAX;
uint16_t x389 = 17U;
int8_t x395 = INT8_MIN;
volatile int32_t x396 = -6892;


void f0(void) {
	uint64_t x1 = 28314LLU;
	uint8_t x2 = UINT8_MAX;
	uint8_t x3 = 3U;
	int8_t x4 = -1;

	t0 = (x1<=(x2*(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x6 = 354337U;
	int8_t x8 = -1;

	t1 = (x5<=(x6*(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = UINT8_MAX;
	int16_t x10 = 861;
	uint16_t x11 = 1U;
	int64_t x12 = -33LL;
	int32_t t2 = -118185604;

	t2 = (x9<=(x10*(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = INT8_MIN;
	volatile int32_t t3 = 27178;

	t3 = (x13<=(x14*(x15<x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 51424LLU;
	static int16_t x19 = 1;
	int16_t x20 = -1;
	int32_t t4 = -5801888;

	t4 = (x17<=(x18*(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	int16_t x22 = -197;

	t5 = (x21<=(x22*(x23<x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	static int8_t x26 = -1;
	static int32_t x27 = INT32_MAX;
	volatile int8_t x28 = -1;

	t6 = (x25<=(x26*(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 370824522364LLU;
	volatile uint64_t x31 = 62955LLU;
	int32_t x32 = 326089;
	int32_t t7 = 13021799;

	t7 = (x29<=(x30*(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int32_t x34 = -347;
	int8_t x35 = -1;
	int16_t x36 = -1;
	volatile int32_t t8 = 0;

	t8 = (x33<=(x34*(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 16345;
	static int16_t x38 = INT16_MIN;
	static int32_t x40 = -1;

	t9 = (x37<=(x38*(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = -1LL;
	volatile uint16_t x43 = 1825U;
	int32_t t10 = 20128379;

	t10 = (x41<=(x42*(x43<x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 2;
	int32_t t11 = 501;

	t11 = (x45<=(x46*(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -51528852;
	uint16_t x51 = 1375U;
	int16_t x52 = 3;
	static int32_t t12 = 1;

	t12 = (x49<=(x50*(x51<x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 418U;
	int8_t x54 = INT8_MAX;
	static volatile int8_t x56 = INT8_MAX;
	static volatile int32_t t13 = -93;

	t13 = (x53<=(x54*(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int16_t x58 = -1;
	int8_t x59 = -1;
	static int32_t x60 = INT32_MIN;
	volatile int32_t t14 = 668371703;

	t14 = (x57<=(x58*(x59<x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 7U;
	int32_t t15 = -19;

	t15 = (x61<=(x62*(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int16_t x67 = -50;
	int32_t x68 = -1463705;
	static volatile int32_t t16 = 902978;

	t16 = (x65<=(x66*(x67<x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int16_t x70 = INT16_MAX;
	volatile int32_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	static volatile int32_t t17 = -444578;

	t17 = (x69<=(x70*(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 92U;
	volatile uint64_t x75 = UINT64_MAX;
	int32_t t18 = 0;

	t18 = (x73<=(x74*(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x78 = INT64_MIN;
	int32_t x80 = -58102438;
	volatile int32_t t19 = -431053;

	t19 = (x77<=(x78*(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -2;
	int32_t x82 = -1;
	static volatile uint32_t x83 = UINT32_MAX;
	volatile int64_t x84 = INT64_MAX;

	t20 = (x81<=(x82*(x83<x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MIN;

	t21 = (x85<=(x86*(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = -9;
	int64_t x91 = 520252385860264LL;
	uint16_t x92 = 9597U;
	static int32_t t22 = -55209734;

	t22 = (x89<=(x90*(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 17U;
	static uint16_t x94 = 1920U;
	int64_t x95 = INT64_MIN;
	int8_t x96 = 0;
	int32_t t23 = -15122;

	t23 = (x93<=(x94*(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	static int32_t x98 = -16;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = 233295;

	t24 = (x97<=(x98*(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 3273U;
	int8_t x102 = 1;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;
	int32_t t25 = -280851352;

	t25 = (x101<=(x102*(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x105 = 13775U;
	volatile uint16_t x106 = 1U;
	int32_t t26 = -2341;

	t26 = (x105<=(x106*(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = 1;
	int32_t x110 = INT32_MAX;
	volatile uint8_t x111 = 0U;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = 1;

	t27 = (x109<=(x110*(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	uint8_t x115 = 2U;
	volatile int32_t t28 = -2;

	t28 = (x113<=(x114*(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	int8_t x119 = INT8_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = -19907739;

	t29 = (x117<=(x118*(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	volatile int32_t x122 = -1;
	static int8_t x123 = 0;
	int16_t x124 = 75;
	int32_t t30 = -26916;

	t30 = (x121<=(x122*(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 472330588LLU;
	static int8_t x126 = INT8_MAX;
	int16_t x127 = -1;
	static uint16_t x128 = 20U;
	volatile int32_t t31 = 0;

	t31 = (x125<=(x126*(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	volatile int32_t x130 = 32422260;
	static volatile int8_t x131 = 3;
	int16_t x132 = INT16_MAX;
	int32_t t32 = 120122;

	t32 = (x129<=(x130*(x131<x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile uint8_t x134 = 23U;
	static uint32_t x135 = 47U;
	int64_t x136 = INT64_MIN;

	t33 = (x133<=(x134*(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int64_t x139 = -1657626704840LL;
	int32_t x140 = -4192617;
	volatile int32_t t34 = -17137;

	t34 = (x137<=(x138*(x139<x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -37756042;
	int64_t x143 = 111520396546817LL;
	static uint8_t x144 = 0U;
	static volatile int32_t t35 = -8;

	t35 = (x141<=(x142*(x143<x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MAX;
	volatile uint16_t x146 = 2U;
	int64_t x147 = -1LL;
	volatile uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = 258358;

	t36 = (x145<=(x146*(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 41U;
	volatile uint8_t x150 = UINT8_MAX;
	static int8_t x151 = -37;
	int32_t t37 = 441;

	t37 = (x149<=(x150*(x151<x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 7647923U;
	uint16_t x154 = 118U;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = INT16_MAX;

	t38 = (x153<=(x154*(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = UINT32_MAX;
	static volatile uint32_t x158 = 0U;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MAX;
	static volatile int32_t t39 = 1942;

	t39 = (x157<=(x158*(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 129659194481176LLU;
	int8_t x162 = INT8_MIN;
	uint64_t x163 = 70789583225LLU;
	int32_t t40 = -5374;

	t40 = (x161<=(x162*(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	volatile int64_t x166 = INT64_MIN;
	static int8_t x167 = -1;
	static int32_t t41 = 12;

	t41 = (x165<=(x166*(x167<x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = 7;
	uint32_t x170 = 16754466U;
	uint16_t x171 = 47U;
	static uint8_t x172 = 0U;
	int32_t t42 = -4519094;

	t42 = (x169<=(x170*(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 55U;
	int8_t x174 = -1;
	int16_t x176 = -1;
	int32_t t43 = -27012;

	t43 = (x173<=(x174*(x175<x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 6U;
	int64_t x179 = -1697LL;
	uint16_t x180 = 5U;
	int32_t t44 = 372925215;

	t44 = (x177<=(x178*(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 267427889383238LLU;
	uint64_t x182 = 159109844464LLU;
	int16_t x183 = 230;
	uint64_t x184 = 119010899256LLU;
	int32_t t45 = -9884128;

	t45 = (x181<=(x182*(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = 162236;
	int16_t x186 = 3259;
	uint8_t x188 = 3U;

	t46 = (x185<=(x186*(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = 925152LL;
	int64_t x191 = INT64_MAX;
	uint32_t x192 = 1616641U;

	t47 = (x189<=(x190*(x191<x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MAX;
	int64_t x194 = -5444235178LL;
	static volatile int16_t x196 = 3035;

	t48 = (x193<=(x194*(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static int64_t x198 = INT64_MAX;
	static uint64_t x199 = UINT64_MAX;
	int16_t x200 = -1;
	volatile int32_t t49 = 29;

	t49 = (x197<=(x198*(x199<x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -99;
	uint32_t x202 = 2U;
	int64_t x203 = INT64_MAX;
	volatile uint32_t x204 = 15009U;
	volatile int32_t t50 = 90082;

	t50 = (x201<=(x202*(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 21;
	int64_t x206 = INT64_MIN;
	static int64_t x207 = INT64_MAX;
	int32_t x208 = INT32_MAX;
	int32_t t51 = -3;

	t51 = (x205<=(x206*(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 173U;
	uint8_t x210 = 64U;
	volatile int64_t x211 = INT64_MIN;
	static int16_t x212 = -113;
	int32_t t52 = 103268128;

	t52 = (x209<=(x210*(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	uint16_t x214 = UINT16_MAX;
	uint64_t x215 = UINT64_MAX;

	t53 = (x213<=(x214*(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MAX;
	volatile int16_t x219 = INT16_MIN;
	int8_t x220 = -1;

	t54 = (x217<=(x218*(x219<x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 4LLU;
	uint16_t x223 = 29U;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = 26889150;

	t55 = (x221<=(x222*(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MAX;
	uint16_t x228 = 16488U;
	volatile int32_t t56 = -3671248;

	t56 = (x225<=(x226*(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	static volatile int32_t x231 = -6;
	int32_t t57 = -15528;

	t57 = (x229<=(x230*(x231<x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	int16_t x235 = 2624;
	int8_t x236 = 28;
	volatile int32_t t58 = 5;

	t58 = (x233<=(x234*(x235<x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -1;
	int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = 17U;
	volatile int32_t t59 = 77029656;

	t59 = (x237<=(x238*(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -76;
	static int32_t x242 = INT32_MAX;
	int32_t x243 = -7855;
	volatile uint8_t x244 = UINT8_MAX;
	int32_t t60 = -1;

	t60 = (x241<=(x242*(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	uint16_t x246 = 38U;
	uint64_t x247 = 47952981677911433LLU;
	int64_t x248 = -1018471549823543431LL;
	volatile int32_t t61 = 107519385;

	t61 = (x245<=(x246*(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -30311673721LL;
	int8_t x250 = INT8_MAX;
	int32_t x252 = -439342;
	static int32_t t62 = 2682;

	t62 = (x249<=(x250*(x251<x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	int32_t t63 = -1;

	t63 = (x253<=(x254*(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	static int32_t x259 = INT32_MAX;
	int8_t x260 = -1;
	volatile int32_t t64 = 1;

	t64 = (x257<=(x258*(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x262 = 227103365U;
	volatile uint16_t x263 = 30U;
	volatile int16_t x264 = -1;
	volatile int32_t t65 = -7172;

	t65 = (x261<=(x262*(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = -7;
	int16_t x266 = -1;
	uint16_t x267 = 31080U;
	int16_t x268 = 1;
	static volatile int32_t t66 = -38147709;

	t66 = (x265<=(x266*(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = UINT8_MAX;
	volatile int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;

	t67 = (x269<=(x270*(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int8_t x274 = INT8_MAX;
	volatile int64_t x275 = INT64_MAX;

	t68 = (x273<=(x274*(x275<x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = 136;
	volatile uint8_t x279 = 8U;
	volatile int32_t t69 = -157822154;

	t69 = (x277<=(x278*(x279<x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MAX;
	int32_t t70 = 2;

	t70 = (x281<=(x282*(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x288 = 307942966097884696LLU;

	t71 = (x285<=(x286*(x287<x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -117976;
	uint32_t x290 = 2122690584U;
	uint64_t x291 = 5636129098868533089LLU;
	volatile uint16_t x292 = 1U;
	volatile int32_t t72 = -2116;

	t72 = (x289<=(x290*(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 76384734779592903LLU;
	int8_t x295 = INT8_MIN;
	static int32_t x296 = -7111437;
	volatile int32_t t73 = -483137;

	t73 = (x293<=(x294*(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = -7;
	static int64_t x299 = INT64_MIN;

	t74 = (x297<=(x298*(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MIN;
	static int8_t x302 = 1;
	int8_t x304 = INT8_MIN;

	t75 = (x301<=(x302*(x303<x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = 847;
	int8_t x306 = -6;
	static int64_t x308 = -1LL;
	int32_t t76 = -200044156;

	t76 = (x305<=(x306*(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = -1;
	static volatile int64_t x310 = -1LL;
	volatile uint64_t x311 = 55202LLU;
	volatile int32_t t77 = 64793142;

	t77 = (x309<=(x310*(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1069772363185LL;
	int8_t x314 = 0;
	uint32_t x315 = UINT32_MAX;
	int32_t t78 = -13;

	t78 = (x313<=(x314*(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 7U;
	int16_t x318 = INT16_MAX;
	static int8_t x319 = -1;

	t79 = (x317<=(x318*(x319<x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -48744;
	int32_t x322 = INT32_MIN;
	int32_t x323 = -21235186;
	volatile int32_t x324 = INT32_MAX;
	int32_t t80 = -19841;

	t80 = (x321<=(x322*(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x325 = 134528388842LL;
	int64_t x326 = -1LL;
	volatile uint16_t x327 = 21U;
	int32_t x328 = INT32_MAX;
	int32_t t81 = -1195;

	t81 = (x325<=(x326*(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 2566204U;
	uint64_t x330 = 106040497402831717LLU;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = 12503LLU;
	static volatile int32_t t82 = 4331855;

	t82 = (x329<=(x330*(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x335 = -1;
	int16_t x336 = -1;
	static int32_t t83 = -929338;

	t83 = (x333<=(x334*(x335<x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	uint16_t x338 = UINT16_MAX;
	volatile int8_t x339 = -1;
	int8_t x340 = 13;
	int32_t t84 = -1287364;

	t84 = (x337<=(x338*(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	uint32_t x342 = 254322U;
	static uint8_t x343 = UINT8_MAX;
	int32_t t85 = 14;

	t85 = (x341<=(x342*(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = 2;
	static uint16_t x348 = 13U;

	t86 = (x345<=(x346*(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x350 = 0U;
	volatile int64_t x352 = -5042085LL;
	volatile int32_t t87 = -1;

	t87 = (x349<=(x350*(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	volatile uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = -20;

	t88 = (x353<=(x354*(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x358 = INT64_MIN;
	uint16_t x359 = 3045U;
	volatile int32_t t89 = 127;

	t89 = (x357<=(x358*(x359<x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint16_t x363 = 2552U;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -250258292;

	t90 = (x361<=(x362*(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = 0;
	volatile int32_t x366 = 19;
	uint64_t x368 = 604635365211803203LLU;
	int32_t t91 = -164050;

	t91 = (x365<=(x366*(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	int8_t x371 = -2;
	int8_t x372 = 30;
	volatile int32_t t92 = 601937325;

	t92 = (x369<=(x370*(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 278593U;
	int16_t x374 = 552;
	volatile int8_t x376 = -1;

	t93 = (x373<=(x374*(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 1;
	uint64_t x380 = 1343315LLU;
	volatile int32_t t94 = -107;

	t94 = (x377<=(x378*(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -202165160636421LL;
	uint64_t x382 = 280759066LLU;
	volatile uint32_t x383 = UINT32_MAX;
	volatile uint8_t x384 = 6U;
	static volatile int32_t t95 = 2;

	t95 = (x381<=(x382*(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -3459;

	t96 = (x385<=(x386*(x387<x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x390 = 833758740;
	volatile uint16_t x391 = UINT16_MAX;
	static uint16_t x392 = 453U;
	int32_t t97 = 41953334;

	t97 = (x389<=(x390*(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	int16_t x394 = -8741;
	volatile int32_t t98 = 126793118;

	t98 = (x393<=(x394*(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1398624992409LL;
	int32_t x398 = -1;
	int32_t x399 = -3541591;
	int8_t x400 = INT8_MIN;
	int32_t t99 = -3298183;

	t99 = (x397<=(x398*(x399<x400)));

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

