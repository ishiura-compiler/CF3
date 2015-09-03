#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x51 = INT8_MIN;
uint8_t x71 = 114U;
static uint64_t x95 = 31514941615818LLU;
uint16_t x121 = UINT16_MAX;
static volatile int8_t x123 = INT8_MAX;
uint32_t x125 = 87454315U;
uint16_t x126 = 12675U;
int32_t x130 = 2;
int16_t x145 = INT16_MIN;
uint16_t x148 = UINT16_MAX;
int64_t x216 = INT64_MIN;
static int64_t t11 = -1824892LL;
int32_t x233 = INT32_MIN;
uint64_t x235 = 188765174440649329LLU;
volatile int64_t x236 = -1LL;
int64_t x265 = INT64_MIN;
int64_t x279 = -1LL;
int64_t x302 = 280250565559621285LL;
int16_t x305 = INT16_MAX;
static int64_t x306 = 3366LL;
static volatile int32_t x307 = 17535;
int8_t x331 = INT8_MIN;
uint32_t x336 = 24651U;
int16_t x350 = 25;
int64_t x352 = 543807829872LL;
static int16_t x355 = -1;
uint16_t x365 = 2U;
int16_t x367 = -1;
static int8_t x404 = INT8_MIN;
int32_t t24 = -1767376;
int32_t x436 = INT32_MAX;
uint16_t x442 = UINT16_MAX;
static uint32_t x466 = 224U;
uint16_t x468 = 96U;
static uint32_t x475 = 321996U;
static uint64_t x476 = UINT64_MAX;
uint64_t x485 = UINT64_MAX;
int64_t x493 = INT64_MAX;
volatile int64_t x494 = INT64_MAX;
uint8_t x549 = 24U;
static int64_t x554 = INT64_MAX;
int8_t x577 = 52;
int64_t x580 = INT64_MIN;
uint32_t x592 = 446826U;
volatile int16_t x615 = -1;
int16_t x616 = -7977;
uint32_t x638 = 308020U;
static uint8_t x651 = 50U;
volatile int64_t x652 = INT64_MIN;
static uint64_t x660 = UINT64_MAX;
int8_t x676 = INT8_MIN;
static int16_t x689 = INT16_MIN;
int32_t x691 = INT32_MIN;
volatile uint64_t x692 = UINT64_MAX;
int16_t x704 = INT16_MIN;
volatile uint64_t t46 = 100LLU;
static uint8_t x706 = UINT8_MAX;
int8_t x807 = -1;
static int64_t x809 = -1LL;
uint64_t x810 = 51087LLU;
static int32_t x812 = INT32_MIN;
int16_t x836 = INT16_MIN;
static volatile int32_t t54 = 32;
uint32_t x842 = 6U;
int32_t x843 = INT32_MAX;
static int8_t x845 = INT8_MIN;
static int8_t x848 = INT8_MAX;
uint32_t x858 = UINT32_MAX;
static uint64_t x885 = 45282529715LLU;
uint32_t x886 = UINT32_MAX;
uint64_t t60 = 1408852186094154309LLU;
int8_t x905 = INT8_MIN;
uint32_t x908 = UINT32_MAX;
uint32_t x926 = UINT32_MAX;
static volatile int64_t t63 = 2207790971304LL;
static uint16_t x929 = UINT16_MAX;
static volatile uint32_t t64 = 109U;
uint32_t x942 = UINT32_MAX;
volatile uint64_t t66 = 79173LLU;
int8_t x947 = INT8_MIN;
volatile int16_t x961 = INT16_MAX;
volatile int32_t x962 = 1057;
volatile int64_t x963 = -1LL;
static int64_t x969 = INT64_MAX;
volatile uint64_t t74 = 80331LLU;
static int64_t t76 = -1642LL;
static int64_t x1060 = -272636915862125278LL;
static uint32_t t79 = 1732992U;
uint64_t t81 = 4031LLU;
volatile uint32_t x1122 = 0U;
uint16_t x1136 = UINT16_MAX;
int16_t x1148 = -4433;
static int32_t t85 = 71816282;
uint16_t x1150 = 31852U;
volatile int32_t t87 = 163283;
static volatile int32_t t89 = 4;
static int32_t x1225 = 111;
uint16_t x1231 = 2U;
static volatile uint32_t t92 = 193635U;
volatile int64_t t93 = 1820195396868LL;
uint8_t x1253 = 1U;
uint32_t x1255 = UINT32_MAX;
uint32_t t94 = UINT32_MAX;
uint64_t x1261 = UINT64_MAX;
int32_t x1299 = INT32_MAX;
int8_t x1303 = INT8_MIN;
static uint32_t x1338 = 196196232U;
int16_t x1339 = INT16_MIN;


