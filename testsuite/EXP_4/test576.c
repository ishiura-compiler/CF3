#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x10 = UINT16_MAX;
volatile int32_t t0 = -22726647;
static int16_t x21 = INT16_MIN;
int32_t x41 = -5351445;
int8_t x71 = -1;
uint32_t x147 = UINT32_MAX;
static volatile int16_t x169 = -7724;
int64_t t6 = -38578LL;
int16_t x179 = INT16_MIN;
uint16_t x293 = 31024U;
static uint32_t t12 = 1581U;
int8_t x319 = -26;
static int32_t x321 = 340;
volatile int32_t t14 = 1;
uint32_t x338 = 117U;
volatile int8_t x339 = -1;
volatile int32_t x340 = INT32_MIN;
uint64_t t15 = 288681542516159633LLU;
int32_t x351 = INT32_MIN;
static volatile uint32_t t16 = 28946232U;
int64_t x412 = INT64_MAX;
int32_t x444 = INT32_MIN;
uint64_t x447 = 13LLU;
static volatile uint32_t t22 = 25013519U;
static volatile int8_t x460 = -1;
uint8_t x495 = 31U;
int16_t x536 = -400;
volatile uint64_t t27 = 5LLU;
int8_t x550 = INT8_MAX;
int8_t x579 = INT8_MAX;
int64_t t31 = -4LL;
int64_t t32 = 33721655823127920LL;
int64_t x593 = INT64_MIN;
static int32_t x594 = 23791304;
volatile int64_t x596 = INT64_MAX;
static uint32_t x597 = 3U;
uint32_t x598 = UINT32_MAX;
volatile uint32_t x610 = 29521995U;
static int8_t x612 = -1;
static volatile int8_t x621 = -1;
static int64_t x623 = 0LL;
static int16_t x625 = -1;
volatile uint32_t x627 = UINT32_MAX;
int32_t t37 = -777196515;
uint64_t x641 = 16282591344280LLU;
static int8_t x642 = 1;
int32_t x644 = INT32_MAX;
static volatile int8_t x664 = INT8_MAX;
volatile uint8_t x682 = UINT8_MAX;
uint16_t x689 = UINT16_MAX;
int8_t x714 = INT8_MAX;
volatile uint8_t x716 = UINT8_MAX;
uint64_t x720 = 831651507141294LLU;
int32_t x726 = 200;
uint8_t x730 = 9U;
volatile uint32_t x731 = 402523026U;
static int8_t x732 = -9;
uint32_t x738 = 5U;
volatile int16_t x744 = INT16_MAX;
uint64_t x786 = 13319080222406786LLU;
uint16_t x788 = 92U;
volatile uint64_t t52 = 48631449839LLU;
volatile int16_t x811 = INT16_MAX;
int8_t x823 = 2;
static volatile uint64_t t55 = 15384767LLU;
int8_t x843 = INT8_MAX;
uint8_t x867 = 17U;
volatile uint64_t t59 = 53LLU;
int64_t x877 = -1LL;
int16_t x916 = INT16_MIN;
int32_t t64 = 835;
uint64_t t65 = 329249491019211LLU;
volatile uint16_t x937 = 31U;
int16_t x939 = -1;
volatile uint16_t x970 = 9U;
static int8_t x994 = 1;
int32_t t70 = 514543301;
uint32_t x1034 = UINT32_MAX;
static volatile uint32_t x1035 = 1U;
static int32_t x1045 = 0;
int16_t x1048 = INT16_MIN;
uint32_t x1080 = UINT32_MAX;
int32_t x1083 = 265;
volatile int32_t t78 = -12;
int64_t x1100 = -8988435471LL;
uint64_t t79 = 109299LLU;
int32_t x1120 = INT32_MIN;
volatile uint32_t x1145 = UINT32_MAX;
int8_t x1147 = INT8_MIN;
uint32_t t83 = 10647U;
int32_t x1149 = INT32_MAX;
uint16_t x1150 = 2U;
int32_t t84 = -208497;
volatile uint16_t x1153 = 0U;
uint16_t x1171 = UINT16_MAX;
volatile int64_t t86 = 75924LL;
int64_t x1175 = -1LL;
volatile int32_t t87 = -6381;
volatile int8_t x1178 = 20;
int32_t t88 = 47508332;
volatile int32_t x1186 = INT32_MAX;
uint64_t x1191 = 86126040225LLU;
volatile uint64_t x1195 = UINT64_MAX;
int32_t x1228 = 309;
static int64_t x1236 = INT64_MIN;
volatile int32_t t94 = -2214619;
int64_t x1240 = 114406319279372LL;
static int32_t x1245 = -1647725;
volatile uint32_t x1261 = 4024457U;
int8_t x1265 = INT8_MIN;


