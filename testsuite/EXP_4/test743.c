#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = 8282U;
static int8_t x7 = -1;
static uint16_t x30 = 8671U;
static uint32_t x55 = 549720129U;
volatile int64_t x137 = INT64_MAX;
volatile int32_t x140 = -542438877;
volatile int64_t t5 = -7LL;
int32_t x170 = INT32_MAX;
int64_t x207 = INT64_MIN;
int32_t t10 = -373816;
uint8_t x279 = UINT8_MAX;
uint64_t x342 = 40767949105230961LLU;
int32_t t17 = 147913;
int8_t x469 = INT8_MIN;
static volatile int32_t x489 = -1;
int16_t x491 = -13;
static uint32_t t23 = 204U;
volatile uint8_t x524 = 2U;
int64_t x573 = -47269128204970LL;
uint8_t x586 = UINT8_MAX;
int32_t x610 = INT32_MAX;
uint16_t x658 = 11467U;
uint8_t x662 = UINT8_MAX;
volatile int32_t t34 = 3;
int64_t x685 = 20LL;
uint16_t x688 = 1U;
int8_t x715 = -1;
uint64_t t37 = 1899143404254815LLU;
uint16_t x723 = 40U;
uint8_t x730 = UINT8_MAX;
uint32_t x742 = 1001748U;
volatile uint32_t x750 = UINT32_MAX;
int8_t x752 = 1;
uint32_t t42 = 271604038U;
static uint8_t x761 = 61U;
int8_t x762 = 1;
int8_t x763 = INT8_MAX;
static volatile uint8_t x782 = 126U;
uint64_t x791 = UINT64_MAX;
uint64_t t46 = 3334480909725427LLU;
int32_t t49 = 0;
volatile uint16_t x902 = UINT16_MAX;
static int32_t x904 = INT32_MIN;
uint16_t x910 = 2U;
static int32_t x912 = -63729;
uint16_t x952 = 15U;
int16_t x980 = INT16_MIN;
uint64_t t56 = 8314526782255360LLU;
uint8_t x1019 = 0U;
uint64_t x1045 = 6LLU;
int16_t x1061 = INT16_MIN;
volatile int32_t t62 = -113522850;
uint32_t t65 = 372U;
volatile uint8_t x1233 = 1U;
int64_t x1236 = -1LL;
int64_t x1286 = 113LL;
uint16_t x1332 = 1U;
volatile int32_t t70 = 62354;
volatile uint32_t x1391 = UINT32_MAX;
uint16_t x1392 = 103U;
volatile int16_t x1394 = INT16_MAX;
static int32_t x1395 = -1;
static int64_t x1459 = -1LL;
uint64_t x1477 = 554647139054525069LLU;
int16_t x1478 = 4;
int16_t x1479 = 2;
volatile uint64_t t75 = 200861447949LLU;
volatile int16_t x1498 = INT16_MAX;
int64_t x1499 = INT64_MIN;
static uint64_t x1621 = 37441809501LLU;
uint64_t x1622 = 5600112LLU;
static int32_t x1657 = INT32_MAX;
uint64_t x1661 = 1LLU;
uint32_t x1678 = UINT32_MAX;
int8_t x1706 = 3;
uint16_t x1707 = 6539U;
volatile uint32_t x1708 = 1U;
static int16_t x1732 = -1;
int32_t t85 = -34994441;
uint8_t x1781 = 3U;
uint16_t x1783 = 0U;
volatile int32_t t87 = -11013;
volatile uint8_t x1838 = UINT8_MAX;
uint64_t x1840 = 72758444822643784LLU;
volatile uint64_t x1855 = UINT64_MAX;
static uint64_t x1856 = UINT64_MAX;
static int32_t x1917 = 50;
uint16_t x1918 = 1673U;
volatile uint8_t x1953 = 75U;
static int16_t x1956 = INT16_MIN;
uint8_t x1962 = 1U;
int16_t x1963 = -1;
volatile uint32_t x2016 = 96528U;
uint64_t x2042 = 72839674151000180LLU;
int16_t x2043 = INT16_MIN;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int64_t x8 = -1LL;
	volatile int32_t t0 = 12682;

	t0 = (x5-(x6<<(x7%x8)));

	if (t0 != -41050) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x29 = INT8_MIN;
	int8_t x31 = 2;
	volatile int16_t x32 = INT16_MAX;
	int32_t t1 = -705;

	t1 = (x29-(x30<<(x31%x32)));

	if (t1 != -34812) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x53 = INT64_MAX;
	int64_t x54 = 1LL;
	volatile uint8_t x56 = 8U;
	int64_t t2 = 30LL;

	t2 = (x53-(x54<<(x55%x56)));

	if (t2 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x73 = INT8_MAX;
	uint32_t x74 = 1U;
	int8_t x75 = -1;
	volatile int64_t x76 = -1LL;
	volatile uint32_t t3 = 0U;

	t3 = (x73-(x74<<(x75%x76)));

	if (t3 != 126U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x117 = -18651766638756764LL;
	uint64_t x118 = 16472083LLU;
	int64_t x119 = INT64_MAX;
	static int16_t x120 = -1;
	volatile uint64_t t4 = 2687130LLU;

	t4 = (x117-(x118<<(x119%x120)));

	if (t4 != 18428092307054322769LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x138 = 37U;
	uint8_t x139 = 2U;

	t5 = (x137-(x138<<(x139%x140)));

	if (t5 != 9223372036854775659LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x145 = UINT32_MAX;
	int32_t x146 = 1612614;
	uint16_t x147 = 2U;
	volatile int64_t x148 = INT64_MIN;
	static uint32_t t6 = 125231074U;

	t6 = (x145-(x146<<(x147%x148)));

	if (t6 != 4288516839U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x169 = 0;
	volatile int32_t x171 = -1;
	volatile int32_t x172 = -1;
	volatile int32_t t7 = 1;

	t7 = (x169-(x170<<(x171%x172)));

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x173 = -229;
	uint32_t x174 = 100U;
	static uint32_t x175 = 43U;
	int64_t x176 = -1LL;
	uint32_t t8 = 50410812U;

	t8 = (x173-(x174<<(x175%x176)));

	if (t8 != 4294966967U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x181 = UINT64_MAX;
	static volatile uint16_t x182 = UINT16_MAX;
	static uint8_t x183 = 10U;
	int16_t x184 = 2665;
	uint64_t t9 = 13030620894342LLU;

	t9 = (x181-(x182<<(x183%x184)));

	if (t9 != 18446744073642443775LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = 1;
	int16_t x208 = INT16_MIN;

	t10 = (x205-(x206<<(x207%x208)));

	if (t10 != -32769) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x209 = -3;
	uint64_t x210 = 20904083LLU;
	static uint8_t x211 = UINT8_MAX;
	static int8_t x212 = -1;
	static uint64_t t11 = 399531036785253LLU;

	t11 = (x209-(x210<<(x211%x212)));

	if (t11 != 18446744073688647530LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x229 = UINT8_MAX;
	uint16_t x230 = 1U;
	uint16_t x231 = 4018U;
	int64_t x232 = -1LL;
	volatile int32_t t12 = -424635;

	t12 = (x229-(x230<<(x231%x232)));

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x277 = 0U;
	static int64_t x278 = 17LL;
	volatile int32_t x280 = -1;
	int64_t t13 = 214LL;

	t13 = (x277-(x278<<(x279%x280)));

	if (t13 != -17LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 2U;
	uint32_t x307 = 9U;
	static int16_t x308 = INT16_MIN;
	volatile uint64_t t14 = 3605018317293988LLU;

	t14 = (x305-(x306<<(x307%x308)));

	if (t14 != 18446744073709550591LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x333 = UINT32_MAX;
	volatile uint64_t x334 = UINT64_MAX;
	volatile int16_t x335 = 3;
	static uint8_t x336 = UINT8_MAX;
	volatile uint64_t t15 = 2020220937353663055LLU;

	t15 = (x333-(x334<<(x335%x336)));

	if (t15 != 4294967303LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x341 = INT32_MIN;
	volatile uint32_t x343 = UINT32_MAX;
	static volatile int8_t x344 = -25;
	uint64_t t16 = 478330223053LLU;

	t16 = (x341-(x342<<(x343%x344)));

	if (t16 != 14135493607754301440LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x349 = 7U;
	volatile int8_t x350 = 14;
	volatile uint64_t x351 = UINT64_MAX;
	static int64_t x352 = INT64_MAX;

	t17 = (x349-(x350<<(x351%x352)));

	if (t17 != -21) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x365 = INT64_MIN;
	static uint64_t x366 = UINT64_MAX;
	uint32_t x367 = 25U;
	static int16_t x368 = INT16_MAX;
	uint64_t t18 = 1LLU;

	t18 = (x365-(x366<<(x367%x368)));

	if (t18 != 9223372036888330240LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x377 = -1;
	static uint64_t x378 = UINT64_MAX;
	volatile int64_t x379 = INT64_MIN;
	uint64_t x380 = 1LLU;
	static volatile uint64_t t19 = 1005135572LLU;

	t19 = (x377-(x378<<(x379%x380)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x470 = 4;
	int16_t x471 = -1;
	int8_t x472 = 1;
	volatile int32_t t20 = 324646;

	t20 = (x469-(x470<<(x471%x472)));

	if (t20 != -132) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x477 = 0U;
	uint16_t x478 = 198U;
	static uint64_t x479 = 1LLU;
	static int32_t x480 = 497363;
	int32_t t21 = -20;

	t21 = (x477-(x478<<(x479%x480)));

	if (t21 != -396) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x490 = 205420936LLU;
	static int8_t x492 = -1;
	uint64_t t22 = 361704740LLU;

	t22 = (x489-(x490<<(x491%x492)));

	if (t22 != 18446744073504130679LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x513 = 3074U;
	uint32_t x514 = 6U;
	int16_t x515 = INT16_MAX;
	int8_t x516 = INT8_MAX;

	t23 = (x513-(x514<<(x515%x516)));

	if (t23 != 3062U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x517 = -1;
	int16_t x518 = 506;
	int32_t x519 = 7;
	int32_t x520 = INT32_MIN;
	int32_t t24 = 11290930;

	t24 = (x517-(x518<<(x519%x520)));

	if (t24 != -64769) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x521 = 0LLU;
	static volatile uint32_t x522 = 2U;
	static int64_t x523 = INT64_MIN;
	uint64_t t25 = 906LLU;

	t25 = (x521-(x522<<(x523%x524)));

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x537 = 1973406377U;
	uint32_t x538 = 122U;
	uint8_t x539 = UINT8_MAX;
	static uint64_t x540 = 113LLU;
	volatile uint32_t t26 = 29082U;

	t26 = (x537-(x538<<(x539%x540)));

	if (t26 != 899664553U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x574 = 14U;
	volatile uint64_t x575 = 96255LLU;
	uint16_t x576 = 12U;
	static int64_t t27 = -26343692LL;

	t27 = (x573-(x574<<(x575%x576)));

	if (t27 != -47269128205082LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x585 = 3979U;
	volatile int16_t x587 = 4;
	uint32_t x588 = 1474573660U;
	volatile uint32_t t28 = 11830218U;

	t28 = (x585-(x586<<(x587%x588)));

	if (t28 != 4294967195U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x593 = UINT8_MAX;
	static uint64_t x594 = 2052362958328991LLU;
	int16_t x595 = 40;
	volatile uint32_t x596 = 42457692U;
	volatile uint64_t t29 = 1LLU;

	t29 = (x593-(x594<<(x595%x596)));

	if (t29 != 16945744675539517695LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x609 = 234530285;
	int8_t x611 = -3;
	int16_t x612 = -1;
	volatile int32_t t30 = 1128201;

	t30 = (x609-(x610<<(x611%x612)));

	if (t30 != -1912953362) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x657 = 4U;
	uint32_t x659 = 1U;
	int16_t x660 = -3815;
	int32_t t31 = -569415;

	t31 = (x657-(x658<<(x659%x660)));

	if (t31 != -22930) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x661 = 22;
	uint8_t x663 = 9U;
	int64_t x664 = INT64_MIN;
	volatile int32_t t32 = -5171;

	t32 = (x661-(x662<<(x663%x664)));

	if (t32 != -130538) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x669 = -74;
	static uint32_t x670 = 1071092U;
	int64_t x671 = -1LL;
	static int32_t x672 = -1;
	volatile uint32_t t33 = 69332U;

	t33 = (x669-(x670<<(x671%x672)));

	if (t33 != 4293896130U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x681 = UINT16_MAX;
	uint8_t x682 = UINT8_MAX;
	static uint16_t x683 = 37U;
	int32_t x684 = -1;

	t34 = (x681-(x682<<(x683%x684)));

	if (t34 != 65280) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x686 = 2474305073015LL;
	int16_t x687 = INT16_MIN;
	int64_t t35 = -11LL;

	t35 = (x685-(x686<<(x687%x688)));

	if (t35 != -2474305072995LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x697 = -1;
	static uint64_t x698 = 3081LLU;
	int64_t x699 = 521LL;
	static uint32_t x700 = 12U;
	uint64_t t36 = 364832LLU;

	t36 = (x697-(x698<<(x699%x700)));

	if (t36 != 18446744073709453023LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x713 = UINT16_MAX;
	uint64_t x714 = 1155LLU;
	volatile uint64_t x716 = 28LLU;

	t37 = (x713-(x714<<(x715%x716)));

	if (t37 != 18446744073671770111LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x721 = INT8_MAX;
	uint16_t x722 = UINT16_MAX;
	int8_t x724 = -25;
	int32_t t38 = 24357669;

	t38 = (x721-(x722<<(x723%x724)));

	if (t38 != -2147450753) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x725 = -1LL;
	static int16_t x726 = INT16_MAX;
	int32_t x727 = INT32_MIN;
	static volatile int8_t x728 = -1;
	static int64_t t39 = -112LL;

	t39 = (x725-(x726<<(x727%x728)));

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x729 = INT64_MAX;
	int64_t x731 = INT64_MIN;
	volatile int64_t x732 = -1LL;
	static int64_t t40 = 1202663528842197LL;

	t40 = (x729-(x730<<(x731%x732)));

	if (t40 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x741 = -1;
	static int8_t x743 = INT8_MAX;
	volatile int8_t x744 = 6;
	uint32_t t41 = 3495053U;

	t41 = (x741-(x742<<(x743%x744)));

	if (t41 != 4292963799U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x749 = 215087U;
	uint64_t x751 = 53444579LLU;

	t42 = (x749-(x750<<(x751%x752)));

	if (t42 != 215088U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x764 = -1LL;
	static int32_t t43 = -4860;

	t43 = (x761-(x762<<(x763%x764)));

	if (t43 != 60) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x773 = 152;
	uint16_t x774 = 731U;
	static volatile int32_t x775 = 5619;
	static int64_t x776 = -1LL;
	int32_t t44 = 53;

	t44 = (x773-(x774<<(x775%x776)));

	if (t44 != -579) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x781 = 1U;
	int16_t x783 = INT16_MIN;
	static int8_t x784 = INT8_MIN;
	static int32_t t45 = -55505957;

	t45 = (x781-(x782<<(x783%x784)));

	if (t45 != -125) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x789 = INT32_MAX;
	uint64_t x790 = UINT64_MAX;
	volatile int32_t x792 = INT32_MAX;

	t46 = (x789-(x790<<(x791%x792)));

	if (t46 != 2147483655LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x793 = 127109514U;
	uint32_t x794 = 5337781U;
	uint32_t x795 = 8U;
	int64_t x796 = 959254146525650196LL;
	static volatile uint32_t t47 = 5U;

	t47 = (x793-(x794<<(x795%x796)));

	if (t47 != 3055604874U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x821 = 324513064U;
	int16_t x822 = INT16_MAX;
	int32_t x823 = INT32_MIN;
	int16_t x824 = -1;
	uint32_t t48 = 1243U;

	t48 = (x821-(x822<<(x823%x824)));

	if (t48 != 324480297U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x833 = UINT8_MAX;
	uint8_t x834 = 3U;
	uint8_t x835 = 2U;
	uint32_t x836 = 7053U;

	t49 = (x833-(x834<<(x835%x836)));

	if (t49 != 243) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x841 = INT8_MAX;
	uint32_t x842 = 2U;
	volatile uint32_t x843 = 4U;
	static uint16_t x844 = UINT16_MAX;
	static uint32_t t50 = 472984U;

	t50 = (x841-(x842<<(x843%x844)));

	if (t50 != 95U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x901 = -2830;
	uint8_t x903 = 15U;
	static volatile int32_t t51 = -361790505;

	t51 = (x901-(x902<<(x903%x904)));

	if (t51 != -2147453710) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x909 = UINT64_MAX;
	volatile uint64_t x911 = 3LLU;
	uint64_t t52 = 75LLU;

	t52 = (x909-(x910<<(x911%x912)));

	if (t52 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x941 = -1;
	volatile uint64_t x942 = UINT64_MAX;
	static volatile int8_t x943 = INT8_MIN;
	int8_t x944 = 1;
	static uint64_t t53 = 2481119094839110505LLU;

	t53 = (x941-(x942<<(x943%x944)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x949 = 2;
	static int16_t x950 = INT16_MAX;
	volatile int64_t x951 = 2LL;
	volatile int32_t t54 = 742;

	t54 = (x949-(x950<<(x951%x952)));

	if (t54 != -131066) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x977 = -2365524368376559471LL;
	uint32_t x978 = 983114533U;
	static int64_t x979 = INT64_MIN;
	int64_t t55 = -31914LL;

	t55 = (x977-(x978<<(x979%x980)));

	if (t55 != -2365524369359674004LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x1005 = UINT64_MAX;
	int8_t x1006 = 14;
	int16_t x1007 = INT16_MIN;
	int32_t x1008 = -1;

	t56 = (x1005-(x1006<<(x1007%x1008)));

	if (t56 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1017 = 298392516U;
	uint16_t x1018 = 1779U;
	int16_t x1020 = -509;
	uint32_t t57 = 823944614U;

	t57 = (x1017-(x1018<<(x1019%x1020)));

	if (t57 != 298390737U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1037 = 5LLU;
	int16_t x1038 = 1;
	static int16_t x1039 = INT16_MIN;
	static int8_t x1040 = INT8_MIN;
	static uint64_t t58 = 1261521356LLU;

	t58 = (x1037-(x1038<<(x1039%x1040)));

	if (t58 != 4LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1046 = INT64_MAX;
	int16_t x1047 = INT16_MIN;
	int32_t x1048 = -1;
	static uint64_t t59 = 8LLU;

	t59 = (x1045-(x1046<<(x1047%x1048)));

	if (t59 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1062 = UINT64_MAX;
	int8_t x1063 = -1;
	int32_t x1064 = -1;
	static volatile uint64_t t60 = 599694LLU;

	t60 = (x1061-(x1062<<(x1063%x1064)));

	if (t60 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1085 = -2313;
	uint8_t x1086 = 52U;
	uint16_t x1087 = 1344U;
	static volatile uint16_t x1088 = 3U;
	int32_t t61 = -3;

	t61 = (x1085-(x1086<<(x1087%x1088)));

	if (t61 != -2365) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1121 = UINT16_MAX;
	volatile uint16_t x1122 = 1U;
	volatile uint8_t x1123 = 0U;
	volatile int8_t x1124 = INT8_MIN;

	t62 = (x1121-(x1122<<(x1123%x1124)));

	if (t62 != 65534) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1133 = UINT64_MAX;
	int32_t x1134 = 953;
	int32_t x1135 = 0;
	uint64_t x1136 = 232614777060684310LLU;
	volatile uint64_t t63 = 605613049399303164LLU;

	t63 = (x1133-(x1134<<(x1135%x1136)));

	if (t63 != 18446744073709550662LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1173 = UINT64_MAX;
	int32_t x1174 = 73000740;
	int16_t x1175 = INT16_MIN;
	static int16_t x1176 = -2;
	uint64_t t64 = 33114243431041LLU;

	t64 = (x1173-(x1174<<(x1175%x1176)));

	if (t64 != 18446744073636550875LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x1197 = UINT32_MAX;
	volatile uint8_t x1198 = 1U;
	volatile int64_t x1199 = 16LL;
	uint16_t x1200 = 1U;

	t65 = (x1197-(x1198<<(x1199%x1200)));

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x1234 = 37;
	int16_t x1235 = INT16_MIN;
	int32_t t66 = -245484;

	t66 = (x1233-(x1234<<(x1235%x1236)));

	if (t66 != -36) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1285 = 764454926;
	static uint64_t x1287 = 9803686098423LLU;
	static uint16_t x1288 = 1U;
	int64_t t67 = -3186782LL;

	t67 = (x1285-(x1286<<(x1287%x1288)));

	if (t67 != 764454813LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x1293 = -173985;
	uint8_t x1294 = UINT8_MAX;
	volatile int32_t x1295 = INT32_MIN;
	int32_t x1296 = -1;
	static volatile int32_t t68 = 6;

	t68 = (x1293-(x1294<<(x1295%x1296)));

	if (t68 != -174240) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1301 = -1;
	uint16_t x1302 = 251U;
	uint16_t x1303 = 1U;
	volatile int64_t x1304 = INT64_MIN;
	int32_t t69 = 120534470;

	t69 = (x1301-(x1302<<(x1303%x1304)));

	if (t69 != -503) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1329 = -1;
	uint8_t x1330 = 51U;
	static int64_t x1331 = -1LL;

	t70 = (x1329-(x1330<<(x1331%x1332)));

	if (t70 != -52) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x1389 = UINT16_MAX;
	static uint64_t x1390 = UINT64_MAX;
	uint64_t t71 = 399689069LLU;

	t71 = (x1389-(x1390<<(x1391%x1392)));

	if (t71 != 4611686018427453439LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x1393 = INT8_MIN;
	int8_t x1396 = -1;
	volatile int32_t t72 = 1;

	t72 = (x1393-(x1394<<(x1395%x1396)));

	if (t72 != -32895) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x1413 = 2U;
	uint64_t x1414 = 16LLU;
	volatile int32_t x1415 = -1;
	uint64_t x1416 = UINT64_MAX;
	volatile uint64_t t73 = 4511918347430937589LLU;

	t73 = (x1413-(x1414<<(x1415%x1416)));

	if (t73 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1457 = INT16_MAX;
	int16_t x1458 = INT16_MAX;
	int16_t x1460 = -1;
	volatile int32_t t74 = -92718911;

	t74 = (x1457-(x1458<<(x1459%x1460)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1480 = -1;

	t75 = (x1477-(x1478<<(x1479%x1480)));

	if (t75 != 554647139054525065LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x1497 = INT16_MIN;
	int16_t x1500 = INT16_MIN;
	int32_t t76 = -658246;

	t76 = (x1497-(x1498<<(x1499%x1500)));

	if (t76 != -65535) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x1577 = UINT32_MAX;
	uint32_t x1578 = 13940U;
	uint32_t x1579 = UINT32_MAX;
	volatile int8_t x1580 = 1;
	volatile uint32_t t77 = 34222841U;

	t77 = (x1577-(x1578<<(x1579%x1580)));

	if (t77 != 4294953355U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x1623 = 63;
	int8_t x1624 = INT8_MIN;
	static uint64_t t78 = 340217049LLU;

	t78 = (x1621-(x1622<<(x1623%x1624)));

	if (t78 != 37441809501LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x1645 = INT8_MIN;
	uint8_t x1646 = 0U;
	static volatile int64_t x1647 = INT64_MAX;
	volatile int8_t x1648 = -1;
	int32_t t79 = 1;

	t79 = (x1645-(x1646<<(x1647%x1648)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x1658 = 1LL;
	static uint16_t x1659 = 199U;
	int64_t x1660 = -1LL;
	int64_t t80 = -209140977LL;

	t80 = (x1657-(x1658<<(x1659%x1660)));

	if (t80 != 2147483646LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1662 = 1U;
	static volatile int32_t x1663 = INT32_MAX;
	volatile int8_t x1664 = INT8_MAX;
	volatile uint64_t t81 = 19170370994143828LLU;

	t81 = (x1661-(x1662<<(x1663%x1664)));

	if (t81 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1677 = INT32_MAX;
	volatile uint16_t x1679 = UINT16_MAX;
	int16_t x1680 = INT16_MAX;
	static volatile uint32_t t82 = 197861871U;

	t82 = (x1677-(x1678<<(x1679%x1680)));

	if (t82 != 2147483649U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1705 = UINT16_MAX;
	volatile int32_t t83 = 113768;

	t83 = (x1705-(x1706<<(x1707%x1708)));

	if (t83 != 65532) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x1713 = 2097166LLU;
	int16_t x1714 = INT16_MAX;
	volatile uint8_t x1715 = 16U;
	int8_t x1716 = INT8_MIN;
	static uint64_t t84 = 314LLU;

	t84 = (x1713-(x1714<<(x1715%x1716)));

	if (t84 != 18446744071564230670LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1729 = 1U;
	uint16_t x1730 = 1873U;
	int64_t x1731 = INT64_MIN;

	t85 = (x1729-(x1730<<(x1731%x1732)));

	if (t85 != -1872) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x1782 = INT16_MAX;
	int64_t x1784 = -1LL;
	int32_t t86 = -5623;

	t86 = (x1781-(x1782<<(x1783%x1784)));

	if (t86 != -32764) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1793 = INT8_MAX;
	volatile uint16_t x1794 = 368U;
	uint32_t x1795 = 0U;
	int8_t x1796 = -1;

	t87 = (x1793-(x1794<<(x1795%x1796)));

	if (t87 != -241) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x1805 = -1;
	static int8_t x1806 = 1;
	uint8_t x1807 = UINT8_MAX;
	uint64_t x1808 = 23LLU;
	static int32_t t88 = -41224;

	t88 = (x1805-(x1806<<(x1807%x1808)));

	if (t88 != -5) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1837 = 57U;
	uint8_t x1839 = 3U;
	volatile int32_t t89 = 7440;

	t89 = (x1837-(x1838<<(x1839%x1840)));

	if (t89 != -1983) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1853 = -1LL;
	uint32_t x1854 = 7U;
	volatile int64_t t90 = 7124LL;

	t90 = (x1853-(x1854<<(x1855%x1856)));

	if (t90 != -8LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x1857 = INT32_MIN;
	int64_t x1858 = 1LL;
	volatile uint8_t x1859 = 12U;
	int8_t x1860 = INT8_MIN;
	int64_t t91 = 0LL;

	t91 = (x1857-(x1858<<(x1859%x1860)));

	if (t91 != -2147487744LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x1905 = UINT8_MAX;
	uint16_t x1906 = 649U;
	static volatile int32_t x1907 = 1;
	uint64_t x1908 = 1LLU;
	volatile int32_t t92 = -93575;

	t92 = (x1905-(x1906<<(x1907%x1908)));

	if (t92 != -394) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1919 = INT8_MIN;
	int8_t x1920 = INT8_MIN;
	volatile int32_t t93 = -76;

	t93 = (x1917-(x1918<<(x1919%x1920)));

	if (t93 != -1623) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x1954 = 488420;
	static uint8_t x1955 = 0U;
	int32_t t94 = 1;

	t94 = (x1953-(x1954<<(x1955%x1956)));

	if (t94 != -488345) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x1961 = -1;
	int8_t x1964 = 1;
	int32_t t95 = 64;

	t95 = (x1961-(x1962<<(x1963%x1964)));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1989 = 9U;
	int8_t x1990 = 53;
	static uint32_t x1991 = 2U;
	static int16_t x1992 = INT16_MIN;
	static int32_t t96 = 2110315;

	t96 = (x1989-(x1990<<(x1991%x1992)));

	if (t96 != -203) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x2013 = 4U;
	uint64_t x2014 = 38722082LLU;
	static int8_t x2015 = 0;
	uint64_t t97 = 12763719568584721LLU;

	t97 = (x2013-(x2014<<(x2015%x2016)));

	if (t97 != 18446744073670829538LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2021 = -818490;
	uint32_t x2022 = UINT32_MAX;
	int16_t x2023 = INT16_MIN;
	volatile int16_t x2024 = INT16_MIN;
	volatile uint32_t t98 = 12037U;

	t98 = (x2021-(x2022<<(x2023%x2024)));

	if (t98 != 4294148807U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x2041 = UINT16_MAX;
	int64_t x2044 = -1LL;
	volatile uint64_t t99 = 0LLU;

	t99 = (x2041-(x2042<<(x2043%x2044)));

	if (t99 != 18373904399558616971LLU) { NG(); } else { ; }
	
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

