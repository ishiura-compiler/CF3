#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
static int16_t x6 = -1;
static int8_t x10 = 3;
volatile uint32_t t2 = 174U;
int8_t x39 = INT8_MAX;
int8_t x50 = -56;
int8_t x52 = 0;
uint64_t t6 = 179LLU;
static volatile int16_t x65 = -1;
uint64_t t7 = 801684495LLU;
volatile uint64_t t8 = 114489691615843793LLU;
uint16_t x108 = 0U;
volatile int64_t t13 = 1830803LL;
volatile int8_t x123 = INT8_MIN;
static int16_t x126 = -1798;
uint8_t x128 = 46U;
uint64_t t15 = 258948565261701388LLU;
static uint16_t x137 = 44U;
uint64_t t17 = 6171079033LLU;
volatile uint64_t x158 = 148714LLU;
int32_t x160 = -1;
static volatile int64_t x167 = -1LL;
int8_t x183 = INT8_MAX;
volatile int32_t t25 = 32640964;
uint8_t x234 = 0U;
static int16_t x251 = INT16_MIN;
static volatile int16_t x254 = INT16_MAX;
uint64_t t30 = 238964785551965504LLU;
int8_t x261 = -1;
int32_t x293 = 869942526;
int32_t x294 = -1;
volatile int32_t t35 = 6280;
int16_t x301 = INT16_MIN;
int8_t x302 = -1;
uint32_t x311 = UINT32_MAX;
uint32_t x330 = 1061U;
int8_t x332 = -1;
volatile uint32_t x340 = UINT32_MAX;
volatile int32_t x342 = 12493;
int16_t x349 = 340;
uint8_t x350 = UINT8_MAX;
uint32_t x359 = 228269U;
uint32_t x381 = 19215272U;
uint32_t t48 = 1844297810U;
int8_t x421 = INT8_MIN;
static int8_t x424 = INT8_MIN;
int32_t x433 = 0;
volatile int64_t x441 = INT64_MIN;
uint64_t t58 = 232235620395749562LLU;
int16_t x448 = 1332;
volatile int64_t t60 = 2433745LL;
volatile uint8_t x468 = 1U;
uint64_t x486 = 826427257891917LLU;
uint64_t t62 = 245533LLU;
int8_t x494 = INT8_MAX;
volatile uint16_t x507 = 29173U;
static volatile uint8_t x508 = 1U;
static volatile int8_t x511 = -1;
static int8_t x532 = 1;
uint64_t t68 = 2254674154LLU;
static int64_t x537 = INT64_MIN;
int64_t x540 = 11572385144614LL;
int64_t t71 = -143233308638372LL;
uint16_t x563 = 28U;
uint32_t x578 = UINT32_MAX;
volatile uint64_t t77 = 5LLU;
volatile int32_t x600 = -1;
int32_t x607 = -41564152;
static uint8_t x622 = 0U;
uint16_t x636 = UINT16_MAX;
static volatile int32_t t83 = -18590788;
static uint32_t x653 = 8478628U;
volatile uint64_t t84 = 4032836LLU;
int64_t x682 = INT64_MIN;
static uint64_t x683 = 1201LLU;
uint8_t x684 = UINT8_MAX;
int32_t x705 = -12;
int64_t x707 = INT64_MIN;
int8_t x725 = INT8_MAX;
int16_t x735 = INT16_MIN;
static int16_t x763 = INT16_MIN;
static volatile int16_t x765 = INT16_MIN;


