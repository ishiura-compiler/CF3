#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 457447;
int32_t t1 = 1903;
int16_t x11 = -1;
volatile uint8_t x13 = 54U;
int8_t x18 = INT8_MAX;
uint64_t x23 = 91221LLU;
int16_t x24 = INT16_MIN;
uint16_t x25 = 25709U;
uint64_t x26 = 32773183LLU;
uint8_t x29 = 4U;
int16_t x32 = INT16_MIN;
volatile int32_t t8 = -44468571;
volatile int32_t x39 = INT32_MAX;
int32_t x40 = -1;
volatile int32_t t9 = -4709;
uint16_t x45 = 984U;
int8_t x46 = -1;
int16_t x50 = -2;
int64_t x52 = -1LL;
static uint8_t x58 = UINT8_MAX;
static int32_t t13 = -7982649;
static volatile int8_t x67 = -1;
static int32_t t16 = -37196;
volatile int32_t t17 = -53;
static int32_t t18 = -453;
uint32_t x83 = 3U;
uint8_t x85 = 28U;
uint16_t x91 = 9012U;
volatile int64_t x93 = -1LL;
static int64_t x96 = INT64_MIN;
volatile int32_t x101 = 1340965;
volatile int32_t t24 = -1;
uint64_t x106 = 1929815578753LLU;
volatile int32_t t26 = 536;
uint64_t x118 = UINT64_MAX;
int32_t x121 = -2;
int16_t x126 = INT16_MIN;
uint32_t x132 = UINT32_MAX;
int8_t x142 = -1;
uint64_t x144 = UINT64_MAX;
static volatile int32_t t33 = -2;
int16_t x148 = -1;
volatile int32_t x149 = INT32_MIN;
int64_t x151 = -120LL;
uint64_t x159 = UINT64_MAX;
int32_t t37 = -14115870;
static volatile uint64_t x177 = UINT64_MAX;
int32_t t42 = 0;
static uint32_t x186 = UINT32_MAX;
static int32_t x188 = 521;
int8_t x190 = INT8_MIN;
volatile int32_t t45 = -19;
static volatile int64_t x198 = 0LL;
volatile int32_t x199 = -25957;
static volatile int32_t t47 = -747;
int8_t x204 = INT8_MIN;
int64_t x207 = -371LL;
static uint8_t x213 = 5U;
volatile uint16_t x216 = UINT16_MAX;
int8_t x221 = -62;
static int8_t x225 = INT8_MAX;
static int32_t x227 = INT32_MIN;
int16_t x228 = -5963;
static int32_t t54 = -22;
int8_t x234 = INT8_MAX;
volatile int32_t t55 = 6;
uint16_t x246 = 6842U;
volatile int16_t x248 = INT16_MIN;
int32_t t59 = 0;
static int64_t x255 = INT64_MIN;
static uint16_t x257 = UINT16_MAX;
int64_t x260 = INT64_MIN;
int32_t t62 = -12842;
volatile int32_t t63 = -1908;
int64_t x269 = -1LL;
int32_t x271 = 11;
static volatile int64_t x281 = -22759198LL;
int16_t x283 = INT16_MIN;
int8_t x290 = INT8_MIN;
int8_t x301 = -1;
static volatile int16_t x302 = INT16_MAX;
int32_t x312 = INT32_MIN;
uint32_t x317 = UINT32_MAX;
static uint16_t x335 = 30738U;
int64_t x336 = -35483280769118LL;
static volatile int8_t x337 = INT8_MAX;
int32_t t82 = -20;
int16_t x354 = -2091;
int32_t x361 = INT32_MIN;
uint16_t x364 = 113U;
static int32_t x378 = INT32_MIN;
uint64_t x381 = 4905123LLU;
int8_t x384 = INT8_MIN;
volatile int8_t x399 = INT8_MIN;
int32_t t96 = 486259335;
int16_t x408 = INT16_MAX;
volatile int64_t x409 = INT64_MIN;
int32_t t98 = 12;
volatile int8_t x414 = INT8_MAX;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static uint8_t x2 = 42U;
	uint16_t x3 = 13690U;
	volatile int8_t x4 = INT8_MIN;

	t0 = (x1<(x2^(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static volatile int16_t x6 = -1;
	uint8_t x7 = 120U;
	volatile uint64_t x8 = UINT64_MAX;

	t1 = (x5<(x6^(x7/x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 121053971;
	volatile uint64_t x10 = UINT64_MAX;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -1;

	t2 = (x9<(x10^(x11/x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	int8_t x15 = 7;
	uint64_t x16 = 6516231066630820895LLU;
	volatile int32_t t3 = 1;

	t3 = (x13<(x14^(x15/x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x19 = 16730529LL;
	uint32_t x20 = 160U;
	static int32_t t4 = -771291;

	t4 = (x17<(x18^(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int16_t x22 = 369;
	volatile int32_t t5 = -59772;

	t5 = (x21<(x22^(x23/x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x27 = 44U;
	uint64_t x28 = 8312372348997LLU;
	static int32_t t6 = 3615;

	t6 = (x25<(x26^(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	int8_t x31 = INT8_MAX;
	static int32_t t7 = 230105716;

	t7 = (x29<(x30^(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 73U;
	int64_t x34 = -1LL;
	static int32_t x35 = INT32_MAX;
	uint64_t x36 = 837673LLU;

	t8 = (x33<(x34^(x35/x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = 4;
	int16_t x38 = INT16_MIN;

	t9 = (x37<(x38^(x39/x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x47 = INT16_MIN;
	static uint32_t x48 = UINT32_MAX;
	volatile int32_t t10 = 10330914;

	t10 = (x45<(x46^(x47/x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	volatile int32_t x51 = INT32_MAX;
	volatile int32_t t11 = 5609715;

	t11 = (x49<(x50^(x51/x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	static int32_t x54 = INT32_MAX;
	volatile int16_t x55 = -1;
	volatile uint8_t x56 = 1U;
	volatile int32_t t12 = -38513634;

	t12 = (x53<(x54^(x55/x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	static int32_t x59 = -1;
	static int64_t x60 = -1LL;

	t13 = (x57<(x58^(x59/x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 15766U;
	int8_t x62 = -1;
	int8_t x63 = -1;
	volatile uint16_t x64 = 101U;
	int32_t t14 = 46127817;

	t14 = (x61<(x62^(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 23414080U;
	uint8_t x66 = UINT8_MAX;
	volatile uint32_t x68 = 364826784U;
	int32_t t15 = -12395647;

	t15 = (x65<(x66^(x67/x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -7;
	int64_t x70 = -196LL;
	static int32_t x71 = INT32_MIN;
	volatile uint64_t x72 = UINT64_MAX;

	t16 = (x69<(x70^(x71/x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 250LL;
	static volatile uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = 2U;

	t17 = (x73<(x74^(x75/x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 865882688U;
	int16_t x78 = -1;
	static int32_t x79 = -1;
	int32_t x80 = 2949;

	t18 = (x77<(x78^(x79/x80)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 3U;
	int32_t x82 = INT32_MIN;
	volatile uint16_t x84 = 3119U;
	int32_t t19 = -102244468;

	t19 = (x81<(x82^(x83/x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x86 = 4847917U;
	int64_t x87 = INT64_MAX;
	volatile int16_t x88 = INT16_MIN;
	int32_t t20 = -1;

	t20 = (x85<(x86^(x87/x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -533238448LL;
	volatile uint64_t x90 = 100346509882203LLU;
	uint8_t x92 = 5U;
	volatile int32_t t21 = 44;

	t21 = (x89<(x90^(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x94 = UINT8_MAX;
	static uint32_t x95 = 88803632U;
	int32_t t22 = 405;

	t22 = (x93<(x94^(x95/x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	static uint16_t x98 = UINT16_MAX;
	int8_t x99 = 0;
	int32_t x100 = 106;
	volatile int32_t t23 = 3668;

	t23 = (x97<(x98^(x99/x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = -1;
	static uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MAX;

	t24 = (x101<(x102^(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = 1;
	int16_t x107 = INT16_MIN;
	int16_t x108 = 6;
	static volatile int32_t t25 = -1;

	t25 = (x105<(x106^(x107/x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 596990655U;
	volatile int16_t x110 = INT16_MIN;
	static uint16_t x111 = 29U;
	uint32_t x112 = UINT32_MAX;

	t26 = (x109<(x110^(x111/x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = INT32_MIN;
	uint32_t x116 = 7891453U;
	volatile int32_t t27 = -249440468;

	t27 = (x113<(x114^(x115/x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = -1LL;
	int64_t x119 = 125968731LL;
	uint64_t x120 = 3728992211133014LLU;
	int32_t t28 = -197083141;

	t28 = (x117<(x118^(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x122 = 70U;
	uint32_t x123 = 6804U;
	int8_t x124 = -1;
	int32_t t29 = 960412738;

	t29 = (x121<(x122^(x123/x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 701639LL;
	int8_t x127 = INT8_MIN;
	int32_t x128 = 73977;
	volatile int32_t t30 = 24054014;

	t30 = (x125<(x126^(x127/x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int64_t x130 = 2069322610876570LL;
	volatile uint16_t x131 = 23U;
	int32_t t31 = -4;

	t31 = (x129<(x130^(x131/x132)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	uint16_t x134 = UINT16_MAX;
	uint64_t x135 = 16320626427LLU;
	uint16_t x136 = 109U;
	volatile int32_t t32 = 0;

	t32 = (x133<(x134^(x135/x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 6598U;
	int16_t x143 = INT16_MIN;

	t33 = (x141<(x142^(x143/x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 2U;
	int64_t x146 = INT64_MIN;
	static uint16_t x147 = 13271U;
	int32_t t34 = 2906;

	t34 = (x145<(x146^(x147/x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = -59;
	uint16_t x152 = UINT16_MAX;
	static int32_t t35 = -8;

	t35 = (x149<(x150^(x151/x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = INT32_MAX;
	uint8_t x154 = 1U;
	static int32_t x155 = INT32_MAX;
	uint16_t x156 = 1065U;
	volatile int32_t t36 = 1;

	t36 = (x153<(x154^(x155/x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	int32_t x158 = -108959459;
	int8_t x160 = INT8_MAX;

	t37 = (x157<(x158^(x159/x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	volatile int64_t x162 = INT64_MAX;
	static int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MAX;
	static volatile int32_t t38 = -7537;

	t38 = (x161<(x162^(x163/x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 1718U;
	static int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t39 = 44734;

	t39 = (x165<(x166^(x167/x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 911U;
	static volatile int16_t x170 = 1;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = 20;
	int32_t t40 = -1315;

	t40 = (x169<(x170^(x171/x172)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = 9157693678LL;
	uint64_t x174 = 7759881606LLU;
	int32_t x175 = -1;
	uint16_t x176 = 120U;
	int32_t t41 = -14204;

	t41 = (x173<(x174^(x175/x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x178 = INT64_MIN;
	uint64_t x179 = 0LLU;
	int8_t x180 = 13;

	t42 = (x177<(x178^(x179/x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = 15U;
	int64_t x182 = 1629LL;
	static int16_t x183 = INT16_MIN;
	int64_t x184 = -847970LL;
	int32_t t43 = 282;

	t43 = (x181<(x182^(x183/x184)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x187 = UINT32_MAX;
	int32_t t44 = 1915328;

	t44 = (x185<(x186^(x187/x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -7LL;
	int8_t x191 = -1;
	int32_t x192 = -97632339;

	t45 = (x189<(x190^(x191/x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x193 = UINT32_MAX;
	static int64_t x194 = -1LL;
	int64_t x195 = 1152396491LL;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t46 = 1072260611;

	t46 = (x193<(x194^(x195/x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	int32_t x200 = 3;

	t47 = (x197<(x198^(x199/x200)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = INT16_MAX;
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	int32_t t48 = -1143654;

	t48 = (x201<(x202^(x203/x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x205 = UINT32_MAX;
	int8_t x206 = 7;
	int8_t x208 = INT8_MIN;
	volatile int32_t t49 = -197;

	t49 = (x205<(x206^(x207/x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x214 = INT64_MIN;
	int32_t x215 = 0;
	int32_t t50 = -1;

	t50 = (x213<(x214^(x215/x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = 2;
	volatile int64_t x218 = INT64_MAX;
	int64_t x219 = -1016681LL;
	uint64_t x220 = 5918844173214LLU;
	int32_t t51 = 3;

	t51 = (x217<(x218^(x219/x220)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	volatile uint16_t x224 = 1657U;
	volatile int32_t t52 = -15787;

	t52 = (x221<(x222^(x223/x224)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x226 = 0;
	volatile int32_t t53 = 10290;

	t53 = (x225<(x226^(x227/x228)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 14U;
	int16_t x230 = INT16_MIN;
	volatile int16_t x231 = -1;
	uint64_t x232 = 136123216703976037LLU;

	t54 = (x229<(x230^(x231/x232)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x233 = -1468LL;
	int8_t x235 = -4;
	int32_t x236 = 8127;

	t55 = (x233<(x234^(x235/x236)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -1;
	static int64_t x238 = -1LL;
	int32_t x239 = INT32_MAX;
	volatile int8_t x240 = 12;
	int32_t t56 = 666339458;

	t56 = (x237<(x238^(x239/x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x241 = 234LLU;
	int32_t x242 = -60576;
	int8_t x243 = -1;
	int16_t x244 = 127;
	volatile int32_t t57 = 559487;

	t57 = (x241<(x242^(x243/x244)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x247 = -1LL;
	int32_t t58 = 1;

	t58 = (x245<(x246^(x247/x248)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x249 = 235U;
	static int32_t x250 = INT32_MAX;
	uint32_t x251 = 1625064U;
	uint16_t x252 = UINT16_MAX;

	t59 = (x249<(x250^(x251/x252)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 3U;
	static volatile uint64_t x254 = 75388547236326LLU;
	int8_t x256 = INT8_MAX;
	int32_t t60 = -4168877;

	t60 = (x253<(x254^(x255/x256)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x258 = INT32_MIN;
	uint64_t x259 = 1898LLU;
	static volatile int32_t t61 = -2;

	t61 = (x257<(x258^(x259/x260)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	int64_t x262 = -1LL;
	uint8_t x263 = 0U;
	int16_t x264 = -9;

	t62 = (x261<(x262^(x263/x264)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x265 = INT16_MAX;
	uint32_t x266 = 1370935U;
	volatile int32_t x267 = 2;
	int16_t x268 = INT16_MAX;

	t63 = (x265<(x266^(x267/x268)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x270 = -1;
	uint8_t x272 = 4U;
	static volatile int32_t t64 = 1;

	t64 = (x269<(x270^(x271/x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MAX;
	int16_t x276 = -4;
	int32_t t65 = 3;

	t65 = (x273<(x274^(x275/x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = UINT16_MAX;
	uint8_t x278 = UINT8_MAX;
	volatile int8_t x279 = INT8_MIN;
	static volatile int64_t x280 = INT64_MIN;
	int32_t t66 = 10378;

	t66 = (x277<(x278^(x279/x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x282 = 1;
	int8_t x284 = INT8_MAX;
	int32_t t67 = 757607;

	t67 = (x281<(x282^(x283/x284)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x285 = 1954906;
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = INT32_MAX;
	int64_t x288 = INT64_MIN;
	int32_t t68 = -5721;

	t68 = (x285<(x286^(x287/x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = UINT64_MAX;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = INT16_MIN;
	volatile int32_t t69 = 51494;

	t69 = (x289<(x290^(x291/x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = -168;
	int16_t x294 = -5;
	uint64_t x295 = 32943358822LLU;
	volatile int64_t x296 = 9593687789635LL;
	static int32_t t70 = -360286;

	t70 = (x293<(x294^(x295/x296)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x297 = 0;
	volatile int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = 3U;
	int32_t t71 = 280801;

	t71 = (x297<(x298^(x299/x300)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x303 = -7;
	volatile int16_t x304 = INT16_MIN;
	int32_t t72 = 2;

	t72 = (x301<(x302^(x303/x304)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x305 = 6;
	uint16_t x306 = 6U;
	int16_t x307 = 143;
	uint8_t x308 = 1U;
	int32_t t73 = -268344012;

	t73 = (x305<(x306^(x307/x308)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = -1;
	uint32_t x310 = 541920U;
	int8_t x311 = 0;
	volatile int32_t t74 = 34031;

	t74 = (x309<(x310^(x311/x312)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = 94684027U;
	int8_t x315 = INT8_MAX;
	volatile int8_t x316 = -7;
	volatile int32_t t75 = -299;

	t75 = (x313<(x314^(x315/x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x318 = 1533U;
	volatile int16_t x319 = -1;
	int64_t x320 = INT64_MIN;
	static int32_t t76 = -441987;

	t76 = (x317<(x318^(x319/x320)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x321 = 431U;
	int16_t x322 = 157;
	static int32_t x323 = -1;
	volatile int32_t x324 = -1;
	volatile int32_t t77 = -2567706;

	t77 = (x321<(x322^(x323/x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = 1;
	int32_t x326 = -35;
	static int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MAX;
	volatile int32_t t78 = 17;

	t78 = (x325<(x326^(x327/x328)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MIN;
	volatile int32_t x334 = INT32_MIN;
	int32_t t79 = 40;

	t79 = (x333<(x334^(x335/x336)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x338 = 118LLU;
	uint64_t x339 = 932361221186943165LLU;
	static int8_t x340 = -5;
	int32_t t80 = -86497780;

	t80 = (x337<(x338^(x339/x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x341 = -1572798017689LL;
	static int64_t x342 = -1LL;
	static int64_t x343 = -3348646LL;
	uint64_t x344 = 19108128973934751LLU;
	volatile int32_t t81 = -22;

	t81 = (x341<(x342^(x343/x344)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = -4;
	int64_t x346 = -223176652966687LL;
	volatile int32_t x347 = INT32_MIN;
	uint16_t x348 = UINT16_MAX;

	t82 = (x345<(x346^(x347/x348)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 52U;
	int32_t x350 = INT32_MIN;
	int32_t x351 = -261005;
	int8_t x352 = INT8_MIN;
	volatile int32_t t83 = -45;

	t83 = (x349<(x350^(x351/x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x353 = 12683;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t84 = 1;

	t84 = (x353<(x354^(x355/x356)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = 398U;
	int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	static volatile uint8_t x360 = 3U;
	volatile int32_t t85 = 260647198;

	t85 = (x357<(x358^(x359/x360)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x362 = -1;
	volatile int8_t x363 = INT8_MIN;
	volatile int32_t t86 = -6342;

	t86 = (x361<(x362^(x363/x364)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = 14994381LL;
	static volatile uint8_t x366 = UINT8_MAX;
	volatile int64_t x367 = INT64_MAX;
	int32_t x368 = INT32_MIN;
	static int32_t t87 = -41431833;

	t87 = (x365<(x366^(x367/x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = UINT16_MAX;
	static int64_t x370 = INT64_MAX;
	int64_t x371 = INT64_MIN;
	uint64_t x372 = 5932643333573291LLU;
	static int32_t t88 = -14;

	t88 = (x369<(x370^(x371/x372)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = -1;
	static int64_t x374 = -1LL;
	int16_t x375 = -1;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t89 = 21;

	t89 = (x373<(x374^(x375/x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = 302;
	int32_t x379 = -11;
	uint8_t x380 = 62U;
	volatile int32_t t90 = 0;

	t90 = (x377<(x378^(x379/x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x382 = 1U;
	int32_t x383 = INT32_MIN;
	int32_t t91 = -220117204;

	t91 = (x381<(x382^(x383/x384)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x385 = 336406629U;
	int16_t x386 = -1;
	uint16_t x387 = 1593U;
	int32_t x388 = 1904589;
	volatile int32_t t92 = -158937990;

	t92 = (x385<(x386^(x387/x388)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = 7929163131630LL;
	static int32_t x390 = -1;
	uint32_t x391 = UINT32_MAX;
	uint64_t x392 = 22LLU;
	int32_t t93 = 35867;

	t93 = (x389<(x390^(x391/x392)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MIN;
	static int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MIN;
	int16_t x396 = -571;
	volatile int32_t t94 = 20;

	t94 = (x393<(x394^(x395/x396)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 341193U;
	uint8_t x398 = UINT8_MAX;
	static int64_t x400 = -295122LL;
	int32_t t95 = -267470;

	t95 = (x397<(x398^(x399/x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x401 = 71038226U;
	uint16_t x402 = 4U;
	int64_t x403 = 0LL;
	int64_t x404 = -1LL;

	t96 = (x401<(x402^(x403/x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = -1;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = 7605;
	volatile int32_t t97 = -7691;

	t97 = (x405<(x406^(x407/x408)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x410 = INT32_MIN;
	uint16_t x411 = 5U;
	static int16_t x412 = -113;

	t98 = (x409<(x410^(x411/x412)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 39819U;
	volatile int8_t x415 = -1;
	static int8_t x416 = -1;
	int32_t t99 = -1;

	t99 = (x413<(x414^(x415/x416)));

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

