#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x7 = 4729530078123865683LLU;
uint64_t x59 = 83476960LLU;
volatile uint64_t t2 = 385854LLU;
int8_t x88 = 1;
int16_t x105 = INT16_MIN;
uint32_t x360 = 1U;
int16_t x489 = INT16_MIN;
int64_t x490 = -1LL;
uint8_t x504 = 0U;
uint64_t t11 = 170772548LLU;
static uint16_t x747 = 12U;
int16_t x748 = 0;
volatile int64_t x788 = 1LL;
static volatile uint16_t x830 = 9U;
uint64_t x871 = UINT64_MAX;
int64_t x980 = 0LL;
uint8_t x1019 = UINT8_MAX;
static int16_t x1020 = 1;
int16_t x1145 = -24;
uint8_t x1148 = 8U;
int32_t x1182 = -1;
int8_t x1449 = INT8_MIN;
volatile int64_t x1450 = -13739321LL;
volatile int64_t t25 = -1237231LL;
int16_t x1582 = -1;
volatile int16_t x1584 = 0;
int16_t x1819 = 560;
int32_t x1894 = INT32_MIN;
int16_t x2613 = INT16_MAX;
uint8_t x2616 = 1U;
uint64_t x2677 = 30755825482LLU;
uint32_t t33 = 1U;
int16_t x2948 = 2;
uint32_t t35 = 7678U;
static uint64_t x3235 = 5927864LLU;
static volatile uint8_t x3236 = 0U;
uint64_t x3250 = UINT64_MAX;
uint64_t x3251 = 160332LLU;
static int32_t x3330 = -508964;
uint64_t t38 = 1724679766LLU;
uint32_t x3443 = UINT32_MAX;
volatile uint64_t t39 = 24206525285LLU;
int8_t x3589 = 27;
int16_t x3590 = INT16_MIN;
int64_t x3591 = INT64_MAX;
volatile int32_t t43 = -944188412;
int8_t x3913 = INT8_MIN;
int32_t x3914 = INT32_MIN;
int16_t x4125 = -1;
uint32_t x4127 = 2011U;
int16_t x4354 = INT16_MIN;
static int64_t x4357 = 540841968962482LL;
static volatile uint32_t x4359 = UINT32_MAX;
static volatile int64_t t49 = -153413664482290LL;
uint64_t x4862 = 51LLU;
int32_t x5430 = -472762;
static uint16_t x5432 = 4U;
uint16_t x5467 = UINT16_MAX;
int64_t x5509 = INT64_MAX;
int32_t x5510 = -6528;
int8_t x5512 = 0;
int64_t t60 = -76093280622362816LL;
uint16_t x5902 = 29599U;
int64_t x5903 = 13962LL;
volatile int64_t t64 = 1881708LL;
volatile uint64_t t66 = 1146883LLU;
uint16_t x6152 = 4U;
volatile int16_t x6188 = 10;
volatile int32_t t68 = -116077;
int16_t x6438 = -1;
volatile uint32_t x6552 = 1U;
volatile int8_t x6674 = -1;
int32_t x6675 = INT32_MAX;
uint8_t x6717 = 1U;
uint32_t x6720 = 13U;
static volatile int8_t x6810 = INT8_MAX;
uint16_t x6811 = UINT16_MAX;
int32_t t74 = 313371424;
volatile int32_t t75 = 554502321;
volatile uint16_t x6887 = 79U;
volatile uint64_t t77 = 2280421887885LLU;
int16_t x6905 = INT16_MAX;
static int32_t x6907 = INT32_MAX;
volatile uint64_t t79 = 9802LLU;
volatile uint8_t x7037 = 1U;
int8_t x7038 = 1;
volatile int32_t t81 = -1;
uint64_t x7151 = UINT64_MAX;
int32_t t83 = -67;
volatile uint8_t x7181 = 53U;
uint64_t t84 = 2915LLU;
int64_t x7471 = INT64_MAX;
volatile int32_t x7520 = 0;
uint64_t x7599 = 6026141534LLU;
uint32_t x7600 = 4U;
volatile uint8_t x7737 = 0U;
uint8_t x7944 = 0U;
uint8_t x7967 = 17U;
volatile int16_t x7988 = 0;
uint32_t x8183 = 119802U;
static uint64_t x8327 = 3965309649638448LLU;
int64_t x8437 = 126447149268178832LL;
int8_t x8440 = 0;
volatile int64_t t98 = 268867737384190LL;
int32_t x8502 = 18982;


