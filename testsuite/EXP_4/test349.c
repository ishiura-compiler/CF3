#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x4 = INT8_MIN;
int8_t x17 = INT8_MIN;
int8_t x22 = -3;
static int64_t x25 = INT64_MIN;
uint32_t x27 = 8U;
uint16_t x36 = UINT16_MAX;
static uint64_t x39 = 463625722LLU;
uint32_t x44 = 401475U;
int8_t x55 = 0;
uint16_t x56 = UINT16_MAX;
uint64_t x62 = UINT64_MAX;
uint64_t t15 = 348328095569LLU;
static int8_t x76 = 39;
uint32_t x81 = 210U;
volatile int32_t t20 = -6967;
static uint64_t x103 = UINT64_MAX;
volatile int16_t x115 = -1;
int64_t t23 = -42990668774268LL;
int8_t x131 = -1;
static volatile uint32_t x133 = 1298470U;
static uint32_t t28 = 143690095U;
uint8_t x139 = UINT8_MAX;
int32_t x140 = -338142;
uint64_t t31 = 12405917267043LLU;
uint16_t x159 = UINT16_MAX;
static int32_t t33 = 282928738;
int16_t x174 = -1;
volatile int32_t t35 = -48558;
static int64_t x199 = -1LL;
uint32_t x202 = UINT32_MAX;
uint8_t x205 = 46U;
volatile uint64_t x217 = 5892LLU;
int16_t x234 = 12;
static volatile uint32_t t44 = 45524U;
volatile uint64_t t47 = 20913LLU;
static int16_t x257 = -1;
static volatile uint8_t x258 = UINT8_MAX;
int16_t x267 = INT16_MIN;
int8_t x272 = 8;
int32_t x277 = INT32_MIN;
volatile int8_t x278 = INT8_MAX;
static uint32_t x279 = UINT32_MAX;
int16_t x280 = INT16_MIN;
int8_t x285 = INT8_MIN;
int64_t x287 = -1LL;
static int32_t x294 = -1;
int16_t x296 = INT16_MIN;
uint32_t x299 = UINT32_MAX;
static volatile int16_t x303 = INT16_MAX;
uint8_t x304 = UINT8_MAX;
int16_t x308 = INT16_MIN;
uint32_t x318 = 10041183U;
volatile int32_t x319 = -457;
static uint16_t x321 = UINT16_MAX;
static volatile uint32_t t59 = 2U;
volatile int16_t x335 = 4599;
static uint32_t x340 = 2718U;
uint64_t x349 = 208005272465938LLU;
static volatile uint8_t x356 = 14U;
int16_t x358 = INT16_MIN;
uint32_t t71 = 873797117U;
int64_t x406 = INT64_MIN;
static volatile uint32_t t75 = 1820U;
int32_t x422 = -1;
int8_t x428 = INT8_MAX;
static int16_t x430 = -13791;
static uint8_t x449 = 1U;
uint32_t t80 = 183U;
uint32_t x457 = UINT32_MAX;
int8_t x468 = INT8_MIN;
uint32_t t83 = 168861502U;
static uint64_t x469 = UINT64_MAX;
static int8_t x471 = INT8_MIN;
int16_t x478 = 6;
uint64_t x479 = UINT64_MAX;
uint64_t t87 = 2093491LLU;
int16_t x489 = INT16_MIN;
volatile int8_t x493 = -1;
volatile uint64_t x495 = 3LLU;
int64_t x496 = INT64_MIN;
volatile uint64_t t89 = 136559114568466LLU;
uint32_t x515 = 1U;
uint64_t t96 = 17493964331454935LLU;
volatile int16_t x540 = INT16_MIN;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint32_t x2 = 107060558U;
	volatile int64_t x3 = 3765LL;
	int64_t t0 = 1617678820838LL;

	t0 = (x1&(x2+(x3*x4)));

	if (t0 != 106578560LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 40U;
	static int8_t x10 = INT8_MIN;
	static uint8_t x11 = 7U;
	int16_t x12 = -1;
	volatile int32_t t1 = -82;

	t1 = (x9&(x10+(x11*x12)));

	if (t1 != 40) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 900814;
	volatile int64_t x14 = -2228317LL;
	int32_t x15 = 1652;
	static int16_t x16 = -1;
	volatile int64_t t2 = 1LL;

	t2 = (x13&(x14+(x15*x16)));

	if (t2 != 899086LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x18 = INT16_MAX;
	volatile uint32_t x19 = 3517U;
	static volatile uint32_t x20 = 251159U;
	uint32_t t3 = 123265392U;

	t3 = (x17&(x18+(x19*x20)));

	if (t3 != 883358848U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = UINT64_MAX;
	uint8_t x23 = 30U;
	uint8_t x24 = UINT8_MAX;
	uint64_t t4 = 2111902534118LLU;

	t4 = (x21&(x22+(x23*x24)));

	if (t4 != 7647LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = -1LL;
	int16_t x28 = INT16_MAX;
	volatile int64_t t5 = -117163161567067101LL;

	t5 = (x25&(x26+(x27*x28)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	static int16_t x30 = 0;
	static volatile int16_t x31 = -1;
	uint8_t x32 = UINT8_MAX;
	uint64_t t6 = 129618768988604LLU;

	t6 = (x29&(x30+(x31*x32)));

	if (t6 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	volatile int32_t t7 = 1;

	t7 = (x33&(x34+(x35*x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	static int64_t x38 = -464962280547214LL;
	int8_t x40 = 29;
	volatile uint64_t t8 = 66677399LLU;

	t8 = (x37&(x38+(x39*x40)));

	if (t8 != 49604LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x41 = 1908760U;
	int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	uint32_t t9 = 39116865U;

	t9 = (x41&(x42+(x43*x44)));

	if (t9 != 1843224U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = 0;
	int32_t x50 = INT32_MIN;
	uint16_t x51 = UINT16_MAX;
	uint8_t x52 = UINT8_MAX;
	int32_t t10 = 10669377;

	t10 = (x49&(x50+(x51*x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	volatile int8_t x54 = 49;
	volatile int32_t t11 = -1802968;

	t11 = (x53&(x54+(x55*x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = 43110144929LLU;
	static volatile uint64_t x58 = 39057LLU;
	int16_t x59 = -1;
	static int16_t x60 = 9;
	static volatile uint64_t t12 = 6284LLU;

	t12 = (x57&(x58+(x59*x60)));

	if (t12 != 39040LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	int16_t x63 = INT16_MAX;
	uint8_t x64 = 4U;
	static volatile uint64_t t13 = 8800LLU;

	t13 = (x61&(x62+(x63*x64)));

	if (t13 != 131067LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	static int32_t x66 = -36417755;
	volatile int32_t x67 = -1;
	static int64_t x68 = 3750437045LL;
	volatile int64_t t14 = 694010567467145313LL;

	t14 = (x65&(x66+(x67*x68)));

	if (t14 != 508112496LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = -1LL;
	int64_t x70 = 14036200450LL;
	uint64_t x71 = 1LLU;
	int8_t x72 = INT8_MIN;

	t15 = (x69&(x70+(x71*x72)));

	if (t15 != 14036200322LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 371913LLU;
	volatile uint8_t x74 = 65U;
	int32_t x75 = 30;
	uint64_t t16 = 3991462108965080LLU;

	t16 = (x73&(x74+(x75*x76)));

	if (t16 != 1217LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x82 = 16020308;
	int32_t x83 = INT32_MIN;
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t17 = 4040617LLU;

	t17 = (x81&(x82+(x83*x84)));

	if (t17 != 80LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = UINT16_MAX;
	uint8_t x86 = UINT8_MAX;
	uint32_t x87 = 93U;
	volatile int8_t x88 = -1;
	static uint32_t t18 = 4425458U;

	t18 = (x85&(x86+(x87*x88)));

	if (t18 != 162U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = UINT64_MAX;
	uint64_t t19 = 234866459648315LLU;

	t19 = (x93&(x94+(x95*x96)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x97 = -1;
	static int16_t x98 = -1;
	uint8_t x99 = 3U;
	int16_t x100 = INT16_MIN;

	t20 = (x97&(x98+(x99*x100)));

	if (t20 != -98305) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 93U;
	int64_t x102 = INT64_MIN;
	uint16_t x104 = 4U;
	uint64_t t21 = 234020LLU;

	t21 = (x101&(x102+(x103*x104)));

	if (t21 != 92LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	int16_t x106 = -1;
	int16_t x107 = -507;
	int8_t x108 = INT8_MAX;
	volatile int32_t t22 = 2873590;

	t22 = (x105&(x106+(x107*x108)));

	if (t22 != -65536) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = 80148073947LL;
	volatile int8_t x114 = -2;
	uint16_t x116 = 1U;

	t23 = (x113&(x114+(x115*x116)));

	if (t23 != 80148073945LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x117 = 49377494U;
	static volatile int64_t x118 = INT64_MIN;
	uint8_t x119 = 1U;
	int64_t x120 = INT64_MAX;
	static volatile int64_t t24 = -114723848429483LL;

	t24 = (x117&(x118+(x119*x120)));

	if (t24 != 49377494LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -1;
	uint16_t x122 = 1U;
	volatile int64_t x123 = 1LL;
	volatile int32_t x124 = INT32_MIN;
	int64_t t25 = -21021006689070LL;

	t25 = (x121&(x122+(x123*x124)));

	if (t25 != -2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = 0;
	static volatile int64_t x126 = INT64_MIN;
	uint64_t x127 = 43LLU;
	int8_t x128 = -7;
	uint64_t t26 = 67LLU;

	t26 = (x125&(x126+(x127*x128)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	volatile int16_t x130 = INT16_MAX;
	uint16_t x132 = 3152U;
	int32_t t27 = 123797573;

	t27 = (x129&(x130+(x131*x132)));

	if (t27 != 47) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x134 = -1;
	int32_t x135 = -1;
	int8_t x136 = -1;

	t28 = (x133&(x134+(x135*x136)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x137 = 1U;
	int8_t x138 = INT8_MIN;
	volatile int32_t t29 = -3;

	t29 = (x137&(x138+(x139*x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -3;
	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = 266452LLU;
	uint32_t x144 = 2429536U;
	volatile uint64_t t30 = 4229307351LLU;

	t30 = (x141&(x142+(x143*x144)));

	if (t30 != 647354726525LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MAX;
	int8_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	uint64_t x152 = UINT64_MAX;

	t31 = (x149&(x150+(x151*x152)));

	if (t31 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x153 = INT16_MAX;
	static uint8_t x154 = 13U;
	static int8_t x155 = INT8_MIN;
	int64_t x156 = -7651451259641LL;
	int64_t t32 = -1282382651199002950LL;

	t32 = (x153&(x154+(x155*x156)));

	if (t32 != 31885LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int8_t x160 = INT8_MAX;

	t33 = (x157&(x158+(x159*x160)));

	if (t33 != 8322817) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = 1U;
	volatile int64_t x162 = 25860401424764LL;
	uint32_t x163 = 1737U;
	int16_t x164 = -1;
	int64_t t34 = 125509066LL;

	t34 = (x161&(x162+(x163*x164)));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = INT8_MAX;
	int16_t x175 = -2325;
	static uint16_t x176 = 2U;

	t35 = (x173&(x174+(x175*x176)));

	if (t35 != 85) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = INT16_MAX;
	static volatile int16_t x178 = -1;
	volatile int8_t x179 = -1;
	int64_t x180 = -1LL;
	static int64_t t36 = 4LL;

	t36 = (x177&(x178+(x179*x180)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x181 = INT32_MAX;
	static int16_t x182 = INT16_MAX;
	volatile int32_t x183 = 2;
	uint64_t x184 = 12296746592300182LLU;
	volatile uint64_t t37 = 9117672LLU;

	t37 = (x181&(x182+(x183*x184)));

	if (t37 != 1494112555LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x198 = UINT16_MAX;
	volatile int64_t x200 = -1LL;
	int64_t t38 = 1146LL;

	t38 = (x197&(x198+(x199*x200)));

	if (t38 != 65536LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = -1;
	int16_t x203 = INT16_MAX;
	static volatile uint16_t x204 = UINT16_MAX;
	uint32_t t39 = 863U;

	t39 = (x201&(x202+(x203*x204)));

	if (t39 != 2147385344U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x206 = INT64_MAX;
	uint8_t x207 = UINT8_MAX;
	uint64_t x208 = 251446066700044940LLU;
	static uint64_t t40 = 479LLU;

	t40 = (x205&(x206+(x207*x208)));

	if (t40 != 34LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x218 = INT16_MIN;
	static int32_t x219 = -1376;
	volatile int16_t x220 = -7;
	uint64_t t41 = 16566005875LLU;

	t41 = (x217&(x218+(x219*x220)));

	if (t41 != 1280LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x221 = INT16_MAX;
	int8_t x222 = INT8_MAX;
	volatile uint8_t x223 = 3U;
	volatile uint8_t x224 = UINT8_MAX;
	int32_t t42 = 772355174;

	t42 = (x221&(x222+(x223*x224)));

	if (t42 != 892) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x229 = INT16_MIN;
	int32_t x230 = 1;
	volatile int32_t x231 = INT32_MIN;
	volatile uint32_t x232 = 469557256U;
	volatile uint32_t t43 = 2U;

	t43 = (x229&(x230+(x231*x232)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x233 = 36645451U;
	static int16_t x235 = -8667;
	int16_t x236 = INT16_MIN;

	t44 = (x233&(x234+(x235*x236)));

	if (t44 != 2949128U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x237 = INT64_MIN;
	int32_t x238 = -1;
	uint32_t x239 = 1016746U;
	int64_t x240 = -495191223LL;
	int64_t t45 = INT64_MIN;

	t45 = (x237&(x238+(x239*x240)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x241 = 68288426936LLU;
	int32_t x242 = -3;
	volatile int8_t x243 = 0;
	int32_t x244 = INT32_MIN;
	uint64_t t46 = 1776713100613413LLU;

	t46 = (x241&(x242+(x243*x244)));

	if (t46 != 68288426936LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x245 = INT16_MAX;
	int32_t x246 = 735;
	volatile uint32_t x247 = 141363302U;
	uint64_t x248 = UINT64_MAX;

	t47 = (x245&(x246+(x247*x248)));

	if (t47 != 31353LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x259 = 3025U;
	int16_t x260 = INT16_MIN;
	volatile int32_t t48 = 6;

	t48 = (x257&(x258+(x259*x260)));

	if (t48 != -99122945) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = INT32_MAX;
	volatile uint32_t x266 = UINT32_MAX;
	int32_t x268 = -7481;
	static uint32_t t49 = 10U;

	t49 = (x265&(x266+(x267*x268)));

	if (t49 != 245137407U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x269 = UINT16_MAX;
	static uint32_t x270 = 3418U;
	static uint32_t x271 = 14U;
	volatile uint32_t t50 = 57873U;

	t50 = (x269&(x270+(x271*x272)));

	if (t50 != 3530U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t t51 = 1378U;

	t51 = (x277&(x278+(x279*x280)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x286 = -1360;
	int16_t x288 = INT16_MAX;
	volatile int64_t t52 = -99821064826LL;

	t52 = (x285&(x286+(x287*x288)));

	if (t52 != -34176LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x293 = 1703U;
	int64_t x295 = -1888937580LL;
	volatile int64_t t53 = 259190696247980LL;

	t53 = (x293&(x294+(x295*x296)));

	if (t53 != 1703LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MAX;
	int32_t x300 = -1;
	volatile uint32_t t54 = 1U;

	t54 = (x297&(x298+(x299*x300)));

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x301 = -280259979;
	uint16_t x302 = 10585U;
	volatile int32_t t55 = 1505;

	t55 = (x301&(x302+(x303*x304)));

	if (t55 != 4948048) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x305 = -45;
	static int32_t x306 = -251184;
	static uint32_t x307 = UINT32_MAX;
	volatile uint32_t t56 = 197U;

	t56 = (x305&(x306+(x307*x308)));

	if (t56 != 4294748880U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x317 = 1U;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t57 = 57668231662132462LLU;

	t57 = (x317&(x318+(x319*x320)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x322 = -98LL;
	uint16_t x323 = 11U;
	uint32_t x324 = 4684953U;
	int64_t t58 = -19423982265234901LL;

	t58 = (x321&(x322+(x323*x324)));

	if (t58 != 23089LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x325 = 1451U;
	uint8_t x326 = UINT8_MAX;
	volatile int32_t x327 = 0;
	int32_t x328 = 203646586;

	t59 = (x325&(x326+(x327*x328)));

	if (t59 != 171U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x329 = INT64_MIN;
	volatile uint64_t x330 = 213664282690LLU;
	volatile uint8_t x331 = 127U;
	int8_t x332 = INT8_MAX;
	volatile uint64_t t60 = 379174656094LLU;

	t60 = (x329&(x330+(x331*x332)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x333 = -644207;
	static volatile int16_t x334 = 13295;
	volatile uint16_t x336 = 44U;
	static int32_t t61 = 1496;

	t61 = (x333&(x334+(x335*x336)));

	if (t61 != 133633) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x337 = UINT32_MAX;
	int64_t x338 = INT64_MIN;
	int16_t x339 = -590;
	volatile int64_t t62 = -44900770270562LL;

	t62 = (x337&(x338+(x339*x340)));

	if (t62 != 4293363676LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x341 = 3LL;
	uint8_t x342 = 50U;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = 0U;
	static int64_t t63 = 11LL;

	t63 = (x341&(x342+(x343*x344)));

	if (t63 != 2LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x345 = UINT16_MAX;
	volatile uint8_t x346 = 51U;
	static int8_t x347 = INT8_MAX;
	uint8_t x348 = 3U;
	int32_t t64 = -1131366;

	t64 = (x345&(x346+(x347*x348)));

	if (t64 != 432) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x350 = INT64_MAX;
	volatile uint8_t x351 = 1U;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t65 = 218067LLU;

	t65 = (x349&(x350+(x351*x352)));

	if (t65 != 208005272465938LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x353 = INT64_MIN;
	volatile int64_t x354 = 1551426738767LL;
	int32_t x355 = -1;
	static int64_t t66 = -33497LL;

	t66 = (x353&(x354+(x355*x356)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x357 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	static int16_t x360 = -1;
	static int32_t t67 = INT32_MIN;

	t67 = (x357&(x358+(x359*x360)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x365 = 18U;
	static int32_t x366 = INT32_MIN;
	int64_t x367 = 20628498595LL;
	volatile int8_t x368 = INT8_MIN;
	int64_t t68 = -599638187279588327LL;

	t68 = (x365&(x366+(x367*x368)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x377 = -1;
	static int32_t x378 = 8415;
	int16_t x379 = -1;
	static int64_t x380 = -1LL;
	volatile int64_t t69 = -255385650809006885LL;

	t69 = (x377&(x378+(x379*x380)));

	if (t69 != 8416LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x381 = 0U;
	int32_t x382 = INT32_MAX;
	int32_t x383 = -1637;
	uint64_t x384 = 118471986LLU;
	uint64_t t70 = 4LLU;

	t70 = (x381&(x382+(x383*x384)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x386 = 2105836;
	uint32_t x387 = 5375U;
	volatile uint32_t x388 = 16585789U;

	t71 = (x385&(x386+(x387*x388)));

	if (t71 != 175U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	int64_t x392 = -1LL;
	static uint64_t t72 = 64500209016779678LLU;

	t72 = (x389&(x390+(x391*x392)));

	if (t72 != 4294934529LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x393 = UINT8_MAX;
	int32_t x394 = 508;
	int8_t x395 = 27;
	int16_t x396 = INT16_MIN;
	int32_t t73 = -682;

	t73 = (x393&(x394+(x395*x396)));

	if (t73 != 252) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x405 = INT16_MIN;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t74 = 379LLU;

	t74 = (x405&(x406+(x407*x408)));

	if (t74 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x417 = -1;
	static uint8_t x418 = 1U;
	uint32_t x419 = 840842U;
	int32_t x420 = INT32_MIN;

	t75 = (x417&(x418+(x419*x420)));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x421 = -1;
	uint16_t x423 = 142U;
	static int8_t x424 = INT8_MIN;
	static int32_t t76 = -66;

	t76 = (x421&(x422+(x423*x424)));

	if (t76 != -18177) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x425 = -1;
	int64_t x426 = 896160686794LL;
	static volatile int8_t x427 = INT8_MAX;
	int64_t t77 = 2177166964231LL;

	t77 = (x425&(x426+(x427*x428)));

	if (t77 != 896160702923LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x429 = INT8_MIN;
	volatile uint8_t x431 = 28U;
	static int16_t x432 = -1;
	int32_t t78 = 0;

	t78 = (x429&(x430+(x431*x432)));

	if (t78 != -13824) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x437 = 78U;
	int64_t x438 = 71776061373567LL;
	int16_t x439 = INT16_MIN;
	int16_t x440 = -1;
	int64_t t79 = -14091035LL;

	t79 = (x437&(x438+(x439*x440)));

	if (t79 != 78LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x450 = 6;
	uint32_t x451 = 339646435U;
	static uint16_t x452 = 200U;

	t80 = (x449&(x450+(x451*x452)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MIN;
	uint16_t x460 = 0U;
	volatile uint32_t t81 = 7U;

	t81 = (x457&(x458+(x459*x460)));

	if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x461 = 30U;
	int16_t x462 = -1;
	uint32_t x463 = 309U;
	volatile int8_t x464 = 1;
	volatile uint32_t t82 = 16987420U;

	t82 = (x461&(x462+(x463*x464)));

	if (t82 != 20U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x465 = -1;
	static uint32_t x466 = 23885U;
	volatile uint8_t x467 = 38U;

	t83 = (x465&(x466+(x467*x468)));

	if (t83 != 19021U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x470 = -607;
	static volatile int16_t x472 = 806;
	volatile uint64_t t84 = 5557158523043640024LLU;

	t84 = (x469&(x470+(x471*x472)));

	if (t84 != 18446744073709447841LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x473 = 18;
	volatile uint8_t x474 = UINT8_MAX;
	uint16_t x475 = 9U;
	int16_t x476 = -1;
	int32_t t85 = -388;

	t85 = (x473&(x474+(x475*x476)));

	if (t85 != 18) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x477 = -1;
	volatile int32_t x480 = INT32_MAX;
	volatile uint64_t t86 = 1792LLU;

	t86 = (x477&(x478+(x479*x480)));

	if (t86 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x481 = -605651;
	int8_t x482 = 29;
	static int8_t x483 = -1;
	uint64_t x484 = 232216440LLU;

	t87 = (x481&(x482+(x483*x484)));

	if (t87 != 18446744073476800549LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x490 = UINT32_MAX;
	int64_t x491 = 16467931364738LL;
	volatile int32_t x492 = -1;
	volatile int64_t t88 = -4162161057321564LL;

	t88 = (x489&(x490+(x491*x492)));

	if (t88 != -16463636398080LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x494 = 0U;

	t89 = (x493&(x494+(x495*x496)));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x497 = -1;
	int64_t x498 = 14633396243LL;
	static int16_t x499 = INT16_MIN;
	static volatile uint32_t x500 = 28198629U;
	volatile int64_t t90 = 650LL;

	t90 = (x497&(x498+(x499*x500)));

	if (t90 != 18333657107LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x501 = INT32_MAX;
	int16_t x502 = -1;
	uint32_t x503 = UINT32_MAX;
	static int32_t x504 = INT32_MIN;
	volatile uint32_t t91 = 901U;

	t91 = (x501&(x502+(x503*x504)));

	if (t91 != 2147483647U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x505 = 11503;
	int16_t x506 = 145;
	uint32_t x507 = UINT32_MAX;
	int32_t x508 = INT32_MIN;
	volatile uint32_t t92 = 44678U;

	t92 = (x505&(x506+(x507*x508)));

	if (t92 != 129U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x509 = -15632399375407LL;
	static volatile int32_t x510 = 243014925;
	uint8_t x511 = 125U;
	static uint64_t x512 = 0LLU;
	volatile uint64_t t93 = 3245558098LLU;

	t93 = (x509&(x510+(x511*x512)));

	if (t93 != 207618305LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x513 = INT16_MAX;
	static int64_t x514 = INT64_MIN;
	static volatile int32_t x516 = INT32_MIN;
	static volatile int64_t t94 = 875240906334311LL;

	t94 = (x513&(x514+(x515*x516)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x517 = 35613046534434986LLU;
	int64_t x518 = INT64_MIN;
	volatile int16_t x519 = -1;
	int64_t x520 = -527027708LL;
	static volatile uint64_t t95 = 40475LLU;

	t95 = (x517&(x518+(x519*x520)));

	if (t95 != 201965736LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x521 = -1;
	static int16_t x522 = INT16_MIN;
	uint64_t x523 = 102547LLU;
	uint32_t x524 = 716171U;

	t96 = (x521&(x522+(x523*x524)));

	if (t96 != 73441154769LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x525 = 21;
	int32_t x526 = -1;
	int16_t x527 = -1;
	uint64_t x528 = 32105540661118LLU;
	volatile uint64_t t97 = 1LLU;

	t97 = (x525&(x526+(x527*x528)));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x529 = 11321495916209LL;
	static uint32_t x530 = 1074U;
	static int16_t x531 = -1;
	static volatile int16_t x532 = -1;
	int64_t t98 = -127749713615372529LL;

	t98 = (x529&(x530+(x531*x532)));

	if (t98 != 1073LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x537 = 4;
	static int8_t x538 = -3;
	int32_t x539 = -1;
	int32_t t99 = 67051370;

	t99 = (x537&(x538+(x539*x540)));

	if (t99 != 4) { NG(); } else { ; }
	
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

