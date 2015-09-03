#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -38;
int64_t x2 = INT64_MAX;
volatile int8_t x4 = -1;
int16_t x5 = -1;
uint64_t x6 = 20331792134LLU;
volatile int64_t t3 = 513425837817LL;
uint64_t x49 = 371806645028LLU;
uint64_t t7 = 13642654LLU;
uint32_t x70 = UINT32_MAX;
volatile uint32_t x71 = UINT32_MAX;
static uint32_t t8 = 658161U;
int16_t x74 = 1705;
int64_t x77 = INT64_MIN;
volatile int64_t t10 = 36LL;
uint32_t x94 = 476802971U;
static int8_t x100 = INT8_MIN;
volatile int16_t x106 = 175;
int32_t x107 = INT32_MIN;
static volatile int32_t t16 = 1;
uint64_t x122 = 58421300916240LLU;
int16_t x124 = INT16_MAX;
static volatile uint8_t x126 = UINT8_MAX;
int32_t t19 = 1671;
uint8_t x134 = 7U;
int16_t x135 = INT16_MAX;
int64_t t23 = -32317LL;
static volatile int32_t t25 = 38093499;
volatile int8_t x198 = 0;
static volatile int32_t t26 = -15612;
static int16_t x201 = 1245;
int8_t x202 = 0;
int8_t x203 = 16;
volatile uint32_t x206 = 136U;
uint32_t t28 = 28650U;
int8_t x233 = 0;
volatile int16_t x251 = -1;
uint64_t t34 = 48345371674390353LLU;
uint32_t x263 = 604135695U;
uint32_t x268 = 29607U;
volatile int64_t t36 = 216LL;
int8_t x274 = 0;
int32_t x277 = -1;
uint32_t x278 = 6634U;
int8_t x287 = INT8_MIN;
static int8_t x321 = INT8_MIN;
static int32_t x323 = INT32_MIN;
static int8_t x335 = INT8_MIN;
int32_t x343 = -1;
volatile int32_t t44 = INT32_MAX;
uint8_t x355 = 0U;
volatile int32_t t45 = 1085356;
int64_t x374 = INT64_MAX;
uint16_t x375 = 380U;
static uint8_t x376 = 10U;
uint64_t x377 = UINT64_MAX;
static volatile uint64_t t48 = 768951157261109618LLU;
int64_t x382 = 58417993328446982LL;
volatile int64_t x396 = INT64_MIN;
int16_t x405 = INT16_MAX;
uint32_t t54 = 13U;
uint64_t x418 = UINT64_MAX;
static int8_t x425 = -1;
volatile int64_t x437 = -1LL;
int16_t x455 = -1;
static uint64_t x456 = 69578LLU;
int64_t x457 = -849233023LL;
static int16_t x462 = 138;
static int8_t x468 = INT8_MAX;
static int64_t x488 = INT64_MAX;
uint64_t t67 = 880594274995864LLU;
uint16_t x509 = 633U;
int32_t x510 = 1;
int32_t t68 = 471117;
static int64_t x516 = 1LL;
static volatile uint64_t t69 = 19317671274931625LLU;
static uint16_t x517 = 10366U;
uint64_t x524 = 1625354836803362LLU;
static volatile int64_t x528 = 4LL;
uint8_t x581 = 61U;
volatile uint16_t x582 = UINT16_MAX;
int64_t x584 = INT64_MIN;
int32_t x601 = -1;
uint64_t x604 = 14974LLU;
volatile int64_t x615 = INT64_MAX;
uint64_t t79 = 1638558307977176389LLU;
int8_t x622 = 10;
uint32_t x624 = 48562U;
int32_t t81 = 913;
uint64_t t83 = 218711LLU;
uint64_t x642 = 842122023450LLU;
int16_t x646 = INT16_MAX;
uint64_t t85 = 1235LLU;
int64_t x650 = INT64_MAX;
int8_t x661 = INT8_MAX;
static uint8_t x662 = UINT8_MAX;
int64_t x664 = INT64_MAX;
uint64_t x682 = UINT64_MAX;
volatile int8_t x684 = -1;
int32_t x701 = 1;
static uint16_t x702 = UINT16_MAX;
int64_t x716 = INT64_MAX;
uint32_t t93 = 2285960U;
int32_t t95 = -1254529;
uint32_t x726 = UINT32_MAX;
static int64_t t96 = -79030970206404LL;


