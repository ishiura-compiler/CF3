#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x2 = 2065297U;
volatile int32_t t0 = 12759;
int32_t x6 = -1;
int16_t x8 = INT16_MIN;
int64_t x13 = INT64_MAX;
int8_t x14 = INT8_MAX;
int32_t t3 = 9538628;
int32_t t5 = -25583457;
uint32_t x25 = 0U;
int64_t x43 = -85185180275060619LL;
static int32_t t11 = 117723;
volatile int32_t x56 = 5;
static int64_t x68 = INT64_MIN;
int32_t t16 = -30;
int32_t x71 = INT32_MIN;
static volatile int32_t t17 = -698669;
volatile int8_t x78 = INT8_MIN;
volatile int32_t x82 = 224663;
int8_t x84 = -47;
int16_t x87 = INT16_MAX;
int8_t x88 = -1;
static int32_t x91 = -1;
uint16_t x97 = UINT16_MAX;
int32_t x98 = INT32_MAX;
int32_t x99 = INT32_MIN;
static uint32_t x105 = UINT32_MAX;
static int16_t x107 = 1535;
static int16_t x117 = -270;
int32_t t29 = 1395;
volatile int16_t x125 = -227;
static int8_t x129 = -1;
volatile int8_t x132 = 15;
int32_t x141 = -156814916;
static uint16_t x143 = 888U;
volatile int32_t t35 = -4109;
uint16_t x150 = UINT16_MAX;
volatile int16_t x153 = INT16_MIN;
uint64_t x154 = 806111803619LLU;
static int16_t x166 = INT16_MAX;
volatile int32_t t41 = 22670099;
int32_t x170 = INT32_MIN;
static int32_t t42 = 1634890;
uint8_t x176 = 0U;
volatile int32_t t43 = 5;
int16_t x179 = INT16_MIN;
int32_t t44 = -1215;
uint32_t x181 = 158033U;
int16_t x184 = INT16_MIN;
uint16_t x191 = UINT16_MAX;
uint16_t x196 = 1410U;
int32_t t48 = -27543944;
int16_t x199 = -1;
volatile int16_t x214 = INT16_MIN;
int8_t x215 = -1;
static int8_t x220 = -28;
uint64_t x224 = 14LLU;
int32_t t55 = 1332;
int64_t x229 = INT64_MIN;
int32_t x230 = INT32_MIN;
volatile int8_t x231 = -1;
volatile uint8_t x236 = 68U;
int32_t x238 = -1652;
int32_t t61 = -881;
int64_t x252 = -10044954351LL;
int64_t x259 = -84742338LL;
int32_t t64 = 441801;
static int32_t x263 = -2437;
static uint8_t x266 = 6U;
int16_t x268 = -1;
int16_t x272 = INT16_MAX;
volatile int32_t t68 = 174687;
int64_t x277 = -8280019463952LL;
static int16_t x279 = -1;
int64_t x281 = INT64_MAX;
volatile int16_t x282 = INT16_MIN;
static volatile int32_t t71 = 1;
int64_t x294 = INT64_MAX;
volatile uint16_t x302 = 10432U;
static int32_t x309 = -6;
static int32_t x310 = 0;
int32_t x313 = -25928;
uint64_t x315 = 560558865331011070LLU;
static volatile uint32_t x318 = 74U;
volatile uint32_t x319 = UINT32_MAX;
uint64_t x323 = 13385LLU;
uint32_t x326 = UINT32_MAX;
int32_t x328 = -110194;
uint16_t x330 = 12U;
uint32_t x344 = UINT32_MAX;
static int8_t x350 = INT8_MIN;
int8_t x352 = INT8_MIN;
static uint8_t x354 = 6U;
int64_t x356 = INT64_MIN;
static uint32_t x357 = 177202U;
uint8_t x363 = 20U;
int32_t x368 = INT32_MAX;
uint8_t x377 = 14U;
int64_t x378 = INT64_MIN;


