#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1938504;
static int8_t x8 = -1;
volatile int32_t t3 = 11957;
int64_t x20 = INT64_MAX;
int32_t t4 = -34598465;
int32_t x25 = 13163;
uint16_t x26 = 7302U;
int64_t x27 = 183928195645712203LL;
int64_t x29 = 33127520843193381LL;
static volatile int32_t t8 = -5;
uint8_t x40 = UINT8_MAX;
int32_t t11 = -226449;
uint64_t x50 = 1382704061LLU;
int16_t x55 = 7;
static int8_t x62 = INT8_MIN;
static uint16_t x63 = 63U;
int32_t t15 = 29;
int32_t t16 = -1025381;
int64_t x74 = 636431013161LL;
static int8_t x75 = 2;
volatile int16_t x80 = -62;
volatile uint32_t x83 = 1251U;
int8_t x87 = INT8_MIN;
volatile int64_t x106 = -1846951LL;
uint8_t x113 = 1U;
static uint64_t x120 = UINT64_MAX;
int32_t t26 = -64177;
int32_t t27 = -3;
int8_t x129 = 0;
uint64_t x133 = UINT64_MAX;
volatile int8_t x145 = -1;
int64_t x148 = INT64_MAX;
int8_t x149 = INT8_MIN;
int32_t t32 = 22730927;
static int32_t t33 = -1;
uint32_t x170 = 2586568U;
int32_t x181 = -1;
static int64_t x183 = INT64_MAX;
volatile int32_t t38 = 24869;
int8_t x188 = -1;
volatile uint8_t x196 = 1U;
static int64_t x222 = INT64_MAX;
int64_t x223 = -1LL;
volatile int32_t t46 = -10;
int32_t t48 = -2449676;
int64_t x233 = -1LL;
static volatile uint16_t x237 = 1U;
static uint32_t x246 = 206056160U;
int64_t x253 = -1LL;
int16_t x254 = INT16_MIN;
uint8_t x255 = UINT8_MAX;
int64_t x262 = -354820LL;
int32_t t54 = -1;
volatile int8_t x270 = -11;
static uint16_t x271 = 3U;
static uint8_t x276 = 8U;
static volatile uint16_t x279 = 1U;
int64_t x281 = 85825LL;
static int64_t x287 = INT64_MIN;
uint32_t x292 = 1U;
static int8_t x294 = INT8_MIN;
static int16_t x295 = INT16_MIN;
static int8_t x298 = INT8_MAX;
int32_t x301 = INT32_MIN;
static volatile int8_t x319 = 4;
int32_t t67 = -23882;
uint64_t x321 = 10LLU;
int8_t x330 = INT8_MIN;
volatile int32_t t70 = 22;
int8_t x333 = INT8_MAX;
int8_t x338 = -1;
int8_t x340 = INT8_MIN;
int8_t x344 = INT8_MAX;
static uint16_t x349 = 98U;
int8_t x357 = INT8_MAX;
volatile uint32_t x362 = UINT32_MAX;
volatile int16_t x363 = INT16_MIN;
static uint16_t x369 = 893U;
volatile int64_t x370 = 25589148190949599LL;
volatile int32_t t81 = -1;
uint64_t x380 = 8692942372488354LLU;
volatile uint32_t x390 = 8981U;
static int64_t x391 = -1LL;
int8_t x394 = -1;
uint32_t x399 = 51433U;
int8_t x406 = 1;
uint32_t x411 = 164688U;
volatile int64_t x415 = -1LL;
volatile uint8_t x424 = 15U;
int8_t x428 = 1;
volatile int32_t t93 = -601848432;
volatile int64_t x432 = 8LL;
volatile int32_t t94 = -56;
uint8_t x436 = 2U;
int8_t x439 = -1;
volatile int32_t x450 = INT32_MIN;


