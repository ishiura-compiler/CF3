#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x6 = 61410LLU;
static int16_t x13 = INT16_MAX;
uint16_t x14 = 14342U;
int32_t x17 = 11;
int8_t x20 = -52;
volatile int64_t t5 = 257336605401535LL;
uint32_t x25 = 960682366U;
int32_t x27 = INT32_MIN;
static int32_t x31 = 21;
int16_t x42 = INT16_MIN;
volatile int32_t t9 = -1342239;
uint16_t x50 = UINT16_MAX;
int64_t x52 = 97LL;
int64_t t11 = 18586LL;
int32_t x54 = INT32_MAX;
int32_t x57 = INT32_MAX;
int64_t x67 = -1LL;
int32_t x68 = INT32_MIN;
int32_t x69 = 11096;
volatile int64_t x81 = -1LL;
static int64_t x95 = -1LL;
uint16_t x106 = 415U;
int64_t t25 = 62968368533882353LL;
int8_t x113 = INT8_MIN;
int32_t t27 = 2;
static int64_t x130 = 48412639LL;
int64_t x132 = INT64_MIN;
uint8_t x134 = UINT8_MAX;
int32_t t31 = 19435;
int32_t x144 = INT32_MAX;
int16_t x146 = INT16_MAX;
uint32_t x147 = 85U;
volatile int32_t x152 = INT32_MIN;
uint32_t x163 = 825283051U;
int32_t x168 = INT32_MAX;
uint32_t x177 = 329U;
uint32_t x181 = UINT32_MAX;
int64_t x185 = INT64_MIN;
int32_t x205 = -1;
int16_t x206 = -1;
int64_t x213 = INT64_MIN;
static uint16_t x214 = 7757U;
volatile int16_t x232 = INT16_MIN;
volatile uint8_t x233 = 4U;
int8_t x234 = INT8_MIN;
uint16_t x241 = UINT16_MAX;
volatile uint64_t t50 = 54102553564851LLU;
volatile uint16_t x245 = 59U;
uint16_t x250 = 23U;
int32_t x251 = -2213969;
int8_t x284 = -26;
int16_t x286 = 1;
static uint32_t x292 = UINT32_MAX;
static uint32_t x300 = 1788382U;
int8_t x306 = 54;
int64_t t61 = -88803795LL;
int16_t x314 = INT16_MAX;
static volatile uint16_t x319 = UINT16_MAX;
static int16_t x320 = INT16_MAX;
int32_t t64 = -1523;
int32_t x322 = 3464;
volatile int64_t t65 = -2334925270172LL;
int8_t x326 = INT8_MIN;
int64_t x330 = -592LL;
int32_t x332 = -631;
int32_t x346 = INT32_MIN;
volatile int64_t t69 = -2608LL;
uint32_t x353 = 39261229U;
int8_t x379 = INT8_MIN;
static volatile int32_t x388 = INT32_MIN;
int32_t x389 = INT32_MAX;
int16_t x391 = 108;
int64_t x413 = 619273215312430524LL;
int8_t x420 = INT8_MIN;
int64_t t81 = -1498371541440554142LL;
uint32_t t84 = 1528344374U;
volatile int32_t x439 = INT32_MIN;
int16_t x442 = INT16_MIN;
static uint64_t x443 = UINT64_MAX;
volatile int32_t x445 = INT32_MIN;
uint64_t x450 = 520LLU;
int64_t t90 = 5910107424LL;
volatile int16_t x463 = INT16_MIN;
int32_t t91 = -150;
int8_t x467 = INT8_MIN;
int64_t t92 = -34LL;
int64_t x472 = -10075170626029905LL;