void f0(void) {
	int64_t x13 = -1LL;
	int16_t x14 = INT16_MAX;
	uint8_t x15 = 7U;
	static volatile uint16_t x16 = 188U;
	static volatile int64_t t0 = -1LL;

	t0 = (x13|(x14<<(x15/x16)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x49 = INT32_MIN;
	volatile uint8_t x50 = UINT8_MAX;
	int8_t x52 = INT8_MIN;
	int32_t t1 = -130791085;

	t1 = (x49|(x50<<(x51/x52)));

	if (t1 != -2147483138) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x69 = INT64_MAX;
	uint32_t x70 = UINT32_MAX;
	int32_t x72 = INT32_MAX;
	int64_t t2 = INT64_MAX;

	t2 = (x69|(x70<<(x71/x72)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x93 = 3U;
	uint16_t x94 = 27U;
	int32_t x96 = INT32_MIN;
	static volatile uint32_t t3 = 1150378296U;

	t3 = (x93|(x94<<(x95/x96)));

	if (t3 != 27U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x122 = UINT64_MAX;
	volatile int8_t x124 = INT8_MAX;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x121|(x122<<(x123/x124)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x127 = 923512U;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t5 = 7U;

	t5 = (x125|(x126<<(x127/x128)));

	if (t5 != 87454699U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x129 = INT32_MIN;
	int8_t x131 = -3;
	int64_t x132 = INT64_MIN;
	volatile int32_t t6 = 7;

	t6 = (x129|(x130<<(x131/x132)));

	if (t6 != -2147483646) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x133 = INT32_MIN;
	uint16_t x134 = 2U;
	int32_t x135 = 101384;
	uint64_t x136 = UINT64_MAX;
	volatile int32_t t7 = 0;

	t7 = (x133|(x134<<(x135/x136)));

	if (t7 != -2147483646) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x141 = UINT64_MAX;
	static uint32_t x142 = UINT32_MAX;
	int32_t x143 = 1370900;
	volatile uint64_t x144 = 2701599LLU;
	uint64_t t8 = UINT64_MAX;

	t8 = (x141|(x142<<(x143/x144)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x146 = 17;
	volatile int16_t x147 = 236;
	volatile int32_t t9 = 72321;

	t9 = (x145|(x146<<(x147/x148)));

	if (t9 != -32751) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x193 = INT64_MAX;
	uint16_t x194 = 279U;
	uint64_t x195 = 942548012776LLU;
	volatile int8_t x196 = -1;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x193|(x194<<(x195/x196)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x213 = 64663LL;
	int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MAX;

	t11 = (x213|(x214<<(x215/x216)));

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x234 = 16500475348074LLU;
	volatile uint64_t t12 = 326234912LLU;

	t12 = (x233|(x234<<(x235/x236)));

	if (t12 != 18446744072920548458LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x266 = 6U;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = UINT16_MAX;
	int64_t t13 = 0LL;

	t13 = (x265|(x266<<(x267/x268)));

	if (t13 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x277 = INT32_MIN;
	uint8_t x278 = 119U;
	int64_t x280 = INT64_MIN;
	static int32_t t14 = -6477;

	t14 = (x277|(x278<<(x279/x280)));

	if (t14 != -2147483529) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x281 = -1LL;
	static uint32_t x282 = UINT32_MAX;
	volatile int8_t x283 = -1;
	static uint32_t x284 = UINT32_MAX;
	volatile int64_t t15 = -63238372773LL;

	t15 = (x281|(x282<<(x283/x284)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x301 = INT16_MIN;
	static volatile uint32_t x303 = 14624U;
	static int32_t x304 = 188269;
	int64_t t16 = 1652044513606410237LL;

	t16 = (x301|(x302<<(x303/x304)));

	if (t16 != -26971LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x308 = UINT16_MAX;
	int64_t t17 = -259533025944533LL;

	t17 = (x305|(x306<<(x307/x308)));

	if (t17 != 32767LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x325 = 45566U;
	uint64_t x326 = 3859855976763424LLU;
	static int16_t x327 = -1;
	static int32_t x328 = -1;
	static uint64_t t18 = 303810535LLU;

	t18 = (x325|(x326<<(x327/x328)));

	if (t18 != 7719711953564158LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x329 = 0;
	static int64_t x330 = INT64_MAX;
	int64_t x332 = INT64_MIN;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x329|(x330<<(x331/x332)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x333 = -1;
	static volatile uint16_t x334 = 161U;
	int32_t x335 = 420;
	static int32_t t20 = -533203;

	t20 = (x333|(x334<<(x335/x336)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x349 = INT32_MIN;
	int16_t x351 = -1;
	int32_t t21 = -508054086;

	t21 = (x349|(x350<<(x351/x352)));

	if (t21 != -2147483623) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x353 = -7307;
	int32_t x354 = INT32_MAX;
	static volatile uint16_t x356 = 8169U;
	volatile int32_t t22 = 4971591;

	t22 = (x353|(x354<<(x355/x356)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x366 = UINT16_MAX;
	int32_t x368 = 1521940;
	volatile int32_t t23 = 1236889;

	t23 = (x365|(x366<<(x367/x368)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x401 = -1;
	uint8_t x402 = 28U;
	int32_t x403 = -1;

	t24 = (x401|(x402<<(x403/x404)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x409 = -1998;
	int32_t x410 = INT32_MAX;
	static int32_t x411 = -1;
	uint8_t x412 = 11U;
	static int32_t t25 = 107708;

	t25 = (x409|(x410<<(x411/x412)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x417 = INT32_MIN;
	uint16_t x418 = 3U;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = INT64_MAX;
	static int32_t t26 = 13261051;

	t26 = (x417|(x418<<(x419/x420)));

	if (t26 != -2147483645) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x433 = 31U;
	uint16_t x434 = 1845U;
	volatile uint8_t x435 = UINT8_MAX;
	int32_t t27 = -197265930;

	t27 = (x433|(x434<<(x435/x436)));

	if (t27 != 1855) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x441 = 8861U;
	static int8_t x443 = 0;
	int64_t x444 = 2802151841636LL;
	volatile uint32_t t28 = 458800527U;

	t28 = (x441|(x442<<(x443/x444)));

	if (t28 != 65535U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x465 = 449284744U;
	static uint32_t x467 = 41U;
	uint32_t t29 = 2U;

	t29 = (x465|(x466<<(x467/x468)));

	if (t29 != 449284840U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x473 = UINT64_MAX;
	static uint8_t x474 = 18U;
	uint64_t t30 = UINT64_MAX;

	t30 = (x473|(x474<<(x475/x476)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x486 = INT8_MAX;
	int8_t x487 = INT8_MAX;
	int32_t x488 = INT32_MIN;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x485|(x486<<(x487/x488)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x495 = -1;
	int64_t x496 = INT64_MIN;
	static int64_t t32 = INT64_MAX;

	t32 = (x493|(x494<<(x495/x496)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x509 = INT64_MIN;
	volatile uint64_t x510 = UINT64_MAX;
	uint64_t x511 = 16611LLU;
	static int8_t x512 = -1;
	uint64_t t33 = UINT64_MAX;

	t33 = (x509|(x510<<(x511/x512)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x525 = INT8_MIN;
	int8_t x526 = 5;
	static uint16_t x527 = 5U;
	volatile int8_t x528 = INT8_MIN;
	int32_t t34 = 1264149;

	t34 = (x525|(x526<<(x527/x528)));

	if (t34 != -123) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x550 = INT8_MAX;
	int64_t x551 = -1LL;
	static int32_t x552 = INT32_MIN;
	volatile int32_t t35 = -19692162;

	t35 = (x549|(x550<<(x551/x552)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x553 = INT32_MIN;
	uint8_t x555 = 48U;
	static uint32_t x556 = 7262U;
	volatile int64_t t36 = -4049661279976659094LL;

	t36 = (x553|(x554<<(x555/x556)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x578 = INT8_MAX;
	static int32_t x579 = 1041396629;
	volatile int32_t t37 = -1262;

	t37 = (x577|(x578<<(x579/x580)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x589 = 23U;
	volatile int16_t x590 = INT16_MAX;
	int8_t x591 = 1;
	static volatile int32_t t38 = 2;

	t38 = (x589|(x590<<(x591/x592)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x613 = 0U;
	uint32_t x614 = 1437817U;
	uint32_t t39 = 294U;

	t39 = (x613|(x614<<(x615/x616)));

	if (t39 != 1437817U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x637 = 7537;
	uint64_t x639 = 12269064982596239LLU;
	static int64_t x640 = -1LL;
	uint32_t t40 = 1941002321U;

	t40 = (x637|(x638<<(x639/x640)));

	if (t40 != 311157U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x649 = -1;
	int16_t x650 = 0;
	int32_t t41 = 1;

	t41 = (x649|(x650<<(x651/x652)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x657 = 5335U;
	uint8_t x658 = 51U;
	int64_t x659 = INT64_MAX;
	int32_t t42 = 12721758;

	t42 = (x657|(x658<<(x659/x660)));

	if (t42 != 5367) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x673 = 48821088;
	uint32_t x674 = 208109U;
	volatile uint32_t x675 = UINT32_MAX;
	volatile uint32_t t43 = 12027U;

	t43 = (x673|(x674<<(x675/x676)));

	if (t43 != 49216506U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x677 = INT8_MIN;
	uint32_t x678 = 7U;
	volatile int8_t x679 = -1;
	int8_t x680 = -1;
	volatile uint32_t t44 = 1046831626U;

	t44 = (x677|(x678<<(x679/x680)));

	if (t44 != 4294967182U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x690 = 951U;
	volatile int32_t t45 = -855382;

	t45 = (x689|(x690<<(x691/x692)));

	if (t45 != -31817) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x701 = INT64_MAX;
	uint64_t x702 = 0LLU;
	uint32_t x703 = 63445U;

	t46 = (x701|(x702<<(x703/x704)));

	if (t46 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x705 = -1;
	uint8_t x707 = 0U;
	uint64_t x708 = 4767053999711LLU;
	volatile int32_t t47 = -12392072;

	t47 = (x705|(x706<<(x707/x708)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x729 = UINT64_MAX;
	volatile int32_t x730 = INT32_MAX;
	int8_t x731 = -1;
	int32_t x732 = 9;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x729|(x730<<(x731/x732)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x745 = 5822U;
	int8_t x746 = INT8_MAX;
	int16_t x747 = INT16_MIN;
	int32_t x748 = INT32_MIN;
	static int32_t t49 = -382411;

	t49 = (x745|(x746<<(x747/x748)));

	if (t49 != 5887) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x773 = UINT8_MAX;
	static volatile uint16_t x774 = 1305U;
	uint8_t x775 = 29U;
	int16_t x776 = INT16_MIN;
	int32_t t50 = -1;

	t50 = (x773|(x774<<(x775/x776)));

	if (t50 != 1535) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x805 = 0U;
	uint64_t x806 = UINT64_MAX;
	uint8_t x808 = 10U;
	static volatile uint64_t t51 = UINT64_MAX;

	t51 = (x805|(x806<<(x807/x808)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x811 = 15U;
	static uint64_t t52 = UINT64_MAX;

	t52 = (x809|(x810<<(x811/x812)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x821 = INT32_MAX;
	int64_t x822 = 14376710164802LL;
	uint32_t x823 = 5U;
	int8_t x824 = -1;
	static int64_t t53 = 72098728891738LL;

	t53 = (x821|(x822<<(x823/x824)));

	if (t53 != 14377403023359LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x833 = -1;
	static uint8_t x834 = 3U;
	uint8_t x835 = 21U;

	t54 = (x833|(x834<<(x835/x836)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x841 = UINT8_MAX;
	static volatile uint32_t x844 = UINT32_MAX;
	volatile uint32_t t55 = 505U;

	t55 = (x841|(x842<<(x843/x844)));

	if (t55 != 255U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x846 = UINT32_MAX;
	int32_t x847 = -1;
	static uint32_t t56 = UINT32_MAX;

	t56 = (x845|(x846<<(x847/x848)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x853 = 1246074206070LLU;
	int16_t x854 = 3;
	uint8_t x855 = UINT8_MAX;
	int32_t x856 = 154037;
	static uint64_t t57 = 88567806988457LLU;

	t57 = (x853|(x854<<(x855/x856)));

	if (t57 != 1246074206071LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x857 = INT8_MAX;
	int32_t x859 = -1;
	volatile int8_t x860 = -17;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (x857|(x858<<(x859/x860)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x881 = INT64_MIN;
	static uint32_t x882 = 295635U;
	int64_t x883 = -46923354LL;
	int64_t x884 = INT64_MIN;
	volatile int64_t t59 = -474372LL;

	t59 = (x881|(x882<<(x883/x884)));

	if (t59 != -9223372036854480173LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x887 = INT8_MAX;
	int64_t x888 = INT64_MIN;

	t60 = (x885|(x886<<(x887/x888)));

	if (t60 != 47244640255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x901 = INT32_MIN;
	uint8_t x902 = 4U;
	uint64_t x903 = UINT64_MAX;
	int16_t x904 = INT16_MIN;
	static int32_t t61 = 31;

	t61 = (x901|(x902<<(x903/x904)));

	if (t61 != -2147483640) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x906 = INT64_MAX;
	volatile int16_t x907 = -3668;
	int64_t t62 = -7503197230353885LL;

	t62 = (x905|(x906<<(x907/x908)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x925 = INT64_MIN;
	volatile uint8_t x927 = 1U;
	volatile uint64_t x928 = 13292LLU;

	t63 = (x925|(x926<<(x927/x928)));

	if (t63 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x930 = 369U;
	volatile uint64_t x931 = 8574237027466268869LLU;
	int64_t x932 = -2457710061491LL;

	t64 = (x929|(x930<<(x931/x932)));

	if (t64 != 65535U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x937 = INT16_MIN;
	int16_t x938 = INT16_MAX;
	static uint8_t x939 = 127U;
	volatile uint32_t x940 = UINT32_MAX;
	int32_t t65 = 332;

	t65 = (x937|(x938<<(x939/x940)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x941 = 117984439980029302LLU;
	int8_t x943 = INT8_MAX;
	static uint16_t x944 = UINT16_MAX;

	t66 = (x941|(x942<<(x943/x944)));

	if (t66 != 117984443838234623LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x945 = UINT64_MAX;
	volatile int64_t x946 = 41554569LL;
	static volatile uint8_t x948 = UINT8_MAX;
	uint64_t t67 = UINT64_MAX;

	t67 = (x945|(x946<<(x947/x948)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x949 = UINT16_MAX;
	int64_t x950 = INT64_MAX;
	volatile int64_t x951 = -1LL;
	int16_t x952 = INT16_MIN;
	static int64_t t68 = INT64_MAX;

	t68 = (x949|(x950<<(x951/x952)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x953 = -697;
	volatile uint64_t x954 = UINT64_MAX;
	int16_t x955 = -28;
	volatile int16_t x956 = INT16_MIN;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x953|(x954<<(x955/x956)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x964 = INT16_MIN;
	int32_t t70 = 15;

	t70 = (x961|(x962<<(x963/x964)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x970 = 19577511553LLU;
	static uint8_t x971 = 47U;
	static int16_t x972 = INT16_MIN;
	volatile uint64_t t71 = 0LLU;

	t71 = (x969|(x970<<(x971/x972)));

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x973 = 2;
	static uint64_t x974 = UINT64_MAX;
	volatile int32_t x975 = INT32_MIN;
	volatile uint64_t x976 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = (x973|(x974<<(x975/x976)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x977 = 141989LLU;
	static uint64_t x978 = 17501564210462361LLU;
	volatile uint8_t x979 = 15U;
	volatile int8_t x980 = INT8_MIN;
	uint64_t t73 = 244137648LLU;

	t73 = (x977|(x978<<(x979/x980)));

	if (t73 != 17501564210462397LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1005 = 26171044633533LLU;
	int16_t x1006 = 39;
	int64_t x1007 = -1LL;
	static volatile int8_t x1008 = INT8_MAX;

	t74 = (x1005|(x1006<<(x1007/x1008)));

	if (t74 != 26171044633535LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1037 = -1LL;
	uint16_t x1038 = UINT16_MAX;
	volatile int16_t x1039 = 260;
	volatile int32_t x1040 = -1706537;
	volatile int64_t t75 = 120505237590545LL;

	t75 = (x1037|(x1038<<(x1039/x1040)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1041 = INT64_MIN;
	uint8_t x1042 = 92U;
	int16_t x1043 = INT16_MIN;
	uint32_t x1044 = UINT32_MAX;

	t76 = (x1041|(x1042<<(x1043/x1044)));

	if (t76 != -9223372036854775716LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x1057 = UINT8_MAX;
	uint32_t x1058 = UINT32_MAX;
	int8_t x1059 = -63;
	static uint32_t t77 = UINT32_MAX;

	t77 = (x1057|(x1058<<(x1059/x1060)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1069 = INT16_MIN;
	uint16_t x1070 = 3278U;
	uint16_t x1071 = UINT16_MAX;
	static int32_t x1072 = INT32_MIN;
	volatile int32_t t78 = -85459;

	t78 = (x1069|(x1070<<(x1071/x1072)));

	if (t78 != -29490) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1085 = INT16_MIN;
	uint32_t x1086 = 230U;
	int32_t x1087 = -1;
	int64_t x1088 = INT64_MIN;

	t79 = (x1085|(x1086<<(x1087/x1088)));

	if (t79 != 4294934758U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x1089 = INT8_MIN;
	int64_t x1090 = 7496887LL;
	static int8_t x1091 = INT8_MIN;
	int64_t x1092 = 1073539795732621567LL;
	volatile int64_t t80 = -117669114LL;

	t80 = (x1089|(x1090<<(x1091/x1092)));

	if (t80 != -73LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x1097 = -125;
	volatile uint64_t x1098 = 2773348576690513402LLU;
	int64_t x1099 = -1LL;
	volatile int8_t x1100 = -5;

	t81 = (x1097|(x1098<<(x1099/x1100)));

	if (t81 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x1105 = 5U;
	uint64_t x1106 = UINT64_MAX;
	uint8_t x1107 = 61U;
	int64_t x1108 = 1896797154104198LL;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (x1105|(x1106<<(x1107/x1108)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1121 = UINT64_MAX;
	int16_t x1123 = INT16_MIN;
	static int32_t x1124 = INT32_MAX;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x1121|(x1122<<(x1123/x1124)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x1133 = 6323754788152280126LLU;
	static int32_t x1134 = INT32_MAX;
	volatile uint64_t x1135 = 57072LLU;
	uint64_t t84 = 7817LLU;

	t84 = (x1133|(x1134<<(x1135/x1136)));

	if (t84 != 6323754789721079807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x1145 = INT16_MIN;
	uint16_t x1146 = 7087U;
	uint32_t x1147 = 1459793055U;

	t85 = (x1145|(x1146<<(x1147/x1148)));

	if (t85 != -25681) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1149 = 29U;
	int8_t x1151 = -6;
	static int8_t x1152 = -5;
	int32_t t86 = -523607;

	t86 = (x1149|(x1150<<(x1151/x1152)));

	if (t86 != 63709) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x1153 = -9;
	volatile int8_t x1154 = 1;
	uint64_t x1155 = 1397372LLU;
	int64_t x1156 = INT64_MAX;

	t87 = (x1153|(x1154<<(x1155/x1156)));

	if (t87 != -9) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1169 = 3247755702LLU;
	volatile int64_t x1170 = 97262956691158LL;
	int16_t x1171 = -1;
	static uint64_t x1172 = UINT64_MAX;
	volatile uint64_t t88 = 131642799LLU;

	t88 = (x1169|(x1170<<(x1171/x1172)));

	if (t88 != 194526987156926LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x1205 = INT32_MIN;
	volatile int16_t x1206 = 935;
	int16_t x1207 = 1;
	int64_t x1208 = INT64_MIN;

	t89 = (x1205|(x1206<<(x1207/x1208)));

	if (t89 != -2147482713) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1226 = 0U;
	volatile uint64_t x1227 = UINT64_MAX;
	int8_t x1228 = -1;
	int32_t t90 = 769850;

	t90 = (x1225|(x1226<<(x1227/x1228)));

	if (t90 != 111) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1229 = INT8_MAX;
	int32_t x1230 = INT32_MAX;
	int16_t x1232 = INT16_MIN;
	int32_t t91 = INT32_MAX;

	t91 = (x1229|(x1230<<(x1231/x1232)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x1237 = 89U;
	static volatile uint16_t x1238 = 195U;
	int8_t x1239 = INT8_MIN;
	uint32_t x1240 = UINT32_MAX;

	t92 = (x1237|(x1238<<(x1239/x1240)));

	if (t92 != 219U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x1245 = 113113LL;
	volatile uint16_t x1246 = UINT16_MAX;
	uint32_t x1247 = UINT32_MAX;
	volatile int64_t x1248 = INT64_MIN;

	t93 = (x1245|(x1246<<(x1247/x1248)));

	if (t93 != 131071LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x1254 = UINT32_MAX;
	uint32_t x1256 = UINT32_MAX;

	t94 = (x1253|(x1254<<(x1255/x1256)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x1262 = UINT8_MAX;
	int8_t x1263 = -1;
	int8_t x1264 = 7;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x1261|(x1262<<(x1263/x1264)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1297 = 2384U;
	uint8_t x1298 = 3U;
	int64_t x1300 = 167011946496442820LL;
	volatile int32_t t96 = 1856;

	t96 = (x1297|(x1298<<(x1299/x1300)));

	if (t96 != 2387) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1301 = UINT32_MAX;
	volatile int64_t x1302 = 214266193946LL;
	int8_t x1304 = INT8_MIN;
	int64_t t97 = 4359288156839421133LL;

	t97 = (x1301|(x1302<<(x1303/x1304)));

	if (t97 != 429496729599LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x1325 = -1366070236LL;
	uint32_t x1326 = UINT32_MAX;
	int32_t x1327 = -24;
	int32_t x1328 = -1;
	static int64_t t98 = 0LL;

	t98 = (x1325|(x1326<<(x1327/x1328)));

	if (t98 != -7115740LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1337 = INT8_MIN;
	volatile uint16_t x1340 = UINT16_MAX;
	uint32_t t99 = 49118937U;

	t99 = (x1337|(x1338<<(x1339/x1340)));

	if (t99 != 4294967176U) { NG(); } else { ; }
	
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

