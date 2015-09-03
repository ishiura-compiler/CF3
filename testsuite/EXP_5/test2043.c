#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
int32_t t0 = 1754454;
int64_t x5 = -195263425918LL;
int8_t x7 = -1;
uint16_t x11 = 20307U;
static volatile int64_t x19 = -1LL;
int64_t x22 = -1LL;
int64_t t6 = 2LL;
uint16_t x33 = 4U;
uint32_t x50 = 68272U;
int32_t x53 = -1;
static volatile int16_t x55 = 2217;
static int16_t x82 = -977;
int16_t x88 = -1;
int32_t x91 = INT32_MAX;
static int64_t x98 = INT64_MAX;
volatile uint32_t t22 = 14444U;
static uint16_t x108 = 31U;
uint32_t x116 = UINT32_MAX;
volatile uint8_t x118 = UINT8_MAX;
uint16_t x120 = UINT16_MAX;
volatile uint32_t t25 = 22142165U;
int32_t x149 = -1;
int16_t x159 = INT16_MIN;
int16_t x177 = INT16_MAX;
uint64_t x179 = 409377185LLU;
static uint64_t t35 = 418616064LLU;
int8_t x194 = INT8_MIN;
int16_t x197 = INT16_MAX;
uint64_t x198 = 792419LLU;
uint8_t x201 = 11U;
volatile int64_t t41 = -462887955LL;
uint16_t x209 = 8U;
volatile int64_t x212 = -18823LL;
int16_t x216 = INT16_MAX;
volatile int64_t x229 = INT64_MAX;
static volatile uint32_t x232 = 29279U;
volatile int16_t x240 = -146;
volatile int32_t x244 = -1;
int8_t x249 = -1;
volatile int8_t x255 = 31;
int64_t x257 = 2845439022380867057LL;
int8_t x265 = 3;
volatile int32_t t56 = 221324922;
int16_t x277 = 246;
static int32_t x278 = INT32_MIN;
uint16_t x280 = 30334U;
static volatile uint64_t t59 = 353216664847425442LLU;
int32_t x285 = INT32_MIN;
int16_t x288 = 3826;
static int8_t x289 = INT8_MAX;
volatile uint64_t t61 = 846LLU;
int8_t x297 = -13;
volatile uint8_t x298 = UINT8_MAX;
volatile int64_t x303 = -1LL;
static volatile int64_t t64 = 14164LL;
uint32_t t65 = 0U;
volatile uint64_t t66 = 882LLU;
int64_t x319 = INT64_MAX;
int64_t x327 = INT64_MAX;
static int64_t t68 = -25542257880LL;
volatile uint8_t x329 = 0U;
int64_t t70 = -553659LL;
int16_t x338 = 456;
int8_t x339 = INT8_MAX;
int32_t x340 = INT32_MAX;
volatile int16_t x345 = -1;
volatile int64_t x346 = 10848971LL;
uint64_t x358 = 16030613104995683LLU;
uint8_t x359 = 60U;
int64_t x362 = 307LL;
volatile uint64_t t76 = 35126442275145LLU;
uint32_t x365 = 6U;
uint64_t x373 = 344298295766058LLU;
uint8_t x374 = UINT8_MAX;
static int16_t x376 = INT16_MIN;
int16_t x377 = 82;
uint8_t x378 = 32U;
int64_t x381 = INT64_MIN;
uint64_t x395 = 740082938239LLU;
static uint64_t t83 = 1082050489LLU;
uint32_t x397 = UINT32_MAX;
int64_t x413 = 1LL;
static int8_t x415 = INT8_MIN;
int64_t x418 = INT64_MIN;
uint32_t x420 = UINT32_MAX;
int32_t x425 = INT32_MIN;
volatile uint64_t t89 = 0LLU;
uint32_t x429 = 178U;
static volatile int64_t t90 = 0LL;
int16_t x437 = INT16_MIN;
int8_t x449 = INT8_MIN;
uint32_t x452 = 7365663U;
volatile uint32_t t93 = 2917756U;
uint16_t x455 = UINT16_MAX;
volatile uint8_t x456 = UINT8_MAX;
volatile int64_t x457 = -1LL;
uint32_t x465 = 3425549U;
static int16_t x468 = 94;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint8_t x3 = 1U;
	int16_t x4 = INT16_MIN;

	t0 = (x1-((x2^x3)-x4));

	if (t0 != -65662) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = INT64_MAX;
	int32_t x8 = INT32_MIN;
	static volatile int64_t t1 = -1079285541622157505LL;

	t1 = (x5-((x6^x7)-x8));

	if (t1 != 9223371839443866242LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int8_t x10 = INT8_MIN;
	static int64_t x12 = INT64_MIN;
	int64_t t2 = 31227105LL;

	t2 = (x9-((x10^x11)-x12));

	if (t2 != -9223372036854755667LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 0;
	static uint32_t x14 = UINT32_MAX;
	uint32_t x15 = 2019338461U;
	static uint8_t x16 = 24U;
	volatile uint32_t t3 = 1052979U;

	t3 = (x13-((x14^x15)-x16));

	if (t3 != 2019338486U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -602;
	volatile int8_t x18 = 14;
	volatile int16_t x20 = -947;
	volatile int64_t t4 = 1976577009459LL;

	t4 = (x17-((x18^x19)-x20));

	if (t4 != -1534LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 5380U;
	int8_t x23 = -8;
	int8_t x24 = INT8_MIN;
	volatile int64_t t5 = -1148291660864388LL;

	t5 = (x21-((x22^x23)-x24));

	if (t5 != 5245LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = 296LL;
	int8_t x27 = INT8_MIN;
	int8_t x28 = 36;

	t6 = (x25-((x26^x27)-x28));

	if (t6 != -2147483268LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 58114U;
	int32_t x30 = -298257;
	static int32_t x31 = 5;
	static int8_t x32 = 0;
	uint32_t t7 = 3758825U;

	t7 = (x29-((x30^x31)-x32));

	if (t7 != 356376U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	volatile int16_t x35 = INT16_MIN;
	uint64_t x36 = 7028514557946LLU;
	static uint64_t t8 = 7500LLU;

	t8 = (x33-((x34^x35)-x36));

	if (t8 != 7030662008831LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int64_t x38 = INT64_MIN;
	volatile int64_t x39 = INT64_MIN;
	int8_t x40 = 19;
	static int64_t t9 = 1652794733868LL;

	t9 = (x37-((x38^x39)-x40));

	if (t9 != -109LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -9405586;
	int8_t x46 = INT8_MAX;
	int16_t x47 = 932;
	uint64_t x48 = 54172605408LLU;
	volatile uint64_t t10 = 16851170369012885LLU;

	t10 = (x45-((x46^x47)-x48));

	if (t10 != 54163198835LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = 232141227061LLU;
	static int16_t x51 = INT16_MIN;
	static uint64_t x52 = 171451248LLU;
	volatile uint64_t t11 = 26772585439099LLU;

	t11 = (x49-((x50^x51)-x52));

	if (t11 != 228017806581LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -1;
	uint8_t x56 = 52U;
	volatile int32_t t12 = -7;

	t12 = (x53-((x54^x55)-x56));

	if (t12 != 2269) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 65U;
	static uint32_t x58 = UINT32_MAX;
	static int64_t x59 = -1LL;
	int64_t x60 = -14081521823LL;
	volatile int64_t t13 = -3960659810115462011LL;

	t13 = (x57-((x58^x59)-x60));

	if (t13 != -9786554462LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 28LLU;
	int16_t x62 = INT16_MAX;
	volatile int64_t x63 = -1003275102LL;
	static uint16_t x64 = 12290U;
	volatile uint64_t t14 = 1637404496LLU;

	t14 = (x61-((x62^x63)-x64));

	if (t14 != 1003285697LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 8U;
	uint32_t x66 = UINT32_MAX;
	static int64_t x67 = -1LL;
	int32_t x68 = INT32_MIN;
	int64_t t15 = 45532868670867LL;

	t15 = (x65-((x66^x67)-x68));

	if (t15 != 2147483656LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 6756110036LLU;
	uint64_t x74 = 3948140128002LLU;
	volatile int32_t x75 = -2686;
	volatile int32_t x76 = -228450;
	volatile uint64_t t16 = 1252412239835754379LLU;

	t16 = (x73-((x74^x75)-x76));

	if (t16 != 3954896011250LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -1;
	int32_t x83 = -1;
	uint32_t x84 = 130U;
	volatile uint32_t t17 = 11187853U;

	t17 = (x81-((x82^x83)-x84));

	if (t17 != 4294966449U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = INT16_MIN;
	static uint64_t x86 = 12055LLU;
	volatile int8_t x87 = -43;
	uint64_t t18 = 15771359LLU;

	t18 = (x85-((x86^x87)-x88));

	if (t18 != 18446744073709530941LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = UINT16_MAX;
	static volatile uint8_t x92 = 39U;
	int32_t t19 = -934118637;

	t19 = (x89-((x90^x91)-x92));

	if (t19 != -2147418201) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -1;
	int32_t x94 = 0;
	static uint8_t x95 = 13U;
	int8_t x96 = -1;
	static volatile int32_t t20 = 3037646;

	t20 = (x93-((x94^x95)-x96));

	if (t20 != -15) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1;
	int64_t x99 = INT64_MAX;
	uint16_t x100 = 22474U;
	volatile int64_t t21 = -3507201537LL;

	t21 = (x97-((x98^x99)-x100));

	if (t21 != 22473LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = 2;
	uint32_t x103 = UINT32_MAX;
	uint8_t x104 = UINT8_MAX;

	t22 = (x101-((x102^x103)-x104));

	if (t22 != 130U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 29U;
	static volatile int64_t x106 = INT64_MIN;
	static int16_t x107 = INT16_MIN;
	volatile int64_t t23 = -3181LL;

	t23 = (x105-((x106^x107)-x108));

	if (t23 != -9223372036854742980LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = 276271765088LL;
	uint64_t x114 = 615955LLU;
	static int8_t x115 = INT8_MIN;
	volatile uint64_t t24 = 264230737012896LLU;

	t24 = (x113-((x114^x115)-x116));

	if (t24 != 280567348428LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x117 = 603U;
	static uint8_t x119 = 32U;

	t25 = (x117-((x118^x119)-x120));

	if (t25 != 65915U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -21LL;
	static int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = 6755U;
	volatile int64_t t26 = 445457867LL;

	t26 = (x121-((x122^x123)-x124));

	if (t26 != -9223372036854768946LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = UINT8_MAX;
	int64_t x126 = -1LL;
	volatile uint32_t x127 = 704538U;
	static volatile uint16_t x128 = 1U;
	volatile int64_t t27 = -44811LL;

	t27 = (x125-((x126^x127)-x128));

	if (t27 != 704795LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	volatile int32_t x130 = INT32_MIN;
	static int64_t x131 = INT64_MIN;
	static uint32_t x132 = 162364U;
	volatile int64_t t28 = 23020154645098953LL;

	t28 = (x129-((x130^x131)-x132));

	if (t28 != -9223372034707129924LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MIN;
	volatile int32_t x138 = 87913;
	uint64_t x139 = 1LLU;
	int64_t x140 = -1LL;
	volatile uint64_t t29 = 2110155637892550LLU;

	t29 = (x137-((x138^x139)-x140));

	if (t29 != 18446744073709463575LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x141 = 233U;
	volatile uint64_t x142 = UINT64_MAX;
	volatile int64_t x143 = INT64_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile uint64_t t30 = 2165137235498933682LLU;

	t30 = (x141-((x142^x143)-x144));

	if (t30 != 9223372041149743336LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x150 = 1390LLU;
	uint16_t x151 = UINT16_MAX;
	int64_t x152 = INT64_MIN;
	uint64_t t31 = 111809114833483LLU;

	t31 = (x149-((x150^x151)-x152));

	if (t31 != 9223372036854711662LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 78928839LLU;
	int8_t x154 = INT8_MAX;
	static int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t32 = 4883725266407599815LLU;

	t32 = (x153-((x154^x155)-x156));

	if (t32 != 78928712LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MAX;
	uint64_t x158 = 14413LLU;
	uint64_t x160 = UINT64_MAX;
	static uint64_t t33 = 273896516174444473LLU;

	t33 = (x157-((x158^x159)-x160));

	if (t33 != 51121LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x169 = -1;
	volatile int32_t x170 = -20126;
	int16_t x171 = -1;
	int64_t x172 = 979007065228002LL;
	static int64_t t34 = -20592851LL;

	t34 = (x169-((x170^x171)-x172));

	if (t34 != 979007065207876LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x178 = INT32_MAX;
	static uint16_t x180 = 0U;

	t35 = (x177-((x178^x179)-x180));

	if (t35 != 18446744071971477921LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = INT32_MIN;
	static int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	int16_t x184 = -1;
	volatile int32_t t36 = -438399939;

	t36 = (x181-((x182^x183)-x184));

	if (t36 != -2147451008) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = -1;
	int64_t x186 = INT64_MIN;
	static volatile uint64_t x187 = 52101LLU;
	int16_t x188 = INT16_MIN;
	uint64_t t37 = 2LLU;

	t37 = (x185-((x186^x187)-x188));

	if (t37 != 9223372036854690938LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x193 = -1;
	static uint64_t x195 = 221000510LLU;
	static volatile uint8_t x196 = 22U;
	static volatile uint64_t t38 = 57265LLU;

	t38 = (x193-((x194^x195)-x196));

	if (t38 != 221000535LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x199 = 17694U;
	int32_t x200 = -198131233;
	volatile uint64_t t39 = 645512432LLU;

	t39 = (x197-((x198^x199)-x200));

	if (t39 != 18446744073510645601LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x202 = 711U;
	uint32_t x203 = UINT32_MAX;
	volatile int8_t x204 = INT8_MAX;
	uint32_t t40 = 321660U;

	t40 = (x201-((x202^x203)-x204));

	if (t40 != 850U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x205 = 2U;
	static int8_t x206 = -3;
	int64_t x207 = -1LL;
	int16_t x208 = -237;

	t41 = (x205-((x206^x207)-x208));

	if (t41 != -237LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x210 = INT16_MAX;
	volatile int64_t x211 = 30LL;
	int64_t t42 = -2135828476663141379LL;

	t42 = (x209-((x210^x211)-x212));

	if (t42 != -51552LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MIN;
	int32_t t43 = -4026390;

	t43 = (x213-((x214^x215)-x216));

	if (t43 != 32639) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = -7;
	int8_t x218 = -1;
	uint32_t x219 = 3166404U;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t44 = 9792634U;

	t44 = (x217-((x218^x219)-x220));

	if (t44 != 3166397U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = INT64_MIN;
	int64_t x222 = INT64_MIN;
	static uint64_t x223 = UINT64_MAX;
	uint64_t x224 = 459194954LLU;
	static uint64_t t45 = 1377506507965378LLU;

	t45 = (x221-((x222^x223)-x224));

	if (t45 != 459194955LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x225 = 105U;
	int16_t x226 = -8572;
	volatile int8_t x227 = -9;
	int8_t x228 = -1;
	int32_t t46 = -1599;

	t46 = (x225-((x226^x227)-x228));

	if (t46 != -8459) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x230 = 54;
	uint16_t x231 = UINT16_MAX;
	volatile int64_t t47 = -17211894LL;

	t47 = (x229-((x230^x231)-x232));

	if (t47 != 9223372036854739605LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x233 = INT32_MAX;
	uint64_t x234 = 117LLU;
	static uint32_t x235 = 822025123U;
	static int8_t x236 = INT8_MIN;
	volatile uint64_t t48 = 264078LLU;

	t48 = (x233-((x234^x235)-x236));

	if (t48 != 1325458345LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x237 = 22047446350620488LL;
	uint16_t x238 = UINT16_MAX;
	uint32_t x239 = 52U;
	int64_t t49 = 9567782992134359LL;

	t49 = (x237-((x238^x239)-x240));

	if (t49 != 22047446350554859LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x241 = 1299134531U;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	static volatile uint32_t t50 = 0U;

	t50 = (x241-((x242^x243)-x244));

	if (t50 != 1299134530U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x245 = UINT16_MAX;
	static int32_t x246 = INT32_MAX;
	static int64_t x247 = 120314928408569746LL;
	uint16_t x248 = 979U;
	int64_t t51 = -178LL;

	t51 = (x245-((x246^x247)-x248));

	if (t51 != -120314928644412571LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x250 = 2U;
	volatile int64_t x251 = -1527409439635208213LL;
	static int32_t x252 = INT32_MIN;
	volatile int64_t t52 = -38569544928197492LL;

	t52 = (x249-((x250^x251)-x252));

	if (t52 != 1527409437487724566LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x253 = INT8_MAX;
	uint8_t x254 = UINT8_MAX;
	int64_t x256 = INT64_MAX;
	volatile int64_t t53 = 133556451LL;

	t53 = (x253-((x254^x255)-x256));

	if (t53 != 9223372036854775710LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x258 = UINT16_MAX;
	uint8_t x259 = 53U;
	int8_t x260 = INT8_MAX;
	int64_t t54 = -112101340153LL;

	t54 = (x257-((x258^x259)-x260));

	if (t54 != 2845439022380801702LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x261 = 67LL;
	int32_t x262 = INT32_MIN;
	int32_t x263 = -3695288;
	int8_t x264 = INT8_MIN;
	volatile int64_t t55 = 2543265476859197LL;

	t55 = (x261-((x262^x263)-x264));

	if (t55 != -2143788421LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x266 = -1;
	int32_t x267 = INT32_MIN;
	volatile uint16_t x268 = 16139U;

	t56 = (x265-((x266^x267)-x268));

	if (t56 != -2147467505) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x269 = 1U;
	uint16_t x270 = UINT16_MAX;
	uint64_t x271 = UINT64_MAX;
	volatile int16_t x272 = 2;
	uint64_t t57 = 123LLU;

	t57 = (x269-((x270^x271)-x272));

	if (t57 != 65539LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x279 = 1673U;
	static uint32_t t58 = 211U;

	t58 = (x277-((x278^x279)-x280));

	if (t58 != 2147512555U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x281 = INT64_MAX;
	uint64_t x282 = 145LLU;
	int8_t x283 = 3;
	static int8_t x284 = INT8_MAX;

	t59 = (x281-((x282^x283)-x284));

	if (t59 != 9223372036854775788LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x286 = UINT16_MAX;
	int32_t x287 = -267;
	int32_t t60 = 1238819;

	t60 = (x285-((x286^x287)-x288));

	if (t60 != -2147414552) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x290 = -1LL;
	uint64_t x291 = 4327162087LLU;
	volatile int8_t x292 = -2;

	t61 = (x289-((x290^x291)-x292));

	if (t61 != 4327162213LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = -1;
	int32_t x295 = -95;
	volatile uint8_t x296 = 1U;
	int32_t t62 = -11782298;

	t62 = (x293-((x294^x295)-x296));

	if (t62 != -221) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x299 = -1;
	static int32_t x300 = INT32_MIN;
	static int32_t t63 = -11943;

	t63 = (x297-((x298^x299)-x300));

	if (t63 != -2147483405) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x301 = 682641851U;
	uint32_t x302 = 18438099U;
	int64_t x304 = INT64_MIN;

	t64 = (x301-((x302^x303)-x304));

	if (t64 != -9223372036153695857LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x305 = 9U;
	int32_t x306 = 721107;
	int16_t x307 = 151;
	uint32_t x308 = 3U;

	t65 = (x305-((x306^x307)-x308));

	if (t65 != 4294246344U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x313 = UINT64_MAX;
	int32_t x314 = -2521;
	volatile int16_t x315 = 1;
	int16_t x316 = -1;

	t66 = (x313-((x314^x315)-x316));

	if (t66 != 2520LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = INT16_MAX;
	int64_t x318 = INT64_MIN;
	static volatile int8_t x320 = INT8_MIN;
	volatile int64_t t67 = -259847LL;

	t67 = (x317-((x318^x319)-x320));

	if (t67 != 32640LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	volatile int64_t x328 = INT64_MIN;

	t68 = (x325-((x326^x327)-x328));

	if (t68 != -32895LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x330 = INT8_MIN;
	int8_t x331 = -15;
	int8_t x332 = INT8_MIN;
	int32_t t69 = 43396904;

	t69 = (x329-((x330^x331)-x332));

	if (t69 != -241) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = INT64_MIN;
	uint32_t x334 = 3898406U;
	int64_t x335 = -1LL;
	int16_t x336 = -1588;

	t70 = (x333-((x334^x335)-x336));

	if (t70 != -9223372036850878989LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x337 = 7U;
	int32_t t71 = -2;

	t71 = (x337-((x338^x339)-x340));

	if (t71 != 2147483215) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x341 = INT32_MIN;
	uint8_t x342 = 116U;
	uint64_t x343 = 13023877LLU;
	int8_t x344 = INT8_MAX;
	volatile uint64_t t72 = 2LLU;

	t72 = (x341-((x342^x343)-x344));

	if (t72 != 18446744071549044110LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x347 = 1926U;
	uint64_t x348 = 99563219272417938LLU;
	volatile uint64_t t73 = 985LLU;

	t73 = (x345-((x346^x347)-x348));

	if (t73 != 99563219261568324LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = 1362410460LL;
	static uint64_t x350 = UINT64_MAX;
	static int32_t x351 = 12728;
	volatile int16_t x352 = INT16_MIN;
	volatile uint64_t t74 = 2858578770565LLU;

	t74 = (x349-((x350^x351)-x352));

	if (t74 != 1362390421LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x357 = UINT32_MAX;
	int64_t x360 = -66841340LL;
	volatile uint64_t t75 = 1979305LLU;

	t75 = (x357-((x358^x359)-x360));

	if (t75 != 18430713464832681892LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x361 = 867U;
	uint64_t x363 = 3366686788752LLU;
	volatile uint8_t x364 = UINT8_MAX;

	t76 = (x361-((x362^x363)-x364));

	if (t76 != 18446740707022763711LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x366 = 13212;
	int8_t x367 = INT8_MAX;
	int16_t x368 = INT16_MAX;
	volatile uint32_t t77 = 50935U;

	t77 = (x365-((x366^x367)-x368));

	if (t77 != 19490U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x369 = 4575U;
	static int8_t x370 = INT8_MIN;
	int64_t x371 = 1056215133782227149LL;
	uint64_t x372 = 53021490LLU;
	static volatile uint64_t t78 = 4970339010493756LLU;

	t78 = (x369-((x370^x371)-x372));

	if (t78 != 1056215133835253188LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x375 = 3U;
	uint64_t t79 = 53211847007LLU;

	t79 = (x373-((x374^x375)-x376));

	if (t79 != 344298295733038LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x379 = -3562807621LL;
	uint64_t x380 = 1453357LLU;
	volatile uint64_t t80 = 863LLU;

	t80 = (x377-((x378^x379)-x380));

	if (t80 != 3564261092LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x382 = UINT64_MAX;
	volatile uint32_t x383 = UINT32_MAX;
	static volatile int64_t x384 = INT64_MIN;
	uint64_t t81 = 12088LLU;

	t81 = (x381-((x382^x383)-x384));

	if (t81 != 4294967296LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x386 = 0U;
	int16_t x387 = INT16_MIN;
	static int8_t x388 = -1;
	static int32_t t82 = -4242;

	t82 = (x385-((x386^x387)-x388));

	if (t82 != -2147450881) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x393 = 71546U;
	int32_t x394 = -1;
	int64_t x396 = -1LL;

	t83 = (x393-((x394^x395)-x396));

	if (t83 != 740083009785LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x398 = 7U;
	static int8_t x399 = INT8_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t84 = 124U;

	t84 = (x397-((x398^x399)-x400));

	if (t84 != 4294967174U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x405 = UINT16_MAX;
	int64_t x406 = 4065761792289158LL;
	int8_t x407 = -14;
	int8_t x408 = -1;
	static int64_t t85 = 40LL;

	t85 = (x405-((x406^x407)-x408));

	if (t85 != 4065761792354698LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x414 = 64679002LLU;
	int8_t x416 = -1;
	static uint64_t t86 = 125733662677043489LLU;

	t86 = (x413-((x414^x415)-x416));

	if (t86 != 64678950LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x417 = 30U;
	int16_t x419 = INT16_MIN;
	static volatile int64_t t87 = -816904255673642LL;

	t87 = (x417-((x418^x419)-x420));

	if (t87 != -9223372032559775715LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x421 = 7938U;
	volatile int8_t x422 = INT8_MIN;
	uint16_t x423 = 49U;
	uint8_t x424 = 35U;
	static volatile uint32_t t88 = 106556U;

	t88 = (x421-((x422^x423)-x424));

	if (t88 != 8052U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x426 = INT16_MIN;
	uint8_t x427 = UINT8_MAX;
	volatile uint64_t x428 = 833014LLU;

	t89 = (x425-((x426^x427)-x428));

	if (t89 != 18446744071562933495LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x430 = -1LL;
	static volatile uint8_t x431 = 79U;
	int32_t x432 = -1;

	t90 = (x429-((x430^x431)-x432));

	if (t90 != 257LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x438 = INT8_MIN;
	static int32_t x439 = -1;
	int8_t x440 = INT8_MIN;
	volatile int32_t t91 = 9;

	t91 = (x437-((x438^x439)-x440));

	if (t91 != -33023) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x445 = UINT8_MAX;
	int32_t x446 = 1288386;
	uint64_t x447 = 14254LLU;
	uint64_t x448 = UINT64_MAX;
	volatile uint64_t t92 = 1LLU;

	t92 = (x445-((x446^x447)-x448));

	if (t92 != 18446744073708265874LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x450 = INT16_MAX;
	int32_t x451 = 443978;

	t93 = (x449-((x450^x451)-x452));

	if (t93 != 6924778U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x453 = -1;
	uint64_t x454 = 4731LLU;
	static uint64_t t94 = 106312305007902LLU;

	t94 = (x453-((x454^x455)-x456));

	if (t94 != 18446744073709491066LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	uint16_t x460 = 128U;
	int64_t t95 = 117971832LL;

	t95 = (x457-((x458^x459)-x460));

	if (t95 != -32513LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x461 = 9058752107504668594LLU;
	int16_t x462 = INT16_MIN;
	static int8_t x463 = INT8_MIN;
	uint32_t x464 = UINT32_MAX;
	volatile uint64_t t96 = 18LLU;

	t96 = (x461-((x462^x463)-x464));

	if (t96 != 9058752107504635953LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x466 = INT8_MIN;
	int64_t x467 = INT64_MIN;
	static volatile int64_t t97 = -1112496537773954085LL;

	t97 = (x465-((x466^x467)-x468));

	if (t97 != -9223372036851350037LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x469 = -2;
	volatile uint64_t x470 = UINT64_MAX;
	static int16_t x471 = -7;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t98 = 253845508LLU;

	t98 = (x469-((x470^x471)-x472));

	if (t98 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x473 = INT8_MIN;
	volatile int16_t x474 = INT16_MIN;
	int64_t x475 = INT64_MIN;
	static volatile int64_t x476 = -1LL;
	static volatile int64_t t99 = 225810000946998020LL;

	t99 = (x473-((x474^x475)-x476));

	if (t99 != -9223372036854743169LL) { NG(); } else { ; }
	
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

