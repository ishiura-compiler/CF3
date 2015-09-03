#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x20 = INT32_MIN;
uint16_t x44 = 1122U;
uint16_t x45 = 31223U;
static int64_t x54 = INT64_MIN;
volatile uint64_t t5 = 25567200025LLU;
volatile uint32_t x58 = 98522U;
int32_t x59 = INT32_MIN;
static volatile uint64_t t7 = 263953LLU;
int16_t x65 = 0;
static uint32_t x81 = UINT32_MAX;
volatile int64_t x84 = INT64_MAX;
static int8_t x94 = INT8_MIN;
uint16_t x115 = 23244U;
int32_t x117 = 193921154;
int8_t x119 = INT8_MAX;
int64_t t17 = -85165949LL;
int16_t x126 = INT16_MAX;
int8_t x140 = 19;
static uint32_t x141 = 1U;
static volatile uint32_t t20 = 161U;
uint8_t x147 = 26U;
int16_t x154 = INT16_MAX;
static int64_t x171 = INT64_MIN;
static int32_t t23 = -1134111;
uint64_t x182 = 104851298LLU;
int64_t t25 = 892LL;
uint8_t x201 = 110U;
int8_t x218 = INT8_MIN;
volatile int8_t x241 = 14;
int32_t x244 = -1;
uint16_t x249 = UINT16_MAX;
uint8_t x250 = 9U;
volatile int64_t x252 = -1LL;
int32_t x260 = -1;
int64_t x264 = -5031575LL;
uint8_t x275 = 84U;
uint32_t x276 = 607U;
uint16_t x280 = 1U;
volatile int16_t x281 = 1;
uint64_t t37 = 523581210LLU;
int16_t x286 = INT16_MAX;
volatile uint32_t x293 = 289U;
int32_t x295 = -1;
uint8_t x298 = 0U;
int8_t x300 = INT8_MIN;
int64_t t42 = -1LL;
int16_t x320 = INT16_MIN;
static uint16_t x337 = 332U;
int16_t x339 = INT16_MIN;
uint32_t x347 = 6562U;
static int32_t x352 = INT32_MAX;
uint32_t x360 = UINT32_MAX;
int8_t x368 = INT8_MIN;
int64_t x375 = -1LL;
uint16_t x389 = 1463U;
int8_t x392 = -1;
static volatile int8_t x407 = INT8_MAX;
int64_t x416 = 800094358822LL;
int8_t x448 = INT8_MIN;
static uint16_t x453 = 828U;
int64_t x454 = -1LL;
int16_t x507 = INT16_MIN;
int16_t x511 = INT16_MIN;
int8_t x518 = -1;
int16_t x520 = -1;
static int8_t x531 = 0;
int16_t x532 = INT16_MAX;
volatile int16_t x538 = INT16_MAX;
uint16_t x541 = UINT16_MAX;
static volatile int8_t x544 = -6;
static volatile int64_t t74 = 11674711603366LL;
int16_t x559 = INT16_MIN;
int32_t t78 = -1929;
int16_t x599 = INT16_MAX;
volatile uint64_t x600 = UINT64_MAX;
uint32_t x626 = 12U;
volatile uint8_t x629 = UINT8_MAX;
int8_t x631 = 39;
int64_t x633 = 1959969451019915011LL;
int64_t t85 = 3630519017453LL;
int32_t x637 = INT32_MAX;
volatile int32_t x639 = INT32_MAX;
uint16_t x643 = 15341U;
volatile uint8_t x646 = UINT8_MAX;
volatile int8_t x648 = INT8_MIN;
volatile int64_t x658 = -1LL;
uint32_t x660 = 350655U;
uint32_t t89 = 481480843U;
static uint16_t x661 = UINT16_MAX;
static uint32_t x663 = UINT32_MAX;
volatile uint8_t x677 = UINT8_MAX;
int8_t x680 = INT8_MAX;
volatile uint32_t t95 = 12U;
int16_t x689 = 7;
uint32_t x691 = 122724342U;
int8_t x692 = INT8_MAX;
volatile int32_t t97 = -28;
static int8_t x693 = INT8_MAX;
static uint32_t x695 = 449512417U;
int32_t x702 = INT32_MIN;


