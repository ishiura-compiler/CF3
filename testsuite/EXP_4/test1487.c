#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x3 = 74U;
int64_t x4 = 138871712157LL;
uint64_t t0 = 14198LLU;
int64_t x17 = -1LL;
int8_t x24 = -1;
static int16_t x52 = INT16_MIN;
int64_t t4 = -214382046805LL;
int64_t t5 = 4LL;
int16_t x110 = 23;
uint32_t x114 = UINT32_MAX;
uint64_t t8 = 799013170607LLU;
static int8_t x126 = -1;
int32_t t9 = -6;
int8_t x139 = -1;
static volatile uint64_t x149 = 1913LLU;
uint8_t x150 = 1U;
uint64_t t11 = 33040129LLU;
static uint16_t x157 = UINT16_MAX;
int8_t x160 = 25;
int32_t t12 = -2;
int64_t x206 = INT64_MAX;
int64_t t15 = 69LL;
int8_t x245 = INT8_MAX;
uint8_t x249 = 2U;
volatile uint8_t x250 = UINT8_MAX;
int64_t x251 = INT64_MIN;
uint32_t x252 = 1712443U;
int64_t t19 = -265321357LL;
int64_t x325 = INT64_MIN;
static int8_t x342 = -1;
int64_t x343 = -64907804800139073LL;
int64_t x367 = INT64_MIN;
static uint64_t x400 = UINT64_MAX;
int8_t x413 = INT8_MIN;
int64_t t26 = 261LL;
int8_t x435 = INT8_MIN;
int64_t t29 = 15992936622674456LL;
int16_t x440 = -103;
int16_t x467 = 0;
volatile int32_t t31 = 146826831;
static int32_t x485 = INT32_MIN;
uint8_t x487 = 22U;
static int64_t x490 = INT64_MAX;
int32_t x507 = INT32_MIN;
static uint8_t x526 = 125U;
volatile uint64_t x528 = 1823369LLU;
uint32_t x539 = 1785U;
uint8_t x585 = UINT8_MAX;
int32_t x586 = 29;
int16_t x588 = INT16_MIN;
int16_t x600 = -1;
volatile int32_t t40 = 11;
static uint32_t t41 = 0U;
static uint8_t x656 = 108U;
int64_t x673 = -1LL;
int64_t x675 = -1LL;
volatile int64_t x771 = -23358297239LL;
int64_t x789 = -3036LL;
static int64_t x845 = -2660823LL;
static int16_t x874 = -19;
int64_t x876 = 34022599844986582LL;
static uint32_t x895 = 6592895U;
int16_t x901 = 2;
uint8_t x902 = UINT8_MAX;
static uint8_t x962 = 5U;
uint64_t x964 = UINT64_MAX;
int8_t x965 = -31;
static volatile int16_t x968 = INT16_MIN;
int32_t x1004 = -1;
int32_t x1032 = INT32_MIN;
static volatile int32_t t65 = -114328;
uint64_t x1061 = 90LLU;
int64_t x1109 = -1LL;
static uint64_t x1112 = UINT64_MAX;
uint64_t x1113 = 1662165204058LLU;
volatile uint64_t t68 = 543240LLU;
volatile int8_t x1128 = INT8_MAX;
volatile int8_t x1130 = -1;
static int8_t x1224 = 1;
int8_t x1253 = 39;
int32_t t81 = 892834385;
static uint32_t x1324 = UINT32_MAX;
volatile int8_t x1327 = -28;
uint32_t x1337 = 0U;
int8_t x1339 = INT8_MIN;
uint64_t x1357 = UINT64_MAX;
int8_t x1359 = 0;
uint16_t x1367 = 7U;
int8_t x1385 = INT8_MAX;
uint64_t x1388 = UINT64_MAX;
int16_t x1389 = INT16_MAX;
int64_t x1390 = -1LL;
int32_t x1391 = 51228;
int64_t x1392 = 189523678427028205LL;
int32_t x1429 = INT32_MIN;
int64_t x1435 = -1LL;
uint8_t x1436 = 58U;
volatile int32_t t93 = 117;
int64_t x1463 = INT64_MIN;
uint64_t x1470 = UINT64_MAX;
uint64_t t96 = 351193370794LLU;
static uint64_t x1474 = UINT64_MAX;
static int8_t x1480 = 1;
int64_t x1481 = -1LL;
int64_t t99 = 56916572335LL;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	static volatile int64_t x2 = -1LL;

	t0 = (x1%(x2&(x3<x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x18 = 150377LL;
	uint8_t x19 = 0U;
	static uint16_t x20 = 1138U;
	static volatile int64_t t1 = 4670971219622LL;

	t1 = (x17%(x18&(x19<x20)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x21 = -1;
	volatile uint64_t x22 = UINT64_MAX;
	volatile int8_t x23 = -2;
	static uint64_t t2 = 91275LLU;

	t2 = (x21%(x22&(x23<x24)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x45 = -86617352557768346LL;
	int8_t x46 = -1;
	uint32_t x47 = 12U;
	volatile uint64_t x48 = UINT64_MAX;
	int64_t t3 = -3420073176901482102LL;

	t3 = (x45%(x46&(x47<x48)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x49 = -5998103494LL;
	volatile int32_t x50 = -1;
	static volatile int64_t x51 = INT64_MIN;

	t4 = (x49%(x50&(x51<x52)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x81 = INT64_MIN;
	uint16_t x82 = 15477U;
	int16_t x83 = -283;
	static int8_t x84 = INT8_MAX;

	t5 = (x81%(x82&(x83<x84)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x85 = 104600579;
	int64_t x86 = INT64_MAX;
	volatile uint8_t x87 = UINT8_MAX;
	uint64_t x88 = 28984966196418651LLU;
	volatile int64_t t6 = 2156539LL;

	t6 = (x85%(x86&(x87<x88)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x109 = INT16_MAX;
	int32_t x111 = -31087;
	int32_t x112 = INT32_MAX;
	volatile int32_t t7 = 361150601;

	t7 = (x109%(x110&(x111<x112)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x113 = 16159259597LLU;
	uint64_t x115 = 419LLU;
	volatile uint32_t x116 = 3125590U;

	t8 = (x113%(x114&(x115<x116)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x125 = 2675;
	static uint8_t x127 = 4U;
	uint64_t x128 = 47327309883408LLU;

	t9 = (x125%(x126&(x127<x128)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x137 = INT8_MAX;
	int8_t x138 = 33;
	volatile int8_t x140 = INT8_MAX;
	static int32_t t10 = -122;

	t10 = (x137%(x138&(x139<x140)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;

	t11 = (x149%(x150&(x151<x152)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x158 = 1U;
	int16_t x159 = -6942;

	t12 = (x157%(x158&(x159<x160)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x189 = -1;
	uint8_t x190 = 1U;
	static int64_t x191 = 121726168691983LL;
	static int64_t x192 = INT64_MAX;
	int32_t t13 = 36797;

	t13 = (x189%(x190&(x191<x192)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x205 = INT32_MIN;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	volatile int64_t t14 = -76889613LL;

	t14 = (x205%(x206&(x207<x208)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x229 = 5U;
	int64_t x230 = -12014983951066155LL;
	static uint8_t x231 = 53U;
	uint64_t x232 = UINT64_MAX;

	t15 = (x229%(x230&(x231<x232)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x246 = INT16_MAX;
	volatile uint64_t x247 = 15LLU;
	uint16_t x248 = UINT16_MAX;
	int32_t t16 = -28;

	t16 = (x245%(x246&(x247<x248)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t t17 = -13;

	t17 = (x249%(x250&(x251<x252)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x289 = -92145LL;
	int16_t x290 = INT16_MAX;
	int64_t x291 = -121173915387182941LL;
	uint8_t x292 = 2U;
	volatile int64_t t18 = 31LL;

	t18 = (x289%(x290&(x291<x292)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x297 = 973365367098022777LL;
	static volatile uint16_t x298 = 53U;
	static volatile uint64_t x299 = 579307361LLU;
	int32_t x300 = -1;

	t19 = (x297%(x298&(x299<x300)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x326 = INT32_MAX;
	volatile uint16_t x327 = 718U;
	int16_t x328 = INT16_MAX;
	volatile int64_t t20 = -2078575943LL;

	t20 = (x325%(x326&(x327<x328)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x341 = UINT64_MAX;
	uint32_t x344 = 78019U;
	volatile uint64_t t21 = 1046876547042392177LLU;

	t21 = (x341%(x342&(x343<x344)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x361 = INT32_MAX;
	uint64_t x362 = 23051549053304887LLU;
	int64_t x363 = -3923536385269655LL;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t22 = 10471422136600652LLU;

	t22 = (x361%(x362&(x363<x364)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x365 = 1;
	static int64_t x366 = INT64_MAX;
	int32_t x368 = -5;
	int64_t t23 = -1774504650529353LL;

	t23 = (x365%(x366&(x367<x368)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x389 = 3858LLU;
	int8_t x390 = 1;
	int64_t x391 = -4657739LL;
	int16_t x392 = 40;
	uint64_t t24 = 864634946LLU;

	t24 = (x389%(x390&(x391<x392)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x397 = -363398951;
	int16_t x398 = -1;
	volatile int64_t x399 = -384601233698LL;
	volatile int32_t t25 = 958019548;

	t25 = (x397%(x398&(x399<x400)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x414 = 57102649161LL;
	volatile int64_t x415 = -1LL;
	uint8_t x416 = 1U;

	t26 = (x413%(x414&(x415<x416)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x417 = 2028300526LLU;
	uint8_t x418 = 41U;
	int64_t x419 = 33718228290241139LL;
	uint64_t x420 = UINT64_MAX;
	volatile uint64_t t27 = 5621321398649461LLU;

	t27 = (x417%(x418&(x419<x420)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x429 = INT8_MIN;
	int64_t x430 = -1LL;
	int32_t x431 = 0;
	uint8_t x432 = 63U;
	static volatile int64_t t28 = -762LL;

	t28 = (x429%(x430&(x431<x432)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x433 = 63;
	static int64_t x434 = 1LL;
	int16_t x436 = -12;

	t29 = (x433%(x434&(x435<x436)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x437 = -1;
	uint64_t x438 = 5067LLU;
	volatile int64_t x439 = INT64_MIN;
	volatile uint64_t t30 = 7686302358052947253LLU;

	t30 = (x437%(x438&(x439<x440)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x465 = -2901;
	uint16_t x466 = UINT16_MAX;
	static uint8_t x468 = 3U;

	t31 = (x465%(x466&(x467<x468)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x486 = 10884657U;
	int64_t x488 = INT64_MAX;
	volatile uint32_t t32 = 4U;

	t32 = (x485%(x486&(x487<x488)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x489 = -1;
	int16_t x491 = INT16_MIN;
	uint16_t x492 = 0U;
	volatile int64_t t33 = -4391010373575702396LL;

	t33 = (x489%(x490&(x491<x492)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x505 = INT16_MAX;
	uint64_t x506 = 1685LLU;
	volatile int16_t x508 = 15;
	volatile uint64_t t34 = 3592040LLU;

	t34 = (x505%(x506&(x507<x508)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x525 = -1;
	static volatile uint16_t x527 = 72U;
	int32_t t35 = -149694104;

	t35 = (x525%(x526&(x527<x528)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x537 = 0U;
	int16_t x538 = -1;
	volatile int16_t x540 = INT16_MAX;
	volatile int32_t t36 = 103;

	t36 = (x537%(x538&(x539<x540)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x587 = 503679746954464278LLU;
	static volatile int32_t t37 = -1250;

	t37 = (x585%(x586&(x587<x588)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x589 = 34U;
	int16_t x590 = -9003;
	int16_t x591 = INT16_MIN;
	int16_t x592 = 2206;
	static int32_t t38 = 2334;

	t38 = (x589%(x590&(x591<x592)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x593 = 6912328480733LLU;
	int16_t x594 = 229;
	int32_t x595 = INT32_MIN;
	uint8_t x596 = 4U;
	static uint64_t t39 = 36163LLU;

	t39 = (x593%(x594&(x595<x596)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x597 = -17105;
	volatile int32_t x598 = -1;
	int8_t x599 = -19;

	t40 = (x597%(x598&(x599<x600)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x605 = 1;
	volatile uint32_t x606 = UINT32_MAX;
	int64_t x607 = INT64_MIN;
	static int64_t x608 = INT64_MAX;

	t41 = (x605%(x606&(x607<x608)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x649 = 14U;
	uint64_t x650 = UINT64_MAX;
	uint16_t x651 = 1U;
	int32_t x652 = 1388008;
	volatile uint64_t t42 = 158116LLU;

	t42 = (x649%(x650&(x651<x652)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x653 = INT8_MIN;
	int16_t x654 = INT16_MAX;
	uint16_t x655 = 0U;
	volatile int32_t t43 = -33633442;

	t43 = (x653%(x654&(x655<x656)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x657 = 25U;
	int32_t x658 = INT32_MAX;
	int8_t x659 = INT8_MIN;
	static int16_t x660 = -1;
	int32_t t44 = 2002954;

	t44 = (x657%(x658&(x659<x660)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x674 = -1;
	uint16_t x676 = UINT16_MAX;
	volatile int64_t t45 = 12702604617466LL;

	t45 = (x673%(x674&(x675<x676)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x721 = INT32_MAX;
	int32_t x722 = INT32_MAX;
	uint32_t x723 = 10403595U;
	int16_t x724 = INT16_MIN;
	static volatile int32_t t46 = -630047;

	t46 = (x721%(x722&(x723<x724)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x741 = -329;
	static volatile int32_t x742 = -10413495;
	int16_t x743 = INT16_MAX;
	static uint64_t x744 = UINT64_MAX;
	volatile int32_t t47 = -109836;

	t47 = (x741%(x742&(x743<x744)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x745 = UINT16_MAX;
	volatile int64_t x746 = INT64_MAX;
	int64_t x747 = INT64_MIN;
	int16_t x748 = 3;
	volatile int64_t t48 = -17400383777171LL;

	t48 = (x745%(x746&(x747<x748)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x769 = INT64_MAX;
	static volatile int64_t x770 = -1LL;
	int8_t x772 = 2;
	volatile int64_t t49 = -6072154383LL;

	t49 = (x769%(x770&(x771<x772)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x781 = INT32_MAX;
	static uint64_t x782 = 3LLU;
	int32_t x783 = INT32_MIN;
	static int8_t x784 = 52;
	volatile uint64_t t50 = 190337582480383LLU;

	t50 = (x781%(x782&(x783<x784)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x790 = 1;
	volatile int8_t x791 = INT8_MIN;
	uint8_t x792 = UINT8_MAX;
	static volatile int64_t t51 = -10674381188037LL;

	t51 = (x789%(x790&(x791<x792)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x813 = -1;
	static uint8_t x814 = UINT8_MAX;
	int16_t x815 = INT16_MIN;
	int8_t x816 = -8;
	int32_t t52 = 79;

	t52 = (x813%(x814&(x815<x816)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x821 = 9U;
	volatile int32_t x822 = -1;
	volatile uint16_t x823 = UINT16_MAX;
	uint32_t x824 = UINT32_MAX;
	volatile int32_t t53 = 43;

	t53 = (x821%(x822&(x823<x824)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x846 = UINT64_MAX;
	int32_t x847 = INT32_MIN;
	static int32_t x848 = -30131;
	uint64_t t54 = 1961LLU;

	t54 = (x845%(x846&(x847<x848)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x857 = -1LL;
	uint8_t x858 = UINT8_MAX;
	int16_t x859 = INT16_MIN;
	static uint32_t x860 = UINT32_MAX;
	volatile int64_t t55 = 30LL;

	t55 = (x857%(x858&(x859<x860)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x873 = -1LL;
	static int32_t x875 = INT32_MAX;
	int64_t t56 = -168007050837LL;

	t56 = (x873%(x874&(x875<x876)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x881 = 3089LLU;
	int64_t x882 = -1LL;
	int32_t x883 = INT32_MIN;
	int8_t x884 = INT8_MIN;
	static volatile uint64_t t57 = 11951627LLU;

	t57 = (x881%(x882&(x883<x884)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x893 = INT32_MAX;
	int64_t x894 = INT64_MAX;
	int32_t x896 = INT32_MIN;
	static int64_t t58 = 3329LL;

	t58 = (x893%(x894&(x895<x896)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x897 = INT32_MIN;
	volatile uint64_t x898 = 28407614401811LLU;
	int16_t x899 = -1;
	volatile int64_t x900 = 2268328015083184413LL;
	uint64_t t59 = 1146815809270LLU;

	t59 = (x897%(x898&(x899<x900)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x903 = INT8_MIN;
	int32_t x904 = -1;
	int32_t t60 = 346337;

	t60 = (x901%(x902&(x903<x904)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x909 = INT32_MIN;
	static uint16_t x910 = 2045U;
	uint16_t x911 = 26851U;
	volatile int64_t x912 = INT64_MAX;
	int32_t t61 = -5937717;

	t61 = (x909%(x910&(x911<x912)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x961 = -1;
	int64_t x963 = INT64_MIN;
	int32_t t62 = -451110609;

	t62 = (x961%(x962&(x963<x964)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x966 = INT16_MAX;
	int32_t x967 = INT32_MIN;
	volatile int32_t t63 = 8;

	t63 = (x965%(x966&(x967<x968)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1001 = -3;
	volatile uint8_t x1002 = 1U;
	int32_t x1003 = -9887991;
	volatile int32_t t64 = -374770;

	t64 = (x1001%(x1002&(x1003<x1004)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1029 = -1;
	int32_t x1030 = -1;
	volatile uint32_t x1031 = 98U;

	t65 = (x1029%(x1030&(x1031<x1032)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1062 = -1;
	int16_t x1063 = INT16_MIN;
	int64_t x1064 = 13006667311LL;
	uint64_t t66 = 1351425250939904045LLU;

	t66 = (x1061%(x1062&(x1063<x1064)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1110 = -3173;
	uint32_t x1111 = 83U;
	int64_t t67 = 313094757368964547LL;

	t67 = (x1109%(x1110&(x1111<x1112)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1114 = -1;
	volatile int64_t x1115 = -315404716LL;
	static uint64_t x1116 = UINT64_MAX;

	t68 = (x1113%(x1114&(x1115<x1116)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1117 = INT16_MAX;
	int32_t x1118 = -1;
	int64_t x1119 = INT64_MIN;
	int16_t x1120 = INT16_MAX;
	static int32_t t69 = 29674;

	t69 = (x1117%(x1118&(x1119<x1120)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x1125 = 1U;
	uint64_t x1126 = 38663669376991LLU;
	uint8_t x1127 = 4U;
	uint64_t t70 = 1015LLU;

	t70 = (x1125%(x1126&(x1127<x1128)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1129 = INT32_MAX;
	volatile int64_t x1131 = -470259800117557424LL;
	static int16_t x1132 = -1;
	int32_t t71 = -2975;

	t71 = (x1129%(x1130&(x1131<x1132)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1161 = -1;
	int32_t x1162 = -327;
	uint32_t x1163 = 2233U;
	int8_t x1164 = INT8_MIN;
	int32_t t72 = 9897;

	t72 = (x1161%(x1162&(x1163<x1164)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x1201 = INT32_MIN;
	volatile int8_t x1202 = 1;
	uint32_t x1203 = 1U;
	int16_t x1204 = 5;
	static int32_t t73 = 371231;

	t73 = (x1201%(x1202&(x1203<x1204)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x1205 = INT8_MAX;
	volatile uint8_t x1206 = 75U;
	volatile uint8_t x1207 = 13U;
	uint32_t x1208 = UINT32_MAX;
	int32_t t74 = 1611;

	t74 = (x1205%(x1206&(x1207<x1208)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1221 = -1;
	int32_t x1222 = -1;
	int64_t x1223 = INT64_MIN;
	static volatile int32_t t75 = 3227733;

	t75 = (x1221%(x1222&(x1223<x1224)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x1225 = -10147LL;
	static int8_t x1226 = INT8_MAX;
	static int64_t x1227 = -1885460815739301747LL;
	int32_t x1228 = INT32_MAX;
	static int64_t t76 = 123LL;

	t76 = (x1225%(x1226&(x1227<x1228)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1249 = INT64_MIN;
	int8_t x1250 = 3;
	int8_t x1251 = 1;
	uint32_t x1252 = UINT32_MAX;
	volatile int64_t t77 = 5203488929737657LL;

	t77 = (x1249%(x1250&(x1251<x1252)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x1254 = -1;
	uint16_t x1255 = UINT16_MAX;
	static volatile int64_t x1256 = INT64_MAX;
	int32_t t78 = -366;

	t78 = (x1253%(x1254&(x1255<x1256)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1265 = 99LL;
	static int16_t x1266 = INT16_MAX;
	static uint16_t x1267 = 51U;
	uint32_t x1268 = UINT32_MAX;
	static volatile int64_t t79 = -91180314LL;

	t79 = (x1265%(x1266&(x1267<x1268)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x1277 = 168097669;
	int64_t x1278 = 359329LL;
	static uint64_t x1279 = 156996761699LLU;
	int64_t x1280 = INT64_MAX;
	volatile int64_t t80 = -2462246748188351819LL;

	t80 = (x1277%(x1278&(x1279<x1280)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1281 = -1;
	volatile int8_t x1282 = 1;
	int64_t x1283 = -139135984LL;
	static uint16_t x1284 = 20U;

	t81 = (x1281%(x1282&(x1283<x1284)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x1317 = 19U;
	int64_t x1318 = -1LL;
	int16_t x1319 = INT16_MAX;
	volatile uint32_t x1320 = UINT32_MAX;
	int64_t t82 = -296630666563LL;

	t82 = (x1317%(x1318&(x1319<x1320)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1321 = INT32_MIN;
	uint64_t x1322 = 215344522608248547LLU;
	int64_t x1323 = -1LL;
	uint64_t t83 = 22753589608LLU;

	t83 = (x1321%(x1322&(x1323<x1324)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1325 = 6338480306059LL;
	int64_t x1326 = 115LL;
	uint8_t x1328 = 23U;
	int64_t t84 = -460497811LL;

	t84 = (x1325%(x1326&(x1327<x1328)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1333 = 21719U;
	volatile uint16_t x1334 = UINT16_MAX;
	volatile int64_t x1335 = 52988LL;
	volatile uint64_t x1336 = 59781297571LLU;
	volatile uint32_t t85 = 7403404U;

	t85 = (x1333%(x1334&(x1335<x1336)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1338 = INT16_MAX;
	uint16_t x1340 = 2012U;
	uint32_t t86 = 123257212U;

	t86 = (x1337%(x1338&(x1339<x1340)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1358 = -187;
	int64_t x1360 = INT64_MAX;
	volatile uint64_t t87 = 2411LLU;

	t87 = (x1357%(x1358&(x1359<x1360)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1365 = UINT16_MAX;
	int16_t x1366 = -1;
	static int32_t x1368 = INT32_MAX;
	volatile int32_t t88 = -3534462;

	t88 = (x1365%(x1366&(x1367<x1368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1386 = UINT16_MAX;
	uint8_t x1387 = 0U;
	volatile int32_t t89 = -1;

	t89 = (x1385%(x1386&(x1387<x1388)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t t90 = 25733LL;

	t90 = (x1389%(x1390&(x1391<x1392)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1430 = 15145;
	static int64_t x1431 = INT64_MIN;
	int64_t x1432 = -1LL;
	int32_t t91 = -12;

	t91 = (x1429%(x1430&(x1431<x1432)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x1433 = 92712498U;
	int64_t x1434 = 16586277LL;
	volatile int64_t t92 = 4039087948658LL;

	t92 = (x1433%(x1434&(x1435<x1436)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x1441 = INT32_MIN;
	int16_t x1442 = INT16_MAX;
	int32_t x1443 = -1;
	volatile uint16_t x1444 = 1U;

	t93 = (x1441%(x1442&(x1443<x1444)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1453 = INT8_MAX;
	uint8_t x1454 = UINT8_MAX;
	uint64_t x1455 = 5LLU;
	uint16_t x1456 = UINT16_MAX;
	static int32_t t94 = -476631;

	t94 = (x1453%(x1454&(x1455<x1456)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1461 = 12280U;
	int32_t x1462 = -1;
	int32_t x1464 = -1790;
	int32_t t95 = 17;

	t95 = (x1461%(x1462&(x1463<x1464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1469 = -1;
	int64_t x1471 = 3LL;
	uint8_t x1472 = 87U;

	t96 = (x1469%(x1470&(x1471<x1472)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x1473 = 1;
	int32_t x1475 = INT32_MIN;
	int8_t x1476 = 38;
	static volatile uint64_t t97 = 2375LLU;

	t97 = (x1473%(x1474&(x1475<x1476)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1477 = INT64_MAX;
	uint32_t x1478 = UINT32_MAX;
	uint8_t x1479 = 0U;
	int64_t t98 = 1093LL;

	t98 = (x1477%(x1478&(x1479<x1480)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1482 = UINT32_MAX;
	static volatile uint32_t x1483 = 645U;
	int8_t x1484 = INT8_MIN;

	t99 = (x1481%(x1482&(x1483<x1484)));

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

