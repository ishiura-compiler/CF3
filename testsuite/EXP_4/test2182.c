#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x8 = INT32_MIN;
int32_t x12 = INT32_MIN;
volatile int64_t t2 = 3072633283LL;
int64_t t3 = 3896378LL;
int16_t x19 = INT16_MIN;
uint16_t x29 = 27084U;
int16_t x32 = INT16_MAX;
volatile uint32_t t7 = 1369157862U;
uint64_t x33 = 1272507417630889134LLU;
volatile int8_t x42 = 25;
uint64_t t13 = 11019213822LLU;
volatile int32_t t14 = 14343611;
int8_t x62 = -4;
uint8_t x66 = UINT8_MAX;
uint16_t x69 = 34U;
uint64_t t17 = 12044LLU;
volatile int64_t t18 = -26609679622453LL;
int8_t x80 = -1;
static uint64_t x81 = UINT64_MAX;
int32_t x89 = INT32_MAX;
int64_t t23 = 280355618321022215LL;
uint64_t x100 = 7505185226493462LLU;
uint16_t x101 = 3U;
int64_t x103 = 149116668008LL;
static int16_t x105 = INT16_MAX;
volatile uint32_t t27 = 3347147U;
uint32_t x116 = 3U;
int64_t x117 = INT64_MAX;
int16_t x122 = -1;
static uint16_t x134 = 4U;
uint16_t x138 = 9U;
uint64_t x140 = UINT64_MAX;
uint64_t t34 = 4442016568086175LLU;
volatile uint64_t t35 = 1LLU;
volatile uint16_t x145 = 1U;
uint16_t x148 = UINT16_MAX;
volatile int64_t t36 = -16563LL;
volatile int32_t x151 = INT32_MIN;
int8_t x152 = -1;
volatile int8_t x155 = 7;
uint64_t x156 = 24405LLU;
int64_t t39 = 0LL;
static int64_t x161 = 438LL;
int32_t x162 = -1;
uint64_t x164 = UINT64_MAX;
int8_t x170 = INT8_MIN;
volatile int64_t t42 = 1075793900334471001LL;
uint64_t x173 = UINT64_MAX;
uint8_t x174 = 107U;
int8_t x179 = INT8_MIN;
volatile uint32_t x180 = 15U;
uint32_t t44 = 184U;
int32_t x181 = INT32_MIN;
int8_t x182 = -1;
int32_t x188 = INT32_MIN;
volatile uint64_t t46 = 11406344020LLU;
uint32_t x191 = 33303U;
int16_t x195 = INT16_MIN;
int8_t x198 = -38;
int16_t x203 = INT16_MIN;
uint32_t t50 = 4823086U;
int16_t x207 = -1;
uint8_t x212 = 19U;
static uint64_t x214 = 2LLU;
volatile int32_t x220 = INT32_MIN;
uint16_t x221 = 12585U;
int64_t x238 = INT64_MIN;
uint16_t x239 = 1U;
static uint16_t x240 = UINT16_MAX;
volatile int16_t x241 = -8162;
static int16_t x245 = -1;
int32_t x246 = INT32_MIN;
int32_t x247 = INT32_MIN;
uint16_t x249 = UINT16_MAX;
volatile int64_t t63 = 167760992239758722LL;
int8_t x260 = 6;
int16_t x268 = 36;
volatile uint32_t x272 = 56087303U;
uint64_t x275 = 589LLU;
uint16_t x282 = 7531U;
int32_t x289 = -59598572;
int32_t x293 = 21482;
int8_t x295 = -1;
volatile int64_t t73 = 204LL;
uint32_t x298 = UINT32_MAX;
volatile uint16_t x299 = 181U;
uint64_t x304 = 5798826859868770034LLU;
int32_t x305 = 21564;
int32_t t76 = -100021900;
volatile uint8_t x318 = 0U;
uint64_t x319 = 499477020103653572LLU;
uint32_t x323 = 1U;
uint8_t x335 = 1U;
static volatile uint64_t x336 = 211821LLU;
static uint32_t x337 = UINT32_MAX;
volatile int32_t x347 = -4004;
int8_t x349 = -28;
volatile int16_t x352 = -1;
int16_t x363 = -1;
int64_t x364 = INT64_MIN;
uint16_t x368 = 435U;
volatile int64_t t91 = -10LL;
volatile int64_t t92 = -21LL;
uint32_t t93 = 8015102U;
uint32_t x382 = 85U;
volatile int64_t t95 = 1690915LL;
int32_t x387 = 3138;
volatile int32_t x389 = INT32_MIN;
uint32_t x396 = 44U;
volatile uint64_t t99 = 2LLU;


