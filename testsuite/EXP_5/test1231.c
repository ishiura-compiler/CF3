#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = UINT64_MAX;
uint64_t x18 = 644LLU;
int16_t x19 = INT16_MIN;
volatile int8_t x20 = -1;
int16_t x22 = -17;
static uint64_t x24 = 269352LLU;
volatile int32_t t4 = 16372226;
int32_t t5 = 866;
uint8_t x35 = 90U;
static volatile int32_t t7 = 34223;
int16_t x38 = 15306;
static int8_t x39 = -1;
volatile int32_t t8 = -98812;
int8_t x41 = INT8_MIN;
int64_t x42 = -1LL;
volatile int32_t t9 = -515696;
int32_t x45 = INT32_MIN;
int32_t t11 = 3;
int8_t x56 = -24;
volatile int32_t t14 = -70336;
int64_t x65 = -1LL;
static volatile int32_t t15 = 250502;
int8_t x72 = -15;
int32_t t18 = -6724407;
volatile int32_t t20 = 1;
int64_t x99 = INT64_MIN;
static int16_t x102 = INT16_MIN;
int64_t x103 = INT64_MAX;
int64_t x104 = 764906391758LL;
static volatile uint16_t x106 = 28423U;
volatile int8_t x112 = -19;
uint8_t x114 = 16U;
int32_t x120 = INT32_MIN;
static uint64_t x129 = 898696064689LLU;
int64_t x134 = -1LL;
int32_t t30 = -372695921;
int8_t x139 = 0;
static int32_t t31 = 51731;
uint32_t x141 = 117U;
int16_t x142 = -1;
volatile int32_t t32 = 5046;
int16_t x147 = INT16_MAX;
volatile int32_t t33 = -549329;
int16_t x150 = 225;
uint16_t x154 = 1U;
static int32_t x155 = -1;
int16_t x157 = INT16_MAX;
int64_t x162 = -135198422407LL;
uint32_t x164 = 59495547U;
static int8_t x176 = -1;
int32_t t40 = 1;
int8_t x178 = INT8_MIN;
int32_t t43 = 0;
static int8_t x194 = -1;
volatile int32_t t46 = 1490;
static uint8_t x202 = 0U;
int64_t x203 = INT64_MIN;
volatile uint16_t x209 = 550U;
uint16_t x210 = UINT16_MAX;
int32_t x225 = INT32_MIN;
uint8_t x229 = 21U;
uint32_t x234 = UINT32_MAX;
int8_t x240 = INT8_MIN;
int64_t x242 = INT64_MAX;
int8_t x247 = INT8_MIN;
volatile int32_t t60 = -56809;
static int32_t t61 = -78;
int16_t x290 = INT16_MIN;
int32_t t68 = 133408744;
int32_t x297 = INT32_MIN;
static volatile uint32_t x301 = UINT32_MAX;
int8_t x302 = 19;
uint64_t x311 = 1507LLU;
uint32_t x316 = UINT32_MAX;
uint64_t x326 = 198LLU;
static int64_t x335 = -1LL;
int32_t x337 = 1605;
volatile int8_t x344 = INT8_MIN;
int8_t x345 = 2;
int64_t x348 = -7218455LL;
uint8_t x350 = 2U;
static uint32_t x352 = 764107024U;
static int64_t x355 = INT64_MIN;
int8_t x362 = INT8_MIN;
uint64_t x365 = 70LLU;
int64_t x367 = INT64_MIN;
volatile uint8_t x370 = 7U;
int8_t x380 = -12;
int32_t t88 = 197;
volatile int32_t t89 = -52653;
static int64_t x385 = INT64_MIN;
int16_t x390 = 663;
int16_t x391 = INT16_MIN;
uint16_t x398 = UINT16_MAX;
int8_t x399 = INT8_MIN;
int32_t t96 = -24019250;
volatile int64_t x415 = INT64_MAX;
int16_t x418 = -1;
uint64_t x421 = 754739994415137179LLU;
int32_t x423 = -1;


