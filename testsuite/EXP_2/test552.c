#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x51 = 13;
volatile uint64_t t0 = 171603LLU;
uint64_t x190 = UINT64_MAX;
volatile int8_t x191 = -1;
int16_t x269 = INT16_MIN;
int32_t x270 = INT32_MIN;
uint64_t x346 = UINT64_MAX;
int32_t x473 = -1;
volatile int64_t x474 = INT64_MIN;
volatile int64_t x476 = 30LL;
uint8_t x647 = 108U;
volatile uint64_t t6 = 89LLU;
int64_t x722 = -955330611LL;
uint8_t x724 = 42U;
int16_t x739 = INT16_MIN;
uint32_t x793 = 7295141U;
uint16_t x794 = UINT16_MAX;
int64_t x795 = 22LL;
volatile uint64_t x919 = 4017LLU;
volatile int16_t x1007 = 11;
volatile int64_t t15 = 8881767894605LL;
volatile int32_t t16 = -857;
int16_t x1292 = 1;
volatile uint64_t t17 = 26759600302LLU;
uint32_t x1357 = 2054904738U;
static int8_t x1489 = INT8_MIN;
static uint64_t x1490 = 67384276879872129LLU;
uint64_t t20 = 5979737177847995LLU;
volatile int64_t x1494 = INT64_MAX;
int16_t x1506 = -122;
uint64_t x1507 = 474330LLU;
uint8_t x1508 = 63U;
int8_t x1635 = INT8_MAX;
static volatile int8_t x1724 = 24;
int64_t t27 = -518326215267598382LL;
uint64_t x2566 = UINT64_MAX;
int8_t x2615 = -1;
uint32_t x2616 = 14U;
static int8_t x2689 = -8;
volatile int64_t t32 = 0LL;
static int32_t x3150 = INT32_MIN;
volatile int16_t x3170 = INT16_MIN;
int8_t x3204 = 30;
volatile uint64_t t35 = 522523266439326271LLU;
static int32_t x3261 = INT32_MAX;
uint16_t x3608 = 39U;
int32_t x3817 = INT32_MAX;
int16_t x3819 = INT16_MIN;
volatile int16_t x3937 = INT16_MAX;
int16_t x3940 = 1;
uint16_t x4032 = 31U;
static uint32_t x4098 = UINT32_MAX;
volatile int16_t x4126 = -1;
volatile uint32_t t45 = 86U;
static uint64_t t46 = 15153176890121170LLU;
volatile int16_t x4224 = 0;
uint32_t x4300 = 3U;
uint16_t x4324 = 27U;
uint16_t x4365 = UINT16_MAX;
int32_t x4390 = INT32_MIN;
static int16_t x4420 = 37;
uint16_t x4441 = UINT16_MAX;
volatile uint16_t x4443 = 41U;
uint32_t x4444 = 6U;
static int64_t x4490 = INT64_MIN;
uint32_t x4491 = 1712972U;
int64_t x4622 = INT64_MAX;
static uint8_t x4624 = 13U;
static volatile int64_t t56 = -3LL;
volatile int32_t x4665 = INT32_MIN;
volatile uint64_t t57 = 793411856LLU;
static uint16_t x5068 = 19U;
volatile uint64_t t59 = 0LLU;
int16_t x5199 = INT16_MAX;
uint8_t x5773 = 4U;
static int64_t x5774 = -174830LL;
int32_t x5834 = -389;
uint8_t x5835 = UINT8_MAX;
int64_t x5880 = 0LL;
volatile uint64_t x6029 = 153098048573093178LLU;
int8_t x6032 = 8;
volatile int32_t x6154 = INT32_MIN;
uint8_t x6323 = 2U;
volatile uint64_t x6445 = 3LLU;
uint16_t x6549 = 21U;
volatile uint8_t x6584 = 0U;
volatile int64_t t76 = 144LL;
uint8_t x6660 = 9U;
static uint64_t x6685 = 6LLU;
uint16_t x6899 = 85U;
uint64_t x6925 = 114858420149671LLU;
volatile int8_t x7340 = 0;
int64_t t84 = -64619369800423373LL;
static volatile int32_t x7446 = INT32_MIN;
volatile uint8_t x7655 = UINT8_MAX;
static uint64_t t87 = 4080149721859006LLU;
volatile int16_t x7679 = 14;
int64_t t89 = 408LL;
static int32_t x7968 = 0;
static volatile int64_t t91 = -31218LL;
uint32_t x7977 = 754404474U;
int64_t x7979 = -1LL;
int8_t x8505 = INT8_MIN;
int16_t x8508 = 1;
int64_t x8789 = INT64_MIN;
int32_t x8790 = INT32_MAX;
int32_t x8810 = 3297761;
int32_t x8811 = -1;
uint16_t x8812 = 2U;
uint32_t t98 = 9U;


