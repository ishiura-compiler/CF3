#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 461180843LLU;
uint64_t x9 = 1329445LLU;
volatile int8_t x21 = INT8_MAX;
static int64_t t6 = 1374531087LL;
static volatile uint64_t x36 = UINT64_MAX;
int32_t x38 = -77284;
volatile int16_t x44 = -1;
int16_t x45 = -909;
static int64_t x48 = INT64_MAX;
int64_t t11 = 4842422639LL;
static int8_t x55 = INT8_MAX;
int8_t x57 = INT8_MIN;
int32_t x64 = INT32_MIN;
static int8_t x67 = 0;
static uint8_t x68 = 1U;
int64_t x71 = -1LL;
static volatile uint32_t t17 = 1890685U;
int32_t x82 = -29;
volatile int32_t x84 = INT32_MIN;
int64_t x86 = INT64_MIN;
int32_t x95 = 3024039;
int16_t x97 = -1;
int8_t x99 = INT8_MAX;
volatile uint32_t t22 = 1530848601U;
int16_t x108 = 2226;
int8_t x113 = 0;
int32_t t26 = 98801;
int32_t x127 = INT32_MIN;
static volatile uint32_t t28 = 104U;
int8_t x129 = 6;
static int64_t x130 = -1LL;
int16_t x131 = 52;
volatile int64_t t29 = -1040841858402438742LL;
uint16_t x136 = 15673U;
int64_t x139 = -380007LL;
uint64_t t31 = 41LLU;
volatile int32_t t32 = -3;
int32_t t34 = 0;
int32_t x154 = INT32_MIN;
volatile int8_t x155 = -1;
volatile uint64_t t36 = 0LLU;
static volatile int16_t x162 = INT16_MAX;
int8_t x165 = INT8_MIN;
int8_t x168 = INT8_MIN;
int64_t t38 = 35LL;
volatile int64_t x182 = 3677223LL;
uint16_t x191 = UINT16_MAX;
uint64_t t42 = 7325918981616499LLU;
static uint32_t x193 = 1620303143U;
volatile uint64_t x201 = UINT64_MAX;
uint64_t t44 = 37788546747317LLU;
uint64_t t45 = 7724312094260777634LLU;
int8_t x210 = INT8_MIN;
int8_t x216 = INT8_MIN;
int16_t x224 = 825;
uint32_t x226 = UINT32_MAX;
uint32_t t49 = 3162075U;
int8_t x247 = -1;
int8_t x249 = -1;
int64_t x251 = INT64_MIN;
int64_t x255 = -1LL;
int16_t x257 = INT16_MIN;
uint16_t x259 = UINT16_MAX;
static int32_t t55 = -953233511;
volatile int64_t x268 = INT64_MIN;
volatile uint32_t t57 = 21796U;
static int32_t x276 = INT32_MIN;
static volatile int16_t x279 = INT16_MIN;
static uint16_t x286 = 818U;
int64_t x287 = -1LL;
uint64_t x290 = 21029465LLU;
uint64_t t64 = 9209734361142004916LLU;
uint8_t x307 = UINT8_MAX;
volatile int64_t t68 = INT64_MAX;
volatile int32_t x328 = INT32_MIN;
volatile int8_t x331 = INT8_MAX;
int16_t x346 = INT16_MIN;
int16_t x347 = INT16_MIN;
int8_t x348 = -42;
int64_t x349 = -1LL;
int8_t x351 = INT8_MIN;
int32_t x352 = INT32_MIN;
uint64_t x354 = 361LLU;
static int64_t x384 = INT64_MIN;
static volatile int32_t x389 = -1;
static int32_t x397 = 21251;
uint64_t x400 = 45LLU;
static volatile int32_t t82 = -5119;
int16_t x421 = -1;
int8_t x422 = INT8_MIN;
volatile uint32_t x423 = 3280899U;
uint64_t x424 = 1574723491837120LLU;
int16_t x427 = INT16_MAX;
static volatile uint64_t t85 = 19187637725354LLU;
static int64_t x429 = INT64_MIN;
uint64_t x433 = UINT64_MAX;
uint16_t x434 = 11U;
int64_t x435 = -53LL;
uint32_t t88 = 1828U;
volatile int16_t x445 = INT16_MIN;
int16_t x447 = -1;
int32_t x458 = INT32_MIN;
static uint64_t x460 = 133301511LLU;
static uint8_t x463 = 13U;
int8_t x464 = -1;
static int32_t x465 = -1;
int32_t t94 = 1302;
static uint16_t x483 = UINT16_MAX;
int16_t x486 = INT16_MIN;
int16_t x487 = INT16_MAX;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	uint16_t x4 = 1175U;

	t0 = (x1*(x2^(x3<x4)));

	if (t0 != 2147483648LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 16;
	static int8_t x6 = 7;
	uint32_t x7 = 1982957078U;
	static uint64_t x8 = UINT64_MAX;
	int32_t t1 = 7124999;

	t1 = (x5*(x6^(x7<x8)));

	if (t1 != 96) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MAX;
	int8_t x11 = INT8_MIN;
	volatile int16_t x12 = -1;
	volatile uint64_t t2 = 230LLU;

	t2 = (x9*(x10^(x11<x12)));

	if (t2 != 43560594870LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -7;
	int8_t x14 = -4;
	uint64_t x15 = 84785068697LLU;
	uint8_t x16 = 6U;
	static volatile int32_t t3 = 5;

	t3 = (x13*(x14^(x15<x16)));

	if (t3 != 28) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile uint64_t x18 = 9347LLU;
	uint32_t x19 = UINT32_MAX;
	uint8_t x20 = 2U;
	uint64_t t4 = 32LLU;

	t4 = (x17*(x18^(x19<x20)));

	if (t4 != 18446744073709542269LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -1;
	static int16_t x23 = INT16_MAX;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 25574504;

	t5 = (x21*(x22^(x23<x24)));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 15297405915LL;
	uint32_t x26 = 29759717U;
	int16_t x27 = 95;
	volatile int8_t x28 = -28;

	t6 = (x25*(x26^(x27<x28)));

	if (t6 != 455246470864526055LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 29LLU;
	int16_t x30 = INT16_MIN;
	volatile int16_t x31 = INT16_MAX;
	int16_t x32 = 0;
	volatile uint64_t t7 = 1723645LLU;

	t7 = (x29*(x30^(x31<x32)));

	if (t7 != 18446744073708601344LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 10U;
	int64_t x34 = -1LL;
	volatile int32_t x35 = 471;
	volatile int64_t t8 = -56740700749LL;

	t8 = (x33*(x34^(x35<x36)));

	if (t8 != -20LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 57;
	uint64_t x39 = 2821624LLU;
	volatile uint64_t x40 = 483380LLU;
	static int32_t t9 = -7239104;

	t9 = (x37*(x38^(x39<x40)));

	if (t9 != -4405188) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	static uint8_t x43 = 3U;
	static volatile uint64_t t10 = 44927073486148969LLU;

	t10 = (x41*(x42^(x43<x44)));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = 0LL;
	static int64_t x47 = 1353LL;

	t11 = (x45*(x46^(x47<x48)));

	if (t11 != -909LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = -1;
	static uint16_t x54 = UINT16_MAX;
	uint32_t x56 = 1604895U;
	int32_t t12 = -62893;

	t12 = (x53*(x54^(x55<x56)));

	if (t12 != -65534) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = 1;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MIN;
	int32_t t13 = 40257;

	t13 = (x57*(x58^(x59<x60)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -1LL;
	int64_t x62 = INT64_MAX;
	uint16_t x63 = UINT16_MAX;
	int64_t t14 = 24105772062686811LL;

	t14 = (x61*(x62^(x63<x64)));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = INT16_MAX;
	int16_t x66 = INT16_MIN;
	volatile int32_t t15 = -3071;

	t15 = (x65*(x66^(x67<x68)));

	if (t15 != -1073676289) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x69 = 1U;
	int32_t x70 = INT32_MAX;
	static volatile int8_t x72 = INT8_MAX;
	volatile int32_t t16 = 809;

	t16 = (x69*(x70^(x71<x72)));

	if (t16 != 2147483646) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x73 = UINT32_MAX;
	static int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MAX;
	int32_t x76 = -17646101;

	t17 = (x73*(x74^(x75<x76)));

	if (t17 != 128U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	int16_t x83 = INT16_MIN;
	int32_t t18 = -10;

	t18 = (x81*(x82^(x83<x84)));

	if (t18 != 29) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	uint16_t x87 = 13U;
	uint64_t x88 = UINT64_MAX;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x85*(x86^(x87<x88)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	volatile uint16_t x90 = UINT16_MAX;
	uint8_t x91 = UINT8_MAX;
	int16_t x92 = -1;
	volatile int32_t t20 = -118326;

	t20 = (x89*(x90^(x91<x92)));

	if (t20 != 16711425) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	int8_t x94 = -1;
	volatile uint32_t x96 = 1251U;
	int32_t t21 = -71;

	t21 = (x93*(x94^(x95<x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x98 = 881U;
	int16_t x100 = -1;

	t22 = (x97*(x98^(x99<x100)));

	if (t22 != 4294966415U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = -1LL;
	volatile int8_t x102 = INT8_MAX;
	static int32_t x103 = INT32_MIN;
	uint8_t x104 = UINT8_MAX;
	volatile int64_t t23 = -59575LL;

	t23 = (x101*(x102^(x103<x104)));

	if (t23 != -126LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = 1;
	int64_t x106 = -2488478463091LL;
	int32_t x107 = INT32_MIN;
	int64_t t24 = 27947524301639523LL;

	t24 = (x105*(x106^(x107<x108)));

	if (t24 != -2488478463092LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = UINT16_MAX;
	int32_t x111 = INT32_MAX;
	volatile int8_t x112 = INT8_MAX;
	volatile int32_t t25 = -3;

	t25 = (x109*(x110^(x111<x112)));

	if (t25 != -2147450880) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x114 = -1;
	static int64_t x115 = INT64_MIN;
	static int32_t x116 = INT32_MAX;

	t26 = (x113*(x114^(x115<x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -1LL;
	static int64_t x118 = INT64_MAX;
	static volatile int8_t x119 = -1;
	volatile uint16_t x120 = 81U;
	static int64_t t27 = 49576366149525LL;

	t27 = (x117*(x118^(x119<x120)));

	if (t27 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -3888;
	uint32_t x126 = 914U;
	static int32_t x128 = INT32_MAX;

	t28 = (x125*(x126^(x127<x128)));

	if (t28 != 4291409776U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x132 = 0LL;

	t29 = (x129*(x130^(x131<x132)));

	if (t29 != -6LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x133 = 3U;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = 4U;
	volatile int32_t t30 = 4010;

	t30 = (x133*(x134^(x135<x136)));

	if (t30 != -381) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x137 = INT64_MIN;
	static uint64_t x138 = 28460693LLU;
	uint16_t x140 = 0U;

	t31 = (x137*(x138^(x139<x140)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 9;
	int8_t x142 = 6;
	uint16_t x143 = UINT16_MAX;
	static uint16_t x144 = 328U;

	t32 = (x141*(x142^(x143<x144)));

	if (t32 != 54) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 27;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	static volatile int64_t x148 = -325444364994195878LL;
	volatile int32_t t33 = -3862252;

	t33 = (x145*(x146^(x147<x148)));

	if (t33 != -884709) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = 1369;
	uint16_t x150 = 17U;
	int64_t x151 = INT64_MAX;
	int8_t x152 = 12;

	t34 = (x149*(x150^(x151<x152)));

	if (t34 != 23273) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = -80185LL;
	uint16_t x156 = 1U;
	int64_t t35 = 32323131LL;

	t35 = (x153*(x154^(x155<x156)));

	if (t35 != 172195976234695LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x157 = 3107;
	uint64_t x158 = 75867LLU;
	int16_t x159 = INT16_MIN;
	int32_t x160 = -1;

	t36 = (x157*(x158^(x159<x160)));

	if (t36 != 235715662LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x161 = 15087U;
	int8_t x163 = INT8_MIN;
	uint8_t x164 = 0U;
	volatile int32_t t37 = 1;

	t37 = (x161*(x162^(x163<x164)));

	if (t37 != 494340642) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x166 = -161050LL;
	int16_t x167 = INT16_MIN;

	t38 = (x165*(x166^(x167<x168)));

	if (t38 != 20614272LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = -2104;
	uint32_t x174 = UINT32_MAX;
	static int64_t x175 = INT64_MAX;
	volatile int8_t x176 = -1;
	uint32_t t39 = 1802U;

	t39 = (x173*(x174^(x175<x176)));

	if (t39 != 2104U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = 20351177306722926LL;
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = -188633875;
	int8_t x180 = 2;
	int64_t t40 = -27268LL;

	t40 = (x177*(x178^(x179<x180)));

	if (t40 != 5169199035907623204LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = INT32_MIN;
	int32_t x183 = -1;
	uint16_t x184 = UINT16_MAX;
	int64_t t41 = 6LL;

	t41 = (x181*(x182^(x183<x184)));

	if (t41 != -7896774115065856LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MIN;
	static int32_t x192 = -24197512;

	t42 = (x189*(x190^(x191<x192)));

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x194 = 6;
	uint32_t x195 = 1133836931U;
	int8_t x196 = INT8_MIN;
	static volatile uint32_t t43 = 97U;

	t43 = (x193*(x194^(x195<x196)));

	if (t43 != 2752187409U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x202 = -98691LL;
	int8_t x203 = -1;
	static uint16_t x204 = UINT16_MAX;

	t44 = (x201*(x202^(x203<x204)));

	if (t44 != 98692LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x205 = INT32_MIN;
	static uint64_t x206 = 16043328LLU;
	volatile int8_t x207 = -1;
	uint64_t x208 = UINT64_MAX;

	t45 = (x205*(x206^(x207<x208)));

	if (t45 != 18412291289170051072LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x209 = -6499;
	static int16_t x211 = INT16_MIN;
	volatile int16_t x212 = -1;
	int32_t t46 = 1;

	t46 = (x209*(x210^(x211<x212)));

	if (t46 != 825373) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = -89;
	uint32_t x214 = 7U;
	int64_t x215 = -1LL;
	volatile uint32_t t47 = 4447884U;

	t47 = (x213*(x214^(x215<x216)));

	if (t47 != 4294966673U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = -4;
	volatile uint8_t x222 = 55U;
	volatile uint8_t x223 = UINT8_MAX;
	volatile int32_t t48 = -120606;

	t48 = (x221*(x222^(x223<x224)));

	if (t48 != -216) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = INT32_MAX;
	static int8_t x227 = INT8_MAX;
	static int8_t x228 = INT8_MAX;

	t49 = (x225*(x226^(x227<x228)));

	if (t49 != 2147483649U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x229 = INT16_MIN;
	int32_t x230 = -1;
	int8_t x231 = -1;
	int64_t x232 = -1LL;
	int32_t t50 = 1;

	t50 = (x229*(x230^(x231<x232)));

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = UINT16_MAX;
	uint8_t x234 = 9U;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t51 = 24907;

	t51 = (x233*(x234^(x235<x236)));

	if (t51 != 589815) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MAX;
	volatile int64_t x248 = -4905878567993LL;
	uint64_t t52 = 55302LLU;

	t52 = (x245*(x246^(x247<x248)));

	if (t52 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x250 = 13;
	static int8_t x252 = 19;
	static volatile int32_t t53 = 8045337;

	t53 = (x249*(x250^(x251<x252)));

	if (t53 != -12) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x253 = INT32_MIN;
	int64_t x254 = -1LL;
	int8_t x256 = INT8_MIN;
	static int64_t t54 = -3482023191LL;

	t54 = (x253*(x254^(x255<x256)));

	if (t54 != 2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x258 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;

	t55 = (x257*(x258^(x259<x260)));

	if (t55 != -1073709056) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x261 = -79;
	static volatile int64_t x262 = -1LL;
	uint32_t x263 = 491731976U;
	volatile int32_t x264 = INT32_MIN;
	volatile int64_t t56 = 2962LL;

	t56 = (x261*(x262^(x263<x264)));

	if (t56 != 158LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x265 = 42U;
	int16_t x266 = -2434;
	int64_t x267 = INT64_MAX;

	t57 = (x265*(x266^(x267<x268)));

	if (t57 != 4294865068U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = -394;
	uint32_t x274 = 14U;
	uint32_t x275 = 4238894U;
	uint32_t t58 = 6425774U;

	t58 = (x273*(x274^(x275<x276)));

	if (t58 != 4294961386U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = -1;
	uint16_t x278 = 195U;
	static volatile int16_t x280 = INT16_MIN;
	int32_t t59 = -1726;

	t59 = (x277*(x278^(x279<x280)));

	if (t59 != -195) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x281 = 1U;
	int64_t x282 = -35916LL;
	int64_t x283 = -95784939LL;
	int8_t x284 = INT8_MIN;
	int64_t t60 = 2337LL;

	t60 = (x281*(x282^(x283<x284)));

	if (t60 != -35915LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = -19;
	uint32_t x288 = UINT32_MAX;
	static int32_t t61 = 5972987;

	t61 = (x285*(x286^(x287<x288)));

	if (t61 != -15561) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x289 = UINT8_MAX;
	volatile int8_t x291 = INT8_MIN;
	volatile uint64_t x292 = UINT64_MAX;
	volatile uint64_t t62 = 490762LLU;

	t62 = (x289*(x290^(x291<x292)));

	if (t62 != 5362513320LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = INT16_MIN;
	static uint8_t x294 = UINT8_MAX;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = INT8_MAX;
	volatile int32_t t63 = -3491600;

	t63 = (x293*(x294^(x295<x296)));

	if (t63 != -8355840) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x297 = 229803433860026305LLU;
	int16_t x298 = INT16_MIN;
	int8_t x299 = 3;
	uint64_t x300 = 7109LLU;

	t64 = (x297*(x298^(x299<x300)));

	if (t64 != 14749208855724675009LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x301 = INT64_MAX;
	uint64_t x302 = UINT64_MAX;
	static uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MAX;
	volatile uint64_t t65 = 3772053048568814802LLU;

	t65 = (x301*(x302^(x303<x304)));

	if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = -7;
	int32_t x308 = 31;
	static int32_t t66 = 399146;

	t66 = (x305*(x306^(x307<x308)));

	if (t66 != 229376) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x313 = 44078569LLU;
	static volatile uint32_t x314 = 99U;
	int8_t x315 = INT8_MIN;
	volatile int8_t x316 = INT8_MIN;
	static volatile uint64_t t67 = 4077055LLU;

	t67 = (x313*(x314^(x315<x316)));

	if (t67 != 4363778331LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = -1LL;
	int64_t x322 = INT64_MIN;
	static volatile uint16_t x323 = 162U;
	uint64_t x324 = 680326LLU;

	t68 = (x321*(x322^(x323<x324)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = INT8_MIN;
	uint8_t x326 = 3U;
	static volatile int64_t x327 = INT64_MIN;
	static volatile int32_t t69 = -4385;

	t69 = (x325*(x326^(x327<x328)));

	if (t69 != -256) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x329 = -1LL;
	static int16_t x330 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int64_t t70 = -6282820611255LL;

	t70 = (x329*(x330^(x331<x332)));

	if (t70 != 32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x345 = 1174899085U;
	volatile uint32_t t71 = 44167U;

	t71 = (x345*(x346^(x347<x348)));

	if (t71 != 2168523149U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x350 = UINT64_MAX;
	uint64_t t72 = 270666861LLU;

	t72 = (x349*(x350^(x351<x352)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x353 = INT8_MIN;
	int32_t x355 = 12;
	static uint32_t x356 = 1677849445U;
	uint64_t t73 = 434LLU;

	t73 = (x353*(x354^(x355<x356)));

	if (t73 != 18446744073709505536LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x357 = UINT8_MAX;
	uint16_t x358 = 2U;
	static volatile uint8_t x359 = 3U;
	static uint32_t x360 = 448160317U;
	int32_t t74 = -19635409;

	t74 = (x357*(x358^(x359<x360)));

	if (t74 != 765) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = 166;
	static uint16_t x362 = 90U;
	uint64_t x363 = UINT64_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t75 = 245;

	t75 = (x361*(x362^(x363<x364)));

	if (t75 != 14940) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	static int8_t x371 = INT8_MAX;
	int64_t x372 = INT64_MAX;
	static uint32_t t76 = 1310U;

	t76 = (x369*(x370^(x371<x372)));

	if (t76 != 2U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x373 = -1LL;
	int16_t x374 = 28;
	int8_t x375 = 0;
	int8_t x376 = 2;
	int64_t t77 = -2203439586266LL;

	t77 = (x373*(x374^(x375<x376)));

	if (t77 != -29LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x377 = UINT64_MAX;
	int32_t x378 = -564877722;
	uint64_t x379 = 187820546615989890LLU;
	int32_t x380 = INT32_MIN;
	static uint64_t t78 = 86135438LLU;

	t78 = (x377*(x378^(x379<x380)));

	if (t78 != 564877721LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x381 = 2808U;
	uint16_t x382 = 29408U;
	uint16_t x383 = UINT16_MAX;
	volatile int32_t t79 = 17752324;

	t79 = (x381*(x382^(x383<x384)));

	if (t79 != 82577664) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x390 = -1372;
	int16_t x391 = INT16_MAX;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t80 = 526;

	t80 = (x389*(x390^(x391<x392)));

	if (t80 != 1372) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x393 = 149U;
	static int8_t x394 = INT8_MIN;
	uint16_t x395 = 45U;
	static int16_t x396 = INT16_MAX;
	volatile int32_t t81 = -283612247;

	t81 = (x393*(x394^(x395<x396)));

	if (t81 != -18923) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x398 = 4729U;
	int32_t x399 = 175685;

	t82 = (x397*(x398^(x399<x400)));

	if (t82 != 100495979) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x413 = 0U;
	int8_t x414 = 15;
	int8_t x415 = INT8_MIN;
	int8_t x416 = -1;
	int32_t t83 = -31489;

	t83 = (x413*(x414^(x415<x416)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t t84 = 88;

	t84 = (x421*(x422^(x423<x424)));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x425 = INT8_MAX;
	volatile uint64_t x426 = 447981LLU;
	uint8_t x428 = 1U;

	t85 = (x425*(x426^(x427<x428)));

	if (t85 != 56893587LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x430 = 14764582169694597LLU;
	static uint64_t x431 = 226918267953440937LLU;
	uint64_t x432 = 50490118452LLU;
	static uint64_t t86 = 11970LLU;

	t86 = (x429*(x430^(x431<x432)));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x436 = 193LL;
	uint64_t t87 = 99572056759885561LLU;

	t87 = (x433*(x434^(x435<x436)));

	if (t87 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x441 = UINT8_MAX;
	uint32_t x442 = 50989U;
	int8_t x443 = 0;
	uint64_t x444 = UINT64_MAX;

	t88 = (x441*(x442^(x443<x444)));

	if (t88 != 13001940U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x446 = 214U;
	uint32_t x448 = 748038193U;
	int32_t t89 = -65389952;

	t89 = (x445*(x446^(x447<x448)));

	if (t89 != -7012352) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x453 = 5;
	uint8_t x454 = 62U;
	int8_t x455 = INT8_MIN;
	int64_t x456 = -1LL;
	static volatile int32_t t90 = 1;

	t90 = (x453*(x454^(x455<x456)));

	if (t90 != 315) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x457 = 1U;
	int32_t x459 = INT32_MIN;
	static volatile int32_t t91 = INT32_MIN;

	t91 = (x457*(x458^(x459<x460)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x461 = 4781792178418063721LLU;
	static uint32_t x462 = UINT32_MAX;
	volatile uint64_t t92 = 29370LLU;

	t92 = (x461*(x462^(x463<x464)));

	if (t92 != 8502025073738540695LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x466 = INT16_MIN;
	static int64_t x467 = -1LL;
	static uint8_t x468 = UINT8_MAX;
	volatile int32_t t93 = 1036;

	t93 = (x465*(x466^(x467<x468)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x469 = UINT8_MAX;
	static volatile int8_t x470 = -1;
	static volatile int16_t x471 = INT16_MIN;
	uint32_t x472 = 277U;

	t94 = (x469*(x470^(x471<x472)));

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x477 = 3;
	volatile int64_t x478 = -7449615236619LL;
	static uint64_t x479 = 62147405313307368LLU;
	int16_t x480 = INT16_MIN;
	int64_t t95 = -253002258076210689LL;

	t95 = (x477*(x478^(x479<x480)));

	if (t95 != -22348845709860LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x481 = INT16_MIN;
	int64_t x482 = -1LL;
	volatile int16_t x484 = -24;
	volatile int64_t t96 = -2167459145065LL;

	t96 = (x481*(x482^(x483<x484)));

	if (t96 != 32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x485 = -1LL;
	int8_t x488 = -1;
	int64_t t97 = 24815229LL;

	t97 = (x485*(x486^(x487<x488)));

	if (t97 != 32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x493 = UINT8_MAX;
	int8_t x494 = -3;
	int64_t x495 = 6LL;
	static volatile uint8_t x496 = 0U;
	volatile int32_t t98 = -1;

	t98 = (x493*(x494^(x495<x496)));

	if (t98 != -765) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x497 = -1;
	uint8_t x498 = UINT8_MAX;
	int64_t x499 = INT64_MAX;
	static int8_t x500 = -1;
	int32_t t99 = 7282;

	t99 = (x497*(x498^(x499<x500)));

	if (t99 != -255) { NG(); } else { ; }
	
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

