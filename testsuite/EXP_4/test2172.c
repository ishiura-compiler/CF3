#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
int16_t x6 = -1;
volatile uint16_t x7 = 14U;
volatile int64_t t2 = 17084041358LL;
volatile int32_t t3 = -24;
int64_t x19 = INT64_MAX;
int64_t t4 = 1211135005311LL;
uint16_t x23 = UINT16_MAX;
static volatile int32_t x24 = INT32_MAX;
volatile int16_t x30 = -718;
uint8_t x33 = 29U;
int64_t t8 = 3406525788471LL;
int32_t x42 = INT32_MAX;
volatile uint32_t t10 = 451869755U;
static volatile int8_t x53 = -1;
volatile uint64_t t12 = 158762336588050758LLU;
int8_t x58 = 58;
static int64_t t13 = 1797LL;
uint64_t x62 = UINT64_MAX;
uint16_t x69 = 5U;
static volatile int16_t x73 = INT16_MIN;
int64_t x74 = 353LL;
static int64_t x79 = INT64_MAX;
static volatile int8_t x86 = INT8_MAX;
volatile uint8_t x99 = UINT8_MAX;
volatile int8_t x112 = 2;
uint16_t x115 = UINT16_MAX;
uint64_t t26 = 124895992319203606LLU;
int32_t x120 = -1;
uint32_t t27 = 17301004U;
volatile int64_t x130 = 717493356550758228LL;
static uint8_t x132 = UINT8_MAX;
uint64_t t30 = 127629703551166LLU;
static int32_t x133 = INT32_MIN;
int32_t x137 = 21963062;
int32_t x138 = -1;
int32_t x140 = INT32_MAX;
int64_t x142 = -3LL;
uint32_t x143 = UINT32_MAX;
static volatile uint16_t x148 = 20U;
uint32_t t34 = 812U;
static int64_t t36 = 13583980023LL;
volatile int8_t x164 = -1;
uint32_t x177 = 6557636U;
uint16_t x183 = 955U;
int64_t x186 = -27056261086LL;
int16_t x189 = INT16_MAX;
uint16_t x197 = 11474U;
static volatile int8_t x198 = INT8_MAX;
volatile int16_t x215 = INT16_MIN;
uint32_t t50 = 56801U;
int32_t x219 = INT32_MIN;
int32_t x220 = -1;
static int32_t x229 = -1;
int32_t x239 = INT32_MIN;
uint32_t x244 = 1637580920U;
int32_t x250 = 6179953;
volatile uint64_t t61 = 1854149254066347LLU;
volatile uint64_t t62 = 42LLU;
int64_t x265 = -1LL;
uint8_t x266 = 8U;
int64_t t63 = 116860775LL;
static int64_t x269 = INT64_MIN;
int16_t x273 = 6322;
uint32_t x283 = UINT32_MAX;
static volatile int64_t t66 = -20LL;
uint64_t x295 = 10LLU;
volatile int32_t x300 = INT32_MIN;
int16_t x301 = -2;
int64_t x302 = INT64_MAX;
volatile int64_t t71 = 595891LL;
static int16_t x311 = -1;
int64_t t73 = -25976504092830LL;
int64_t x315 = 1445831027LL;
int64_t t74 = 0LL;
volatile int16_t x319 = INT16_MAX;
volatile int64_t t75 = 1106843548143281119LL;
volatile int16_t x323 = INT16_MAX;
volatile uint32_t x325 = 423344U;
int64_t x330 = -13296904LL;
volatile uint64_t x335 = 7331364580LLU;
static volatile uint64_t t79 = 52540130811820552LLU;
uint32_t x352 = 3739036U;
static volatile uint64_t t82 = 55228627383183LLU;
volatile uint16_t x359 = 2U;
uint32_t t84 = 853899U;
volatile int32_t x367 = -1;
volatile int8_t x370 = -1;
static uint16_t x374 = UINT16_MAX;
int8_t x382 = 0;
int8_t x383 = INT8_MIN;
static volatile int32_t t90 = 0;
volatile uint64_t x391 = 116208921LLU;
static int32_t x392 = INT32_MIN;
static uint8_t x400 = 1U;
int32_t x402 = INT32_MIN;
int64_t x406 = -1LL;
volatile int64_t x410 = INT64_MIN;
int64_t x415 = -3953LL;
int8_t x417 = -1;
uint64_t x420 = UINT64_MAX;


