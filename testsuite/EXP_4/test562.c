#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
static volatile int32_t t1 = -73077181;
static int64_t t2 = -12838LL;
int8_t x31 = -3;
int8_t x50 = -1;
static uint8_t x56 = 6U;
volatile int32_t t10 = -31251;
uint32_t x81 = 547269952U;
static int32_t x105 = 88;
int8_t x108 = -9;
int32_t t13 = 10;
volatile uint64_t x111 = UINT64_MAX;
volatile uint64_t t14 = 1023019548616863LLU;
int8_t x166 = INT8_MAX;
int64_t x167 = 11887100LL;
uint16_t x172 = UINT16_MAX;
int64_t x180 = -1LL;
int16_t x186 = 813;
static uint64_t x193 = 4915417LLU;
int8_t x194 = INT8_MAX;
int32_t x197 = INT32_MIN;
volatile int64_t x199 = 220211596806148433LL;
volatile int64_t t22 = -39LL;
volatile int16_t x205 = INT16_MAX;
volatile int8_t x214 = -1;
static volatile int64_t x216 = -11871LL;
int16_t x223 = INT16_MIN;
uint64_t x237 = UINT64_MAX;
int16_t x242 = INT16_MAX;
int16_t x245 = INT16_MIN;
int32_t x246 = 157822;
volatile int32_t x260 = INT32_MIN;
volatile uint32_t t32 = 454856U;
int64_t x279 = INT64_MAX;
static uint64_t x280 = 4173554180251822LLU;
static int64_t t34 = 7LL;
uint32_t x298 = UINT32_MAX;
int64_t x300 = 220499LL;
volatile uint64_t t35 = 266593LLU;
static uint32_t x311 = 921807672U;
int64_t x329 = INT64_MIN;
int16_t x334 = INT16_MAX;
uint8_t x340 = UINT8_MAX;
uint32_t x368 = UINT32_MAX;
int64_t x398 = -337971LL;
int16_t x402 = -11;
static volatile int8_t x404 = INT8_MIN;
uint64_t x437 = UINT64_MAX;
volatile int8_t x440 = INT8_MAX;
static volatile int8_t x441 = INT8_MIN;
int64_t x455 = 9236032409715LL;
uint16_t x456 = 1402U;
static int32_t x458 = INT32_MIN;
int32_t t57 = 427172;
static int8_t x481 = INT8_MIN;
static int16_t x482 = 11;
volatile uint16_t x502 = UINT16_MAX;
volatile int64_t t60 = 957LL;
static volatile int32_t x509 = -9060;
uint16_t x517 = 3U;
int64_t t65 = 60LL;
int32_t x553 = INT32_MIN;
volatile int8_t x555 = 2;
volatile uint64_t x587 = UINT64_MAX;
int64_t x588 = -1LL;
int64_t x590 = 3391264169LL;
uint64_t x591 = 4100334790561643970LLU;
int64_t t70 = -38LL;
int16_t x605 = 1264;
int32_t x607 = INT32_MIN;
volatile int8_t x608 = -3;
uint32_t x615 = UINT32_MAX;
volatile uint32_t t72 = 12U;
volatile int8_t x622 = 11;
static volatile int64_t t75 = 28615962LL;
uint16_t x639 = 13991U;
static int64_t t77 = -1450391LL;
int64_t t78 = 1LL;
uint8_t x673 = UINT8_MAX;
static uint64_t t79 = 83427559285546873LLU;
uint32_t x713 = 3U;
static uint8_t x729 = 26U;
int32_t x732 = -1;
static int8_t x735 = -1;
uint8_t x784 = 1U;
int8_t x787 = INT8_MIN;
int64_t x802 = -181LL;
int64_t x803 = INT64_MIN;
static volatile int64_t t91 = -2001444951196LL;
int64_t x839 = INT64_MAX;
static int16_t x841 = -1;
static int64_t x843 = INT64_MIN;
uint64_t t95 = 967566LLU;
static uint64_t t96 = 834840409LLU;
volatile int32_t t97 = 3257951;
volatile uint8_t x882 = UINT8_MAX;
int16_t x890 = INT16_MAX;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	uint64_t x2 = 118339LLU;
	volatile int32_t x3 = INT32_MAX;
	uint64_t t0 = 27401307761LLU;

	t0 = (x1*(x2%(x3/x4)));

	if (t0 != 9223372036854723007LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 1;
	int8_t x14 = INT8_MAX;
	int32_t x15 = -59926;
	int8_t x16 = 40;

	t1 = (x13*(x14%(x15/x16)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = -1;
	uint16_t x22 = 606U;
	static volatile int64_t x23 = INT64_MAX;
	volatile int32_t x24 = -110114;

	t2 = (x21*(x22%(x23/x24)));

	if (t2 != -606LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x29 = 3U;
	uint8_t x30 = 27U;
	volatile uint32_t x32 = 441295U;
	uint32_t t3 = 197833934U;

	t3 = (x29*(x30%(x31/x32)));

	if (t3 != 81U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 110U;
	static int32_t x34 = 21005;
	int16_t x35 = INT16_MIN;
	uint16_t x36 = 12678U;
	static int32_t t4 = -1;

	t4 = (x33*(x34%(x35/x36)));

	if (t4 != 110) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = -1;
	int16_t x42 = 218;
	uint64_t x43 = UINT64_MAX;
	volatile int32_t x44 = -1;
	uint64_t t5 = 807249229769LLU;

	t5 = (x41*(x42%(x43/x44)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = 347794816482800LL;
	uint16_t x47 = UINT16_MAX;
	uint32_t x48 = 1697U;
	int64_t t6 = 5238802958LL;

	t6 = (x45*(x46%(x47/x48)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = -1;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 3U;
	uint32_t t7 = 1897U;

	t7 = (x49*(x50%(x51/x52)));

	if (t7 != 4294934527U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = 1;
	static int64_t x54 = 94995294LL;
	volatile int32_t x55 = -155061335;
	int64_t t8 = 11645504240LL;

	t8 = (x53*(x54%(x55/x56)));

	if (t8 != 17464629LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x57 = INT8_MIN;
	int16_t x58 = 73;
	uint64_t x59 = 1904135503785LLU;
	static int8_t x60 = 1;
	volatile uint64_t t9 = 33721957206LLU;

	t9 = (x57*(x58%(x59/x60)));

	if (t9 != 18446744073709542272LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x61 = -1;
	int16_t x62 = INT16_MIN;
	uint8_t x63 = UINT8_MAX;
	volatile int8_t x64 = INT8_MAX;

	t10 = (x61*(x62%(x63/x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = UINT32_MAX;
	uint8_t x70 = UINT8_MAX;
	int16_t x71 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	static uint32_t t11 = 190545U;

	t11 = (x69*(x70%(x71/x72)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x82 = INT32_MIN;
	static int16_t x83 = INT16_MIN;
	static volatile int16_t x84 = -1;
	volatile uint32_t t12 = 11488U;

	t12 = (x81*(x82%(x83/x84)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x106 = -22;
	int32_t x107 = INT32_MIN;

	t13 = (x105*(x106%(x107/x108)));

	if (t13 != -1936) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x109 = UINT32_MAX;
	uint8_t x110 = 3U;
	uint64_t x112 = 7664807800LLU;

	t14 = (x109*(x110%(x111/x112)));

	if (t14 != 12884901885LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x145 = 443300985LL;
	int64_t x146 = INT64_MAX;
	uint32_t x147 = 174U;
	uint8_t x148 = 8U;
	volatile int64_t t15 = -148470618822479LL;

	t15 = (x145*(x146%(x147/x148)));

	if (t15 != 3103106895LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x165 = INT32_MIN;
	uint8_t x168 = UINT8_MAX;
	int64_t t16 = 871403900989504LL;

	t16 = (x165*(x166%(x167/x168)));

	if (t16 != -272730423296LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x169 = -96776815LL;
	static int8_t x170 = -1;
	int32_t x171 = INT32_MAX;
	volatile int64_t t17 = -41513LL;

	t17 = (x169*(x170%(x171/x172)));

	if (t17 != 96776815LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x177 = 552U;
	volatile int8_t x178 = -59;
	int32_t x179 = -1;
	int64_t t18 = 2328LL;

	t18 = (x177*(x178%(x179/x180)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x185 = -15;
	static int16_t x187 = -1;
	volatile int8_t x188 = -1;
	static int32_t t19 = 35897094;

	t19 = (x185*(x186%(x187/x188)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x189 = 2478U;
	uint32_t x190 = UINT32_MAX;
	volatile int64_t x191 = INT64_MIN;
	volatile int8_t x192 = INT8_MIN;
	int64_t t20 = 708264631LL;

	t20 = (x189*(x190%(x191/x192)));

	if (t20 != 10642928957010LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x195 = 3277187U;
	volatile int32_t x196 = 86;
	volatile uint64_t t21 = 143805031924827735LLU;

	t21 = (x193*(x194%(x195/x196)));

	if (t21 != 624257959LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x198 = -1;
	uint16_t x200 = 22647U;

	t22 = (x197*(x198%(x199/x200)));

	if (t22 != 2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MIN;
	volatile uint8_t x208 = 46U;
	volatile uint32_t t23 = 8643931U;

	t23 = (x205*(x206%(x207/x208)));

	if (t23 != 700229366U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x213 = 1410582916LLU;
	static int16_t x215 = INT16_MIN;
	volatile uint64_t t24 = 1202532732LLU;

	t24 = (x213*(x214%(x215/x216)));

	if (t24 != 18446744072298968700LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x221 = -1;
	int16_t x222 = INT16_MAX;
	int8_t x224 = 8;
	volatile int32_t t25 = 31;

	t25 = (x221*(x222%(x223/x224)));

	if (t25 != -4095) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x225 = -4;
	int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MIN;
	static int64_t x228 = 22322090913LL;
	int64_t t26 = -2279LL;

	t26 = (x225*(x226%(x227/x228)));

	if (t26 != 326038472LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = 616U;
	uint64_t t27 = 463797LLU;

	t27 = (x237*(x238%(x239/x240)));

	if (t27 != 14LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x241 = -1;
	volatile uint16_t x243 = UINT16_MAX;
	int16_t x244 = -8;
	static int32_t t28 = 508416;

	t28 = (x241*(x242%(x243/x244)));

	if (t28 != -3) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MAX;
	volatile int64_t t29 = -3651593870074311LL;

	t29 = (x245*(x246%(x247/x248)));

	if (t29 != -5171511296LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x257 = INT16_MIN;
	static int8_t x258 = 18;
	int64_t x259 = INT64_MIN;
	volatile int64_t t30 = -2471752773235LL;

	t30 = (x257*(x258%(x259/x260)));

	if (t30 != -589824LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x265 = 7160U;
	int64_t x266 = 0LL;
	int64_t x267 = INT64_MAX;
	volatile uint32_t x268 = 980255U;
	volatile int64_t t31 = -1924232672599188LL;

	t31 = (x265*(x266%(x267/x268)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x269 = INT8_MIN;
	volatile int16_t x270 = -1;
	uint32_t x271 = UINT32_MAX;
	static uint32_t x272 = UINT32_MAX;

	t32 = (x269*(x270%(x271/x272)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x277 = -266137500;
	int8_t x278 = 1;
	uint64_t t33 = 12308LLU;

	t33 = (x277*(x278%(x279/x280)));

	if (t33 != 18446744073443414116LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x293 = 35U;
	int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MIN;
	int16_t x296 = 75;

	t34 = (x293*(x294%(x295/x296)));

	if (t34 != -12600LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x297 = 583832431650298LLU;
	int64_t x299 = INT64_MAX;

	t35 = (x297*(x298%(x299/x300)));

	if (t35 != 1490782718597634566LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x309 = 5016213;
	volatile int64_t x310 = INT64_MIN;
	uint8_t x312 = UINT8_MAX;
	static volatile int64_t t36 = 16867781143352LL;

	t36 = (x309*(x310%(x311/x312)));

	if (t36 != -10918931291064LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x317 = 2U;
	int8_t x318 = INT8_MAX;
	int16_t x319 = INT16_MAX;
	int64_t x320 = -1LL;
	int64_t t37 = 6170094298LL;

	t37 = (x317*(x318%(x319/x320)));

	if (t37 != 254LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MIN;
	volatile int8_t x332 = INT8_MIN;
	volatile int64_t t38 = 1558219LL;

	t38 = (x329*(x330%(x331/x332)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x333 = INT8_MIN;
	volatile int16_t x335 = -1;
	uint64_t x336 = 187322LLU;
	volatile uint64_t t39 = 105873343681LLU;

	t39 = (x333*(x334%(x335/x336)));

	if (t39 != 18446744073705357440LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x337 = -1;
	int32_t x338 = INT32_MIN;
	int16_t x339 = 13938;
	volatile int32_t t40 = -312404128;

	t40 = (x337*(x338%(x339/x340)));

	if (t40 != 38) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x345 = -8;
	int64_t x346 = -5152178727790LL;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -1LL;
	volatile int64_t t41 = 4530716281LL;

	t41 = (x345*(x346%(x347/x348)));

	if (t41 != 220016LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x353 = -12;
	int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MAX;
	uint32_t x356 = 116313U;
	volatile int64_t t42 = 103019LL;

	t42 = (x353*(x354%(x355/x356)));

	if (t42 != 25769803776LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x361 = INT64_MAX;
	uint8_t x362 = 4U;
	int64_t x363 = -1LL;
	int32_t x364 = -1;
	int64_t t43 = 845245153949167LL;

	t43 = (x361*(x362%(x363/x364)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x365 = 940606020719LLU;
	uint8_t x366 = 1U;
	int64_t x367 = INT64_MIN;
	volatile uint64_t t44 = 677911178539143LLU;

	t44 = (x365*(x366%(x367/x368)));

	if (t44 != 940606020719LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = -1;
	static uint64_t x375 = 66321663403221LLU;
	uint32_t x376 = 971118334U;
	uint64_t t45 = 384LLU;

	t45 = (x373*(x374%(x375/x376)));

	if (t45 != 18446744073366503424LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = -1;
	uint64_t x387 = 41521484864435834LLU;
	uint8_t x388 = 77U;
	volatile uint64_t t46 = 368LLU;

	t46 = (x385*(x386%(x387/x388)));

	if (t46 != 18446324081072988129LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x389 = 8227U;
	uint16_t x390 = 29U;
	int16_t x391 = INT16_MIN;
	static int16_t x392 = 3;
	volatile uint32_t t47 = 2182500U;

	t47 = (x389*(x390%(x391/x392)));

	if (t47 != 238583U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x397 = INT64_MAX;
	int32_t x399 = -1382892;
	uint64_t x400 = 361423500872439LLU;
	uint64_t t48 = 214100969991LLU;

	t48 = (x397*(x398%(x399/x400)));

	if (t48 != 9223372036854764653LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x401 = -1391;
	int16_t x403 = INT16_MAX;
	volatile int32_t t49 = 1;

	t49 = (x401*(x402%(x403/x404)));

	if (t49 != 15301) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x413 = INT16_MIN;
	int32_t x414 = -5238707;
	volatile int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MAX;
	int32_t t50 = 15;

	t50 = (x413*(x414%(x415/x416)));

	if (t50 != 557056) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x421 = INT8_MAX;
	static int32_t x422 = INT32_MAX;
	volatile int32_t x423 = INT32_MIN;
	int16_t x424 = INT16_MIN;
	volatile int32_t t51 = 9823049;

	t51 = (x421*(x422%(x423/x424)));

	if (t51 != 8322945) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x429 = INT32_MIN;
	uint64_t x430 = 7061437061132LLU;
	int32_t x431 = INT32_MIN;
	static uint8_t x432 = 22U;
	uint64_t t52 = 127320432682492290LLU;

	t52 = (x429*(x430%(x431/x432)));

	if (t52 != 17349752500814610432LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x433 = INT16_MIN;
	int16_t x434 = 1;
	int16_t x435 = INT16_MAX;
	static uint8_t x436 = 41U;
	volatile int32_t t53 = -6;

	t53 = (x433*(x434%(x435/x436)));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x438 = INT64_MAX;
	int8_t x439 = INT8_MIN;
	uint64_t t54 = 19316638724LLU;

	t54 = (x437*(x438%(x439/x440)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x442 = 1;
	static volatile uint16_t x443 = 86U;
	static int16_t x444 = -1;
	int32_t t55 = -95;

	t55 = (x441*(x442%(x443/x444)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x453 = -1;
	int16_t x454 = INT16_MIN;
	volatile int64_t t56 = -365599894567964541LL;

	t56 = (x453*(x454%(x455/x456)));

	if (t56 != 32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x457 = UINT16_MAX;
	static int16_t x459 = INT16_MIN;
	int32_t x460 = 165;

	t57 = (x457*(x458%(x459/x460)));

	if (t57 != -131070) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x483 = INT16_MAX;
	static int16_t x484 = -11;
	int32_t t58 = 47930;

	t58 = (x481*(x482%(x483/x484)));

	if (t58 != -1408) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x493 = INT8_MIN;
	int32_t x494 = INT32_MIN;
	int8_t x495 = INT8_MAX;
	volatile int8_t x496 = -1;
	volatile int32_t t59 = -1;

	t59 = (x493*(x494%(x495/x496)));

	if (t59 != 1024) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x501 = 1U;
	uint32_t x503 = UINT32_MAX;
	static volatile int64_t x504 = -12LL;

	t60 = (x501*(x502%(x503/x504)));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x510 = 181U;
	volatile uint16_t x511 = 7U;
	int16_t x512 = -1;
	volatile uint32_t t61 = 95055U;

	t61 = (x509*(x510%(x511/x512)));

	if (t61 != 4293327436U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x513 = INT8_MIN;
	uint32_t x514 = 58685249U;
	static int16_t x515 = INT16_MIN;
	static int32_t x516 = -234;
	uint32_t t62 = 112U;

	t62 = (x513*(x514%(x515/x516)));

	if (t62 != 4294961024U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x518 = INT64_MIN;
	int32_t x519 = INT32_MAX;
	uint16_t x520 = 7U;
	int64_t t63 = -233462415LL;

	t63 = (x517*(x518%(x519/x520)));

	if (t63 != -24LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x525 = 3;
	uint8_t x526 = 1U;
	static int16_t x527 = -685;
	uint8_t x528 = 1U;
	int32_t t64 = 2;

	t64 = (x525*(x526%(x527/x528)));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x541 = INT16_MIN;
	int8_t x542 = 6;
	volatile int64_t x543 = INT64_MAX;
	static int64_t x544 = 1LL;

	t65 = (x541*(x542%(x543/x544)));

	if (t65 != -196608LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x554 = 15750972U;
	int64_t x556 = -1LL;
	volatile int64_t t66 = 46846311LL;

	t66 = (x553*(x554%(x555/x556)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x569 = INT16_MIN;
	uint64_t x570 = UINT64_MAX;
	uint64_t x571 = UINT64_MAX;
	int32_t x572 = -27964;
	uint64_t t67 = 601416248876819LLU;

	t67 = (x569*(x570%(x571/x572)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x585 = INT64_MAX;
	int32_t x586 = -4058;
	static volatile uint64_t t68 = 755130LLU;

	t68 = (x585*(x586%(x587/x588)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x589 = INT16_MAX;
	static volatile uint16_t x592 = UINT16_MAX;
	uint64_t t69 = 12LLU;

	t69 = (x589*(x590%(x591/x592)));

	if (t69 != 111121553025623LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x593 = 35U;
	int16_t x594 = INT16_MAX;
	static int64_t x595 = INT64_MAX;
	volatile int8_t x596 = INT8_MAX;

	t70 = (x593*(x594%(x595/x596)));

	if (t70 != 1146845LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x606 = INT16_MAX;
	static volatile int32_t t71 = -2;

	t71 = (x605*(x606%(x607/x608)));

	if (t71 != 41417488) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x613 = INT16_MIN;
	int32_t x614 = 3;
	volatile int16_t x616 = -360;

	t72 = (x613*(x614%(x615/x616)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x617 = UINT64_MAX;
	uint32_t x618 = 1545166133U;
	uint8_t x619 = UINT8_MAX;
	static int8_t x620 = 4;
	static uint64_t t73 = 1301471439079LLU;

	t73 = (x617*(x618%(x619/x620)));

	if (t73 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x621 = 3;
	volatile int32_t x623 = INT32_MIN;
	int32_t x624 = INT32_MIN;
	volatile int32_t t74 = 332882;

	t74 = (x621*(x622%(x623/x624)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x625 = INT16_MAX;
	static int64_t x626 = 89645536744353LL;
	int64_t x627 = INT64_MIN;
	int8_t x628 = 1;

	t75 = (x625*(x626%(x627/x628)));

	if (t75 != 2937415302502214751LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x637 = -1LL;
	int8_t x638 = INT8_MIN;
	volatile int8_t x640 = -1;
	int64_t t76 = 231169559618LL;

	t76 = (x637*(x638%(x639/x640)));

	if (t76 != 128LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x645 = -15895210405LL;
	int16_t x646 = INT16_MIN;
	volatile int64_t x647 = INT64_MIN;
	volatile int32_t x648 = INT32_MIN;

	t77 = (x645*(x646%(x647/x648)));

	if (t77 != 520854254551040LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x649 = 9743U;
	int16_t x650 = -726;
	int32_t x651 = -4057;
	int64_t x652 = -1LL;

	t78 = (x649*(x650%(x651/x652)));

	if (t78 != -7073418LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x674 = INT32_MIN;
	int32_t x675 = -5472143;
	uint64_t x676 = 40LLU;

	t79 = (x673*(x674%(x675/x676)));

	if (t79 != 6917528481393271374LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x681 = UINT16_MAX;
	int16_t x682 = 13471;
	uint64_t x683 = UINT64_MAX;
	int32_t x684 = INT32_MIN;
	uint64_t t80 = 489LLU;

	t80 = (x681*(x682%(x683/x684)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x697 = 4U;
	uint32_t x698 = 850895U;
	static int8_t x699 = INT8_MAX;
	int8_t x700 = -1;
	volatile uint32_t t81 = 31240U;

	t81 = (x697*(x698%(x699/x700)));

	if (t81 != 3403580U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x709 = 27U;
	uint16_t x710 = UINT16_MAX;
	int32_t x711 = INT32_MIN;
	static uint8_t x712 = 2U;
	int32_t t82 = 96949654;

	t82 = (x709*(x710%(x711/x712)));

	if (t82 != 1769445) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x714 = INT16_MIN;
	int64_t x715 = -2416832250215LL;
	static int32_t x716 = 68445573;
	volatile int64_t t83 = -246326LL;

	t83 = (x713*(x714%(x715/x716)));

	if (t83 != -98304LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x717 = 35603173614LLU;
	uint8_t x718 = 0U;
	static uint64_t x719 = 380292308LLU;
	static int64_t x720 = 113LL;
	uint64_t t84 = 7771282680883817LLU;

	t84 = (x717*(x718%(x719/x720)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x730 = INT16_MIN;
	static int64_t x731 = -1LL;
	int64_t t85 = -886644621658LL;

	t85 = (x729*(x730%(x731/x732)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x733 = 2669069LLU;
	int32_t x734 = INT32_MIN;
	volatile uint32_t x736 = 270U;
	uint64_t t86 = 136276834808LLU;

	t86 = (x733*(x734%(x735/x736)));

	if (t86 != 101424622LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x757 = -1;
	int64_t x758 = INT64_MIN;
	volatile uint16_t x759 = 111U;
	uint8_t x760 = 1U;
	volatile int64_t t87 = 4116486476093678LL;

	t87 = (x757*(x758%(x759/x760)));

	if (t87 != 80LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x781 = INT8_MIN;
	int16_t x782 = INT16_MIN;
	uint64_t x783 = UINT64_MAX;
	uint64_t t88 = 0LLU;

	t88 = (x781*(x782%(x783/x784)));

	if (t88 != 4194304LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x785 = -61690;
	volatile int32_t x786 = INT32_MAX;
	static int8_t x788 = -2;
	volatile int32_t t89 = 2039245;

	t89 = (x785*(x786%(x787/x788)));

	if (t89 != -3886470) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x793 = 1938724U;
	uint32_t x794 = 13378U;
	volatile int32_t x795 = INT32_MIN;
	uint16_t x796 = 746U;
	uint32_t t90 = 6862U;

	t90 = (x793*(x794%(x795/x796)));

	if (t90 != 166445896U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x801 = 0;
	int32_t x804 = INT32_MIN;

	t91 = (x801*(x802%(x803/x804)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x805 = INT64_MIN;
	uint16_t x806 = 0U;
	volatile int64_t x807 = INT64_MIN;
	uint16_t x808 = 39U;
	int64_t t92 = -65158187767322LL;

	t92 = (x805*(x806%(x807/x808)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x837 = -842298680334LL;
	static int64_t x838 = INT64_MAX;
	int8_t x840 = INT8_MAX;
	volatile int64_t t93 = -62325105LL;

	t93 = (x837*(x838%(x839/x840)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x842 = 7U;
	volatile int64_t x844 = -107360552615655LL;
	volatile int64_t t94 = 36357LL;

	t94 = (x841*(x842%(x843/x844)));

	if (t94 != -7LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x845 = 8356168724303651566LLU;
	uint16_t x846 = UINT16_MAX;
	int8_t x847 = INT8_MAX;
	int8_t x848 = -1;

	t95 = (x845*(x846%(x847/x848)));

	if (t95 != 6621762099201403082LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x853 = INT8_MAX;
	int8_t x854 = -3;
	uint64_t x855 = UINT64_MAX;
	volatile int8_t x856 = INT8_MAX;

	t96 = (x853*(x854%(x855/x856)));

	if (t96 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x869 = -1;
	int16_t x870 = INT16_MIN;
	uint8_t x871 = UINT8_MAX;
	int8_t x872 = -8;

	t97 = (x869*(x870%(x871/x872)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x881 = INT32_MAX;
	int64_t x883 = -52LL;
	volatile uint64_t x884 = 5309658721593860142LLU;
	static uint64_t t98 = 101035272458783LLU;

	t98 = (x881*(x882%(x883/x884)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x889 = 2;
	static int64_t x891 = -24218LL;
	uint8_t x892 = 15U;
	int64_t t99 = 0LL;

	t99 = (x889*(x890%(x891/x892)));

	if (t99 != 974LL) { NG(); } else { ; }
	
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

