#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = 63414587577985LLU;
volatile uint32_t t1 = 2042710648U;
int8_t x15 = -1;
int8_t x29 = INT8_MAX;
int16_t x32 = INT16_MIN;
int64_t x42 = INT64_MAX;
uint32_t t12 = 112515344U;
int64_t x57 = INT64_MIN;
int32_t x60 = INT32_MAX;
int64_t x62 = INT64_MIN;
static int16_t x64 = INT16_MIN;
static int16_t x67 = INT16_MIN;
uint64_t x70 = 3715085265LLU;
static uint16_t x85 = 557U;
static uint32_t t22 = 130U;
volatile int16_t x94 = -1;
int16_t x96 = INT16_MIN;
int32_t t23 = 336130;
static int64_t x105 = INT64_MAX;
int64_t x109 = INT64_MAX;
volatile int64_t t29 = INT64_MIN;
volatile uint16_t x123 = 29283U;
static volatile uint8_t x126 = 99U;
static volatile int8_t x127 = -24;
volatile int32_t t33 = 22787149;
uint16_t x137 = 1U;
int64_t t37 = -29LL;
static uint16_t x153 = 10837U;
volatile uint8_t x158 = 1U;
int16_t x163 = INT16_MIN;
int64_t x170 = -9893740LL;
int8_t x176 = INT8_MAX;
volatile int32_t t43 = 130;
uint8_t x177 = UINT8_MAX;
uint8_t x178 = UINT8_MAX;
int16_t x179 = INT16_MIN;
int8_t x183 = -1;
static volatile int32_t t46 = -671;
uint8_t x194 = UINT8_MAX;
int8_t x197 = -1;
int32_t t49 = -19726714;
int16_t x201 = INT16_MAX;
static volatile int64_t x202 = INT64_MAX;
static int64_t x204 = INT64_MIN;
uint32_t x210 = UINT32_MAX;
int32_t x211 = INT32_MAX;
int32_t x213 = -1;
static volatile int32_t x214 = 1874;
uint8_t x217 = UINT8_MAX;
int32_t t54 = -56;
int16_t x224 = INT16_MAX;
int16_t x226 = -1;
volatile uint32_t t57 = 330U;
volatile uint8_t x248 = UINT8_MAX;
volatile uint32_t t62 = UINT32_MAX;
int64_t x253 = INT64_MIN;
static int64_t t63 = INT64_MIN;
int64_t x259 = INT64_MIN;
volatile int16_t x261 = INT16_MIN;
int32_t x265 = INT32_MIN;
int16_t x266 = -451;
static int16_t x274 = 1;
static volatile int16_t x278 = 1;
volatile int16_t x280 = -1;
uint8_t x293 = UINT8_MAX;
int32_t x301 = -1;
volatile uint64_t t74 = 942621511224825121LLU;
int16_t x315 = 283;
int16_t x318 = -1;
int64_t x319 = 408137808308LL;
int32_t t77 = -34;
int16_t x327 = INT16_MIN;
uint32_t x333 = 2571U;
int64_t x336 = 2156556210LL;
static int32_t x338 = -34;
int32_t x344 = -136;
int64_t x345 = INT64_MIN;
uint64_t x346 = UINT64_MAX;
int64_t x354 = -1LL;
int64_t x358 = -1LL;
uint16_t x359 = 14860U;
int8_t x361 = 45;
volatile int64_t x365 = -718533LL;
int32_t x366 = INT32_MAX;
int8_t x367 = INT8_MIN;
int16_t x369 = INT16_MAX;
static volatile int8_t x375 = -1;
static int8_t x381 = -1;
volatile uint8_t x386 = 0U;
int64_t x391 = 695513LL;
int8_t x397 = INT8_MAX;
static int32_t x401 = -1;
static int32_t x402 = INT32_MAX;
int32_t t97 = 226;
int16_t x407 = -16;
static int32_t t98 = 244;
int32_t t99 = 9;


