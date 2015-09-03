#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x21 = INT8_MAX;
static int8_t x49 = INT8_MIN;
int32_t x292 = 0;
volatile int32_t t3 = -206997;
int8_t x392 = 28;
volatile int32_t t5 = 20445;
int8_t x429 = INT8_MAX;
uint32_t x431 = UINT32_MAX;
int16_t x432 = 4;
int16_t x442 = INT16_MAX;
volatile int16_t x477 = 4227;
static int32_t t8 = 75;
int64_t x709 = INT64_MIN;
int16_t x711 = INT16_MAX;
volatile int64_t t9 = INT64_MIN;
uint32_t x952 = 7U;
static int64_t t11 = 34147956753863LL;
uint32_t x1211 = 84369910U;
uint16_t x1212 = 30U;
int32_t t12 = -23;
uint32_t t13 = UINT32_MAX;
uint32_t x1534 = 2U;
int16_t x1535 = 969;
int32_t t15 = -117470670;
int8_t x1584 = 17;
uint8_t x2051 = 0U;
static int32_t t18 = -14;
static int16_t x2070 = INT16_MIN;
static uint8_t x2106 = 1U;
uint8_t x2107 = UINT8_MAX;
int8_t x2108 = 2;
int16_t x2194 = -1;
int8_t x2597 = -1;
static volatile int16_t x2605 = INT16_MIN;
volatile int64_t x2762 = INT64_MIN;
int32_t x2763 = INT32_MAX;
static volatile int64_t x2774 = -1LL;
static volatile int64_t x2914 = INT64_MIN;
int64_t x2916 = 6LL;
uint8_t x3064 = 7U;
uint64_t t31 = 23403872LLU;
static volatile uint64_t x3133 = UINT64_MAX;
int8_t x3728 = 6;
static uint64_t x3733 = 27379944LLU;
int16_t x3735 = INT16_MAX;
volatile uint64_t t37 = 14869838362894LLU;
int8_t x4138 = 6;
int32_t x4553 = INT32_MAX;
volatile int32_t t45 = -26568;
volatile int32_t t46 = 113116529;
static int16_t x5139 = 8767;
static int64_t t49 = INT64_MIN;
uint8_t x5513 = UINT8_MAX;
static int64_t x5620 = 0LL;
int16_t x5674 = INT16_MAX;
uint8_t x5676 = 0U;
uint16_t x5771 = 0U;
int8_t x5772 = 0;
uint16_t x5859 = UINT16_MAX;
static uint8_t x5860 = 31U;
volatile int64_t t59 = 468905LL;
volatile int32_t t60 = INT32_MIN;
volatile int64_t x6001 = INT64_MIN;
int8_t x6002 = -1;
static uint8_t x6021 = 90U;
int32_t t63 = 58;
int32_t x6287 = 26099;
static int8_t x6298 = INT8_MIN;
volatile uint16_t x6299 = 3050U;
int8_t x6335 = INT8_MAX;
int8_t x6336 = 3;
static int8_t x6476 = 2;
static volatile uint32_t x6537 = 9409050U;
volatile uint32_t t72 = 34586U;
volatile uint8_t x6658 = 0U;
uint64_t t75 = 1191306318810520257LLU;
int64_t x6849 = INT64_MAX;
static uint8_t x6851 = 6U;
static volatile int64_t t76 = INT64_MAX;
volatile uint32_t x6929 = UINT32_MAX;
int16_t x7014 = -1;
int16_t x7168 = 4;
int32_t t83 = 1;
int8_t x7489 = -1;
int16_t x7490 = INT16_MIN;
uint8_t x7591 = 0U;
volatile uint16_t x7594 = 3926U;
volatile int64_t x7673 = -6LL;
uint8_t x7675 = 0U;
uint16_t x7764 = 0U;
int32_t t92 = 117331464;
uint32_t x8021 = UINT32_MAX;
int32_t t96 = -204;
uint32_t x8488 = 1U;
volatile int16_t x8745 = -1;