void f0(void) {
	static uint16_t x1 = 865U;
	int16_t x2 = -15;
	volatile uint16_t x3 = 2666U;
	static uint8_t x4 = 0U;
	static volatile int32_t t0 = 282071;

	t0 = (x1&(x2|(x3^x4)));

	if (t0 != 865) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 335LLU;
	uint16_t x6 = 25826U;
	int32_t x7 = INT32_MIN;
	volatile uint64_t t1 = 8689578123878539LLU;

	t1 = (x5&(x6|(x7^x8)));

	if (t1 != 66LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = -6425382;
	int64_t x10 = 1644LL;
	static int32_t x11 = -1;

	t2 = (x9&(x10|(x11^x12)));

	if (t2 != 2141058266LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MAX;
	int64_t x14 = INT64_MAX;
	uint16_t x15 = UINT16_MAX;
	static int16_t x16 = -488;

	t3 = (x13&(x14|(x15^x16)));

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 9U;
	int64_t x18 = INT64_MIN;
	uint16_t x20 = 1153U;
	volatile int64_t t4 = -391267LL;

	t4 = (x17&(x18|(x19^x20)));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MIN;
	int16_t x23 = -10504;
	int32_t x24 = 52;
	int32_t t5 = -57567;

	t5 = (x21&(x22|(x23^x24)));

	if (t5 != 65484) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -458;
	int16_t x26 = INT16_MIN;
	static int64_t x27 = INT64_MIN;
	int16_t x28 = 5;
	int64_t t6 = -8048958457768488LL;

	t6 = (x25&(x26|(x27^x28)));

	if (t6 != -32764LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = 17U;
	int32_t x31 = -1;

	t7 = (x29&(x30|(x31^x32)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	static int16_t x35 = -1;
	int32_t x36 = 1;
	volatile uint64_t t8 = 12618936700LLU;

	t8 = (x33&(x34|(x35^x36)));

	if (t8 != 1272507417630889134LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MAX;
	volatile uint64_t x39 = UINT64_MAX;
	int8_t x40 = -19;
	uint64_t t9 = 134LLU;

	t9 = (x37&(x38|(x39^x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	uint64_t x43 = 7721007180585330LLU;
	volatile uint8_t x44 = 62U;
	static uint64_t t10 = 191180109113984LLU;

	t10 = (x41&(x42|(x43^x44)));

	if (t10 != 307140957LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 367U;
	uint32_t x46 = 229698374U;
	static int8_t x47 = -2;
	int16_t x48 = 0;
	uint32_t t11 = 83257U;

	t11 = (x45&(x46|(x47^x48)));

	if (t11 != 366U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 5968U;
	static uint8_t x50 = UINT8_MAX;
	uint8_t x51 = 26U;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 667984640;

	t12 = (x49&(x50|(x51^x52)));

	if (t12 != 80) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	uint32_t x54 = UINT32_MAX;
	int16_t x55 = INT16_MAX;
	volatile uint64_t x56 = 80634667155511737LLU;

	t13 = (x53&(x54|(x55^x56)));

	if (t13 != 2147483647LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 1U;
	int16_t x58 = INT16_MAX;
	volatile uint8_t x59 = UINT8_MAX;
	int16_t x60 = INT16_MAX;

	t14 = (x57&(x58|(x59^x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 41724LL;
	static int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	int64_t t15 = -17036556399LL;

	t15 = (x61&(x62|(x63^x64)));

	if (t15 != 41724LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = 9;
	volatile int16_t x67 = INT16_MIN;
	int8_t x68 = -1;
	volatile int32_t t16 = -8;

	t16 = (x65&(x66|(x67^x68)));

	if (t16 != 9) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	uint64_t x71 = 954LLU;
	volatile int8_t x72 = 0;

	t17 = (x69&(x70|(x71^x72)));

	if (t17 != 34LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	volatile uint32_t x74 = 2U;
	uint16_t x75 = 5U;
	static int8_t x76 = INT8_MIN;

	t18 = (x73&(x74|(x75^x76)));

	if (t18 != 4294967175LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int8_t x78 = 29;
	int16_t x79 = -12357;
	static int32_t t19 = 1818853;

	t19 = (x77&(x78|(x79^x80)));

	if (t19 != 12381) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x82 = 0U;
	volatile uint32_t x83 = 18U;
	uint32_t x84 = UINT32_MAX;
	uint64_t t20 = 2248430LLU;

	t20 = (x81&(x82|(x83^x84)));

	if (t20 != 4294967277LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int16_t x86 = -246;
	static volatile int8_t x87 = INT8_MIN;
	uint32_t x88 = UINT32_MAX;
	volatile uint32_t t21 = 52305U;

	t21 = (x85&(x86|(x87^x88)));

	if (t21 != 4294967167U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = UINT32_MAX;
	volatile uint8_t x91 = 54U;
	int8_t x92 = -10;
	static uint32_t t22 = 45U;

	t22 = (x89&(x90|(x91^x92)));

	if (t22 != 2147483647U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 23642U;
	static int64_t x94 = 17989532587LL;
	uint8_t x95 = UINT8_MAX;
	volatile uint16_t x96 = 25905U;

	t23 = (x93&(x94|(x95^x96)));

	if (t23 != 23626LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -35730822956869LL;
	int8_t x98 = -1;
	volatile uint64_t x99 = 10535LLU;
	volatile uint64_t t24 = 12702223466LLU;

	t24 = (x97&(x98|(x99^x100)));

	if (t24 != 18446708342886594747LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 5;
	int32_t x104 = -3881;
	int64_t t25 = 52801428228LL;

	t25 = (x101&(x102|(x103^x104)));

	if (t25 != 3LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	int16_t x108 = -3;
	static volatile int32_t t26 = -12538;

	t26 = (x105&(x106|(x107^x108)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = UINT32_MAX;
	static volatile int16_t x110 = INT16_MIN;
	static int16_t x111 = INT16_MIN;
	uint32_t x112 = 160699U;

	t27 = (x109&(x110|(x111^x112)));

	if (t27 != 4294964155U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MAX;
	int32_t x115 = 566;
	uint32_t t28 = 15U;

	t28 = (x113&(x114|(x115^x116)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x118 = 22722U;
	int16_t x119 = -1;
	uint16_t x120 = UINT16_MAX;
	int64_t t29 = -1LL;

	t29 = (x117&(x118|(x119^x120)));

	if (t29 != 9223372036854732994LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -1LL;
	int32_t x123 = INT32_MIN;
	static int64_t x124 = INT64_MIN;
	int64_t t30 = -17LL;

	t30 = (x121&(x122|(x123^x124)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 15U;
	uint8_t x126 = 123U;
	int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MIN;
	volatile int64_t t31 = -4839800973294039LL;

	t31 = (x125&(x126|(x127^x128)));

	if (t31 != 11LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -2602;
	uint8_t x130 = 28U;
	uint16_t x131 = 24U;
	int64_t x132 = INT64_MAX;
	int64_t t32 = 4091LL;

	t32 = (x129&(x130|(x131^x132)));

	if (t32 != 9223372036854773206LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 1138;
	int64_t x135 = INT64_MIN;
	int32_t x136 = -1;
	int64_t t33 = 59466LL;

	t33 = (x133&(x134|(x135^x136)));

	if (t33 != 1138LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 3U;
	int32_t x139 = 619;

	t34 = (x137&(x138|(x139^x140)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint16_t x142 = 31825U;
	static uint64_t x143 = 27LLU;
	volatile uint64_t x144 = 3075297438136LLU;

	t35 = (x141&(x142|(x143^x144)));

	if (t35 != 3075297443200LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = 1;
	int64_t x147 = 980329434403LL;

	t36 = (x145&(x146|(x147^x148)));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	volatile int32_t x150 = INT32_MIN;
	volatile int32_t t37 = -204474690;

	t37 = (x149&(x150|(x151^x152)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 21021667905315LLU;
	int32_t x154 = INT32_MIN;
	volatile uint64_t t38 = 0LLU;

	t38 = (x153&(x154|(x155^x156)));

	if (t38 != 21019569966850LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = -1LL;
	static volatile uint32_t x159 = 2U;
	volatile int32_t x160 = INT32_MAX;

	t39 = (x157&(x158|(x159^x160)));

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x163 = UINT32_MAX;
	uint64_t t40 = 329260287581054LLU;

	t40 = (x161&(x162|(x163^x164)));

	if (t40 != 438LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -4018;
	static volatile int32_t x166 = 1;
	uint16_t x167 = 1U;
	volatile int32_t x168 = INT32_MAX;
	volatile int32_t t41 = -3;

	t41 = (x165&(x166|(x167^x168)));

	if (t41 != 2147479630) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = 386LL;
	volatile uint32_t x171 = UINT32_MAX;
	int64_t x172 = INT64_MIN;

	t42 = (x169&(x170|(x171^x172)));

	if (t42 != 386LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x175 = -1;
	int8_t x176 = -1;
	volatile uint64_t t43 = 1558605763428178014LLU;

	t43 = (x173&(x174|(x175^x176)));

	if (t43 != 107LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = 85;

	t44 = (x177&(x178|(x179^x180)));

	if (t44 != 4294967168U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x183 = -1;
	static volatile int64_t x184 = INT64_MAX;
	static volatile int64_t t45 = -172714488828837LL;

	t45 = (x181&(x182|(x183^x184)));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	static int64_t x186 = -2725280981085LL;
	int64_t x187 = INT64_MAX;

	t46 = (x185&(x186|(x187^x188)));

	if (t46 != 18446741348552802303LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = UINT16_MAX;
	int8_t x190 = -1;
	uint8_t x192 = 86U;
	volatile uint32_t t47 = 61903424U;

	t47 = (x189&(x190|(x191^x192)));

	if (t47 != 65535U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	uint64_t x196 = 14582LLU;
	uint64_t t48 = UINT64_MAX;

	t48 = (x193&(x194|(x195^x196)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	uint8_t x199 = 1U;
	int64_t x200 = 123LL;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x197&(x198|(x199^x200)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 0U;
	int8_t x202 = -1;
	volatile int16_t x204 = -979;

	t50 = (x201&(x202|(x203^x204)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 0U;
	volatile int64_t x206 = INT64_MIN;
	uint64_t x208 = 702863734924LLU;
	uint64_t t51 = 7298930960LLU;

	t51 = (x205&(x206|(x207^x208)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 916643358;
	volatile int64_t x210 = -101LL;
	volatile int32_t x211 = INT32_MIN;
	int64_t t52 = -101038539792092341LL;

	t52 = (x209&(x210|(x211^x212)));

	if (t52 != 916643354LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 14483U;
	uint16_t x215 = 0U;
	int32_t x216 = INT32_MIN;
	volatile uint64_t t53 = 3305LLU;

	t53 = (x213&(x214|(x215^x216)));

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = -52;
	uint32_t x219 = UINT32_MAX;
	volatile uint32_t t54 = 96259U;

	t54 = (x217&(x218|(x219^x220)));

	if (t54 != 32767U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x222 = INT16_MIN;
	int64_t x223 = -1LL;
	int8_t x224 = INT8_MIN;
	static volatile int64_t t55 = 10783745806817900LL;

	t55 = (x221&(x222|(x223^x224)));

	if (t55 != 41LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	volatile int8_t x226 = -48;
	int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -475353253;

	t56 = (x225&(x226|(x227^x228)));

	if (t56 != 80) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MIN;
	uint32_t x230 = 179486U;
	uint16_t x231 = UINT16_MAX;
	static int16_t x232 = INT16_MIN;
	volatile uint32_t t57 = 16740255U;

	t57 = (x229&(x230|(x231^x232)));

	if (t57 != 4294967168U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 7928U;
	uint32_t x234 = UINT32_MAX;
	int8_t x235 = -61;
	uint32_t x236 = 18U;
	uint32_t t58 = 1115915U;

	t58 = (x233&(x234|(x235^x236)));

	if (t58 != 7928U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x237 = 1;
	volatile int64_t t59 = 2842446LL;

	t59 = (x237&(x238|(x239^x240)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	int32_t x243 = -80086;
	static uint16_t x244 = 24353U;
	int32_t t60 = -3;

	t60 = (x241&(x242|(x243^x244)));

	if (t60 != -32758) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x248 = INT32_MAX;
	static volatile int32_t t61 = 355066808;

	t61 = (x245&(x246|(x247^x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x250 = INT32_MAX;
	volatile uint16_t x251 = 1766U;
	int64_t x252 = INT64_MAX;
	static volatile int64_t t62 = -22066623255095547LL;

	t62 = (x249&(x250|(x251^x252)));

	if (t62 != 65535LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -3823;
	int64_t x254 = 195628LL;
	static uint16_t x255 = 32U;
	volatile uint32_t x256 = 447796U;

	t63 = (x253&(x254|(x255^x256)));

	if (t63 != 454928LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 19872054030196LLU;
	uint32_t x258 = UINT32_MAX;
	static uint64_t x259 = 1LLU;
	uint64_t t64 = 13510LLU;

	t64 = (x257&(x258|(x259^x260)));

	if (t64 != 3535318900LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 122U;
	uint8_t x262 = 0U;
	uint8_t x263 = 52U;
	uint16_t x264 = 2U;
	volatile int32_t t65 = 17398;

	t65 = (x261&(x262|(x263^x264)));

	if (t65 != 50) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	int8_t x267 = 3;
	int32_t t66 = 117;

	t66 = (x265&(x266|(x267^x268)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 23991LLU;
	uint32_t x270 = 193589758U;
	int16_t x271 = INT16_MIN;
	uint64_t t67 = 203047LLU;

	t67 = (x269&(x270|(x271^x272)));

	if (t67 != 20919LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int8_t x274 = INT8_MAX;
	int64_t x276 = INT64_MAX;
	uint64_t t68 = 729938LLU;

	t68 = (x273&(x274|(x275^x276)));

	if (t68 != 2147483135LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MAX;
	static int8_t x279 = INT8_MIN;
	uint64_t x280 = 18746699919781775LLU;
	static volatile uint64_t t69 = 6474743336387878495LLU;

	t69 = (x277&(x278|(x279^x280)));

	if (t69 != 18427997374686134272LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 1U;
	volatile uint32_t x283 = 10105769U;
	static uint64_t x284 = 3951993639508378589LLU;
	uint64_t t70 = 513402858186998269LLU;

	t70 = (x281&(x282|(x283^x284)));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 12U;
	int32_t x286 = -1;
	static volatile int16_t x287 = -63;
	int32_t x288 = 778337;
	volatile int32_t t71 = 5609094;

	t71 = (x285&(x286|(x287^x288)));

	if (t71 != 12) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x290 = 9075056U;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = INT32_MIN;
	volatile uint32_t t72 = 50U;

	t72 = (x289&(x290|(x291^x292)));

	if (t72 != 2147653908U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = INT8_MAX;
	volatile int64_t x296 = -7630644LL;

	t73 = (x293&(x294|(x295^x296)));

	if (t73 != 17258LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x297 = -1;
	int16_t x300 = 2007;
	uint32_t t74 = UINT32_MAX;

	t74 = (x297&(x298|(x299^x300)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MAX;
	volatile uint64_t t75 = 103487991227LLU;

	t75 = (x301&(x302|(x303^x304)));

	if (t75 != 141LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MIN;
	static uint8_t x307 = 3U;
	int8_t x308 = 3;

	t76 = (x305&(x306|(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	int16_t x310 = INT16_MAX;
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = INT8_MAX;
	volatile int64_t t77 = 10916364389073LL;

	t77 = (x309&(x310|(x311^x312)));

	if (t77 != 32767LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 0;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MAX;
	int64_t x316 = -225835441571LL;
	static volatile int64_t t78 = -23464LL;

	t78 = (x313&(x314|(x315^x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MAX;
	int64_t x320 = -101420LL;
	static volatile uint64_t t79 = 125289639LLU;

	t79 = (x317&(x318|(x319^x320)));

	if (t79 != 16LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x321 = 27U;
	uint64_t x322 = 66037401LLU;
	volatile uint16_t x324 = 1327U;
	volatile uint64_t t80 = 152665LLU;

	t80 = (x321&(x322|(x323^x324)));

	if (t80 != 27LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = 0;
	int16_t x327 = INT16_MAX;
	int32_t x328 = INT32_MIN;
	static volatile int64_t t81 = INT64_MIN;

	t81 = (x325&(x326|(x327^x328)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -33322367LL;
	int64_t x330 = 89361332657501029LL;
	int64_t x331 = -1LL;
	uint8_t x332 = UINT8_MAX;
	volatile int64_t t82 = 1270683538126172LL;

	t82 = (x329&(x330|(x331^x332)));

	if (t82 != -33322495LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	uint8_t x334 = 27U;
	uint64_t t83 = 75932LLU;

	t83 = (x333&(x334|(x335^x336)));

	if (t83 != 15231LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = 2U;
	static int64_t x339 = INT64_MAX;
	int32_t x340 = -407908;
	int64_t t84 = -840LL;

	t84 = (x337&(x338|(x339^x340)));

	if (t84 != 407907LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -1;
	int16_t x342 = 0;
	static uint32_t x343 = UINT32_MAX;
	volatile int8_t x344 = INT8_MAX;
	static volatile uint32_t t85 = 7682U;

	t85 = (x341&(x342|(x343^x344)));

	if (t85 != 4294967168U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MAX;
	int64_t x348 = INT64_MAX;
	uint64_t t86 = 11933LLU;

	t86 = (x345&(x346|(x347^x348)));

	if (t86 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 11U;
	volatile int32_t t87 = 1546827;

	t87 = (x349&(x350|(x351^x352)));

	if (t87 != -28) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MAX;
	static uint32_t x356 = UINT32_MAX;
	volatile int64_t t88 = -630228267609099LL;

	t88 = (x353&(x354|(x355^x356)));

	if (t88 != 2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = 1;
	int64_t x360 = -1LL;
	int64_t t89 = 274891046LL;

	t89 = (x357&(x358|(x359^x360)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 289;
	uint8_t x362 = UINT8_MAX;
	volatile int64_t t90 = 192362LL;

	t90 = (x361&(x362|(x363^x364)));

	if (t90 != 289LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int64_t x366 = -1LL;
	int8_t x367 = -1;

	t91 = (x365&(x366|(x367^x368)));

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 51;
	int64_t x370 = INT64_MIN;
	int16_t x371 = -1;
	static int8_t x372 = INT8_MIN;

	t92 = (x369&(x370|(x371^x372)));

	if (t92 != 51LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	uint32_t x374 = 14418319U;
	volatile uint16_t x375 = 114U;
	int32_t x376 = INT32_MIN;

	t93 = (x373&(x374|(x375^x376)));

	if (t93 != 2161901568U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	int32_t x378 = -1;
	volatile int16_t x379 = 8130;
	static uint8_t x380 = 14U;
	static int32_t t94 = INT32_MIN;

	t94 = (x377&(x378|(x379^x380)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = INT64_MIN;
	static uint32_t x383 = 2474U;
	int8_t x384 = INT8_MIN;

	t95 = (x381&(x382|(x383^x384)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = -1LL;
	static uint64_t x386 = 538LLU;
	int8_t x388 = -1;
	volatile uint64_t t96 = 0LLU;

	t96 = (x385&(x386|(x387^x388)));

	if (t96 != 18446744073709548479LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x390 = INT64_MAX;
	int64_t x391 = -1LL;
	int16_t x392 = INT16_MAX;
	volatile int64_t t97 = -116LL;

	t97 = (x389&(x390|(x391^x392)));

	if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MIN;
	uint8_t x395 = 102U;
	int64_t t98 = 3384069090LL;

	t98 = (x393&(x394|(x395^x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 1LLU;
	int32_t x398 = INT32_MIN;
	uint32_t x399 = 1822650489U;
	int8_t x400 = -3;

	t99 = (x397&(x398|(x399^x400)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