void f0(void) {
	static uint32_t x1 = 1U;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = 107990;
	uint64_t t0 = 3238936LLU;

	t0 = (x1-((x2*x3)*x4));

	if (t0 != 7077124651LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int8_t x7 = -1;
	int32_t x8 = 27;
	int32_t t1 = 2785342;

	t1 = (x5-((x6*x7)*x8));

	if (t1 != -155) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	uint16_t x11 = 32709U;
	uint32_t x12 = 1U;

	t2 = (x9-((x10*x11)*x12));

	if (t2 != 4294869168U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = -1;
	static uint8_t x34 = 0U;
	int16_t x35 = INT16_MIN;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x33-((x34*x35)*x36));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = 120U;
	int16_t x38 = INT16_MIN;
	uint16_t x40 = 1U;
	int32_t t4 = 56871917;

	t4 = (x37-((x38*x39)*x40));

	if (t4 != 4161656) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x49 = INT8_MIN;
	int64_t x51 = -1LL;
	volatile int64_t t5 = -8050214321060LL;

	t5 = (x49-((x50*x51)*x52));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x57 = 5370;
	volatile uint16_t x58 = 94U;
	static uint8_t x59 = 95U;
	uint64_t x60 = 15462742LLU;

	t6 = (x57-((x58*x59)*x60));

	if (t6 != 18446743935627270926LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x66 = 1051117LLU;
	uint8_t x67 = 1U;
	int64_t x68 = -61456973097900LL;

	t7 = (x65-((x66*x67)*x68));

	if (t7 != 9258236970616699451LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = -1772;
	volatile uint64_t x71 = 275158792550437LLU;
	uint16_t x72 = 17159U;

	t8 = (x69-((x70*x71)*x72));

	if (t8 != 10033840882437830083LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = INT32_MIN;
	static int16_t x74 = INT16_MIN;
	uint32_t x75 = 0U;
	volatile int8_t x76 = INT8_MIN;
	static volatile uint32_t t9 = 464815U;

	t9 = (x73-((x74*x75)*x76));

	if (t9 != 2147483648U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = -1;
	int32_t x91 = -10085;
	int8_t x92 = INT8_MAX;
	static int32_t t10 = 675;

	t10 = (x89-((x90*x91)*x92));

	if (t10 != -1313563) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x97 = INT64_MAX;
	static uint16_t x98 = 19U;
	int16_t x99 = 191;
	int8_t x100 = 0;
	int64_t t11 = INT64_MAX;

	t11 = (x97-((x98*x99)*x100));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x101 = INT64_MIN;
	int8_t x102 = -1;
	static volatile int64_t x103 = 51911683326087844LL;
	uint16_t x104 = 165U;
	volatile int64_t t12 = 16158819416312LL;

	t12 = (x101-((x102*x103)*x104));

	if (t12 != -657944288050281548LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x105 = -1272;
	int64_t x106 = -1LL;
	int64_t x107 = INT64_MAX;

	t13 = (x105-((x106*x107)*x108));

	if (t13 != -1272LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x121 = 8U;
	static volatile uint32_t x122 = 12U;
	int32_t x124 = 16;
	uint32_t t14 = 12U;

	t14 = (x121-((x122*x123)*x124));

	if (t14 != 24584U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x125 = INT16_MIN;
	static uint64_t x127 = 161572321410LLU;

	t15 = (x125-((x126*x127)*x128));

	if (t15 != 13363323559145512LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x138 = -2;
	uint64_t x139 = 1950762LLU;
	uint32_t x140 = 29083U;
	static uint64_t t16 = 95079059815652LLU;

	t16 = (x137-((x138*x139)*x140));

	if (t16 != 113468022536LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x145 = UINT64_MAX;
	uint16_t x146 = UINT16_MAX;
	volatile uint64_t x147 = 119LLU;
	uint64_t x148 = UINT64_MAX;

	t17 = (x145-((x146*x147)*x148));

	if (t17 != 7798664LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x149 = 3654683282LLU;
	int8_t x150 = -1;
	volatile int8_t x151 = INT8_MAX;
	int64_t x152 = 30672831038606889LL;
	volatile uint64_t t18 = 969987566LLU;

	t18 = (x149-((x150*x151)*x152));

	if (t18 != 3895449545557758185LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x157 = INT64_MAX;
	uint32_t x159 = 40499U;
	uint64_t t19 = 961655114LLU;

	t19 = (x157-((x158*x159)*x160));

	if (t19 != 9223372042877544093LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x165 = INT32_MIN;
	static uint8_t x166 = 4U;
	int32_t x168 = INT32_MAX;
	int64_t t20 = -3067303242738923LL;

	t20 = (x165-((x166*x167)*x168));

	if (t20 != 6442450940LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x169 = 3995U;
	int8_t x170 = INT8_MAX;
	static int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	volatile int32_t t21 = 110846;

	t21 = (x169-((x170*x171)*x172));

	if (t21 != -532672613) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x181 = INT64_MIN;
	static uint16_t x182 = UINT16_MAX;
	int16_t x184 = -1;
	volatile int64_t t22 = -132816LL;

	t22 = (x181-((x182*x183)*x184));

	if (t22 != -9223372036846452863LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x189 = -4857;
	volatile int8_t x190 = INT8_MIN;
	int8_t x191 = -34;
	static volatile uint16_t x192 = 5U;
	int32_t t23 = -11570143;

	t23 = (x189-((x190*x191)*x192));

	if (t23 != -26617) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x197 = -7;
	static uint8_t x198 = UINT8_MAX;
	static uint64_t x199 = UINT64_MAX;
	uint8_t x200 = UINT8_MAX;
	uint64_t t24 = 14LLU;

	t24 = (x197-((x198*x199)*x200));

	if (t24 != 65018LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x221 = 123U;
	uint16_t x222 = 301U;
	int16_t x223 = INT16_MIN;
	int16_t x224 = 1;

	t25 = (x221-((x222*x223)*x224));

	if (t25 != 9863291) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x225 = UINT64_MAX;
	uint8_t x226 = 0U;
	int8_t x227 = INT8_MAX;
	static uint32_t x228 = 7550409U;
	static uint64_t t26 = UINT64_MAX;

	t26 = (x225-((x226*x227)*x228));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x233 = -486889028054LL;
	int64_t x235 = -255312382933536LL;
	uint16_t x236 = 155U;
	volatile int64_t t27 = -781134992633310LL;

	t27 = (x233-((x234*x235)*x236));

	if (t27 != -486889028054LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x245 = 237U;
	int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 188917792U;
	volatile uint32_t t28 = 140U;

	t28 = (x245-((x246*x247)*x248));

	if (t28 != 1588326637U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x249 = 23;
	int64_t x250 = -1LL;
	int8_t x252 = INT8_MIN;
	volatile int64_t t29 = -738326459258LL;

	t29 = (x249-((x250*x251)*x252));

	if (t29 != 4194327LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x253 = 132431817522661207LLU;
	volatile uint64_t x255 = 341LLU;
	static volatile uint8_t x256 = 1U;

	t30 = (x253-((x254*x255)*x256));

	if (t30 != 132431817511487660LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x257 = -1;
	uint64_t x258 = 946LLU;
	int16_t x259 = -13;
	static uint64_t x260 = 52551187LLU;
	volatile uint64_t t31 = 88152671553574LLU;

	t31 = (x257-((x258*x259)*x260));

	if (t31 != 646274497725LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x262 = 15U;
	uint32_t x263 = 17268725U;
	uint32_t x264 = 1075U;
	uint32_t t32 = 14U;

	t32 = (x261-((x262*x263)*x264));

	if (t32 != 714683614U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x277 = 5U;
	uint32_t x278 = 16343945U;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = INT32_MIN;
	volatile uint32_t t33 = 6231989U;

	t33 = (x277-((x278*x279)*x280));

	if (t33 != 2147483653U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x285 = 1750257;
	int8_t x286 = -10;
	static int16_t x287 = -1;
	uint8_t x288 = 40U;
	int32_t t34 = 177;

	t34 = (x285-((x286*x287)*x288));

	if (t34 != 1749857) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x295 = -1;
	int32_t x296 = -1388;

	t35 = (x293-((x294*x295)*x296));

	if (t35 != 869943914) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x303 = 878991;
	uint32_t x304 = 55031562U;
	static uint32_t t36 = 822207781U;

	t36 = (x301-((x302*x303)*x304));

	if (t36 != 2325993622U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x305 = -16093543006817014LL;
	volatile int16_t x306 = -36;
	int16_t x307 = -1;
	int16_t x308 = INT16_MIN;
	static int64_t t37 = -167177LL;

	t37 = (x305-((x306*x307)*x308));

	if (t37 != -16093543005637366LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x309 = -1LL;
	static int8_t x310 = -1;
	int8_t x312 = 0;
	int64_t t38 = 10LL;

	t38 = (x309-((x310*x311)*x312));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x317 = 179LL;
	volatile int8_t x318 = 0;
	int64_t x319 = INT64_MIN;
	volatile int64_t x320 = -1LL;
	volatile int64_t t39 = -818LL;

	t39 = (x317-((x318*x319)*x320));

	if (t39 != 179LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x329 = 19545U;
	static int16_t x331 = -1;
	volatile uint32_t t40 = 961U;

	t40 = (x329-((x330*x331)*x332));

	if (t40 != 18484U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x337 = -1;
	static int32_t x338 = -2;
	int16_t x339 = INT16_MIN;
	uint32_t t41 = 93826U;

	t41 = (x337-((x338*x339)*x340));

	if (t41 != 65535U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x341 = INT8_MIN;
	volatile int8_t x343 = 1;
	int16_t x344 = INT16_MIN;
	volatile int32_t t42 = 27412;

	t42 = (x341-((x342*x343)*x344));

	if (t42 != 409370496) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x345 = UINT32_MAX;
	static uint16_t x346 = 349U;
	volatile int8_t x347 = -1;
	int32_t x348 = -1;
	uint32_t t43 = 17U;

	t43 = (x345-((x346*x347)*x348));

	if (t43 != 4294966946U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x351 = 1;
	int16_t x352 = 2860;
	volatile int32_t t44 = 0;

	t44 = (x349-((x350*x351)*x352));

	if (t44 != -728960) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x357 = -13;
	int16_t x358 = INT16_MAX;
	int8_t x360 = INT8_MIN;
	uint32_t t45 = 1497U;

	t45 = (x357-((x358*x359)*x360));

	if (t45 != 3917621619U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x369 = INT8_MIN;
	volatile uint64_t x370 = 8819452811677LLU;
	static uint8_t x371 = 4U;
	int16_t x372 = 875;
	volatile uint64_t t46 = 6086387LLU;

	t46 = (x369-((x370*x371)*x372));

	if (t46 != 18415875988868681988LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x377 = 7384U;
	int16_t x378 = -4169;
	int8_t x379 = 25;
	static uint8_t x380 = 41U;
	static volatile int32_t t47 = 1282529;

	t47 = (x377-((x378*x379)*x380));

	if (t47 != 4280609) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x382 = 1;
	uint16_t x383 = 2U;
	int32_t x384 = -1;

	t48 = (x381-((x382*x383)*x384));

	if (t48 != 19215274U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MIN;
	static int64_t x387 = -1LL;
	static int32_t x388 = INT32_MAX;
	volatile int64_t t49 = 1964024675867LL;

	t49 = (x385-((x386*x387)*x388));

	if (t49 != -277025390464LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x389 = INT16_MAX;
	static volatile uint64_t x390 = 168LLU;
	int64_t x391 = INT64_MAX;
	uint32_t x392 = 115U;
	static uint64_t t50 = 8243575311456338LLU;

	t50 = (x389-((x390*x391)*x392));

	if (t50 != 52087LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x393 = INT32_MIN;
	static volatile uint32_t x394 = 122555878U;
	static uint16_t x395 = 12131U;
	int8_t x396 = 1;
	uint32_t t51 = 1820577U;

	t51 = (x393-((x394*x395)*x396));

	if (t51 != 1480812046U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x397 = INT16_MAX;
	int32_t x398 = -4078;
	static int32_t x399 = 492891;
	static int32_t x400 = -1;
	volatile int32_t t52 = 145;

	t52 = (x397-((x398*x399)*x400));

	if (t52 != -2009976731) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x413 = 328;
	int64_t x414 = INT64_MIN;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = INT16_MIN;
	uint64_t t53 = 5211792057201356LLU;

	t53 = (x413-((x414*x415)*x416));

	if (t53 != 328LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x422 = 3U;
	uint64_t x423 = UINT64_MAX;
	static volatile uint64_t t54 = 287081033133613464LLU;

	t54 = (x421-((x422*x423)*x424));

	if (t54 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x429 = UINT32_MAX;
	int32_t x430 = -1754;
	int8_t x431 = 10;
	volatile int8_t x432 = 5;
	volatile uint32_t t55 = 5U;

	t55 = (x429-((x430*x431)*x432));

	if (t55 != 87699U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x434 = 54;
	uint32_t x435 = UINT32_MAX;
	uint32_t x436 = 21122U;
	uint32_t t56 = 3038641U;

	t56 = (x433-((x434*x435)*x436));

	if (t56 != 1140588U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x437 = INT16_MIN;
	volatile uint32_t x438 = UINT32_MAX;
	volatile int16_t x439 = -2;
	static int32_t x440 = INT32_MAX;
	volatile uint32_t t57 = 1U;

	t57 = (x437-((x438*x439)*x440));

	if (t57 != 4294934530U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x442 = 6856U;
	uint64_t x443 = UINT64_MAX;
	volatile int32_t x444 = INT32_MIN;

	t58 = (x441-((x442*x443)*x444));

	if (t58 != 9223357313706885120LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x445 = 6790507456LLU;
	static int16_t x446 = -1;
	static int16_t x447 = INT16_MAX;
	uint64_t t59 = 3311040667053968221LLU;

	t59 = (x445-((x446*x447)*x448));

	if (t59 != 6834153100LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x461 = -1LL;
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MAX;
	static int8_t x464 = INT8_MAX;

	t60 = (x461-((x462*x463)*x464));

	if (t60 != 528515071LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x465 = 309U;
	static int8_t x466 = INT8_MIN;
	int8_t x467 = -6;
	uint32_t t61 = 135342761U;

	t61 = (x465-((x466*x467)*x468));

	if (t61 != 4294966837U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x485 = 86U;
	volatile int32_t x487 = 205692;
	int32_t x488 = INT32_MAX;

	t62 = (x485-((x486*x487)*x488));

	if (t62 != 3005432794940505250LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x493 = 338159697LLU;
	static int16_t x495 = INT16_MIN;
	static uint8_t x496 = 0U;
	volatile uint64_t t63 = 6LLU;

	t63 = (x493-((x494*x495)*x496));

	if (t63 != 338159697LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x505 = -5017;
	int8_t x506 = INT8_MIN;
	static int32_t t64 = 488;

	t64 = (x505-((x506*x507)*x508));

	if (t64 != 3729127) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x509 = INT16_MIN;
	int16_t x510 = INT16_MAX;
	uint8_t x512 = 42U;
	static volatile int32_t t65 = -9021;

	t65 = (x509-((x510*x511)*x512));

	if (t65 != 1343446) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x517 = INT32_MIN;
	int8_t x518 = INT8_MIN;
	volatile int8_t x519 = INT8_MIN;
	int16_t x520 = -1;
	int32_t t66 = 112788;

	t66 = (x517-((x518*x519)*x520));

	if (t66 != -2147467264) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x521 = INT8_MIN;
	int32_t x522 = -1;
	uint64_t x523 = UINT64_MAX;
	static volatile int64_t x524 = -710622991706467LL;
	uint64_t t67 = 509522131LLU;

	t67 = (x521-((x522*x523)*x524));

	if (t67 != 710622991706339LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x529 = -155;
	int16_t x530 = INT16_MIN;
	uint64_t x531 = 433973187173567573LLU;

	t68 = (x529-((x530*x531)*x532));

	if (t68 != 16440460547107487589LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x533 = INT16_MIN;
	int64_t x534 = 934014LL;
	volatile uint8_t x535 = 1U;
	int16_t x536 = -1;
	volatile int64_t t69 = -61107770874LL;

	t69 = (x533-((x534*x535)*x536));

	if (t69 != 901246LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x538 = -1;
	uint64_t x539 = 28570813005983LLU;
	volatile uint64_t t70 = 46179995187LLU;

	t70 = (x537-((x538*x539)*x540));

	if (t70 != 11762188101111879834LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x545 = -1;
	static int32_t x546 = 7085;
	int64_t x547 = -1LL;
	static volatile int32_t x548 = -412007;

	t71 = (x545-((x546*x547)*x548));

	if (t71 != -2919069596LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x557 = INT8_MIN;
	int32_t x558 = -1;
	int16_t x559 = INT16_MAX;
	uint16_t x560 = 0U;
	static volatile int32_t t72 = 439199298;

	t72 = (x557-((x558*x559)*x560));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x561 = 0;
	uint8_t x562 = 0U;
	int64_t x564 = -200543744702625903LL;
	volatile int64_t t73 = -3329057349104112LL;

	t73 = (x561-((x562*x563)*x564));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x577 = -1;
	uint8_t x579 = 1U;
	int16_t x580 = -1;
	uint32_t t74 = 4U;

	t74 = (x577-((x578*x579)*x580));

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x581 = 36298866U;
	int8_t x582 = INT8_MAX;
	int64_t x583 = -1566316LL;
	int8_t x584 = -1;
	int64_t t75 = 1972490904LL;

	t75 = (x581-((x582*x583)*x584));

	if (t75 != -162623266LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x585 = INT8_MAX;
	int8_t x586 = INT8_MIN;
	uint64_t x587 = 435952501064921LLU;
	static int64_t x588 = INT64_MIN;
	static volatile uint64_t t76 = 58978512377196LLU;

	t76 = (x585-((x586*x587)*x588));

	if (t76 != 127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x589 = UINT64_MAX;
	int64_t x590 = -1LL;
	volatile uint8_t x591 = 88U;
	uint16_t x592 = 476U;

	t77 = (x589-((x590*x591)*x592));

	if (t77 != 41887LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x593 = UINT8_MAX;
	int32_t x594 = -1;
	volatile uint16_t x595 = UINT16_MAX;
	static int64_t x596 = 4923346882962LL;
	volatile int64_t t78 = -16LL;

	t78 = (x593-((x594*x595)*x596));

	if (t78 != 322651537974914925LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x597 = 4707U;
	static volatile uint8_t x598 = 48U;
	static int8_t x599 = -2;
	uint32_t t79 = 19302657U;

	t79 = (x597-((x598*x599)*x600));

	if (t79 != 4611U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x605 = 19U;
	volatile int8_t x606 = -1;
	int64_t x608 = 138741LL;
	volatile int64_t t80 = -324LL;

	t80 = (x605-((x606*x607)*x608));

	if (t80 != -5766652012613LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x621 = INT8_MIN;
	static uint64_t x623 = 1244468LLU;
	uint8_t x624 = 2U;
	volatile uint64_t t81 = 59929LLU;

	t81 = (x621-((x622*x623)*x624));

	if (t81 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x633 = 62U;
	int16_t x634 = 1;
	int16_t x635 = 478;
	int32_t t82 = -3271;

	t82 = (x633-((x634*x635)*x636));

	if (t82 != -31325668) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x645 = 2U;
	uint8_t x646 = 0U;
	int16_t x647 = INT16_MIN;
	volatile uint16_t x648 = 69U;

	t83 = (x645-((x646*x647)*x648));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x654 = 3919LLU;
	int64_t x655 = 8206342184012688LL;
	int8_t x656 = -47;

	t84 = (x653-((x654*x655)*x656));

	if (t84 != 17364515929383838516LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x673 = UINT8_MAX;
	static uint64_t x674 = UINT64_MAX;
	int32_t x675 = INT32_MIN;
	uint8_t x676 = 2U;
	uint64_t t85 = 148271478258525LLU;

	t85 = (x673-((x674*x675)*x676));

	if (t85 != 18446744069414584575LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x677 = INT8_MIN;
	int8_t x678 = -1;
	volatile uint32_t x679 = 39U;
	static int16_t x680 = INT16_MIN;
	uint32_t t86 = 1U;

	t86 = (x677-((x678*x679)*x680));

	if (t86 != 4293689216U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x681 = -42;
	uint64_t t87 = 593484454001LLU;

	t87 = (x681-((x682*x683)*x684));

	if (t87 != 9223372036854775766LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x685 = 39160160267030LLU;
	static uint32_t x686 = 225925U;
	uint16_t x687 = 10U;
	uint16_t x688 = UINT16_MAX;
	uint64_t t88 = 201582583681LLU;

	t88 = (x685-((x686*x687)*x688));

	if (t88 != 39158129206344LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x689 = 3U;
	volatile uint8_t x690 = 1U;
	uint16_t x691 = 7U;
	static int8_t x692 = -14;
	volatile int32_t t89 = 116;

	t89 = (x689-((x690*x691)*x692));

	if (t89 != 101) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x706 = 7460597LLU;
	int16_t x708 = INT16_MIN;
	volatile uint64_t t90 = 89368LLU;

	t90 = (x705-((x706*x707)*x708));

	if (t90 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x709 = 9053U;
	uint16_t x710 = 18333U;
	uint16_t x711 = 28U;
	uint64_t x712 = 2865895211LLU;
	volatile uint64_t t91 = 237875LLU;

	t91 = (x709-((x710*x711)*x712));

	if (t91 != 18445272940916269305LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x713 = UINT64_MAX;
	int64_t x714 = -1LL;
	uint16_t x715 = 273U;
	volatile uint32_t x716 = 1162064733U;
	static volatile uint64_t t92 = 2251LLU;

	t92 = (x713-((x714*x715)*x716));

	if (t92 != 317243672108LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x726 = UINT64_MAX;
	int8_t x727 = 2;
	static volatile uint64_t x728 = 88454199066847LLU;
	uint64_t t93 = 1749218LLU;

	t93 = (x725-((x726*x727)*x728));

	if (t93 != 176908398133821LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x733 = -1LL;
	uint32_t x734 = UINT32_MAX;
	int16_t x736 = -1;
	volatile int64_t t94 = -126922155093LL;

	t94 = (x733-((x734*x735)*x736));

	if (t94 != -4294934529LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x741 = -1;
	int16_t x742 = 76;
	int16_t x743 = -1;
	volatile int8_t x744 = 1;
	volatile int32_t t95 = 363573;

	t95 = (x741-((x742*x743)*x744));

	if (t95 != 75) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x745 = INT8_MAX;
	static volatile int32_t x746 = 246341;
	uint32_t x747 = 260645235U;
	uint64_t x748 = UINT64_MAX;
	static volatile uint64_t t96 = 91120302716107LLU;

	t96 = (x745-((x746*x747)*x748));

	if (t96 != 2141727358LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x761 = 344036;
	uint64_t x762 = 5LLU;
	uint32_t x764 = UINT32_MAX;
	volatile uint64_t t97 = 766003171911979046LLU;

	t97 = (x761-((x762*x763)*x764));

	if (t97 != 703687441956836LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x766 = -1;
	uint64_t x767 = UINT64_MAX;
	uint32_t x768 = 1658897U;
	volatile uint64_t t98 = 229924264332112LLU;

	t98 = (x765-((x766*x767)*x768));

	if (t98 != 18446744073707859951LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x769 = -1;
	int16_t x770 = -1;
	int32_t x771 = -6714;
	volatile uint8_t x772 = UINT8_MAX;
	int32_t t99 = 136;

	t99 = (x769-((x770*x771)*x772));

	if (t99 != -1712071) { NG(); } else { ; }
	
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

