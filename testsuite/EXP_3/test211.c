#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 23U;
int64_t x14 = INT64_MAX;
static int64_t x18 = INT64_MIN;
int64_t x21 = -189627138186696LL;
int32_t x24 = -1;
volatile int8_t x31 = -6;
volatile int64_t t6 = -235496169496000018LL;
volatile int16_t x43 = -1;
int64_t x45 = -1LL;
uint8_t x49 = 4U;
int64_t x60 = INT64_MIN;
uint64_t x63 = UINT64_MAX;
static uint8_t x64 = 10U;
int64_t t13 = -512528LL;
uint32_t x76 = 10849400U;
uint16_t x79 = 400U;
int16_t x111 = -1;
static int8_t x113 = INT8_MIN;
int64_t t20 = -3240684862401LL;
int32_t x122 = INT32_MIN;
int32_t t22 = -3500038;
uint64_t x142 = 608401LLU;
static int16_t x148 = -1;
int64_t x165 = INT64_MAX;
int16_t x170 = -3433;
volatile int32_t t32 = 8;
uint16_t x177 = 14067U;
static int8_t x179 = -1;
uint32_t x181 = 5U;
static int32_t x186 = 93774;
uint64_t x192 = 1046975988252LLU;
int16_t x212 = -1;
static int16_t x217 = 0;
volatile int16_t x221 = 31;
uint64_t t42 = 918987174184781513LLU;
uint64_t x230 = UINT64_MAX;
volatile int32_t x245 = INT32_MIN;
volatile int8_t x249 = -4;
uint8_t x251 = 5U;
static volatile int64_t t49 = 1157929189LL;
volatile int64_t x274 = INT64_MAX;
static uint16_t x281 = UINT16_MAX;
uint64_t x290 = UINT64_MAX;
static volatile uint32_t t57 = 12277U;
int64_t x301 = -1LL;
volatile uint64_t x302 = UINT64_MAX;
volatile uint64_t x304 = UINT64_MAX;
int16_t x311 = -3;
int64_t t59 = -14612815159593151LL;
int64_t x314 = 416LL;
int64_t x322 = INT64_MIN;
uint8_t x323 = 19U;
static uint32_t x326 = 141766U;
static int8_t x328 = INT8_MIN;
int64_t x330 = -7161156459829121LL;
static uint8_t x364 = 1U;
static int8_t x373 = 1;
volatile int8_t x374 = INT8_MAX;
uint16_t x385 = 14U;
uint16_t x386 = 145U;
uint32_t x387 = UINT32_MAX;
static int8_t x388 = INT8_MIN;
int32_t x389 = -1;
int64_t x390 = 419486233LL;
int32_t x394 = INT32_MAX;
int8_t x395 = -1;
int64_t x397 = 7752508199556LL;
int16_t x407 = INT16_MIN;
volatile int64_t x415 = INT64_MAX;
volatile uint64_t x423 = 23LLU;
int32_t x427 = INT32_MAX;
int32_t x430 = INT32_MIN;
int16_t x431 = -473;
int64_t t86 = 37LL;
static uint8_t x434 = 94U;
int32_t x435 = -1;
volatile int32_t x437 = -238;
volatile int16_t x438 = 182;
int16_t x439 = INT16_MIN;
static volatile uint32_t x443 = 2116735112U;
static uint32_t x447 = 2124927U;
volatile int64_t t90 = 6433LL;
volatile int64_t t91 = 67008089481881LL;
int64_t x457 = -152443961772LL;
static volatile uint8_t x464 = UINT8_MAX;
uint8_t x469 = 2U;
static int32_t x470 = -2;
static volatile int32_t t94 = -86441;
uint64_t x478 = 313147620LLU;
volatile uint64_t t96 = 15230461835LLU;
uint64_t t97 = 23716LLU;
static int16_t x486 = INT16_MIN;
static volatile int32_t t98 = 55094127;