void f0(void) {
	volatile int64_t x3 = INT64_MAX;
	int64_t t0 = 110546783567482LL;

	t0 = (x1+(x2>>(x3<x4)));

	if (t0 != 9223372036854775769LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = -1LL;
	static int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 5217754515401318071LLU;

	t1 = (x5+(x6>>(x7<x8)));

	if (t1 != 20331792133LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x25 = -1;
	volatile int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	static int32_t x28 = INT32_MAX;
	int32_t t2 = 12334684;

	t2 = (x25+(x26>>(x27<x28)));

	if (t2 != 1073741822) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x29 = -89LL;
	uint32_t x30 = 42829U;
	int8_t x31 = INT8_MIN;
	int8_t x32 = -1;

	t3 = (x29+(x30>>(x31<x32)));

	if (t3 != 21325LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 86U;
	uint16_t x34 = 7948U;
	volatile int8_t x35 = INT8_MIN;
	static uint8_t x36 = 0U;
	volatile int32_t t4 = 0;

	t4 = (x33+(x34>>(x35<x36)));

	if (t4 != 4060) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x50 = 12462;
	int32_t x51 = INT32_MIN;
	static volatile int32_t x52 = -1;
	uint64_t t5 = 25567833181LLU;

	t5 = (x49+(x50>>(x51<x52)));

	if (t5 != 371806651259LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x57 = -297;
	uint32_t x58 = 2U;
	uint16_t x59 = 14625U;
	uint16_t x60 = 0U;
	static uint32_t t6 = 100U;

	t6 = (x57+(x58>>(x59<x60)));

	if (t6 != 4294967001U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x61 = 17653LLU;
	int16_t x62 = 5933;
	int32_t x63 = -1;
	int8_t x64 = INT8_MAX;

	t7 = (x61+(x62>>(x63<x64)));

	if (t7 != 20619LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x69 = 1U;
	static int64_t x72 = INT64_MIN;

	t8 = (x69+(x70>>(x71<x72)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x73 = INT64_MIN;
	static uint32_t x75 = 66580253U;
	int16_t x76 = INT16_MIN;
	volatile int64_t t9 = 428327115801793LL;

	t9 = (x73+(x74>>(x75<x76)));

	if (t9 != -9223372036854774956LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MIN;
	volatile uint32_t x80 = 0U;

	t10 = (x77+(x78>>(x79<x80)));

	if (t10 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = -1;
	uint8_t x82 = 1U;
	int8_t x83 = 3;
	volatile uint32_t x84 = 76U;
	int32_t t11 = 103340;

	t11 = (x81+(x82>>(x83<x84)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x85 = 268239;
	int16_t x86 = INT16_MAX;
	volatile int32_t x87 = INT32_MIN;
	static volatile int16_t x88 = INT16_MIN;
	int32_t t12 = -10262311;

	t12 = (x85+(x86>>(x87<x88)));

	if (t12 != 284622) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x93 = INT32_MIN;
	volatile uint64_t x95 = 1LLU;
	int64_t x96 = -1LL;
	static uint32_t t13 = 24U;

	t13 = (x93+(x94>>(x95<x96)));

	if (t13 != 2385885133U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = INT16_MAX;
	int8_t x98 = 48;
	volatile int16_t x99 = -1;
	int32_t t14 = -4;

	t14 = (x97+(x98>>(x99<x100)));

	if (t14 != 32815) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x101 = INT64_MIN;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = -1LL;
	int8_t x104 = -1;
	int64_t t15 = 25247626LL;

	t15 = (x101+(x102>>(x103<x104)));

	if (t15 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x105 = INT32_MIN;
	int16_t x108 = INT16_MIN;

	t16 = (x105+(x106>>(x107<x108)));

	if (t16 != -2147483561) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x113 = -23;
	static uint32_t x114 = 11560U;
	volatile int32_t x115 = -1;
	int32_t x116 = INT32_MIN;
	static volatile uint32_t t17 = 15553U;

	t17 = (x113+(x114>>(x115<x116)));

	if (t17 != 11537U) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x121 = INT64_MIN;
	int64_t x123 = INT64_MIN;
	volatile uint64_t t18 = 1520LLU;

	t18 = (x121+(x122>>(x123<x124)));

	if (t18 != 9223401247505233928LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x125 = 6566U;
	int64_t x127 = -1LL;
	volatile int16_t x128 = INT16_MIN;

	t19 = (x125+(x126>>(x127<x128)));

	if (t19 != 6821) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x133 = 562;
	volatile int64_t x136 = -1LL;
	volatile int32_t t20 = -2302;

	t20 = (x133+(x134>>(x135<x136)));

	if (t20 != 569) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	int32_t x146 = INT32_MAX;
	uint32_t x147 = 1604U;
	uint32_t x148 = 28U;
	uint32_t t21 = 1487975U;

	t21 = (x145+(x146>>(x147<x148)));

	if (t21 != 2147483646U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x149 = INT16_MIN;
	uint32_t x150 = 865U;
	volatile uint64_t x151 = 10013766547293740LLU;
	volatile int32_t x152 = -3536841;
	volatile uint32_t t22 = 16704U;

	t22 = (x149+(x150>>(x151<x152)));

	if (t22 != 4294934960U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x161 = -1LL;
	int16_t x162 = INT16_MAX;
	volatile int16_t x163 = INT16_MIN;
	volatile int64_t x164 = -1LL;

	t23 = (x161+(x162>>(x163<x164)));

	if (t23 != 16382LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x173 = -1;
	volatile int16_t x174 = 2;
	volatile uint8_t x175 = 25U;
	uint16_t x176 = 58U;
	static volatile int32_t t24 = -65966;

	t24 = (x173+(x174>>(x175<x176)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x189 = 3U;
	uint8_t x190 = UINT8_MAX;
	volatile int8_t x191 = -19;
	uint8_t x192 = 31U;

	t25 = (x189+(x190>>(x191<x192)));

	if (t25 != 130) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x197 = -1;
	int64_t x199 = INT64_MIN;
	static int32_t x200 = INT32_MIN;

	t26 = (x197+(x198>>(x199<x200)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x204 = INT64_MIN;
	static volatile int32_t t27 = -151;

	t27 = (x201+(x202>>(x203<x204)));

	if (t27 != 1245) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x205 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	int8_t x208 = 24;

	t28 = (x205+(x206>>(x207<x208)));

	if (t28 != 4294967236U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x209 = UINT32_MAX;
	static volatile uint8_t x210 = 2U;
	int32_t x211 = -1625001;
	static uint16_t x212 = 0U;
	volatile uint32_t t29 = 824U;

	t29 = (x209+(x210>>(x211<x212)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x217 = 204054149LLU;
	uint64_t x218 = UINT64_MAX;
	uint32_t x219 = UINT32_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile uint64_t t30 = 13315LLU;

	t30 = (x217+(x218>>(x219<x220)));

	if (t30 != 204054148LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x234 = 2918805;
	uint64_t x235 = 191938430709198943LLU;
	int64_t x236 = -162447121133LL;
	int32_t t31 = 343502690;

	t31 = (x233+(x234>>(x235<x236)));

	if (t31 != 1459402) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x241 = 279520984LL;
	volatile int64_t x242 = INT64_MAX;
	int64_t x243 = INT64_MIN;
	static int32_t x244 = INT32_MIN;
	volatile int64_t t32 = 3968104LL;

	t32 = (x241+(x242>>(x243<x244)));

	if (t32 != 4611686018706908887LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x249 = -1;
	static uint16_t x250 = 0U;
	uint8_t x252 = 1U;
	int32_t t33 = -62902053;

	t33 = (x249+(x250>>(x251<x252)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x253 = INT32_MIN;
	static volatile uint64_t x254 = 317036050113090LLU;
	int64_t x255 = 31067079118LL;
	int64_t x256 = 449LL;

	t34 = (x253+(x254>>(x255<x256)));

	if (t34 != 317033902629442LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t35 = 57;

	t35 = (x261+(x262>>(x263<x264)));

	if (t35 != -2147467265) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x265 = INT64_MIN;
	volatile int32_t x266 = 39;
	volatile int64_t x267 = 3281834LL;

	t36 = (x265+(x266>>(x267<x268)));

	if (t36 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x273 = INT64_MIN;
	volatile int32_t x275 = INT32_MIN;
	int32_t x276 = -1;
	int64_t t37 = INT64_MIN;

	t37 = (x273+(x274>>(x275<x276)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x279 = INT64_MAX;
	int64_t x280 = -1LL;
	volatile uint32_t t38 = 290270664U;

	t38 = (x277+(x278>>(x279<x280)));

	if (t38 != 6633U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = 1865;
	static uint8_t x288 = 6U;
	int32_t t39 = 225007;

	t39 = (x285+(x286>>(x287<x288)));

	if (t39 != 804) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x313 = 60U;
	volatile int64_t x314 = INT64_MAX;
	volatile int16_t x315 = INT16_MIN;
	static int64_t x316 = 8226226LL;
	volatile int64_t t40 = 410LL;

	t40 = (x313+(x314>>(x315<x316)));

	if (t40 != 4611686018427387963LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x322 = INT32_MAX;
	int64_t x324 = INT64_MIN;
	volatile int32_t t41 = -76405924;

	t41 = (x321+(x322>>(x323<x324)));

	if (t41 != 2147483519) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x333 = -1;
	volatile uint16_t x334 = 1U;
	uint8_t x336 = 122U;
	int32_t t42 = -4;

	t42 = (x333+(x334>>(x335<x336)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x341 = 1564;
	volatile uint64_t x342 = UINT64_MAX;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t43 = 459529818695LLU;

	t43 = (x341+(x342>>(x343<x344)));

	if (t43 != 1563LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x349 = INT32_MAX;
	volatile int8_t x350 = 0;
	static int64_t x351 = INT64_MIN;
	uint32_t x352 = 76U;

	t44 = (x349+(x350>>(x351<x352)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x353 = INT16_MIN;
	int16_t x354 = 10451;
	int64_t x356 = INT64_MIN;

	t45 = (x353+(x354>>(x355<x356)));

	if (t45 != -22317) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x369 = INT64_MIN;
	static int8_t x370 = 0;
	volatile int64_t x371 = INT64_MAX;
	int64_t x372 = INT64_MAX;
	static volatile int64_t t46 = INT64_MIN;

	t46 = (x369+(x370>>(x371<x372)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x373 = 7511074LLU;
	uint64_t t47 = 98LLU;

	t47 = (x373+(x374>>(x375<x376)));

	if (t47 != 9223372036862286881LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x378 = INT64_MAX;
	uint32_t x379 = 9940U;
	uint16_t x380 = 0U;

	t48 = (x377+(x378>>(x379<x380)));

	if (t48 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x381 = INT8_MIN;
	uint8_t x383 = 110U;
	int64_t x384 = -1LL;
	int64_t t49 = -91678557431378641LL;

	t49 = (x381+(x382>>(x383<x384)));

	if (t49 != 58417993328446854LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x393 = INT16_MAX;
	uint8_t x394 = 11U;
	int32_t x395 = INT32_MIN;
	volatile int32_t t50 = 1069;

	t50 = (x393+(x394>>(x395<x396)));

	if (t50 != 32778) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x397 = -3;
	int32_t x398 = INT32_MAX;
	int8_t x399 = 0;
	static uint32_t x400 = 1U;
	int32_t t51 = 212215;

	t51 = (x397+(x398>>(x399<x400)));

	if (t51 != 1073741820) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x401 = 2LL;
	uint64_t x402 = 1823922978789135LLU;
	uint32_t x403 = 5261046U;
	volatile int64_t x404 = INT64_MAX;
	volatile uint64_t t52 = 33747107522LLU;

	t52 = (x401+(x402>>(x403<x404)));

	if (t52 != 911961489394569LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x406 = UINT32_MAX;
	volatile int64_t x407 = INT64_MIN;
	volatile uint64_t x408 = UINT64_MAX;
	uint32_t t53 = 7U;

	t53 = (x405+(x406>>(x407<x408)));

	if (t53 != 2147516414U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x409 = INT16_MIN;
	uint32_t x410 = 3U;
	uint64_t x411 = 140676LLU;
	static int8_t x412 = INT8_MIN;

	t54 = (x409+(x410>>(x411<x412)));

	if (t54 != 4294934529U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x417 = INT16_MIN;
	static uint32_t x419 = 6U;
	static int32_t x420 = -54;
	uint64_t t55 = 3679075825475080902LLU;

	t55 = (x417+(x418>>(x419<x420)));

	if (t55 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x421 = -8;
	static int64_t x422 = INT64_MAX;
	int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MIN;
	int64_t t56 = -6483LL;

	t56 = (x421+(x422>>(x423<x424)));

	if (t56 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x426 = 10592;
	int64_t x427 = INT64_MIN;
	int64_t x428 = -3LL;
	volatile int32_t t57 = -20482000;

	t57 = (x425+(x426>>(x427<x428)));

	if (t57 != 5295) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x429 = UINT8_MAX;
	uint64_t x430 = 29450241749LLU;
	volatile int32_t x431 = -14;
	int64_t x432 = INT64_MIN;
	static uint64_t t58 = 1LLU;

	t58 = (x429+(x430>>(x431<x432)));

	if (t58 != 29450242004LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x438 = UINT16_MAX;
	uint64_t x439 = 597510465658671467LLU;
	static int64_t x440 = INT64_MIN;
	static volatile int64_t t59 = -13555443658247LL;

	t59 = (x437+(x438>>(x439<x440)));

	if (t59 != 32766LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x453 = 30;
	int32_t x454 = 181131480;
	static volatile int32_t t60 = 9;

	t60 = (x453+(x454>>(x455<x456)));

	if (t60 != 181131510) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x458 = INT64_MAX;
	uint8_t x459 = 12U;
	uint64_t x460 = 5076219LLU;
	volatile int64_t t61 = -1892LL;

	t61 = (x457+(x458>>(x459<x460)));

	if (t61 != 4611686017578154880LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x461 = 8372U;
	uint32_t x463 = 20991U;
	uint32_t x464 = 1853U;
	static volatile int32_t t62 = -435;

	t62 = (x461+(x462>>(x463<x464)));

	if (t62 != 8510) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x465 = 0U;
	uint16_t x466 = UINT16_MAX;
	int8_t x467 = 6;
	volatile uint32_t t63 = 0U;

	t63 = (x465+(x466>>(x467<x468)));

	if (t63 != 32767U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x477 = 76099089LLU;
	uint8_t x478 = UINT8_MAX;
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = -3336;
	volatile uint64_t t64 = 847418LLU;

	t64 = (x477+(x478>>(x479<x480)));

	if (t64 != 76099344LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x485 = 19200557LLU;
	uint8_t x486 = 14U;
	static uint32_t x487 = 29760039U;
	volatile uint64_t t65 = 186127LLU;

	t65 = (x485+(x486>>(x487<x488)));

	if (t65 != 19200564LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x493 = 235192087LLU;
	uint16_t x494 = 5U;
	uint16_t x495 = 58U;
	int64_t x496 = INT64_MAX;
	uint64_t t66 = 22321619294LLU;

	t66 = (x493+(x494>>(x495<x496)));

	if (t66 != 235192089LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x501 = INT32_MAX;
	static volatile uint64_t x502 = 210272529066689709LLU;
	static uint64_t x503 = 512789686LLU;
	volatile int64_t x504 = INT64_MAX;

	t67 = (x501+(x502>>(x503<x504)));

	if (t67 != 105136266680828501LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x511 = 194564;
	volatile uint16_t x512 = 0U;

	t68 = (x509+(x510>>(x511<x512)));

	if (t68 != 634) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x513 = INT8_MIN;
	uint64_t x514 = UINT64_MAX;
	static int16_t x515 = -1;

	t69 = (x513+(x514>>(x515<x516)));

	if (t69 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x518 = 250U;
	int32_t x519 = INT32_MIN;
	volatile uint16_t x520 = 1610U;
	int32_t t70 = 8318982;

	t70 = (x517+(x518>>(x519<x520)));

	if (t70 != 10491) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x521 = INT8_MAX;
	volatile uint32_t x522 = 60199U;
	volatile int64_t x523 = -1LL;
	uint32_t t71 = 65U;

	t71 = (x521+(x522>>(x523<x524)));

	if (t71 != 60326U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x525 = 2558947LLU;
	volatile uint8_t x526 = UINT8_MAX;
	static int8_t x527 = -1;
	volatile uint64_t t72 = 727242449096860462LLU;

	t72 = (x525+(x526>>(x527<x528)));

	if (t72 != 2559074LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x537 = INT64_MIN;
	static int16_t x538 = 3;
	volatile uint32_t x539 = UINT32_MAX;
	int8_t x540 = INT8_MIN;
	static int64_t t73 = 15310192909LL;

	t73 = (x537+(x538>>(x539<x540)));

	if (t73 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x583 = -73;
	static volatile int32_t t74 = 211778;

	t74 = (x581+(x582>>(x583<x584)));

	if (t74 != 65596) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x585 = UINT64_MAX;
	int16_t x586 = 1;
	int8_t x587 = -10;
	int16_t x588 = INT16_MIN;
	static uint64_t t75 = 94019LLU;

	t75 = (x585+(x586>>(x587<x588)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x589 = INT16_MIN;
	uint8_t x590 = 0U;
	uint64_t x591 = 207696LLU;
	uint64_t x592 = 3258681170659LLU;
	volatile int32_t t76 = 12327;

	t76 = (x589+(x590>>(x591<x592)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x602 = 1092221171377LLU;
	int64_t x603 = INT64_MIN;
	volatile uint64_t t77 = 1LLU;

	t77 = (x601+(x602>>(x603<x604)));

	if (t77 != 1092221171376LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x609 = -31781914;
	static int16_t x610 = 0;
	static int32_t x611 = 530;
	uint16_t x612 = 8U;
	int32_t t78 = 13531;

	t78 = (x609+(x610>>(x611<x612)));

	if (t78 != -31781914) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x613 = -100LL;
	volatile uint64_t x614 = 226855LLU;
	volatile int32_t x616 = -4685665;

	t79 = (x613+(x614>>(x615<x616)));

	if (t79 != 226755LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x617 = INT32_MIN;
	static int8_t x618 = 1;
	uint32_t x619 = UINT32_MAX;
	volatile uint8_t x620 = 1U;
	volatile int32_t t80 = -2327;

	t80 = (x617+(x618>>(x619<x620)));

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x621 = UINT8_MAX;
	uint32_t x623 = 15398U;

	t81 = (x621+(x622>>(x623<x624)));

	if (t81 != 260) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x625 = INT16_MAX;
	uint16_t x626 = 142U;
	int32_t x627 = -1044209;
	volatile int8_t x628 = -1;
	int32_t t82 = 2;

	t82 = (x625+(x626>>(x627<x628)));

	if (t82 != 32838) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x629 = 1100834262485256797LLU;
	int8_t x630 = 3;
	uint32_t x631 = UINT32_MAX;
	int16_t x632 = INT16_MIN;

	t83 = (x629+(x630>>(x631<x632)));

	if (t83 != 1100834262485256800LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x641 = -26;
	int16_t x643 = 6717;
	uint16_t x644 = 251U;
	uint64_t t84 = 863897883247LLU;

	t84 = (x641+(x642>>(x643<x644)));

	if (t84 != 842122023424LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x645 = 3204500369517537591LLU;
	uint64_t x647 = 568145LLU;
	int32_t x648 = -1;

	t85 = (x645+(x646>>(x647<x648)));

	if (t85 != 3204500369517553974LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x649 = INT32_MIN;
	uint64_t x651 = UINT64_MAX;
	int32_t x652 = -2923;
	int64_t t86 = -227595LL;

	t86 = (x649+(x650>>(x651<x652)));

	if (t86 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x663 = -1;
	volatile int32_t t87 = 172789;

	t87 = (x661+(x662>>(x663<x664)));

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x669 = -1;
	uint8_t x670 = UINT8_MAX;
	uint32_t x671 = 372U;
	static uint32_t x672 = 500U;
	int32_t t88 = -1;

	t88 = (x669+(x670>>(x671<x672)));

	if (t88 != 126) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x673 = INT16_MIN;
	static volatile int16_t x674 = INT16_MAX;
	static volatile uint64_t x675 = 4979471570936323749LLU;
	static volatile uint32_t x676 = 221U;
	int32_t t89 = 14;

	t89 = (x673+(x674>>(x675<x676)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x681 = INT8_MAX;
	static volatile int16_t x683 = -6;
	uint64_t t90 = 8140LLU;

	t90 = (x681+(x682>>(x683<x684)));

	if (t90 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x689 = INT8_MIN;
	volatile uint16_t x690 = 124U;
	int16_t x691 = INT16_MAX;
	uint16_t x692 = 19U;
	int32_t t91 = 7207110;

	t91 = (x689+(x690>>(x691<x692)));

	if (t91 != -4) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x703 = UINT8_MAX;
	int16_t x704 = 2;
	int32_t t92 = -1;

	t92 = (x701+(x702>>(x703<x704)));

	if (t92 != 65536) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x713 = UINT32_MAX;
	uint32_t x714 = 4069U;
	volatile int16_t x715 = -13680;

	t93 = (x713+(x714>>(x715<x716)));

	if (t93 != 2033U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x717 = INT8_MIN;
	static uint32_t x718 = UINT32_MAX;
	int64_t x719 = -1LL;
	volatile int16_t x720 = -42;
	uint32_t t94 = 231U;

	t94 = (x717+(x718>>(x719<x720)));

	if (t94 != 4294967167U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x721 = INT32_MIN;
	uint16_t x722 = 18U;
	uint8_t x723 = UINT8_MAX;
	uint32_t x724 = 42574U;

	t95 = (x721+(x722>>(x723<x724)));

	if (t95 != -2147483639) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x725 = INT64_MIN;
	static volatile uint64_t x727 = UINT64_MAX;
	uint64_t x728 = 236185974255LLU;

	t96 = (x725+(x726>>(x727<x728)));

	if (t96 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x745 = INT64_MIN;
	uint8_t x746 = UINT8_MAX;
	static int64_t x747 = INT64_MIN;
	int64_t x748 = 5561822285245LL;
	static volatile int64_t t97 = -80682362700721562LL;

	t97 = (x745+(x746>>(x747<x748)));

	if (t97 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x757 = UINT32_MAX;
	volatile uint64_t x758 = 664477517403LLU;
	uint16_t x759 = 97U;
	int32_t x760 = -3589959;
	volatile uint64_t t98 = 519123379LLU;

	t98 = (x757+(x758>>(x759<x760)));

	if (t98 != 668772484698LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x765 = -31;
	uint32_t x766 = UINT32_MAX;
	volatile int64_t x767 = 28579046503LL;
	int64_t x768 = 570184691067964318LL;
	volatile uint32_t t99 = 931954974U;

	t99 = (x765+(x766>>(x767<x768)));

	if (t99 != 2147483616U) { NG(); } else { ; }
	
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