void f0(void) {
	volatile int16_t x9 = INT16_MIN;
	uint8_t x11 = 28U;
	volatile int8_t x12 = INT8_MIN;

	t0 = (x9/(x10<<(x11/x12)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x22 = 36553135U;
	int16_t x23 = -1;
	int64_t x24 = 2859546918456145634LL;
	uint32_t t1 = 53728226U;

	t1 = (x21/(x22<<(x23/x24)));

	if (t1 != 117U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x42 = 4325U;
	int32_t x43 = INT32_MIN;
	volatile int64_t x44 = INT64_MIN;
	static int32_t t2 = 2937163;

	t2 = (x41/(x42<<(x43/x44)));

	if (t2 != -1237) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x70 = 1428006410040641LLU;
	int32_t x72 = -1;
	volatile uint64_t t3 = 6286LLU;

	t3 = (x69/(x70<<(x71/x72)));

	if (t3 != 6458LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x117 = UINT8_MAX;
	volatile uint8_t x118 = 15U;
	static volatile int16_t x119 = INT16_MIN;
	volatile uint32_t x120 = 1596579172U;
	volatile int32_t t4 = 764138;

	t4 = (x117/(x118<<(x119/x120)));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x145 = 27;
	volatile uint64_t x146 = UINT64_MAX;
	int8_t x148 = -3;
	uint64_t t5 = 3898LLU;

	t5 = (x145/(x146<<(x147/x148)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x170 = 2098248391538911LL;
	volatile int32_t x171 = -1;
	uint8_t x172 = 30U;

	t6 = (x169/(x170<<(x171/x172)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x177 = 1U;
	uint16_t x178 = UINT16_MAX;
	uint64_t x180 = 2221447973967860589LLU;
	int32_t t7 = 3248606;

	t7 = (x177/(x178<<(x179/x180)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x221 = 6LLU;
	static uint64_t x222 = 351LLU;
	int16_t x223 = INT16_MAX;
	int64_t x224 = -6789651LL;
	uint64_t t8 = 3687573110724LLU;

	t8 = (x221/(x222<<(x223/x224)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x257 = INT64_MAX;
	int8_t x258 = 21;
	uint16_t x259 = 11834U;
	uint32_t x260 = 3505823U;
	int64_t t9 = -50950562LL;

	t9 = (x257/(x258<<(x259/x260)));

	if (t9 != 439208192231179800LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x261 = INT64_MAX;
	uint16_t x262 = 1U;
	int16_t x263 = -1;
	static int8_t x264 = INT8_MIN;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x261/(x262<<(x263/x264)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x281 = -1;
	static uint8_t x282 = 124U;
	int32_t x283 = -609;
	volatile int64_t x284 = INT64_MAX;
	int32_t t11 = 132;

	t11 = (x281/(x282<<(x283/x284)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x294 = UINT32_MAX;
	int8_t x295 = -7;
	static int32_t x296 = INT32_MIN;

	t12 = (x293/(x294<<(x295/x296)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x317 = -1;
	int8_t x318 = 35;
	int64_t x320 = -46998684902896398LL;
	int32_t t13 = 944659;

	t13 = (x317/(x318<<(x319/x320)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x322 = INT8_MAX;
	volatile int32_t x323 = -1;
	int32_t x324 = 31;

	t14 = (x321/(x322<<(x323/x324)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x337 = 617545233506234LLU;

	t15 = (x337/(x338<<(x339/x340)));

	if (t15 != 5278164388942LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x349 = -1;
	static uint32_t x350 = UINT32_MAX;
	int32_t x352 = INT32_MIN;

	t16 = (x349/(x350<<(x351/x352)));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 139U;
	int32_t x375 = -4098;
	int64_t x376 = 7413LL;
	uint64_t t17 = 6629905142LLU;

	t17 = (x373/(x374<<(x375/x376)));

	if (t17 != 132710389019493177LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x405 = 0;
	int64_t x406 = 773363857352704373LL;
	uint8_t x407 = UINT8_MAX;
	uint32_t x408 = UINT32_MAX;
	int64_t t18 = 87935245115299717LL;

	t18 = (x405/(x406<<(x407/x408)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x409 = 27281122U;
	volatile uint64_t x410 = UINT64_MAX;
	uint32_t x411 = 0U;
	static uint64_t t19 = 14189695575341LLU;

	t19 = (x409/(x410<<(x411/x412)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x441 = INT32_MIN;
	uint16_t x442 = 15U;
	uint64_t x443 = UINT64_MAX;
	int32_t t20 = -18987394;

	t20 = (x441/(x442<<(x443/x444)));

	if (t20 != -71582788) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x445 = -56739540;
	int16_t x446 = INT16_MAX;
	static volatile int8_t x448 = -1;
	volatile int32_t t21 = 22678;

	t21 = (x445/(x446<<(x447/x448)));

	if (t21 != -1731) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x449 = -121669246;
	uint32_t x450 = 772U;
	int32_t x451 = -1;
	static volatile int64_t x452 = -1LL;

	t22 = (x449/(x450<<(x451/x452)));

	if (t22 != 2702913U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x453 = INT64_MIN;
	static volatile uint8_t x454 = UINT8_MAX;
	static int16_t x455 = INT16_MIN;
	static int16_t x456 = INT16_MIN;
	volatile int64_t t23 = 584903152197618LL;

	t23 = (x453/(x454<<(x455/x456)));

	if (t23 != -18085043209519168LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x457 = INT32_MAX;
	uint8_t x458 = UINT8_MAX;
	static uint32_t x459 = 3297736U;
	int32_t t24 = 2471;

	t24 = (x457/(x458<<(x459/x460)));

	if (t24 != 8421504) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x493 = INT8_MIN;
	static uint16_t x494 = 2U;
	volatile int64_t x496 = 98550LL;
	volatile int32_t t25 = 73148;

	t25 = (x493/(x494<<(x495/x496)));

	if (t25 != -64) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x529 = UINT8_MAX;
	uint8_t x530 = 35U;
	int8_t x531 = -1;
	int16_t x532 = -3998;
	volatile int32_t t26 = -178;

	t26 = (x529/(x530<<(x531/x532)));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x533 = 4280388819LLU;
	uint32_t x534 = UINT32_MAX;
	volatile int8_t x535 = -1;

	t27 = (x533/(x534<<(x535/x536)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x541 = 122049U;
	volatile int32_t x542 = 11759;
	volatile int16_t x543 = INT16_MIN;
	static int16_t x544 = INT16_MIN;
	volatile uint32_t t28 = 172948230U;

	t28 = (x541/(x542<<(x543/x544)));

	if (t28 != 5U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x549 = 5U;
	static volatile uint32_t x551 = UINT32_MAX;
	volatile uint64_t x552 = 8066982179427508LLU;
	int32_t t29 = -18739364;

	t29 = (x549/(x550<<(x551/x552)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x561 = INT8_MIN;
	uint64_t x562 = UINT64_MAX;
	volatile uint16_t x563 = 130U;
	volatile int32_t x564 = -134218;
	uint64_t t30 = 20320555304889LLU;

	t30 = (x561/(x562<<(x563/x564)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x577 = INT64_MIN;
	uint16_t x578 = 80U;
	static uint32_t x580 = 7088757U;

	t31 = (x577/(x578<<(x579/x580)));

	if (t31 != -115292150460684697LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x589 = -1227LL;
	uint8_t x590 = 1U;
	int16_t x591 = INT16_MIN;
	uint64_t x592 = UINT64_MAX;

	t32 = (x589/(x590<<(x591/x592)));

	if (t32 != -1227LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x595 = -1LL;
	volatile int64_t t33 = 119789830817702LL;

	t33 = (x593/(x594<<(x595/x596)));

	if (t33 != -387678289380LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x599 = -1;
	static volatile uint8_t x600 = 53U;
	volatile uint32_t t34 = 34U;

	t34 = (x597/(x598<<(x599/x600)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x609 = -1;
	uint64_t x611 = 38150056365485642LLU;
	uint32_t t35 = 234670U;

	t35 = (x609/(x610<<(x611/x612)));

	if (t35 != 145U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x622 = 3296U;
	int32_t x624 = INT32_MIN;
	int32_t t36 = 1350904;

	t36 = (x621/(x622<<(x623/x624)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x626 = 106U;
	volatile uint32_t x628 = UINT32_MAX;

	t37 = (x625/(x626<<(x627/x628)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x629 = 1U;
	uint64_t x630 = 8039592148LLU;
	static volatile int16_t x631 = 1;
	static uint64_t x632 = UINT64_MAX;
	uint64_t t38 = 16470LLU;

	t38 = (x629/(x630<<(x631/x632)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x643 = -1LL;
	uint64_t t39 = 1430865366602LLU;

	t39 = (x641/(x642<<(x643/x644)));

	if (t39 != 16282591344280LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x661 = INT32_MIN;
	volatile uint8_t x662 = 1U;
	static int8_t x663 = INT8_MAX;
	int32_t t40 = 1;

	t40 = (x661/(x662<<(x663/x664)));

	if (t40 != -1073741824) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x681 = 1U;
	int32_t x683 = -1;
	uint16_t x684 = 1320U;
	volatile int32_t t41 = -21908;

	t41 = (x681/(x682<<(x683/x684)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x690 = UINT64_MAX;
	static int8_t x691 = INT8_MAX;
	static int32_t x692 = INT32_MIN;
	volatile uint64_t t42 = 1375LLU;

	t42 = (x689/(x690<<(x691/x692)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x713 = 90U;
	static int16_t x715 = -1;
	static volatile uint32_t t43 = 660508651U;

	t43 = (x713/(x714<<(x715/x716)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x717 = 53U;
	volatile uint32_t x718 = 305U;
	volatile uint32_t x719 = 46451U;
	uint32_t t44 = 530029U;

	t44 = (x717/(x718<<(x719/x720)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x725 = INT64_MIN;
	int16_t x727 = -1;
	int16_t x728 = INT16_MIN;
	volatile int64_t t45 = 22LL;

	t45 = (x725/(x726<<(x727/x728)));

	if (t45 != -46116860184273879LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x729 = 203473LL;
	volatile int64_t t46 = -8492655LL;

	t46 = (x729/(x730<<(x731/x732)));

	if (t46 != 22608LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x737 = 1U;
	int16_t x739 = INT16_MAX;
	uint16_t x740 = 1102U;
	uint32_t t47 = 1U;

	t47 = (x737/(x738<<(x739/x740)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x741 = -1;
	static volatile uint32_t x742 = 3385858U;
	volatile int16_t x743 = 121;
	volatile uint32_t t48 = 2U;

	t48 = (x741/(x742<<(x743/x744)));

	if (t48 != 1268U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x757 = INT16_MIN;
	volatile uint32_t x758 = 184U;
	uint32_t x759 = 1007919846U;
	uint64_t x760 = 20941416293750LLU;
	uint32_t t49 = 3U;

	t49 = (x757/(x758<<(x759/x760)));

	if (t49 != 23342035U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x761 = INT8_MIN;
	uint32_t x762 = 571U;
	static int16_t x763 = 11462;
	int64_t x764 = 2166116626330713LL;
	uint32_t t50 = 10U;

	t50 = (x761/(x762<<(x763/x764)));

	if (t50 != 7521833U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x773 = UINT64_MAX;
	uint8_t x774 = UINT8_MAX;
	int8_t x775 = 1;
	int32_t x776 = INT32_MAX;
	uint64_t t51 = 98358677823LLU;

	t51 = (x773/(x774<<(x775/x776)));

	if (t51 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x785 = INT32_MIN;
	static uint8_t x787 = 20U;

	t52 = (x785/(x786<<(x787/x788)));

	if (t52 != 1384LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x789 = -9;
	volatile uint8_t x790 = 6U;
	int64_t x791 = 43LL;
	int64_t x792 = 8996299651359963LL;
	int32_t t53 = 14443089;

	t53 = (x789/(x790<<(x791/x792)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x809 = INT64_MIN;
	static volatile int16_t x810 = 6;
	static int16_t x812 = INT16_MIN;
	int64_t t54 = -54821092LL;

	t54 = (x809/(x810<<(x811/x812)));

	if (t54 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x821 = 194LLU;
	uint16_t x822 = 9U;
	int64_t x824 = INT64_MIN;

	t55 = (x821/(x822<<(x823/x824)));

	if (t55 != 21LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x841 = INT64_MAX;
	uint8_t x842 = 7U;
	int8_t x844 = 5;
	volatile int64_t t56 = -23731520513982LL;

	t56 = (x841/(x842<<(x843/x844)));

	if (t56 != 39268272420LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x853 = 716;
	uint16_t x854 = UINT16_MAX;
	int32_t x855 = -1;
	int32_t x856 = INT32_MIN;
	volatile int32_t t57 = 11;

	t57 = (x853/(x854<<(x855/x856)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x857 = 13U;
	int32_t x858 = 114;
	uint16_t x859 = 2744U;
	int32_t x860 = INT32_MAX;
	volatile int32_t t58 = 1;

	t58 = (x857/(x858<<(x859/x860)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x865 = -1;
	uint64_t x866 = 2237138271226929LLU;
	static int32_t x868 = 63770513;

	t59 = (x865/(x866<<(x867/x868)));

	if (t59 != 8245LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x878 = UINT8_MAX;
	uint8_t x879 = 13U;
	int32_t x880 = INT32_MIN;
	volatile int64_t t60 = 30LL;

	t60 = (x877/(x878<<(x879/x880)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x881 = 14U;
	int64_t x882 = 646LL;
	int32_t x883 = -49;
	int16_t x884 = -1662;
	int64_t t61 = -3910857689601876126LL;

	t61 = (x881/(x882<<(x883/x884)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x901 = UINT16_MAX;
	volatile int8_t x902 = INT8_MAX;
	volatile uint16_t x903 = 5706U;
	int32_t x904 = INT32_MIN;
	volatile int32_t t62 = 60237;

	t62 = (x901/(x902<<(x903/x904)));

	if (t62 != 516) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x909 = INT16_MIN;
	volatile uint16_t x910 = UINT16_MAX;
	volatile int8_t x911 = INT8_MAX;
	static int8_t x912 = INT8_MIN;
	volatile int32_t t63 = -712144;

	t63 = (x909/(x910<<(x911/x912)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x913 = INT32_MAX;
	int16_t x914 = 8506;
	static int16_t x915 = 167;

	t64 = (x913/(x914<<(x915/x916)));

	if (t64 != 252466) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x933 = INT64_MIN;
	uint64_t x934 = UINT64_MAX;
	static volatile uint8_t x935 = 0U;
	static int64_t x936 = INT64_MIN;

	t65 = (x933/(x934<<(x935/x936)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x938 = 1;
	static volatile int64_t x940 = 31131667LL;
	int32_t t66 = 579406775;

	t66 = (x937/(x938<<(x939/x940)));

	if (t66 != 31) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x941 = INT64_MIN;
	uint8_t x942 = 2U;
	uint64_t x943 = UINT64_MAX;
	int32_t x944 = -1;
	volatile int64_t t67 = 281467762133833LL;

	t67 = (x941/(x942<<(x943/x944)));

	if (t67 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x945 = 408U;
	volatile uint8_t x946 = 3U;
	uint8_t x947 = 14U;
	int32_t x948 = INT32_MAX;
	volatile int32_t t68 = 4403157;

	t68 = (x945/(x946<<(x947/x948)));

	if (t68 != 136) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x969 = INT32_MIN;
	int16_t x971 = INT16_MIN;
	int32_t x972 = INT32_MIN;
	volatile int32_t t69 = 20617;

	t69 = (x969/(x970<<(x971/x972)));

	if (t69 != -238609294) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x993 = -1;
	volatile int8_t x995 = INT8_MIN;
	static int8_t x996 = -31;

	t70 = (x993/(x994<<(x995/x996)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1017 = 2;
	uint64_t x1018 = UINT64_MAX;
	static int8_t x1019 = INT8_MIN;
	int32_t x1020 = INT32_MIN;
	volatile uint64_t t71 = 7494577LLU;

	t71 = (x1017/(x1018<<(x1019/x1020)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1021 = -26;
	static uint64_t x1022 = 179109LLU;
	int32_t x1023 = INT32_MIN;
	int32_t x1024 = INT32_MIN;
	volatile uint64_t t72 = 2354542494LLU;

	t72 = (x1021/(x1022<<(x1023/x1024)));

	if (t72 != 51495860268634LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1033 = -1;
	static uint16_t x1036 = 7311U;
	uint32_t t73 = 0U;

	t73 = (x1033/(x1034<<(x1035/x1036)));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x1046 = UINT16_MAX;
	static int64_t x1047 = 56LL;
	volatile int32_t t74 = 33428;

	t74 = (x1045/(x1046<<(x1047/x1048)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x1073 = 14570;
	int8_t x1074 = INT8_MAX;
	int64_t x1075 = -1LL;
	int16_t x1076 = -1;
	int32_t t75 = -5490172;

	t75 = (x1073/(x1074<<(x1075/x1076)));

	if (t75 != 57) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x1077 = INT64_MAX;
	static int32_t x1078 = INT32_MAX;
	int32_t x1079 = INT32_MAX;
	volatile int64_t t76 = -13024430685675418LL;

	t76 = (x1077/(x1078<<(x1079/x1080)));

	if (t76 != 4294967298LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1081 = 965692U;
	volatile uint16_t x1082 = 4865U;
	int64_t x1084 = -27386728432436659LL;
	volatile uint32_t t77 = 1723U;

	t77 = (x1081/(x1082<<(x1083/x1084)));

	if (t77 != 198U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1085 = INT32_MAX;
	volatile uint8_t x1086 = 6U;
	int8_t x1087 = 3;
	uint32_t x1088 = 90905666U;

	t78 = (x1085/(x1086<<(x1087/x1088)));

	if (t78 != 357913941) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1097 = INT64_MAX;
	uint64_t x1098 = 17461658576925298LLU;
	uint64_t x1099 = UINT64_MAX;

	t79 = (x1097/(x1098<<(x1099/x1100)));

	if (t79 != 264LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x1101 = 3081720U;
	int8_t x1102 = INT8_MAX;
	uint64_t x1103 = 2802256306037LLU;
	int8_t x1104 = -1;
	volatile uint32_t t80 = 65402U;

	t80 = (x1101/(x1102<<(x1103/x1104)));

	if (t80 != 24265U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1105 = 3U;
	static uint64_t x1106 = UINT64_MAX;
	static uint8_t x1107 = 0U;
	uint16_t x1108 = 6152U;
	volatile uint64_t t81 = 988543332701LLU;

	t81 = (x1105/(x1106<<(x1107/x1108)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x1117 = 0U;
	uint16_t x1118 = 2U;
	static uint16_t x1119 = UINT16_MAX;
	volatile int32_t t82 = 11465;

	t82 = (x1117/(x1118<<(x1119/x1120)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1146 = 25202248;
	int8_t x1148 = INT8_MIN;

	t83 = (x1145/(x1146<<(x1147/x1148)));

	if (t83 != 85U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1151 = 17U;
	int64_t x1152 = -44092133669006LL;

	t84 = (x1149/(x1150<<(x1151/x1152)));

	if (t84 != 1073741823) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1154 = UINT16_MAX;
	uint16_t x1155 = 8U;
	static int8_t x1156 = INT8_MIN;
	int32_t t85 = -58;

	t85 = (x1153/(x1154<<(x1155/x1156)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1169 = 15407LL;
	volatile uint32_t x1170 = 221U;
	volatile int64_t x1172 = 63367921425889610LL;

	t86 = (x1169/(x1170<<(x1171/x1172)));

	if (t86 != 69LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1173 = 47U;
	volatile uint8_t x1174 = UINT8_MAX;
	int64_t x1176 = 233578LL;

	t87 = (x1173/(x1174<<(x1175/x1176)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1177 = INT32_MIN;
	int8_t x1179 = INT8_MIN;
	static int32_t x1180 = INT32_MIN;

	t88 = (x1177/(x1178<<(x1179/x1180)));

	if (t88 != -107374182) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x1185 = 236U;
	static uint16_t x1187 = 2863U;
	int32_t x1188 = INT32_MIN;
	volatile int32_t t89 = 348048;

	t89 = (x1185/(x1186<<(x1187/x1188)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1189 = 36122642U;
	uint32_t x1190 = UINT32_MAX;
	uint64_t x1192 = UINT64_MAX;
	uint32_t t90 = 14U;

	t90 = (x1189/(x1190<<(x1191/x1192)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1193 = INT16_MIN;
	uint64_t x1194 = UINT64_MAX;
	volatile int64_t x1196 = -238446822LL;
	volatile uint64_t t91 = 4385LLU;

	t91 = (x1193/(x1194<<(x1195/x1196)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1201 = -6675876935155LL;
	int8_t x1202 = INT8_MAX;
	static uint16_t x1203 = 720U;
	int32_t x1204 = -29534686;
	static volatile int64_t t92 = 88LL;

	t92 = (x1201/(x1202<<(x1203/x1204)));

	if (t92 != -52565960119LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x1225 = INT8_MIN;
	int64_t x1226 = INT64_MAX;
	static uint8_t x1227 = UINT8_MAX;
	static volatile int64_t t93 = -2227442891195720LL;

	t93 = (x1225/(x1226<<(x1227/x1228)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x1233 = 46;
	volatile uint16_t x1234 = 13959U;
	int16_t x1235 = INT16_MAX;

	t94 = (x1233/(x1234<<(x1235/x1236)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x1237 = 53U;
	uint64_t x1238 = 2LLU;
	volatile uint16_t x1239 = UINT16_MAX;
	volatile uint64_t t95 = 1415348195054986LLU;

	t95 = (x1237/(x1238<<(x1239/x1240)));

	if (t95 != 26LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x1246 = 3309U;
	volatile uint8_t x1247 = 1U;
	int8_t x1248 = INT8_MIN;
	static uint32_t t96 = 1U;

	t96 = (x1245/(x1246<<(x1247/x1248)));

	if (t96 != 1297467U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x1262 = 1;
	int32_t x1263 = -15908;
	static uint16_t x1264 = 16362U;
	static uint32_t t97 = 0U;

	t97 = (x1261/(x1262<<(x1263/x1264)));

	if (t97 != 4024457U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1266 = 5U;
	volatile uint16_t x1267 = UINT16_MAX;
	volatile int32_t x1268 = INT32_MIN;
	static volatile uint32_t t98 = 276103U;

	t98 = (x1265/(x1266<<(x1267/x1268)));

	if (t98 != 858993433U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x1269 = -1982041383758LL;
	volatile uint16_t x1270 = 445U;
	uint64_t x1271 = 5001LLU;
	volatile int16_t x1272 = INT16_MIN;
	static volatile int64_t t99 = 140291691LL;

	t99 = (x1269/(x1270<<(x1271/x1272)));

	if (t99 != -4454025581LL) { NG(); } else { ; }
	
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