void f0(void) {
	int16_t x22 = -1;
	volatile int8_t x23 = INT8_MAX;
	uint64_t x24 = 20LLU;
	volatile int32_t t0 = -224;

	t0 = (x21/(x22<=(x23>>x24)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x50 = 1;
	static int16_t x51 = 12;
	static int8_t x52 = 1;
	static int32_t t1 = 471314;

	t1 = (x49/(x50<=(x51>>x52)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x177 = INT16_MIN;
	static int8_t x178 = -31;
	int32_t x179 = INT32_MAX;
	uint8_t x180 = 18U;
	volatile int32_t t2 = 9622136;

	t2 = (x177/(x178<=(x179>>x180)));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x289 = -1;
	int32_t x290 = -40150;
	int8_t x291 = INT8_MAX;

	t3 = (x289/(x290<=(x291>>x292)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x317 = -486983034689205LL;
	volatile uint16_t x318 = 2U;
	uint64_t x319 = UINT64_MAX;
	static int16_t x320 = 1;
	int64_t t4 = 5658645LL;

	t4 = (x317/(x318<=(x319>>x320)));

	if (t4 != -486983034689205LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x389 = -26;
	volatile uint8_t x390 = 1U;
	static volatile uint32_t x391 = UINT32_MAX;

	t5 = (x389/(x390<=(x391>>x392)));

	if (t5 != -26) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x430 = UINT16_MAX;
	volatile int32_t t6 = 6;

	t6 = (x429/(x430<=(x431>>x432)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x441 = INT64_MIN;
	uint64_t x443 = UINT64_MAX;
	uint8_t x444 = 19U;
	volatile int64_t t7 = INT64_MIN;

	t7 = (x441/(x442<=(x443>>x444)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x478 = UINT32_MAX;
	uint64_t x479 = 326416670390223LLU;
	static int16_t x480 = 14;

	t8 = (x477/(x478<=(x479>>x480)));

	if (t8 != 4227) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x710 = INT8_MIN;
	volatile uint16_t x712 = 0U;

	t9 = (x709/(x710<=(x711>>x712)));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x865 = INT16_MAX;
	int64_t x866 = INT64_MIN;
	volatile uint8_t x867 = 5U;
	volatile uint8_t x868 = 20U;
	volatile int32_t t10 = 1389144;

	t10 = (x865/(x866<=(x867>>x868)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x949 = -4474975LL;
	static int32_t x950 = 1;
	static volatile uint64_t x951 = 15907LLU;

	t11 = (x949/(x950<=(x951>>x952)));

	if (t11 != -4474975LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x1209 = -1;
	int64_t x1210 = -1LL;

	t12 = (x1209/(x1210<=(x1211>>x1212)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x1281 = UINT32_MAX;
	uint32_t x1282 = 1U;
	volatile int64_t x1283 = 3570843LL;
	volatile int16_t x1284 = 9;

	t13 = (x1281/(x1282<=(x1283>>x1284)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x1461 = 0U;
	volatile uint16_t x1462 = UINT16_MAX;
	uint64_t x1463 = UINT64_MAX;
	volatile int8_t x1464 = 12;
	volatile int32_t t14 = -10835741;

	t14 = (x1461/(x1462<=(x1463>>x1464)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1533 = 20U;
	uint16_t x1536 = 1U;

	t15 = (x1533/(x1534<=(x1535>>x1536)));

	if (t15 != 20) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1581 = INT8_MIN;
	static int8_t x1582 = INT8_MAX;
	int32_t x1583 = 57636226;
	static volatile int32_t t16 = 293419018;

	t16 = (x1581/(x1582<=(x1583>>x1584)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1721 = -814625;
	int32_t x1722 = INT32_MIN;
	static int8_t x1723 = INT8_MAX;
	volatile uint64_t x1724 = 8LLU;
	int32_t t17 = 3056447;

	t17 = (x1721/(x1722<=(x1723>>x1724)));

	if (t17 != -814625) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x2049 = -1;
	int8_t x2050 = INT8_MIN;
	uint8_t x2052 = 7U;

	t18 = (x2049/(x2050<=(x2051>>x2052)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x2069 = 394U;
	static int8_t x2071 = 25;
	volatile uint8_t x2072 = 0U;
	volatile uint32_t t19 = 984027U;

	t19 = (x2069/(x2070<=(x2071>>x2072)));

	if (t19 != 394U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x2105 = INT64_MAX;
	int64_t t20 = INT64_MAX;

	t20 = (x2105/(x2106<=(x2107>>x2108)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x2169 = UINT32_MAX;
	static int16_t x2170 = -5442;
	volatile uint8_t x2171 = 3U;
	uint16_t x2172 = 5U;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x2169/(x2170<=(x2171>>x2172)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x2193 = -1;
	int64_t x2195 = INT64_MAX;
	volatile uint16_t x2196 = 33U;
	volatile int32_t t22 = 302279820;

	t22 = (x2193/(x2194<=(x2195>>x2196)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x2433 = 0U;
	uint64_t x2434 = 13099LLU;
	uint32_t x2435 = 100190681U;
	uint16_t x2436 = 3U;
	volatile int32_t t23 = -1038149;

	t23 = (x2433/(x2434<=(x2435>>x2436)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x2449 = 59;
	int8_t x2450 = 0;
	int64_t x2451 = INT64_MAX;
	volatile uint16_t x2452 = 30U;
	volatile int32_t t24 = -25;

	t24 = (x2449/(x2450<=(x2451>>x2452)));

	if (t24 != 59) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2598 = -6;
	uint8_t x2599 = 19U;
	int8_t x2600 = 27;
	int32_t t25 = 775;

	t25 = (x2597/(x2598<=(x2599>>x2600)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x2606 = 6U;
	uint16_t x2607 = 1504U;
	int8_t x2608 = 0;
	volatile int32_t t26 = 621780;

	t26 = (x2605/(x2606<=(x2607>>x2608)));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x2693 = INT32_MIN;
	static int64_t x2694 = -23151835648099976LL;
	int64_t x2695 = INT64_MAX;
	uint8_t x2696 = 1U;
	int32_t t27 = INT32_MIN;

	t27 = (x2693/(x2694<=(x2695>>x2696)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2761 = 1U;
	uint8_t x2764 = 3U;
	volatile int32_t t28 = 4625670;

	t28 = (x2761/(x2762<=(x2763>>x2764)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2773 = INT8_MAX;
	uint32_t x2775 = 0U;
	int8_t x2776 = 7;
	volatile int32_t t29 = 4;

	t29 = (x2773/(x2774<=(x2775>>x2776)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2913 = 33LL;
	int32_t x2915 = 25108;
	volatile int64_t t30 = 9309746906538LL;

	t30 = (x2913/(x2914<=(x2915>>x2916)));

	if (t30 != 33LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x3061 = 71639570153947LLU;
	int64_t x3062 = INT64_MIN;
	static uint32_t x3063 = 2145964354U;

	t31 = (x3061/(x3062<=(x3063>>x3064)));

	if (t31 != 71639570153947LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x3134 = 12047U;
	uint32_t x3135 = UINT32_MAX;
	int16_t x3136 = 1;
	uint64_t t32 = UINT64_MAX;

	t32 = (x3133/(x3134<=(x3135>>x3136)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x3197 = -1;
	static int8_t x3198 = INT8_MAX;
	int64_t x3199 = INT64_MAX;
	uint8_t x3200 = 7U;
	int32_t t33 = -9634522;

	t33 = (x3197/(x3198<=(x3199>>x3200)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x3341 = 5;
	static int16_t x3342 = INT16_MIN;
	int16_t x3343 = 2;
	uint8_t x3344 = 8U;
	static volatile int32_t t34 = 3064168;

	t34 = (x3341/(x3342<=(x3343>>x3344)));

	if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x3617 = INT32_MAX;
	int32_t x3618 = INT32_MIN;
	uint16_t x3619 = 2U;
	static uint8_t x3620 = 2U;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x3617/(x3618<=(x3619>>x3620)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x3725 = -55862406562547LL;
	volatile uint8_t x3726 = 0U;
	static int16_t x3727 = 1921;
	static int64_t t36 = 13451342LL;

	t36 = (x3725/(x3726<=(x3727>>x3728)));

	if (t36 != -55862406562547LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x3734 = -1;
	int8_t x3736 = 1;

	t37 = (x3733/(x3734<=(x3735>>x3736)));

	if (t37 != 27379944LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x3889 = -95713319;
	int64_t x3890 = INT64_MIN;
	uint16_t x3891 = 7014U;
	uint8_t x3892 = 3U;
	int32_t t38 = -81729;

	t38 = (x3889/(x3890<=(x3891>>x3892)));

	if (t38 != -95713319) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x3905 = INT8_MAX;
	static int8_t x3906 = INT8_MAX;
	static uint16_t x3907 = UINT16_MAX;
	volatile uint8_t x3908 = 0U;
	static volatile int32_t t39 = 32422;

	t39 = (x3905/(x3906<=(x3907>>x3908)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x3953 = INT64_MAX;
	volatile int16_t x3954 = INT16_MIN;
	volatile uint16_t x3955 = 4607U;
	int8_t x3956 = 2;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x3953/(x3954<=(x3955>>x3956)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x4121 = UINT32_MAX;
	int8_t x4122 = -1;
	int64_t x4123 = 19884LL;
	uint8_t x4124 = 0U;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x4121/(x4122<=(x4123>>x4124)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x4137 = 319U;
	static uint64_t x4139 = UINT64_MAX;
	volatile uint8_t x4140 = 25U;
	static volatile int32_t t42 = -732703;

	t42 = (x4137/(x4138<=(x4139>>x4140)));

	if (t42 != 319) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x4533 = UINT64_MAX;
	static int64_t x4534 = INT64_MIN;
	uint8_t x4535 = 12U;
	volatile uint8_t x4536 = 3U;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x4533/(x4534<=(x4535>>x4536)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x4554 = -1;
	uint8_t x4555 = UINT8_MAX;
	uint8_t x4556 = 29U;
	int32_t t44 = INT32_MAX;

	t44 = (x4553/(x4554<=(x4555>>x4556)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x4641 = INT16_MIN;
	int16_t x4642 = -11532;
	static int32_t x4643 = INT32_MAX;
	static uint8_t x4644 = 0U;

	t45 = (x4641/(x4642<=(x4643>>x4644)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x4689 = 347025499;
	int16_t x4690 = -1;
	int16_t x4691 = INT16_MAX;
	uint32_t x4692 = 26U;

	t46 = (x4689/(x4690<=(x4691>>x4692)));

	if (t46 != 347025499) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x4769 = UINT16_MAX;
	uint64_t x4770 = 120LLU;
	static int64_t x4771 = 2360823163952415LL;
	int8_t x4772 = 1;
	int32_t t47 = -3501404;

	t47 = (x4769/(x4770<=(x4771>>x4772)));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x4849 = 2U;
	int16_t x4850 = INT16_MIN;
	static volatile uint8_t x4851 = 3U;
	static uint16_t x4852 = 16U;
	volatile int32_t t48 = -492461862;

	t48 = (x4849/(x4850<=(x4851>>x4852)));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x5137 = INT64_MIN;
	int64_t x5138 = INT64_MIN;
	volatile uint32_t x5140 = 1U;

	t49 = (x5137/(x5138<=(x5139>>x5140)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x5169 = UINT8_MAX;
	volatile uint8_t x5170 = 110U;
	int64_t x5171 = INT64_MAX;
	uint32_t x5172 = 53U;
	volatile int32_t t50 = 3;

	t50 = (x5169/(x5170<=(x5171>>x5172)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x5173 = -1;
	int64_t x5174 = INT64_MIN;
	volatile uint8_t x5175 = UINT8_MAX;
	volatile uint16_t x5176 = 0U;
	volatile int32_t t51 = 57172;

	t51 = (x5173/(x5174<=(x5175>>x5176)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x5421 = INT16_MIN;
	int32_t x5422 = -953580;
	volatile int8_t x5423 = INT8_MAX;
	uint16_t x5424 = 1U;
	volatile int32_t t52 = 67;

	t52 = (x5421/(x5422<=(x5423>>x5424)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x5501 = 701LLU;
	int8_t x5502 = 0;
	volatile uint8_t x5503 = 2U;
	uint8_t x5504 = 4U;
	uint64_t t53 = 181712836073623033LLU;

	t53 = (x5501/(x5502<=(x5503>>x5504)));

	if (t53 != 701LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x5514 = -1;
	int16_t x5515 = 14745;
	volatile int8_t x5516 = 23;
	int32_t t54 = -178214;

	t54 = (x5513/(x5514<=(x5515>>x5516)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x5593 = INT64_MAX;
	static int16_t x5594 = -1;
	int32_t x5595 = INT32_MAX;
	uint16_t x5596 = 15U;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x5593/(x5594<=(x5595>>x5596)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x5617 = -1;
	static int16_t x5618 = 4;
	static uint16_t x5619 = UINT16_MAX;
	volatile int32_t t56 = -502547;

	t56 = (x5617/(x5618<=(x5619>>x5620)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x5673 = 180498287LLU;
	static int32_t x5675 = 288497072;
	uint64_t t57 = 5477512538686541851LLU;

	t57 = (x5673/(x5674<=(x5675>>x5676)));

	if (t57 != 180498287LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x5769 = INT8_MIN;
	int16_t x5770 = INT16_MIN;
	static volatile int32_t t58 = -16031448;

	t58 = (x5769/(x5770<=(x5771>>x5772)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x5857 = 1842354LL;
	volatile int32_t x5858 = INT32_MIN;

	t59 = (x5857/(x5858<=(x5859>>x5860)));

	if (t59 != 1842354LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x5917 = INT32_MIN;
	int32_t x5918 = -1;
	volatile int64_t x5919 = INT64_MAX;
	volatile int8_t x5920 = 1;

	t60 = (x5917/(x5918<=(x5919>>x5920)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x6003 = 141;
	uint16_t x6004 = 2U;
	int64_t t61 = INT64_MIN;

	t61 = (x6001/(x6002<=(x6003>>x6004)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x6022 = 1U;
	int32_t x6023 = 74329270;
	volatile int16_t x6024 = 1;
	volatile int32_t t62 = -7;

	t62 = (x6021/(x6022<=(x6023>>x6024)));

	if (t62 != 90) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x6089 = -1;
	volatile int16_t x6090 = 3;
	static uint16_t x6091 = 367U;
	int16_t x6092 = 0;

	t63 = (x6089/(x6090<=(x6091>>x6092)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x6129 = 2;
	uint8_t x6130 = UINT8_MAX;
	uint64_t x6131 = 113495879899206031LLU;
	uint8_t x6132 = 1U;
	int32_t t64 = 238942;

	t64 = (x6129/(x6130<=(x6131>>x6132)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x6285 = 27781545U;
	int64_t x6286 = 2LL;
	static volatile int32_t x6288 = 1;
	uint32_t t65 = 903716466U;

	t65 = (x6285/(x6286<=(x6287>>x6288)));

	if (t65 != 27781545U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x6297 = -1LL;
	uint16_t x6300 = 1U;
	static int64_t t66 = -6594875LL;

	t66 = (x6297/(x6298<=(x6299>>x6300)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x6333 = 1333362464019658LLU;
	int32_t x6334 = INT32_MIN;
	uint64_t t67 = 212LLU;

	t67 = (x6333/(x6334<=(x6335>>x6336)));

	if (t67 != 1333362464019658LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x6385 = 498;
	volatile int32_t x6386 = INT32_MIN;
	uint8_t x6387 = 7U;
	int16_t x6388 = 1;
	int32_t t68 = 118837458;

	t68 = (x6385/(x6386<=(x6387>>x6388)));

	if (t68 != 498) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x6441 = UINT16_MAX;
	volatile uint16_t x6442 = 8747U;
	static uint16_t x6443 = UINT16_MAX;
	int32_t x6444 = 0;
	volatile int32_t t69 = -393236;

	t69 = (x6441/(x6442<=(x6443>>x6444)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x6473 = INT64_MIN;
	int64_t x6474 = -84096006654956160LL;
	int32_t x6475 = INT32_MAX;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x6473/(x6474<=(x6475>>x6476)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x6481 = UINT32_MAX;
	int32_t x6482 = INT32_MIN;
	int32_t x6483 = INT32_MAX;
	uint64_t x6484 = 0LLU;
	uint32_t t71 = UINT32_MAX;

	t71 = (x6481/(x6482<=(x6483>>x6484)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x6538 = INT16_MAX;
	uint64_t x6539 = UINT64_MAX;
	int32_t x6540 = 6;

	t72 = (x6537/(x6538<=(x6539>>x6540)));

	if (t72 != 9409050U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x6593 = -1LL;
	uint8_t x6594 = 34U;
	static int32_t x6595 = 1774059;
	int16_t x6596 = 0;
	static volatile int64_t t73 = -3LL;

	t73 = (x6593/(x6594<=(x6595>>x6596)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x6657 = 237657429436LLU;
	int16_t x6659 = INT16_MAX;
	static int64_t x6660 = 0LL;
	volatile uint64_t t74 = 2607028910LLU;

	t74 = (x6657/(x6658<=(x6659>>x6660)));

	if (t74 != 237657429436LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x6749 = 1538984882760LLU;
	static int32_t x6750 = INT32_MIN;
	uint8_t x6751 = UINT8_MAX;
	int16_t x6752 = 0;

	t75 = (x6749/(x6750<=(x6751>>x6752)));

	if (t75 != 1538984882760LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x6850 = INT64_MIN;
	int32_t x6852 = 0;

	t76 = (x6849/(x6850<=(x6851>>x6852)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x6853 = -5681481871LL;
	uint16_t x6854 = 106U;
	uint32_t x6855 = 1056U;
	int16_t x6856 = 1;
	int64_t t77 = -23LL;

	t77 = (x6853/(x6854<=(x6855>>x6856)));

	if (t77 != -5681481871LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x6930 = INT64_MAX;
	int64_t x6931 = INT64_MAX;
	uint8_t x6932 = 0U;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (x6929/(x6930<=(x6931>>x6932)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x6961 = INT16_MAX;
	int8_t x6962 = INT8_MIN;
	int16_t x6963 = 0;
	volatile uint32_t x6964 = 1U;
	static int32_t t79 = 2687;

	t79 = (x6961/(x6962<=(x6963>>x6964)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x6997 = 9616116;
	volatile uint8_t x6998 = 17U;
	static uint32_t x6999 = UINT32_MAX;
	static int32_t x7000 = 3;
	int32_t t80 = 0;

	t80 = (x6997/(x6998<=(x6999>>x7000)));

	if (t80 != 9616116) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x7013 = -7;
	uint8_t x7015 = 7U;
	int16_t x7016 = 22;
	volatile int32_t t81 = 16363;

	t81 = (x7013/(x7014<=(x7015>>x7016)));

	if (t81 != -7) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x7161 = -235132542378143975LL;
	static int8_t x7162 = -1;
	int32_t x7163 = 17034373;
	volatile uint8_t x7164 = 3U;
	volatile int64_t t82 = -1LL;

	t82 = (x7161/(x7162<=(x7163>>x7164)));

	if (t82 != -235132542378143975LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x7165 = -1;
	volatile int16_t x7166 = 1;
	static uint16_t x7167 = 234U;

	t83 = (x7165/(x7166<=(x7167>>x7168)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x7349 = -6735;
	volatile int32_t x7350 = -1;
	volatile int8_t x7351 = 2;
	uint8_t x7352 = 12U;
	int32_t t84 = -10508381;

	t84 = (x7349/(x7350<=(x7351>>x7352)));

	if (t84 != -6735) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x7491 = UINT8_MAX;
	int8_t x7492 = 1;
	static int32_t t85 = 1;

	t85 = (x7489/(x7490<=(x7491>>x7492)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x7513 = INT32_MAX;
	int8_t x7514 = -1;
	static int32_t x7515 = INT32_MAX;
	uint8_t x7516 = 0U;
	static int32_t t86 = INT32_MAX;

	t86 = (x7513/(x7514<=(x7515>>x7516)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x7589 = UINT64_MAX;
	int32_t x7590 = INT32_MIN;
	int16_t x7592 = 1;
	static volatile uint64_t t87 = UINT64_MAX;

	t87 = (x7589/(x7590<=(x7591>>x7592)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x7593 = 9;
	int64_t x7595 = 5570298605760LL;
	int8_t x7596 = 5;
	volatile int32_t t88 = -2873;

	t88 = (x7593/(x7594<=(x7595>>x7596)));

	if (t88 != 9) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x7653 = 49LLU;
	uint8_t x7654 = 108U;
	int32_t x7655 = INT32_MAX;
	volatile uint8_t x7656 = 23U;
	uint64_t t89 = 12402892309LLU;

	t89 = (x7653/(x7654<=(x7655>>x7656)));

	if (t89 != 49LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x7674 = -1;
	uint64_t x7676 = 2LLU;
	int64_t t90 = -23206386207528254LL;

	t90 = (x7673/(x7674<=(x7675>>x7676)));

	if (t90 != -6LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x7761 = INT8_MIN;
	int8_t x7762 = -1;
	int8_t x7763 = INT8_MAX;
	int32_t t91 = -467;

	t91 = (x7761/(x7762<=(x7763>>x7764)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x7773 = INT8_MIN;
	int16_t x7774 = 1;
	static int32_t x7775 = 81933;
	uint8_t x7776 = 14U;

	t92 = (x7773/(x7774<=(x7775>>x7776)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x7969 = 368395002U;
	int64_t x7970 = INT64_MIN;
	uint8_t x7971 = 3U;
	int8_t x7972 = 0;
	volatile uint32_t t93 = 6U;

	t93 = (x7969/(x7970<=(x7971>>x7972)));

	if (t93 != 368395002U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x8022 = -1;
	volatile uint16_t x8023 = 10260U;
	int32_t x8024 = 0;
	uint32_t t94 = UINT32_MAX;

	t94 = (x8021/(x8022<=(x8023>>x8024)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x8165 = INT64_MAX;
	int8_t x8166 = INT8_MIN;
	static int64_t x8167 = 874598567366634042LL;
	int8_t x8168 = 1;
	static int64_t t95 = INT64_MAX;

	t95 = (x8165/(x8166<=(x8167>>x8168)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x8241 = 12U;
	uint32_t x8242 = 468050U;
	int64_t x8243 = 41278212715LL;
	int8_t x8244 = 5;

	t96 = (x8241/(x8242<=(x8243>>x8244)));

	if (t96 != 12) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x8485 = INT8_MIN;
	int64_t x8486 = -1LL;
	static int32_t x8487 = 85;
	int32_t t97 = 25471;

	t97 = (x8485/(x8486<=(x8487>>x8488)));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x8746 = INT64_MIN;
	volatile uint16_t x8747 = 13U;
	int16_t x8748 = 10;
	static volatile int32_t t98 = -107977;

	t98 = (x8745/(x8746<=(x8747>>x8748)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x8765 = -1;
	volatile int16_t x8766 = -1;
	uint16_t x8767 = 45U;
	uint8_t x8768 = 22U;
	volatile int32_t t99 = -3257972;

	t99 = (x8765/(x8766<=(x8767>>x8768)));

	if (t99 != -1) { NG(); } else { ; }
	
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