void f0(void) {
	int16_t x1 = 5533;
	uint16_t x3 = UINT16_MAX;
	uint64_t x4 = 1503928LLU;

	t0 = (x1<(x2==(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	int16_t x7 = -1;
	int32_t t1 = -85899;

	t1 = (x5<(x6==(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -5;
	static int64_t x10 = -1LL;
	volatile int32_t x11 = 7995589;
	static uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 60902;

	t2 = (x9<(x10==(x11|x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = 0;
	static uint16_t x16 = 1286U;

	t3 = (x13<(x14==(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1566U;
	int8_t x18 = -1;
	int16_t x19 = 5;
	int16_t x20 = 3;
	volatile int32_t t4 = 3404;

	t4 = (x17<(x18==(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -13;
	static int8_t x22 = INT8_MIN;
	uint64_t x23 = UINT64_MAX;
	volatile int64_t x24 = -1LL;

	t5 = (x21<(x22==(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	int8_t x27 = 26;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -57138;

	t6 = (x25<(x26==(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 1611720669757LLU;
	static int8_t x30 = INT8_MIN;
	int16_t x31 = 4169;
	static int8_t x32 = -8;
	volatile int32_t t7 = 185597;

	t7 = (x29<(x30==(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -1006;

	t8 = (x33<(x34==(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 59;
	int64_t x38 = -1LL;
	uint8_t x39 = UINT8_MAX;
	int8_t x40 = 60;
	static volatile int32_t t9 = 685668957;

	t9 = (x37<(x38==(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	static volatile int64_t x42 = 16859638815571LL;
	uint16_t x44 = 22U;
	volatile int32_t t10 = -1008051677;

	t10 = (x41<(x42==(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -1;
	int64_t x46 = INT64_MIN;
	int8_t x47 = 27;
	static volatile uint16_t x48 = 0U;

	t11 = (x45<(x46==(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 1;
	int64_t x50 = INT64_MAX;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = UINT64_MAX;
	static int32_t t12 = -27;

	t12 = (x49<(x50==(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 64278963917536195LL;
	static int8_t x54 = -1;
	int16_t x55 = -1939;
	volatile int32_t t13 = -205359;

	t13 = (x53<(x54==(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = INT16_MAX;
	static int16_t x59 = -1;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 1110;

	t14 = (x57<(x58==(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int16_t x62 = INT16_MIN;
	static volatile int16_t x63 = INT16_MAX;
	uint32_t x64 = 0U;
	static volatile int32_t t15 = 4131442;

	t15 = (x61<(x62==(x63|x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int64_t x66 = -1LL;
	int64_t x67 = INT64_MIN;

	t16 = (x65<(x66==(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 7U;
	int8_t x70 = INT8_MIN;
	int32_t x72 = 14480;

	t17 = (x69<(x70==(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	uint32_t x74 = 203734U;
	int16_t x75 = 0;
	volatile int16_t x76 = -3;
	volatile int32_t t18 = 193505;

	t18 = (x73<(x74==(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -2;
	uint16_t x79 = 122U;
	int32_t x80 = INT32_MAX;
	int32_t t19 = 9511;

	t19 = (x77<(x78==(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	static int64_t x83 = -1003790518386252LL;
	static int32_t t20 = -306;

	t20 = (x81<(x82==(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	volatile int64_t x86 = -1LL;
	volatile int32_t t21 = -92;

	t21 = (x85<(x86==(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 4;
	int8_t x90 = -1;
	static int8_t x92 = INT8_MIN;
	int32_t t22 = -7800557;

	t22 = (x89<(x90==(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 37;
	int8_t x94 = 1;
	int32_t x95 = -1;
	uint64_t x96 = 12LLU;
	volatile int32_t t23 = 1;

	t23 = (x93<(x94==(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x100 = -7720589099LL;
	volatile int32_t t24 = -3;

	t24 = (x97<(x98==(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 24689LLU;
	static int8_t x102 = 8;
	static volatile uint8_t x103 = 56U;
	static int64_t x104 = 2733LL;
	volatile int32_t t25 = 3;

	t25 = (x101<(x102==(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = 6462LLU;
	int8_t x108 = -1;
	int32_t t26 = 56709;

	t26 = (x105<(x106==(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 302LLU;
	int32_t x110 = 4141;
	static volatile uint32_t x111 = UINT32_MAX;
	volatile uint32_t x112 = 11593053U;
	int32_t t27 = -1739791;

	t27 = (x109<(x110==(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = -1;
	volatile uint8_t x114 = 51U;
	volatile int8_t x115 = 31;
	int8_t x116 = -16;
	int32_t t28 = 4817;

	t28 = (x113<(x114==(x115|x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	static uint16_t x119 = 12981U;
	int64_t x120 = -1LL;

	t29 = (x117<(x118==(x119|x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 1447646638U;
	static volatile uint64_t x122 = 109LLU;
	int32_t x123 = INT32_MIN;
	volatile int8_t x124 = INT8_MIN;
	int32_t t30 = -253;

	t30 = (x121<(x122==(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = INT16_MIN;
	uint32_t x127 = 3391697U;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -26981865;

	t31 = (x125<(x126==(x127|x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x130 = -1;
	int64_t x131 = 171144522277350LL;
	static volatile int32_t t32 = -855;

	t32 = (x129<(x130==(x131|x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 27U;
	int32_t x134 = -1;
	uint16_t x135 = 15457U;
	uint16_t x136 = 73U;
	int32_t t33 = 12;

	t33 = (x133<(x134==(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	uint8_t x138 = 16U;
	uint8_t x139 = 0U;
	int64_t x140 = -1LL;
	int32_t t34 = 32747970;

	t34 = (x137<(x138==(x139|x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -1;
	static uint16_t x144 = UINT16_MAX;

	t35 = (x141<(x142==(x143|x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	int32_t x146 = 50;
	static uint32_t x147 = 7U;
	uint8_t x148 = 38U;
	int32_t t36 = 4362;

	t36 = (x145<(x146==(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 12LLU;
	uint64_t x151 = 115297912LLU;
	uint16_t x152 = 59U;
	static int32_t t37 = 1438;

	t37 = (x149<(x150==(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x155 = 154329841U;
	uint64_t x156 = 1129690436995261LLU;
	volatile int32_t t38 = 30;

	t38 = (x153<(x154==(x155|x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 7U;
	int64_t x158 = -29860189029251848LL;
	int32_t x159 = INT32_MIN;
	int64_t x160 = 3573988007458144665LL;
	static int32_t t39 = 0;

	t39 = (x157<(x158==(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	static int32_t x162 = INT32_MIN;
	uint8_t x163 = UINT8_MAX;
	int16_t x164 = INT16_MAX;
	static int32_t t40 = 12493;

	t40 = (x161<(x162==(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int8_t x167 = INT8_MIN;
	int16_t x168 = -1;

	t41 = (x165<(x166==(x167|x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = 0U;
	int8_t x171 = -1;
	volatile uint64_t x172 = 30693802378814LLU;

	t42 = (x169<(x170==(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -1;
	static int32_t x174 = -1;
	int16_t x175 = INT16_MAX;

	t43 = (x173<(x174==(x175|x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x177 = -838857342712378LL;
	int32_t x178 = -1;
	static int16_t x180 = INT16_MIN;

	t44 = (x177<(x178==(x179|x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = 161;
	volatile int16_t x183 = INT16_MIN;
	volatile int32_t t45 = 0;

	t45 = (x181<(x182==(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int8_t x186 = INT8_MIN;
	int64_t x187 = -1LL;
	int32_t x188 = INT32_MAX;
	static int32_t t46 = -130;

	t46 = (x185<(x186==(x187|x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MIN;
	int64_t x192 = INT64_MIN;
	static int32_t t47 = -56;

	t47 = (x189<(x190==(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 25798844LLU;
	int16_t x194 = 4770;
	int64_t x195 = INT64_MIN;

	t48 = (x193<(x194==(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	static int16_t x198 = INT16_MAX;
	int32_t x200 = INT32_MIN;
	int32_t t49 = -625011856;

	t49 = (x197<(x198==(x199|x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = 1;
	int32_t x202 = -1;
	int8_t x203 = INT8_MAX;
	int16_t x204 = 106;
	volatile int32_t t50 = -60;

	t50 = (x201<(x202==(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -484480LL;
	uint16_t x206 = 3663U;
	int16_t x207 = INT16_MIN;
	volatile int32_t x208 = INT32_MIN;
	static volatile int32_t t51 = -4158553;

	t51 = (x205<(x206==(x207|x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -1;
	int32_t x210 = -251768030;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = 19495LLU;
	int32_t t52 = 10;

	t52 = (x209<(x210==(x211|x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MAX;
	static int8_t x216 = -1;
	volatile int32_t t53 = 1363411;

	t53 = (x213<(x214==(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MAX;
	volatile int32_t t54 = -432;

	t54 = (x217<(x218==(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MAX;
	uint32_t x222 = 28U;
	int16_t x223 = 75;

	t55 = (x221<(x222==(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x225 = -1LL;
	int32_t x226 = -23;
	int32_t x227 = INT32_MIN;
	int16_t x228 = 0;
	int32_t t56 = -15961;

	t56 = (x225<(x226==(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x232 = 9610U;
	int32_t t57 = -113;

	t57 = (x229<(x230==(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	volatile uint32_t x234 = 1U;
	int8_t x235 = INT8_MIN;
	int32_t t58 = -17;

	t58 = (x233<(x234==(x235|x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	volatile int8_t x239 = INT8_MIN;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t59 = 133160474;

	t59 = (x237<(x238==(x239|x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x241 = INT64_MIN;
	volatile uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 24065U;
	uint32_t x244 = 1251070777U;
	int32_t t60 = 8220;

	t60 = (x241<(x242==(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	uint8_t x246 = 1U;
	int32_t x247 = -763154952;
	static int16_t x248 = INT16_MIN;

	t61 = (x245<(x246==(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = 126066;
	static int16_t x250 = -1;
	volatile int64_t x251 = INT64_MAX;
	volatile int32_t t62 = -1;

	t62 = (x249<(x250==(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	volatile uint64_t x255 = UINT64_MAX;
	uint8_t x256 = 72U;
	volatile int32_t t63 = -38284613;

	t63 = (x253<(x254==(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	static int8_t x258 = 0;
	uint8_t x260 = 2U;

	t64 = (x257<(x258==(x259|x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	volatile uint8_t x262 = 2U;
	static uint16_t x264 = 401U;
	volatile int32_t t65 = -962667;

	t65 = (x261<(x262==(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = 0;
	static int64_t x267 = INT64_MAX;
	volatile int32_t t66 = 476;

	t66 = (x265<(x266==(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 21869629659LL;
	int64_t x270 = INT64_MIN;
	volatile int32_t x271 = 1608996;
	volatile int32_t t67 = 1648;

	t67 = (x269<(x270==(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MAX;
	uint8_t x274 = 13U;
	int8_t x275 = 6;
	volatile int8_t x276 = -1;

	t68 = (x273<(x274==(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	uint32_t x280 = 246U;
	int32_t t69 = 399058749;

	t69 = (x277<(x278==(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x283 = UINT32_MAX;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = -549211;

	t70 = (x281<(x282==(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = INT32_MAX;
	uint32_t x287 = 3U;
	static int32_t x288 = -1;

	t71 = (x285<(x286==(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 2U;
	uint32_t x290 = 13956771U;
	uint8_t x291 = UINT8_MAX;
	int8_t x292 = 2;
	int32_t t72 = -7;

	t72 = (x289<(x290==(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int32_t x295 = INT32_MIN;
	volatile int16_t x296 = -21;
	volatile int32_t t73 = -1286;

	t73 = (x293<(x294==(x295|x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	volatile int16_t x298 = -1;
	int64_t x299 = INT64_MIN;
	volatile int8_t x300 = INT8_MIN;
	int32_t t74 = -331282721;

	t74 = (x297<(x298==(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = UINT32_MAX;
	uint32_t x303 = 3697U;
	volatile uint16_t x304 = 0U;
	volatile int32_t t75 = 497094414;

	t75 = (x301<(x302==(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MIN;
	int8_t x307 = 1;
	int8_t x308 = -1;
	volatile int32_t t76 = -2;

	t76 = (x305<(x306==(x307|x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x311 = 2557554LLU;
	uint16_t x312 = 5U;
	int32_t t77 = -407461132;

	t77 = (x309<(x310==(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 349LLU;
	volatile int64_t x316 = 49LL;
	int32_t t78 = -82874;

	t78 = (x313<(x314==(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = UINT32_MAX;
	static int8_t x320 = INT8_MAX;
	volatile int32_t t79 = 110;

	t79 = (x317<(x318==(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = -34166994;
	int32_t x322 = INT32_MIN;
	volatile int64_t x324 = 463366748524625LL;
	int32_t t80 = 161;

	t80 = (x321<(x322==(x323|x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 83U;
	int8_t x327 = INT8_MIN;
	volatile int32_t t81 = -126326958;

	t81 = (x325<(x326==(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x329 = INT64_MIN;
	uint32_t x331 = 19800U;
	int64_t x332 = -1LL;
	int32_t t82 = 1;

	t82 = (x329<(x330==(x331|x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -1LL;
	uint64_t x335 = 448LLU;
	int64_t x336 = 12847177LL;
	volatile int32_t t83 = 74646;

	t83 = (x333<(x334==(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 310758922U;
	int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	int32_t x340 = 66814123;
	static int32_t t84 = -5;

	t84 = (x337<(x338==(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	int8_t x342 = INT8_MAX;
	volatile uint8_t x343 = UINT8_MAX;
	volatile int32_t t85 = -466902872;

	t85 = (x341<(x342==(x343|x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	volatile int8_t x346 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;
	volatile int32_t x348 = -84;
	int32_t t86 = 4247;

	t86 = (x345<(x346==(x347|x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = -1425;
	uint8_t x351 = 27U;
	volatile int32_t t87 = 716;

	t87 = (x349<(x350==(x351|x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int64_t x355 = 7537454270386LL;
	int32_t t88 = -5093005;

	t88 = (x353<(x354==(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x358 = INT16_MAX;
	int16_t x359 = 6112;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 2859798;

	t89 = (x357<(x358==(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint16_t x362 = 323U;
	int64_t x364 = -33LL;
	static int32_t t90 = 7;

	t90 = (x361<(x362==(x363|x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -2;
	static volatile int16_t x366 = INT16_MIN;
	volatile uint16_t x367 = 4U;
	static int32_t t91 = -192;

	t91 = (x365<(x366==(x367|x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -889507462307LL;
	static volatile uint32_t x370 = 1U;
	static uint64_t x371 = 514348885581001LLU;
	static volatile int32_t x372 = 342818;
	int32_t t92 = -1;

	t92 = (x369<(x370==(x371|x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	int32_t x374 = 71;
	int16_t x375 = INT16_MAX;
	static uint32_t x376 = 2275769U;
	static int32_t t93 = 998;

	t93 = (x373<(x374==(x375|x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x379 = INT32_MIN;
	volatile int32_t x380 = INT32_MIN;
	int32_t t94 = -377421610;

	t94 = (x377<(x378==(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 0;
	int64_t x382 = INT64_MAX;
	static int8_t x383 = 3;
	int64_t x384 = INT64_MIN;
	volatile int32_t t95 = -1604701;

	t95 = (x381<(x382==(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -13145;
	uint32_t x386 = 297874310U;
	volatile int8_t x387 = -1;
	int8_t x388 = -1;
	volatile int32_t t96 = 109;

	t96 = (x385<(x386==(x387|x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	int8_t x390 = 4;
	static uint32_t x391 = UINT32_MAX;
	static int32_t x392 = 1223;
	int32_t t97 = 13489065;

	t97 = (x389<(x390==(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MIN;
	int16_t x395 = -903;
	int32_t x396 = INT32_MAX;
	int32_t t98 = -528;

	t98 = (x393<(x394==(x395|x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	uint64_t x398 = 780190923579LLU;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 11U;
	int32_t t99 = 103;

	t99 = (x397<(x398==(x399|x400)));

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