void f0(void) {
	int8_t x1 = 5;
	int32_t x2 = INT32_MAX;
	int32_t x3 = -5326410;
	static volatile int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 187413022;

	t0 = ((x1/x2)*(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1160U;
	int16_t x6 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	static volatile uint32_t t1 = 603695991U;

	t1 = ((x5/x6)*(x7-x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int64_t x15 = -1LL;
	static volatile uint8_t x16 = 30U;
	int64_t t2 = -299LL;

	t2 = ((x13/x14)*(x15-x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	volatile int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	volatile int64_t t3 = 5LL;

	t3 = ((x17/x18)*(x19-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = INT16_MIN;
	static int16_t x23 = -1;
	int64_t t4 = 1021LL;

	t4 = ((x21/x22)*(x23-x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int64_t x26 = 338832LL;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = INT16_MAX;
	int64_t t5 = 4LL;

	t5 = ((x25/x26)*(x27-x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = 43110944LL;
	static int32_t x30 = INT32_MIN;
	int64_t x32 = -50038LL;

	t6 = ((x29/x30)*(x31-x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MAX;
	static volatile int32_t x39 = -1;
	static volatile uint64_t x40 = 61LLU;
	volatile uint64_t t7 = 4715366LLU;

	t7 = ((x37/x38)*(x39-x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 7;
	int8_t x42 = INT8_MAX;
	volatile int8_t x44 = 6;
	int32_t t8 = -62999;

	t8 = ((x41/x42)*(x43-x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x46 = 114;
	uint16_t x47 = 3U;
	int32_t x48 = 0;
	static volatile int64_t t9 = 15329007778LL;

	t9 = ((x45/x46)*(x47-x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x50 = 1U;
	uint32_t x51 = UINT32_MAX;
	volatile uint32_t x52 = UINT32_MAX;
	volatile uint32_t t10 = 125651958U;

	t10 = ((x49/x50)*(x51-x52));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = INT8_MIN;
	volatile int64_t x59 = INT64_MIN;
	volatile uint64_t t11 = 190LLU;

	t11 = ((x57/x58)*(x59-x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MAX;
	volatile uint64_t t12 = 227711150045532874LLU;

	t12 = ((x61/x62)*(x63-x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x65 = 0;
	static uint16_t x66 = UINT16_MAX;
	int64_t x67 = 363494LL;
	int64_t x68 = 107756885089LL;

	t13 = ((x65/x66)*(x67-x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = INT32_MIN;
	volatile int64_t x70 = INT64_MIN;
	int64_t x71 = 74355539175LL;
	uint8_t x72 = UINT8_MAX;
	int64_t t14 = -1633LL;

	t14 = ((x69/x70)*(x71-x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x74 = 45278406LLU;
	uint8_t x75 = UINT8_MAX;
	uint64_t t15 = 2154490LLU;

	t15 = ((x73/x74)*(x75-x76));

	if (t15 != 11386208329262989483LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	volatile uint64_t x78 = 1743630629940LLU;
	int16_t x80 = INT16_MAX;
	volatile uint64_t t16 = 213973680LLU;

	t16 = ((x77/x78)*(x79-x80));

	if (t16 != 18446743731282810382LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = -1LL;
	volatile int32_t x98 = INT32_MIN;
	int64_t x99 = -1LL;
	uint8_t x100 = UINT8_MAX;
	static volatile int64_t t17 = -69967751788018LL;

	t17 = ((x97/x98)*(x99-x100));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x105 = -1;
	int16_t x106 = INT16_MIN;
	static uint16_t x107 = 14U;
	int8_t x108 = INT8_MIN;
	static int32_t t18 = -6;

	t18 = ((x105/x106)*(x107-x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = -1;
	uint8_t x110 = 1U;
	uint8_t x112 = 0U;
	volatile int32_t t19 = -1479;

	t19 = ((x109/x110)*(x111-x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x114 = -1LL;
	static uint16_t x115 = UINT16_MAX;
	volatile uint32_t x116 = UINT32_MAX;

	t20 = ((x113/x114)*(x115-x116));

	if (t20 != 8388608LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = 11;
	int32_t x118 = -1;
	uint16_t x119 = UINT16_MAX;
	uint32_t x120 = 102519221U;
	uint32_t t21 = 79796674U;

	t21 = ((x117/x118)*(x119-x120));

	if (t21 != 1126990546U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x121 = INT8_MIN;
	static volatile int8_t x123 = INT8_MIN;
	uint8_t x124 = 0U;

	t22 = ((x121/x122)*(x123-x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x125 = 1;
	uint32_t x126 = 95532467U;
	int32_t x127 = INT32_MIN;
	static uint8_t x128 = 0U;
	volatile uint32_t t23 = 97U;

	t23 = ((x125/x126)*(x127-x128));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = INT8_MIN;
	static int16_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t24 = 24242501;

	t24 = ((x129/x130)*(x131-x132));

	if (t24 != 8404864) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x141 = 63895U;
	uint8_t x143 = 2U;
	static uint8_t x144 = 106U;
	volatile uint64_t t25 = 271524188456839972LLU;

	t25 = ((x141/x142)*(x143-x144));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = INT16_MIN;
	static int64_t x146 = INT64_MIN;
	static volatile int64_t x147 = INT64_MIN;
	int64_t t26 = 39931090102791156LL;

	t26 = ((x145/x146)*(x147-x148));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x149 = INT64_MIN;
	volatile int64_t x150 = 157768LL;
	uint16_t x151 = UINT16_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t27 = 862902904304139285LLU;

	t27 = ((x149/x150)*(x151-x152));

	if (t27 != 14615403689047818240LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = INT16_MIN;
	uint16_t x154 = 309U;
	int64_t x155 = -2LL;
	static volatile uint64_t x156 = 11869545889848389LLU;
	static uint64_t t28 = 46LLU;

	t28 = ((x153/x154)*(x155-x156));

	if (t28 != 1258171864323929446LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = -1;
	int8_t x158 = -1;
	volatile int32_t x159 = 738546;
	volatile int64_t x160 = -46034LL;
	int64_t t29 = -749306LL;

	t29 = ((x157/x158)*(x159-x160));

	if (t29 != 784580LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x161 = UINT16_MAX;
	int64_t x162 = INT64_MAX;
	int32_t x163 = -440540;
	int64_t x164 = 906LL;
	static int64_t t30 = -129327502953LL;

	t30 = ((x161/x162)*(x163-x164));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x166 = -1;
	static int8_t x167 = -1;
	volatile uint64_t x168 = 5526484226574027LLU;
	uint64_t t31 = 19593928334LLU;

	t31 = ((x165/x166)*(x167-x168));

	if (t31 != 18441217589482977588LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int8_t x171 = INT8_MAX;
	int16_t x172 = -1;

	t32 = ((x169/x170)*(x171-x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x178 = INT16_MAX;
	volatile int16_t x180 = INT16_MIN;
	int32_t t33 = 3;

	t33 = ((x177/x178)*(x179-x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x182 = 30U;
	volatile int64_t x183 = -1LL;
	uint64_t x184 = 361942LLU;
	uint64_t t34 = 1LLU;

	t34 = ((x181/x182)*(x183-x184));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x185 = 2855U;
	int64_t x187 = INT64_MIN;
	static uint32_t x188 = 0U;
	static int64_t t35 = -147669LL;

	t35 = ((x185/x186)*(x187-x188));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x189 = UINT32_MAX;
	uint64_t x190 = 427010031948295963LLU;
	uint32_t x191 = 6235U;
	volatile uint64_t t36 = 6371146511643LLU;

	t36 = ((x189/x190)*(x191-x192));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = 4316U;
	int16_t x199 = 210;
	int8_t x200 = INT8_MAX;
	volatile int64_t t37 = 787020372LL;

	t37 = ((x197/x198)*(x199-x200));

	if (t37 != -177372539170284070LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x201 = INT32_MAX;
	volatile uint32_t x202 = UINT32_MAX;
	int8_t x203 = 1;
	int8_t x204 = 13;
	uint32_t t38 = 983094081U;

	t38 = ((x201/x202)*(x203-x204));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x205 = 5U;
	int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	int32_t x208 = -1;
	int64_t t39 = 121106389LL;

	t39 = ((x205/x206)*(x207-x208));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = -13599428;
	int64_t x210 = INT64_MAX;
	uint64_t x211 = 88730LLU;
	uint64_t t40 = 4398869220943502205LLU;

	t40 = ((x209/x210)*(x211-x212));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x218 = INT16_MIN;
	volatile int32_t x219 = INT32_MIN;
	uint64_t x220 = 273823863640120LLU;
	volatile uint64_t t41 = 3001064597LLU;

	t41 = ((x217/x218)*(x219-x220));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x222 = -1LL;
	uint16_t x223 = UINT16_MAX;
	uint64_t x224 = 456046LLU;

	t42 = ((x221/x222)*(x223-x224));

	if (t42 != 12105841LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x225 = 69U;
	static uint32_t x226 = 1445623U;
	uint64_t x227 = 724LLU;
	volatile uint16_t x228 = UINT16_MAX;
	uint64_t t43 = 746368610271LLU;

	t43 = ((x225/x226)*(x227-x228));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x229 = INT64_MIN;
	uint16_t x231 = 351U;
	uint32_t x232 = 197043218U;
	uint64_t t44 = 807252766886955913LLU;

	t44 = ((x229/x230)*(x231-x232));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x237 = 5U;
	int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	int32_t x240 = 1;
	static int32_t t45 = -1014118;

	t45 = ((x237/x238)*(x239-x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	int64_t t46 = -57408466LL;

	t46 = ((x245/x246)*(x247-x248));

	if (t46 != 4611615649683210240LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x250 = INT16_MIN;
	uint8_t x252 = UINT8_MAX;
	int32_t t47 = -331518544;

	t47 = ((x249/x250)*(x251-x252));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x253 = 1394302062852104LL;
	int16_t x254 = INT16_MAX;
	int32_t x255 = INT32_MAX;
	static uint64_t x256 = UINT64_MAX;
	volatile uint64_t t48 = 84924551354395574LLU;

	t48 = ((x253/x254)*(x255-x256));

	if (t48 != 17592792384276529152LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x261 = UINT32_MAX;
	static volatile int8_t x262 = -1;
	static int32_t x263 = INT32_MIN;
	int64_t x264 = 15519271230LL;

	t49 = ((x261/x262)*(x263-x264));

	if (t49 != -17666754878LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x265 = 177U;
	int8_t x266 = -1;
	int32_t x267 = 3;
	int16_t x268 = 15501;
	volatile int32_t t50 = -2;

	t50 = ((x265/x266)*(x267-x268));

	if (t50 != 2743146) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x269 = 1165195LLU;
	volatile int64_t x270 = INT64_MIN;
	volatile uint16_t x271 = UINT16_MAX;
	int8_t x272 = INT8_MAX;
	uint64_t t51 = 1584892821253791272LLU;

	t51 = ((x269/x270)*(x271-x272));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x273 = -22928861;
	volatile uint16_t x275 = 183U;
	int64_t x276 = 497190510499870717LL;
	volatile int64_t t52 = -52074LL;

	t52 = ((x273/x274)*(x275-x276));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MAX;
	int32_t x279 = -154469254;
	volatile int32_t x280 = INT32_MIN;
	int32_t t53 = -6957504;

	t53 = ((x277/x278)*(x279-x280));

	if (t53 != -1993014394) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MAX;
	volatile int32_t x284 = 241;
	int32_t t54 = -3;

	t54 = ((x281/x282)*(x283-x284));

	if (t54 != 114) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = INT64_MIN;
	static uint16_t x286 = 1U;
	uint64_t x287 = UINT64_MAX;
	volatile uint64_t x288 = 905617467318771685LLU;
	static uint64_t t55 = 751106136726880558LLU;

	t55 = ((x285/x286)*(x287-x288));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = INT16_MIN;
	volatile uint32_t x291 = 22663U;
	volatile uint64_t x292 = UINT64_MAX;
	volatile uint64_t t56 = 2051048170758159958LLU;

	t56 = ((x289/x290)*(x291-x292));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MAX;
	uint8_t x295 = 1U;
	volatile int8_t x296 = INT8_MAX;

	t57 = ((x293/x294)*(x295-x296));

	if (t57 != 4294967044U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x303 = 1553121U;
	static volatile uint64_t t58 = 559902963699209LLU;

	t58 = ((x301/x302)*(x303-x304));

	if (t58 != 1553122LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x309 = -1;
	int64_t x310 = INT64_MIN;
	volatile int16_t x312 = -1;

	t59 = ((x309/x310)*(x311-x312));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x313 = 1497926280119402519LLU;
	uint8_t x315 = UINT8_MAX;
	static uint8_t x316 = 59U;
	static volatile uint64_t t60 = 250756311357784LLU;

	t60 = ((x313/x314)*(x315-x316));

	if (t60 != 705753728133179992LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x317 = INT16_MAX;
	int8_t x318 = -1;
	volatile uint8_t x319 = 5U;
	int8_t x320 = 1;
	int32_t t61 = 70;

	t61 = ((x317/x318)*(x319-x320));

	if (t61 != -131068) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x321 = INT64_MIN;
	int32_t x324 = 4925681;
	volatile int64_t t62 = 1LL;

	t62 = ((x321/x322)*(x323-x324));

	if (t62 != -4925662LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x325 = 6U;
	int8_t x327 = -1;
	static volatile uint32_t t63 = 21179U;

	t63 = ((x325/x326)*(x327-x328));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x331 = 14;
	volatile int16_t x332 = 868;
	volatile int64_t t64 = 353448597LL;

	t64 = ((x329/x330)*(x331-x332));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x337 = -1;
	int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MAX;
	static int8_t x340 = INT8_MIN;
	int32_t t65 = -376191;

	t65 = ((x337/x338)*(x339-x340));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = -6657890931LL;
	int64_t x342 = -1LL;
	static uint64_t x343 = 373199972590LLU;
	volatile int16_t x344 = INT16_MIN;
	static uint64_t t66 = 13717180362LLU;

	t66 = ((x341/x342)*(x343-x344));

	if (t66 != 12861225245099691754LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x345 = INT64_MIN;
	static uint64_t x346 = UINT64_MAX;
	int16_t x347 = INT16_MAX;
	uint64_t x348 = 312827LLU;
	volatile uint64_t t67 = 12382135LLU;

	t67 = ((x345/x346)*(x347-x348));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = INT16_MIN;
	static int16_t x350 = -1;
	static uint32_t x351 = 44U;
	int64_t x352 = -1LL;
	static int64_t t68 = 3104139650891LL;

	t68 = ((x349/x350)*(x351-x352));

	if (t68 != 1474560LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x353 = 1422U;
	volatile int16_t x354 = -1;
	int32_t x355 = -85474;
	uint16_t x356 = 528U;
	volatile int32_t t69 = 941663;

	t69 = ((x353/x354)*(x355-x356));

	if (t69 != 122294844) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x357 = -1057964473309092LL;
	volatile uint8_t x358 = UINT8_MAX;
	uint64_t x359 = UINT64_MAX;
	volatile uint64_t x360 = 558781540221LLU;
	static uint64_t t70 = 1557449LLU;

	t70 = ((x357/x358)*(x359-x360));

	if (t70 != 4709030599623369476LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x361 = 1956864LLU;
	int32_t x362 = 676;
	int64_t x363 = INT64_MAX;
	uint64_t t71 = 165088039967LLU;

	t71 = ((x361/x362)*(x363-x364));

	if (t71 != 18446744073709545828LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = -1LL;
	int64_t x366 = -3339LL;
	int32_t x367 = -1;
	static uint8_t x368 = 76U;
	static int64_t t72 = 50797966890844LL;

	t72 = ((x365/x366)*(x367-x368));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x369 = -3772906992079617LL;
	static volatile int64_t x370 = INT64_MAX;
	int8_t x371 = 3;
	int32_t x372 = -3;
	static int64_t t73 = -90463757925798602LL;

	t73 = ((x369/x370)*(x371-x372));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x375 = -17;
	uint64_t x376 = 4411580294558413270LLU;
	uint64_t t74 = 11190399692372663LLU;

	t74 = ((x373/x374)*(x375-x376));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = INT16_MAX;
	static int16_t x378 = INT16_MAX;
	int16_t x379 = -1;
	int8_t x380 = INT8_MIN;
	static int32_t t75 = 156085;

	t75 = ((x377/x378)*(x379-x380));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x381 = INT8_MIN;
	static int64_t x382 = -1LL;
	uint16_t x383 = 14943U;
	static int32_t x384 = -28;
	int64_t t76 = 552211LL;

	t76 = ((x381/x382)*(x383-x384));

	if (t76 != 1916288LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t t77 = 23077U;

	t77 = ((x385/x386)*(x387-x388));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x391 = 2292U;
	uint8_t x392 = UINT8_MAX;
	volatile int64_t t78 = 178638LL;

	t78 = ((x389/x390)*(x391-x392));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x393 = -1;
	int32_t x396 = 4126421;
	int32_t t79 = -114076929;

	t79 = ((x393/x394)*(x395-x396));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x398 = -1;
	uint32_t x399 = 28U;
	uint64_t x400 = 142367140873LLU;
	uint64_t t80 = 0LLU;

	t80 = ((x397/x398)*(x399-x400));

	if (t80 != 15282074090235727924LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x405 = 1;
	int8_t x406 = 6;
	static int8_t x408 = INT8_MIN;
	int32_t t81 = 8;

	t81 = ((x405/x406)*(x407-x408));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = INT16_MIN;
	int64_t x414 = INT64_MAX;
	int16_t x416 = INT16_MAX;
	int64_t t82 = 2523329887LL;

	t82 = ((x413/x414)*(x415-x416));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = INT64_MIN;
	int8_t x419 = INT8_MAX;
	static uint32_t x420 = 104477U;
	volatile int64_t t83 = -515LL;

	t83 = ((x417/x418)*(x419-x420));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x421 = 56U;
	uint8_t x422 = UINT8_MAX;
	volatile int16_t x424 = -1;
	uint64_t t84 = 316738036448795238LLU;

	t84 = ((x421/x422)*(x423-x424));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x425 = INT64_MIN;
	int64_t x426 = -53027044083LL;
	volatile uint64_t x428 = 38825075LLU;
	uint64_t t85 = 135437744LLU;

	t85 = ((x425/x426)*(x427-x428));

	if (t85 != 366774026489554076LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x429 = 6937;
	int64_t x432 = -1LL;

	t86 = ((x429/x430)*(x431-x432));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x433 = 2769U;
	static int32_t x436 = -1;
	uint32_t t87 = 940396444U;

	t87 = ((x433/x434)*(x435-x436));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x440 = -1;
	static volatile int32_t t88 = -5;

	t88 = ((x437/x438)*(x439-x440));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	uint8_t x444 = UINT8_MAX;
	uint32_t t89 = 503139U;

	t89 = ((x441/x442)*(x443-x444));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x445 = UINT16_MAX;
	int64_t x446 = -1LL;
	int16_t x448 = INT16_MIN;

	t90 = ((x445/x446)*(x447-x448));

	if (t90 != -141404541825LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x449 = 4U;
	static int64_t x450 = 33015303104547268LL;
	static volatile int32_t x451 = INT32_MIN;
	int64_t x452 = 4462475LL;

	t91 = ((x449/x450)*(x451-x452));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x458 = INT8_MAX;
	int8_t x459 = -21;
	static uint64_t x460 = 137272LLU;
	volatile uint64_t t92 = 4LLU;

	t92 = ((x457/x458)*(x459-x460));

	if (t92 != 164799124658415LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x461 = INT32_MAX;
	volatile int16_t x462 = INT16_MIN;
	uint64_t x463 = UINT64_MAX;
	static uint64_t t93 = 30209466278426LLU;

	t93 = ((x461/x462)*(x463-x464));

	if (t93 != 16776960LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x471 = UINT8_MAX;
	uint8_t x472 = 1U;

	t94 = ((x469/x470)*(x471-x472));

	if (t94 != -254) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x473 = INT32_MIN;
	volatile uint32_t x474 = 6U;
	uint8_t x475 = 90U;
	uint8_t x476 = 1U;
	static uint32_t t95 = 370993521U;

	t95 = ((x473/x474)*(x475-x476));

	if (t95 != 1789569677U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x477 = 0;
	int64_t x479 = 290419931852921LL;
	int32_t x480 = -1143;

	t96 = ((x477/x478)*(x479-x480));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x481 = 1LLU;
	uint32_t x482 = UINT32_MAX;
	static int8_t x483 = INT8_MIN;
	uint8_t x484 = 1U;

	t97 = ((x481/x482)*(x483-x484));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x485 = -74864644;
	int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;

	t98 = ((x485/x486)*(x487-x488));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x489 = INT16_MIN;
	volatile uint16_t x490 = 135U;
	static int32_t x491 = 402;
	uint32_t x492 = UINT32_MAX;
	uint32_t t99 = 927U;

	t99 = ((x489/x490)*(x491-x492));

	if (t99 != 4294869770U) { NG(); } else { ; }
	
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

