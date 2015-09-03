#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 857U;
volatile int32_t x7 = INT32_MIN;
static uint8_t x10 = UINT8_MAX;
uint32_t x12 = 87U;
uint8_t x13 = 3U;
int32_t x17 = INT32_MAX;
uint8_t x22 = UINT8_MAX;
static uint64_t t5 = 185LLU;
int16_t x25 = 0;
int16_t x28 = 11;
volatile uint64_t t7 = 0LLU;
uint64_t x44 = 0LLU;
volatile int8_t x47 = -1;
static uint64_t t10 = 1719931739LLU;
uint32_t x50 = 138U;
volatile uint64_t t13 = 27244981LLU;
volatile uint16_t x72 = 1U;
int16_t x78 = -1;
volatile uint8_t x86 = 1U;
int8_t x88 = INT8_MAX;
uint64_t x90 = 799079LLU;
int32_t x93 = -1;
static int32_t x95 = 0;
volatile int32_t t19 = 15912;
int64_t x109 = INT64_MIN;
static int8_t x110 = -1;
volatile int64_t t23 = -15002196528LL;
uint64_t t26 = 62727629664280115LLU;
uint32_t x133 = 968160646U;
static volatile int16_t x135 = INT16_MIN;
volatile uint16_t x148 = 25772U;
int64_t t28 = -3259992444556LL;
int8_t x153 = INT8_MIN;
static volatile uint16_t x162 = 96U;
int32_t x167 = -1;
int32_t x175 = -13085;
int8_t x176 = INT8_MIN;
static int16_t x178 = 2;
static uint32_t x182 = 88599696U;
int16_t x207 = INT16_MIN;
static int64_t x218 = INT64_MIN;
uint8_t x236 = 0U;
volatile uint64_t t44 = 3698795998511LLU;
static int32_t t45 = 12;
static uint16_t x258 = 234U;
uint64_t x259 = 8050LLU;
int64_t t47 = 6512285276136023LL;
static volatile int8_t x267 = -1;
int64_t x273 = -1LL;
volatile uint64_t t50 = 79126810329264354LLU;
uint8_t x284 = 52U;
volatile int64_t x291 = -78510745929882782LL;
static uint8_t x298 = 0U;
int32_t t55 = INT32_MIN;
static int32_t x303 = INT32_MAX;
static uint8_t x310 = UINT8_MAX;
int8_t x312 = INT8_MIN;
int64_t t59 = INT64_MIN;
volatile uint64_t x321 = 8085LLU;
uint8_t x322 = 6U;
static volatile uint32_t t62 = 116713000U;
uint64_t t63 = 169239LLU;
int8_t x338 = INT8_MIN;
int16_t x340 = INT16_MIN;
int16_t x341 = INT16_MIN;
int8_t x344 = 2;
static volatile int32_t x346 = -5099084;
int8_t x354 = -1;
uint64_t x372 = 49986781527943LLU;
int8_t x375 = -1;
uint16_t x383 = 183U;
static uint64_t x384 = 122812225LLU;
int32_t x386 = INT32_MAX;
int8_t x390 = 11;
static uint64_t x392 = 216586450LLU;
int32_t x393 = INT32_MAX;
static int32_t x396 = -578765803;
static volatile uint32_t t75 = 22150U;
uint64_t x401 = 49LLU;
uint16_t x404 = 6U;
int8_t x408 = -5;
volatile int32_t x417 = 124345;
uint64_t x418 = 7539352516LLU;
volatile uint32_t x421 = UINT32_MAX;
uint16_t x422 = UINT16_MAX;
uint64_t x427 = 17880463434953805LLU;
static uint64_t t83 = 2574LLU;
int16_t x437 = INT16_MAX;
static int64_t x439 = -557145199207LL;
int16_t x455 = -4397;
int32_t x459 = INT32_MIN;
volatile uint64_t t88 = 1605465820517999LLU;
int8_t x476 = 1;
static int8_t x483 = -1;
volatile int32_t t91 = 1955;
int64_t t92 = 262LL;
uint16_t x498 = 27U;
uint32_t x528 = 92213U;
uint32_t t97 = 80624U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	uint32_t x4 = 5U;

	t0 = (x1&((x2^x3)*x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 54592978347969LLU;
	volatile uint32_t x6 = 2234U;
	int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 38358625LLU;

	t1 = (x5&((x6^x7)*x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 94U;
	int16_t x11 = INT16_MAX;
	uint32_t t2 = 20U;

	t2 = (x9&((x10^x11)*x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	volatile uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MAX;
	uint64_t t3 = 4633339621058910482LLU;

	t3 = (x13&((x14^x15)*x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = -1;
	volatile int8_t x19 = INT8_MIN;
	volatile int64_t x20 = 68756734LL;
	static volatile int64_t t4 = 328062LL;

	t4 = (x17&((x18^x19)*x20));

	if (t4 != 142170626LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x23 = 1298U;
	uint64_t x24 = UINT64_MAX;

	t5 = (x21&((x22^x23)*x24));

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = UINT8_MAX;
	uint8_t x27 = 0U;
	volatile int32_t t6 = -7;

	t6 = (x25&((x26^x27)*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	volatile uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 24439750U;

	t7 = (x29&((x30^x31)*x32));

	if (t7 != 52483961338724352LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	int16_t x38 = INT16_MIN;
	static volatile uint8_t x39 = 47U;
	volatile int64_t x40 = -71LL;
	volatile int64_t t8 = -118202079819LL;

	t8 = (x37&((x38^x39)*x40));

	if (t8 != 2323191LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	int64_t x42 = INT64_MIN;
	static uint8_t x43 = 4U;
	uint64_t t9 = 4195090598LLU;

	t9 = (x41&((x42^x43)*x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 8577U;
	uint64_t x46 = 100466669361954515LLU;
	int64_t x48 = INT64_MIN;

	t10 = (x45&((x46^x47)*x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	volatile int16_t x51 = -3;
	static uint8_t x52 = UINT8_MAX;
	volatile uint32_t t11 = 67416U;

	t11 = (x49&((x50^x51)*x52));

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = 1;
	volatile int8_t x54 = INT8_MIN;
	uint16_t x55 = 72U;
	volatile uint8_t x56 = 0U;
	int32_t t12 = 1;

	t12 = (x53&((x54^x55)*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 316028888387170LLU;
	static int64_t x66 = -274347700LL;
	int8_t x67 = 1;
	int16_t x68 = INT16_MIN;

	t13 = (x65&((x66^x67)*x68));

	if (t13 != 8989651861504LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = -1;
	int8_t x70 = INT8_MAX;
	static volatile int64_t x71 = INT64_MIN;
	volatile int64_t t14 = -14LL;

	t14 = (x69&((x70^x71)*x72));

	if (t14 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	static uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MIN;
	volatile uint32_t t15 = 13174U;

	t15 = (x77&((x78^x79)*x80));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = -7943;
	uint32_t x82 = 9U;
	static int32_t x83 = INT32_MIN;
	uint32_t x84 = UINT32_MAX;
	static uint32_t t16 = 2037770312U;

	t16 = (x81&((x82^x83)*x84));

	if (t16 != 2147475697U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = -22;
	uint64_t x87 = 827717688413264521LLU;
	uint64_t t17 = 14507840LLU;

	t17 = (x85&((x86^x87)*x88));

	if (t17 != 12886426059936835944LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MIN;
	int32_t x91 = -1004871895;
	int32_t x92 = INT32_MIN;
	static volatile uint64_t t18 = 7091LLU;

	t18 = (x89&((x90^x91)*x92));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x94 = 29U;
	int32_t x96 = -2427;

	t19 = (x93&((x94^x95)*x96));

	if (t19 != -70383) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = 1;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = 5U;
	static int8_t x104 = -1;
	volatile int64_t t20 = 23968678LL;

	t20 = (x101&((x102^x103)*x104));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x111 = INT8_MIN;
	uint32_t x112 = 2375534U;
	int64_t t21 = -84827090LL;

	t21 = (x109&((x110^x111)*x112));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	volatile int64_t x114 = INT64_MIN;
	uint64_t x115 = UINT64_MAX;
	volatile int64_t x116 = INT64_MIN;
	uint64_t t22 = 2LLU;

	t22 = (x113&((x114^x115)*x116));

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x117 = 6U;
	uint16_t x118 = 1U;
	uint8_t x119 = UINT8_MAX;
	volatile int64_t x120 = -1LL;

	t23 = (x117&((x118^x119)*x120));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x121 = UINT8_MAX;
	static int16_t x122 = INT16_MIN;
	volatile uint8_t x123 = 91U;
	int16_t x124 = INT16_MIN;
	int32_t t24 = -7;

	t24 = (x121&((x122^x123)*x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x125 = INT16_MAX;
	uint8_t x126 = 14U;
	int16_t x127 = -4;
	int16_t x128 = 0;
	static volatile int32_t t25 = 29;

	t25 = (x125&((x126^x127)*x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = 2550526569LLU;
	static volatile int8_t x130 = 0;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = 1U;

	t26 = (x129&((x130^x131)*x132));

	if (t26 != 2550526464LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x134 = -1;
	volatile uint16_t x136 = UINT16_MAX;
	static uint32_t t27 = 1U;

	t27 = (x133&((x134^x135)*x136));

	if (t27 != 968130560U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = 5U;
	uint16_t x147 = 13U;

	t28 = (x145&((x146^x147)*x148));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x154 = INT8_MIN;
	volatile int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MAX;
	int32_t t29 = 1630;

	t29 = (x153&((x154^x155)*x156));

	if (t29 != 1069514880) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x157 = 6;
	int8_t x158 = INT8_MAX;
	volatile uint64_t x159 = 81973LLU;
	uint32_t x160 = 1768721624U;
	static uint64_t t30 = 96255046060815995LLU;

	t30 = (x157&((x158^x159)*x160));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = INT16_MAX;
	int16_t x163 = -1;
	int32_t x164 = -1;
	static int32_t t31 = -667219437;

	t31 = (x161&((x162^x163)*x164));

	if (t31 != 97) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MIN;
	volatile uint16_t x168 = UINT16_MAX;
	static int32_t t32 = 138416492;

	t32 = (x165&((x166^x167)*x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = -131;
	uint64_t x174 = 237692370831LLU;
	volatile uint64_t t33 = 2642825423767557LLU;

	t33 = (x173&((x174^x175)*x176));

	if (t33 != 30424621795840LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = 11411LL;
	int8_t x179 = -1;
	uint32_t x180 = 17402767U;
	int64_t t34 = 27526113LL;

	t34 = (x177&((x178^x179)*x180));

	if (t34 != 3091LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int32_t x183 = -1;
	static int32_t x184 = 19900070;
	uint64_t t35 = 13953805893902549LLU;

	t35 = (x181&((x182^x183)*x184));

	if (t35 != 4032271354LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = 507072964LL;
	volatile int16_t x194 = 802;
	volatile uint64_t x195 = 68547LLU;
	uint32_t x196 = UINT32_MAX;
	volatile uint64_t t36 = 577552LLU;

	t36 = (x193&((x194^x195)*x196));

	if (t36 != 507007236LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = INT64_MIN;
	volatile int64_t x198 = -1LL;
	int32_t x199 = INT32_MIN;
	static int32_t x200 = INT32_MIN;
	int64_t t37 = INT64_MIN;

	t37 = (x197&((x198^x199)*x200));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x205 = 3U;
	int16_t x206 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t38 = 3;

	t38 = (x205&((x206^x207)*x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x217 = -6721;
	int32_t x219 = INT32_MIN;
	volatile int16_t x220 = -1;
	static volatile int64_t t39 = -248415730967995LL;

	t39 = (x217&((x218^x219)*x220));

	if (t39 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x221 = INT8_MIN;
	static int16_t x222 = 15653;
	int16_t x223 = INT16_MAX;
	static volatile uint32_t x224 = 68946U;
	uint32_t t40 = 250281675U;

	t40 = (x221&((x222^x223)*x224));

	if (t40 != 1179941760U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x225 = -1;
	volatile uint32_t x226 = 50U;
	uint8_t x227 = 3U;
	static int32_t x228 = INT32_MIN;
	static uint32_t t41 = 28071952U;

	t41 = (x225&((x226^x227)*x228));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 1U;
	uint32_t t42 = 1442U;

	t42 = (x233&((x234^x235)*x236));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x245 = 0U;
	uint16_t x246 = UINT16_MAX;
	int64_t x247 = 115325236432LL;
	volatile uint8_t x248 = 15U;
	volatile int64_t t43 = -6LL;

	t43 = (x245&((x246^x247)*x248));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x249 = 223861598663937LLU;
	static int16_t x250 = INT16_MAX;
	int8_t x251 = 0;
	uint8_t x252 = UINT8_MAX;

	t44 = (x249&((x250^x251)*x252));

	if (t44 != 1127681LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;

	t45 = (x253&((x254^x255)*x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x257 = UINT32_MAX;
	int32_t x260 = -5;
	static volatile uint64_t t46 = 4604039256553174534LLU;

	t46 = (x257&((x258^x259)*x260));

	if (t46 != 4294926856LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x261 = -1;
	int64_t x262 = -11LL;
	uint16_t x263 = 39U;
	int64_t x264 = -493885665347360LL;

	t47 = (x261&((x262^x263)*x264));

	if (t47 != 22718740605978560LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = UINT64_MAX;
	uint8_t x268 = UINT8_MAX;
	static volatile uint64_t t48 = 1341402359775767377LLU;

	t48 = (x265&((x266^x267)*x268));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x274 = INT32_MIN;
	volatile uint64_t x275 = 443578253048929LLU;
	static volatile uint16_t x276 = 1U;
	uint64_t t49 = 69035392LLU;

	t49 = (x273&((x274^x275)*x276));

	if (t49 != 18446300494255357025LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = INT8_MIN;
	volatile uint64_t x279 = 0LLU;
	int8_t x280 = INT8_MIN;

	t50 = (x277&((x278^x279)*x280));

	if (t50 != 16384LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x281 = -6126;
	int16_t x282 = -1;
	int16_t x283 = -1;
	int32_t t51 = -4;

	t51 = (x281&((x282^x283)*x284));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x285 = -1LL;
	uint64_t x286 = 1LLU;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = INT64_MAX;
	uint64_t t52 = 45190091LLU;

	t52 = (x285&((x286^x287)*x288));

	if (t52 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x289 = 17;
	int8_t x290 = -1;
	volatile int8_t x292 = 13;
	volatile int64_t t53 = 1LL;

	t53 = (x289&((x290^x291)*x292));

	if (t53 != 17LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x293 = 10897724085010426LLU;
	uint64_t x294 = UINT64_MAX;
	static uint64_t x295 = 104557077LLU;
	volatile int64_t x296 = -1LL;
	uint64_t t54 = 79LLU;

	t54 = (x293&((x294^x295)*x296));

	if (t54 != 70412818LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x297 = INT32_MIN;
	static uint16_t x299 = 4U;
	static volatile int8_t x300 = -31;

	t55 = (x297&((x298^x299)*x300));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x302 = 62880U;
	volatile int16_t x304 = INT16_MIN;
	volatile uint32_t t56 = 22U;

	t56 = (x301&((x302^x303)*x304));

	if (t56 != 2060484608U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x305 = INT16_MIN;
	static uint32_t x306 = UINT32_MAX;
	volatile uint64_t x307 = UINT64_MAX;
	uint8_t x308 = UINT8_MAX;
	uint64_t t57 = 5517LLU;

	t57 = (x305&((x306^x307)*x308));

	if (t57 != 18446742978492891136LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x309 = INT16_MAX;
	int32_t x311 = -239;
	int32_t t58 = -23;

	t58 = (x309&((x310^x311)*x312));

	if (t58 != 2304) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x313 = INT64_MIN;
	uint8_t x314 = 22U;
	volatile uint16_t x315 = UINT16_MAX;
	int32_t x316 = -14527;

	t59 = (x313&((x314^x315)*x316));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	uint64_t t60 = 387LLU;

	t60 = (x317&((x318^x319)*x320));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x323 = 3535U;
	volatile uint8_t x324 = UINT8_MAX;
	uint64_t t61 = 633506074302431573LLU;

	t61 = (x321&((x322^x323)*x324));

	if (t61 != 6933LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = 80;
	int16_t x331 = -81;
	int32_t x332 = INT32_MAX;

	t62 = (x329&((x330^x331)*x332));

	if (t62 != 2147483649U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x333 = 21;
	int8_t x334 = INT8_MIN;
	static int64_t x335 = INT64_MIN;
	volatile uint64_t x336 = UINT64_MAX;

	t63 = (x333&((x334^x335)*x336));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x337 = 9;
	volatile int16_t x339 = INT16_MIN;
	int32_t t64 = -3293;

	t64 = (x337&((x338^x339)*x340));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x342 = INT8_MIN;
	int8_t x343 = 1;
	volatile int32_t t65 = 0;

	t65 = (x341&((x342^x343)*x344));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x345 = 706134013584LLU;
	static uint16_t x347 = UINT16_MAX;
	volatile uint32_t x348 = 371379975U;
	volatile uint64_t t66 = 0LLU;

	t66 = (x345&((x346^x347)*x348));

	if (t66 != 1753759744LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x353 = -1;
	int8_t x355 = -1;
	static uint8_t x356 = 44U;
	int32_t t67 = -1215396;

	t67 = (x353&((x354^x355)*x356));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = INT16_MIN;
	volatile int8_t x358 = -1;
	int64_t x359 = 18606LL;
	int16_t x360 = INT16_MIN;
	int64_t t68 = -24036737452276LL;

	t68 = (x357&((x358^x359)*x360));

	if (t68 != 609714176LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x365 = -1LL;
	int16_t x366 = INT16_MAX;
	volatile int64_t x367 = -1LL;
	volatile int8_t x368 = INT8_MAX;
	volatile int64_t t69 = -35084842370160578LL;

	t69 = (x365&((x366^x367)*x368));

	if (t69 != -4161536LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x369 = 278412641572LLU;
	int32_t x370 = INT32_MIN;
	int16_t x371 = -3;
	volatile uint64_t t70 = 2151352435344522667LLU;

	t70 = (x369&((x370^x371)*x372));

	if (t70 != 274922881312LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x373 = INT16_MIN;
	volatile uint16_t x374 = 1U;
	static int8_t x376 = INT8_MAX;
	int32_t t71 = 2095140;

	t71 = (x373&((x374^x375)*x376));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x381 = -1;
	int32_t x382 = -60317697;
	static volatile uint64_t t72 = 35LLU;

	t72 = (x381&((x382^x383)*x384));

	if (t72 != 18439336300659468616LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x385 = -28043947882518393LL;
	uint64_t x387 = 14889424358929018LLU;
	int32_t x388 = -1;
	static volatile uint64_t t73 = 2838596166526LLU;

	t73 = (x385&((x386^x387)*x388));

	if (t73 != 18412995824873168899LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x389 = -1;
	static volatile uint8_t x391 = 1U;
	static uint64_t t74 = 33058LLU;

	t74 = (x389&((x390^x391)*x392));

	if (t74 != 2165864500LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x394 = 8962U;
	static uint8_t x395 = 9U;

	t75 = (x393&((x394^x395)*x396));

	if (t75 != 507442151U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x397 = 5;
	static int32_t x398 = INT32_MAX;
	static volatile uint64_t x399 = 729393994504LLU;
	int16_t x400 = -1;
	uint64_t t76 = 39956289LLU;

	t76 = (x397&((x398^x399)*x400));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x402 = 6U;
	uint16_t x403 = UINT16_MAX;
	volatile uint64_t t77 = 2598LLU;

	t77 = (x401&((x402^x403)*x404));

	if (t77 != 16LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x405 = INT8_MAX;
	uint16_t x406 = 5616U;
	volatile uint64_t x407 = 251366LLU;
	volatile uint64_t t78 = 18638176921LLU;

	t78 = (x405&((x406^x407)*x408));

	if (t78 != 18LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x409 = INT8_MIN;
	volatile int16_t x410 = INT16_MAX;
	int16_t x411 = -12919;
	static volatile int64_t x412 = -32586483433LL;
	int64_t t79 = 28LL;

	t79 = (x409&((x410^x411)*x412));

	if (t79 != 646841696145024LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x413 = 6;
	int8_t x414 = -1;
	volatile uint8_t x415 = 1U;
	volatile int16_t x416 = -745;
	static volatile int32_t t80 = -788;

	t80 = (x413&((x414^x415)*x416));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x419 = INT16_MIN;
	int8_t x420 = 1;
	uint64_t t81 = 5616LLU;

	t81 = (x417&((x418^x419)*x420));

	if (t81 != 57728LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	uint32_t t82 = 30382313U;

	t82 = (x421&((x422^x423)*x424));

	if (t82 != 1073774592U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x425 = -494263355;
	uint64_t x426 = UINT64_MAX;
	volatile uint8_t x428 = 40U;

	t83 = (x425&((x426^x427)*x428));

	if (t83 != 17731525535957910464LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x433 = 3;
	int16_t x434 = INT16_MIN;
	int8_t x435 = 1;
	int32_t x436 = 1;
	int32_t t84 = -3453;

	t84 = (x433&((x434^x435)*x436));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x438 = INT8_MIN;
	volatile uint8_t x440 = 7U;
	volatile int64_t t85 = 9LL;

	t85 = (x437&((x438^x439)*x440));

	if (t85 != 32431LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x445 = 8311U;
	int32_t x446 = INT32_MIN;
	int32_t x447 = INT32_MIN;
	uint8_t x448 = 4U;
	volatile int32_t t86 = 222;

	t86 = (x445&((x446^x447)*x448));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x453 = -4LL;
	static uint64_t x454 = UINT64_MAX;
	int8_t x456 = 4;
	uint64_t t87 = 235592LLU;

	t87 = (x453&((x454^x455)*x456));

	if (t87 != 17584LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x457 = INT8_MIN;
	volatile int64_t x458 = INT64_MIN;
	static uint64_t x460 = 14LLU;

	t88 = (x457&((x458^x459)*x460));

	if (t88 != 18446744043644780544LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x473 = INT16_MIN;
	uint16_t x474 = 1U;
	volatile int8_t x475 = INT8_MAX;
	volatile int32_t t89 = -7383;

	t89 = (x473&((x474^x475)*x476));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x481 = 449328047U;
	static int8_t x482 = INT8_MAX;
	static int32_t x484 = -1;
	uint32_t t90 = 281887U;

	t90 = (x481&((x482^x483)*x484));

	if (t90 != 128U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x485 = 5U;
	static int8_t x486 = INT8_MIN;
	uint16_t x487 = 7067U;
	int8_t x488 = -1;

	t91 = (x485&((x486^x487)*x488));

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x489 = -9063849LL;
	int16_t x490 = INT16_MIN;
	int16_t x491 = INT16_MAX;
	uint16_t x492 = UINT16_MAX;

	t92 = (x489&((x490^x491)*x492));

	if (t92 != -9109503LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x493 = INT16_MIN;
	uint8_t x494 = 47U;
	int16_t x495 = 9118;
	uint8_t x496 = UINT8_MAX;
	volatile int32_t t93 = -15;

	t93 = (x493&((x494^x495)*x496));

	if (t93 != 2326528) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x497 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	uint16_t x500 = 0U;
	volatile int64_t t94 = 15LL;

	t94 = (x497&((x498^x499)*x500));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x509 = -1;
	volatile uint16_t x510 = 3U;
	int8_t x511 = -14;
	uint8_t x512 = 124U;
	int32_t t95 = 320;

	t95 = (x509&((x510^x511)*x512));

	if (t95 != -1860) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x513 = UINT64_MAX;
	int8_t x514 = INT8_MAX;
	int32_t x515 = -15413;
	static int8_t x516 = INT8_MIN;
	uint64_t t96 = 614LLU;

	t96 = (x513&((x514^x515)*x516));

	if (t96 != 1975808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x525 = 911;
	uint8_t x526 = 62U;
	volatile uint8_t x527 = UINT8_MAX;

	t97 = (x525&((x526^x527)*x528));

	if (t97 != 901U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x529 = 0U;
	uint64_t x530 = 1543624LLU;
	int8_t x531 = -1;
	uint64_t x532 = 10300307LLU;
	volatile uint64_t t98 = 58212274008727LLU;

	t98 = (x529&((x530^x531)*x532));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x533 = 37132507451LL;
	int64_t x534 = 8200216969LL;
	int16_t x535 = -1;
	volatile uint8_t x536 = 29U;
	volatile int64_t t99 = -10054959449LL;

	t99 = (x533&((x534^x535)*x536));

	if (t99 != 37060940058LL) { NG(); } else { ; }
	
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