void f0(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x18 = INT64_MIN;
	static int16_t x19 = 720;
	uint64_t t0 = 30LLU;

	t0 = ((x17>>(x18<=x19))-x20);

	if (t0 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x25 = INT64_MAX;
	volatile int16_t x26 = -4180;
	uint8_t x27 = 0U;
	int8_t x28 = INT8_MIN;
	volatile int64_t t1 = 46237768683LL;

	t1 = ((x25>>(x26<=x27))-x28);

	if (t1 != 4611686018427388031LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x33 = 529552734536LLU;
	static uint64_t x34 = 7LLU;
	int8_t x35 = 1;
	uint8_t x36 = 0U;
	static uint64_t t2 = 414943LLU;

	t2 = ((x33>>(x34<=x35))-x36);

	if (t2 != 529552734536LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x41 = 7781613LLU;
	uint8_t x42 = 17U;
	uint8_t x43 = 85U;
	volatile uint64_t t3 = 1665607283035594LLU;

	t3 = ((x41>>(x42<=x43))-x44);

	if (t3 != 3889684LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x46 = 148864;
	int32_t x47 = -160;
	static int8_t x48 = -63;
	int32_t t4 = 0;

	t4 = ((x45>>(x46<=x47))-x48);

	if (t4 != 31286) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x53 = INT32_MAX;
	uint32_t x55 = 3051U;
	volatile uint64_t x56 = 684187LLU;

	t5 = ((x53>>(x54<=x55))-x56);

	if (t5 != 1073057636LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x57 = 0U;
	uint32_t x60 = 278253990U;
	static uint32_t t6 = 500180U;

	t6 = ((x57>>(x58<=x59))-x60);

	if (t6 != 4016713306U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x61 = 1U;
	int64_t x62 = -10LL;
	int16_t x63 = -1;
	uint64_t x64 = 74LLU;

	t7 = ((x61>>(x62<=x63))-x64);

	if (t7 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x66 = 0;
	uint64_t x67 = 50248474434101073LLU;
	int16_t x68 = INT16_MIN;
	int32_t t8 = 247;

	t8 = ((x65>>(x66<=x67))-x68);

	if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = 28;
	static volatile int64_t x70 = INT64_MIN;
	static int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = UINT8_MAX;
	int32_t t9 = -20;

	t9 = ((x69>>(x70<=x71))-x72);

	if (t9 != -241) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x73 = 1;
	static volatile uint16_t x74 = 2U;
	static int64_t x75 = -1LL;
	int32_t x76 = 0;
	static volatile int32_t t10 = 3204941;

	t10 = ((x73>>(x74<=x75))-x76);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x82 = 14;
	int8_t x83 = -1;
	int64_t t11 = 3LL;

	t11 = ((x81>>(x82<=x83))-x84);

	if (t11 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x85 = 6116U;
	int8_t x86 = INT8_MIN;
	int32_t x87 = -3747;
	int8_t x88 = INT8_MAX;
	static int32_t t12 = 5823;

	t12 = ((x85>>(x86<=x87))-x88);

	if (t12 != 5989) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x93 = UINT16_MAX;
	uint8_t x95 = 9U;
	int32_t x96 = 451919;
	volatile int32_t t13 = 216896;

	t13 = ((x93>>(x94<=x95))-x96);

	if (t13 != -419152) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x109 = 52;
	int32_t x110 = INT32_MAX;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = INT8_MAX;
	volatile int32_t t14 = 59634;

	t14 = ((x109>>(x110<=x111))-x112);

	if (t14 != -101) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x113 = 1LL;
	uint32_t x114 = UINT32_MAX;
	int8_t x116 = -3;
	volatile int64_t t15 = -2515297497269061487LL;

	t15 = ((x113>>(x114<=x115))-x116);

	if (t15 != 4LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x118 = -3726476056434LL;
	static int64_t x120 = -4756180565935LL;
	volatile int64_t t16 = 10133893011361LL;

	t16 = ((x117>>(x118<=x119))-x120);

	if (t16 != 4756277526512LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x121 = INT16_MAX;
	static uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MAX;
	int64_t x124 = 31378LL;

	t17 = ((x121>>(x122<=x123))-x124);

	if (t17 != -14995LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x125 = 94;
	uint64_t x127 = UINT64_MAX;
	volatile uint32_t x128 = 65071U;
	static volatile uint32_t t18 = 98562542U;

	t18 = ((x125>>(x126<=x127))-x128);

	if (t18 != 4294902272U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x137 = 19266U;
	int64_t x138 = INT64_MIN;
	int64_t x139 = -1LL;
	volatile int32_t t19 = 7620424;

	t19 = ((x137>>(x138<=x139))-x140);

	if (t19 != 9614) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x142 = INT8_MAX;
	volatile uint32_t x143 = UINT32_MAX;
	uint8_t x144 = 2U;

	t20 = ((x141>>(x142<=x143))-x144);

	if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x145 = INT32_MAX;
	int64_t x146 = -1528231887914LL;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t21 = 4150895;

	t21 = ((x145>>(x146<=x147))-x148);

	if (t21 != 1073741951) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x153 = 14612660U;
	volatile uint16_t x155 = 117U;
	int16_t x156 = INT16_MIN;
	volatile uint32_t t22 = 185144U;

	t22 = ((x153>>(x154<=x155))-x156);

	if (t22 != 14645428U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x169 = INT16_MAX;
	volatile int64_t x170 = INT64_MIN;
	uint8_t x172 = 1U;

	t23 = ((x169>>(x170<=x171))-x172);

	if (t23 != 16382) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x181 = INT64_MAX;
	uint16_t x183 = UINT16_MAX;
	uint16_t x184 = 9U;
	int64_t t24 = -3307179364752029LL;

	t24 = ((x181>>(x182<=x183))-x184);

	if (t24 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x185 = 57159740LL;
	uint8_t x186 = 116U;
	volatile int32_t x187 = -12263741;
	int32_t x188 = INT32_MAX;

	t25 = ((x185>>(x186<=x187))-x188);

	if (t25 != -2090323907LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x202 = 8U;
	int32_t x203 = INT32_MIN;
	static uint8_t x204 = UINT8_MAX;
	int32_t t26 = -1875832;

	t26 = ((x201>>(x202<=x203))-x204);

	if (t26 != -145) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x213 = INT8_MAX;
	int32_t x214 = 3;
	static int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MAX;
	static int32_t t27 = 1724;

	t27 = ((x213>>(x214<=x215))-x216);

	if (t27 != -32704) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x217 = 1;
	int32_t x219 = -1707701;
	volatile uint8_t x220 = 0U;
	volatile int32_t t28 = 17782352;

	t28 = ((x217>>(x218<=x219))-x220);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x233 = 3870514771334LL;
	int8_t x234 = INT8_MAX;
	int32_t x235 = -1;
	static int64_t x236 = 3167148LL;
	static volatile int64_t t29 = -492924487578386LL;

	t29 = ((x233>>(x234<=x235))-x236);

	if (t29 != 3870511604186LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x242 = UINT16_MAX;
	uint64_t x243 = 68348191935212LLU;
	volatile int32_t t30 = -110152640;

	t30 = ((x241>>(x242<=x243))-x244);

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x251 = INT32_MIN;
	static int64_t t31 = 1688146LL;

	t31 = ((x249>>(x250<=x251))-x252);

	if (t31 != 65536LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x257 = 149U;
	int16_t x258 = 1;
	int32_t x259 = 593999791;
	static int32_t t32 = -6561764;

	t32 = ((x257>>(x258<=x259))-x260);

	if (t32 != 75) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x261 = UINT64_MAX;
	volatile int64_t x262 = 61679078434LL;
	static volatile int32_t x263 = 117;
	static volatile uint64_t t33 = 11215273LLU;

	t33 = ((x261>>(x262<=x263))-x264);

	if (t33 != 5031574LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x269 = 56067953102908LLU;
	int16_t x270 = -1;
	volatile uint16_t x271 = 819U;
	volatile uint8_t x272 = 3U;
	volatile uint64_t t34 = 497LLU;

	t34 = ((x269>>(x270<=x271))-x272);

	if (t34 != 28033976551451LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x273 = 292;
	int64_t x274 = INT64_MIN;
	volatile uint32_t t35 = 417278744U;

	t35 = ((x273>>(x274<=x275))-x276);

	if (t35 != 4294966835U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x277 = 813714780827LL;
	static int8_t x278 = 1;
	int64_t x279 = INT64_MIN;
	volatile int64_t t36 = 204269450005607LL;

	t36 = ((x277>>(x278<=x279))-x280);

	if (t36 != 813714780826LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = -1527;
	uint64_t x284 = 148883301189LLU;

	t37 = ((x281>>(x282<=x283))-x284);

	if (t37 != 18446743924826250428LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x285 = 153U;
	int8_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile int32_t t38 = -7024104;

	t38 = ((x285>>(x286<=x287))-x288);

	if (t38 != 281) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x294 = 1;
	static int16_t x296 = INT16_MIN;
	volatile uint32_t t39 = 420617372U;

	t39 = ((x293>>(x294<=x295))-x296);

	if (t39 != 33057U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x297 = 3451777357640850LLU;
	int8_t x299 = 63;
	uint64_t t40 = 194714005792722LLU;

	t40 = ((x297>>(x298<=x299))-x300);

	if (t40 != 1725888678820553LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x305 = 0U;
	uint64_t x306 = 857889LLU;
	volatile int8_t x307 = INT8_MAX;
	int32_t x308 = -449;
	volatile int32_t t41 = 0;

	t41 = ((x305>>(x306<=x307))-x308);

	if (t41 != 449) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x309 = INT64_MAX;
	static int32_t x310 = 55090102;
	volatile int16_t x311 = -1;
	uint8_t x312 = UINT8_MAX;

	t42 = ((x309>>(x310<=x311))-x312);

	if (t42 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x317 = 4;
	uint8_t x318 = 110U;
	int64_t x319 = -702LL;
	int32_t t43 = 1;

	t43 = ((x317>>(x318<=x319))-x320);

	if (t43 != 32772) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x325 = 704U;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 849232442825228820LLU;
	int64_t x328 = INT64_MAX;
	int64_t t44 = 8052474743LL;

	t44 = ((x325>>(x326<=x327))-x328);

	if (t44 != -9223372036854775103LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x338 = INT16_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t45 = 1;

	t45 = ((x337>>(x338<=x339))-x340);

	if (t45 != 33100) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x341 = 0U;
	int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MIN;
	static uint64_t x344 = 548921126563LLU;
	static uint64_t t46 = 552LLU;

	t46 = ((x341>>(x342<=x343))-x344);

	if (t46 != 18446743524788425053LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x345 = UINT32_MAX;
	int32_t x346 = 51418472;
	static uint16_t x348 = UINT16_MAX;
	uint32_t t47 = 7577073U;

	t47 = ((x345>>(x346<=x347))-x348);

	if (t47 != 4294901760U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x349 = 872752;
	static volatile int16_t x350 = -1;
	volatile uint64_t x351 = UINT64_MAX;
	int32_t t48 = 30551;

	t48 = ((x349>>(x350<=x351))-x352);

	if (t48 != -2147047271) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x353 = INT32_MAX;
	static int16_t x354 = INT16_MIN;
	static int8_t x355 = -1;
	int64_t x356 = 11977213347177LL;
	volatile int64_t t49 = -30950973328301LL;

	t49 = ((x353>>(x354<=x355))-x356);

	if (t49 != -11976139605354LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x357 = 12786475U;
	volatile int32_t x358 = -1;
	static uint16_t x359 = 92U;
	volatile uint32_t t50 = 15413U;

	t50 = ((x357>>(x358<=x359))-x360);

	if (t50 != 6393238U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x361 = 16U;
	volatile uint32_t x362 = 391010U;
	static int16_t x363 = 763;
	uint8_t x364 = 1U;
	volatile int32_t t51 = -5;

	t51 = ((x361>>(x362<=x363))-x364);

	if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x365 = INT32_MAX;
	uint32_t x366 = 15U;
	int32_t x367 = INT32_MIN;
	int32_t t52 = 4;

	t52 = ((x365>>(x366<=x367))-x368);

	if (t52 != 1073741951) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x373 = 290809U;
	static int32_t x374 = INT32_MIN;
	int16_t x376 = -96;
	uint32_t t53 = 3U;

	t53 = ((x373>>(x374<=x375))-x376);

	if (t53 != 145500U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x390 = INT64_MAX;
	uint8_t x391 = 6U;
	static int32_t t54 = 1358;

	t54 = ((x389>>(x390<=x391))-x392);

	if (t54 != 1464) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x393 = UINT32_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	volatile uint16_t x395 = 210U;
	int8_t x396 = 1;
	static volatile uint32_t t55 = 161147727U;

	t55 = ((x393>>(x394<=x395))-x396);

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x401 = 1U;
	static int16_t x402 = INT16_MAX;
	int16_t x403 = INT16_MAX;
	uint8_t x404 = UINT8_MAX;
	volatile uint32_t t56 = 11798U;

	t56 = ((x401>>(x402<=x403))-x404);

	if (t56 != 4294967041U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x405 = UINT8_MAX;
	int64_t x406 = -97432528043089LL;
	volatile int16_t x408 = -1;
	int32_t t57 = 18641559;

	t57 = ((x405>>(x406<=x407))-x408);

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x409 = UINT64_MAX;
	static volatile int64_t x410 = -1LL;
	int16_t x411 = INT16_MIN;
	int8_t x412 = 0;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = ((x409>>(x410<=x411))-x412);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x413 = INT16_MAX;
	int32_t x414 = 256689279;
	int16_t x415 = 6;
	int64_t t59 = 9485527297729LL;

	t59 = ((x413>>(x414<=x415))-x416);

	if (t59 != -800094326055LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x441 = 4674;
	int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MAX;
	volatile int16_t x444 = INT16_MIN;
	int32_t t60 = 68;

	t60 = ((x441>>(x442<=x443))-x444);

	if (t60 != 35105) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x445 = 0;
	volatile int16_t x446 = INT16_MAX;
	static int32_t x447 = INT32_MAX;
	volatile int32_t t61 = -4998013;

	t61 = ((x445>>(x446<=x447))-x448);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x455 = INT32_MIN;
	int8_t x456 = 1;
	volatile int32_t t62 = 4182;

	t62 = ((x453>>(x454<=x455))-x456);

	if (t62 != 827) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x457 = 66166U;
	uint32_t x458 = 271787U;
	volatile uint8_t x459 = 3U;
	uint8_t x460 = 60U;
	volatile uint32_t t63 = 193581U;

	t63 = ((x457>>(x458<=x459))-x460);

	if (t63 != 66106U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x477 = INT8_MAX;
	volatile int8_t x478 = -1;
	uint16_t x479 = UINT16_MAX;
	volatile int32_t x480 = INT32_MAX;
	volatile int32_t t64 = -37279975;

	t64 = ((x477>>(x478<=x479))-x480);

	if (t64 != -2147483584) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x489 = INT64_MAX;
	static int32_t x490 = INT32_MIN;
	int64_t x491 = -1LL;
	volatile uint8_t x492 = 7U;
	static int64_t t65 = 7613738051792LL;

	t65 = ((x489>>(x490<=x491))-x492);

	if (t65 != 4611686018427387896LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x497 = 9U;
	int16_t x498 = INT16_MIN;
	volatile int32_t x499 = 3796737;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t66 = 5;

	t66 = ((x497>>(x498<=x499))-x500);

	if (t66 != -65531) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x505 = UINT16_MAX;
	static volatile uint64_t x506 = 117238998LLU;
	int16_t x508 = INT16_MIN;
	int32_t t67 = 80876;

	t67 = ((x505>>(x506<=x507))-x508);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x509 = 34U;
	uint8_t x510 = UINT8_MAX;
	volatile uint16_t x512 = 495U;
	int32_t t68 = -51014077;

	t68 = ((x509>>(x510<=x511))-x512);

	if (t68 != -461) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x517 = 94374905275421857LLU;
	int8_t x519 = INT8_MIN;
	uint64_t t69 = 46397448112402927LLU;

	t69 = ((x517>>(x518<=x519))-x520);

	if (t69 != 94374905275421858LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x525 = 25957097U;
	uint32_t x526 = 109822U;
	volatile int8_t x527 = INT8_MIN;
	int16_t x528 = INT16_MIN;
	uint32_t t70 = 922106U;

	t70 = ((x525>>(x526<=x527))-x528);

	if (t70 != 13011316U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x529 = 78LL;
	int8_t x530 = INT8_MAX;
	volatile int64_t t71 = 24039837698LL;

	t71 = ((x529>>(x530<=x531))-x532);

	if (t71 != -32689LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x537 = 113U;
	volatile int8_t x539 = INT8_MAX;
	static int8_t x540 = 1;
	volatile int32_t t72 = -74165;

	t72 = ((x537>>(x538<=x539))-x540);

	if (t72 != 112) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x542 = 1796U;
	uint8_t x543 = UINT8_MAX;
	volatile int32_t t73 = 10;

	t73 = ((x541>>(x542<=x543))-x544);

	if (t73 != 65541) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x545 = INT64_MAX;
	int64_t x546 = -1212874280021075LL;
	static volatile int64_t x547 = -1047440LL;
	volatile int16_t x548 = 3;

	t74 = ((x545>>(x546<=x547))-x548);

	if (t74 != 4611686018427387900LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x549 = 6936U;
	volatile int32_t x550 = -39;
	static int8_t x551 = -13;
	int8_t x552 = 8;
	static uint32_t t75 = 12892U;

	t75 = ((x549>>(x550<=x551))-x552);

	if (t75 != 3460U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x553 = 7334U;
	int64_t x554 = 7034325LL;
	uint32_t x555 = 4279U;
	int32_t x556 = -1;
	volatile int32_t t76 = -3;

	t76 = ((x553>>(x554<=x555))-x556);

	if (t76 != 7335) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x557 = 14810U;
	volatile int32_t x558 = INT32_MAX;
	static int8_t x560 = INT8_MIN;
	volatile uint32_t t77 = 37906158U;

	t77 = ((x557>>(x558<=x559))-x560);

	if (t77 != 14938U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x593 = 1746U;
	static int8_t x594 = INT8_MAX;
	int8_t x595 = INT8_MAX;
	static volatile int32_t x596 = -42977118;

	t78 = ((x593>>(x594<=x595))-x596);

	if (t78 != 42977991) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x597 = 2051265791U;
	int8_t x598 = INT8_MIN;
	static volatile uint64_t t79 = 3703LLU;

	t79 = ((x597>>(x598<=x599))-x600);

	if (t79 != 1025632896LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x601 = UINT32_MAX;
	uint32_t x602 = UINT32_MAX;
	static int16_t x603 = INT16_MIN;
	int16_t x604 = -1;
	volatile uint32_t t80 = 26U;

	t80 = ((x601>>(x602<=x603))-x604);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x605 = 184887LLU;
	static int64_t x606 = -5439018LL;
	int64_t x607 = INT64_MAX;
	static int16_t x608 = 0;
	volatile uint64_t t81 = 1796666LLU;

	t81 = ((x605>>(x606<=x607))-x608);

	if (t81 != 92443LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x617 = UINT16_MAX;
	volatile uint32_t x618 = 47605485U;
	static int64_t x619 = INT64_MIN;
	int16_t x620 = INT16_MIN;
	int32_t t82 = 334;

	t82 = ((x617>>(x618<=x619))-x620);

	if (t82 != 98303) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x625 = UINT64_MAX;
	volatile int16_t x627 = -1;
	int64_t x628 = 7942482792340142LL;
	uint64_t t83 = 464992052238907677LLU;

	t83 = ((x625>>(x626<=x627))-x628);

	if (t83 != 9215429554062435665LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x630 = INT32_MIN;
	static uint64_t x632 = 2854LLU;
	uint64_t t84 = 1076938063630886323LLU;

	t84 = ((x629>>(x630<=x631))-x632);

	if (t84 != 18446744073709548889LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x634 = -1;
	static int16_t x635 = -1;
	static int16_t x636 = 1;

	t85 = ((x633>>(x634<=x635))-x636);

	if (t85 != 979984725509957504LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x638 = -11;
	volatile int32_t x640 = INT32_MAX;
	int32_t t86 = 213637;

	t86 = ((x637>>(x638<=x639))-x640);

	if (t86 != -1073741824) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x641 = 35528539837237LLU;
	uint8_t x642 = 9U;
	volatile int8_t x644 = INT8_MAX;
	static uint64_t t87 = 1LLU;

	t87 = ((x641>>(x642<=x643))-x644);

	if (t87 != 17764269918491LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x645 = 63U;
	int64_t x647 = 27334726271122417LL;
	int32_t t88 = -151598;

	t88 = ((x645>>(x646<=x647))-x648);

	if (t88 != 159) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x657 = INT8_MAX;
	uint16_t x659 = UINT16_MAX;

	t89 = ((x657>>(x658<=x659))-x660);

	if (t89 != 4294616704U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x662 = 41926116;
	volatile uint64_t x664 = 12LLU;
	volatile uint64_t t90 = 1LLU;

	t90 = ((x661>>(x662<=x663))-x664);

	if (t90 != 32755LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x665 = 1;
	volatile uint16_t x666 = UINT16_MAX;
	int16_t x667 = INT16_MIN;
	int16_t x668 = INT16_MIN;
	int32_t t91 = 90;

	t91 = ((x665>>(x666<=x667))-x668);

	if (t91 != 32769) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x669 = 2480U;
	volatile int64_t x670 = INT64_MIN;
	int16_t x671 = INT16_MAX;
	int16_t x672 = INT16_MAX;
	volatile uint32_t t92 = 6U;

	t92 = ((x669>>(x670<=x671))-x672);

	if (t92 != 4294935769U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x673 = 1;
	static volatile uint32_t x674 = 30602590U;
	int32_t x675 = INT32_MAX;
	int64_t x676 = INT64_MAX;
	volatile int64_t t93 = -18807129060815504LL;

	t93 = ((x673>>(x674<=x675))-x676);

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x678 = 3384U;
	static int32_t x679 = INT32_MIN;
	volatile int32_t t94 = 35060;

	t94 = ((x677>>(x678<=x679))-x680);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x681 = 37137650U;
	volatile int16_t x682 = INT16_MIN;
	volatile uint32_t x683 = UINT32_MAX;
	static int32_t x684 = 90601;

	t95 = ((x681>>(x682<=x683))-x684);

	if (t95 != 18478224U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x685 = INT16_MAX;
	int8_t x686 = -1;
	static uint64_t x687 = UINT64_MAX;
	int16_t x688 = -1;
	int32_t t96 = -111;

	t96 = ((x685>>(x686<=x687))-x688);

	if (t96 != 16384) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x690 = 2174LLU;

	t97 = ((x689>>(x690<=x691))-x692);

	if (t97 != -124) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x694 = INT8_MIN;
	int64_t x696 = 24558LL;
	volatile int64_t t98 = -150488060959LL;

	t98 = ((x693>>(x694<=x695))-x696);

	if (t98 != -24431LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x701 = 29457LLU;
	int32_t x703 = 14028;
	uint32_t x704 = UINT32_MAX;
	uint64_t t99 = 4220679442LLU;

	t99 = ((x701>>(x702<=x703))-x704);

	if (t99 != 18446744069414599049LLU) { NG(); } else { ; }
	
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