void f0(void) {
	static int64_t x5 = -1LL;
	uint8_t x6 = UINT8_MAX;
	uint32_t x8 = 2U;
	uint64_t t0 = 15606LLU;

	t0 = (x5%(x6*(x7>>x8)));

	if (t0 != 5727469471622329127LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x41 = INT32_MIN;
	static int32_t x42 = -1;
	int32_t x43 = INT32_MAX;
	uint64_t x44 = 0LLU;
	static volatile int32_t t1 = -38496476;

	t1 = (x41%(x42*(x43>>x44)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x57 = 70U;
	int32_t x58 = INT32_MIN;
	static uint8_t x60 = 26U;

	t2 = (x57%(x58*(x59>>x60)));

	if (t2 != 70LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x85 = 1014686U;
	uint32_t x86 = 7833U;
	uint32_t x87 = 1829089U;
	volatile uint32_t t3 = 264152U;

	t3 = (x85%(x86*(x87>>x88)));

	if (t3 != 1014686U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x106 = UINT32_MAX;
	uint32_t x107 = 829869199U;
	uint16_t x108 = 21U;
	uint32_t t4 = 95198U;

	t4 = (x105%(x106*(x107>>x108)));

	if (t4 != 4294934528U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x241 = UINT64_MAX;
	static int16_t x242 = INT16_MIN;
	uint16_t x243 = UINT16_MAX;
	static uint8_t x244 = 3U;
	volatile uint64_t t5 = 2315553896975LLU;

	t5 = (x241%(x242*(x243>>x244)));

	if (t5 != 268402687LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x357 = 154680632U;
	static uint32_t x358 = 9983U;
	uint8_t x359 = UINT8_MAX;
	uint32_t t6 = 1U;

	t6 = (x357%(x358*(x359>>x360)));

	if (t6 != 4030U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x373 = -4340;
	static int8_t x374 = -4;
	int32_t x375 = INT32_MAX;
	int16_t x376 = 4;
	volatile int32_t t7 = 5;

	t7 = (x373%(x374*(x375>>x376)));

	if (t7 != -4340) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x453 = UINT64_MAX;
	static int16_t x454 = -88;
	static uint64_t x455 = UINT64_MAX;
	static int8_t x456 = 57;
	static uint64_t t8 = 142172LLU;

	t8 = (x453%(x454*(x455>>x456)));

	if (t8 != 11175LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x473 = 46031837509LLU;
	volatile int32_t x474 = -1;
	int64_t x475 = INT64_MAX;
	uint8_t x476 = 33U;
	uint64_t t9 = 619963LLU;

	t9 = (x473%(x474*(x475>>x476)));

	if (t9 != 46031837509LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x491 = INT64_MAX;
	uint16_t x492 = 17U;
	int64_t t10 = -60765LL;

	t10 = (x489%(x490*(x491>>x492)));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x501 = -1672189643685407LL;
	uint64_t x502 = 1008121822915689LLU;
	int64_t x503 = INT64_MAX;

	t11 = (x501%(x502*(x503>>x504)));

	if (t11 != 344054002145971LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x681 = INT16_MAX;
	uint32_t x682 = 16514440U;
	uint32_t x683 = 12U;
	volatile uint8_t x684 = 0U;
	volatile uint32_t t12 = 252066U;

	t12 = (x681%(x682*(x683>>x684)));

	if (t12 != 32767U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x745 = -1;
	uint64_t x746 = 3LLU;
	volatile uint64_t t13 = 1932LLU;

	t13 = (x745%(x746*(x747>>x748)));

	if (t13 != 15LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x777 = -3108106715LL;
	volatile int32_t x778 = INT32_MAX;
	int64_t x779 = INT64_MAX;
	static volatile int64_t x780 = 50LL;
	int64_t t14 = -251954854801874LL;

	t14 = (x777%(x778*(x779>>x780)));

	if (t14 != -3108106715LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x785 = 0U;
	int16_t x786 = INT16_MIN;
	int32_t x787 = 26;
	volatile int32_t t15 = -12568354;

	t15 = (x785%(x786*(x787>>x788)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x829 = 12456593192LLU;
	static uint32_t x831 = UINT32_MAX;
	int8_t x832 = 4;
	uint64_t t16 = 60LLU;

	t16 = (x829%(x830*(x831>>x832)));

	if (t16 != 376997717LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x869 = 34587379104607LL;
	volatile uint16_t x870 = 474U;
	uint8_t x872 = 0U;
	volatile uint64_t t17 = 157606235736429738LLU;

	t17 = (x869%(x870*(x871>>x872)));

	if (t17 != 34587379104607LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x977 = INT32_MAX;
	volatile int16_t x978 = INT16_MIN;
	uint8_t x979 = UINT8_MAX;
	volatile int32_t t18 = -2;

	t18 = (x977%(x978*(x979>>x980)));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1017 = -7;
	uint64_t x1018 = UINT64_MAX;
	uint64_t t19 = 5709990311169171LLU;

	t19 = (x1017%(x1018*(x1019>>x1020)));

	if (t19 != 120LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1037 = 647LLU;
	int8_t x1038 = INT8_MIN;
	volatile uint16_t x1039 = 51U;
	static int8_t x1040 = 1;
	volatile uint64_t t20 = 102213295420LLU;

	t20 = (x1037%(x1038*(x1039>>x1040)));

	if (t20 != 647LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1146 = 16012U;
	int16_t x1147 = 923;
	int32_t t21 = 655101351;

	t21 = (x1145%(x1146*(x1147>>x1148)));

	if (t21 != -24) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1181 = INT64_MIN;
	uint32_t x1183 = 3101U;
	int8_t x1184 = 0;
	int64_t t22 = -515LL;

	t22 = (x1181%(x1182*(x1183>>x1184)));

	if (t22 != -2152290198LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1217 = 19U;
	int8_t x1218 = INT8_MIN;
	int16_t x1219 = INT16_MAX;
	uint16_t x1220 = 9U;
	int32_t t23 = 6;

	t23 = (x1217%(x1218*(x1219>>x1220)));

	if (t23 != 19) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1325 = INT32_MAX;
	int8_t x1326 = 1;
	int64_t x1327 = INT64_MAX;
	static volatile int16_t x1328 = 1;
	int64_t t24 = 545LL;

	t24 = (x1325%(x1326*(x1327>>x1328)));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1451 = INT16_MAX;
	int8_t x1452 = 0;

	t25 = (x1449%(x1450*(x1451>>x1452)));

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1581 = INT8_MAX;
	uint32_t x1583 = 48458400U;
	static uint32_t t26 = 29234U;

	t26 = (x1581%(x1582*(x1583>>x1584)));

	if (t26 != 127U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1817 = INT32_MIN;
	int64_t x1818 = -13LL;
	uint8_t x1820 = 9U;
	volatile int64_t t27 = -73545471844770LL;

	t27 = (x1817%(x1818*(x1819>>x1820)));

	if (t27 != -11LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1893 = INT64_MIN;
	volatile uint32_t x1895 = UINT32_MAX;
	uint8_t x1896 = 20U;
	volatile int64_t t28 = -372419LL;

	t28 = (x1893%(x1894*(x1895>>x1896)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2005 = -7;
	uint16_t x2006 = UINT16_MAX;
	static volatile int32_t x2007 = INT32_MAX;
	static volatile uint16_t x2008 = 22U;
	int32_t t29 = -109925538;

	t29 = (x2005%(x2006*(x2007>>x2008)));

	if (t29 != -7) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2269 = INT16_MIN;
	volatile int8_t x2270 = INT8_MIN;
	static uint32_t x2271 = 421636694U;
	volatile uint32_t x2272 = 19U;
	volatile uint32_t t30 = 183537U;

	t30 = (x2269%(x2270*(x2271>>x2272)));

	if (t30 != 70144U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2614 = INT64_MIN;
	int8_t x2615 = 3;
	volatile int64_t t31 = 2617954903141LL;

	t31 = (x2613%(x2614*(x2615>>x2616)));

	if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2678 = -1LL;
	uint16_t x2679 = UINT16_MAX;
	uint8_t x2680 = 1U;
	volatile uint64_t t32 = 1226LLU;

	t32 = (x2677%(x2678*(x2679>>x2680)));

	if (t32 != 30755825482LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2857 = 21;
	int32_t x2858 = INT32_MAX;
	volatile uint32_t x2859 = 44871U;
	uint8_t x2860 = 1U;

	t33 = (x2857%(x2858*(x2859>>x2860)));

	if (t33 != 21U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2921 = UINT64_MAX;
	int32_t x2922 = -1;
	uint64_t x2923 = 69170760407623LLU;
	uint32_t x2924 = 27U;
	volatile uint64_t t34 = 7LLU;

	t34 = (x2921%(x2922*(x2923>>x2924)));

	if (t34 != 515361LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2945 = UINT16_MAX;
	static uint32_t x2946 = 21U;
	uint8_t x2947 = 5U;

	t35 = (x2945%(x2946*(x2947>>x2948)));

	if (t35 != 15U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x3233 = INT16_MIN;
	int16_t x3234 = 4801;
	uint64_t t36 = 51863245LLU;

	t36 = (x3233%(x3234*(x3235>>x3236)));

	if (t36 != 2173206800LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x3249 = 1U;
	uint16_t x3252 = 14U;
	uint64_t t37 = 56LLU;

	t37 = (x3249%(x3250*(x3251>>x3252)));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3329 = 1LLU;
	uint16_t x3331 = UINT16_MAX;
	uint32_t x3332 = 12U;

	t38 = (x3329%(x3330*(x3331>>x3332)));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x3441 = 35U;
	uint64_t x3442 = 4LLU;
	uint16_t x3444 = 1U;

	t39 = (x3441%(x3442*(x3443>>x3444)));

	if (t39 != 35LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x3485 = INT64_MIN;
	uint64_t x3486 = 385796219087165442LLU;
	int8_t x3487 = INT8_MAX;
	int8_t x3488 = 3;
	uint64_t t40 = 250896889547411LLU;

	t40 = (x3485%(x3486*(x3487>>x3488)));

	if (t40 != 3436428750547294178LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3521 = INT8_MIN;
	static uint64_t x3522 = 64587LLU;
	uint32_t x3523 = UINT32_MAX;
	uint64_t x3524 = 0LLU;
	volatile uint64_t t41 = 7936804071LLU;

	t41 = (x3521%(x3522*(x3523>>x3524)));

	if (t41 != 261868450943318LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x3592 = 24U;
	static volatile int64_t t42 = 117301525782783093LL;

	t42 = (x3589%(x3590*(x3591>>x3592)));

	if (t42 != 27LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x3689 = -1;
	static int16_t x3690 = INT16_MIN;
	uint8_t x3691 = 3U;
	int16_t x3692 = 0;

	t43 = (x3689%(x3690*(x3691>>x3692)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x3915 = 66LL;
	uint16_t x3916 = 5U;
	volatile int64_t t44 = 216771080896754071LL;

	t44 = (x3913%(x3914*(x3915>>x3916)));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3945 = -1;
	volatile int64_t x3946 = -241LL;
	uint64_t x3947 = UINT64_MAX;
	uint32_t x3948 = 11U;
	static uint64_t t45 = 255226590429LLU;

	t45 = (x3945%(x3946*(x3947>>x3948)));

	if (t45 != 2170735020392578830LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x4126 = 162;
	static uint8_t x4128 = 0U;
	volatile uint32_t t46 = 14U;

	t46 = (x4125%(x4126*(x4127>>x4128)));

	if (t46 != 183189U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x4165 = 12348205;
	uint64_t x4166 = UINT64_MAX;
	int32_t x4167 = 2427;
	volatile uint8_t x4168 = 2U;
	static uint64_t t47 = 41517LLU;

	t47 = (x4165%(x4166*(x4167>>x4168)));

	if (t47 != 12348205LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x4353 = INT8_MAX;
	int64_t x4355 = 278286739LL;
	uint8_t x4356 = 3U;
	volatile int64_t t48 = -40992LL;

	t48 = (x4353%(x4354*(x4355>>x4356)));

	if (t48 != 127LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x4358 = 1U;
	int32_t x4360 = 2;

	t49 = (x4357%(x4358*(x4359>>x4360)));

	if (t49 != 360201028LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x4469 = 14108787U;
	volatile uint64_t x4470 = UINT64_MAX;
	static uint8_t x4471 = UINT8_MAX;
	static int32_t x4472 = 5;
	uint64_t t50 = 2889LLU;

	t50 = (x4469%(x4470*(x4471>>x4472)));

	if (t50 != 14108787LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x4825 = INT8_MIN;
	int64_t x4826 = -88788893LL;
	volatile int32_t x4827 = INT32_MAX;
	int8_t x4828 = 5;
	int64_t t51 = -167475270886368304LL;

	t51 = (x4825%(x4826*(x4827>>x4828)));

	if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x4861 = 45454475U;
	uint8_t x4863 = 18U;
	uint32_t x4864 = 1U;
	static uint64_t t52 = 17812740368LLU;

	t52 = (x4861%(x4862*(x4863>>x4864)));

	if (t52 != 164LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x4889 = -36299380518LL;
	static uint32_t x4890 = UINT32_MAX;
	static uint8_t x4891 = 57U;
	static uint8_t x4892 = 2U;
	static volatile int64_t t53 = -35422LL;

	t53 = (x4889%(x4890*(x4891>>x4892)));

	if (t53 != -1939642262LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x5209 = 74580;
	static int32_t x5210 = 2075;
	static uint16_t x5211 = 23734U;
	int8_t x5212 = 14;
	int32_t t54 = 477;

	t54 = (x5209%(x5210*(x5211>>x5212)));

	if (t54 != 1955) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x5213 = INT32_MIN;
	int8_t x5214 = INT8_MIN;
	static int16_t x5215 = 616;
	int64_t x5216 = 1LL;
	volatile int32_t t55 = 278070;

	t55 = (x5213%(x5214*(x5215>>x5216)));

	if (t55 != -18944) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x5289 = 2113U;
	uint8_t x5290 = 15U;
	uint64_t x5291 = 648546356888923609LLU;
	volatile int8_t x5292 = 0;
	uint64_t t56 = 30880962341887LLU;

	t56 = (x5289%(x5290*(x5291>>x5292)));

	if (t56 != 2113LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x5409 = -1;
	uint32_t x5410 = 45168460U;
	uint32_t x5411 = UINT32_MAX;
	static uint8_t x5412 = 4U;
	uint32_t t57 = 241U;

	t57 = (x5409%(x5410*(x5411>>x5412)));

	if (t57 != 1118910283U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x5429 = INT64_MIN;
	uint32_t x5431 = 94U;
	volatile int64_t t58 = -8002020293LL;

	t58 = (x5429%(x5430*(x5431>>x5432)));

	if (t58 != -3606592150LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x5465 = 2U;
	static int16_t x5466 = INT16_MIN;
	uint8_t x5468 = 1U;
	int32_t t59 = -179;

	t59 = (x5465%(x5466*(x5467>>x5468)));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x5511 = 113U;

	t60 = (x5509%(x5510*(x5511>>x5512)));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x5561 = 12669358571320530LL;
	static int64_t x5562 = -1LL;
	static volatile uint16_t x5563 = 28U;
	volatile int8_t x5564 = 1;
	volatile int64_t t61 = 87068LL;

	t61 = (x5561%(x5562*(x5563>>x5564)));

	if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x5869 = 0U;
	int8_t x5870 = 31;
	volatile uint32_t x5871 = UINT32_MAX;
	int16_t x5872 = 0;
	volatile uint32_t t62 = 99U;

	t62 = (x5869%(x5870*(x5871>>x5872)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x5889 = INT16_MAX;
	int8_t x5890 = -1;
	static uint16_t x5891 = 87U;
	int32_t x5892 = 3;
	int32_t t63 = 32760123;

	t63 = (x5889%(x5890*(x5891>>x5892)));

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x5901 = -3;
	int32_t x5904 = 0;

	t64 = (x5901%(x5902*(x5903>>x5904)));

	if (t64 != -3LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5945 = INT8_MIN;
	static int8_t x5946 = -1;
	int8_t x5947 = 25;
	uint8_t x5948 = 0U;
	int32_t t65 = 62677319;

	t65 = (x5945%(x5946*(x5947>>x5948)));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x6013 = INT64_MAX;
	static volatile int16_t x6014 = INT16_MIN;
	uint64_t x6015 = 256826054098227LLU;
	volatile uint16_t x6016 = 23U;

	t66 = (x6013%(x6014*(x6015>>x6016)));

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x6149 = INT64_MIN;
	uint8_t x6150 = 1U;
	int64_t x6151 = INT64_MAX;
	static volatile int64_t t67 = 17601094582102LL;

	t67 = (x6149%(x6150*(x6151>>x6152)));

	if (t67 != -16LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x6185 = 3;
	volatile uint16_t x6186 = 6881U;
	static uint16_t x6187 = 7150U;

	t68 = (x6185%(x6186*(x6187>>x6188)));

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x6437 = 166790483570903LLU;
	int16_t x6439 = 15444;
	int8_t x6440 = 13;
	uint64_t t69 = 2168LLU;

	t69 = (x6437%(x6438*(x6439>>x6440)));

	if (t69 != 166790483570903LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x6549 = INT64_MIN;
	int32_t x6550 = 241;
	int64_t x6551 = 1322911LL;
	volatile int64_t t70 = -1515298790804213588LL;

	t70 = (x6549%(x6550*(x6551>>x6552)));

	if (t70 != -109339523LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x6597 = 57U;
	volatile uint16_t x6598 = 100U;
	int8_t x6599 = INT8_MAX;
	static uint64_t x6600 = 6LLU;
	volatile int32_t t71 = 11;

	t71 = (x6597%(x6598*(x6599>>x6600)));

	if (t71 != 57) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x6673 = -1;
	uint8_t x6676 = 13U;
	int32_t t72 = -858570151;

	t72 = (x6673%(x6674*(x6675>>x6676)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x6718 = -86232;
	uint64_t x6719 = UINT64_MAX;
	volatile uint64_t t73 = 1105370979LLU;

	t73 = (x6717%(x6718*(x6719>>x6720)));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x6809 = -1;
	uint32_t x6812 = 2U;

	t74 = (x6809%(x6810*(x6811>>x6812)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x6853 = -1;
	uint8_t x6854 = 12U;
	int16_t x6855 = INT16_MAX;
	uint8_t x6856 = 7U;

	t75 = (x6853%(x6854*(x6855>>x6856)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x6873 = 235226579207935LL;
	uint8_t x6874 = UINT8_MAX;
	int8_t x6875 = INT8_MAX;
	int16_t x6876 = 1;
	int64_t t76 = 5804600LL;

	t76 = (x6873%(x6874*(x6875>>x6876)));

	if (t76 != 15925LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x6885 = INT32_MAX;
	uint64_t x6886 = UINT64_MAX;
	int8_t x6888 = 0;

	t77 = (x6885%(x6886*(x6887>>x6888)));

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x6906 = INT8_MIN;
	uint16_t x6908 = 23U;
	int32_t t78 = -1;

	t78 = (x6905%(x6906*(x6907>>x6908)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x6917 = UINT64_MAX;
	volatile int16_t x6918 = INT16_MIN;
	uint16_t x6919 = 1163U;
	volatile uint8_t x6920 = 10U;

	t79 = (x6917%(x6918*(x6919>>x6920)));

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x6981 = INT8_MAX;
	static int16_t x6982 = INT16_MIN;
	uint32_t x6983 = 42U;
	volatile uint64_t x6984 = 1LLU;
	volatile uint32_t t80 = 33393U;

	t80 = (x6981%(x6982*(x6983>>x6984)));

	if (t80 != 127U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x7039 = 353;
	uint8_t x7040 = 0U;

	t81 = (x7037%(x7038*(x7039>>x7040)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x7149 = INT64_MAX;
	int32_t x7150 = INT32_MIN;
	uint8_t x7152 = 7U;
	uint64_t t82 = 124LLU;

	t82 = (x7149%(x7150*(x7151>>x7152)));

	if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x7169 = INT8_MIN;
	static int32_t x7170 = -1;
	int32_t x7171 = INT32_MAX;
	static uint8_t x7172 = 2U;

	t83 = (x7169%(x7170*(x7171>>x7172)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x7182 = INT8_MAX;
	volatile uint64_t x7183 = 2682LLU;
	static uint16_t x7184 = 0U;

	t84 = (x7181%(x7182*(x7183>>x7184)));

	if (t84 != 53LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x7221 = 359U;
	uint32_t x7222 = UINT32_MAX;
	uint16_t x7223 = 20583U;
	int8_t x7224 = 4;
	uint32_t t85 = 287393472U;

	t85 = (x7221%(x7222*(x7223>>x7224)));

	if (t85 != 359U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x7297 = 10654U;
	int32_t x7298 = -25814;
	uint8_t x7299 = UINT8_MAX;
	int8_t x7300 = 2;
	int32_t t86 = -907446979;

	t86 = (x7297%(x7298*(x7299>>x7300)));

	if (t86 != 10654) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x7469 = INT32_MIN;
	uint64_t x7470 = 15386606770315735LLU;
	static uint16_t x7472 = 3U;
	volatile uint64_t t87 = 1815771238653542LLU;

	t87 = (x7469%(x7470*(x7471>>x7472)));

	if (t87 != 2336616220606841774LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x7517 = 0;
	uint64_t x7518 = UINT64_MAX;
	uint64_t x7519 = 3798933235934879431LLU;
	volatile uint64_t t88 = 14LLU;

	t88 = (x7517%(x7518*(x7519>>x7520)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x7597 = UINT16_MAX;
	volatile int8_t x7598 = -25;
	volatile uint64_t t89 = 33523901937881LLU;

	t89 = (x7597%(x7598*(x7599>>x7600)));

	if (t89 != 65535LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x7738 = INT32_MIN;
	uint64_t x7739 = UINT64_MAX;
	static uint8_t x7740 = 4U;
	volatile uint64_t t90 = 15302648647524LLU;

	t90 = (x7737%(x7738*(x7739>>x7740)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x7941 = -1LL;
	uint16_t x7942 = UINT16_MAX;
	uint8_t x7943 = 14U;
	int64_t t91 = -3810081610921LL;

	t91 = (x7941%(x7942*(x7943>>x7944)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x7965 = INT8_MAX;
	int16_t x7966 = INT16_MIN;
	int8_t x7968 = 0;
	volatile int32_t t92 = -8720601;

	t92 = (x7965%(x7966*(x7967>>x7968)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x7985 = INT32_MAX;
	static int8_t x7986 = INT8_MIN;
	uint64_t x7987 = 3800840924380773375LLU;
	volatile uint64_t t93 = 243749LLU;

	t93 = (x7985%(x7986*(x7987>>x7988)));

	if (t93 != 2147483647LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x8181 = 11U;
	int64_t x8182 = 2944LL;
	uint16_t x8184 = 2U;
	static volatile int64_t t94 = 8496968668135540LL;

	t94 = (x8181%(x8182*(x8183>>x8184)));

	if (t94 != 11LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x8285 = -1;
	int16_t x8286 = -2564;
	static volatile int32_t x8287 = INT32_MAX;
	uint8_t x8288 = 24U;
	volatile int32_t t95 = 0;

	t95 = (x8285%(x8286*(x8287>>x8288)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x8325 = UINT64_MAX;
	volatile uint8_t x8326 = UINT8_MAX;
	uint8_t x8328 = 7U;
	uint64_t t96 = 428000018LLU;

	t96 = (x8325%(x8326*(x8327>>x8328)));

	if (t96 != 1083932022486615LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x8385 = INT16_MIN;
	int8_t x8386 = -1;
	volatile uint8_t x8387 = 21U;
	int8_t x8388 = 1;
	volatile int32_t t97 = 1;

	t97 = (x8385%(x8386*(x8387>>x8388)));

	if (t97 != -8) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x8438 = INT16_MAX;
	static uint32_t x8439 = UINT32_MAX;

	t98 = (x8437%(x8438*(x8439>>x8440)));

	if (t98 != 3274562477LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x8501 = UINT16_MAX;
	uint32_t x8503 = 15451U;
	static uint8_t x8504 = 4U;
	uint32_t t99 = 889608U;

	t99 = (x8501%(x8502*(x8503>>x8504)));

	if (t99 != 65535U) { NG(); } else { ; }
	
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

