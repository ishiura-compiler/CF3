#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 22703399265443LLU;
static int16_t x4 = INT16_MAX;
int32_t x5 = INT32_MIN;
volatile int32_t x9 = INT32_MAX;
int32_t t2 = 902524748;
volatile int32_t t3 = -620988053;
int8_t x51 = INT8_MIN;
static int8_t x56 = INT8_MIN;
volatile int32_t t12 = -1;
int16_t x74 = INT16_MIN;
volatile int32_t x76 = -1;
volatile int32_t t15 = 386457432;
volatile int64_t x77 = INT64_MIN;
int8_t x82 = INT8_MAX;
volatile uint64_t x83 = 28210224288573058LLU;
int8_t x87 = -1;
volatile int32_t x88 = 24;
static uint32_t x94 = 5265U;
volatile int32_t t19 = -7425317;
volatile uint16_t x99 = 1021U;
static int64_t x106 = -2557400683028LL;
int32_t t22 = 845556;
volatile int8_t x112 = -1;
static uint64_t x115 = 4381290640322LLU;
static volatile int32_t t24 = 70;
uint8_t x131 = 28U;
volatile uint64_t x143 = UINT64_MAX;
int32_t x146 = INT32_MIN;
int32_t x147 = -1;
volatile int16_t x148 = -8;
static uint32_t x158 = 2056245693U;
static int16_t x159 = INT16_MIN;
uint64_t x164 = 28LLU;
int8_t x166 = 30;
uint64_t x171 = 1004900656713LLU;
uint32_t x172 = UINT32_MAX;
int32_t x175 = -1;
int32_t t37 = 3435896;
int32_t t38 = -30994638;
uint64_t x182 = UINT64_MAX;
volatile int64_t x203 = 473730005LL;
int32_t x209 = INT32_MIN;
uint64_t x212 = 17LLU;
volatile int8_t x216 = 3;
int32_t t47 = 1;
uint8_t x232 = UINT8_MAX;
uint16_t x238 = 20030U;
static uint32_t x240 = 897U;
int16_t x242 = 865;
static uint8_t x244 = UINT8_MAX;
int32_t t55 = 324;
static uint16_t x253 = 81U;
int32_t t57 = 796414;
int32_t t61 = 1400990;
int32_t t62 = 0;
int32_t x284 = INT32_MIN;
int8_t x286 = -1;
volatile int32_t t64 = 678;
int16_t x289 = 10;
int32_t x300 = 55949;
static int32_t x304 = INT32_MAX;
int32_t x305 = -52370321;
int8_t x307 = INT8_MIN;
uint64_t x308 = 21771907084LLU;
uint64_t x317 = 6552LLU;
uint64_t x325 = 58514519161492LLU;
uint8_t x330 = 14U;
int16_t x332 = INT16_MIN;
int32_t t75 = 5883474;
uint8_t x335 = 115U;
int64_t x336 = 222406153391745498LL;
volatile int32_t t76 = 318941;
int32_t x342 = INT32_MIN;
int32_t x348 = 39393240;
int32_t t80 = -28596376;
volatile int32_t t82 = 783;
int8_t x361 = -1;
volatile int64_t x362 = 80308128753607933LL;
int32_t x373 = -1903495;
int64_t x374 = 54541LL;
uint16_t x375 = UINT16_MAX;
int64_t x376 = INT64_MIN;
uint16_t x383 = 35U;
int8_t x384 = -22;
volatile int32_t t87 = -23027;
volatile int16_t x396 = INT16_MIN;
static int32_t t89 = -828876476;
volatile int64_t x402 = -1LL;
static int64_t x408 = -1LL;
uint16_t x414 = 10237U;
static int64_t x415 = INT64_MIN;
int32_t x421 = INT32_MIN;
int64_t x430 = 3310729561LL;
int32_t x431 = -1;
volatile int32_t t97 = 1568;
static uint64_t x440 = UINT64_MAX;
int64_t x441 = -24398423LL;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	int64_t x2 = INT64_MIN;
	int32_t t0 = 12584961;

	t0 = (x1<(x2^(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 26262U;
	volatile int8_t x7 = INT8_MAX;
	static volatile uint16_t x8 = 1114U;
	volatile int32_t t1 = -60021;

	t1 = (x5<(x6^(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 9170468LLU;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;

	t2 = (x9<(x10^(x11+x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 1013U;
	int8_t x16 = INT8_MIN;

	t3 = (x13<(x14^(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static uint32_t x18 = UINT32_MAX;
	static int64_t x19 = 0LL;
	int64_t x20 = 4077668499LL;
	static int32_t t4 = 2729;

	t4 = (x17<(x18^(x19+x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -461923;
	int16_t x34 = INT16_MAX;
	uint16_t x35 = 14U;
	int32_t x36 = -62700;
	volatile int32_t t5 = 46;

	t5 = (x33<(x34^(x35+x36)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x37 = 6U;
	volatile uint64_t x38 = 66359LLU;
	int32_t x39 = INT32_MIN;
	static uint32_t x40 = 262354065U;
	int32_t t6 = 1;

	t6 = (x37<(x38^(x39+x40)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = INT8_MAX;
	static uint8_t x42 = 87U;
	int16_t x43 = INT16_MIN;
	int16_t x44 = INT16_MIN;
	volatile int32_t t7 = 450094;

	t7 = (x41<(x42^(x43+x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x45 = 8939LL;
	int8_t x46 = -1;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MAX;
	volatile int32_t t8 = 0;

	t8 = (x45<(x46^(x47+x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x49 = 8404268U;
	int8_t x50 = INT8_MIN;
	static int32_t x52 = 0;
	volatile int32_t t9 = -2308;

	t9 = (x49<(x50^(x51+x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = INT16_MIN;
	uint8_t x54 = 4U;
	volatile int8_t x55 = 14;
	int32_t t10 = 468;

	t10 = (x53<(x54^(x55+x56)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 116U;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	static int8_t x60 = INT8_MIN;
	int32_t t11 = -62068407;

	t11 = (x57<(x58^(x59+x60)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x61 = 1U;
	int64_t x62 = -1LL;
	int16_t x63 = -1;
	uint16_t x64 = 57U;

	t12 = (x61<(x62^(x63+x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x65 = -1LL;
	int8_t x66 = INT8_MAX;
	int32_t x67 = -1;
	volatile uint16_t x68 = 2U;
	int32_t t13 = -29578;

	t13 = (x65<(x66^(x67+x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x69 = UINT64_MAX;
	static uint32_t x70 = 1515U;
	int64_t x71 = INT64_MIN;
	static int8_t x72 = INT8_MAX;
	volatile int32_t t14 = 5900077;

	t14 = (x69<(x70^(x71+x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MIN;
	uint16_t x75 = 6U;

	t15 = (x73<(x74^(x75+x76)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x78 = INT16_MIN;
	int8_t x79 = -1;
	uint64_t x80 = 191444695747375LLU;
	int32_t t16 = 163070024;

	t16 = (x77<(x78^(x79+x80)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = 235;
	int8_t x84 = INT8_MAX;
	int32_t t17 = 56523529;

	t17 = (x81<(x82^(x83+x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 33U;
	static volatile uint64_t x86 = 133628187LLU;
	int32_t t18 = 67087066;

	t18 = (x85<(x86^(x87+x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 3005782LLU;
	uint64_t x95 = 4588926LLU;
	int16_t x96 = INT16_MAX;

	t19 = (x93<(x94^(x95+x96)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = -1;
	int16_t x98 = 3676;
	int8_t x100 = INT8_MAX;
	static int32_t t20 = 172319150;

	t20 = (x97<(x98^(x99+x100)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	int64_t x102 = -373839037467184923LL;
	uint32_t x103 = 37701U;
	uint16_t x104 = 23U;
	volatile int32_t t21 = 847163;

	t21 = (x101<(x102^(x103+x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = -1205LL;
	int8_t x107 = -1;
	int16_t x108 = INT16_MAX;

	t22 = (x105<(x106^(x107+x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	static int16_t x111 = INT16_MIN;
	static int32_t t23 = -1;

	t23 = (x109<(x110^(x111+x112)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = UINT8_MAX;
	int16_t x114 = -119;
	volatile int16_t x116 = -59;

	t24 = (x113<(x114^(x115+x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x121 = UINT64_MAX;
	int32_t x122 = -1;
	static int8_t x123 = -1;
	volatile uint64_t x124 = 809586LLU;
	volatile int32_t t25 = 60388;

	t25 = (x121<(x122^(x123+x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MAX;
	uint8_t x132 = 2U;
	int32_t t26 = -5;

	t26 = (x129<(x130^(x131+x132)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 3859U;
	uint16_t x134 = 0U;
	int8_t x135 = INT8_MAX;
	int64_t x136 = -13466954133101LL;
	static volatile int32_t t27 = -1601;

	t27 = (x133<(x134^(x135+x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x137 = INT8_MAX;
	static uint64_t x138 = 16LLU;
	int16_t x139 = INT16_MAX;
	int32_t x140 = -1;
	volatile int32_t t28 = 2;

	t28 = (x137<(x138^(x139+x140)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = 249;
	int32_t x144 = -1;
	volatile int32_t t29 = 453028645;

	t29 = (x141<(x142^(x143+x144)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x145 = INT8_MIN;
	int32_t t30 = 0;

	t30 = (x145<(x146^(x147+x148)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x149 = 0U;
	int16_t x150 = INT16_MAX;
	volatile uint16_t x151 = 51U;
	uint32_t x152 = 65U;
	static int32_t t31 = -95651;

	t31 = (x149<(x150^(x151+x152)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = UINT8_MAX;
	uint16_t x156 = UINT16_MAX;
	static volatile int32_t t32 = -706118502;

	t32 = (x153<(x154^(x155+x156)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = 6225;
	volatile uint16_t x160 = 0U;
	static volatile int32_t t33 = 742;

	t33 = (x157<(x158^(x159+x160)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x161 = UINT8_MAX;
	int16_t x162 = INT16_MIN;
	int8_t x163 = 63;
	static volatile int32_t t34 = -60110128;

	t34 = (x161<(x162^(x163+x164)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x165 = 1;
	int8_t x167 = 2;
	int64_t x168 = -1LL;
	volatile int32_t t35 = 738;

	t35 = (x165<(x166^(x167+x168)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MAX;
	int64_t x170 = INT64_MIN;
	volatile int32_t t36 = -507145;

	t36 = (x169<(x170^(x171+x172)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x173 = INT8_MIN;
	int8_t x174 = -30;
	int8_t x176 = -1;

	t37 = (x173<(x174^(x175+x176)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = -1;
	int64_t x178 = 52005201105620640LL;
	volatile int32_t x179 = INT32_MIN;
	volatile uint32_t x180 = 166691U;

	t38 = (x177<(x178^(x179+x180)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = 15;
	int32_t x183 = 83;
	uint16_t x184 = 11405U;
	static volatile int32_t t39 = -254722992;

	t39 = (x181<(x182^(x183+x184)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MAX;
	int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	int64_t x188 = 0LL;
	volatile int32_t t40 = 4;

	t40 = (x185<(x186^(x187+x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MAX;
	volatile int32_t t41 = 586561;

	t41 = (x189<(x190^(x191+x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x193 = INT16_MIN;
	static int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MAX;
	int16_t x196 = -1;
	volatile int32_t t42 = -560;

	t42 = (x193<(x194^(x195+x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = UINT16_MAX;
	volatile int8_t x198 = -1;
	volatile uint8_t x199 = 5U;
	int64_t x200 = -1LL;
	int32_t t43 = -172;

	t43 = (x197<(x198^(x199+x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MIN;
	uint64_t x204 = 30558238LLU;
	int32_t t44 = -27981;

	t44 = (x201<(x202^(x203+x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -1LL;
	uint8_t x206 = 44U;
	static int8_t x207 = -1;
	static volatile int8_t x208 = INT8_MIN;
	int32_t t45 = -10008844;

	t45 = (x205<(x206^(x207+x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x210 = 7U;
	int32_t x211 = -11929;
	int32_t t46 = 0;

	t46 = (x209<(x210^(x211+x212)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = UINT8_MAX;
	uint8_t x214 = UINT8_MAX;
	volatile int64_t x215 = -1LL;

	t47 = (x213<(x214^(x215+x216)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = -9;
	uint64_t x218 = 114157232739LLU;
	uint16_t x219 = 791U;
	uint16_t x220 = UINT16_MAX;
	int32_t t48 = 54;

	t48 = (x217<(x218^(x219+x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x221 = 2774862778399261LL;
	int32_t x222 = INT32_MIN;
	volatile uint64_t x223 = 128LLU;
	volatile int32_t x224 = 234790;
	volatile int32_t t49 = -204280841;

	t49 = (x221<(x222^(x223+x224)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = 34U;
	int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	int32_t x228 = 2206074;
	int32_t t50 = 7671;

	t50 = (x225<(x226^(x227+x228)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = 9795U;
	uint64_t x230 = 15545042LLU;
	static uint64_t x231 = UINT64_MAX;
	int32_t t51 = -9;

	t51 = (x229<(x230^(x231+x232)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = UINT16_MAX;
	volatile int16_t x234 = -1;
	uint32_t x235 = 1090U;
	uint32_t x236 = 1847U;
	int32_t t52 = 9749;

	t52 = (x233<(x234^(x235+x236)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = UINT32_MAX;
	static int16_t x239 = -1;
	int32_t t53 = 32446561;

	t53 = (x237<(x238^(x239+x240)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = 62;
	int16_t x243 = INT16_MIN;
	static volatile int32_t t54 = -7269;

	t54 = (x241<(x242^(x243+x244)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = 6;
	static volatile uint8_t x247 = 3U;
	volatile int8_t x248 = INT8_MIN;

	t55 = (x245<(x246^(x247+x248)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = -50868538;
	int8_t x251 = INT8_MAX;
	uint8_t x252 = 44U;
	static volatile int32_t t56 = -52741358;

	t56 = (x249<(x250^(x251+x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x254 = 6599U;
	int16_t x255 = INT16_MAX;
	volatile uint64_t x256 = UINT64_MAX;

	t57 = (x253<(x254^(x255+x256)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = 13;
	int32_t x258 = INT32_MIN;
	int32_t x259 = -2518;
	int16_t x260 = INT16_MIN;
	int32_t t58 = -345190;

	t58 = (x257<(x258^(x259+x260)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MAX;
	uint8_t x262 = UINT8_MAX;
	static int32_t x263 = INT32_MAX;
	volatile int32_t x264 = -1;
	static int32_t t59 = 603884680;

	t59 = (x261<(x262^(x263+x264)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 29U;
	static int16_t x266 = -1;
	static volatile uint32_t x267 = 0U;
	int64_t x268 = 82232785304041LL;
	volatile int32_t t60 = 132671;

	t60 = (x265<(x266^(x267+x268)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = 109656943LL;
	static volatile int8_t x270 = INT8_MAX;
	int8_t x271 = INT8_MIN;
	int8_t x272 = -1;

	t61 = (x269<(x270^(x271+x272)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x273 = UINT16_MAX;
	static int64_t x274 = INT64_MIN;
	uint64_t x275 = 951279321650074LLU;
	int8_t x276 = INT8_MIN;

	t62 = (x273<(x274^(x275+x276)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = -1;
	int8_t x282 = -14;
	uint32_t x283 = UINT32_MAX;
	volatile int32_t t63 = -2543;

	t63 = (x281<(x282^(x283+x284)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	int8_t x288 = INT8_MAX;

	t64 = (x285<(x286^(x287+x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x290 = INT32_MAX;
	static int16_t x291 = INT16_MAX;
	static uint32_t x292 = 8317U;
	int32_t t65 = 2;

	t65 = (x289<(x290^(x291+x292)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = INT64_MAX;
	volatile uint64_t x294 = UINT64_MAX;
	static uint16_t x295 = 41U;
	static uint32_t x296 = UINT32_MAX;
	static volatile int32_t t66 = -995402581;

	t66 = (x293<(x294^(x295+x296)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x297 = -1;
	int64_t x298 = -1LL;
	uint64_t x299 = 2729417581035383LLU;
	volatile int32_t t67 = -55071218;

	t67 = (x297<(x298^(x299+x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x301 = 739243310853LLU;
	uint32_t x302 = 1296217U;
	int16_t x303 = INT16_MIN;
	volatile int32_t t68 = -43859674;

	t68 = (x301<(x302^(x303+x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x306 = 0U;
	int32_t t69 = 3774230;

	t69 = (x305<(x306^(x307+x308)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MIN;
	int16_t x310 = 9;
	static volatile uint32_t x311 = UINT32_MAX;
	static int32_t x312 = -65;
	volatile int32_t t70 = -15598366;

	t70 = (x309<(x310^(x311+x312)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x313 = 82969268U;
	int16_t x314 = 12850;
	volatile uint16_t x315 = 1419U;
	uint32_t x316 = 1600U;
	int32_t t71 = 619;

	t71 = (x313<(x314^(x315+x316)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x318 = 2517846U;
	int32_t x319 = -132884;
	int16_t x320 = -1;
	volatile int32_t t72 = 3;

	t72 = (x317<(x318^(x319+x320)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x321 = -1798861;
	int64_t x322 = INT64_MIN;
	uint32_t x323 = 3024112U;
	volatile int64_t x324 = 64372LL;
	volatile int32_t t73 = 5;

	t73 = (x321<(x322^(x323+x324)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = INT16_MIN;
	volatile uint8_t x328 = UINT8_MAX;
	volatile int32_t t74 = -123;

	t74 = (x325<(x326^(x327+x328)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x329 = 12;
	uint8_t x331 = UINT8_MAX;

	t75 = (x329<(x330^(x331+x332)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = 55803579574324280LL;
	uint16_t x334 = 1U;

	t76 = (x333<(x334^(x335+x336)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	static volatile int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t77 = -86891;

	t77 = (x337<(x338^(x339+x340)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = -1LL;
	static int64_t x343 = 1252370658539799566LL;
	volatile int64_t x344 = INT64_MIN;
	int32_t t78 = 3885746;

	t78 = (x341<(x342^(x343+x344)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = 73454715LLU;
	int64_t x346 = 1514749611LL;
	uint64_t x347 = 1705770LLU;
	volatile int32_t t79 = -2893;

	t79 = (x345<(x346^(x347+x348)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = -1;
	int32_t x350 = INT32_MAX;
	int64_t x351 = 1413491667429833LL;
	int32_t x352 = 31165;

	t80 = (x349<(x350^(x351+x352)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x353 = 15;
	uint16_t x354 = UINT16_MAX;
	volatile int32_t x355 = -87;
	int16_t x356 = INT16_MIN;
	volatile int32_t t81 = 72;

	t81 = (x353<(x354^(x355+x356)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = UINT8_MAX;
	static int32_t x358 = -1627784;
	int8_t x359 = INT8_MAX;
	static int8_t x360 = INT8_MIN;

	t82 = (x357<(x358^(x359+x360)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x363 = INT16_MIN;
	static volatile uint16_t x364 = 13933U;
	int32_t t83 = 1644;

	t83 = (x361<(x362^(x363+x364)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x369 = UINT32_MAX;
	uint64_t x370 = UINT64_MAX;
	uint8_t x371 = UINT8_MAX;
	uint8_t x372 = 0U;
	volatile int32_t t84 = 438;

	t84 = (x369<(x370^(x371+x372)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t t85 = 135;

	t85 = (x373<(x374^(x375+x376)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x377 = 126401465U;
	static int64_t x378 = -1LL;
	volatile uint8_t x379 = 7U;
	int64_t x380 = -1LL;
	int32_t t86 = 873;

	t86 = (x377<(x378^(x379+x380)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x381 = 7U;
	int16_t x382 = INT16_MIN;

	t87 = (x381<(x382^(x383+x384)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MAX;
	volatile int64_t x390 = INT64_MAX;
	int64_t x391 = -1LL;
	static int8_t x392 = INT8_MAX;
	int32_t t88 = -15690178;

	t88 = (x389<(x390^(x391+x392)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x393 = UINT8_MAX;
	int16_t x394 = -1;
	int16_t x395 = -1;

	t89 = (x393<(x394^(x395+x396)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x397 = -1;
	uint8_t x398 = 2U;
	uint8_t x399 = 86U;
	static uint16_t x400 = 18489U;
	int32_t t90 = 217;

	t90 = (x397<(x398^(x399+x400)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = -1;
	int32_t x403 = 17;
	volatile int16_t x404 = INT16_MAX;
	static int32_t t91 = -24887443;

	t91 = (x401<(x402^(x403+x404)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = 24;
	int32_t x406 = 1715643;
	int32_t x407 = 21;
	volatile int32_t t92 = 49;

	t92 = (x405<(x406^(x407+x408)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x413 = INT16_MIN;
	uint64_t x416 = 80170087LLU;
	int32_t t93 = -31;

	t93 = (x413<(x414^(x415+x416)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = INT32_MAX;
	volatile uint32_t x418 = 2U;
	static volatile uint16_t x419 = 30U;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t94 = 815629;

	t94 = (x417<(x418^(x419+x420)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x422 = -38;
	static int16_t x423 = -1;
	volatile uint64_t x424 = 45904119903LLU;
	int32_t t95 = -1835;

	t95 = (x421<(x422^(x423+x424)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x429 = INT16_MAX;
	uint64_t x432 = 2LLU;
	static int32_t t96 = 3521105;

	t96 = (x429<(x430^(x431+x432)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x433 = INT32_MIN;
	volatile uint8_t x434 = 0U;
	static int16_t x435 = -4269;
	int8_t x436 = 15;

	t97 = (x433<(x434^(x435+x436)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = INT64_MIN;
	static int64_t x438 = INT64_MAX;
	uint16_t x439 = UINT16_MAX;
	int32_t t98 = 1185;

	t98 = (x437<(x438^(x439+x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x442 = -1LL;
	uint16_t x443 = 1001U;
	static int64_t x444 = INT64_MIN;
	volatile int32_t t99 = 683;

	t99 = (x441<(x442^(x443+x444)));

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

