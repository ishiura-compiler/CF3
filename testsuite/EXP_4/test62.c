#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
int8_t x14 = -3;
int64_t x17 = INT64_MAX;
volatile int32_t x19 = -1;
int32_t t4 = 9;
volatile uint16_t x22 = UINT16_MAX;
static volatile uint8_t x27 = UINT8_MAX;
int8_t x30 = -5;
int32_t t7 = -271;
int8_t x34 = -31;
uint8_t x36 = 2U;
volatile uint8_t x50 = 8U;
static int64_t x51 = INT64_MIN;
int16_t x53 = -1;
uint32_t x54 = 14U;
static volatile uint64_t x58 = 135162679400LLU;
int8_t x59 = 0;
int32_t x68 = -708;
volatile uint8_t x96 = UINT8_MAX;
uint8_t x97 = 3U;
uint16_t x99 = UINT16_MAX;
int16_t x103 = INT16_MAX;
int16_t x106 = INT16_MAX;
uint32_t x110 = 8U;
uint64_t x113 = 413LLU;
int64_t x119 = INT64_MAX;
int32_t x120 = INT32_MIN;
volatile uint8_t x122 = UINT8_MAX;
volatile int32_t t30 = -450201;
volatile int16_t x130 = INT16_MIN;
uint64_t x136 = UINT64_MAX;
int16_t x139 = 0;
int64_t x144 = -1LL;
static volatile int16_t x146 = INT16_MIN;
int32_t t35 = 132686379;
int32_t x158 = INT32_MIN;
int32_t t39 = 0;
int64_t x171 = INT64_MIN;
volatile uint8_t x172 = 1U;
int32_t t43 = -12;
int8_t x190 = INT8_MIN;
static int8_t x202 = -1;
int32_t x207 = -2932389;
volatile int32_t t49 = 360128331;
static volatile int32_t t50 = 1912;
volatile int32_t x221 = INT32_MIN;
uint32_t x225 = 8U;
int32_t x227 = -335;
static volatile uint32_t x231 = 221045393U;
uint16_t x266 = UINT16_MAX;
uint64_t x268 = 16172LLU;
volatile int64_t x279 = 521356666587734LL;
uint8_t x284 = 26U;
volatile int32_t t62 = 3683;
int8_t x290 = -15;
int32_t x292 = INT32_MAX;
int32_t x295 = -1;
static int8_t x297 = -1;
int32_t t67 = 1;
int64_t x305 = -244LL;
static int32_t t68 = 163883881;
uint8_t x314 = 5U;
static uint64_t x316 = 11537967LLU;
int8_t x323 = INT8_MIN;
static int8_t x325 = INT8_MAX;
int32_t t72 = 94956;
int32_t x332 = INT32_MIN;
volatile uint8_t x335 = UINT8_MAX;
int8_t x338 = -1;
static uint8_t x358 = UINT8_MAX;
static uint16_t x359 = 1U;
int32_t t80 = -2524;
static volatile uint64_t x371 = UINT64_MAX;
int32_t x382 = INT32_MAX;
int64_t x389 = 704189730723414935LL;
static int8_t x390 = INT8_MIN;
uint16_t x391 = 4901U;
static int8_t x392 = INT8_MIN;
volatile int8_t x393 = -1;
volatile int16_t x396 = INT16_MIN;
int16_t x397 = -119;
int32_t x398 = -342138;
volatile int32_t t88 = 5796154;
int16_t x402 = INT16_MIN;
volatile uint32_t x404 = 1U;
volatile int8_t x419 = INT8_MIN;
volatile uint16_t x423 = UINT16_MAX;
volatile int32_t t95 = 785272672;
int16_t x429 = -1;
static int32_t x431 = 20;
static int32_t x436 = INT32_MIN;
int32_t x442 = INT32_MAX;
static int32_t x443 = -718244;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MIN;
	uint16_t x3 = UINT16_MAX;
	static int16_t x4 = -2026;
	int32_t t0 = 1;

	t0 = (x1<=(x2%(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint16_t x7 = 15U;
	volatile int32_t x8 = -1;
	volatile int32_t t1 = 1;

	t1 = (x5<=(x6%(x7+x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 0U;
	int32_t x11 = 1580218;
	int64_t x12 = -524LL;
	int32_t t2 = -1009748674;

	t2 = (x9<=(x10%(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 6U;
	int16_t x15 = -1;
	static int32_t x16 = INT32_MAX;
	static volatile int32_t t3 = 45621;

	t3 = (x13<=(x14%(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 489LLU;
	uint8_t x20 = UINT8_MAX;

	t4 = (x17<=(x18%(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x23 = 0;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -412;

	t5 = (x21<=(x22%(x23+x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 6U;
	int16_t x26 = 0;
	volatile uint32_t x28 = UINT32_MAX;
	int32_t t6 = -45531941;

	t6 = (x25<=(x26%(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -63045523703181LL;

	t7 = (x29<=(x30%(x31+x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	volatile int8_t x35 = -12;
	volatile int32_t t8 = -62714;

	t8 = (x33<=(x34%(x35+x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = 205409U;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 7191412871596LLU;
	volatile uint16_t x40 = 2U;
	static int32_t t9 = -14997;

	t9 = (x37<=(x38%(x39+x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile uint32_t x42 = UINT32_MAX;
	int64_t x43 = -1LL;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = 0;

	t10 = (x41<=(x42%(x43+x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	static uint32_t x46 = 593926U;
	int32_t x47 = 0;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 109606;

	t11 = (x45<=(x46%(x47+x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint32_t x52 = 216U;
	static int32_t t12 = 6641882;

	t12 = (x49<=(x50%(x51+x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = INT16_MIN;
	static int64_t x56 = 114099256LL;
	int32_t t13 = 1577657;

	t13 = (x53<=(x54%(x55+x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 214141U;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 10;

	t14 = (x57<=(x58%(x59+x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int16_t x62 = INT16_MAX;
	static int64_t x63 = 934574939LL;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -4233553;

	t15 = (x61<=(x62%(x63+x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	static int32_t x66 = INT32_MAX;
	int16_t x67 = INT16_MIN;
	int32_t t16 = 115806;

	t16 = (x65<=(x66%(x67+x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -223;
	static int16_t x74 = 10531;
	static volatile uint16_t x75 = UINT16_MAX;
	static int8_t x76 = -1;
	int32_t t17 = -230;

	t17 = (x73<=(x74%(x75+x76)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = -1;
	static uint32_t x78 = UINT32_MAX;
	volatile int32_t x79 = INT32_MAX;
	int64_t x80 = -1LL;
	static int32_t t18 = -26644;

	t18 = (x77<=(x78%(x79+x80)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;
	volatile uint16_t x84 = 1080U;
	volatile int32_t t19 = -12842;

	t19 = (x81<=(x82%(x83+x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = 39;
	int32_t x87 = INT32_MIN;
	int64_t x88 = -7678LL;
	int32_t t20 = 3;

	t20 = (x85<=(x86%(x87+x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x89 = INT64_MIN;
	uint8_t x90 = 1U;
	int8_t x91 = INT8_MAX;
	static int64_t x92 = INT64_MIN;
	volatile int32_t t21 = 385;

	t21 = (x89<=(x90%(x91+x92)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	static uint16_t x94 = 3779U;
	int16_t x95 = INT16_MAX;
	int32_t t22 = -9868143;

	t22 = (x93<=(x94%(x95+x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = INT64_MIN;
	uint32_t x100 = 894U;
	volatile int32_t t23 = -43;

	t23 = (x97<=(x98%(x99+x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = -169;
	static uint8_t x102 = UINT8_MAX;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t24 = 847;

	t24 = (x101<=(x102%(x103+x104)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = INT32_MIN;
	static uint16_t x107 = UINT16_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -422403;

	t25 = (x105<=(x106%(x107+x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 1U;
	int8_t x111 = INT8_MIN;
	int64_t x112 = -1LL;
	int32_t t26 = -962272415;

	t26 = (x109<=(x110%(x111+x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x114 = UINT32_MAX;
	uint8_t x115 = UINT8_MAX;
	volatile int16_t x116 = INT16_MIN;
	int32_t t27 = 1;

	t27 = (x113<=(x114%(x115+x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x118 = 1U;
	volatile int32_t t28 = 420;

	t28 = (x117<=(x118%(x119+x120)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 357279608LL;
	volatile int8_t x123 = INT8_MIN;
	int8_t x124 = -1;
	static int32_t t29 = 10;

	t29 = (x121<=(x122%(x123+x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MAX;
	static int8_t x127 = INT8_MIN;
	static int8_t x128 = INT8_MIN;

	t30 = (x125<=(x126%(x127+x128)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x129 = -1;
	volatile int16_t x131 = INT16_MAX;
	int8_t x132 = INT8_MIN;
	volatile int32_t t31 = 138;

	t31 = (x129<=(x130%(x131+x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -53;
	int16_t x134 = INT16_MIN;
	volatile int32_t x135 = -1270240;
	int32_t t32 = -51793;

	t32 = (x133<=(x134%(x135+x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x137 = UINT32_MAX;
	volatile uint64_t x138 = 2LLU;
	int64_t x140 = INT64_MAX;
	int32_t t33 = 232539;

	t33 = (x137<=(x138%(x139+x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 5783LLU;
	static uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 238681U;
	static volatile int32_t t34 = -1738;

	t34 = (x141<=(x142%(x143+x144)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 6U;
	static int8_t x147 = -1;
	int32_t x148 = -5;

	t35 = (x145<=(x146%(x147+x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int32_t x150 = 144;
	static int8_t x151 = INT8_MIN;
	uint8_t x152 = 1U;
	volatile int32_t t36 = 4031;

	t36 = (x149<=(x150%(x151+x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = UINT64_MAX;
	int32_t t37 = 7138145;

	t37 = (x153<=(x154%(x155+x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 81LLU;
	volatile uint64_t x159 = 70695LLU;
	int32_t x160 = INT32_MAX;
	int32_t t38 = -14216;

	t38 = (x157<=(x158%(x159+x160)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x165 = INT32_MIN;
	static volatile int8_t x166 = INT8_MAX;
	uint32_t x167 = UINT32_MAX;
	static int64_t x168 = -1773LL;

	t39 = (x165<=(x166%(x167+x168)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -29;
	volatile int16_t x170 = INT16_MIN;
	volatile int32_t t40 = 489;

	t40 = (x169<=(x170%(x171+x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = 3939285;
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	volatile int64_t x176 = 561715915028861LL;
	volatile int32_t t41 = -3862;

	t41 = (x173<=(x174%(x175+x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MAX;
	volatile int32_t x179 = INT32_MIN;
	static uint8_t x180 = 0U;
	int32_t t42 = 1059966;

	t42 = (x177<=(x178%(x179+x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x181 = -1;
	int64_t x182 = -1LL;
	uint64_t x183 = 2660625316LLU;
	static int16_t x184 = INT16_MIN;

	t43 = (x181<=(x182%(x183+x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x185 = -1;
	volatile int32_t x186 = -1;
	volatile int32_t x187 = INT32_MIN;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t44 = 1;

	t44 = (x185<=(x186%(x187+x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = 26U;
	volatile uint64_t x191 = UINT64_MAX;
	uint32_t x192 = UINT32_MAX;
	int32_t t45 = 37;

	t45 = (x189<=(x190%(x191+x192)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MAX;
	uint32_t x203 = 3560U;
	int16_t x204 = -209;
	volatile int32_t t46 = 0;

	t46 = (x201<=(x202%(x203+x204)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x205 = INT8_MIN;
	uint32_t x206 = 630605474U;
	volatile uint32_t x208 = UINT32_MAX;
	volatile int32_t t47 = -3;

	t47 = (x205<=(x206%(x207+x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x209 = -1LL;
	uint8_t x210 = 0U;
	volatile int32_t x211 = INT32_MIN;
	uint8_t x212 = 23U;
	int32_t t48 = 57191;

	t48 = (x209<=(x210%(x211+x212)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 2U;
	int64_t x214 = -655LL;
	uint64_t x215 = UINT64_MAX;
	static volatile int16_t x216 = 14;

	t49 = (x213<=(x214%(x215+x216)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -7;
	int64_t x218 = INT64_MAX;
	int16_t x219 = INT16_MIN;
	static int8_t x220 = 0;

	t50 = (x217<=(x218%(x219+x220)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x222 = 1U;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = -4394;
	static int32_t t51 = 1018514688;

	t51 = (x221<=(x222%(x223+x224)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x226 = INT16_MIN;
	uint16_t x228 = 250U;
	static int32_t t52 = -599424424;

	t52 = (x225<=(x226%(x227+x228)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 29250U;
	uint64_t x230 = 15LLU;
	int64_t x232 = 339LL;
	int32_t t53 = -23041915;

	t53 = (x229<=(x230%(x231+x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = -2231440;
	volatile uint32_t x235 = 192U;
	int32_t x236 = INT32_MIN;
	volatile int32_t t54 = -56688650;

	t54 = (x233<=(x234%(x235+x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MAX;
	static uint16_t x238 = UINT16_MAX;
	int64_t x239 = -1LL;
	uint32_t x240 = 505U;
	static int32_t t55 = 31;

	t55 = (x237<=(x238%(x239+x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = -1;
	int32_t x250 = -1;
	int16_t x251 = INT16_MAX;
	uint64_t x252 = 4356214503726LLU;
	int32_t t56 = 999494085;

	t56 = (x249<=(x250%(x251+x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = 8;
	int32_t x254 = -3;
	volatile uint64_t x255 = UINT64_MAX;
	int8_t x256 = INT8_MAX;
	volatile int32_t t57 = -87399;

	t57 = (x253<=(x254%(x255+x256)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = 1722083728926LL;
	int8_t x259 = INT8_MAX;
	int8_t x260 = -4;
	static volatile int32_t t58 = 3440;

	t58 = (x257<=(x258%(x259+x260)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = 1463310911848262LL;
	uint64_t x267 = 25207LLU;
	volatile int32_t t59 = 0;

	t59 = (x265<=(x266%(x267+x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x269 = 1;
	static int32_t x270 = INT32_MIN;
	volatile uint64_t x271 = 11172089178831373LLU;
	uint16_t x272 = UINT16_MAX;
	int32_t t60 = -1;

	t60 = (x269<=(x270%(x271+x272)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x277 = 128861680LL;
	uint32_t x278 = 53507575U;
	static int16_t x280 = INT16_MIN;
	volatile int32_t t61 = 5;

	t61 = (x277<=(x278%(x279+x280)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	static volatile int32_t x282 = INT32_MAX;
	uint64_t x283 = UINT64_MAX;

	t62 = (x281<=(x282%(x283+x284)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x285 = INT32_MIN;
	uint8_t x286 = UINT8_MAX;
	static int16_t x287 = INT16_MIN;
	static volatile uint8_t x288 = 114U;
	static int32_t t63 = -132461939;

	t63 = (x285<=(x286%(x287+x288)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MIN;
	int32_t x291 = -944568303;
	int32_t t64 = 252;

	t64 = (x289<=(x290%(x291+x292)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x293 = INT16_MAX;
	int16_t x294 = INT16_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t65 = 184976950;

	t65 = (x293<=(x294%(x295+x296)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x298 = -1;
	uint64_t x299 = 6313452483LLU;
	int16_t x300 = 1;
	static volatile int32_t t66 = -100850;

	t66 = (x297<=(x298%(x299+x300)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = UINT32_MAX;
	uint64_t x302 = 1082281532469563106LLU;
	volatile uint32_t x303 = 9988698U;
	int64_t x304 = -168159549LL;

	t67 = (x301<=(x302%(x303+x304)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x306 = 38410490256345LL;
	int64_t x307 = -1LL;
	int64_t x308 = -1LL;

	t68 = (x305<=(x306%(x307+x308)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x313 = UINT32_MAX;
	static int16_t x315 = 1;
	volatile int32_t t69 = 1185026;

	t69 = (x313<=(x314%(x315+x316)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x317 = 0;
	volatile int16_t x318 = 1651;
	int32_t x319 = INT32_MAX;
	uint64_t x320 = UINT64_MAX;
	int32_t t70 = -22556401;

	t70 = (x317<=(x318%(x319+x320)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x321 = 0U;
	volatile int64_t x322 = INT64_MAX;
	int16_t x324 = -14356;
	volatile int32_t t71 = -2258665;

	t71 = (x321<=(x322%(x323+x324)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x326 = -7;
	int8_t x327 = -1;
	uint16_t x328 = 3727U;

	t72 = (x325<=(x326%(x327+x328)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int64_t x331 = -1LL;
	int32_t t73 = 0;

	t73 = (x329<=(x330%(x331+x332)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = -1099577997LL;
	int16_t x334 = -21;
	uint16_t x336 = 21U;
	int32_t t74 = 2984;

	t74 = (x333<=(x334%(x335+x336)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = -24919402850LL;
	uint64_t x339 = 3512153863559272LLU;
	int64_t x340 = -7327583LL;
	volatile int32_t t75 = 39;

	t75 = (x337<=(x338%(x339+x340)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = -1;
	static int32_t x342 = -1;
	uint16_t x343 = 14U;
	volatile int32_t x344 = 59402;
	int32_t t76 = 75251;

	t76 = (x341<=(x342%(x343+x344)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x345 = -1028352;
	uint16_t x346 = UINT16_MAX;
	static int16_t x347 = 3172;
	static uint8_t x348 = 1U;
	volatile int32_t t77 = 32293752;

	t77 = (x345<=(x346%(x347+x348)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = -1405;
	static volatile int64_t x350 = -13162805873002LL;
	static uint8_t x351 = UINT8_MAX;
	int16_t x352 = -1;
	static int32_t t78 = 124012650;

	t78 = (x349<=(x350%(x351+x352)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 3212U;
	volatile int32_t x354 = INT32_MIN;
	static uint8_t x355 = UINT8_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t79 = 0;

	t79 = (x353<=(x354%(x355+x356)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = 141;
	static int32_t x360 = INT32_MIN;

	t80 = (x357<=(x358%(x359+x360)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x361 = INT32_MAX;
	int16_t x362 = -6;
	uint8_t x363 = 11U;
	uint32_t x364 = 27983U;
	static volatile int32_t t81 = 1073649805;

	t81 = (x361<=(x362%(x363+x364)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = -1LL;
	uint64_t x366 = 225746579LLU;
	volatile int16_t x367 = 1179;
	volatile uint8_t x368 = UINT8_MAX;
	static int32_t t82 = 5135722;

	t82 = (x365<=(x366%(x367+x368)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x369 = 75U;
	uint32_t x370 = UINT32_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t83 = -54618;

	t83 = (x369<=(x370%(x371+x372)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x381 = INT32_MIN;
	int64_t x383 = -1LL;
	static volatile int32_t x384 = -1;
	volatile int32_t t84 = -1289;

	t84 = (x381<=(x382%(x383+x384)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x385 = -28;
	int64_t x386 = INT64_MIN;
	uint16_t x387 = 1205U;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t85 = -49;

	t85 = (x385<=(x386%(x387+x388)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t t86 = 1001;

	t86 = (x389<=(x390%(x391+x392)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x394 = UINT32_MAX;
	volatile int16_t x395 = INT16_MAX;
	static int32_t t87 = -612279;

	t87 = (x393<=(x394%(x395+x396)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MIN;

	t88 = (x397<=(x398%(x399+x400)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x401 = 10U;
	static uint64_t x403 = 1216477681326754535LLU;
	volatile int32_t t89 = 1224;

	t89 = (x401<=(x402%(x403+x404)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = -10215078LL;
	volatile int8_t x406 = -15;
	int64_t x407 = INT64_MIN;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t90 = 243676;

	t90 = (x405<=(x406%(x407+x408)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = 168U;
	volatile uint16_t x410 = UINT16_MAX;
	static int32_t x411 = 349;
	static int16_t x412 = INT16_MIN;
	int32_t t91 = 1;

	t91 = (x409<=(x410%(x411+x412)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x413 = 49;
	volatile int32_t x414 = -1;
	int64_t x415 = -400107717LL;
	static uint16_t x416 = UINT16_MAX;
	static volatile int32_t t92 = 7958718;

	t92 = (x413<=(x414%(x415+x416)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x417 = INT64_MIN;
	static int32_t x418 = -1;
	uint16_t x420 = 7645U;
	int32_t t93 = 5963;

	t93 = (x417<=(x418%(x419+x420)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x421 = INT16_MAX;
	static int64_t x422 = INT64_MIN;
	int16_t x424 = -1;
	int32_t t94 = 46017615;

	t94 = (x421<=(x422%(x423+x424)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x425 = 94983963212LLU;
	int64_t x426 = -1LL;
	static int16_t x427 = INT16_MIN;
	int8_t x428 = INT8_MIN;

	t95 = (x425<=(x426%(x427+x428)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x430 = INT16_MIN;
	volatile uint16_t x432 = 36U;
	volatile int32_t t96 = 2290;

	t96 = (x429<=(x430%(x431+x432)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = -41;
	volatile int32_t x434 = INT32_MIN;
	uint32_t x435 = 122289U;
	int32_t t97 = -21533;

	t97 = (x433<=(x434%(x435+x436)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x437 = UINT32_MAX;
	static volatile int8_t x438 = -12;
	int8_t x439 = -5;
	int16_t x440 = INT16_MAX;
	int32_t t98 = -7061765;

	t98 = (x437<=(x438%(x439+x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x441 = 453;
	uint32_t x444 = 3452U;
	static volatile int32_t t99 = 22128;

	t99 = (x441<=(x442%(x443+x444)));

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