void f0(void) {
	static uint32_t x2 = 374632U;
	int32_t x3 = 461538806;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = 31641;

	t0 = (x1<((x2==x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 123U;
	int32_t x6 = -2338218;
	volatile uint16_t x7 = UINT16_MAX;
	uint8_t x8 = UINT8_MAX;
	static volatile int32_t t1 = 2;

	t1 = (x5<((x6==x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = 29459582;
	uint8_t x14 = 10U;
	uint32_t x15 = 63832904U;
	int16_t x16 = 170;
	int32_t t2 = -4090;

	t2 = (x13<((x14==x15)/x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	static volatile int32_t t3 = 4256328;

	t3 = (x17<((x18==x19)/x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static int16_t x23 = -1;

	t4 = (x21<((x22==x23)/x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = INT8_MIN;
	uint8_t x26 = 72U;
	volatile int64_t x27 = INT64_MAX;
	uint16_t x28 = 1982U;

	t5 = (x25<((x26==x27)/x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int64_t x30 = -1LL;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = 7U;
	volatile int32_t t6 = 43;

	t6 = (x29<((x30==x31)/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	uint16_t x34 = 1U;
	volatile int32_t x36 = INT32_MAX;

	t7 = (x33<((x34==x35)/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = 47LL;
	uint8_t x40 = 3U;

	t8 = (x37<((x38==x39)/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;

	t9 = (x41<((x42==x43)/x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x46 = -4;
	int8_t x47 = INT8_MIN;
	static uint64_t x48 = 200726781681056289LLU;
	static int32_t t10 = 762677;

	t10 = (x45<((x46==x47)/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 14U;
	int16_t x50 = INT16_MIN;
	uint16_t x51 = 13U;
	int64_t x52 = -243554865101885259LL;

	t11 = (x49<((x50==x51)/x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = 85U;
	uint64_t x55 = 69281195252LLU;
	int32_t t12 = -172346;

	t12 = (x53<((x54==x55)/x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 3769424U;
	uint16_t x58 = 15992U;
	int32_t x59 = INT32_MIN;
	int64_t x60 = -470497294558LL;
	static volatile int32_t t13 = -910923488;

	t13 = (x57<((x58==x59)/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	static int32_t x62 = 1532;
	static volatile uint8_t x63 = 2U;
	int8_t x64 = INT8_MAX;

	t14 = (x61<((x62==x63)/x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x66 = INT16_MAX;
	static int64_t x67 = -81833818LL;
	int64_t x68 = -59168515104251LL;

	t15 = (x65<((x66==x67)/x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x69 = 15U;
	uint16_t x70 = 761U;
	static volatile int16_t x71 = INT16_MIN;
	volatile int32_t t16 = -22052;

	t16 = (x69<((x70==x71)/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = -1LL;
	static uint64_t x79 = UINT64_MAX;
	static int16_t x80 = INT16_MIN;
	int32_t t17 = 100630;

	t17 = (x77<((x78==x79)/x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = UINT16_MAX;
	uint8_t x82 = UINT8_MAX;
	int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MIN;

	t18 = (x81<((x82==x83)/x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	static int32_t x86 = 0;
	volatile int16_t x87 = 348;
	uint8_t x88 = 11U;
	volatile int32_t t19 = 5;

	t19 = (x85<((x86==x87)/x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = -29378006003488LL;
	uint16_t x94 = 10U;
	static volatile int32_t x95 = -5;
	uint16_t x96 = 12788U;

	t20 = (x93<((x94==x95)/x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x97 = 10U;
	static volatile int8_t x98 = -1;
	int64_t x100 = 15264700953LL;
	volatile int32_t t21 = -113;

	t21 = (x97<((x98==x99)/x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MAX;
	volatile int32_t t22 = -2463889;

	t22 = (x101<((x102==x103)/x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = -9;
	static volatile uint32_t x107 = 15U;
	volatile int16_t x108 = INT16_MIN;
	int32_t t23 = -482713;

	t23 = (x105<((x106==x107)/x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = 12;
	volatile int8_t x111 = INT8_MAX;
	volatile int32_t t24 = -1167;

	t24 = (x109<((x110==x111)/x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x113 = INT64_MIN;
	uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 769328LLU;
	volatile int32_t t25 = 27;

	t25 = (x113<((x114==x115)/x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MAX;
	uint16_t x118 = UINT16_MAX;
	static volatile uint16_t x119 = UINT16_MAX;
	int32_t t26 = 193134;

	t26 = (x117<((x118==x119)/x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = 0;
	uint64_t x122 = UINT64_MAX;
	uint8_t x123 = UINT8_MAX;
	volatile int64_t x124 = -1345LL;
	static volatile int32_t t27 = 2;

	t27 = (x121<((x122==x123)/x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 28U;
	volatile int16_t x126 = INT16_MIN;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = 166;
	int32_t t28 = 1684;

	t28 = (x125<((x126==x127)/x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x130 = INT32_MAX;
	uint64_t x131 = 6LLU;
	uint64_t x132 = 5508519768LLU;
	volatile int32_t t29 = 520156;

	t29 = (x129<((x130==x131)/x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x133 = -1;
	int8_t x135 = 26;
	int16_t x136 = 857;

	t30 = (x133<((x134==x135)/x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x137 = 21445U;
	int8_t x138 = INT8_MAX;
	int64_t x140 = -2LL;

	t31 = (x137<((x138==x139)/x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x143 = -5;
	static int32_t x144 = INT32_MIN;

	t32 = (x141<((x142==x143)/x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = 14951;
	int8_t x146 = -1;
	volatile int64_t x148 = -120137768941LL;

	t33 = (x145<((x146==x147)/x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x151 = INT16_MAX;
	int32_t x152 = 346689;
	volatile int32_t t34 = 6;

	t34 = (x149<((x150==x151)/x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = -4;
	int8_t x156 = INT8_MAX;
	volatile int32_t t35 = 1;

	t35 = (x153<((x154==x155)/x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x158 = -22138664;
	int16_t x159 = INT16_MIN;
	int64_t x160 = -1LL;
	int32_t t36 = -160606778;

	t36 = (x157<((x158==x159)/x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = 47LL;
	int8_t x163 = -7;
	static volatile int32_t t37 = 13;

	t37 = (x161<((x162==x163)/x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MIN;
	static volatile uint64_t x167 = 55507LLU;
	uint32_t x168 = UINT32_MAX;
	int32_t t38 = 1;

	t38 = (x165<((x166==x167)/x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x169 = INT32_MAX;
	int16_t x170 = -1;
	int16_t x171 = -1;
	static int64_t x172 = INT64_MAX;
	volatile int32_t t39 = 101;

	t39 = (x169<((x170==x171)/x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = -1;
	volatile int8_t x174 = INT8_MIN;
	int64_t x175 = -1LL;

	t40 = (x173<((x174==x175)/x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x177 = 16U;
	int64_t x179 = INT64_MIN;
	volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t41 = -67137879;

	t41 = (x177<((x178==x179)/x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = 1;
	volatile int8_t x182 = INT8_MAX;
	uint8_t x183 = 1U;
	int32_t x184 = INT32_MIN;
	volatile int32_t t42 = -2146;

	t42 = (x181<((x182==x183)/x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	static int16_t x186 = -1;
	int8_t x187 = INT8_MIN;
	volatile int16_t x188 = -1;

	t43 = (x185<((x186==x187)/x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -77LL;
	int32_t x190 = INT32_MIN;
	int64_t x191 = -1LL;
	static int16_t x192 = INT16_MIN;
	int32_t t44 = -5564227;

	t44 = (x189<((x190==x191)/x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = -1;
	int8_t x195 = -1;
	static int16_t x196 = INT16_MIN;
	int32_t t45 = -1;

	t45 = (x193<((x194==x195)/x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 32U;
	volatile uint8_t x198 = 5U;
	uint32_t x199 = UINT32_MAX;
	static volatile int32_t x200 = 319;

	t46 = (x197<((x198==x199)/x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 1075U;
	static uint16_t x204 = 56U;
	int32_t t47 = -161;

	t47 = (x201<((x202==x203)/x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 1735695597U;
	static uint64_t x206 = 1480228278588918LLU;
	static int64_t x207 = -1LL;
	int32_t x208 = INT32_MIN;
	int32_t t48 = 51476;

	t48 = (x205<((x206==x207)/x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x211 = 206361;
	static uint8_t x212 = UINT8_MAX;
	int32_t t49 = 7498;

	t49 = (x209<((x210==x211)/x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = 1;
	volatile uint16_t x214 = 1083U;
	static uint64_t x215 = 291LLU;
	int64_t x216 = -1LL;
	volatile int32_t t50 = 10;

	t50 = (x213<((x214==x215)/x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = UINT64_MAX;
	uint8_t x222 = 29U;
	int32_t x223 = 291033445;
	int32_t x224 = -1;
	volatile int32_t t51 = -5;

	t51 = (x221<((x222==x223)/x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x226 = INT8_MAX;
	static int64_t x227 = -1LL;
	int32_t x228 = INT32_MIN;
	volatile int32_t t52 = -8639163;

	t52 = (x225<((x226==x227)/x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x230 = -1LL;
	uint64_t x231 = 89LLU;
	int16_t x232 = INT16_MIN;
	int32_t t53 = -6055277;

	t53 = (x229<((x230==x231)/x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MIN;
	static int8_t x235 = 17;
	volatile int64_t x236 = -13027LL;
	volatile int32_t t54 = -3674;

	t54 = (x233<((x234==x235)/x236));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MIN;
	static uint16_t x239 = UINT16_MAX;
	int32_t t55 = -844;

	t55 = (x237<((x238==x239)/x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = -1LL;
	static uint16_t x243 = 27U;
	int16_t x244 = INT16_MAX;
	int32_t t56 = -11;

	t56 = (x241<((x242==x243)/x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -8;
	int16_t x246 = INT16_MIN;
	int8_t x248 = INT8_MIN;
	int32_t t57 = -54481071;

	t57 = (x245<((x246==x247)/x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = UINT8_MAX;
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = -1;
	volatile int64_t x252 = -1LL;
	static volatile int32_t t58 = 1;

	t58 = (x249<((x250==x251)/x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x253 = 2935;
	int8_t x254 = INT8_MIN;
	int64_t x255 = -15043LL;
	uint32_t x256 = 10U;
	volatile int32_t t59 = -96579;

	t59 = (x253<((x254==x255)/x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = -5373537718LL;
	uint32_t x258 = 523786U;
	int64_t x259 = INT64_MIN;
	static int32_t x260 = -2020471;

	t60 = (x257<((x258==x259)/x260));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = 411453813157825799LL;
	int16_t x262 = 14;
	int8_t x263 = INT8_MAX;
	volatile uint8_t x264 = 1U;

	t61 = (x261<((x262==x263)/x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x265 = INT16_MAX;
	int64_t x266 = 32732255261583LL;
	static int32_t x267 = 139;
	uint8_t x268 = 18U;
	int32_t t62 = 3;

	t62 = (x265<((x266==x267)/x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MAX;
	volatile int16_t x270 = -11;
	int16_t x271 = INT16_MIN;
	static uint32_t x272 = UINT32_MAX;
	int32_t t63 = -984;

	t63 = (x269<((x270==x271)/x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x273 = -3911LL;
	static int16_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t64 = -2552783;

	t64 = (x273<((x274==x275)/x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MIN;
	volatile int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	int64_t x280 = 23581119996069339LL;
	volatile int32_t t65 = 9908619;

	t65 = (x277<((x278==x279)/x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MIN;
	volatile int64_t x286 = 61807010034222LL;
	volatile uint8_t x287 = 1U;
	int16_t x288 = INT16_MIN;
	int32_t t66 = -149772;

	t66 = (x285<((x286==x287)/x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = -1;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t67 = -44;

	t67 = (x289<((x290==x291)/x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 0U;
	int8_t x296 = -1;

	t68 = (x293<((x294==x295)/x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x298 = -212878185LL;
	static uint16_t x299 = 2183U;
	int8_t x300 = INT8_MIN;
	static int32_t t69 = 0;

	t69 = (x297<((x298==x299)/x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x303 = 5U;
	static uint64_t x304 = UINT64_MAX;
	int32_t t70 = -205150;

	t70 = (x301<((x302==x303)/x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MAX;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 1U;
	static int32_t t71 = 1602;

	t71 = (x305<((x306==x307)/x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x309 = INT64_MIN;
	int64_t x310 = -7864LL;
	uint64_t x312 = 7204916817LLU;
	volatile int32_t t72 = 27950;

	t72 = (x309<((x310==x311)/x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = INT16_MIN;
	static int16_t x315 = -4572;
	static volatile int32_t t73 = 3;

	t73 = (x313<((x314==x315)/x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = -493196616440748LL;
	volatile uint16_t x319 = 2298U;
	int64_t x320 = INT64_MIN;
	volatile int32_t t74 = 7526;

	t74 = (x317<((x318==x319)/x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x322 = 8U;
	static uint64_t x323 = 513940301LLU;
	int32_t x324 = INT32_MAX;
	volatile int32_t t75 = 1313;

	t75 = (x321<((x322==x323)/x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 4745549LLU;
	static int32_t x327 = INT32_MAX;
	int64_t x328 = INT64_MIN;
	int32_t t76 = -445043;

	t76 = (x325<((x326==x327)/x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 2854U;
	static int32_t x334 = -477745;
	int8_t x336 = INT8_MAX;
	volatile int32_t t77 = -31;

	t77 = (x333<((x334==x335)/x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t78 = 1745;

	t78 = (x337<((x338==x339)/x340));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x341 = UINT32_MAX;
	static uint32_t x342 = 1U;
	int32_t x343 = INT32_MIN;
	static volatile int32_t t79 = -740702805;

	t79 = (x341<((x342==x343)/x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x346 = 11039405449LLU;
	int8_t x347 = 29;
	volatile int32_t t80 = -101934075;

	t80 = (x345<((x346==x347)/x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x349 = 6U;
	int16_t x351 = INT16_MIN;
	volatile int32_t t81 = -16560;

	t81 = (x349<((x350==x351)/x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x353 = UINT8_MAX;
	static int32_t x354 = -18;
	uint64_t x356 = 2432429453LLU;
	int32_t t82 = -1;

	t82 = (x353<((x354==x355)/x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = 30;
	volatile uint32_t x358 = 140216U;
	int32_t x359 = INT32_MIN;
	volatile uint16_t x360 = 186U;
	volatile int32_t t83 = 13620;

	t83 = (x357<((x358==x359)/x360));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x361 = INT32_MIN;
	volatile uint8_t x363 = UINT8_MAX;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t84 = 94;

	t84 = (x361<((x362==x363)/x364));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x366 = -84257713826LL;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t85 = -1;

	t85 = (x365<((x366==x367)/x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x369 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = 220U;
	volatile int32_t t86 = -214948;

	t86 = (x369<((x370==x371)/x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x373 = INT64_MAX;
	static int8_t x374 = 27;
	int8_t x375 = INT8_MIN;
	static volatile uint16_t x376 = 1123U;
	int32_t t87 = -41699529;

	t87 = (x373<((x374==x375)/x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = -3704;
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = 1;

	t88 = (x377<((x378==x379)/x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = -1LL;
	int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MAX;
	int8_t x384 = 1;

	t89 = (x381<((x382==x383)/x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x386 = -94;
	volatile int64_t x387 = 55524LL;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t90 = -7836;

	t90 = (x385<((x386==x387)/x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = INT64_MIN;
	int64_t x392 = -1LL;
	volatile int32_t t91 = 93249153;

	t91 = (x389<((x390==x391)/x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = INT32_MAX;
	int32_t x394 = INT32_MAX;
	uint8_t x395 = 110U;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t92 = 47237680;

	t92 = (x393<((x394==x395)/x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x397 = UINT8_MAX;
	int32_t x400 = -241468;
	static volatile int32_t t93 = -1;

	t93 = (x397<((x398==x399)/x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x401 = -7;
	int32_t x402 = INT32_MIN;
	uint16_t x403 = 6U;
	int8_t x404 = 3;
	static volatile int32_t t94 = 22741070;

	t94 = (x401<((x402==x403)/x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = 6706;
	volatile int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	static uint16_t x408 = UINT16_MAX;
	volatile int32_t t95 = 99796189;

	t95 = (x405<((x406==x407)/x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = -1;
	static int64_t x410 = -1LL;
	uint16_t x411 = 269U;
	int8_t x412 = 2;

	t96 = (x409<((x410==x411)/x412));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = -37678;
	int8_t x414 = INT8_MIN;
	int32_t x416 = 515243;
	int32_t t97 = 1;

	t97 = (x413<((x414==x415)/x416));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x417 = 2995U;
	int8_t x419 = -1;
	uint32_t x420 = 122188U;
	volatile int32_t t98 = -335889210;

	t98 = (x417<((x418==x419)/x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x422 = 27U;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t99 = -329456775;

	t99 = (x421<((x422==x423)/x424));

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