void f0(void) {
	volatile int16_t x1 = 73;
	int64_t x3 = -7826456930223874LL;
	uint8_t x4 = 5U;
	static volatile int32_t t0 = 857266;

	t0 = (x1==(x2^(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static int64_t x6 = INT64_MIN;
	static int8_t x7 = -1;
	int32_t t1 = 5;

	t1 = (x5==(x6^(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 2;
	uint8_t x10 = 9U;
	uint8_t x11 = 32U;
	uint8_t x12 = 62U;
	static volatile int32_t t2 = 911;

	t2 = (x9==(x10^(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int8_t x14 = 56;
	int16_t x15 = -1;
	uint16_t x16 = 12104U;

	t3 = (x13==(x14^(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;

	t4 = (x17==(x18^(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static int8_t x22 = 0;
	static uint16_t x23 = 2322U;
	volatile int16_t x24 = -1;
	int32_t t5 = -746;

	t5 = (x21==(x22^(x23+x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = -1;

	t6 = (x25==(x26^(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x30 = 362546U;
	volatile int32_t x31 = -17486;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 110421;

	t7 = (x29==(x30^(x31+x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	volatile uint8_t x34 = UINT8_MAX;
	static int64_t x35 = -1LL;
	int8_t x36 = INT8_MAX;

	t8 = (x33==(x34^(x35+x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	static uint32_t x38 = 1U;
	static uint64_t x39 = UINT64_MAX;
	volatile int32_t t9 = 1915158;

	t9 = (x37==(x38^(x39+x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile int64_t x42 = INT64_MAX;
	int32_t x43 = -4728541;
	int8_t x44 = 7;
	static int32_t t10 = 0;

	t10 = (x41==(x42^(x43+x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 57088U;
	uint16_t x46 = UINT16_MAX;
	int16_t x47 = -39;
	volatile int8_t x48 = 17;

	t11 = (x45==(x46^(x47+x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	static volatile uint16_t x51 = UINT16_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -1;

	t12 = (x49==(x50^(x51+x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	uint32_t x54 = 521459254U;
	uint32_t x56 = 7256361U;
	int32_t t13 = -7154;

	t13 = (x53==(x54^(x55+x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	int64_t x58 = -1201139691LL;
	volatile uint16_t x59 = 3U;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 3;

	t14 = (x57==(x58^(x59+x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = INT8_MIN;
	static volatile uint32_t x64 = 322U;

	t15 = (x61==(x62^(x63+x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = -115;
	uint64_t x70 = UINT64_MAX;
	volatile uint32_t x71 = UINT32_MAX;
	int64_t x72 = -1LL;

	t16 = (x69==(x70^(x71+x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = 24;
	volatile int32_t x76 = 25292267;
	volatile int32_t t17 = 15284382;

	t17 = (x73==(x74^(x75+x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MAX;
	int32_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t t18 = 631980;

	t18 = (x77==(x78^(x79+x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 3U;
	int32_t x82 = -175901;
	int32_t x84 = -882161054;
	int32_t t19 = -204020;

	t19 = (x81==(x82^(x83+x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = INT16_MAX;
	static uint64_t x86 = UINT64_MAX;
	static volatile uint32_t x88 = 1721669017U;
	volatile int32_t t20 = -879370;

	t20 = (x85==(x86^(x87+x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = 0;
	int32_t x94 = INT32_MIN;
	uint64_t x95 = 33948860424759706LLU;
	volatile uint64_t x96 = 14929472453LLU;
	volatile int32_t t21 = -510;

	t21 = (x93==(x94^(x95+x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	volatile uint8_t x102 = 33U;
	uint16_t x103 = 2251U;
	static int32_t x104 = -1;
	volatile int32_t t22 = -57;

	t22 = (x101==(x102^(x103+x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 1U;
	static uint32_t x107 = 268642U;
	uint16_t x108 = 6U;
	int32_t t23 = 22990536;

	t23 = (x105==(x106^(x107+x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 43U;
	static uint16_t x110 = 15647U;
	int32_t x111 = -10;
	uint8_t x112 = UINT8_MAX;
	int32_t t24 = 1616;

	t24 = (x109==(x110^(x111+x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x114 = -6;
	int8_t x115 = INT8_MAX;
	static int32_t x116 = -1;
	static int32_t t25 = -47;

	t25 = (x113==(x114^(x115+x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MAX;
	uint16_t x119 = 272U;

	t26 = (x117==(x118^(x119+x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MAX;
	uint32_t x122 = 978526U;
	volatile uint64_t x123 = 81900870940LLU;
	int8_t x124 = 1;

	t27 = (x121==(x122^(x123+x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x130 = 153837274U;
	uint16_t x131 = 3069U;
	uint16_t x132 = 1023U;
	static volatile int32_t t28 = -4627093;

	t28 = (x129==(x130^(x131+x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x134 = INT32_MAX;
	volatile int32_t x135 = 35;
	static volatile uint32_t x136 = UINT32_MAX;
	int32_t t29 = -14712606;

	t29 = (x133==(x134^(x135+x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -1;
	int16_t x142 = -1;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = -1;
	volatile int32_t t30 = -124;

	t30 = (x141==(x142^(x143+x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x146 = 115U;
	static int8_t x147 = -1;
	static volatile int32_t t31 = -35094;

	t31 = (x145==(x146^(x147+x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x150 = INT8_MIN;
	int16_t x151 = -803;
	uint16_t x152 = 1U;

	t32 = (x149==(x150^(x151+x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 79921U;
	int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = 0U;

	t33 = (x153==(x154^(x155+x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	volatile int8_t x158 = INT8_MIN;
	static int64_t x159 = INT64_MAX;
	int32_t x160 = -5316;
	static int32_t t34 = -130088265;

	t34 = (x157==(x158^(x159+x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x165 = 14;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = 0;
	int16_t x168 = INT16_MIN;
	volatile int32_t t35 = -7855778;

	t35 = (x165==(x166^(x167+x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -1;
	int8_t x171 = 9;
	volatile int8_t x172 = 6;
	int32_t t36 = -2413075;

	t36 = (x169==(x170^(x171+x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = 215LLU;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	static int64_t x176 = INT64_MAX;
	volatile int32_t t37 = -83867;

	t37 = (x173==(x174^(x175+x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x182 = INT8_MAX;
	int32_t x184 = -1;

	t38 = (x181==(x182^(x183+x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = INT64_MIN;
	uint32_t x186 = UINT32_MAX;
	int8_t x187 = -1;
	volatile int32_t t39 = -2375;

	t39 = (x185==(x186^(x187+x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = -1LL;
	uint64_t x190 = 607LLU;
	int64_t x191 = 139761598117170LL;
	int16_t x192 = INT16_MAX;
	volatile int32_t t40 = -482;

	t40 = (x189==(x190^(x191+x192)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MAX;
	static uint16_t x194 = 3147U;
	int16_t x195 = INT16_MIN;
	volatile int32_t t41 = 1061740957;

	t41 = (x193==(x194^(x195+x196)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = 3;
	uint8_t x198 = 29U;
	volatile uint32_t x199 = 11U;
	int32_t x200 = 938;
	int32_t t42 = -17841807;

	t42 = (x197==(x198^(x199+x200)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x201 = INT8_MIN;
	volatile int8_t x202 = 25;
	uint8_t x203 = 25U;
	int32_t x204 = -280110027;
	volatile int32_t t43 = -91158;

	t43 = (x201==(x202^(x203+x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = UINT32_MAX;
	int64_t x206 = INT64_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int64_t x208 = INT64_MIN;
	volatile int32_t t44 = 147;

	t44 = (x205==(x206^(x207+x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x209 = 1196086810LLU;
	int64_t x210 = INT64_MIN;
	volatile uint32_t x211 = 34U;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t45 = -4655443;

	t45 = (x209==(x210^(x211+x212)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = INT16_MAX;
	int64_t x224 = 4387902LL;

	t46 = (x221==(x222^(x223+x224)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MAX;
	int8_t x227 = INT8_MIN;
	static volatile uint16_t x228 = 20U;
	static int32_t t47 = 697;

	t47 = (x225==(x226^(x227+x228)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x229 = 3U;
	int8_t x230 = 0;
	static int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MAX;

	t48 = (x229==(x230^(x231+x232)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x234 = 2454635;
	static uint32_t x235 = 50677U;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t49 = -14;

	t49 = (x233==(x234^(x235+x236)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x238 = INT8_MIN;
	int64_t x239 = -1480311914LL;
	uint16_t x240 = UINT16_MAX;
	int32_t t50 = -4007336;

	t50 = (x237==(x238^(x239+x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x245 = 1;
	uint16_t x247 = 13U;
	static uint32_t x248 = 1756488U;
	int32_t t51 = 1231727;

	t51 = (x245==(x246^(x247+x248)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x256 = 0U;
	int32_t t52 = -415;

	t52 = (x253==(x254^(x255+x256)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = -1;
	int64_t x259 = -3653906490348LL;
	volatile uint32_t x260 = 11378546U;
	volatile int32_t t53 = -1030645924;

	t53 = (x257==(x258^(x259+x260)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = 5294524;
	uint64_t x263 = 13705762LLU;
	int16_t x264 = -1;

	t54 = (x261==(x262^(x263+x264)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = -1;
	uint16_t x266 = 10886U;
	int16_t x267 = INT16_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t55 = 473852;

	t55 = (x265==(x266^(x267+x268)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x269 = -1;
	volatile int64_t x272 = -1LL;
	volatile int32_t t56 = -49880785;

	t56 = (x269==(x270^(x271+x272)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x273 = INT8_MIN;
	static uint8_t x274 = 112U;
	static int8_t x275 = 2;
	volatile int32_t t57 = -1021439719;

	t57 = (x273==(x274^(x275+x276)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x277 = -1;
	int64_t x278 = INT64_MAX;
	uint32_t x280 = 69015U;
	volatile int32_t t58 = -98687;

	t58 = (x277==(x278^(x279+x280)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x282 = -1LL;
	int16_t x283 = -4;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t59 = -833;

	t59 = (x281==(x282^(x283+x284)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x285 = INT64_MAX;
	volatile uint8_t x286 = 1U;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t60 = 1182871;

	t60 = (x285==(x286^(x287+x288)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = 562LL;
	volatile int16_t x290 = 114;
	static uint8_t x291 = 13U;
	volatile int32_t t61 = 9265;

	t61 = (x289==(x290^(x291+x292)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x293 = -1;
	int32_t x296 = -1;
	volatile int32_t t62 = -557590285;

	t62 = (x293==(x294^(x295+x296)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = -7;
	uint64_t x299 = UINT64_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t63 = 901643;

	t63 = (x297==(x298^(x299+x300)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x302 = -191350743524LL;
	int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t64 = 0;

	t64 = (x301==(x302^(x303+x304)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x309 = 20U;
	uint64_t x310 = 40549LLU;
	int16_t x311 = INT16_MAX;
	static uint32_t x312 = UINT32_MAX;
	volatile int32_t t65 = -1428;

	t65 = (x309==(x310^(x311+x312)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x313 = -1;
	static int64_t x314 = 2449LL;
	volatile uint32_t x315 = UINT32_MAX;
	volatile int64_t x316 = -21915967LL;
	static volatile int32_t t66 = 1;

	t66 = (x313==(x314^(x315+x316)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = -1;
	static volatile int16_t x318 = -1;
	int8_t x320 = INT8_MIN;

	t67 = (x317==(x318^(x319+x320)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x322 = INT16_MIN;
	volatile uint16_t x323 = UINT16_MAX;
	int64_t x324 = -320LL;
	int32_t t68 = 419460;

	t68 = (x321==(x322^(x323+x324)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MAX;
	static uint64_t x327 = 1781923LLU;
	int16_t x328 = INT16_MAX;
	int32_t t69 = 0;

	t69 = (x325==(x326^(x327+x328)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x329 = 0U;
	int16_t x331 = -490;
	int8_t x332 = -1;

	t70 = (x329==(x330^(x331+x332)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x334 = UINT32_MAX;
	uint64_t x335 = 12890179LLU;
	static int64_t x336 = -1LL;
	int32_t t71 = 36;

	t71 = (x333==(x334^(x335+x336)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x337 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	volatile int32_t t72 = -5190;

	t72 = (x337==(x338^(x339+x340)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = -1;
	uint16_t x342 = 16633U;
	int16_t x343 = -1;
	int32_t t73 = 11;

	t73 = (x341==(x342^(x343+x344)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x345 = 89718411U;
	int64_t x346 = 206910129898LL;
	uint8_t x347 = UINT8_MAX;
	static int32_t x348 = INT32_MIN;
	static int32_t t74 = -9657908;

	t74 = (x345==(x346^(x347+x348)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x350 = -1;
	int8_t x351 = INT8_MAX;
	int16_t x352 = 1596;
	volatile int32_t t75 = -5055943;

	t75 = (x349==(x350^(x351+x352)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x353 = 41U;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = 18671575233896561LLU;
	int32_t x356 = 589107894;
	volatile int32_t t76 = -38;

	t76 = (x353==(x354^(x355+x356)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	uint8_t x360 = UINT8_MAX;
	static int32_t t77 = 20;

	t77 = (x357==(x358^(x359+x360)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	uint32_t x364 = 72300U;
	volatile int32_t t78 = 0;

	t78 = (x361==(x362^(x363+x364)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x365 = -1;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 0U;
	int16_t x368 = INT16_MIN;
	int32_t t79 = 5896;

	t79 = (x365==(x366^(x367+x368)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x371 = 8U;
	int8_t x372 = INT8_MAX;
	static int32_t t80 = 107082;

	t80 = (x369==(x370^(x371+x372)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = 13941;
	int64_t x375 = 27924211LL;
	int16_t x376 = -115;

	t81 = (x373==(x374^(x375+x376)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = -1;
	int64_t x378 = INT64_MIN;
	int32_t x379 = -1;
	volatile int32_t t82 = 2001465;

	t82 = (x377==(x378^(x379+x380)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x381 = 1;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	int32_t x384 = -1;
	static volatile int32_t t83 = 0;

	t83 = (x381==(x382^(x383+x384)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x385 = UINT8_MAX;
	uint16_t x386 = 5U;
	int32_t x387 = -1;
	int64_t x388 = INT64_MAX;
	int32_t t84 = 0;

	t84 = (x385==(x386^(x387+x388)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = 295864LL;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t85 = -640223;

	t85 = (x389==(x390^(x391+x392)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x393 = 338;
	int8_t x395 = -1;
	static uint16_t x396 = UINT16_MAX;
	int32_t t86 = -86431774;

	t86 = (x393==(x394^(x395+x396)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = -106480528546LL;
	uint64_t x398 = UINT64_MAX;
	static uint32_t x400 = 826732659U;
	int32_t t87 = 74125957;

	t87 = (x397==(x398^(x399+x400)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x405 = UINT32_MAX;
	static uint64_t x407 = 27909226002022LLU;
	static int8_t x408 = 0;
	volatile int32_t t88 = -188;

	t88 = (x405==(x406^(x407+x408)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x409 = 15;
	uint32_t x410 = 1U;
	int16_t x412 = INT16_MIN;
	volatile int32_t t89 = 1;

	t89 = (x409==(x410^(x411+x412)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x413 = 176U;
	static uint32_t x414 = 247U;
	uint8_t x416 = UINT8_MAX;
	int32_t t90 = -184792911;

	t90 = (x413==(x414^(x415+x416)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MAX;
	uint32_t x418 = 115255U;
	static int8_t x419 = INT8_MIN;
	uint16_t x420 = 19U;
	static volatile int32_t t91 = 433539318;

	t91 = (x417==(x418^(x419+x420)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x421 = -1LL;
	static int16_t x422 = -1;
	int32_t x423 = -23681256;
	int32_t t92 = 3079;

	t92 = (x421==(x422^(x423+x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x425 = -939670LL;
	uint64_t x426 = 3230008371535LLU;
	uint16_t x427 = 2274U;

	t93 = (x425==(x426^(x427+x428)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x429 = 23809224038317LLU;
	int32_t x430 = INT32_MIN;
	static volatile uint32_t x431 = UINT32_MAX;

	t94 = (x429==(x430^(x431+x432)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x433 = 0U;
	int16_t x434 = INT16_MIN;
	static int32_t x435 = INT32_MIN;
	static int32_t t95 = 14553531;

	t95 = (x433==(x434^(x435+x436)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x437 = INT32_MIN;
	int16_t x438 = 20;
	uint64_t x440 = 103763453LLU;
	volatile int32_t t96 = 19;

	t96 = (x437==(x438^(x439+x440)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x441 = UINT64_MAX;
	int64_t x442 = -197216907685521LL;
	int8_t x443 = 3;
	uint32_t x444 = 79793U;
	volatile int32_t t97 = -5;

	t97 = (x441==(x442^(x443+x444)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = -1LL;
	int8_t x446 = INT8_MIN;
	int64_t x447 = INT64_MAX;
	volatile int16_t x448 = -410;
	int32_t t98 = 30191;

	t98 = (x445==(x446^(x447+x448)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x449 = 2U;
	uint32_t x451 = 80331003U;
	static uint32_t x452 = UINT32_MAX;
	volatile int32_t t99 = 15;

	t99 = (x449==(x450^(x451+x452)));

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