void f0(void) {
	volatile int32_t x1 = -947;
	uint32_t x2 = UINT32_MAX;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 18798890549501LLU;

	t0 = (x1/((x2|x3)%x4));

	if (t0 != 8589934595LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -30554091355549LL;
	int32_t x7 = -1;
	int64_t x8 = INT64_MAX;
	uint64_t t1 = 1180477743945LLU;

	t1 = (x5/((x6|x7)%x8));

	if (t1 != 18446713519618196067LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile int16_t x10 = 2;
	uint8_t x11 = 19U;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 113LL;

	t2 = (x9/((x10|x11)%x12));

	if (t2 != 6LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x15 = -1;
	int16_t x16 = -963;
	volatile int32_t t3 = 423641;

	t3 = (x13/((x14|x15)%x16));

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = INT32_MIN;
	volatile uint32_t x19 = 1489U;
	uint32_t t4 = 1708783337U;

	t4 = (x17/((x18|x19)%x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 19U;
	uint8_t x22 = 99U;
	int64_t x23 = INT64_MIN;
	int32_t x24 = 1369;

	t5 = (x21/((x22|x23)%x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	static int16_t x28 = 11699;
	uint32_t t6 = 75U;

	t6 = (x25/((x26|x27)%x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	uint8_t x30 = 3U;
	int64_t x32 = -509570937418178799LL;
	volatile int64_t t7 = 32212148147166357LL;

	t7 = (x29/((x30|x31)%x32));

	if (t7 != 11LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int32_t x34 = INT32_MIN;
	uint16_t x35 = 7U;
	uint8_t x36 = 10U;
	volatile int32_t t8 = 6;

	t8 = (x33/((x34|x35)%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	uint16_t x43 = UINT16_MAX;
	static volatile int32_t x44 = INT32_MIN;

	t9 = (x41/((x42|x43)%x44));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	static int16_t x46 = INT16_MIN;
	volatile int8_t x47 = 8;
	int32_t x48 = INT32_MAX;
	static volatile int32_t t10 = -47291083;

	t10 = (x45/((x46|x47)%x48));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int16_t x51 = INT16_MIN;

	t11 = (x49/((x50|x51)%x52));

	if (t11 != 32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	volatile uint64_t x55 = 710411LLU;
	int16_t x56 = INT16_MIN;
	static uint64_t t12 = 25085257625068LLU;

	t12 = (x53/((x54|x55)%x56));

	if (t12 != 8589934595LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = 40195;
	static int8_t x59 = -1;
	int64_t x60 = -94439021185928LL;
	int64_t t13 = -526LL;

	t13 = (x57/((x58|x59)%x60));

	if (t13 != -2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	int32_t x63 = -1;
	uint64_t x64 = 1651LLU;
	static uint64_t t14 = 27718321430LLU;

	t14 = (x61/((x62|x63)%x64));

	if (t14 != 36241147488334121LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 62396LLU;
	static uint16_t x66 = 8U;
	volatile uint64_t t15 = 202865283969568LLU;

	t15 = (x65/((x66|x67)%x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x70 = UINT64_MAX;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MIN;
	uint64_t t16 = 0LLU;

	t16 = (x69/((x70|x71)%x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 1431U;
	uint64_t x78 = 0LLU;
	int16_t x79 = -1;
	int64_t x80 = 99535663108LL;
	uint64_t t17 = 3814778057712256LLU;

	t17 = (x77/((x78|x79)%x80));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x82 = 3298U;
	int16_t x83 = INT16_MIN;
	uint8_t x84 = 19U;
	volatile int64_t t18 = 272313150126LL;

	t18 = (x81/((x82|x83)%x84));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x85 = INT64_MAX;
	uint8_t x86 = 8U;
	int64_t x87 = INT64_MIN;
	static volatile int64_t x88 = -166LL;
	static volatile int64_t t19 = 327LL;

	t19 = (x85/((x86|x87)%x88));

	if (t19 != -922337203685477580LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x89 = 26U;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = UINT8_MAX;
	static uint32_t x92 = UINT32_MAX;
	static volatile uint32_t t20 = 1519415628U;

	t20 = (x89/((x90|x91)%x92));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	uint8_t x94 = 2U;
	int64_t x96 = INT64_MAX;
	volatile int64_t t21 = -43022475686335875LL;

	t21 = (x93/((x94|x95)%x96));

	if (t21 != 2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MAX;
	static volatile int16_t x99 = -96;
	volatile int32_t x100 = 40564;
	static volatile int64_t t22 = 661502695781LL;

	t22 = (x97/((x98|x99)%x100));

	if (t22 != 32768LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = -23;
	static int8_t x102 = INT8_MAX;
	uint16_t x103 = 501U;
	static uint16_t x104 = 161U;
	int32_t t23 = 0;

	t23 = (x101/((x102|x103)%x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = -37;
	uint8_t x107 = 22U;
	uint8_t x108 = 15U;
	static int32_t t24 = 2824;

	t24 = (x105/((x106|x107)%x108));

	if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = UINT8_MAX;
	static volatile int64_t x110 = INT64_MIN;
	static int64_t x111 = INT64_MAX;
	uint16_t x112 = 17U;

	t25 = (x109/((x110|x111)%x112));

	if (t25 != -255LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x114 = 2U;
	int16_t x115 = 990;
	volatile int64_t x116 = INT64_MIN;
	static int64_t t26 = -15896LL;

	t26 = (x113/((x114|x115)%x116));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 0;
	int8_t x118 = INT8_MAX;
	volatile uint16_t x119 = 12964U;
	static uint8_t x120 = UINT8_MAX;

	t27 = (x117/((x118|x119)%x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = UINT32_MAX;
	static int16_t x122 = -195;
	uint16_t x123 = 296U;
	static volatile int64_t x124 = INT64_MIN;
	volatile int64_t t28 = 725LL;

	t28 = (x121/((x122|x123)%x124));

	if (t28 != -22025473LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = 1818556477LLU;
	int64_t x131 = INT64_MAX;
	uint64_t t29 = 0LLU;

	t29 = (x129/((x130|x131)%x132));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x133 = -1LL;
	volatile int32_t x135 = 1541571;
	uint32_t x136 = 45901U;
	volatile int64_t t30 = 7298455242420209LL;

	t30 = (x133/((x134|x135)%x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	static int16_t x138 = INT16_MAX;
	static int8_t x139 = INT8_MAX;
	static volatile uint8_t x140 = 3U;

	t31 = (x137/((x138|x139)%x140));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MAX;
	static uint64_t x142 = UINT64_MAX;
	int64_t x143 = -1LL;
	volatile uint64_t t32 = 1082326LLU;

	t32 = (x141/((x142|x143)%x144));

	if (t32 != 715827882LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x145 = -1;
	static int8_t x148 = INT8_MAX;
	static uint32_t t33 = UINT32_MAX;

	t33 = (x145/((x146|x147)%x148));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x149 = 121;
	int64_t x150 = -278LL;
	int16_t x151 = INT16_MAX;
	int64_t t34 = -1605254133236631822LL;

	t34 = (x149/((x150|x151)%x152));

	if (t34 != -121LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -1;
	volatile int32_t x158 = INT32_MIN;
	uint64_t x159 = 14586262041086LLU;
	uint8_t x160 = 11U;
	uint64_t t35 = 5LLU;

	t35 = (x157/((x158|x159)%x160));

	if (t35 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 8LLU;
	int64_t x162 = INT64_MAX;
	uint16_t x164 = 866U;
	volatile uint64_t t36 = 140349701734798LLU;

	t36 = (x161/((x162|x163)%x164));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 116278U;
	static int8_t x166 = INT8_MAX;
	volatile int16_t x167 = INT16_MIN;
	static volatile uint32_t t37 = 28934U;

	t37 = (x165/((x166|x167)%x168));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x178 = 1659642548921LLU;
	uint32_t x179 = UINT32_MAX;
	volatile uint32_t x180 = UINT32_MAX;
	volatile uint64_t t38 = 3313LLU;

	t38 = (x177/((x178|x179)%x180));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x182 = INT8_MIN;
	uint32_t x183 = 465288U;
	uint32_t x184 = UINT32_MAX;
	uint32_t t39 = 410U;

	t39 = (x181/((x182|x183)%x184));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x186 = 0U;
	uint32_t x187 = UINT32_MAX;
	uint32_t x188 = 30907U;
	volatile int64_t t40 = -1424347875656LL;

	t40 = (x185/((x186|x187)%x188));

	if (t40 != -1327676988175439LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x189 = 362;
	int16_t x190 = INT16_MIN;
	int64_t x191 = -214221593522826LL;
	uint32_t x192 = UINT32_MAX;
	static volatile int64_t t41 = -16394512874LL;

	t41 = (x189/((x190|x191)%x192));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x201 = 14U;
	uint32_t x202 = 1298U;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	int64_t t42 = 518737607LL;

	t42 = (x201/((x202|x203)%x204));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x207 = INT8_MAX;
	volatile int64_t x208 = 32483682375345LL;
	volatile int64_t t43 = -3LL;

	t43 = (x205/((x206|x207)%x208));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 2362U;
	int8_t x210 = 13;
	uint16_t x211 = 228U;
	static uint16_t x212 = 11U;
	static int32_t t44 = 7;

	t44 = (x209/((x210|x211)%x212));

	if (t44 != 393) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x215 = -1128;
	int32_t x216 = INT32_MIN;
	volatile int64_t t45 = 536344084095053LL;

	t45 = (x213/((x214|x215)%x216));

	if (t45 != 263524915338707880LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = 1;
	static uint16_t x226 = UINT16_MAX;
	int32_t x227 = -171431;
	int64_t x228 = INT64_MAX;
	static int64_t t46 = 9593LL;

	t46 = (x225/((x226|x227)%x228));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = -29LL;
	volatile int16_t x230 = -2;
	volatile int64_t x231 = INT64_MIN;
	static int64_t t47 = -2118414516835491LL;

	t47 = (x229/((x230|x231)%x232));

	if (t47 != 14LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MAX;
	volatile int32_t t48 = 732;

	t48 = (x233/((x234|x235)%x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x237 = 381U;
	uint32_t x238 = 119781357U;
	int32_t x239 = 12;
	int16_t x240 = 810;
	volatile uint32_t t49 = 122U;

	t49 = (x237/((x238|x239)%x240));

	if (t49 != 2U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x242 = 12697;
	static uint32_t x243 = UINT32_MAX;
	uint64_t x244 = 1074615464LLU;

	t50 = (x241/((x242|x243)%x244));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x246 = 263U;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t51 = 1900426LL;

	t51 = (x245/((x246|x247)%x248));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x249 = -1;
	static uint8_t x252 = 11U;
	volatile int32_t t52 = 311124;

	t52 = (x249/((x250|x251)%x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x257 = -1;
	int32_t x258 = INT32_MIN;
	uint64_t x259 = UINT64_MAX;
	volatile int16_t x260 = INT16_MIN;
	volatile uint64_t t53 = 1422025LLU;

	t53 = (x257/((x258|x259)%x260));

	if (t53 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x269 = 3;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = -2968;
	static int64_t t54 = -2348751934181LL;

	t54 = (x269/((x270|x271)%x272));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = -813805025435505693LL;
	volatile uint16_t x274 = 7U;
	int32_t x275 = -26761;
	int16_t x276 = INT16_MIN;
	static int64_t t55 = -33074934LL;

	t55 = (x273/((x274|x275)%x276));

	if (t55 != 30410112680225LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x281 = INT8_MIN;
	static uint32_t x282 = UINT32_MAX;
	volatile int32_t x283 = INT32_MIN;
	volatile uint32_t t56 = 16682546U;

	t56 = (x281/((x282|x283)%x284));

	if (t56 != 171798686U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = -3580150;
	int64_t x287 = -683487LL;
	uint32_t x288 = UINT32_MAX;
	static volatile int64_t t57 = 66618018074327LL;

	t57 = (x285/((x286|x287)%x288));

	if (t57 != 5LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = INT16_MIN;
	uint8_t x290 = 0U;
	int8_t x291 = 17;
	static volatile uint32_t t58 = 19719672U;

	t58 = (x289/((x290|x291)%x292));

	if (t58 != 252643207U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x297 = INT32_MIN;
	volatile uint64_t x298 = 10LLU;
	int64_t x299 = INT64_MAX;
	uint64_t t59 = 5275751734LLU;

	t59 = (x297/((x298|x299)%x300));

	if (t59 != 10858991313959LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int16_t x302 = INT16_MAX;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = -1010;
	uint32_t t60 = 488U;

	t60 = (x301/((x302|x303)%x304));

	if (t60 != 4256657U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x305 = -1;
	int64_t x307 = INT64_MAX;
	int32_t x308 = 98;

	t61 = (x305/((x306|x307)%x308));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MAX;
	uint32_t x312 = UINT32_MAX;
	static volatile int64_t t62 = 60183777549780986LL;

	t62 = (x309/((x310|x311)%x312));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x313 = 3254552647473LLU;
	static uint64_t x315 = 117221751695238LLU;
	volatile uint32_t x316 = 1253499U;
	static uint64_t t63 = 11LLU;

	t63 = (x313/((x314|x315)%x316));

	if (t63 != 6240525LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x317 = 1483247;
	int32_t x318 = 21651981;

	t64 = (x317/((x318|x319)%x320));

	if (t64 != 2243) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x321 = -400131LL;
	int16_t x323 = -1;
	uint16_t x324 = 175U;

	t65 = (x321/((x322|x323)%x324));

	if (t65 != 400131LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = INT8_MIN;
	int32_t x327 = -1;
	int8_t x328 = INT8_MIN;
	volatile int32_t t66 = -7292;

	t66 = (x325/((x326|x327)%x328));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x329 = -50LL;
	uint8_t x331 = 2U;
	int64_t t67 = 489841755571198LL;

	t67 = (x329/((x330|x331)%x332));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = -1LL;
	volatile int8_t x347 = -6;
	volatile uint32_t x348 = UINT32_MAX;
	volatile int64_t t68 = -1679291771707LL;

	t68 = (x345/((x346|x347)%x348));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = 426637076LL;
	int64_t x350 = -1LL;
	static int64_t x351 = -5045131226LL;
	int64_t x352 = 220194421569747LL;

	t69 = (x349/((x350|x351)%x352));

	if (t69 != -426637076LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x354 = 0U;
	static int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	volatile int64_t t70 = -50676277890032LL;

	t70 = (x353/((x354|x355)%x356));

	if (t70 != -306728LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = 0;
	int16_t x358 = INT16_MAX;
	int32_t x359 = -2028465;
	uint32_t x360 = 220579U;
	uint32_t t71 = 19646U;

	t71 = (x357/((x358|x359)%x360));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x361 = UINT64_MAX;
	static int32_t x362 = INT32_MIN;
	volatile uint32_t x363 = 14U;
	int16_t x364 = INT16_MIN;
	uint64_t t72 = 7793164386669059LLU;

	t72 = (x361/((x362|x363)%x364));

	if (t72 != 8589934536LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x365 = 0U;
	int8_t x366 = -1;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MAX;
	int64_t t73 = 2LL;

	t73 = (x365/((x366|x367)%x368));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = -14487271823749LL;
	static uint8_t x378 = 74U;
	uint8_t x380 = 8U;
	int64_t t74 = -97353731467LL;

	t74 = (x377/((x378|x379)%x380));

	if (t74 != 2414545303958LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x381 = INT8_MIN;
	volatile uint16_t x382 = 21U;
	uint8_t x383 = 98U;
	uint16_t x384 = 1117U;
	static int32_t t75 = 923856952;

	t75 = (x381/((x382|x383)%x384));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint16_t x386 = UINT16_MAX;
	int16_t x387 = -1;
	static uint64_t t76 = 1901557865866LLU;

	t76 = (x385/((x386|x387)%x388));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x390 = -11;
	uint32_t x392 = 18U;
	volatile uint32_t t77 = 39U;

	t77 = (x389/((x390|x391)%x392));

	if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x397 = INT32_MAX;
	static int32_t x398 = -571630455;
	int8_t x399 = -21;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t78 = 136;

	t78 = (x397/((x398|x399)%x400));

	if (t78 != -102261126) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x409 = 8961324;
	int32_t x410 = 2846;
	uint8_t x411 = UINT8_MAX;
	volatile int64_t x412 = INT64_MIN;
	static volatile int64_t t79 = -7LL;

	t79 = (x409/((x410|x411)%x412));

	if (t79 != 2918LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x414 = INT16_MIN;
	uint64_t x415 = 28LLU;
	int16_t x416 = -1;
	static volatile uint64_t t80 = 142506627856LLU;

	t80 = (x413/((x414|x415)%x416));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x417 = 1;
	volatile int64_t x418 = INT64_MIN;
	volatile uint32_t x419 = UINT32_MAX;

	t81 = (x417/((x418|x419)%x420));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x421 = 71754306170394390LLU;
	static uint32_t x422 = UINT32_MAX;
	int8_t x423 = -1;
	volatile int16_t x424 = INT16_MIN;
	static uint64_t t82 = 268082640192465178LLU;

	t82 = (x421/((x422|x423)%x424));

	if (t82 != 2189834472804LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x425 = INT16_MAX;
	int8_t x426 = -1;
	int16_t x427 = -1;
	int16_t x428 = INT16_MIN;
	volatile int32_t t83 = -432;

	t83 = (x425/((x426|x427)%x428));

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = 27;
	volatile int8_t x435 = 34;
	static volatile uint32_t x436 = 23811U;

	t84 = (x433/((x434|x435)%x436));

	if (t84 != 72796053U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x437 = 12;
	uint32_t x438 = UINT32_MAX;
	int8_t x440 = INT8_MIN;
	static uint32_t t85 = 2800853U;

	t85 = (x437/((x438|x439)%x440));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x441 = INT32_MIN;
	int8_t x444 = INT8_MIN;
	uint64_t t86 = 6LLU;

	t86 = (x441/((x442|x443)%x444));

	if (t86 != 145249953319386361LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x446 = 0;
	int64_t x447 = -1LL;
	uint32_t x448 = 85844U;
	int64_t t87 = 24551203985254LL;

	t87 = (x445/((x446|x447)%x448));

	if (t87 != 2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x449 = 458728U;
	volatile int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MIN;
	uint64_t t88 = 65761041446LLU;

	t88 = (x449/((x450|x451)%x452));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x453 = INT32_MIN;
	int16_t x454 = INT16_MIN;
	volatile int8_t x455 = 6;
	volatile int16_t x456 = INT16_MIN;
	volatile int32_t t89 = 4;

	t89 = (x453/((x454|x455)%x456));

	if (t89 != 65548) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x457 = -1604277LL;
	volatile int64_t x458 = 496821798914LL;
	int32_t x459 = -1;
	static uint32_t x460 = 872U;

	t90 = (x457/((x458|x459)%x460));

	if (t90 != 1604277LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x461 = 3U;
	int16_t x462 = INT16_MAX;
	int16_t x464 = 438;

	t91 = (x461/((x462|x463)%x464));

	if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x465 = INT16_MIN;
	volatile uint32_t x466 = 0U;
	static int64_t x468 = INT64_MAX;

	t92 = (x465/((x466|x467)%x468));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x469 = INT8_MIN;
	int8_t x470 = -56;
	int32_t x471 = INT32_MAX;
	static volatile int64_t t93 = 185LL;

	t93 = (x469/((x470|x471)%x472));

	if (t93 != 128LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x473 = -1;
	uint8_t x474 = 30U;
	int64_t x475 = -26076427293879LL;
	static int64_t x476 = 255941191479LL;
	static volatile int64_t t94 = -133810512172LL;

	t94 = (x473/((x474|x475)%x476));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x477 = UINT8_MAX;
	uint32_t x478 = 1308699375U;
	int16_t x479 = INT16_MIN;
	static int16_t x480 = 3822;
	uint32_t t95 = 47645U;

	t95 = (x477/((x478|x479)%x480));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x485 = INT8_MIN;
	int64_t x486 = 8322LL;
	static volatile uint8_t x487 = UINT8_MAX;
	int16_t x488 = INT16_MIN;
	int64_t t96 = 4673933LL;

	t96 = (x485/((x486|x487)%x488));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x489 = INT16_MIN;
	int8_t x490 = 5;
	uint64_t x491 = 1080LLU;
	int8_t x492 = -1;
	uint64_t t97 = 360094LLU;

	t97 = (x489/((x490|x491)%x492));

	if (t97 != 17001607441206929LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x493 = 126;
	int16_t x494 = -130;
	uint32_t x495 = UINT32_MAX;
	volatile int32_t x496 = INT32_MIN;
	uint32_t t98 = 314460477U;

	t98 = (x493/((x494|x495)%x496));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x497 = 0U;
	static int64_t x498 = INT64_MIN;
	uint16_t x499 = 0U;
	uint32_t x500 = UINT32_MAX;
	static volatile int64_t t99 = -726551LL;

	t99 = (x497/((x498|x499)%x500));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