void f0(void) {
	int64_t x49 = INT64_MAX;
	static uint64_t x50 = UINT64_MAX;
	uint8_t x52 = 1U;

	t0 = ((x49/(x50/x51))<<x52);

	if (t0 != 12LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x189 = INT16_MIN;
	volatile uint8_t x192 = 0U;
	static uint64_t t1 = 2247855296679831LLU;

	t1 = ((x189/(x190/x191))<<x192);

	if (t1 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x271 = 22LLU;
	int8_t x272 = 26;
	volatile uint64_t t2 = 487LLU;

	t2 = ((x269/(x270/x271))<<x272);

	if (t2 != 1476395008LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x290 = 56330U;
	volatile uint8_t x291 = 19U;
	static uint8_t x292 = 0U;
	volatile uint32_t t3 = 32U;

	t3 = ((x289/(x290/x291))<<x292);

	if (t3 != 724522U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x345 = 61385;
	int16_t x347 = INT16_MIN;
	static volatile int8_t x348 = 1;
	uint64_t t4 = 219617794454LLU;

	t4 = ((x345/(x346/x347))<<x348);

	if (t4 != 122770LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x475 = UINT16_MAX;
	volatile int64_t t5 = -188LL;

	t5 = ((x473/(x474/x475))<<x476);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x645 = 415657770326669335LLU;
	static int8_t x646 = INT8_MIN;
	uint16_t x648 = 1U;

	t6 = ((x645/(x646/x647))<<x648);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x661 = 3U;
	volatile int64_t x662 = -24872605314668LL;
	uint64_t x663 = 7203054673174LLU;
	int8_t x664 = 3;
	static volatile uint64_t t7 = 14416859561LLU;

	t7 = ((x661/(x662/x663))<<x664);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x693 = -1;
	int64_t x694 = INT64_MIN;
	int32_t x695 = -655;
	volatile uint32_t x696 = 15U;
	volatile int64_t t8 = 1LL;

	t8 = ((x693/(x694/x695))<<x696);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x721 = 1783550;
	int8_t x723 = INT8_MIN;
	int64_t t9 = -4377738438LL;

	t9 = ((x721/(x722/x723))<<x724);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x737 = INT32_MAX;
	volatile int32_t x738 = INT32_MIN;
	int8_t x740 = 0;
	int32_t t10 = -36672865;

	t10 = ((x737/(x738/x739))<<x740);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x749 = -14;
	int64_t x750 = INT64_MAX;
	int8_t x751 = -4;
	volatile uint8_t x752 = 0U;
	volatile int64_t t11 = 13939135LL;

	t11 = ((x749/(x750/x751))<<x752);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x796 = 1;
	int64_t t12 = 1443861LL;

	t12 = ((x793/(x794/x795))<<x796);

	if (t12 != 4898LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x917 = -5994;
	int32_t x918 = INT32_MAX;
	int8_t x920 = 4;
	static uint64_t t13 = 71919994252975895LLU;

	t13 = ((x917/(x918/x919))<<x920);

	if (t13 != 552093171278880LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x937 = INT32_MAX;
	uint64_t x938 = UINT64_MAX;
	int16_t x939 = -351;
	uint16_t x940 = 12U;
	volatile uint64_t t14 = 26139724829332LLU;

	t14 = ((x937/(x938/x939))<<x940);

	if (t14 != 8796093018112LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x1005 = 4;
	int64_t x1006 = INT64_MIN;
	uint8_t x1008 = 3U;

	t15 = ((x1005/(x1006/x1007))<<x1008);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1197 = -4;
	int8_t x1198 = -27;
	static volatile int16_t x1199 = -1;
	static int16_t x1200 = 5;

	t16 = ((x1197/(x1198/x1199))<<x1200);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1289 = INT32_MIN;
	int32_t x1290 = -3;
	uint64_t x1291 = 1773618468127LLU;

	t17 = ((x1289/(x1290/x1291))<<x1292);

	if (t17 != 3547237266594LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1358 = INT32_MAX;
	uint32_t x1359 = 219U;
	int32_t x1360 = 0;
	uint32_t t18 = 924U;

	t18 = ((x1357/(x1358/x1359))<<x1360);

	if (t18 != 209U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x1469 = 53747LL;
	uint32_t x1470 = UINT32_MAX;
	volatile int16_t x1471 = INT16_MIN;
	int8_t x1472 = 24;
	volatile int64_t t19 = -2469094704LL;

	t19 = ((x1469/(x1470/x1471))<<x1472);

	if (t19 != 901725028352LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1491 = 90U;
	int8_t x1492 = 1;

	t20 = ((x1489/(x1490/x1491))<<x1492);

	if (t20 != 49274LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1493 = 8;
	uint8_t x1495 = 60U;
	volatile uint32_t x1496 = 15U;
	volatile int64_t t21 = -32369LL;

	t21 = ((x1493/(x1494/x1495))<<x1496);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1505 = UINT32_MAX;
	volatile uint64_t t22 = 816964253313735992LLU;

	t22 = ((x1505/(x1506/x1507))<<x1508);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1633 = INT16_MIN;
	static volatile int64_t x1634 = INT64_MIN;
	int8_t x1636 = 0;
	static int64_t t23 = 140093535LL;

	t23 = ((x1633/(x1634/x1635))<<x1636);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1721 = 0;
	int16_t x1722 = INT16_MAX;
	uint8_t x1723 = 108U;
	volatile int32_t t24 = -69528655;

	t24 = ((x1721/(x1722/x1723))<<x1724);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1745 = INT8_MIN;
	volatile int64_t x1746 = INT64_MAX;
	uint16_t x1747 = 5367U;
	volatile uint8_t x1748 = 10U;
	volatile int64_t t25 = 3570LL;

	t25 = ((x1745/(x1746/x1747))<<x1748);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1941 = 84LL;
	int64_t x1942 = 1532645254649LL;
	int16_t x1943 = INT16_MAX;
	int16_t x1944 = 1;
	static volatile int64_t t26 = -27771786LL;

	t26 = ((x1941/(x1942/x1943))<<x1944);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x2241 = INT16_MAX;
	uint32_t x2242 = 2312411U;
	static int64_t x2243 = 313LL;
	uint64_t x2244 = 22LLU;

	t27 = ((x2241/(x2242/x2243))<<x2244);

	if (t27 != 16777216LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x2565 = INT32_MAX;
	volatile uint32_t x2567 = 308U;
	volatile int8_t x2568 = 3;
	volatile uint64_t t28 = 910189807412478LLU;

	t28 = ((x2565/(x2566/x2567))<<x2568);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x2613 = UINT32_MAX;
	static int64_t x2614 = -1LL;
	static int64_t t29 = -175149498789980707LL;

	t29 = ((x2613/(x2614/x2615))<<x2616);

	if (t29 != 70368744161280LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2621 = -1;
	int32_t x2622 = INT32_MIN;
	static int16_t x2623 = INT16_MIN;
	int8_t x2624 = 1;
	volatile int32_t t30 = 1760;

	t30 = ((x2621/(x2622/x2623))<<x2624);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x2690 = 10703800LL;
	int64_t x2691 = -1LL;
	static volatile uint8_t x2692 = 0U;
	int64_t t31 = -16LL;

	t31 = ((x2689/(x2690/x2691))<<x2692);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2913 = INT32_MIN;
	static int64_t x2914 = INT64_MAX;
	int16_t x2915 = INT16_MIN;
	uint8_t x2916 = 12U;

	t32 = ((x2913/(x2914/x2915))<<x2916);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x3149 = -45457;
	uint64_t x3151 = 577277076946LLU;
	uint8_t x3152 = 1U;
	volatile uint64_t t33 = 113LLU;

	t33 = ((x3149/(x3150/x3151))<<x3152);

	if (t33 != 1154554188548LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x3169 = 11U;
	static int8_t x3171 = INT8_MIN;
	volatile int8_t x3172 = 0;
	int32_t t34 = -579;

	t34 = ((x3169/(x3170/x3171))<<x3172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x3201 = 44415244717383521LLU;
	int64_t x3202 = -762LL;
	int16_t x3203 = 491;

	t35 = ((x3201/(x3202/x3203))<<x3204);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x3262 = -1;
	static int16_t x3263 = -1;
	uint16_t x3264 = 0U;
	volatile int32_t t36 = INT32_MAX;

	t36 = ((x3261/(x3262/x3263))<<x3264);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x3605 = INT32_MAX;
	uint64_t x3606 = UINT64_MAX;
	int16_t x3607 = -474;
	volatile uint64_t t37 = 143196LLU;

	t37 = ((x3605/(x3606/x3607))<<x3608);

	if (t37 != 18446743523953737728LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3609 = -10878;
	static int64_t x3610 = INT64_MIN;
	int8_t x3611 = INT8_MAX;
	uint8_t x3612 = 0U;
	static volatile int64_t t38 = -314948404505369303LL;

	t38 = ((x3609/(x3610/x3611))<<x3612);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x3769 = 73117663918872LLU;
	volatile int32_t x3770 = INT32_MAX;
	int8_t x3771 = -1;
	uint16_t x3772 = 4U;
	volatile uint64_t t39 = 4161932903LLU;

	t39 = ((x3769/(x3770/x3771))<<x3772);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x3793 = 1010133047LL;
	int8_t x3794 = INT8_MAX;
	int8_t x3795 = INT8_MAX;
	uint8_t x3796 = 2U;
	int64_t t40 = -324824344594LL;

	t40 = ((x3793/(x3794/x3795))<<x3796);

	if (t40 != 4040532188LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3818 = INT64_MAX;
	static int8_t x3820 = 1;
	static int64_t t41 = 0LL;

	t41 = ((x3817/(x3818/x3819))<<x3820);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3938 = -1LL;
	uint64_t x3939 = 127LLU;
	uint64_t t42 = 6746736082539873588LLU;

	t42 = ((x3937/(x3938/x3939))<<x3940);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x4029 = 28098981U;
	int64_t x4030 = INT64_MAX;
	int16_t x4031 = -15626;
	static int64_t t43 = -1LL;

	t43 = ((x4029/(x4030/x4031))<<x4032);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x4097 = -1047312LL;
	static uint8_t x4099 = UINT8_MAX;
	uint8_t x4100 = 0U;
	volatile int64_t t44 = 717882321771LL;

	t44 = ((x4097/(x4098/x4099))<<x4100);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x4125 = 13154296;
	static volatile uint32_t x4127 = 6235U;
	int8_t x4128 = 26;

	t45 = ((x4125/(x4126/x4127))<<x4128);

	if (t45 != 1275068416U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x4173 = 49781LLU;
	volatile int64_t x4174 = 259795903LL;
	static int64_t x4175 = 7300140LL;
	uint8_t x4176 = 6U;

	t46 = ((x4173/(x4174/x4175))<<x4176);

	if (t46 != 91008LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x4221 = INT8_MAX;
	int64_t x4222 = 6886018461LL;
	uint8_t x4223 = 1U;
	static int64_t t47 = 20718384507186LL;

	t47 = ((x4221/(x4222/x4223))<<x4224);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x4249 = -164632475269785LL;
	static int16_t x4250 = INT16_MIN;
	int8_t x4251 = 1;
	uint8_t x4252 = 4U;
	int64_t t48 = -15344743574915450LL;

	t48 = ((x4249/(x4250/x4251))<<x4252);

	if (t48 != 80386950800LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x4297 = INT64_MAX;
	volatile int64_t x4298 = INT64_MAX;
	int8_t x4299 = INT8_MAX;
	volatile int64_t t49 = 315039987043988LL;

	t49 = ((x4297/(x4298/x4299))<<x4300);

	if (t49 != 1016LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x4321 = -1;
	uint64_t x4322 = 4565664661047LLU;
	int8_t x4323 = INT8_MAX;
	volatile uint64_t t50 = 509LLU;

	t50 = ((x4321/(x4322/x4323))<<x4324);

	if (t50 != 68869878303424512LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x4366 = INT8_MIN;
	static volatile int8_t x4367 = INT8_MIN;
	uint16_t x4368 = 6U;
	int32_t t51 = -32434;

	t51 = ((x4365/(x4366/x4367))<<x4368);

	if (t51 != 4194240) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x4389 = 1391U;
	static int32_t x4391 = -28;
	uint8_t x4392 = 1U;
	uint32_t t52 = 2104U;

	t52 = ((x4389/(x4390/x4391))<<x4392);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x4417 = 39908LL;
	uint32_t x4418 = UINT32_MAX;
	volatile uint8_t x4419 = 43U;
	volatile int64_t t53 = -77161896544LL;

	t53 = ((x4417/(x4418/x4419))<<x4420);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x4442 = INT64_MAX;
	static volatile int64_t t54 = -237LL;

	t54 = ((x4441/(x4442/x4443))<<x4444);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x4489 = -55;
	uint8_t x4492 = 6U;
	volatile int64_t t55 = 114044626547LL;

	t55 = ((x4489/(x4490/x4491))<<x4492);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x4621 = -15;
	static int64_t x4623 = -1LL;

	t56 = ((x4621/(x4622/x4623))<<x4624);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x4666 = UINT64_MAX;
	int8_t x4667 = -1;
	int32_t x4668 = 2;

	t57 = ((x4665/(x4666/x4667))<<x4668);

	if (t57 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4737 = INT8_MAX;
	volatile int32_t x4738 = INT32_MIN;
	static int32_t x4739 = INT32_MIN;
	uint8_t x4740 = 1U;
	int32_t t58 = -933920486;

	t58 = ((x4737/(x4738/x4739))<<x4740);

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x5065 = INT32_MIN;
	int64_t x5066 = -1LL;
	uint64_t x5067 = 3518786767210LLU;

	t59 = ((x5065/(x5066/x5067))<<x5068);

	if (t59 != 1844857735952203776LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x5197 = -1;
	volatile int32_t x5198 = INT32_MAX;
	volatile int8_t x5200 = 4;
	int32_t t60 = -412;

	t60 = ((x5197/(x5198/x5199))<<x5200);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x5329 = INT64_MIN;
	static uint64_t x5330 = UINT64_MAX;
	int16_t x5331 = 2;
	static volatile uint32_t x5332 = 6U;
	uint64_t t61 = 6560579761210919789LLU;

	t61 = ((x5329/(x5330/x5331))<<x5332);

	if (t61 != 64LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x5461 = 5985U;
	int32_t x5462 = -150470;
	uint64_t x5463 = 68258LLU;
	volatile int64_t x5464 = 13LL;
	static volatile uint64_t t62 = 37677876557515722LLU;

	t62 = ((x5461/(x5462/x5463))<<x5464);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x5593 = 65U;
	volatile int8_t x5594 = INT8_MIN;
	uint64_t x5595 = 20438715141416LLU;
	uint64_t x5596 = 1LLU;
	uint64_t t63 = 1209954752LLU;

	t63 = ((x5593/(x5594/x5595))<<x5596);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x5775 = 2;
	uint8_t x5776 = 7U;
	int64_t t64 = 4012150312672LL;

	t64 = ((x5773/(x5774/x5775))<<x5776);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5833 = INT8_MIN;
	uint16_t x5836 = 6U;
	int32_t t65 = 470;

	t65 = ((x5833/(x5834/x5835))<<x5836);

	if (t65 != 8192) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x5877 = 4U;
	uint64_t x5878 = UINT64_MAX;
	int16_t x5879 = -572;
	volatile uint64_t t66 = 92999606153LLU;

	t66 = ((x5877/(x5878/x5879))<<x5880);

	if (t66 != 4LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x6030 = 227573963U;
	uint8_t x6031 = 1U;
	volatile uint64_t t67 = 43LLU;

	t67 = ((x6029/(x6030/x6031))<<x6032);

	if (t67 != 172221373184LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x6153 = -1LL;
	int32_t x6155 = INT32_MAX;
	uint8_t x6156 = 9U;
	volatile int64_t t68 = 372888LL;

	t68 = ((x6153/(x6154/x6155))<<x6156);

	if (t68 != 512LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x6317 = UINT64_MAX;
	uint32_t x6318 = UINT32_MAX;
	int32_t x6319 = INT32_MIN;
	uint8_t x6320 = 0U;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x6317/(x6318/x6319))<<x6320);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x6321 = 1;
	uint16_t x6322 = UINT16_MAX;
	uint8_t x6324 = 0U;
	int32_t t70 = -1;

	t70 = ((x6321/(x6322/x6323))<<x6324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x6429 = -1;
	uint64_t x6430 = UINT64_MAX;
	int16_t x6431 = -599;
	static volatile int8_t x6432 = 3;
	static volatile uint64_t t71 = 684009628461936LLU;

	t71 = ((x6429/(x6430/x6431))<<x6432);

	if (t71 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x6446 = INT64_MIN;
	int64_t x6447 = INT64_MIN;
	static uint8_t x6448 = 38U;
	volatile uint64_t t72 = 16814317273378701LLU;

	t72 = ((x6445/(x6446/x6447))<<x6448);

	if (t72 != 824633720832LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x6461 = UINT32_MAX;
	int32_t x6462 = INT32_MIN;
	uint16_t x6463 = 6U;
	static volatile uint8_t x6464 = 1U;
	uint32_t t73 = 2018912725U;

	t73 = ((x6461/(x6462/x6463))<<x6464);

	if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x6550 = UINT64_MAX;
	uint64_t x6551 = 454LLU;
	volatile uint8_t x6552 = 41U;
	uint64_t t74 = 1326753689037929LLU;

	t74 = ((x6549/(x6550/x6551))<<x6552);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x6581 = 50U;
	static int64_t x6582 = 2195612309060LL;
	static int8_t x6583 = 3;
	int64_t t75 = -3154LL;

	t75 = ((x6581/(x6582/x6583))<<x6584);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x6601 = -72433828796777586LL;
	uint16_t x6602 = UINT16_MAX;
	volatile int64_t x6603 = -5582LL;
	uint8_t x6604 = 2U;

	t76 = ((x6601/(x6602/x6603))<<x6604);

	if (t76 != 26339574107919120LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x6657 = 31U;
	int64_t x6658 = INT64_MIN;
	int64_t x6659 = 96148787891286LL;
	static int64_t t77 = 26LL;

	t77 = ((x6657/(x6658/x6659))<<x6660);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x6686 = INT32_MAX;
	static int32_t x6687 = 3;
	uint16_t x6688 = 10U;
	static volatile uint64_t t78 = 5590643LLU;

	t78 = ((x6685/(x6686/x6687))<<x6688);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x6765 = 5LLU;
	int16_t x6766 = -1;
	volatile uint64_t x6767 = UINT64_MAX;
	static uint16_t x6768 = 2U;
	static volatile uint64_t t79 = 6LLU;

	t79 = ((x6765/(x6766/x6767))<<x6768);

	if (t79 != 20LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x6897 = INT16_MIN;
	volatile uint32_t x6898 = 61887U;
	uint8_t x6900 = 1U;
	volatile uint32_t t80 = 36757121U;

	t80 = ((x6897/(x6898/x6899))<<x6900);

	if (t80 != 11799270U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x6926 = 3;
	uint16_t x6927 = 3U;
	volatile uint8_t x6928 = 60U;
	volatile uint64_t t81 = 207155966133683002LLU;

	t81 = ((x6925/(x6926/x6927))<<x6928);

	if (t81 != 8070450532247928832LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x7097 = 3U;
	static int32_t x7098 = INT32_MIN;
	int32_t x7099 = INT32_MIN;
	uint8_t x7100 = 10U;
	volatile int32_t t82 = 65;

	t82 = ((x7097/(x7098/x7099))<<x7100);

	if (t82 != 3072) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x7337 = 274353870LL;
	int64_t x7338 = INT64_MAX;
	int8_t x7339 = INT8_MIN;
	int64_t t83 = 95323LL;

	t83 = ((x7337/(x7338/x7339))<<x7340);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x7413 = UINT32_MAX;
	int64_t x7414 = INT64_MIN;
	uint32_t x7415 = 157235U;
	int32_t x7416 = 22;

	t84 = ((x7413/(x7414/x7415))<<x7416);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x7445 = 13U;
	uint8_t x7447 = UINT8_MAX;
	int16_t x7448 = 4;
	volatile uint32_t t85 = 244070228U;

	t85 = ((x7445/(x7446/x7447))<<x7448);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x7465 = 170003902LLU;
	uint8_t x7466 = UINT8_MAX;
	int8_t x7467 = -1;
	int8_t x7468 = 30;
	static uint64_t t86 = 8221303984574200962LLU;

	t86 = ((x7465/(x7466/x7467))<<x7468);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x7653 = 12LLU;
	uint32_t x7654 = 36894821U;
	int8_t x7656 = 0;

	t87 = ((x7653/(x7654/x7655))<<x7656);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x7677 = INT8_MAX;
	int64_t x7678 = INT64_MIN;
	uint8_t x7680 = 18U;
	volatile int64_t t88 = -685224247372284LL;

	t88 = ((x7677/(x7678/x7679))<<x7680);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x7681 = 1U;
	static int64_t x7682 = -268261116LL;
	static int16_t x7683 = 254;
	volatile uint8_t x7684 = 1U;

	t89 = ((x7681/(x7682/x7683))<<x7684);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x7857 = -316913133488468717LL;
	int32_t x7858 = INT32_MAX;
	static int16_t x7859 = INT16_MIN;
	volatile uint8_t x7860 = 20U;
	int64_t t90 = 317929LL;

	t90 = ((x7857/(x7858/x7859))<<x7860);

	if (t90 != 5070687508366360576LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x7965 = -1255;
	int64_t x7966 = INT64_MIN;
	int8_t x7967 = -57;

	t91 = ((x7965/(x7966/x7967))<<x7968);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x7978 = INT8_MIN;
	uint8_t x7980 = 23U;
	volatile int64_t t92 = 2074532LL;

	t92 = ((x7977/(x7978/x7979))<<x7980);

	if (t92 != 49440643612672LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x8165 = 133311658110626LLU;
	volatile uint8_t x8166 = UINT8_MAX;
	static int8_t x8167 = 8;
	uint8_t x8168 = 12U;
	volatile uint64_t t93 = 0LLU;

	t93 = ((x8165/(x8166/x8167))<<x8168);

	if (t93 != 17614340374872064LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x8506 = INT8_MIN;
	uint32_t x8507 = 456244951U;
	uint32_t t94 = 245447U;

	t94 = ((x8505/(x8506/x8507))<<x8508);

	if (t94 != 954437148U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x8725 = INT16_MIN;
	int16_t x8726 = -26;
	uint64_t x8727 = 61LLU;
	int8_t x8728 = 1;
	volatile uint64_t t95 = 275484409728316927LLU;

	t95 = ((x8725/(x8726/x8727))<<x8728);

	if (t95 != 120LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x8791 = INT8_MIN;
	volatile uint64_t x8792 = 3LLU;
	int64_t t96 = -6462509294264162LL;

	t96 = ((x8789/(x8790/x8791))<<x8792);

	if (t96 != 4398046773248LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x8809 = -1;
	volatile int32_t t97 = -17;

	t97 = ((x8809/(x8810/x8811))<<x8812);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x8817 = UINT32_MAX;
	int8_t x8818 = INT8_MIN;
	int8_t x8819 = -1;
	int8_t x8820 = 21;

	t98 = ((x8817/(x8818/x8819))<<x8820);

	if (t98 != 4292870144U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x8933 = 2;
	static uint32_t x8934 = UINT32_MAX;
	int16_t x8935 = 100;
	int32_t x8936 = 12;
	static uint32_t t99 = 0U;

	t99 = ((x8933/(x8934/x8935))<<x8936);

	if (t99 != 0U) { NG(); } else { ; }
	
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