void f0(void) {
	volatile int32_t x1 = -1328898;
	volatile uint32_t x2 = UINT32_MAX;
	int16_t x3 = 15212;
	int8_t x4 = -1;
	volatile uint32_t t0 = 855417U;

	t0 = (x1+(x2|(x3^x4)));

	if (t0 != 4293638397U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x8 = INT8_MAX;
	int32_t t1 = 90;

	t1 = (x5+(x6|(x7^x8)));

	if (t1 != -32769) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 45U;
	int32_t x10 = INT32_MIN;
	uint16_t x11 = 1U;
	volatile int64_t x12 = INT64_MIN;

	t2 = (x9+(x10|(x11^x12)));

	if (t2 != -2147483602LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 7178;
	volatile int8_t x14 = 1;
	uint8_t x15 = 118U;
	int8_t x16 = INT8_MIN;

	t3 = (x13+(x14|(x15^x16)));

	if (t3 != 7169) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x18 = INT32_MAX;
	static int32_t x20 = -1349;

	t4 = (x17+(x18|(x19^x20)));

	if (t4 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 26439U;
	uint32_t x22 = 19765900U;
	static volatile uint32_t t5 = 1792425U;

	t5 = (x21+(x22|(x23^x24)));

	if (t5 != 2147484115U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -2;
	int16_t x26 = 1365;
	static int64_t x27 = -1LL;
	static uint32_t x28 = UINT32_MAX;
	volatile int64_t t6 = -4818990LL;

	t6 = (x25+(x26|(x27^x28)));

	if (t6 != -4294965933LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -5209;
	static int32_t x31 = -12993;
	int16_t x32 = -3902;
	int32_t t7 = -717972156;

	t7 = (x29+(x30|(x31^x32)));

	if (t7 != -5722) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1089000;
	volatile int64_t x35 = INT64_MIN;
	int32_t x36 = -75;

	t8 = (x33+(x34|(x35^x36)));

	if (t8 != -38LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = 0;
	uint64_t x43 = 5176556657LLU;
	int64_t x44 = -1LL;
	volatile uint64_t t9 = 3276483400LLU;

	t9 = (x41+(x42|(x43^x44)));

	if (t9 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	volatile uint32_t x47 = 13U;
	int16_t x48 = -1;

	t10 = (x45+(x46|(x47^x48)));

	if (t10 != 4294967154U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = INT64_MIN;
	volatile int16_t x50 = 27;
	int8_t x51 = INT8_MIN;
	uint32_t x52 = 2U;
	int64_t t11 = -12159499LL;

	t11 = (x49+(x50|(x51^x52)));

	if (t11 != -9223372032559808613LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x54 = 1204025855U;
	int16_t x55 = INT16_MAX;
	uint64_t x56 = UINT64_MAX;

	t12 = (x53+(x54|(x55^x56)));

	if (t12 != 18446744073709550078LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = 125642U;
	uint32_t x59 = 1025023702U;
	static int64_t x60 = INT64_MIN;

	t13 = (x57+(x58|(x59^x60)));

	if (t13 != -9223372035829626424LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x61 = -1;
	int16_t x63 = INT16_MIN;
	volatile uint64_t x64 = UINT64_MAX;
	uint64_t t14 = 30538009LLU;

	t14 = (x61+(x62|(x63^x64)));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t15 = -59446;

	t15 = (x65+(x66|(x67^x68)));

	if (t15 != -129) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = -1;
	uint32_t x71 = 5U;
	static uint8_t x72 = 6U;
	volatile uint32_t t16 = 87296U;

	t16 = (x69+(x70|(x71^x72)));

	if (t16 != 4U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t17 = 30511400394LLU;

	t17 = (x73+(x74|(x75^x76)));

	if (t17 != 2147450879LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MAX;
	int16_t x78 = INT16_MAX;
	volatile int8_t x80 = INT8_MIN;
	static volatile int64_t t18 = -1796789624552618146LL;

	t18 = (x77+(x78|(x79^x80)));

	if (t18 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 228154;
	volatile uint8_t x87 = 30U;
	volatile int16_t x88 = 0;
	int32_t t19 = 5;

	t19 = (x85+(x86|(x87^x88)));

	if (t19 != 228281) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = 2;
	int32_t x90 = INT32_MAX;
	int64_t x91 = -1LL;
	uint8_t x92 = 41U;
	volatile int64_t t20 = 713259490912LL;

	t20 = (x89+(x90|(x91^x92)));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = 1;
	int16_t x94 = INT16_MAX;
	static int8_t x95 = -1;
	static int8_t x96 = -5;
	volatile int32_t t21 = 342;

	t21 = (x93+(x94|(x95^x96)));

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -7708;
	uint32_t x98 = 5915950U;
	int8_t x100 = INT8_MIN;
	volatile uint32_t t22 = 5819468U;

	t22 = (x97+(x98|(x99^x100)));

	if (t22 != 4294959459U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x101 = INT16_MIN;
	int8_t x102 = 12;
	uint16_t x103 = 1418U;
	uint16_t x104 = 0U;
	int32_t t23 = -247275329;

	t23 = (x101+(x102|(x103^x104)));

	if (t23 != -31346) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	uint8_t x106 = 46U;
	int32_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t24 = 386;

	t24 = (x105+(x106|(x107^x108)));

	if (t24 != 32894) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x109 = 9U;
	static int32_t x110 = INT32_MIN;
	uint64_t x111 = 389456100579086403LLU;
	volatile uint64_t t25 = 125866999636612LLU;

	t25 = (x109+(x110|(x111^x112)));

	if (t25 != 18446744071874547786LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 157629999316710LLU;
	int64_t x114 = INT64_MAX;
	static int64_t x116 = INT64_MIN;

	t26 = (x113+(x114|(x115^x116)));

	if (t26 != 157629999316709LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = INT32_MIN;
	uint32_t x118 = 1U;
	uint16_t x119 = UINT16_MAX;

	t27 = (x117+(x118|(x119^x120)));

	if (t27 != 2147418113U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 3U;
	int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MAX;
	int32_t x124 = -119550;
	static volatile int32_t t28 = 28143;

	t28 = (x121+(x122|(x123^x124)));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x125 = 10968050269031966LLU;
	volatile int8_t x126 = INT8_MIN;
	int32_t x127 = -1;
	volatile int32_t x128 = -114539;
	uint64_t t29 = 103997220LLU;

	t29 = (x125+(x126|(x127^x128)));

	if (t29 != 10968050269031944LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x129 = 3LLU;
	uint16_t x131 = 109U;

	t30 = (x129+(x130|(x131^x132)));

	if (t30 != 717493356550758361LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x134 = 7U;
	volatile int32_t x135 = -13;
	volatile int32_t x136 = -1;
	volatile int32_t t31 = -1;

	t31 = (x133+(x134|(x135^x136)));

	if (t31 != -2147483633) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x139 = -59;
	int32_t t32 = 31;

	t32 = (x137+(x138|(x139^x140)));

	if (t32 != 21963061) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x141 = 209209U;
	int64_t x144 = 10566974855837LL;
	int64_t t33 = -145007LL;

	t33 = (x141+(x142|(x143^x144)));

	if (t33 != 209208LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int8_t x146 = INT8_MIN;
	static uint16_t x147 = UINT16_MAX;

	t34 = (x145+(x146|(x147^x148)));

	if (t34 != 4294967274U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MIN;
	int32_t x150 = -1;
	int8_t x151 = -1;
	uint64_t x152 = 110985877141078054LLU;
	volatile uint64_t t35 = 196029359LLU;

	t35 = (x149+(x150|(x151^x152)));

	if (t35 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = -1LL;
	int8_t x154 = -1;
	int8_t x155 = INT8_MIN;
	volatile int8_t x156 = INT8_MIN;

	t36 = (x153+(x154|(x155^x156)));

	if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -1;
	int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	int8_t x160 = 10;
	volatile int64_t t37 = 139521540377156354LL;

	t37 = (x157+(x158|(x159^x160)));

	if (t37 != -2147483639LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = 1485;
	volatile int64_t x162 = INT64_MIN;
	int16_t x163 = -1;
	int64_t t38 = -101036857790005390LL;

	t38 = (x161+(x162|(x163^x164)));

	if (t38 != -9223372036854774323LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = 14433LL;
	int64_t x166 = 38510836794050602LL;
	volatile uint16_t x167 = 212U;
	static int16_t x168 = -1425;
	static int64_t t39 = -85LL;

	t39 = (x165+(x166|(x167^x168)));

	if (t39 != 13084LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x173 = -1;
	int16_t x174 = INT16_MAX;
	int16_t x175 = -869;
	int32_t x176 = INT32_MAX;
	volatile int32_t t40 = -23988;

	t40 = (x173+(x174|(x175^x176)));

	if (t40 != -2147450882) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x178 = INT32_MIN;
	int32_t x179 = -151;
	int64_t x180 = INT64_MAX;
	int64_t t41 = -118518345784LL;

	t41 = (x177+(x178|(x179^x180)));

	if (t41 != -2140925862LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x181 = 7U;
	volatile uint32_t x182 = 281321662U;
	int16_t x184 = INT16_MIN;
	uint32_t t42 = 30728681U;

	t42 = (x181+(x182|(x183^x184)));

	if (t42 != 4294943686U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	int16_t x187 = 2775;
	static uint64_t x188 = 165623752384832445LLU;
	uint64_t t43 = 33LLU;

	t43 = (x185+(x186|(x187^x188)));

	if (t43 != 18446744062960859498LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	volatile int32_t t44 = -101267;

	t44 = (x189+(x190|(x191^x192)));

	if (t44 != 32639) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -9637;
	uint8_t x194 = 2U;
	uint32_t x195 = UINT32_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t45 = 109U;

	t45 = (x193+(x194|(x195^x196)));

	if (t45 != 4294957661U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x199 = 128990350668728558LL;
	uint16_t x200 = 869U;
	int64_t t46 = 54448LL;

	t46 = (x197+(x198|(x199^x200)));

	if (t46 != 128990350668740817LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = INT64_MAX;
	int16_t x202 = -1;
	int64_t x203 = -1LL;
	int32_t x204 = -1;
	static volatile int64_t t47 = -4134978206920569994LL;

	t47 = (x201+(x202|(x203^x204)));

	if (t47 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 0;
	int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MIN;
	uint8_t x208 = 1U;
	int32_t t48 = -1;

	t48 = (x205+(x206|(x207^x208)));

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = UINT16_MAX;
	static uint8_t x210 = 13U;
	uint64_t x211 = 45LLU;
	uint32_t x212 = 236U;
	volatile uint64_t t49 = 143318939396659881LLU;

	t49 = (x209+(x210|(x211^x212)));

	if (t49 != 65740LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -1;
	static uint32_t x214 = UINT32_MAX;
	uint8_t x216 = 21U;

	t50 = (x213+(x214|(x215^x216)));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = 170955U;
	int8_t x218 = INT8_MIN;
	uint32_t t51 = 2090020429U;

	t51 = (x217+(x218|(x219^x220)));

	if (t51 != 170954U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = UINT16_MAX;
	static int32_t x222 = 151;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = 1U;
	volatile uint64_t t52 = 488647481364528258LLU;

	t52 = (x221+(x222|(x223^x224)));

	if (t52 != 65534LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x226 = INT64_MAX;
	uint64_t x227 = 28659013185896LLU;
	int32_t x228 = INT32_MIN;
	uint64_t t53 = 803628309LLU;

	t53 = (x225+(x226|(x227^x228)));

	if (t53 != 4294967294LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x230 = -1;
	int32_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t54 = 48804;

	t54 = (x229+(x230|(x231^x232)));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x233 = -59;
	int8_t x234 = -1;
	int64_t x235 = -1LL;
	int16_t x236 = -1;
	int64_t t55 = -80113743LL;

	t55 = (x233+(x234|(x235^x236)));

	if (t55 != -60LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x237 = UINT32_MAX;
	int8_t x238 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;
	static volatile uint32_t t56 = 5236U;

	t56 = (x237+(x238|(x239^x240)));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x241 = 1U;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = -5251;
	static uint32_t t57 = 1862U;

	t57 = (x241+(x242|(x243^x244)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MAX;
	int16_t x247 = -8;
	uint16_t x248 = 21U;
	volatile int32_t t58 = -66741367;

	t58 = (x245+(x246|(x247^x248)));

	if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = 10U;
	int32_t x251 = INT32_MIN;
	static volatile int32_t x252 = INT32_MAX;
	static int32_t t59 = 2592056;

	t59 = (x249+(x250|(x251^x252)));

	if (t59 != 9) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = 201830LLU;
	static uint16_t x254 = 205U;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = 7302823LLU;
	volatile uint64_t t60 = 264641492LLU;

	t60 = (x253+(x254|(x255^x256)));

	if (t60 != 18446744073702474581LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 4U;
	uint64_t x258 = 262351257198046416LLU;
	uint8_t x259 = 0U;
	uint16_t x260 = 38U;

	t61 = (x257+(x258|(x259^x260)));

	if (t61 != 262351257198046458LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MAX;
	static uint64_t x262 = UINT64_MAX;
	static uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MAX;

	t62 = (x261+(x262|(x263^x264)));

	if (t62 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x267 = 55269980U;
	uint8_t x268 = UINT8_MAX;

	t63 = (x265+(x266|(x267^x268)));

	if (t63 != 55270058LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x270 = 4;
	uint32_t x271 = 48U;
	static volatile int16_t x272 = 1;
	int64_t t64 = 4984LL;

	t64 = (x269+(x270|(x271^x272)));

	if (t64 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x274 = INT32_MIN;
	static int64_t x275 = 14LL;
	volatile int16_t x276 = 346;
	volatile int64_t t65 = 2256513706109263322LL;

	t65 = (x273+(x274|(x275^x276)));

	if (t65 != -2147476986LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x281 = 354783062U;
	int64_t x282 = 53245110097935LL;
	uint32_t x284 = 872625U;

	t66 = (x281+(x282|(x283^x284)));

	if (t66 != 53249359302309LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = -1;
	static int16_t x286 = INT16_MAX;
	static int16_t x287 = INT16_MIN;
	static uint64_t x288 = 954LLU;
	volatile uint64_t t67 = 7934793218542064572LLU;

	t67 = (x285+(x286|(x287^x288)));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = -1;
	volatile uint64_t x290 = UINT64_MAX;
	static uint32_t x291 = 206430643U;
	int16_t x292 = INT16_MAX;
	uint64_t t68 = 1006731484015085LLU;

	t68 = (x289+(x290|(x291^x292)));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 813404U;
	int8_t x294 = 12;
	uint8_t x296 = 13U;
	uint64_t t69 = 665979938453003505LLU;

	t69 = (x293+(x294|(x295^x296)));

	if (t69 != 813419LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = INT16_MIN;
	volatile int32_t x298 = INT32_MAX;
	volatile int16_t x299 = -1825;
	int32_t t70 = -1310;

	t70 = (x297+(x298|(x299^x300)));

	if (t70 != 2147450879) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x303 = -1;
	volatile uint32_t x304 = UINT32_MAX;

	t71 = (x301+(x302|(x303^x304)));

	if (t71 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x305 = 7U;
	int16_t x306 = -1;
	uint64_t x307 = UINT64_MAX;
	uint16_t x308 = 7986U;
	uint64_t t72 = 1568300727LLU;

	t72 = (x305+(x306|(x307^x308)));

	if (t72 != 6LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = 494890077613326361LL;
	int32_t x310 = INT32_MAX;
	uint8_t x312 = 5U;

	t73 = (x309+(x310|(x311^x312)));

	if (t73 != 494890077613326360LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MIN;
	volatile uint8_t x314 = UINT8_MAX;
	int16_t x316 = -345;

	t74 = (x313+(x314|(x315^x316)));

	if (t74 != -1445863425LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = 2076520502LL;
	static uint32_t x318 = UINT32_MAX;
	static uint32_t x320 = UINT32_MAX;

	t75 = (x317+(x318|(x319^x320)));

	if (t75 != 6371487797LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x321 = 963547U;
	static uint64_t x322 = 283592LLU;
	static uint64_t x324 = 1906827263227774651LLU;
	volatile uint64_t t76 = 9450LLU;

	t76 = (x321+(x322|(x323^x324)));

	if (t76 != 1906827263229013927LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x326 = 32744U;
	uint32_t x327 = 442105U;
	uint32_t x328 = 1960849194U;
	static volatile uint32_t t77 = 138559737U;

	t77 = (x325+(x326|(x327^x328)));

	if (t77 != 1961719211U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = -1;
	int64_t x331 = INT64_MAX;
	static uint16_t x332 = UINT16_MAX;
	static int64_t t78 = 803121652800618LL;

	t78 = (x329+(x330|(x331^x332)));

	if (t78 != -58633LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -1;
	static int32_t x334 = -1;
	static int16_t x336 = INT16_MIN;

	t79 = (x333+(x334|(x335^x336)));

	if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x341 = UINT8_MAX;
	static int8_t x342 = INT8_MIN;
	uint16_t x343 = 6U;
	int64_t x344 = 55LL;
	int64_t t80 = -53642735848LL;

	t80 = (x341+(x342|(x343^x344)));

	if (t80 != 176LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	volatile int32_t x346 = INT32_MAX;
	int64_t x347 = -580041929801235LL;
	int32_t x348 = -597;
	int64_t t81 = 482446LL;

	t81 = (x345+(x346|(x347^x348)));

	if (t81 != 580043923259263LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	static int16_t x350 = -237;
	volatile uint64_t x351 = 1786LLU;

	t82 = (x349+(x350|(x351^x352)));

	if (t82 != 18446744073709518711LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x353 = 86U;
	static volatile int64_t x354 = -417270395015LL;
	static uint8_t x355 = 104U;
	uint8_t x356 = 58U;
	int64_t t83 = 15515988344LL;

	t83 = (x353+(x354|(x355^x356)));

	if (t83 != -417270394927LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x357 = 83U;
	static int8_t x358 = -1;
	int8_t x360 = INT8_MIN;

	t84 = (x357+(x358|(x359^x360)));

	if (t84 != 82U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = 3U;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -1;
	static uint64_t x364 = 809532740LLU;
	volatile uint64_t t85 = 536131774LLU;

	t85 = (x361+(x362|(x363^x364)));

	if (t85 != 18446744073709519550LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x365 = -1;
	uint64_t x366 = UINT64_MAX;
	int8_t x368 = INT8_MIN;
	static uint64_t t86 = 19308627694LLU;

	t86 = (x365+(x366|(x367^x368)));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MAX;
	int8_t x371 = -6;
	static int16_t x372 = INT16_MAX;
	volatile int64_t t87 = 37LL;

	t87 = (x369+(x370|(x371^x372)));

	if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x373 = 84U;
	uint64_t x375 = UINT64_MAX;
	volatile int8_t x376 = INT8_MAX;
	uint64_t t88 = 9382LLU;

	t88 = (x373+(x374|(x375^x376)));

	if (t88 != 83LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x377 = 100LLU;
	volatile int16_t x378 = -5;
	uint64_t x379 = UINT64_MAX;
	volatile int64_t x380 = -67LL;
	static volatile uint64_t t89 = 25LLU;

	t89 = (x377+(x378|(x379^x380)));

	if (t89 != 95LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = INT32_MIN;
	int32_t x384 = INT32_MIN;

	t90 = (x381+(x382|(x383^x384)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x386 = UINT32_MAX;
	static int8_t x387 = -1;
	int8_t x388 = -27;
	volatile uint64_t t91 = 946963LLU;

	t91 = (x385+(x386|(x387^x388)));

	if (t91 != 4294967294LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = INT16_MAX;
	static int64_t x390 = INT64_MAX;
	volatile uint64_t t92 = 428367583092139077LLU;

	t92 = (x389+(x390|(x391^x392)));

	if (t92 != 32766LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x393 = 16117U;
	int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MIN;
	static volatile int16_t x396 = -1;
	static int64_t t93 = -1192968224175213149LL;

	t93 = (x393+(x394|(x395^x396)));

	if (t93 != 16116LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x397 = 3U;
	static uint32_t x398 = 183913873U;
	int8_t x399 = INT8_MIN;
	uint32_t t94 = 676735U;

	t94 = (x397+(x398|(x399^x400)));

	if (t94 != 4294967188U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = 5698471803335LLU;
	volatile int8_t x403 = INT8_MIN;
	volatile int16_t x404 = -1;
	static uint64_t t95 = 8024989787920132686LLU;

	t95 = (x401+(x402|(x403^x404)));

	if (t95 != 5696324319814LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x405 = -1;
	volatile int64_t x407 = INT64_MAX;
	static int8_t x408 = -1;
	int64_t t96 = 2513099399821LL;

	t96 = (x405+(x406|(x407^x408)));

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = INT8_MAX;
	volatile int16_t x411 = 49;
	uint8_t x412 = 56U;
	static volatile int64_t t97 = -3274514415074438LL;

	t97 = (x409+(x410|(x411^x412)));

	if (t97 != -9223372036854775672LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = -386596;
	uint16_t x414 = 1710U;
	static uint64_t x416 = 1516801524742971203LLU;
	static uint64_t t98 = 5472764417358153016LLU;

	t98 = (x413+(x414|(x415^x416)));

	if (t98 != 16929942548966197706LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x418 = -1;
	int16_t x419 = 1;
	uint64_t t99 = 150386933LLU;

	t99 = (x417+(x418|(x419^x420)));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