void f0(void) {
	uint16_t x1 = 2U;
	int64_t x2 = -1LL;
	int64_t x3 = 66281037798767657LL;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -4;

	t0 = (x1+(x2<(x3/x4)));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 7U;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;

	t1 = (x5+(x6<(x7/x8)));

	if (t1 != 7U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	volatile int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t2 = 70;

	t2 = (x9+(x10<(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 3;
	int64_t x14 = 6897LL;
	static int32_t x16 = -1;
	volatile int32_t t3 = 64409;

	t3 = (x13+(x14<(x15/x16)));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 23U;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 3U;
	int32_t x20 = INT32_MAX;
	static volatile uint32_t t4 = 124697262U;

	t4 = (x17+(x18<(x19/x20)));

	if (t4 != 24U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 158647158LLU;
	volatile uint8_t x22 = 59U;
	volatile uint64_t x23 = 460163378946146806LLU;
	int64_t x24 = -1LL;
	uint64_t t5 = 24772LLU;

	t5 = (x21+(x22<(x23/x24)));

	if (t5 != 158647158LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 1U;
	static int8_t x28 = -21;
	int64_t t6 = INT64_MAX;

	t6 = (x25+(x26<(x27/x28)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = -1;
	uint64_t x31 = 445003LLU;
	static volatile int32_t t7 = 182;

	t7 = (x29+(x30<(x31/x32)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 225442984161LL;
	uint8_t x34 = UINT8_MAX;
	uint64_t x35 = UINT64_MAX;
	volatile int16_t x36 = INT16_MIN;
	volatile int64_t t8 = -103LL;

	t8 = (x33+(x34<(x35/x36)));

	if (t8 != 225442984161LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	static int32_t x38 = INT32_MIN;
	uint8_t x39 = 35U;
	int32_t x40 = 2854;
	int32_t t9 = 5756;

	t9 = (x37+(x38<(x39/x40)));

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	int32_t t10 = 20175967;

	t10 = (x41+(x42<(x43/x44)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static uint32_t x46 = 594U;
	uint8_t x47 = 1U;
	volatile int16_t x48 = INT16_MIN;
	static int32_t t11 = 0;

	t11 = (x45+(x46<(x47/x48)));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 113736U;
	static int64_t x50 = INT64_MAX;
	static uint32_t x51 = UINT32_MAX;
	int64_t x52 = INT64_MAX;

	t12 = (x49+(x50<(x51/x52)));

	if (t12 != 113736U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint8_t x54 = 6U;
	volatile int32_t x55 = -1;
	int32_t x56 = -1;
	int32_t t13 = -873377081;

	t13 = (x53+(x54<(x55/x56)));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x58 = INT16_MAX;
	uint64_t x59 = UINT64_MAX;
	volatile int64_t t14 = 1LL;

	t14 = (x57+(x58<(x59/x60)));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -427297;
	int64_t x63 = -1LL;
	volatile int32_t t15 = 110480;

	t15 = (x61+(x62<(x63/x64)));

	if (t15 != -427296) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	uint32_t x66 = UINT32_MAX;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t16 = INT32_MAX;

	t16 = (x65+(x66<(x67/x68)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int8_t x71 = INT8_MAX;
	int64_t x72 = -1LL;
	int64_t t17 = -169LL;

	t17 = (x69+(x70<(x71/x72)));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static volatile int16_t x74 = -1;
	int16_t x75 = -10;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = -7395845;

	t18 = (x73+(x74<(x75/x76)));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int8_t x78 = INT8_MIN;
	static volatile int16_t x79 = INT16_MAX;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = 4550;

	t19 = (x77+(x78<(x79/x80)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x82 = 3LL;
	int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = 11858359;

	t20 = (x81+(x82<(x83/x84)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MAX;
	int32_t x87 = INT32_MIN;
	volatile uint16_t x88 = 9873U;
	int32_t t21 = -268545726;

	t21 = (x85+(x86<(x87/x88)));

	if (t21 != 557) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 60486361U;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = 8U;

	t22 = (x89+(x90<(x91/x92)));

	if (t22 != 60486361U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x95 = INT8_MIN;

	t23 = (x93+(x94<(x95/x96)));

	if (t23 != 256) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 7013195U;
	static volatile int8_t x98 = -1;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;
	volatile uint32_t t24 = 52173U;

	t24 = (x97+(x98<(x99/x100)));

	if (t24 != 7013195U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = UINT16_MAX;
	static uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -517336899;

	t25 = (x101+(x102<(x103/x104)));

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 0U;
	int64_t x107 = -55405472LL;
	int64_t x108 = INT64_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (x105+(x106<(x107/x108)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = 1;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x109+(x110<(x111/x112)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 102597709509364LL;
	static volatile int8_t x114 = INT8_MIN;
	volatile uint8_t x115 = 57U;
	volatile int64_t x116 = -1LL;
	int64_t t28 = 17495646305719LL;

	t28 = (x113+(x114<(x115/x116)));

	if (t28 != 102597709509365LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = UINT64_MAX;
	volatile int16_t x119 = INT16_MAX;
	volatile int16_t x120 = -26;

	t29 = (x117+(x118<(x119/x120)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -385377579LL;
	int16_t x122 = 0;
	volatile int8_t x124 = INT8_MAX;
	static int64_t t30 = 7LL;

	t30 = (x121+(x122<(x123/x124)));

	if (t30 != -385377578LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = UINT8_MAX;
	int8_t x128 = -11;
	int32_t t31 = 364;

	t31 = (x125+(x126<(x127/x128)));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	static int32_t x130 = -1;
	static volatile int32_t x131 = INT32_MIN;
	volatile int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -9LL;

	t32 = (x129+(x130<(x131/x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	uint16_t x134 = 26063U;
	uint64_t x135 = 174414733752LLU;
	int8_t x136 = 61;

	t33 = (x133+(x134<(x135/x136)));

	if (t33 != 65536) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MAX;
	int16_t x140 = -1;
	volatile int32_t t34 = -39452;

	t34 = (x137+(x138<(x139/x140)));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	int8_t x142 = -4;
	int64_t x143 = INT64_MIN;
	volatile uint16_t x144 = UINT16_MAX;
	volatile int64_t t35 = -48470339976034860LL;

	t35 = (x141+(x142<(x143/x144)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = UINT64_MAX;
	static volatile int8_t x146 = INT8_MAX;
	uint32_t x147 = 31U;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x145+(x146<(x147/x148)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = -35730388072LL;
	int32_t x150 = -1;
	static uint64_t x151 = UINT64_MAX;
	volatile int16_t x152 = INT16_MAX;

	t37 = (x149+(x150<(x151/x152)));

	if (t37 != -35730388072LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -1LL;
	int16_t x155 = -176;
	volatile int8_t x156 = INT8_MIN;
	int32_t t38 = -355480746;

	t38 = (x153+(x154<(x155/x156)));

	if (t38 != 10838) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 12240590589LLU;
	int16_t x159 = INT16_MIN;
	int32_t x160 = 8099489;
	volatile uint64_t t39 = 687108288040LLU;

	t39 = (x157+(x158<(x159/x160)));

	if (t39 != 12240590589LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	static int64_t x162 = 33816822431960LL;
	volatile int8_t x164 = INT8_MIN;
	int32_t t40 = -37847;

	t40 = (x161+(x162<(x163/x164)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -73830;
	int32_t x166 = -90548;
	volatile uint8_t x167 = 28U;
	int16_t x168 = 121;
	int32_t t41 = 5659;

	t41 = (x165+(x166<(x167/x168)));

	if (t41 != -73829) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	uint32_t x171 = UINT32_MAX;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = 31299384;

	t42 = (x169+(x170<(x171/x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -16350531;
	static int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;

	t43 = (x173+(x174<(x175/x176)));

	if (t43 != -16350530) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x180 = INT32_MIN;
	static volatile int32_t t44 = -6;

	t44 = (x177+(x178<(x179/x180)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MAX;
	static int8_t x184 = 5;
	int32_t t45 = -921351109;

	t45 = (x181+(x182<(x183/x184)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 26U;
	int32_t x186 = INT32_MIN;
	int32_t x187 = 3730409;
	uint8_t x188 = 11U;

	t46 = (x185+(x186<(x187/x188)));

	if (t46 != 27) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	uint16_t x190 = 11U;
	int8_t x191 = -1;
	int32_t x192 = -1;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x189+(x190<(x191/x192)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x195 = 11U;
	uint64_t x196 = 20482LLU;
	volatile int64_t t48 = INT64_MIN;

	t48 = (x193+(x194<(x195/x196)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MAX;
	static int8_t x199 = INT8_MAX;
	static int16_t x200 = INT16_MAX;

	t49 = (x197+(x198<(x199/x200)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = INT8_MIN;
	int32_t t50 = -296;

	t50 = (x201+(x202<(x203/x204)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 389U;
	int8_t x206 = INT8_MAX;
	int64_t x207 = -1LL;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = -17;

	t51 = (x205+(x206<(x207/x208)));

	if (t51 != 389) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = INT64_MAX;
	uint32_t x212 = 40380U;
	static int64_t t52 = INT64_MAX;

	t52 = (x209+(x210<(x211/x212)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x215 = 6U;
	volatile uint64_t x216 = 53855729185447745LLU;
	volatile int32_t t53 = 1;

	t53 = (x213+(x214<(x215/x216)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MIN;
	volatile int16_t x219 = INT16_MAX;
	int32_t x220 = 8349948;

	t54 = (x217+(x218<(x219/x220)));

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x221 = INT16_MAX;
	volatile int32_t x222 = -943608;
	static int8_t x223 = INT8_MIN;
	int32_t t55 = -1;

	t55 = (x221+(x222<(x223/x224)));

	if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 19U;
	volatile int32_t x227 = INT32_MIN;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t56 = -719249608;

	t56 = (x225+(x226<(x227/x228)));

	if (t56 != 19) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 62254907U;
	static int8_t x230 = INT8_MIN;
	int64_t x231 = 156424262505724866LL;
	static uint64_t x232 = 8400215522192994LLU;

	t57 = (x229+(x230<(x231/x232)));

	if (t57 != 62254907U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 15807U;
	volatile uint32_t x234 = 7245605U;
	static volatile int16_t x235 = 5620;
	volatile int64_t x236 = 39655067391LL;
	volatile int32_t t58 = -12009;

	t58 = (x233+(x234<(x235/x236)));

	if (t58 != 15807) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	volatile int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MIN;
	static int32_t t59 = -1;

	t59 = (x237+(x238<(x239/x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	static volatile uint64_t x242 = 10758988292139LLU;
	uint64_t x243 = 9216916794LLU;
	volatile int8_t x244 = INT8_MAX;
	int32_t t60 = -9451;

	t60 = (x241+(x242<(x243/x244)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = 122U;
	int8_t x246 = -11;
	uint8_t x247 = UINT8_MAX;
	static int32_t t61 = -215257;

	t61 = (x245+(x246<(x247/x248)));

	if (t61 != 123) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = UINT32_MAX;
	static uint8_t x250 = 92U;
	static int16_t x251 = 3171;
	int16_t x252 = -42;

	t62 = (x249+(x250<(x251/x252)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	volatile int8_t x255 = 1;
	uint32_t x256 = 107850622U;

	t63 = (x253+(x254<(x255/x256)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 1198U;
	uint8_t x258 = UINT8_MAX;
	volatile int32_t x260 = INT32_MIN;
	static volatile uint32_t t64 = 2434U;

	t64 = (x257+(x258<(x259/x260)));

	if (t64 != 1199U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 6302624675LLU;
	uint8_t x263 = UINT8_MAX;
	uint8_t x264 = 2U;
	int32_t t65 = -758419;

	t65 = (x261+(x262<(x263/x264)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = INT32_MAX;
	int64_t x268 = -1LL;
	int32_t t66 = INT32_MIN;

	t66 = (x265+(x266<(x267/x268)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = 1913127U;
	uint64_t x272 = 63668LLU;
	volatile int32_t t67 = INT32_MIN;

	t67 = (x269+(x270<(x271/x272)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	uint64_t x275 = 637214981217078011LLU;
	static uint64_t x276 = 132877863076LLU;
	static int32_t t68 = -85253882;

	t68 = (x273+(x274<(x275/x276)));

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	volatile int32_t t69 = 80;

	t69 = (x277+(x278<(x279/x280)));

	if (t69 != 256) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 4;
	int64_t x290 = INT64_MAX;
	int32_t x291 = -393;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t70 = 1009;

	t70 = (x289+(x290<(x291/x292)));

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x294 = INT8_MIN;
	static volatile uint8_t x295 = 50U;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t71 = -1267100;

	t71 = (x293+(x294<(x295/x296)));

	if (t71 != 256) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x302 = 1557708392U;
	static int64_t x303 = INT64_MIN;
	uint8_t x304 = UINT8_MAX;
	int32_t t72 = -2;

	t72 = (x301+(x302<(x303/x304)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x305 = INT64_MIN;
	int32_t x306 = -1;
	int32_t x307 = -1;
	static volatile int16_t x308 = INT16_MAX;
	volatile int64_t t73 = -803266759LL;

	t73 = (x305+(x306<(x307/x308)));

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 1816923LLU;
	volatile int32_t x310 = INT32_MIN;
	int64_t x311 = -1LL;
	static int64_t x312 = -1LL;

	t74 = (x309+(x310<(x311/x312)));

	if (t74 != 1816924LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x313 = 0U;
	int8_t x314 = 19;
	int16_t x316 = 1;
	volatile uint32_t t75 = 6331U;

	t75 = (x313+(x314<(x315/x316)));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x317 = -1LL;
	int16_t x320 = INT16_MIN;
	int64_t t76 = -3687333544980LL;

	t76 = (x317+(x318<(x319/x320)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = 0;
	int16_t x322 = -3;
	static uint32_t x323 = 407763034U;
	uint8_t x324 = 3U;

	t77 = (x321+(x322<(x323/x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	uint16_t x326 = 0U;
	int8_t x328 = INT8_MIN;
	volatile int64_t t78 = 158949LL;

	t78 = (x325+(x326<(x327/x328)));

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x329 = 30474866797411LLU;
	volatile int64_t x330 = INT64_MIN;
	uint16_t x331 = 298U;
	int8_t x332 = 1;
	volatile uint64_t t79 = 49794512LLU;

	t79 = (x329+(x330<(x331/x332)));

	if (t79 != 30474866797412LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x334 = UINT8_MAX;
	uint64_t x335 = UINT64_MAX;
	uint32_t t80 = 1298U;

	t80 = (x333+(x334<(x335/x336)));

	if (t80 != 2572U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x337 = UINT8_MAX;
	int32_t x339 = -110843;
	int64_t x340 = INT64_MAX;
	static int32_t t81 = -218962;

	t81 = (x337+(x338<(x339/x340)));

	if (t81 != 256) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = INT64_MIN;
	static uint32_t x342 = 1358718U;
	int32_t x343 = -1;
	volatile int64_t t82 = INT64_MIN;

	t82 = (x341+(x342<(x343/x344)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x347 = -108;
	uint16_t x348 = 1347U;
	int64_t t83 = INT64_MIN;

	t83 = (x345+(x346<(x347/x348)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x349 = INT32_MIN;
	volatile uint8_t x350 = 122U;
	int32_t x351 = -36580969;
	int8_t x352 = 37;
	static int32_t t84 = INT32_MIN;

	t84 = (x349+(x350<(x351/x352)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 1U;
	int32_t x355 = INT32_MIN;
	static uint8_t x356 = 3U;
	static int32_t t85 = 0;

	t85 = (x353+(x354<(x355/x356)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x357 = 3817762U;
	int32_t x360 = INT32_MIN;
	volatile uint32_t t86 = 79U;

	t86 = (x357+(x358<(x359/x360)));

	if (t86 != 3817763U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x362 = 499762863525LL;
	static int8_t x363 = -3;
	volatile uint16_t x364 = UINT16_MAX;
	volatile int32_t t87 = 949015508;

	t87 = (x361+(x362<(x363/x364)));

	if (t87 != 45) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x368 = -1;
	int64_t t88 = -30LL;

	t88 = (x365+(x366<(x367/x368)));

	if (t88 != -718533LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x370 = UINT16_MAX;
	int32_t x371 = -27;
	int32_t x372 = INT32_MIN;
	volatile int32_t t89 = -1;

	t89 = (x369+(x370<(x371/x372)));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = UINT16_MAX;
	static volatile int64_t x374 = INT64_MAX;
	int16_t x376 = -1;
	static volatile int32_t t90 = -104076572;

	t90 = (x373+(x374<(x375/x376)));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MIN;
	static int64_t x380 = INT64_MIN;
	int32_t t91 = 113205;

	t91 = (x377+(x378<(x379/x380)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MIN;
	static volatile uint16_t x384 = UINT16_MAX;
	int32_t t92 = -494214524;

	t92 = (x381+(x382<(x383/x384)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	static uint32_t x387 = UINT32_MAX;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t93 = 5;

	t93 = (x385+(x386<(x387/x388)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x389 = INT16_MIN;
	int32_t x390 = 3029004;
	static int64_t x392 = 2169939315481909158LL;
	int32_t t94 = 8;

	t94 = (x389+(x390<(x391/x392)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = 348204101;
	uint64_t x395 = UINT64_MAX;
	uint32_t x396 = 20555U;
	volatile int64_t t95 = 18LL;

	t95 = (x393+(x394<(x395/x396)));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x398 = INT8_MIN;
	uint32_t x399 = 3631781U;
	uint64_t x400 = UINT64_MAX;
	int32_t t96 = -22;

	t96 = (x397+(x398<(x399/x400)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x403 = 0;
	int8_t x404 = INT8_MIN;

	t97 = (x401+(x402<(x403/x404)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = -1;
	volatile int64_t x406 = INT64_MAX;
	int32_t x408 = 104;

	t98 = (x405+(x406<(x407/x408)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = 30U;
	int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MIN;
	volatile int32_t x412 = INT32_MIN;

	t99 = (x409+(x410<(x411/x412)));

	if (t99 != 31) { NG(); } else { ; }
	
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

